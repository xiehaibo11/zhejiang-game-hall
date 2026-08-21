.class Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;Landroid/os/Looper;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/tkay/expressad/playercommon/VideoFeedsPlayer$1;->this$0:Lcom/tkay/expressad/playercommon/VideoFeedsPlayer;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 0

    .line 102
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    return-void
.end method
