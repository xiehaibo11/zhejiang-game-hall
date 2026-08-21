.class final Lcom/kwad/components/ad/reward/presenter/s$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/s;->a(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tw:Lcom/kwad/components/ad/reward/presenter/s;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/s;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/s$5;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "RewardShakePresenter"

    const-string v1, "onShakeEvent openGate2"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/s$5;->tw:Lcom/kwad/components/ad/reward/presenter/s;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/s;->c(Lcom/kwad/components/ad/reward/presenter/s;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/g/d;->CG()V

    return-void
.end method
