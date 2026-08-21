.class Lcom/sigmob/sdk/base/views/j$4;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/animation/Animation$AnimationListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/views/j;->i()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/views/j;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/views/j;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/j$4;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAnimationEnd(Landroid/view/animation/Animation;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$4;->a:Lcom/sigmob/sdk/base/views/j;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/views/j;->a(Lcom/sigmob/sdk/base/views/j;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$4;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/j;->a(Lcom/sigmob/sdk/base/views/j;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->clearAnimation()V

    iget-object p1, p0, Lcom/sigmob/sdk/base/views/j$4;->a:Lcom/sigmob/sdk/base/views/j;

    invoke-static {p1}, Lcom/sigmob/sdk/base/views/j;->b(Lcom/sigmob/sdk/base/views/j;)V

    const-string p1, "startUpToDownAnimator end"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onAnimationRepeat(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method

.method public onAnimationStart(Landroid/view/animation/Animation;)V
    .locals 0

    return-void
.end method
