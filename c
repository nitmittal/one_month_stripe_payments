warning: LF will be replaced by CRLF in Gemfile.
The file will have its original line endings in your working directory.
warning: LF will be replaced by CRLF in Gemfile.lock.
The file will have its original line endings in your working directory.
[1mdiff --git a/Gemfile b/Gemfile[m
[1mindex 8aa2159..1cebd7e 100644[m
[1m--- a/Gemfile[m
[1m+++ b/Gemfile[m
[36m@@ -1,10 +1,16 @@[m
 source 'https://rubygems.org'[m
 [m
[31m-[m
[32m+[m[32m# Require a specific Ruby version[m
[32m+[m[32mruby '2.2.6'[m
 # Bundle edge Rails instead: gem 'rails', github: 'rails/rails'[m
 gem 'rails', '~> 5.0.0', '>= 5.0.0.1'[m
[31m-# Use sqlite3 as the database for Active Record[m
[31m-gem 'sqlite3'[m
[32m+[m[32m# Use sqlite3 as the database for development and test[m
[32m+[m[32mgem 'sqlite3', group: [:development, :test][m
[32m+[m[32m# Use PostGres as the database in Production[m
[32m+[m[32mgem 'pg', group: :production[m
[32m+[m[32m# Add 12 factor for Heroku[m
[32m+[m[32mgem 'rails_12factor', group: :production[m
[32m+[m
 # Use Puma as the app server[m
 gem 'puma', '~> 3.0'[m
 # Use SCSS for stylesheets[m
[1mdiff --git a/Gemfile.lock b/Gemfile.lock[m
[1mindex dd80029..e301a3c 100644[m
[1m--- a/Gemfile.lock[m
[1m+++ b/Gemfile.lock[m
[36m@@ -75,6 +75,7 @@[m [mGEM[m
     nio4r (1.2.1)[m
     nokogiri (1.6.8.1-x86-mingw32)[m
       mini_portile2 (~> 2.1.0)[m
[32m+[m[32m    pg (0.19.0-x86-mingw32)[m
     puma (3.6.2)[m
     rack (2.0.1)[m
     rack-test (0.6.3)[m
[36m@@ -96,6 +97,11 @@[m [mGEM[m
       nokogiri (~> 1.6.0)[m
     rails-html-sanitizer (1.0.3)[m
       loofah (~> 2.0)[m
[32m+[m[32m    rails_12factor (0.0.3)[m
[32m+[m[32m      rails_serve_static_assets[m
[32m+[m[32m      rails_stdout_logging[m
[32m+[m[32m    rails_serve_static_assets (0.0.5)[m
[32m+[m[32m    rails_stdout_logging (0.0.5)[m
     railties (5.0.1)[m
       actionpack (= 5.0.1)[m
       activesupport (= 5.0.1)[m
[36m@@ -147,8 +153,10 @@[m [mDEPENDENCIES[m
   coffee-rails (~> 4.2)[m
   jbuilder (~> 2.5)[m
   jquery-rails[m
[32m+[m[32m  pg[m
   puma (~> 3.0)[m
   rails (~> 5.0.0, >= 5.0.0.1)[m
[32m+[m[32m  rails_12factor[m
   sass-rails (~> 5.0)[m
   sqlite3[m
   turbolinks (~> 5)[m
[36m@@ -156,5 +164,8 @@[m [mDEPENDENCIES[m
   uglifier (>= 1.3.0)[m
   web-console[m
 [m
[32m+[m[32mRUBY VERSION[m
[32m+[m[32m   ruby 2.2.6p396[m
[32m+[m
 BUNDLED WITH[m
    1.13.6[m
[1mdiff --git a/config/database.yml b/config/database.yml[m
[1mindex 1c1a37c..435f4c5 100644[m
[1m--- a/config/database.yml[m
[1m+++ b/config/database.yml[m
[36m@@ -20,6 +20,6 @@[m [mtest:[m
   <<: *default[m
   database: db/test.sqlite3[m
 [m
[31m-production:[m
[31m-  <<: *default[m
[31m-  database: db/production.sqlite3[m
[32m+[m[32m#production:[m
[32m+[m[32m#  <<: *default[m
[32m+[m[32m# database: db/production.sqlite3[m
warning: LF will be replaced by CRLF in config/database.yml.
The file will have its original line endings in your working directory.
