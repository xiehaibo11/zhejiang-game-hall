.class final Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$13;
.super Ljava/lang/Object;
.source "MBInterstitialActivity.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/mraid/d$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)V
    .locals 0

    .line 481
    iput-object p1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$13;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(D)V
    .locals 2

    .line 484
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "volume is : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBInterstitialActivity"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 485
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a()Lcom/mbridge/msdk/mbjscommon/mraid/a;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity$13;->a:Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;

    invoke-static {v1}, Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;->a(Lcom/mbridge/msdk/interstitial/view/MBInterstitialActivity;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/mraid/a;->a(Landroid/webkit/WebView;D)V

    return-void
.end method
