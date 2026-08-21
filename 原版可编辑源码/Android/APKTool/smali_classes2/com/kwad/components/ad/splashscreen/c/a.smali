.class public final Lcom/kwad/components/ad/splashscreen/c/a;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private CB:Landroid/view/View;

.field private CC:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/4 v1, 0x1

    const/16 v2, 0x35

    const/4 v3, 0x2

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CC:Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/h;->m(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CB:Landroid/view/View;

    if-eqz v0, :cond_1

    const/4 v2, 0x0

    goto :goto_0

    :cond_1
    const/16 v2, 0x8

    :goto_0
    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    if-eqz v0, :cond_2

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CB:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CB:Landroid/view/View;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    :cond_2
    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSlide: enableSlickClick: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CC:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "FullScreenTouchConvertPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CC:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v1, 0x1

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v2, 0x99

    const/4 v3, 0x2

    invoke-virtual {v0, v1, p1, v2, v3}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_actionbar_full_screen:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a;->CB:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    return-void
.end method
