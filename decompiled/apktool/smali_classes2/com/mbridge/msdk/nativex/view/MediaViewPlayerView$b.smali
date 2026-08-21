.class final Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;
.super Ljava/lang/Object;
.source "MediaViewPlayerView.java"

# interfaces
.implements Landroid/view/TextureView$SurfaceTextureListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "b"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    .locals 0

    .line 1006
    iput-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$1;)V
    .locals 0

    .line 1006
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;-><init>(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    return-void
.end method


# virtual methods
.method public final onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 1

    const-string p2, "MediaViewPlayerView"

    .line 1010
    :try_start_0
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSurfaceTextureAvailable \u8fdb\u6765: "

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "appname"

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " url:"

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->m(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p2, p3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1011
    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    new-instance v0, Landroid/view/Surface;

    invoke-direct {v0, p1}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    invoke-static {p3, v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->a(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Landroid/view/Surface;)Landroid/view/Surface;

    .line 1012
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    const/4 p3, 0x1

    invoke-static {p1, p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z

    .line 1013
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1, p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->c(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z

    .line 1014
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->n(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "onSurfaceTextureAvailable \u5728\u5168\u5c4f"

    .line 1015
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1016
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->o(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1017
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    const/4 p3, 0x0

    invoke-static {p1, p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z

    .line 1018
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1, p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->e(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z

    const-string p1, "onSurfaceTextureAvailable \u5728\u5168\u5c4f mIsNeedToRepeatPrepare\u7f6e\u4e3afalse"

    .line 1019
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1021
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->p(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z

    move-result p1

    if-eqz p1, :cond_2

    goto :goto_1

    :cond_2
    const-string p1, "onSurfaceTextureAvailable \u5728\u5168\u5c4f startOrPlayVideo"

    .line 1025
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1026
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->startOrPlayVideo()V

    goto/16 :goto_4

    :cond_3
    :goto_1
    const-string p1, "onSurfaceTextureAvailable \u5728\u5168\u5c4f showPlayEndView"

    .line 1022
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1023
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    goto/16 :goto_4

    :cond_4
    const-string p1, "onSurfaceTextureAvailable \u5728\u534a\u5c4f"

    .line 1029
    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1030
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->q(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string p3, " isComplete:"

    if-eqz p1, :cond_7

    .line 1031
    :try_start_1
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result p1

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p1

    if-nez p1, :cond_5

    goto :goto_2

    .line 1035
    :cond_5
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSurfaceTextureAvailable \u5728\u534a\u5c4f \u81ea\u52a8\u64ad\u653eshowPlayEndView hasPrepare():"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1036
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V

    goto/16 :goto_4

    .line 1032
    :cond_6
    :goto_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSurfaceTextureAvailable \u5728\u534a\u5c4f \u81ea\u52a8\u64ad\u653estartOrPlayVideo hasPrepare():"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1033
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->startOrPlayVideo()V

    goto :goto_4

    .line 1039
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result p1

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p1

    if-eqz p1, :cond_8

    goto :goto_3

    .line 1043
    :cond_8
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSurfaceTextureAvailable \u5728\u534a\u5c4f startOrPlayVideo hasPrepare():"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1044
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->startOrPlayVideo()V

    goto :goto_4

    .line 1040
    :cond_9
    :goto_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onSurfaceTextureAvailable \u5728\u534a\u5c4f \u70b9\u51fb\u64ad\u653eshowPlayEndView hasPrepare():"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->hasPrepare()Z

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {p3}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->isComplete()Z

    move-result p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1041
    iget-object p1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {p1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->k(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    .line 1049
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method public final onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 3

    const-string p1, "MediaViewPlayerView"

    const/4 v0, 0x1

    .line 1061
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onSurfaceTextureDestroyed:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    if-nez v2, :cond_0

    const-string v2, "appname"

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->l(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v2

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1062
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->r(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;)Lcom/mbridge/msdk/playercommon/VideoNativePlayer;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/VideoNativePlayer;->isPlayIng()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 1063
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->pause()V

    .line 1069
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    invoke-static {v1, v0}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->d(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z

    .line 1070
    iget-object v1, p0, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView$b;->a:Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;

    const/4 v2, 0x0

    invoke-static {v1, v2}, Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;->b(Lcom/mbridge/msdk/nativex/view/MediaViewPlayerView;Z)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    .line 1072
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return v0
.end method

.method public final onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 0

    const-string p1, "MediaViewPlayerView"

    const-string p2, "onSurfaceTextureSizeChanged "

    .line 1055
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    return-void
.end method
