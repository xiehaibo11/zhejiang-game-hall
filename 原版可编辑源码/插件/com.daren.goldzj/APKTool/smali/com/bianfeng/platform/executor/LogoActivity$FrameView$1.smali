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

    .line 1
    iput-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;->this$1:Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAnimationChanged(IZ)V
    .locals 2

    if-eqz p2, :cond_0

    .line 1
    iget-object p1, p0, Lcom/bianfeng/platform/executor/LogoActivity$FrameView$1;->this$1:Lcom/bianfeng/platform/executor/LogoActivity$FrameView;

    iget-object p1, p1, Lcom/bianfeng/platform/executor/LogoActivity$FrameView;->this$0:Lcom/bianfeng/platform/executor/LogoActivity;

    iget-object p2, p1, Lcom/bianfeng/platform/executor/LogoActivity;->handler:Landroid/os/Handler;

    iget p1, p1, Lcom/bianfeng/platform/executor/LogoActivity;->DURATION_FRAME:I

    int-to-long v0, p1

    const/4 p1, 0x0

    invoke-virtual {p2, p1, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    :cond_0
    return-void
.end method
