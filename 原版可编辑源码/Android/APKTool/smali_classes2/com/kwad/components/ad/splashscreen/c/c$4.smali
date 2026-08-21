.class final Lcom/kwad/components/ad/splashscreen/c/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/c;->kS()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic CJ:Lcom/kwad/components/ad/splashscreen/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c$4;->CJ:Lcom/kwad/components/ad/splashscreen/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    invoke-static {}, Lcom/kwad/components/core/e/c/b;->mZ()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c$4;->CJ:Lcom/kwad/components/ad/splashscreen/c/c;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    const-wide/16 v1, 0x3e8

    invoke-virtual {v0, p0, v1, v2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c$4;->CJ:Lcom/kwad/components/ad/splashscreen/c/c;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/h;->kG()V

    return-void
.end method
