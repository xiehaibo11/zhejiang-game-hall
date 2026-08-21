.class final Lcom/kwad/components/ad/interstitial/d/d$5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/b/a/u$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dj()Lcom/kwad/components/core/webview/b/a/u;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$5;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$5;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/d;->h(Lcom/kwad/components/ad/interstitial/d/d;)Lcom/kwad/sdk/core/video/videoview/a;

    move-result-object v0

    iget-boolean p1, p1, Lcom/kwad/components/core/webview/b/b/m;->Xa:Z

    xor-int/lit8 p1, p1, 0x1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/video/videoview/a;->setVideoSoundEnable(Z)V

    return-void
.end method
