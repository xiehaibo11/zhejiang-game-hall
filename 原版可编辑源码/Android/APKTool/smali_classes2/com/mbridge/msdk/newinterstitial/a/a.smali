.class public final Lcom/mbridge/msdk/newinterstitial/a/a;
.super Ljava/lang/Object;
.source "DecoratorInterstitialListener.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;


# instance fields
.field private a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

.field private b:Ljava/lang/String;

.field private c:Z


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    iput-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;Ljava/lang/String;Z)V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    .line 27
    iput-object p2, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    .line 28
    iput-boolean p3, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    return-void
.end method


# virtual methods
.method public final onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 44
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V

    :cond_0
    return-void
.end method

.method public final onAdCloseWithIVReward(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 75
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onAdCloseWithNIReward(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V

    :cond_0
    return-void
.end method

.method public final onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 33
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 34
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 35
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 36
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    const-string v2, "niv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->g(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 82
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 108
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 109
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onLoadCampaignSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 110
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 111
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    const-string v2, "niv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->b(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 3

    .line 50
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 51
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 52
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 53
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    const-string v2, "niv"

    invoke-virtual {p1, v0, p2, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onVideoAdClicked(ZLcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 60
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz p1, :cond_0

    .line 61
    invoke-interface {p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 68
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onVideoLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 3

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 89
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onResourceLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 90
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 91
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    const-string v2, "niv"

    invoke-virtual {p1, v0, p2, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onVideoLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 98
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->a:Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;

    if-eqz v0, :cond_0

    .line 99
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;->onResourceLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 100
    iget-object p1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 101
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/newinterstitial/a/a;->c:Z

    const-string v2, "niv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->c(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method
