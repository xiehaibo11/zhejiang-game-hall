.class Lcom/sigmob/sdk/base/blurkit/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/Choreographer$FrameCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/blurkit/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/blurkit/c;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/blurkit/c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c$1;->a:Lcom/sigmob/sdk/base/blurkit/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public doFrame(J)V
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/base/blurkit/c$1;->a:Lcom/sigmob/sdk/base/blurkit/c;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/blurkit/c;->invalidate()V

    invoke-static {}, Landroid/view/Choreographer;->getInstance()Landroid/view/Choreographer;

    move-result-object p1

    iget-object p2, p0, Lcom/sigmob/sdk/base/blurkit/c$1;->a:Lcom/sigmob/sdk/base/blurkit/c;

    invoke-static {p2}, Lcom/sigmob/sdk/base/blurkit/c;->a(Lcom/sigmob/sdk/base/blurkit/c;)I

    move-result p2

    const/16 v0, 0x3e8

    div-int/2addr v0, p2

    int-to-long v0, v0

    invoke-virtual {p1, p0, v0, v1}, Landroid/view/Choreographer;->postFrameCallbackDelayed(Landroid/view/Choreographer$FrameCallback;J)V

    return-void
.end method
