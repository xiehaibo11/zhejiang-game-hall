.class final Lcom/kwad/components/ad/reward/o$1;
.super Lcom/kwad/components/core/webview/b/e/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/o;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic qz:Lcom/kwad/components/ad/reward/o;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/o;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final q(Ljava/lang/String;)V
    .locals 4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-neo-video-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v2, "ksad-live-video-card"

    invoke-static {v2, v1}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "onTkLoadFailed, rewardPageTemplateId: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", templateId: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "RewardPresenter"

    invoke-static {v3, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v3, "ksad-image-video-card"

    invoke-static {v3, v2}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {v1, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {v2, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/o;->d(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/core/l/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/o;->e(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/model/c;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V

    goto :goto_1

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/o;->b(Lcom/kwad/components/ad/reward/o;)Landroid/content/Context;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/o;->c(Lcom/kwad/components/ad/reward/o;)Landroid/widget/FrameLayout;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/j;->a(Landroid/content/Context;Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    sget-object v0, Lcom/kwad/components/ad/reward/RewardRenderResult;->DEFAULT:Lcom/kwad/components/ad/reward/RewardRenderResult;

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Lcom/kwad/components/ad/reward/RewardRenderResult;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/o;->d(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/core/l/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/o$1;->qz:Lcom/kwad/components/ad/reward/o;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/o;->e(Lcom/kwad/components/ad/reward/o;)Lcom/kwad/components/ad/reward/model/c;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/o;->a(Lcom/kwad/components/ad/reward/o;Lcom/kwad/components/core/l/b;Lcom/kwad/components/ad/reward/model/c;)V

    :cond_2
    :goto_1
    return-void
.end method
