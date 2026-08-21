.class public Lcom/tkay/core/common/c/c;
.super Lcom/tkay/core/common/c/b;


# static fields
.field private static a:Lcom/tkay/core/common/c/c;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/b;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;
    .locals 2

    .line 25
    sget-object v0, Lcom/tkay/core/common/c/c;->a:Lcom/tkay/core/common/c/c;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/tkay/core/common/c/c;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/c/c;->a:Lcom/tkay/core/common/c/c;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/tkay/core/common/c/c;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/tkay/core/common/c/c;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/c/c;->a:Lcom/tkay/core/common/c/c;

    .line 30
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 33
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/c/c;->a:Lcom/tkay/core/common/c/c;

    return-object p0
.end method

.method private c(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    :try_start_0
    const-string v0, "CREATE TABLE IF NOT EXISTS sdkconfig(key TEXT ,type TEXT ,lastupdatetime TEXT ,value TEXT )"

    .line 100
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )"

    .line 101
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const/4 v0, 0x3

    const/16 v1, 0x9

    .line 102
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/core/common/c/c;->a(Landroid/database/sqlite/SQLiteDatabase;II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 104
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static d(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 1

    :try_start_0
    const-string v0, "DROP TABLE IF EXISTS \'sdkconfig\'"

    .line 110
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'request_info\'"

    .line 111
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'placement_ad_impression\'"

    .line 112
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'offer_action_record\'"

    .line 113
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'offer_data_cache\'"

    .line 114
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'dsp_offer_show_record\'"

    .line 115
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'dsp_offer_install_record\'"

    .line 116
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'inspect_info\'"

    .line 117
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'video_res_cache_info\'"

    .line 118
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'notice_url_fail_info\'"

    .line 119
    invoke-virtual {p0, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 121
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private e(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 140
    invoke-static {p1}, Lcom/tkay/core/common/c/c;->d(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 141
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method


# virtual methods
.method protected final a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 49
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final a(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 1

    :goto_0
    if-ge p2, p3, :cond_0

    packed-switch p2, :pswitch_data_0

    goto :goto_1

    :pswitch_0
    const-string v0, "CREATE TABLE IF NOT EXISTS notice_url_fail_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, first_fail_time INTEGER, offer_out_date_time INTEGER, retry_count INTEGER )"

    .line 84
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "DROP TABLE IF EXISTS \'request_info\'"

    .line 87
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS request_info(id TEXT, req_type INTEGER, req_url TEXT, req_head TEXT, req_content TEXT, time INTEGER, extra TEXT )"

    .line 88
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :pswitch_1
    const-string v0, "CREATE TABLE IF NOT EXISTS video_res_cache_info(video_url TEXT, file_path TEXT, ready_rate INTEGER, download_size INTEGER, total_size INTEGER, update_time INTEGER )"

    .line 81
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :pswitch_2
    const-string v0, "CREATE TABLE IF NOT EXISTS inspect_info(inspect_id TEXT, update_time INTEGER )"

    .line 78
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :pswitch_3
    const-string v0, "CREATE TABLE IF NOT EXISTS dsp_offer_show_record(dsp_id TEXT ,dsp_offer_id TEXT ,show_limit INTEGER ,show_count INTEGER ,create_time INTEGER ,last_update_time INTEGER)"

    .line 74
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS dsp_offer_install_record(dsp_id TEXT ,dsp_offer_id TEXT ,package_name TEXT ,last_update_time INTEGER)"

    .line 75
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :pswitch_4
    const-string v0, "CREATE TABLE IF NOT EXISTS offer_action_record(adsource_id TEXT ,type INTEGER ,unit_id TEXT ,click_count INTEGER ,show_count INTEGER ,expire_time INTEGER )"

    .line 70
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const-string v0, "CREATE TABLE IF NOT EXISTS offer_data_cache(bid_id TEXT ,adsource_id TEXT ,network_firm_id INTEGER ,offer_data TEXT)"

    .line 71
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    :pswitch_5
    const-string v0, "CREATE TABLE IF NOT EXISTS placement_ad_impression(format INTEGER ,placement_id TEXT ,adsource_id TEXT ,hour_time TEXT ,hour_imp INTEGER ,date_time TEXT ,date_imp INTEGER , show_time INTEGER)"

    .line 67
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    goto :goto_1

    .line 1140
    :pswitch_6
    invoke-static {p1}, Lcom/tkay/core/common/c/c;->d(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 1141
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    :goto_1
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_0
    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method protected final b(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 0

    .line 135
    invoke-static {p1}, Lcom/tkay/core/common/c/c;->d(Landroid/database/sqlite/SQLiteDatabase;)V

    .line 136
    invoke-direct {p0, p1}, Lcom/tkay/core/common/c/c;->c(Landroid/database/sqlite/SQLiteDatabase;)V

    return-void
.end method

.method protected final c()Ljava/lang/String;
    .locals 1

    const-string v0, "tkay.db"

    return-object v0
.end method

.method protected final d()I
    .locals 1

    const/16 v0, 0x9

    return v0
.end method
