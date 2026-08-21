.class public Lcom/tkay/network/toutiao/TTTYCustomVideo;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYCustomVideo;


# instance fields
.field a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;)V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    return-void
.end method


# virtual methods
.method public getVideoUrl()Ljava/lang/String;
    .locals 1

    .line 22
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 23
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->getVideoUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public reportVideoAutoStart()V
    .locals 1

    .line 65
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 66
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoAutoStart()V

    :cond_0
    return-void
.end method

.method public reportVideoBreak(J)V
    .locals 1

    .line 58
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 59
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoBreak(J)V

    :cond_0
    return-void
.end method

.method public reportVideoContinue(J)V
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 45
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoContinue(J)V

    :cond_0
    return-void
.end method

.method public reportVideoError(JII)V
    .locals 1

    .line 79
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 80
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoError(JII)V

    :cond_0
    return-void
.end method

.method public reportVideoFinish()V
    .locals 1

    .line 51
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 52
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoFinish()V

    :cond_0
    return-void
.end method

.method public reportVideoPause(J)V
    .locals 1

    .line 37
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 38
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoPause(J)V

    :cond_0
    return-void
.end method

.method public reportVideoStart()V
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 31
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoStart()V

    :cond_0
    return-void
.end method

.method public reportVideoStartError(II)V
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTTYCustomVideo;->a:Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;

    if-eqz v0, :cond_0

    .line 73
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfObject$CustomizeVideo;->reportVideoStartError(II)V

    :cond_0
    return-void
.end method
