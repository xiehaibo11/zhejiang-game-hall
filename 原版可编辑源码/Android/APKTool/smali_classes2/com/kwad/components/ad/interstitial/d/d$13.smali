.class final Lcom/kwad/components/ad/interstitial/d/d$13;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/z$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dp()Lcom/kwad/components/core/webview/jshandler/z;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic kd:Lcom/kwad/components/ad/interstitial/d/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/interstitial/d/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/z$a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->r(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/app/Dialog;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$13;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->s(Lcom/kwad/components/ad/interstitial/d/d;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d$13$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/interstitial/d/d$13$1;-><init>(Lcom/kwad/components/ad/interstitial/d/d$13;Lcom/kwad/components/core/webview/jshandler/z$a;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method
