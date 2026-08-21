.class final Lcom/kwad/components/ad/splashscreen/c/m$5$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/m$5;->onAnimationEnd(Landroid/animation/Animator;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Dt:Lcom/kwad/components/ad/splashscreen/c/m$5;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/m$5;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m$5$2;->Dt:Lcom/kwad/components/ad/splashscreen/c/m$5;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "SplashShakePresenter"

    const-string v1, "onShakeEvent openGate2"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m$5$2;->Dt:Lcom/kwad/components/ad/splashscreen/c/m$5;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/m$5;->Ds:Lcom/kwad/components/ad/splashscreen/c/m;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/m;->d(Lcom/kwad/components/ad/splashscreen/c/m;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/g/d;->CG()V

    return-void
.end method
