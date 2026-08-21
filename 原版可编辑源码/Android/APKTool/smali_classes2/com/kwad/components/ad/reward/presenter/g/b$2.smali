.class final Lcom/kwad/components/ad/reward/presenter/g/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/m/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/g/b;->a(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic xm:Lcom/kwad/components/ad/reward/presenter/g/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/g/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b$2;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final h(Ljava/lang/String;I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$2;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->a(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onUpdateDownloadProgress downloadStatus: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LaunchAppTaskPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$2;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->b(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/reward/m/c;->i(Ljava/lang/String;I)V

    return-void
.end method
