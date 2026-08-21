.class final Lcom/kwad/components/ad/interstitial/d/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/t$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/interstitial/d/d;->dg()Lcom/kwad/components/core/webview/jshandler/t;
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

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/d$2;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$2;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/d$2;->kd:Lcom/kwad/components/ad/interstitial/d/d;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/d;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    return-void
.end method
