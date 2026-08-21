.class final Lcom/mbridge/msdk/mbdownload/e$a$1;
.super Ljava/lang/Object;
.source "DownloadTool.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbdownload/e$a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/mbdownload/e$a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/e$a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/e$a;)V
    .locals 0

    .line 203
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$a$1;->a:Lcom/mbridge/msdk/mbdownload/e$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 3

    .line 206
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_0

    .line 207
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/e$a$1;->a:Lcom/mbridge/msdk/mbdownload/e$a;

    iget-object p2, p2, Lcom/mbridge/msdk/mbdownload/e$a;->j:Landroid/widget/RemoteViews;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$a$1;->a:Lcom/mbridge/msdk/mbdownload/e$a;

    iget-object v0, v0, Lcom/mbridge/msdk/mbdownload/e$a;->e:Landroid/content/Context;

    const-string v1, "mbridge_download_notify_target_icon"

    const-string v2, "id"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p2, v0, p1}, Landroid/widget/RemoteViews;->setImageViewBitmap(ILandroid/graphics/Bitmap;)V

    :cond_0
    return-void
.end method
