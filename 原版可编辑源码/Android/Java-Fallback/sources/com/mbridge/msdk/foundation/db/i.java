package com.mbridge.msdk.foundation.db;

public class i extends com.mbridge.msdk.foundation.db.h {
    private static com.mbridge.msdk.foundation.db.i a;

    private i(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.db.i a(android.content.Context r2) {
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.mbridge.msdk.foundation.db.i> r0 = com.mbridge.msdk.foundation.db.i.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.mbridge.msdk.foundation.db.i r1 = new com.mbridge.msdk.foundation.db.i     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.mbridge.msdk.foundation.db.i.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a
            return r2
    }

    private void b(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,deeplink_url TEXT,user_activation TEXT,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,fc_b INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,jm_pd INTEGER,is_deleted INTEGER,is_click INTEGER,is_add_sucesful INTEGER,short_ctime TEXT,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,ia_icon TEXT,ia_rst INTEGER,ia_url TEXT,ia_ori INTEGER,ad_type INTEGER,ia_ext1 TEXT,ia_ext2 TEXT,ia_cache TEXT,is_download_zip INTEGER,gh_id TEXT,gh_path TEXT,bind_id TEXT,oc_time INTEGER,oc_type INTEGER,t_list TEXT,adchoice TEXT,adchoice_size_height INTEGER,adchoice_size_width INTEGER,imp_ua INTEGER,endcard_click_result INTEGER,plct INTEGER,plctb INTEGER,is_bid_campaign INTEGER,bid_token TEXT,mraid TEXT,is_mraid_campaign INTEGER,omid TEXT,banner_url TEXT,banner_html TEXT,mof_tplid INTEGER,ready_rate INTEGER,ext_data TEXT,nscpt INTEGER,mof_template_url TEXT,req_ext_data TEXT,wtick INTEGER,creative_id INTEGER,readyState INTEGER,pv_urls TEXT,ad_zip TEXT,ad_html TEXT,load_timeout INTEGER,request_id TEXT,placement_id TEXT,number_rating INTEGER,akdlui TEXT,atat_type INTEGER,ntbarpasbl INTEGER,ntbarpt INTEGER,rw_pl TEXT,apk_info TEXT,flb INTEGER,flb_skiptime INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,apk_alt INTEGER,vcn INTEGER,token_r INTEGER,encrypt_p TEXT,vck_t INTEGER,vctn_t INTEGER,view_com_time INTEGER,tp_offer INTEGER,fac INTEGER,aab TEXT,rs_ignc_r TEXT )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS report_campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,wtick INTEGER,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,gh_id TEXT,bind_id TEXT,gh_path TEXT,imp_ua INTEGER,endcard_click_result INTEGER,number_rating INTEGER,flb INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,view_com_time INTEGER,flb_skiptime INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS shortcuts_campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,wtick INTEGER,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,local_ctime TEXT,jm_pd INTEGER,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,gh_id TEXT,bind_id TEXT,gh_path TEXT,flb INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,flb_skiptime INTEGER,imp_ua INTEGER,endcard_click_result INTEGER,view_com_time INTEGER,number_rating INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS frequence (id TEXT,fc_a INTEGER,fc_b INTEGER,impression_count INTEGER,click_count INTEGER,ts INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS campaignclick (id TEXT,unitid TEXT,result TEXT,ts INTEGER,pts INTEGER,cpei INTEGER,cpoci INTEGER,package_name TEXT,n4 INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,cps INTEGER,cti INTEGER,cpti INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS reporterror (id integer primary key autoincrement,url TEXT,method TEXT,time_stamp INTEGER,data TEXT,count INTEGER,unitId TEXT)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS click_time(id integer primary key autoincrement,campaignId TEXT,click_type INTEGER,click_duration TEXT,last_url TEXT,code INTEGER,exception TEXT,header TEXT,content TEXT,network_type INTEGER,network_str TEXT,rid TEXT,rid_n TEXT,unit_id TEXT,landing_type INTEGER,link_type INTEGER,click_time TEXT,market_result INTEGER,type INTEGER)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS load_stat (id integer primary key autoincrement,time TEXT,ad_source_id integer,adNum integer,unitId TEXT,fb integer,hb integer,timeout integer,network_type_str TEXT,network_type integer)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS video (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,ad_bid_token TEXT,video_url TEXT,pregeress_size INTEGER,total_size INTEGER,video_download_start INTEGER,video_state INTEGER,video_path TEXT,endcard_click_result INTEGER,ts INTEGER  )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS reward_report (id integer primary key autoincrement,key TEXT,networkType INTEGER,network_str TEXT,isCompleteView INTEGER,watchedMillis INTEGER,videoLength INTEGER,image_url TEXT,template_url TEXT,rid TEXT,rid_n TEXT,video_url TEXT,offerUrl TEXT,reason TEXT,result INTEGER,duration TEXT,ad_type TEXT,type TEXT,h5_click_data TEXT,endcard_url TEXT,unitId TEXT,campaignId TEXT,resource_type TEXT,device_id TEXT,creative TEXT,videoSize INTEGER,endcard_click_result INTEGER,adspace_t INTEGER)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS offer_wall_click (id integer primary key autoincrement,unitId TEXT,campaignId TEXT,noticeUrl TEXT,host TEXT,clickId TEXT,install_status integer,time integer)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS fq_info (id TEXT,unitId TEXT,time INTEGER,type INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS sc (package_name TEXT,click_mode TEXT,download_url TEXT,ttc INTEGER,get_time TEXT )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS c_did_time (did TEXT,id INTEGER PRIMARY KEY AUTOINCREMENT,d_time INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS c_t_time (id INTEGER PRIMARY KEY AUTOINCREMENT,package_name TEXT,t_time INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS dailyplaycap (unit_id TEXT,play_time INTEGER,first_insert_timestamp INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS settingCampaign (id integer primary key autoincrement,url TEXT,method TEXT,data TEXT,iex INTEGER)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS display_resource_type (id integer primary key autoincrement,campaign_id TEXT,is_click INTEGER,click_time INTEGER,resource_type INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS unit_id (placement_id TEXT,unitId TEXT,ad_type integer)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS download_record( id INTEGER PRIMARY KEY AUTOINCREMENT,download_id TEXT,download_url TEXT, resource_url TEXT,etag TEXT, director_path TEXT, file_name TEXT, total_bytes INTEGER, downloaded_bytes INTEGER, last_modified_time INTEGER,download_rate INTEGER,usage_counter INTEGER,download_resource_type INTEGER,from_where INTEGER)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS batch_report (report_message TEXT,time INTEGER,report_state INTEGER,uuid TEXT)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS c_replace_temp (d_key TEXT,d_value TEXT,time INTEGER )"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS campaignDAIDao (id TEXT,app_name TEXT,unique_key TEXT,unitid TEXT,url TEXT,rid TEXT,rid_n TEXT,status INTEGER,progress INTEGER,atat_type INTEGER,ntbarpt INTEGER,package_name TEXT,ntbarpasbl INTEGER,save_path TEXT)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            java.lang.String r0 = "CREATE TABLE IF NOT EXISTS bid_replace_campaign (bid_unit_id TEXT,expect_bid_token TEXT,expect_encrypt_price TEXT,real_request_id TEXT ,real_encrypt_price TEXT,real_token_rule INTEGER,is_replace INTEGER)"
            r2.execSQL(r0)     // Catch: java.lang.Exception -> L79
            goto L81
        L79:
            r2 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L81
            r2.printStackTrace()
        L81:
            return
    }

    private void c(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            java.lang.String r0 = "DROP TABLE IF EXISTS 'campaign'"
            r3.execSQL(r0)     // Catch: java.lang.Exception -> L75
            r3.execSQL(r0)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'frequence'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'campaignclick'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'reporterror'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'click_time'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'load_stat'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'video'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'reward_report'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'offer_wall_click'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'fq_info'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'sc'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'c_did_time'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'c_t_time'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'dailyplaycap'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'settingCampaign'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'display_resource_type'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'unit_id'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'download_record'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'batch_report'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'c_replace_temp'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'campaignDAIDao'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            java.lang.String r1 = "DROP TABLE IF EXISTS 'bid_replace_campaign'"
            r3.execSQL(r1)     // Catch: java.lang.Exception -> L75
            r3.execSQL(r0)     // Catch: java.lang.Exception -> L75
            goto L7d
        L75:
            r3 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L7d
            r3.printStackTrace()
        L7d:
            return
    }

    @Override
    protected final void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    @Override
    protected final void a(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r0.c(r1)
            r0.b(r1)
            return
    }

    @Override
    protected final void b(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
            r0 = this;
            r0.c(r1)
            r0.b(r1)
            return
    }

    @Override
    protected final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = "mbridge.msdk.and.db"
            return r0
    }

    @Override
    protected final int d() {
            r1 = this;
            r0 = 70
            return r0
    }
}
