.class final Lcom/tkay/core/common/l/u$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/l/u;->a(Landroid/view/View;F)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/view/View;

.field final synthetic b:F

.field final synthetic c:Landroid/view/View;


# direct methods
.method constructor <init>(Landroid/view/View;FLandroid/view/View;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/tkay/core/common/l/u$2;->a:Landroid/view/View;

    iput p2, p0, Lcom/tkay/core/common/l/u$2;->b:F

    iput-object p3, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 51
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 52
    iget-object v1, p0, Lcom/tkay/core/common/l/u$2;->a:Landroid/view/View;

    invoke-virtual {v1, v0}, Landroid/view/View;->getHitRect(Landroid/graphics/Rect;)V

    .line 53
    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v1

    int-to-float v1, v1

    iget v2, p0, Lcom/tkay/core/common/l/u$2;->b:F

    const/high16 v3, 0x3f800000    # 1.0f

    sub-float/2addr v2, v3

    mul-float/2addr v1, v2

    float-to-int v1, v1

    div-int/lit8 v1, v1, 0x2

    .line 54
    invoke-virtual {v0}, Landroid/graphics/Rect;->height()I

    move-result v2

    int-to-float v2, v2

    iget v4, p0, Lcom/tkay/core/common/l/u$2;->b:F

    sub-float/2addr v4, v3

    mul-float/2addr v2, v4

    float-to-int v2, v2

    div-int/lit8 v2, v2, 0x2

    .line 55
    iget v3, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v3, v2

    const/4 v4, 0x0

    if-gez v3, :cond_0

    .line 56
    iput v4, v0, Landroid/graphics/Rect;->top:I

    goto :goto_0

    .line 58
    :cond_0
    iget v3, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v3, v2

    iput v3, v0, Landroid/graphics/Rect;->top:I

    .line 61
    :goto_0
    iget v3, v0, Landroid/graphics/Rect;->bottom:I

    add-int/2addr v3, v2

    iget-object v5, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    invoke-virtual {v5}, Landroid/view/View;->getHeight()I

    move-result v5

    if-le v3, v5, :cond_1

    .line 62
    iget-object v2, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getHeight()I

    move-result v2

    iput v2, v0, Landroid/graphics/Rect;->bottom:I

    goto :goto_1

    .line 64
    :cond_1
    iget v3, v0, Landroid/graphics/Rect;->bottom:I

    add-int/2addr v3, v2

    iput v3, v0, Landroid/graphics/Rect;->bottom:I

    .line 66
    :goto_1
    iget v2, v0, Landroid/graphics/Rect;->left:I

    sub-int/2addr v2, v1

    if-gez v2, :cond_2

    .line 67
    iput v4, v0, Landroid/graphics/Rect;->left:I

    goto :goto_2

    .line 69
    :cond_2
    iget v2, v0, Landroid/graphics/Rect;->left:I

    sub-int/2addr v2, v1

    iput v2, v0, Landroid/graphics/Rect;->left:I

    .line 71
    :goto_2
    iget v2, v0, Landroid/graphics/Rect;->right:I

    add-int/2addr v2, v1

    iget-object v3, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getWidth()I

    move-result v3

    if-le v2, v3, :cond_3

    .line 72
    iget-object v1, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getWidth()I

    move-result v1

    iput v1, v0, Landroid/graphics/Rect;->right:I

    goto :goto_3

    .line 74
    :cond_3
    iget v2, v0, Landroid/graphics/Rect;->right:I

    add-int/2addr v2, v1

    iput v2, v0, Landroid/graphics/Rect;->right:I

    .line 76
    :goto_3
    iget-object v1, p0, Lcom/tkay/core/common/l/u$2;->c:Landroid/view/View;

    new-instance v2, Landroid/view/TouchDelegate;

    iget-object v3, p0, Lcom/tkay/core/common/l/u$2;->a:Landroid/view/View;

    invoke-direct {v2, v0, v3}, Landroid/view/TouchDelegate;-><init>(Landroid/graphics/Rect;Landroid/view/View;)V

    invoke-virtual {v1, v2}, Landroid/view/View;->setTouchDelegate(Landroid/view/TouchDelegate;)V

    return-void
.end method
