.class public Lcom/sigmob/sdk/nativead/l;
.super Landroid/view/View;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/nativead/l$a;
    }
.end annotation


# instance fields
.field private a:Lcom/sigmob/sdk/nativead/y;

.field private b:Z

.field private c:Z

.field private d:Lcom/sigmob/sdk/nativead/l$a;

.field private e:I

.field private f:J

.field private g:I

.field private h:I

.field private i:Z

.field private j:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/nativead/l;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/nativead/l;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/l;->b:Z

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/sigmob/sdk/nativead/l;->c:Z

    const-wide/16 p2, 0x0

    iput-wide p2, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    iput p1, p0, Lcom/sigmob/sdk/nativead/l;->g:I

    const/4 p2, -0x1

    iput p2, p0, Lcom/sigmob/sdk/nativead/l;->h:I

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    new-instance p2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p2, p1, p1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/nativead/l;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/nativead/l;)Lcom/sigmob/sdk/nativead/l$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    return-object p0
.end method

.method private b()V
    .locals 9

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/l;->a()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->e()Z

    move-result v0

    if-eqz v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    const-wide/16 v3, 0x0

    if-eqz v0, :cond_a

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/l;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/nativead/l;->a(Landroid/view/View;)I

    move-result v5

    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v6

    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    mul-int/2addr v6, v0

    if-lez v6, :cond_1

    int-to-float v0, v5

    iget v7, p0, Lcom/sigmob/sdk/nativead/l;->e:I

    int-to-float v7, v7

    const/high16 v8, 0x42c80000    # 100.0f

    div-float/2addr v7, v8

    int-to-float v6, v6

    mul-float/2addr v7, v6

    cmpl-float v0, v0, v7

    if-ltz v0, :cond_1

    move v0, v1

    goto :goto_1

    :cond_1
    move v0, v2

    :goto_1
    if-lez v5, :cond_2

    iput-boolean v1, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v6, :cond_3

    invoke-interface {v6}, Lcom/sigmob/sdk/nativead/l$a;->i()V

    goto :goto_2

    :cond_2
    iput-boolean v2, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    iput-wide v3, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    iget-object v6, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v6, :cond_3

    invoke-interface {v6}, Lcom/sigmob/sdk/nativead/l$a;->h()V

    :cond_3
    :goto_2
    if-lez v5, :cond_9

    if-eqz v0, :cond_7

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    if-eqz v0, :cond_7

    iget-wide v5, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    cmp-long v0, v5, v3

    if-nez v0, :cond_4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iput-wide v5, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    :cond_4
    iget-wide v5, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    cmp-long v0, v5, v3

    if-lez v0, :cond_5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    sub-long/2addr v3, v5

    iget v0, p0, Lcom/sigmob/sdk/nativead/l;->g:I

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v5, v0

    cmp-long v0, v3, v5

    if-ltz v0, :cond_5

    goto :goto_3

    :cond_5
    move v1, v2

    :goto_3
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_6

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/l$a;->g()V

    :cond_6
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_d

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/nativead/l$a;->a(Z)V

    goto :goto_5

    :cond_7
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_8

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/l$a;->f()V

    :cond_8
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_c

    invoke-interface {v0, v2}, Lcom/sigmob/sdk/nativead/l$a;->a(Z)V

    goto :goto_4

    :cond_9
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_d

    iget-boolean v1, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    if-eqz v1, :cond_d

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/l$a;->h()V

    goto :goto_5

    :cond_a
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    if-eqz v0, :cond_b

    iget-boolean v1, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    if-eqz v1, :cond_b

    invoke-interface {v0}, Lcom/sigmob/sdk/nativead/l$a;->h()V

    :cond_b
    iput-boolean v2, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    :cond_c
    :goto_4
    iput-wide v3, p0, Lcom/sigmob/sdk/nativead/l;->f:J

    :cond_d
    :goto_5
    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/nativead/l;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->b()V

    return-void
.end method

.method private c()V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->f()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    return-void
.end method

.method private d()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/y;->b()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/y;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/y;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/y;->a(Z)V

    :cond_1
    :goto_0
    return-void
.end method

.method private e()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->b:Z

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/sigmob/sdk/nativead/l;->h:I

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->c:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private f()V
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->b()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/y;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/y;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/nativead/y;->a(Z)V

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public a(Landroid/view/View;)I
    .locals 1

    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    invoke-virtual {p1, v0}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result p1

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v0

    mul-int/2addr p1, v0

    return p1
.end method

.method public a(II)V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->c:Z

    iget-object v1, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    if-eqz v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->c()V

    :cond_0
    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->c:Z

    iput p1, p0, Lcom/sigmob/sdk/nativead/l;->e:I

    iput p2, p0, Lcom/sigmob/sdk/nativead/l;->g:I

    new-instance p1, Lcom/sigmob/sdk/nativead/l$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p0, p2}, Lcom/sigmob/sdk/nativead/l$1;-><init>(Lcom/sigmob/sdk/nativead/l;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/l;->a:Lcom/sigmob/sdk/nativead/y;

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->d()V

    return-void
.end method

.method public a()Z
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/l;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/nativead/l;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 1

    invoke-super {p0}, Landroid/view/View;->onAttachedToWindow()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->b:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->d()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Landroid/view/View;->onDetachedFromWindow()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/nativead/l;->b:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->f()V

    return-void
.end method

.method public onFinishTemporaryDetach()V
    .locals 0

    invoke-super {p0}, Landroid/view/View;->onFinishTemporaryDetach()V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->d()V

    return-void
.end method

.method public onStartTemporaryDetach()V
    .locals 0

    invoke-super {p0}, Landroid/view/View;->onStartTemporaryDetach()V

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->f()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 0

    invoke-super {p0, p1}, Landroid/view/View;->onWindowFocusChanged(Z)V

    iput-boolean p1, p0, Lcom/sigmob/sdk/nativead/l;->c:Z

    iget-boolean p1, p0, Lcom/sigmob/sdk/nativead/l;->i:Z

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->b()V

    :cond_0
    return-void
.end method

.method protected onWindowVisibilityChanged(I)V
    .locals 0

    invoke-super {p0, p1}, Landroid/view/View;->onWindowVisibilityChanged(I)V

    iput p1, p0, Lcom/sigmob/sdk/nativead/l;->h:I

    if-nez p1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->d()V

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/nativead/l;->f()V

    :goto_0
    return-void
.end method

.method public setAdVisibilityStatusChangeListener(Lcom/sigmob/sdk/nativead/l$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/l;->d:Lcom/sigmob/sdk/nativead/l$a;

    return-void
.end method
