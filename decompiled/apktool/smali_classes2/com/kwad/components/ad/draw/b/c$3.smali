.class final Lcom/kwad/components/ad/draw/b/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/draw/b/c;->a(ZI)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic co:Lcom/kwad/components/ad/draw/b/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/draw/b/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b/c$3;->co:Lcom/kwad/components/ad/draw/b/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c$3;->co:Lcom/kwad/components/ad/draw/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/b/c;->j(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c$3;->co:Lcom/kwad/components/ad/draw/b/c;

    invoke-static {v1}, Lcom/kwad/components/ad/draw/b/c;->k(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c$3;->co:Lcom/kwad/components/ad/draw/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/b/c;->l(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c$3;->co:Lcom/kwad/components/ad/draw/b/c;

    invoke-static {v0}, Lcom/kwad/components/ad/draw/b/c;->m(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;->onAdClicked()V

    :cond_0
    return-void
.end method
