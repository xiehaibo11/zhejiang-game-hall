.class Lcom/sigmob/sdk/videoplayer/g$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/videoplayer/g$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/g;->a(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/g;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/g;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(I)V
    .locals 2

    const-string v0, "sig_image_video_mute"

    if-nez p1, :cond_0

    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    iget-object p1, p1, Lcom/sigmob/sdk/videoplayer/g;->K:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v1}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    :goto_1
    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_2

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-static {p1}, Lcom/sigmob/sdk/videoplayer/g;->a(Lcom/sigmob/sdk/videoplayer/g;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    iget-object p1, p1, Lcom/sigmob/sdk/videoplayer/g;->K:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/g$2;->a:Lcom/sigmob/sdk/videoplayer/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/g;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sig_image_video_unmute"

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/ResourceUtil;->getDrawableId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    goto :goto_1

    :goto_2
    return-void
.end method
