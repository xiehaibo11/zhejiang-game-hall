.class Lcom/sigmob/sdk/videoAd/l$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoAd/l;-><init>(Landroid/app/Activity;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;Landroid/os/Bundle;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field a:Landroid/view/MotionEvent;

.field final synthetic b:Lcom/sigmob/sdk/videoAd/l;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoAd/l;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->a:Landroid/view/MotionEvent;

    return-void
.end method


# virtual methods
.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getFullClickOnVideo()Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->b(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/d;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_7

    :cond_0
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->a:Landroid/view/MotionEvent;

    if-nez p1, :cond_1

    iput-object p2, p0, Lcom/sigmob/sdk/videoAd/l$1;->a:Landroid/view/MotionEvent;

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    iget-object v1, p0, Lcom/sigmob/sdk/videoAd/l$1;->a:Landroid/view/MotionEvent;

    invoke-static {p1, v1, p2}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;Landroid/view/MotionEvent;Landroid/view/MotionEvent;)V

    goto :goto_2

    :cond_2
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_7

    goto :goto_1

    :cond_3
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-ne p1, v0, :cond_6

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->enable_collapse_tool_bar:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    const/4 v1, 0x0

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->a()Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/views/j;->b()Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/base/views/j;->setVisibility(I)V

    goto :goto_0

    :cond_4
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->c(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/views/j;

    move-result-object p1

    const/4 v2, 0x4

    invoke-virtual {p1, v2}, Lcom/sigmob/sdk/base/views/j;->setVisibility(I)V

    :cond_5
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->b:Lcom/sigmob/sdk/videoAd/l;

    invoke-static {p1}, Lcom/sigmob/sdk/videoAd/l;->a(Lcom/sigmob/sdk/videoAd/l;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p1

    const-string v2, "useless_video_click"

    invoke-static {p1, p2, v2, v1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/view/MotionEvent;Ljava/lang/String;Z)V

    :cond_6
    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    if-nez p1, :cond_7

    :goto_1
    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/videoAd/l$1;->a:Landroid/view/MotionEvent;

    :cond_7
    :goto_2
    return v0
.end method
