.class final Lcom/kwad/components/ad/interstitial/d/d$6;
.super Lcom/kwad/components/core/webview/b/a/o;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dk()Lcom/kwad/components/core/webview/b/a/o;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$6;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/o;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/a/o;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/m;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/m;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$6;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->m(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
