.class public final Lcom/mbridge/msdk/video/bt/module/b/a;
.super Ljava/lang/Object;
.source "DecoratorRewardVideoListener.java"

# interfaces
.implements Lcom/mbridge/msdk/videocommon/listener/InterVideoOutListener;


# instance fields
.field private a:Lcom/mbridge/msdk/video/bt/module/b/g;

.field private b:Ljava/lang/String;

.field private c:Z


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/bt/module/b/g;)V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 15
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    .line 26
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/video/bt/module/b/g;Ljava/lang/String;Z)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 15
    iput-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    .line 21
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    .line 22
    iput-boolean p3, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    return-void
.end method


# virtual methods
.method public final onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 1

    .line 41
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 42
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/g;->onAdClose(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V

    :cond_0
    return-void
.end method

.method public final onAdCloseWithIVReward(Lcom/mbridge/msdk/out/MBridgeIds;Lcom/mbridge/msdk/out/RewardInfo;)V
    .locals 0

    return-void
.end method

.method public final onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 31
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 32
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/g;->onAdShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 33
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 34
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    const-string v2, "rv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->g(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 79
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/g;->onEndcardShow(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 105
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 106
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/g;->onLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 107
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 108
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    const-string v2, "rv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->b(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 3

    .line 48
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 49
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/g;->onShowFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 50
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 51
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    const-string v2, "rv"

    invoke-virtual {p1, v0, p2, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onVideoAdClicked(ZLcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 0

    .line 58
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz p1, :cond_0

    .line 59
    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/g;->onVideoAdClicked(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 66
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/g;->onVideoComplete(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_0
    return-void
.end method

.method public final onVideoLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    .locals 3

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 86
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/bt/module/b/g;->onVideoLoadFail(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 87
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 88
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    const-string v2, "rv"

    invoke-virtual {p1, v0, p2, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public final onVideoLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V
    .locals 3

    .line 95
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->a:Lcom/mbridge/msdk/video/bt/module/b/g;

    if-eqz v0, :cond_0

    .line 96
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/g;->onVideoLoadSuccess(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 97
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 98
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/f;->a()Lcom/mbridge/msdk/foundation/same/report/f;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->b:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/bt/module/b/a;->c:Z

    const-string v2, "rv"

    invoke-virtual {p1, v0, v2, v1}, Lcom/mbridge/msdk/foundation/same/report/f;->c(Ljava/lang/String;Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method
