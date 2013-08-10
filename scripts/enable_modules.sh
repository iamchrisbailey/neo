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