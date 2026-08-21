.class public Lcom/mbridge/msdk/mbdownload/d;
.super Ljava/lang/Object;
.source "DownloadTaskList.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbdownload/d$a;,
        Lcom/mbridge/msdk/mbdownload/d$b;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Landroid/content/Context;


# instance fields
.field private c:Lcom/mbridge/msdk/mbdownload/d$a;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 48
    const-class v0, Lcom/mbridge/msdk/mbdownload/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbdownload/d;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 62
    new-instance v0, Lcom/mbridge/msdk/mbdownload/d$a;

    sget-object v1, Lcom/mbridge/msdk/mbdownload/d;->b:Landroid/content/Context;

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/mbdownload/d$a;-><init>(Lcom/mbridge/msdk/mbdownload/d;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/d;->c:Lcom/mbridge/msdk/mbdownload/d$a;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/mbdownload/d$1;)V
    .locals 0

    .line 47
    invoke-direct {p0}, Lcom/mbridge/msdk/mbdownload/d;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/mbdownload/d;
    .locals 1

    .line 70
    sget-object v0, Lcom/mbridge/msdk/mbdownload/d;->b:Landroid/content/Context;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    .line 71
    throw p0

    .line 72
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/mbdownload/d;->b:Landroid/content/Context;

    if-nez v0, :cond_2

    .line 73
    sput-object p0, Lcom/mbridge/msdk/mbdownload/d;->b:Landroid/content/Context;

    .line 74
    :cond_2
    sget-object p0, Lcom/mbridge/msdk/mbdownload/d$b;->a:Lcom/mbridge/msdk/mbdownload/d;

    return-object p0
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 47
    sget-object v0, Lcom/mbridge/msdk/mbdownload/d;->a:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final a(I)V
    .locals 6

    const-string v0, "yyyy-MM-dd HH:mm:ss"

    .line 223
    :try_start_0
    new-instance v1, Ljava/util/Date;

    new-instance v2, Ljava/util/Date;

    invoke-direct {v2}, Ljava/util/Date;-><init>()V

    invoke-virtual {v2}, Ljava/util/Date;->getTime()J

    move-result-wide v2

    mul-int/lit16 v4, p1, 0x3e8

    int-to-long v4, v4

    sub-long/2addr v2, v4

    invoke-direct {v1, v2, v3}, Ljava/util/Date;-><init>(J)V

    .line 224
    new-instance v2, Ljava/text/SimpleDateFormat;

    invoke-direct {v2, v0}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 225
    invoke-virtual {v2, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v2

    .line 226
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, " DELETE FROM mb_download_task_list WHERE strftime(\'yyyy-MM-dd HH:mm:ss\', last_modified)<=strftime(\'yyyy-MM-dd HH:mm:ss\', \'"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\')"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 230
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/d;->c:Lcom/mbridge/msdk/mbdownload/d$a;

    invoke-virtual {v3}, Lcom/mbridge/msdk/mbdownload/d$a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object v3

    invoke-virtual {v3, v2}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    .line 232
    sget-object v2, Lcom/mbridge/msdk/mbdownload/d;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "clearOverdueTasks("

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ") remove all tasks before "

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance p1, Ljava/text/SimpleDateFormat;

    invoke-direct {p1, v0}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    .line 238
    invoke-virtual {p1, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 232
    invoke-static {v2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 241
    sget-object v0, Lcom/mbridge/msdk/mbdownload/d;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 2

    .line 109
    new-instance v0, Landroid/content/ContentValues;

    invoke-direct {v0}, Landroid/content/ContentValues;-><init>()V

    .line 110
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p3

    const-string v1, "progress"

    invoke-virtual {v0, v1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Integer;)V

    .line 111
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/e;->a()Ljava/lang/String;

    move-result-object p3

    const-string v1, "last_modified"

    invoke-virtual {v0, v1, p3}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p3, 0x2

    new-array p3, p3, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, p3, v1

    const/4 p1, 0x1

    aput-object p2, p3, p1

    .line 114
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/d;->c:Lcom/mbridge/msdk/mbdownload/d$a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbdownload/d$a;->getWritableDatabase()Landroid/database/sqlite/SQLiteDatabase;

    move-result-object p1

    const-string p2, "cp=? and url=?"

    const-string v1, "mb_download_task_list"

    invoke-virtual {p1, v1, v0, p2, p3}, Landroid/database/sqlite/SQLiteDatabase;->update(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I

    return-void
.end method

.method public finalize()V
    .locals 1

    .line 249
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/d;->c:Lcom/mbridge/msdk/mbdownload/d$a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbdownload/d$a;->close()V

    return-void
.end method
