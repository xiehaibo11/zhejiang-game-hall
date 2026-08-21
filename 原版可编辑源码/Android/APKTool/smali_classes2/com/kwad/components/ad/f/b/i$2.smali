.class final Lcom/kwad/components/ad/f/b/i$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/e/d/a$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/b/i;->eR()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic nr:Lcom/kwad/components/ad/f/b/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/b/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/i$2;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdClicked()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i$2;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-static {v0}, Lcom/kwad/components/ad/f/b/i;->b(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/ad/f/a/b;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i$2;->nr:Lcom/kwad/components/ad/f/b/i;

    invoke-static {v1}, Lcom/kwad/components/ad/f/b/i;->c(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/ad/f/a/b;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/utils/ac$a;)V

    return-void
.end method
