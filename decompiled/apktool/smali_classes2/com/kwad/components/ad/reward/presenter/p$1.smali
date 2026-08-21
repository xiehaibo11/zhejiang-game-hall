.class final Lcom/kwad/components/ad/reward/presenter/p$1;
.super Lcom/kwad/components/ad/reward/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/p;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sN:Lcom/kwad/components/ad/reward/presenter/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/p$1;->sN:Lcom/kwad/components/ad/reward/presenter/p;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/p$1;->sN:Lcom/kwad/components/ad/reward/presenter/p;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/p;->a(Lcom/kwad/components/ad/reward/presenter/p;)Lcom/kwad/components/ad/reward/widget/KsToastView;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->setVisibility(I)V

    return-void
.end method
