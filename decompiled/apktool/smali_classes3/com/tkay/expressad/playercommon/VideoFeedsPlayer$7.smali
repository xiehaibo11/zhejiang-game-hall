.class Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnBufferingStarOnMainThread(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

.field final synthetic val$bufferMsg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V
    .locals 0

    .line 477
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iput-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->val$bufferMsg:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 481
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 483
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->val$bufferMsg:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onBufferingStart(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 485
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 489
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 491
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$7;->val$bufferMsg:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onBufferingStart(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 493
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_1
    return-void
.end method
