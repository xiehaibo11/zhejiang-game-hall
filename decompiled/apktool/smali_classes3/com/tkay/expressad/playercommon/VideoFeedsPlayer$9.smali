.class Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayStartOnMainThread(J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

.field final synthetic val$allDuration:J


# direct methods
.method constructor <init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;J)V
    .locals 0

    .line 543
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iput-wide p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->val$allDuration:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 546
    iget-wide v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->val$allDuration:J

    long-to-int v0, v0

    .line 548
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 550
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onPlayStarted(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 552
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 556
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 558
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$9;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onPlayStarted(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 560
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_1
    return-void
.end method
