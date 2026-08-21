.class Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;
.super Ljava/lang/Object;
.source "PlayerView.java"

# interfaces
.implements Landroid/view/SurfaceHolder$Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/playercommon/PlayerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MySurfaceHoldeCallback"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mbridge/msdk/playercommon/PlayerView;


# direct methods
.method private constructor <init>(Lcom/mbridge/msdk/playercommon/PlayerView;)V
    .locals 0

    .line 385
    iput-object p1, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/playercommon/PlayerView;Lcom/mbridge/msdk/playercommon/PlayerView$1;)V
    .locals 0

    .line 385
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;-><init>(Lcom/mbridge/msdk/playercommon/PlayerView;)V

    return-void
.end method


# virtual methods
.method public surfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 0

    const-string p1, "PlayerView"

    :try_start_0
    const-string p2, "surfaceChanged"

    .line 416
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 418
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$400(Lcom/mbridge/msdk/playercommon/PlayerView;)Z

    move-result p2

    const/4 p3, 0x0

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$600(Lcom/mbridge/msdk/playercommon/PlayerView;)Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->isComplete()Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$700(Lcom/mbridge/msdk/playercommon/PlayerView;)Z

    move-result p2

    if-nez p2, :cond_3

    sget-boolean p2, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez p2, :cond_3

    .line 419
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result p2

    if-eqz p2, :cond_0

    const-string p2, "surfaceChanged  start===="

    .line 420
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 421
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->resumeStart()V

    goto :goto_0

    :cond_0
    const-string p2, "surfaceChanged  PLAY===="

    .line 423
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 424
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/playercommon/PlayerView;->playVideo(I)Z

    .line 426
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$700(Lcom/mbridge/msdk/playercommon/PlayerView;)Z

    move-result p2

    if-eqz p2, :cond_3

    .line 427
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$800(Lcom/mbridge/msdk/playercommon/PlayerView;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 428
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result p2

    if-nez p2, :cond_1

    .line 429
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->prepare()V

    .line 431
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object p2

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->start(Z)V

    goto :goto_1

    .line 433
    :cond_2
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p2}, Lcom/mbridge/msdk/playercommon/PlayerView;->pause()V

    .line 438
    :cond_3
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {p2, p3}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$402(Lcom/mbridge/msdk/playercommon/PlayerView;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p2

    .line 440
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method public surfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 2

    const-string v0, "PlayerView"

    :try_start_0
    const-string v1, "surfaceCreated"

    .line 390
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 391
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object v1

    if-eqz v1, :cond_0

    if-eqz p1, :cond_0

    .line 392
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {v1, p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$202(Lcom/mbridge/msdk/playercommon/PlayerView;Landroid/view/SurfaceHolder;)Landroid/view/SurfaceHolder;

    .line 393
    iget-object v1, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->setDisplay(Landroid/view/SurfaceHolder;)V

    .line 395
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$302(Lcom/mbridge/msdk/playercommon/PlayerView;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 397
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public surfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 2

    const-string p1, "PlayerView"

    :try_start_0
    const-string v0, "surfaceDestroyed "

    .line 404
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 405
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$402(Lcom/mbridge/msdk/playercommon/PlayerView;Z)Z

    .line 406
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$502(Lcom/mbridge/msdk/playercommon/PlayerView;Z)Z

    .line 407
    iget-object v0, p0, Lcom/mbridge/msdk/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-static {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->access$100(Lcom/mbridge/msdk/playercommon/PlayerView;)Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/VideoFeedsPlayer;->pause()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 409
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
