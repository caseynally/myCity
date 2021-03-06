<?php
/**
 * @copyright 2015 City of Bloomington, Indiana
 * @license http://www.gnu.org/licenses/agpl.txt GNU/AGPL, see LICENSE.txt
 * @author Cliff Ingham <inghamn@bloomington.in.gov>
 */
use Blossom\Classes\View;
use Blossom\Classes\Url;

$this->addToAsset('scripts', BASE_URI.'/js/menuLauncher.js');
?>

<?php include(ASSETS_HOME."/html/cob-alphaHeader.html"); ?>
<header class="siteHeader">
    <div class="siteHeader-container">
        <?php
            $this->addToAsset('scripts', BASE_URI.'/js/menuLauncher.js');
            include(ASSETS_HOME.'/html/cob-siteHeader-logo.html');
        ?>
    </div>
</header>
<header class="cob-pageHeader">
    <?= $this->includeBlocks('pageHeader'); ?>
    <?= $this->includeBlocks('pageOverview'); ?>
</header>
