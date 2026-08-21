.class Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->postOnPlayProgressOnMainThread(II)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

.field final synthetic val$allDurationSecond:I

.field final synthetic val$curPlayPosition:I


# direct methods
.method constructor <init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;II)V
    .locals 0

    .line 442
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iput p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$curPlayPosition:I

    iput p3, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$allDurationSecond:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 446
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 448
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1100(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$curPlayPosition:I

    iget v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$allDurationSecond:I

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onPlayProgress(II)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 450
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 454
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 456
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$1200(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;

    move-result-object v0

    iget v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$curPlayPosition:I

    iget v2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$6;->val$allDurationSecond:I

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/playercommon/VideoPlayerStatusListener;->onPlayProgress(II)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 458
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_1
    return-void
.end method
