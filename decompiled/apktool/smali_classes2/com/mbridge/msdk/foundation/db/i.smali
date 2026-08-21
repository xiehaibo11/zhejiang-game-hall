.class public Lcom/mbridge/msdk/foundation/db/i;
.super Lcom/mbridge/msdk/foundation/db/h;
.source "CommonSDKDBHelper.java"


# static fields
.field private static a:Lcom/mbridge/msdk/foundation/db/i;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/h;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;
    .locals 2

    .line 22
    sget-object v0, Lcom/mbridge/msdk/foundation/db/i;->a:Lcom/mbridge/msdk/foundation/db/i;

    if-nez v0, :cond_1

    .line 23
    const-class v0, Lcom/mbridge/msdk/foundation/db/i;

    monitor-enter v0

    .line 24
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/i;->a:Lcom/mbridge/msdk/foundation/db/i;

    if-nez v1, :cond_0

    .line 25
    new-instance v1, Lcom/mbridge/msdk/foundation/db/i;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/i;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/i;->a:Lcom/mbridge/msdk/foundation/db/i;

    .line 27
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 30
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/db/i;->a:Lcom/mbridge/msdk/foundation/db/i;

    return-object p0
.end method

.method private b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    :try_start_0
    const-string v0, "CREATE TABLE IF NOT EXISTS campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,deeplink_url TEXT,user_activation TEXT,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,fc_b INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,jm_pd INTEGER,is_deleted INTEGER,is_click INTEGER,is_add_sucesful INTEGER,short_ctime TEXT,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,ia_icon TEXT,ia_rst INTEGER,ia_url TEXT,ia_ori INTEGER,ad_type INTEGER,ia_ext1 TEXT,ia_ext2 TEXT,ia_cache TEXT,is_download_zip INTEGER,gh_id TEXT,gh_path TEXT,bind_id TEXT,oc_time INTEGER,oc_type INTEGER,t_list TEXT,adchoice TEXT,adchoice_size_height INTEGER,adchoice_size_width INTEGER,imp_ua INTEGER,endcard_click_result INTEGER,plct INTEGER,plctb INTEGER,is_bid_campaign INTEGER,bid_token TEXT,mraid TEXT,is_mraid_campaign INTEGER,omid TEXT,banner_url TEXT,banner_html TEXT,mof_tplid INTEGER,ready_rate INTEGER,ext_data TEXT,nscpt INTEGER,mof_template_url TEXT,req_ext_data TEXT,wtick INTEGER,creative_id INTEGER,readyState INTEGER,pv_urls TEXT,ad_zip TEXT,ad_html TEXT,load_timeout INTEGER,request_id TEXT,placement_id TEXT,number_rating INTEGER,akdlui TEXT,atat_type INTEGER,ntbarpasbl INTEGER,ntbarpt INTEGER,rw_pl TEXT,apk_info TEXT,flb INTEGER,flb_skiptime INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,apk_alt INTEGER,vcn INTEGER,token_r INTEGER,encrypt_p TEXT,vck_t INTEGER,vctn_t INTEGER,view_com_time INTEGER,tp_offer INTEGER,fac INTEGER,aab TEXT,rs_ignc_r TEXT )"

    .line 57
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS report_campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,wtick INTEGER,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,gh_id TEXT,bind_id TEXT,gh_path TEXT,imp_ua INTEGER,endcard_click_result INTEGER,number_rating INTEGER,flb INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,view_com_time INTEGER,flb_skiptime INTEGER )"

    .line 58
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS shortcuts_campaign (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,wtick INTEGER,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,video_url TEXT,video_size INTEGER,video_resolution TEXT,watch_mile INTEGER,video_length INTEGER,ts INTEGER,bty INTEGER,advImp TEXT,t_imp INTEGER,guidelines TEXT,offer_type INTEGER,html_url TEXT,end_screen_url TEXT,reward_amount INTEGER,reward_play_status INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,adv_id TEXT,retarget INTEGER,video_end_type INTEGER,playable_ads_without_video INTEGER,endcard_url TEXT,nv_t2 INTEGER,gif_url TEXT,reward_name TEXT,loopback TEXT,reward_teamplate TEXT,md5_file TEXT,local_ctime TEXT,jm_pd INTEGER,native_ad_tracking TEXT,c_coi INTEGER,c_ua INTEGER,gh_id TEXT,bind_id TEXT,gh_path TEXT,flb INTEGER,adspace_t INTEGER,vst INTEGER,cbd INTEGER,flb_skiptime INTEGER,imp_ua INTEGER,endcard_click_result INTEGER,view_com_time INTEGER,number_rating INTEGER )"

    .line 59
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS frequence (id TEXT,fc_a INTEGER,fc_b INTEGER,impression_count INTEGER,click_count INTEGER,ts INTEGER )"

    .line 60
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS campaignclick (id TEXT,unitid TEXT,result TEXT,ts INTEGER,pts INTEGER,cpei INTEGER,cpoci INTEGER,package_name TEXT,n4 INTEGER,ttc_ct2 INTEGER,ttc_type INTEGER,cps INTEGER,cti INTEGER,cpti INTEGER )"

    .line 61
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS reporterror (id integer primary key autoincrement,url TEXT,method TEXT,time_stamp INTEGER,data TEXT,count INTEGER,unitId TEXT)"

    .line 63
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS click_time(id integer primary key autoincrement,campaignId TEXT,click_type INTEGER,click_duration TEXT,last_url TEXT,code INTEGER,exception TEXT,header TEXT,content TEXT,network_type INTEGER,network_str TEXT,rid TEXT,rid_n TEXT,unit_id TEXT,landing_type INTEGER,link_type INTEGER,click_time TEXT,market_result INTEGER,type INTEGER)"

    .line 64
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS load_stat (id integer primary key autoincrement,time TEXT,ad_source_id integer,adNum integer,unitId TEXT,fb integer,hb integer,timeout integer,network_type_str TEXT,network_type integer)"

    .line 65
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS video (id TEXT,unitid TEXT,tab INTEGER,package_name TEXT,app_name TEXT,app_desc TEXT,app_size TEXT,image_size TEXT,icon_url TEXT,image_url TEXT,impression_url TEXT,notice_url TEXT,download_url TEXT,only_impression TEXT,preclick INTEGER,template INTEGER,landing_type TEXT,link_type INTEGER,click_mode TEXT,cti INTEGER,cpti INTEGER,star TEXT,level INTEGER,adSource INTEGER,fc_a INTEGER,ad_call TEXT,ad_url_list TEXT,ad_bid_token TEXT,video_url TEXT,pregeress_size INTEGER,total_size INTEGER,video_download_start INTEGER,video_state INTEGER,video_path TEXT,endcard_click_result INTEGER,ts INTEGER  )"

    .line 66
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS reward_report (id integer primary key autoincrement,key TEXT,networkType INTEGER,network_str TEXT,isCompleteView INTEGER,watchedMillis INTEGER,videoLength INTEGER,image_url TEXT,template_url TEXT,rid TEXT,rid_n TEXT,video_url TEXT,offerUrl TEXT,reason TEXT,result INTEGER,duration TEXT,ad_type TEXT,type TEXT,h5_click_data TEXT,endcard_url TEXT,unitId TEXT,campaignId TEXT,resource_type TEXT,device_id TEXT,creative TEXT,videoSize INTEGER,endcard_click_result INTEGER,adspace_t INTEGER)"

    .line 67
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS offer_wall_click (id integer primary key autoincrement,unitId TEXT,campaignId TEXT,noticeUrl TEXT,host TEXT,clickId TEXT,install_status integer,time integer)"

    .line 68
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS fq_info (id TEXT,unitId TEXT,time INTEGER,type INTEGER )"

    .line 69
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS sc (package_name TEXT,click_mode TEXT,download_url TEXT,ttc INTEGER,get_time TEXT )"

    .line 70
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS c_did_time (did TEXT,id INTEGER PRIMARY KEY AUTOINCREMENT,d_time INTEGER )"

    .line 71
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS c_t_time (id INTEGER PRIMARY KEY AUTOINCREMENT,package_name TEXT,t_time INTEGER )"

    .line 72
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS dailyplaycap (unit_id TEXT,play_time INTEGER,first_insert_timestamp INTEGER )"

    .line 73
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS settingCampaign (id integer primary key autoincrement,url TEXT,method TEXT,data TEXT,iex INTEGER)"

    .line 76
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS display_resource_type (id integer primary key autoincrement,campaign_id TEXT,is_click INTEGER,click_time INTEGER,resource_type INTEGER )"

    .line 77
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS unit_id (placement_id TEXT,unitId TEXT,ad_type integer)"

    .line 78
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS download_record( id INTEGER PRIMARY KEY AUTOINCREMENT,download_id TEXT,download_url TEXT, resource_url TEXT,etag TEXT, director_path TEXT, file_name TEXT, total_bytes INTEGER, downloaded_bytes INTEGER, last_modified_time INTEGER,download_rate INTEGER,usage_counter INTEGER,download_resource_type INTEGER,from_where INTEGER)"

    .line 79
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS batch_report (report_message TEXT,time INTEGER,report_state INTEGER,uuid TEXT)"

    .line 80
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS c_replace_temp (d_key TEXT,d_value TEXT,time INTEGER )"

    .line 81
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS campaignDAIDao (id TEXT,app_name TEXT,unique_key TEXT,unitid TEXT,url TEXT,rid TEXT,rid_n TEXT,status INTEGER,progress INTEGER,atat_type INTEGER,ntbarpt INTEGER,package_name TEXT,ntbarpasbl INTEGER,save_path TEXT)"

    .line 82
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS bid_replace_campaign (bid_unit_id TEXT,expect_bid_token TEXT,expect_encrypt_price TEXT,real_request_id TEXT ,real_encrypt_price TEXT,real_token_rule INTEGER,is_replace INTEGER)"

    .line 83
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 85
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 86
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    const-string v0, "DROP TABLE IF EXISTS \'campaign\'"

    .line 93
    :try_start_0
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    .line 94
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'frequence\'"

    .line 95
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'campaignclick\'"

    .line 96
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'reporterror\'"

    .line 99
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'click_time\'"

    .line 100
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'load_stat\'"

    .line 101
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'video\'"

    .line 102
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'reward_report\'"

    .line 103
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'offer_wall_click\'"

    .line 104
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'fq_info\'"

    .line 105
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'sc\'"

    .line 106
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'c_did_time\'"

    .line 107
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'c_t_time\'"

    .line 108
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'dailyplaycap\'"

    .line 109
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'settingCampaign\'"

    .line 112
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'display_resource_type\'"

    .line 113
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'unit_id\'"

    .line 114
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'download_record\'"

    .line 115
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'batch_report\'"

    .line 116
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'c_replace_temp\'"

    .line 117
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'campaignDAIDao\'"

    .line 119
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v1, "DROP TABLE IF EXISTS \'bid_replace_campaign\'"

    .line 121
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    .line 122
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 124
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 125
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method protected final a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 46
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/i;->b(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final a(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    .line 51
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/i;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 52
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/i;->b(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final b(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    .line 133
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/i;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 134
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/i;->b(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final c()Ljava/lang/String;
    .locals 1

    const-string v0, "mbridge.msdk.and.db"

    return-object v0
.end method

.method protected final d()I
    .locals 1

    const/16 v0, 0x46

    return v0
.end method
