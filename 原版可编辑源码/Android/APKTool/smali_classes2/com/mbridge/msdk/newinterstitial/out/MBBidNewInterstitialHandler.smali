.class public Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;
.super Ljava/lang/Object;
.source "MBBidNewInterstitialHandler.java"


# instance fields
.field private a:Lcom/mbridge/msdk/reward/a/a;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 27
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    .line 29
    :cond_0
    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 30
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 31
    invoke-static {p3, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 33
    :cond_1
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 41
    iput-object p2, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    .line 43
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-nez v0, :cond_0

    .line 44
    new-instance v0, Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/reward/a/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x1

    .line 45
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Z)V

    .line 46
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->b(Z)V

    .line 48
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBBidNewInterstitialHandler"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public clearVideoCache()V
    .locals 1

    .line 119
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 1878
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 123
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 89
    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public isBidReady()Z
    .locals 5

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    const-string v1, "niv"

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 70
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/reward/a/a;->e(Z)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 72
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    invoke-virtual {v3, v4, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->d(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_0

    .line 74
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    invoke-virtual {v3, v4, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    :goto_0
    return v0

    .line 78
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v3, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    invoke-virtual {v0, v3, v1, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    const/4 v0, 0x0

    return v0
.end method

.method public loadFormSelfFilling()V
    .locals 4

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    const-string v2, "niv"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 64
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->d(Z)V

    :cond_0
    return-void
.end method

.method public loadFromBid(Ljava/lang/String;)V
    .locals 4

    .line 55
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    const/4 v2, 0x1

    const-string v3, "niv"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0, v2, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public playVideoMute(I)V
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 129
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/reward/a/a;->a(I)V

    :cond_0
    return-void
.end method

.method public setAlertDialogText(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 166
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 167
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setIVRewardEnable(ID)V
    .locals 4

    .line 149
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 150
    sget v1, Lcom/mbridge/msdk/foundation/same/a;->y:I

    const-wide/high16 v2, 0x4059000000000000L    # 100.0

    mul-double/2addr p2, v2

    double-to-int p2, p2

    invoke-virtual {v0, p1, v1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(III)V

    :cond_0
    return-void
.end method

.method public setIVRewardEnable(II)V
    .locals 2

    .line 143
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 144
    sget v1, Lcom/mbridge/msdk/foundation/same/a;->z:I

    invoke-virtual {v0, p1, v1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(III)V

    :cond_0
    return-void
.end method

.method public setInterstitialVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V
    .locals 4

    .line 109
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 110
    new-instance v1, Lcom/mbridge/msdk/newinterstitial/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-direct {v1, p1, v2, v3}, Lcom/mbridge/msdk/newinterstitial/a/a;-><init>(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V

    :cond_0
    return-void
.end method

.method public setRewardVideoListener(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;)V
    .locals 4

    .line 103
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 104
    new-instance v1, Lcom/mbridge/msdk/newinterstitial/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-direct {v1, p1, v2, v3}, Lcom/mbridge/msdk/newinterstitial/a/a;-><init>(Lcom/mbridge/msdk/newinterstitial/out/NewInterstitialListener;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V

    :cond_0
    return-void
.end method

.method public showFromBid()V
    .locals 4

    .line 95
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->b:Ljava/lang/String;

    const-string v2, "niv"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 96
    iget-object v0, p0, Lcom/mbridge/msdk/newinterstitial/out/MBBidNewInterstitialHandler;->a:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 97
    invoke-virtual {v0, v1, v1, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
