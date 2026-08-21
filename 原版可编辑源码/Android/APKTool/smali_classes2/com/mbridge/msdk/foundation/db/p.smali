.class public Lcom/mbridge/msdk/foundation/db/p;
.super Lcom/mbridge/msdk/foundation/db/a;
.source "SCDao.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/mbridge/msdk/foundation/db/a<",
        "Lcom/mbridge/msdk/out/Campaign;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Lcom/mbridge/msdk/foundation/db/p;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 15
    const-class v0, Lcom/mbridge/msdk/foundation/db/p;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/db/p;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 16
    sput-object v0, Lcom/mbridge/msdk/foundation/db/p;->b:Lcom/mbridge/msdk/foundation/db/p;

    return-void
.end method

.method private constructor <init>(Lcom/mbridge/msdk/foundation/db/h;)V
    .locals 0

    .line 19
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/foundation/db/a;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/p;
    .locals 2

    .line 23
    sget-object v0, Lcom/mbridge/msdk/foundation/db/p;->b:Lcom/mbridge/msdk/foundation/db/p;

    if-nez v0, :cond_1

    .line 24
    const-class v0, Lcom/mbridge/msdk/foundation/db/p;

    monitor-enter v0

    .line 25
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/db/p;->b:Lcom/mbridge/msdk/foundation/db/p;

    if-nez v1, :cond_0

    .line 26
    new-instance v1, Lcom/mbridge/msdk/foundation/db/p;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/db/p;-><init>(Lcom/mbridge/msdk/foundation/db/h;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/db/p;->b:Lcom/mbridge/msdk/foundation/db/p;

    .line 28
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
    sget-object p0, Lcom/mbridge/msdk/foundation/db/p;->b:Lcom/mbridge/msdk/foundation/db/p;

    return-object p0
.end method

.method private declared-synchronized a(Ljava/lang/String;)Z
    .locals 2

    monitor-enter p0

    .line 170
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SELECT get_time FROM sc WHERE package_name=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 171
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/p;->getReadableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->rawQuery(Ljava/lang/String;[Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 172
    invoke-interface {p1}, Landroid/database/Cursor;->getCount()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez v0, :cond_0

    .line 174
    :try_start_1
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    const/4 p1, 0x1

    .line 176
    monitor-exit p0

    return p1

    :cond_0
    if-eqz p1, :cond_1

    .line 180
    :try_start_2
    invoke-interface {p1}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catch_1
    :cond_1
    const/4 p1, 0x0

    .line 183
    monitor-exit p0

    return p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)J
    .locals 6

    monitor-enter p0

    if-nez p1, :cond_0

    const-wide/16 v0, 0x0

    .line 112
    monitor-exit p0

    return-wide v0

    :cond_0
    const-wide/16 v0, -0x1

    .line 114
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/p;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    .line 115
    monitor-exit p0

    return-wide v0

    .line 117
    :cond_1
    :try_start_1
    new-instance v2, Landroid/content/ContentValues;

    invoke-direct {v2}, Landroid/content/ContentValues;-><init>()V

    const-string v3, "package_name"

    .line 118
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "download_url"

    .line 119
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClickURL()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "click_mode"

    .line 120
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getClick_mode()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "ttc"

    .line 121
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isPreClick()Z

    move-result v4

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Boolean;)V

    const-string v3, "get_time"

    .line 123
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    .line 126
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v3}, Lcom/mbridge/msdk/foundation/db/p;->a(Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    .line 127
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "package_name = \'"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 128
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/p;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    const-string v5, "sc"

    invoke-virtual {v3, v5, v2, p1, v4}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    move-result p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    int-to-long v0, p1

    monitor-exit p0

    return-wide v0

    .line 130
    :cond_2
    :try_start_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/db/p;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string v3, "sc"

    invoke-virtual {p1, v3, v4, v2}, Landroid/database/sqlite/SQLiteDatabase;->insert(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J

    move-result-wide v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 133
    :try_start_3
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 135
    monitor-exit p0

    return-wide v0

    :goto_0
    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    if-eqz p1, :cond_1

    .line 145
    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 149
    :cond_0
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/foundation/db/p$1;

    invoke-direct {v1, p0, p1}, Lcom/mbridge/msdk/foundation/db/p$1;-><init>(Lcom/mbridge/msdk/foundation/db/p;Ljava/util/List;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 158
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 161
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 146
    :cond_1
    :goto_0
    monitor-exit p0

    return-void
.end method
