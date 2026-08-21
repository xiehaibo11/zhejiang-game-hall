.class final Lcom/mbridge/msdk/videocommon/d/b$1;
.super Ljava/lang/Object;
.source "RewardSettingManager.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$ZipDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/videocommon/d/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/videocommon/d/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/videocommon/d/b;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 342
    iput-object p1, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->c:Lcom/mbridge/msdk/videocommon/d/b;

    iput-object p2, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 350
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->b:Ljava/lang/String;

    const/4 v2, 0x2

    invoke-static {p1, v0, v1, v2, p2}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method

.method public final onSuccess(Ljava/lang/String;)V
    .locals 4

    .line 345
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/videocommon/d/b$1;->b:Ljava/lang/String;

    const/4 v2, 0x1

    const-string v3, ""

    invoke-static {p1, v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    return-void
.end method
