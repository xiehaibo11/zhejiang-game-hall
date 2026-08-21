.class Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;
.super Ljava/util/TimerTask;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->startBufferIngTimer(Ljava/lang/String;)V
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

    .line 312
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iput-object p2, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->val$bufferMsg:Ljava/lang/String;

    invoke-direct {p0}, Ljava/util/TimerTask;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 316
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$700(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-static {v0}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$400(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 318
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    iget-object v1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$3;->val$bufferMsg:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;->access$800(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_1
    return-void

    :catch_0
    move-exception v0

    .line 321
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method
