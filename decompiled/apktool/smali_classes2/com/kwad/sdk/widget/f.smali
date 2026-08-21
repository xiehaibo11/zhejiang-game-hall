.class public final Lcom/kwad/sdk/widget/f;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/GestureDetector$OnGestureListener;
.implements Landroid/view/View$OnTouchListener;


# instance fields
.field private Gn:Landroid/view/GestureDetector;

.field private aMj:Landroid/view/MotionEvent;

.field private fb:Lcom/kwad/sdk/widget/c;

.field private mView:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p2, p0, Lcom/kwad/sdk/widget/f;->mView:Landroid/view/View;

    invoke-virtual {p2, p0}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    new-instance p2, Landroid/view/GestureDetector;

    invoke-direct {p2, p1, p0}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V

    iput-object p2, p0, Lcom/kwad/sdk/widget/f;->Gn:Landroid/view/GestureDetector;

    iput-object p3, p0, Lcom/kwad/sdk/widget/f;->fb:Lcom/kwad/sdk/widget/c;

    return-void
.end method

.method public constructor <init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    return-void

    :cond_0
    iput-object p1, p0, Lcom/kwad/sdk/widget/f;->mView:Landroid/view/View;

    invoke-virtual {p1, p0}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    new-instance v0, Landroid/view/GestureDetector;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v0, p1, p0}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;)V

    iput-object v0, p0, Lcom/kwad/sdk/widget/f;->Gn:Landroid/view/GestureDetector;

    iput-object p2, p0, Lcom/kwad/sdk/widget/f;->fb:Lcom/kwad/sdk/widget/c;

    return-void
.end method

.method private static a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)Z
    .locals 4

    invoke-virtual {p0}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v1

    sub-float/2addr v0, v1

    invoke-static {v0}, Ljava/lang/Math;->abs(F)F

    move-result v0

    const/high16 v1, 0x41a00000    # 20.0f

    cmpl-float v0, v0, v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lez v0, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v3

    :goto_0
    invoke-virtual {p0}, Landroid/view/MotionEvent;->getY()F

    move-result p0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result p1

    sub-float/2addr p0, p1

    invoke-static {p0}, Ljava/lang/Math;->abs(F)F

    move-result p0

    cmpl-float p0, p0, v1

    if-lez p0, :cond_1

    move p0, v2

    goto :goto_1

    :cond_1
    move p0, v3

    :goto_1
    if-nez v0, :cond_3

    if-eqz p0, :cond_2

    goto :goto_2

    :cond_2
    return v3

    :cond_3
    :goto_2
    return v2
.end method

.method private a(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-static {p2}, Landroid/view/MotionEvent;->obtain(Landroid/view/MotionEvent;)Landroid/view/MotionEvent;

    move-result-object p1

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    if-ne v0, v2, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/widget/f;->aMj:Landroid/view/MotionEvent;

    if-eqz v0, :cond_2

    invoke-static {v0, p2}, Lcom/kwad/sdk/widget/f;->a(Landroid/view/MotionEvent;Landroid/view/MotionEvent;)Z

    move-result p2

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/kwad/sdk/widget/f;->fb:Lcom/kwad/sdk/widget/c;

    if-eqz p2, :cond_1

    invoke-interface {p2, p1}, Lcom/kwad/sdk/widget/c;->b(Landroid/view/View;)V

    :cond_1
    move v1, v2

    :cond_2
    const/4 p1, 0x0

    :goto_0
    iput-object p1, p0, Lcom/kwad/sdk/widget/f;->aMj:Landroid/view/MotionEvent;

    :cond_3
    return v1
.end method


# virtual methods
.method public final onDown(Landroid/view/MotionEvent;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onFling(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onLongPress(Landroid/view/MotionEvent;)V
    .locals 0

    return-void
.end method

.method public final onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onShowPress(Landroid/view/MotionEvent;)V
    .locals 0

    return-void
.end method

.method public final onSingleTapUp(Landroid/view/MotionEvent;)Z
    .locals 1

    iget-object p1, p0, Lcom/kwad/sdk/widget/f;->fb:Lcom/kwad/sdk/widget/c;

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/widget/f;->mView:Landroid/view/View;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/widget/c;->a(Landroid/view/View;)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/widget/f;->Gn:Landroid/view/GestureDetector;

    invoke-virtual {v0, p2}, Landroid/view/GestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onTouch, "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Landroid/view/MotionEvent;->getAction()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "\uff0c handled\uff1a "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/widget/f;->a(Landroid/view/View;Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method
