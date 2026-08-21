.class public Lcom/tkay/basead/ui/CloseFrameLayout;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Lcom/tkay/basead/ui/a;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:F

.field private c:Landroid/graphics/Rect;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    const-class v0, Lcom/tkay/basead/ui/CloseFrameLayout;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/CloseFrameLayout;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/high16 p1, 0x3f800000    # 1.0f

    .line 23
    iput p1, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/CloseFrameLayout;)Landroid/graphics/Rect;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->c:Landroid/graphics/Rect;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/basead/ui/CloseFrameLayout;Landroid/graphics/Rect;)Landroid/graphics/Rect;
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->c:Landroid/graphics/Rect;

    return-object p1
.end method

.method static synthetic b(Lcom/tkay/basead/ui/CloseFrameLayout;)F
    .locals 0

    .line 20
    iget p0, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    return p0
.end method


# virtual methods
.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 4

    .line 62
    iget v0, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    const/high16 v1, 0x3f800000    # 1.0f

    cmpg-float v0, v0, v1

    if-gez v0, :cond_1

    .line 63
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 v1, 0x5

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 66
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->c:Landroid/graphics/Rect;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/CloseFrameLayout;->getLeft()I

    move-result v1

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v2

    float-to-int v2, v2

    add-int/2addr v1, v2

    invoke-virtual {p0}, Lcom/tkay/basead/ui/CloseFrameLayout;->getTop()I

    move-result v2

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v3

    float-to-int v3, v3

    add-int/2addr v2, v3

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Rect;->contains(II)Z

    move-result v0

    if-nez v0, :cond_1

    const/4 p1, 0x0

    return p1

    .line 73
    :cond_1
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/FrameLayout;->onTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public setClickAreaScaleFactor(F)V
    .locals 2

    .line 31
    iput p1, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    const/4 v0, 0x0

    cmpg-float p1, p1, v0

    const/high16 v0, 0x3f800000    # 1.0f

    if-gtz p1, :cond_0

    .line 34
    iput v0, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    .line 36
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "setClickAreaScaleFactor: "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    .line 38
    iget p1, p0, Lcom/tkay/basead/ui/CloseFrameLayout;->b:F

    cmpg-float v1, p1, v0

    if-gez v1, :cond_1

    .line 39
    new-instance p1, Lcom/tkay/basead/ui/CloseFrameLayout$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/CloseFrameLayout$1;-><init>(Lcom/tkay/basead/ui/CloseFrameLayout;)V

    invoke-virtual {p0, p1}, Lcom/tkay/basead/ui/CloseFrameLayout;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_1
    cmpl-float v0, p1, v0

    if-lez v0, :cond_2

    .line 55
    invoke-static {p0, p1}, Lcom/tkay/core/common/l/u;->a(Landroid/view/View;F)V

    :cond_2
    return-void
.end method
