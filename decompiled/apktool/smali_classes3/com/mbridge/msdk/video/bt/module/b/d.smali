.class public final Lcom/mbridge/msdk/video/bt/module/b/d;
.super Lcom/mbridge/msdk/video/bt/module/b/c;
.source "H5ShowRewardListener.java"


# instance fields
.field private a:Lcom/mbridge/msdk/video/bt/module/a/c;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/video/bt/module/a/c;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/mbridge/msdk/video/bt/module/b/c;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    .line 17
    iput-object p2, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 22
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onAdShow"

    .line 23
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 24
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onAutoLoad"

    .line 71
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 72
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2, p3}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 38
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onShowFail"

    .line 39
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onVideoComplete"

    .line 55
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/video/bt/module/a/c;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(ZLcom/mbridge/msdk/videocommon/b/d;)V
    .locals 2

    .line 30
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onAdClose"

    .line 31
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 32
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;ZLcom/mbridge/msdk/videocommon/b/d;)V

    :cond_0
    return-void
.end method

.method public final a(ZLjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 46
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz p1, :cond_0

    const-string p1, "H5ShowRewardListener"

    const-string v0, "onVideoAdClicked"

    .line 47
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 48
    iget-object p1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {p1, v0, p2, p3}, Lcom/mbridge/msdk/video/bt/module/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    if-eqz v0, :cond_0

    const-string v0, "H5ShowRewardListener"

    const-string v1, "onEndcardShow"

    .line 63
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 64
    iget-object v0, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->a:Lcom/mbridge/msdk/video/bt/module/a/c;

    iget-object v1, p0, Lcom/mbridge/msdk/video/bt/module/b/d;->b:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/mbridge/msdk/video/bt/module/a/c;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
