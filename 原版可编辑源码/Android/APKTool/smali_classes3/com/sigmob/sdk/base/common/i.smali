.class public abstract Lcom/sigmob/sdk/base/common/i;
.super Ljava/lang/Object;


# instance fields
.field protected a:Ljava/lang/String;

.field protected b:Landroid/content/Context;

.field protected c:Landroid/widget/RelativeLayout;

.field protected d:Lcom/sigmob/sdk/base/common/j;

.field protected e:Lcom/sigmob/sdk/base/common/e;

.field private f:Landroid/widget/RelativeLayout;

.field private g:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method protected constructor <init>(Landroid/app/Activity;Ljava/lang/String;Lcom/sigmob/sdk/base/common/j;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/i;->g:Ljava/lang/ref/WeakReference;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/i;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/sigmob/sdk/base/common/i;->d:Lcom/sigmob/sdk/base/common/j;

    new-instance p1, Landroid/widget/RelativeLayout;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    invoke-direct {p1, p2}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    return-void
.end method


# virtual methods
.method public a(IILandroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method protected a(Landroid/content/Context;ILandroid/os/Bundle;)V
    .locals 2

    if-eqz p3, :cond_1

    :try_start_0
    const-string v0, "isHalfInterstitial"

    const/4 v1, 0x0

    invoke-virtual {p3, v0, v1}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;Z)Z

    move-result p3

    if-eqz p3, :cond_1

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object p3

    iget p3, p3, Landroid/util/DisplayMetrics;->widthPixels:I

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    const/4 v1, 0x6

    if-ne p2, v1, :cond_0

    invoke-static {p3, v0}, Ljava/lang/Math;->min(II)I

    move-result p2

    mul-int/lit8 p2, p2, 0x55

    div-int/lit8 p2, p2, 0x64

    mul-int/lit8 p3, p2, 0x10

    div-int/lit8 p3, p3, 0x9

    new-instance v0, Lcom/sigmob/sdk/base/common/e;

    invoke-direct {v0, p3, p2}, Lcom/sigmob/sdk/base/common/e;-><init>(II)V

    :goto_0
    iput-object v0, p0, Lcom/sigmob/sdk/base/common/i;->e:Lcom/sigmob/sdk/base/common/e;

    goto :goto_1

    :cond_0
    invoke-static {p3, v0}, Ljava/lang/Math;->min(II)I

    move-result p2

    mul-int/lit8 p2, p2, 0x55

    div-int/lit8 p2, p2, 0x64

    mul-int/lit8 p3, p2, 0x10

    div-int/lit8 p3, p3, 0x9

    new-instance v0, Lcom/sigmob/sdk/base/common/e;

    invoke-direct {v0, p2, p3}, Lcom/sigmob/sdk/base/common/e;-><init>(II)V

    goto :goto_0

    :goto_1
    new-instance p2, Landroid/widget/RelativeLayout;

    invoke-direct {p2, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/i;->f:Landroid/widget/RelativeLayout;

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/i;->e:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/common/e;->a()I

    move-result p2

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/i;->e:Lcom/sigmob/sdk/base/common/e;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/common/e;->b()I

    move-result p3

    invoke-direct {p1, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    const/16 p2, 0xd

    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/i;->f:Landroid/widget/RelativeLayout;

    invoke-virtual {p2, p1}, Landroid/widget/RelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    invoke-virtual {p1}, Landroid/widget/RelativeLayout;->removeAllViews()V

    iget-object p1, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/i;->f:Landroid/widget/RelativeLayout;

    invoke-virtual {p1, p2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public abstract a(Landroid/content/res/Configuration;)V
.end method

.method public abstract a(Landroid/os/Bundle;)V
.end method

.method protected a(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    invoke-static {v1, v0, p1}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p1, "Tried to broadcast a video event without a broadcast identifier to send to."

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->w(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected a(Ljava/lang/String;I)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    invoke-static {v1, v0, p1, p2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    const-string p1, "Tried to broadcast a video event without a broadcast identifier to send to."

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->w(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method protected a(Ljava/lang/String;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->a:Ljava/lang/String;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    const/4 v2, 0x0

    invoke-static {v1, v0, p2, p1, v2}, Lcom/sigmob/sdk/base/common/BaseBroadcastReceiver;->a(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    const-string p1, "Tried to broadcast a video event without a broadcast identifier to send to."

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->w(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public abstract b()V
.end method

.method public abstract c()V
.end method

.method public abstract d()V
.end method

.method public e()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->removeFromParent(Landroid/view/View;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    return-void
.end method

.method public abstract f()V
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected h()Lcom/sigmob/sdk/base/common/j;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->d:Lcom/sigmob/sdk/base/common/j;

    return-object v0
.end method

.method protected i()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->b:Landroid/content/Context;

    return-object v0
.end method

.method protected j()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->f:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    return-object v0
.end method

.method protected k()Landroid/app/Activity;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->c:Landroid/widget/RelativeLayout;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/ViewUtil;->getActivityFromViewTop(Landroid/view/View;)Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/i;->g:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method
