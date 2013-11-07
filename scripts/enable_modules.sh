#!/bin/bash

#Written by Chris Bailey.
#This script will enable modules needed for the new england outerwear website.
drush en -y fontyourface
drush en -y fontyourface_ui
drush en -y google_fonts_api
drush en -y feeds
drush en -y feeds_ui
drush en -y feeds_tamper
drush en -y feeds_tamper_ui
drush en -y commerce_feeds
drush en -y flexslider
drush en -y flexslider_example
drush en -y flexslider_views
drush en -y commerce_product_clone
drush en -y draggableviews
drush en -y menu_block
drush en -y commerce_stock
drush en -y commerce_stock_ui
drush en -y location
drush en -y location_node
drush en -y location_phone
drush en -y gmap
drush en -y gmap_location
drush en -y gmap_macro_builder
drush en -y commerce_reports

#Features test
drush en -y neo_slideshow
drush en -y neo_press
drush en -y neo_whats_new
drush en -y neo_featured_products
drush en -y neo_stockists