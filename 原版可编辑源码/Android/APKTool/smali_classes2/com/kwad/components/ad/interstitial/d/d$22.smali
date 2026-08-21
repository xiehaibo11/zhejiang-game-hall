.class final Lcom/kwad/components/ad/interstitial/d/d$22;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->getWebListener()Lcom/kwad/sdk/core/webview/KsAdWebView$d;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$22;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 0

    return-void
.end method

.method public final onPageStart()V
    .locals 0

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$22;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    const-string p2, "1"

    invoke-static {p1, p2}, Lcom/kwad/components/ad/interstitial/d/d;->a(Lcom/kwad/components/ad/interstitial/d/d;Ljava/lang/String;)V

    return-void
.end method
