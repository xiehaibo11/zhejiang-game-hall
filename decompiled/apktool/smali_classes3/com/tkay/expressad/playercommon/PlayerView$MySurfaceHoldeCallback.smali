.class Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/SurfaceHolder$Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/playercommon/PlayerView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MySurfaceHoldeCallback"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/expressad/playercommon/PlayerView;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/playercommon/PlayerView;)V
    .locals 0

    .line 372
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/playercommon/PlayerView;Lcom/tkay/expressad/playercommon/PlayerView$1;)V
    .locals 0

    .line 372
    invoke-direct {p0, p1}, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;-><init>(Lcom/tkay/expressad/playercommon/PlayerView;)V

    return-void
.end method


# virtual methods
.method public surfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 0

    .line 405
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$400(Lcom/tkay/expressad/playercommon/PlayerView;)Z

    move-result p1

    const/4 p2, 0x0

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$600(Lcom/tkay/expressad/playercommon/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->isComplete()Z

    move-result p1

    if-nez p1, :cond_4

    sget-boolean p1, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez p1, :cond_4

    .line 406
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$700(Lcom/tkay/expressad/playercommon/PlayerView;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 407
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 409
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->resumeStart()V

    goto :goto_0

    .line 412
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo(I)Z

    goto :goto_0

    .line 415
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$800(Lcom/tkay/expressad/playercommon/PlayerView;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 416
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->hasPrepare()Z

    move-result p1

    if-nez p1, :cond_2

    .line 417
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->prepare()V

    .line 419
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->start(Z)V

    goto :goto_0

    .line 421
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->pause()V

    .line 426
    :cond_4
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1, p2}, Lcom/tkay/expressad/playercommon/PlayerView;->access$402(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 428
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public surfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 1

    .line 378
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object v0

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 379
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$202(Lcom/tkay/expressad/playercommon/PlayerView;Landroid/view/SurfaceHolder;)Landroid/view/SurfaceHolder;

    .line 380
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->setDisplay(Landroid/view/SurfaceHolder;)V

    .line 382
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v0, 0x0

    invoke-static {p1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->access$302(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 384
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public surfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 1

    .line 392
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->access$402(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z

    .line 393
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->access$502(Lcom/tkay/expressad/playercommon/PlayerView;Z)Z

    .line 394
    iget-object p1, p0, Lcom/tkay/expressad/playercommon/PlayerView$MySurfaceHoldeCallback;->this$0:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-static {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->access$100(Lcom/tkay/expressad/playercommon/PlayerView;)Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->pause()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 396
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
