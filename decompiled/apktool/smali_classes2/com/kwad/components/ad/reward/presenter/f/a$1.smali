.class final Lcom/kwad/components/ad/reward/presenter/f/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/a/o$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/a;->a(Lcom/kwad/components/core/webview/b/a/o;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic we:Lcom/kwad/components/ad/reward/presenter/f/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$1;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final isMuted()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$1;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->a(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mVideoPlayConfig:Lcom/kwad/sdk/api/KsVideoPlayConfig;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$1;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->b(Lcom/kwad/components/ad/reward/presenter/f/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method
