.class final Lcom/mbridge/msdk/nativex/view/MBMediaView$13;
.super Ljava/lang/Object;
.source "MBMediaView.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/same/c/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/nativex/view/MBMediaView;->n()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MBMediaView;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/nativex/view/MBMediaView;)V
    .locals 0

    .line 918
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onFailedLoad(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    const-string p1, "MBMediaView"

    const-string p2, "load image fail in mbmediaview"

    .line 921
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSuccessLoad(Landroid/graphics/Bitmap;Ljava/lang/String;)V
    .locals 3

    .line 926
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fillBigimage onSuccessLoad mCurDisplayMode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBMediaView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 927
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->l(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    move-result-object v0

    sget-object v2, Lcom/mbridge/msdk/nativex/view/MBMediaView$a;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView$a;

    if-ne v0, v2, :cond_1

    if-eqz p1, :cond_0

    const-string v0, "setimgeBitmap======="

    .line 930
    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 931
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->a(Lcom/mbridge/msdk/nativex/view/MBMediaView;I)I

    .line 932
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->b(Lcom/mbridge/msdk/nativex/view/MBMediaView;I)I

    .line 933
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setImageUrl(Ljava/lang/String;)V

    .line 934
    iget-object p2, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p2}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 937
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MBMediaView$13;->a:Lcom/mbridge/msdk/nativex/view/MBMediaView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MBMediaView;->m(Lcom/mbridge/msdk/nativex/view/MBMediaView;)Lcom/mbridge/msdk/videocommon/view/MyImageView;

    move-result-object p1

    new-instance p2, Lcom/mbridge/msdk/nativex/view/MBMediaView$13$1;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/nativex/view/MBMediaView$13$1;-><init>(Lcom/mbridge/msdk/nativex/view/MBMediaView$13;)V

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/videocommon/view/MyImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method
