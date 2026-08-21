.class Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;
.super Ljava/lang/Object;
.source "LogoActivity.java"

# interfaces
.implements Lcom/bianfeng/platform/executor/LogoActivity$AnimationFinishListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->initAnimationDrawable()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/platform/executor/LogoActivity$FrameView;


# direct methods
.method constructor <init>(Lcom/bianfeng/platform/executor/LogoActivity$FrameView;)V
    .locals 0
    .param p1, "this$1"    # Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    .line 110
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;->this$1:Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAnimationChanged(IZ)V
    .locals 5
    .param p1, "index"    # I
    .param p2, "finished"    # Z

    .line 113
    if-eqz p2, :cond_0

    .line 114
    iget-object v0, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;->this$1:Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    iget-object v0, v0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget-object v1, v0, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    const/4 v2, 0x0

    iget v0, v0, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    int-to-long v3, v0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 116
    :cond_0
    return-void
.end method
