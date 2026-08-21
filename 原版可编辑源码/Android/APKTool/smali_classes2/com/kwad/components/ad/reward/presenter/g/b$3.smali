.class final Lcom/kwad/components/ad/reward/presenter/g/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/g/b;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardVerify()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->b(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->c(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->b(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/c;->jV()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->d(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/g/b$3;->xm:Lcom/kwad/components/ad/reward/presenter/g/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/g/b;->d(Lcom/kwad/components/ad/reward/presenter/g/b;)Lcom/kwad/components/ad/reward/m/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/c;->jV()V

    :cond_1
    return-void
.end method
