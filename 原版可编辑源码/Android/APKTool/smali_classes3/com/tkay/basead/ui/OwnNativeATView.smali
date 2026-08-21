.class public Lcom/tkay/basead/ui/OwnNativeATView;
.super Landroid/widget/FrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/ui/OwnNativeATView$a;
    }
.end annotation


# instance fields
.field a:I

.field b:I

.field c:I

.field d:I

.field e:I

.field f:I

.field g:I

.field h:I

.field private i:Lcom/tkay/basead/ui/OwnNativeATView$a;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 30
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    .line 47
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 57
    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->c:I

    .line 58
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->d:I

    .line 60
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->g:I

    .line 61
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->h:I

    goto :goto_0

    .line 49
    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->a:I

    .line 50
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->b:I

    .line 52
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->e:I

    .line 53
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/OwnNativeATView;->f:I

    .line 65
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public getAdClickRecord()Lcom/tkay/basead/c/a;
    .locals 2

    .line 69
    new-instance v0, Lcom/tkay/basead/c/a;

    invoke-direct {v0}, Lcom/tkay/basead/c/a;-><init>()V

    .line 70
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->a:I

    iput v1, v0, Lcom/tkay/basead/c/a;->a:I

    .line 71
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->b:I

    iput v1, v0, Lcom/tkay/basead/c/a;->b:I

    .line 72
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->c:I

    iput v1, v0, Lcom/tkay/basead/c/a;->c:I

    .line 73
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->d:I

    iput v1, v0, Lcom/tkay/basead/c/a;->d:I

    .line 75
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->e:I

    iput v1, v0, Lcom/tkay/basead/c/a;->e:I

    .line 76
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->f:I

    iput v1, v0, Lcom/tkay/basead/c/a;->f:I

    .line 77
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->g:I

    iput v1, v0, Lcom/tkay/basead/c/a;->g:I

    .line 78
    iget v1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->h:I

    iput v1, v0, Lcom/tkay/basead/c/a;->h:I

    return-object v0
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 85
    invoke-super {p0}, Landroid/widget/FrameLayout;->onDetachedFromWindow()V

    return-void
.end method

.method public setWindowEventListener(Lcom/tkay/basead/ui/OwnNativeATView$a;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/tkay/basead/ui/OwnNativeATView;->i:Lcom/tkay/basead/ui/OwnNativeATView$a;

    return-void
.end method
