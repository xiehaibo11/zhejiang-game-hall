.class public abstract Lcom/kwad/sdk/core/video/videoview/b;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private RZ:Ljava/lang/Runnable;

.field protected final awf:Lcom/kwad/sdk/core/video/videoview/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/video/videoview/c;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/b;->awf:Lcom/kwad/sdk/core/video/videoview/c;

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/core/video/videoview/b;)Ljava/lang/Runnable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    return-object p0
.end method


# virtual methods
.method public m(II)V
    .locals 0

    return-void
.end method

.method protected abstract onPlayStateChanged(I)V
.end method

.method protected abstract qB()V
.end method

.method protected final qH()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/b;->qI()V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/video/videoview/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/video/videoview/b$1;-><init>(Lcom/kwad/sdk/core/video/videoview/b;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/video/videoview/b;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method protected final qI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/video/videoview/b;->removeCallbacks(Ljava/lang/Runnable;)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/b;->RZ:Ljava/lang/Runnable;

    :cond_0
    return-void
.end method

.method protected abstract reset()V
.end method
