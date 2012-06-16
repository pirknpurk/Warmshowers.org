<?php
/**
 * @file user-profile.tpl.php
 *
 * warmshowers_zen version of user profile theming.
 *
 * Available variables
 * - $uid
 * - $username
 * - $fullname
 * - $homephone
 * - $mobilephone
 * - $workphone
 * - $street
 * - $additional
 * - $city
 * - $province
 * - $country
 * - $postal_code
 * - $latitude
 * - $longitude
 * - $reference_count
 * - $last_login
 * - $responsive_member
 * - $member_hosted_me
 * - $services
 * - $URL
 * - $motel, $bikeshop, $maxcyclists, $campground, $languagesspoken
 * - $global_stats - array()
 * - $personal_stats - array()
  */
?>
<?php drupal_set_title(check_plain($account->fullname)); ?>
<div id="profile-container">
  <div id="profile-image"><?php print theme('user_picture', $account); ?></div>
  <div id="name-title">
    <h3><?php print check_plain($account->fullname); ?></h3>
    
    <ul id="global_stats"><?php foreach ($global_stats as $classname=>$stat){
      ?><li class="<?php print $classname; ?>"><?php print $stat; ?></li><?php
    } ?></ul>
    
    <?php if ($personal_stats): ?>
      <ul id="personal_stats"><?php foreach ($personal_stats as $classname=>$stat){
        ?><li class="<?php print $classname; ?>"><?php print $stat; ?></li><?php
      } ?></ul>
    <?php endif; ?>
  </div>
  <div class="content">
    <h1><?php print t('About this Member'); ?></h1>
    <?php print check_markup($account->comments); ?>
    <div id="host-services">
      <h2><?php print t('Hosting information'); ?></h2>
      <?php if ($notcurrentlyavailable) : ?>
        <?php print t('This member has marked themselves as not currently available for hosting, so their hosting information is not displayed'); ?>
      <?php else: ?>
        <?php foreach (array('preferred_notice', 'maxcyclists', 'bikeshop', 'campground', 'motel') as $item) : ?>
           <?php if (!empty($$item)): ?>
             <div class="member-info-<?php print $item; ?>"><span class="item-title"><?php print $fieldlist[$item]['title'];?></span>: <span class="item-value"><?php print $$item; ?></span></div>
           <?php endif; ?>
        <?php endforeach; ?>
        <h4><?php print t('This host may offer'); ?></h4>
        <ul>
          <?php print $services; ?>
        </ul>
      <?php endif; ?>
    </div>
    <div id="recommendations">
      <h2><?php print t('Recommendations'); ?></h2>
      <?php print views_embed_view('user_referrals_by_referee', 'block_1', $account->uid); ?>
    </div>
  </div>
</div>
