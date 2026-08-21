.class final Lcom/kwad/components/ad/reward/presenter/f/d$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/components/core/webview/b/a/o;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wu:Lcom/kwad/components/ad/reward/presenter/f/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/d$4;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$4;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->F(Lcom/kwad/components/ad/reward/presenter/f/d;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/d$4;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/d;->G(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    move v0, v1

    goto :goto_1

    :cond_1
    :goto_0
    move v0, v2

    :goto_1
    new-instance v3, Lcom/kwad/components/core/webview/b/b/m;

    invoke-direct {v3}, Lcom/kwad/components/core/webview/b/b/m;-><init>()V

    iput-boolean v0, v3, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/f/d$4;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v4}, Lcom/kwad/components/ad/reward/presenter/f/d;->H(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/core/webview/b/a/o;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/kwad/components/core/webview/b/a/o;->c(Lcom/kwad/components/core/webview/b/b/m;)V

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/f/d$4;->wu:Lcom/kwad/components/ad/reward/presenter/f/d;

    invoke-static {v3}, Lcom/kwad/components/ad/reward/presenter/f/d;->I(Lcom/kwad/components/ad/reward/presenter/f/d;)Lcom/kwad/components/ad/reward/j;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    xor-int/2addr v0, v2

    invoke-virtual {v3, v0, v1}, Lcom/kwad/components/ad/reward/l/d;->setAudioEnabled(ZZ)V

    return-void
.end method
