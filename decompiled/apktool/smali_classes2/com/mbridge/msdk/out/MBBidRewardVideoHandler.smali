.class public Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;
.super Ljava/lang/Object;
.source "MBBidRewardVideoHandler.java"


# static fields
.field private static final AD_TYPE:Ljava/lang/String; = "rv"

.field private static final TAG:Ljava/lang/String; = "MBBidRewardVideoHandler"


# instance fields
.field private controller:Lcom/mbridge/msdk/reward/a/a;

.field private unitId:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 30
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 31
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    .line 33
    :cond_0
    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 34
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 35
    invoke-static {p3, p1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 37
    :cond_1
    invoke-direct {p0, p2, p3}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->initMBBidRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    invoke-static {p2}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 42
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 43
    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 45
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->initMBBidRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private initMBBidRewardVideoHandler(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 49
    iput-object p2, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    .line 51
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-nez v0, :cond_0

    .line 52
    new-instance v0, Lcom/mbridge/msdk/reward/a/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/reward/a/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x0

    .line 53
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Z)V

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->b(Z)V

    .line 56
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 58
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "MBBidRewardVideoHandler"

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public clearVideoCache()V
    .locals 1

    .line 127
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 1878
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/x;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 131
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 75
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 76
    invoke-virtual {v0}, Lcom/mbridge/msdk/reward/a/a;->b()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public isBidReady()Z
    .locals 5

    .line 82
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    const/4 v1, 0x0

    const-string v2, "rv"

    if-eqz v0, :cond_1

    .line 83
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->e(Z)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 85
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v3, v4, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->d(Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_0

    .line 87
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v3, v4, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    :goto_0
    return v0

    .line 91
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    invoke-virtual {v0, v3, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->e(Ljava/lang/String;Ljava/lang/String;Z)V

    return v1
.end method

.method public loadFromBid(Ljava/lang/String;)V
    .locals 4

    .line 63
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    const/4 v2, 0x1

    const-string v3, "rv"

    invoke-virtual {v0, v1, v3, v2}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 64
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {v0, v2, p1}, Lcom/mbridge/msdk/reward/a/a;->a(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public playVideoMute(I)V
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 137
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/reward/a/a;->a(I)V

    :cond_0
    return-void
.end method

.method public setAlertDialogText(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 154
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setRewardPlus(Z)V
    .locals 1

    .line 164
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 165
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/reward/a/a;->c(Z)V

    :cond_0
    return-void
.end method

.method public setRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/g;)V
    .locals 4

    .line 117
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    .line 118
    new-instance v1, Lcom/mbridge/msdk/video/bt/module/b/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    const/4 v3, 0x1

    invoke-direct {v1, p1, v2, v3}, Lcom/mbridge/msdk/video/bt/module/b/a;-><init>(Lcom/mbridge/msdk/video/bt/module/b/g;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;)V

    :cond_0
    return-void
.end method

.method public showFromBid()V
    .locals 4

    .line 96
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 98
    invoke-virtual {v0, v1, v1, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public showFromBid(Ljava/lang/String;)V
    .locals 4

    .line 103
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 104
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 105
    invoke-virtual {v0, v1, p1, v1}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public showFromBid(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 110
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->unitId:Ljava/lang/String;

    const-string v2, "rv"

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/f;->f(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 111
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBBidRewardVideoHandler;->controller:Lcom/mbridge/msdk/reward/a/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 112
    invoke-virtual {v0, v1, p1, p2}, Lcom/mbridge/msdk/reward/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
