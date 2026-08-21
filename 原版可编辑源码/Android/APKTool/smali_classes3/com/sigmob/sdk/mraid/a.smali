.class public Lcom/sigmob/sdk/mraid/a;
.super Landroid/widget/FrameLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/a$c;,
        Lcom/sigmob/sdk/mraid/a$a;,
        Lcom/sigmob/sdk/mraid/a$b;
    }
.end annotation


# static fields
.field static final a:F = 30.0f

.field static final b:F = 50.0f

.field static final c:F = 8.0f


# instance fields
.field private final d:I

.field private e:Lcom/sigmob/sdk/mraid/a$b;

.field private final f:Landroid/graphics/drawable/StateListDrawable;

.field private g:Lcom/sigmob/sdk/mraid/a$a;

.field private final h:I

.field private final i:I

.field private final j:I

.field private k:Z

.field private final l:Landroid/graphics/Rect;

.field private final m:Landroid/graphics/Rect;

.field private final n:Landroid/graphics/Rect;

.field private final o:Landroid/graphics/Rect;

.field private p:Z

.field private q:Lcom/sigmob/sdk/mraid/a$c;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-direct {p0, p1, v0, v1}, Lcom/sigmob/sdk/mraid/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/mraid/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2}, Landroid/graphics/Rect;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->l:Landroid/graphics/Rect;

    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2}, Landroid/graphics/Rect;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2}, Landroid/graphics/Rect;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->n:Landroid/graphics/Rect;

    new-instance p2, Landroid/graphics/Rect;

    invoke-direct {p2}, Landroid/graphics/Rect;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->o:Landroid/graphics/Rect;

    new-instance p2, Landroid/graphics/drawable/StateListDrawable;

    invoke-direct {p2}, Landroid/graphics/drawable/StateListDrawable;-><init>()V

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    sget-object p2, Lcom/sigmob/sdk/mraid/a$a;->c:Lcom/sigmob/sdk/mraid/a$a;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/a;->g:Lcom/sigmob/sdk/mraid/a$a;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    sget-object p3, Lcom/sigmob/sdk/mraid/a;->EMPTY_STATE_SET:[I

    invoke-virtual {p2, p3}, Landroid/graphics/drawable/StateListDrawable;->setState([I)Z

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {p2, p0}, Landroid/graphics/drawable/StateListDrawable;->setCallback(Landroid/graphics/drawable/Drawable$Callback;)V

    invoke-static {p1}, Landroid/view/ViewConfiguration;->get(Landroid/content/Context;)Landroid/view/ViewConfiguration;

    move-result-object p2

    invoke-virtual {p2}, Landroid/view/ViewConfiguration;->getScaledTouchSlop()I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/mraid/a;->d:I

    const/high16 p2, 0x42480000    # 50.0f

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/mraid/a;->h:I

    const/high16 p2, 0x41f00000    # 30.0f

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result p2

    iput p2, p0, Lcom/sigmob/sdk/mraid/a;->i:I

    const/high16 p2, 0x41000000    # 8.0f

    invoke-static {p2, p1}, Lcom/czhj/sdk/common/utils/Dips;->asIntPixels(FLandroid/content/Context;)I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/mraid/a;->j:I

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/a;->setWillNotDraw(Z)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/a;->p:Z

    return-void
.end method

.method private a(Lcom/sigmob/sdk/mraid/a$a;ILandroid/graphics/Rect;Landroid/graphics/Rect;)V
    .locals 0

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/a$a;->a()I

    move-result p1

    invoke-static {p1, p2, p2, p3, p4}, Landroid/view/Gravity;->apply(IIILandroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid/a;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid/a;->setClosePressed(Z)V

    return-void
.end method

.method private b(Lcom/sigmob/sdk/mraid/a$a;Landroid/graphics/Rect;Landroid/graphics/Rect;)V
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/mraid/a;->i:I

    invoke-direct {p0, p1, v0, p2, p3}, Lcom/sigmob/sdk/mraid/a;->a(Lcom/sigmob/sdk/mraid/a$a;ILandroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method private c()V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/mraid/a;->playSoundEffect(I)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->e:Lcom/sigmob/sdk/mraid/a$b;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/sigmob/sdk/mraid/a$b;->a()V

    :cond_0
    return-void
.end method

.method private setClosePressed(Z)V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->b()Z

    move-result v0

    if-ne p1, v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    if-eqz p1, :cond_1

    sget-object p1, Lcom/sigmob/sdk/mraid/a;->SELECTED_STATE_SET:[I

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/sigmob/sdk/mraid/a;->EMPTY_STATE_SET:[I

    :goto_0
    invoke-virtual {v0, p1}, Landroid/graphics/drawable/StateListDrawable;->setState([I)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/a;->invalidate(Landroid/graphics/Rect;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/sigmob/sdk/mraid/a$a;Landroid/graphics/Rect;Landroid/graphics/Rect;)V
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/mraid/a;->h:I

    invoke-direct {p0, p1, v0, p2, p3}, Lcom/sigmob/sdk/mraid/a;->a(Lcom/sigmob/sdk/mraid/a$a;ILandroid/graphics/Rect;Landroid/graphics/Rect;)V

    return-void
.end method

.method a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/a;->p:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/StateListDrawable;->isVisible()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method a(III)Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->left:I

    sub-int/2addr v0, p3

    if-lt p1, v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v0, p3

    if-lt p2, v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    iget v0, v0, Landroid/graphics/Rect;->right:I

    add-int/2addr v0, p3

    if-ge p1, v0, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    iget p1, p1, Landroid/graphics/Rect;->bottom:I

    add-int/2addr p1, p3

    if-ge p2, p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method b()Z
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/StateListDrawable;->getState()[I

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/mraid/a;->SELECTED_STATE_SET:[I

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public draw(Landroid/graphics/Canvas;)V
    .locals 4

    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->draw(Landroid/graphics/Canvas;)V

    iget-boolean v0, p0, Lcom/sigmob/sdk/mraid/a;->k:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/mraid/a;->k:Z

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/a;->l:Landroid/graphics/Rect;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->getWidth()I

    move-result v2

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->getHeight()I

    move-result v3

    invoke-virtual {v1, v0, v0, v2, v3}, Landroid/graphics/Rect;->set(IIII)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->g:Lcom/sigmob/sdk/mraid/a$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/a;->l:Landroid/graphics/Rect;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    invoke-virtual {p0, v0, v1, v2}, Lcom/sigmob/sdk/mraid/a;->a(Lcom/sigmob/sdk/mraid/a$a;Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->o:Landroid/graphics/Rect;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    invoke-virtual {v0, v1}, Landroid/graphics/Rect;->set(Landroid/graphics/Rect;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->o:Landroid/graphics/Rect;

    iget v1, p0, Lcom/sigmob/sdk/mraid/a;->j:I

    invoke-virtual {v0, v1, v1}, Landroid/graphics/Rect;->inset(II)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->g:Lcom/sigmob/sdk/mraid/a$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/a;->o:Landroid/graphics/Rect;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/a;->n:Landroid/graphics/Rect;

    invoke-direct {p0, v0, v1, v2}, Lcom/sigmob/sdk/mraid/a;->b(Lcom/sigmob/sdk/mraid/a$a;Landroid/graphics/Rect;Landroid/graphics/Rect;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/a;->n:Landroid/graphics/Rect;

    invoke-virtual {v0, v1}, Landroid/graphics/drawable/StateListDrawable;->setBounds(Landroid/graphics/Rect;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {v0}, Landroid/graphics/drawable/StateListDrawable;->isVisible()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/StateListDrawable;->draw(Landroid/graphics/Canvas;)V

    :cond_1
    return-void
.end method

.method getCloseBounds()Landroid/graphics/Rect;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    return-object v0
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    float-to-int p1, p1

    invoke-virtual {p0, v0, p1, v1}, Lcom/sigmob/sdk/mraid/a;->a(III)Z

    move-result p1

    return p1
.end method

.method protected onSizeChanged(IIII)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/FrameLayout;->onSizeChanged(IIII)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/a;->k:Z

    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 3

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v1

    float-to-int v1, v1

    iget v2, p0, Lcom/sigmob/sdk/mraid/a;->d:I

    invoke-virtual {p0, v0, v1, v2}, Lcom/sigmob/sdk/mraid/a;->a(III)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_6

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_4

    if-eq p1, v0, :cond_2

    const/4 v2, 0x3

    if-eq p1, v2, :cond_1

    goto :goto_0

    :cond_1
    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/a;->setClosePressed(Z)V

    goto :goto_0

    :cond_2
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->b()Z

    move-result p1

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/a;->q:Lcom/sigmob/sdk/mraid/a$c;

    if-nez p1, :cond_3

    new-instance p1, Lcom/sigmob/sdk/mraid/a$c;

    const/4 v1, 0x0

    invoke-direct {p1, p0, v1}, Lcom/sigmob/sdk/mraid/a$c;-><init>(Lcom/sigmob/sdk/mraid/a;Lcom/sigmob/sdk/mraid/a$1;)V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/a;->q:Lcom/sigmob/sdk/mraid/a$c;

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/a;->q:Lcom/sigmob/sdk/mraid/a$c;

    invoke-static {}, Landroid/view/ViewConfiguration;->getPressedStateDuration()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {p0, p1, v1, v2}, Lcom/sigmob/sdk/mraid/a;->postDelayed(Ljava/lang/Runnable;J)Z

    invoke-direct {p0}, Lcom/sigmob/sdk/mraid/a;->c()V

    goto :goto_0

    :cond_4
    invoke-direct {p0, v0}, Lcom/sigmob/sdk/mraid/a;->setClosePressed(Z)V

    :cond_5
    :goto_0
    return v0

    :cond_6
    :goto_1
    invoke-direct {p0, v1}, Lcom/sigmob/sdk/mraid/a;->setClosePressed(Z)V

    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onTouchEvent(Landroid/view/MotionEvent;)Z

    return v1
.end method

.method public setCloseAlwaysInteractable(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/a;->p:Z

    return-void
.end method

.method setCloseBoundChanged(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/a;->k:Z

    return-void
.end method

.method setCloseBounds(Landroid/graphics/Rect;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    invoke-virtual {v0, p1}, Landroid/graphics/Rect;->set(Landroid/graphics/Rect;)V

    return-void
.end method

.method public setClosePosition(Lcom/sigmob/sdk/mraid/a$a;)V
    .locals 0

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/a;->g:Lcom/sigmob/sdk/mraid/a$a;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid/a;->k:Z

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid/a;->invalidate()V

    return-void
.end method

.method public setCloseVisible(Z)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/a;->f:Landroid/graphics/drawable/StateListDrawable;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/graphics/drawable/StateListDrawable;->setVisible(ZZ)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/a;->m:Landroid/graphics/Rect;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid/a;->invalidate(Landroid/graphics/Rect;)V

    :cond_0
    return-void
.end method

.method public setOnCloseListener(Lcom/sigmob/sdk/mraid/a$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/a;->e:Lcom/sigmob/sdk/mraid/a$b;

    return-void
.end method
