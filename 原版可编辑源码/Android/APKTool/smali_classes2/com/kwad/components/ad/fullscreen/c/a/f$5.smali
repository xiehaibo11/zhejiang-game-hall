.class final Lcom/kwad/components/ad/fullscreen/c/a/f$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/c/a/f;->a(D)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic gY:Lcom/kwad/components/ad/fullscreen/c/a/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/a/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/a/f$5;->gY:Lcom/kwad/components/ad/fullscreen/c/a/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-string v0, "ShakePresenter"

    const-string v1, "onShakeEvent openGate2"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/a/f$5;->gY:Lcom/kwad/components/ad/fullscreen/c/a/f;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/a/f;->c(Lcom/kwad/components/ad/fullscreen/c/a/f;)Lcom/kwad/sdk/core/g/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/g/d;->CG()V

    return-void
.end method
