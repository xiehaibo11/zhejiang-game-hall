.class public final Lcom/tkay/basead/b/b;
.super Landroid/database/sqlite/SQLiteOpenHelper;


# static fields
.field private static a:Lcom/tkay/basead/b/b; = null

.field private static final b:I = 0x3


# direct methods
.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V
    .locals 1

    const/4 v0, 0x3

    .line 51
    invoke-direct {p0, p1, p2, p3, v0}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/basead/b/b;
    .locals 3

    .line 22
    sget-object v0, Lcom/tkay/basead/b/b;->a:Lcom/tkay/basead/b/b;

    if-nez v0, :cond_0

    .line 23
    new-instance v0, Lcom/tkay/basead/b/b;

    const/4 v1, 0x0

    const-string v2, "tkay_myoffer"

    invoke-direct {v0, p0, v2, v1}, Lcom/tkay/basead/b/b;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;)V

    sput-object v0, Lcom/tkay/basead/b/b;->a:Lcom/tkay/basead/b/b;

    .line 25
    :cond_0
    sget-object p0, Lcom/tkay/basead/b/b;->a:Lcom/tkay/basead/b/b;

    return-object p0
.end method

.method private a(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    :try_start_0
    const-string v0, "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )"

    .line 81
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const/4 v0, 0x1

    const/4 v1, 0x3

    .line 82
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/basead/b/b;->onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 84
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method


# virtual methods
.method public final getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    .line 32
    :try_start_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method

.method public final declared-synchronized getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;
    .locals 1

    monitor-enter p0

    .line 43
    :try_start_0
    invoke-super {p0}, Landroid/database/sqlite/SQLiteOpenHelper;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0

    :catch_0
    const/4 v0, 0x0

    .line 47
    :goto_0
    monitor-exit p0

    return-object v0
.end method

.method public final onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    :try_start_0
    const-string v0, "CREATE TABLE IF NOT EXISTS my_offer_cap_pacing (offer_id TEXT,offer_cap INTEGER,offer_pacing INTEGER,show_num INTEGER,show_time INTEGER,record_date INTEGER )"

    .line 1081
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    const/4 v0, 0x1

    const/4 v1, 0x3

    .line 1082
    invoke-virtual {p0, p1, v0, v1}, Lcom/tkay/basead/b/b;->onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 1084
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final onDowngrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    return-void
.end method

.method public final onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 1

    :goto_0
    if-ge p2, p3, :cond_1

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    goto :goto_1

    :cond_0
    const-string v0, "DROP TABLE IF EXISTS \'CREATE TABLE IF NOT EXISTS my_offer_info (topon_pl_id TEXT,offer_id TEXT,creative_id TEXT,title TEXT,desc TEXT,icon_url TEXT,image_url TEXT,endcard_image_url TEXT,adchoice_url TEXT,cta TEXT,video_url TEXT,click_type INTEGER,preview_url TEXT,deeplink_url TEXT,click_url TEXT,notice_url TEXT,video_start_tk_url TEXT,video_25_tk_url TEXT,video_50_tk_url TEXT,video_75_tk_url TEXT,video_end_tk_url TEXT,endcard_show_tk_url TEXT,endcard_close_tk_url TEXT,impression_tk_url TEXT,click_tk_url TEXT,pkg TEXT,cap INTEGER,pacing INTEGER,offer_type INTERGR,update_time INTEGER )\'"

    .line 67
    invoke-virtual {p1, v0}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    :goto_1
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method
