.class final Lcom/mbridge/msdk/mbdownload/d$a;
.super Landroid/database/sqlite/SQLiteOpenHelper;
.source "DownloadTaskList.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/d;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/d;Landroid/content/Context;)V
    .locals 2

    .line 262
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/d$a;->a:Lcom/mbridge/msdk/mbdownload/d;

    const-string p1, "MB_DATA"

    const/4 v0, 0x0

    const/4 v1, 0x2

    .line 263
    invoke-direct {p0, p2, p1, v0, v1}, Landroid/database/sqlite/SQLiteOpenHelper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/database/sqlite/SQLiteDatabase$CursorFactory;I)V

    return-void
.end method


# virtual methods
.method public final onCreate(Landroid/database/sqlite/SQLiteDatabase;)V
    .locals 2

    .line 268
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/d;->a()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CREATE TABLE mb_download_task_list (cp TEXT, url TEXT, progress INTEGER, extra TEXT, last_modified TEXT, UNIQUE (cp,url) ON CONFLICT ABORT);"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 269
    invoke-virtual {p1, v1}, Landroid/database/sqlite/SQLiteDatabase;->execSQL(Ljava/lang/String;)V

    return-void
.end method

.method public final onUpgrade(Landroid/database/sqlite/SQLiteDatabase;II)V
    .locals 0

    return-void
.end method
