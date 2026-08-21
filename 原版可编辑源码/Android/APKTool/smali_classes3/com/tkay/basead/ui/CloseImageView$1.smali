.class final Lcom/tkay/basead/ui/CloseImageView$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/CloseImageView;->setClickAreaScaleFactor(F)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/CloseImageView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/CloseImageView;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 43
    iget-object v0, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;Landroid/graphics/Rect;)Landroid/graphics/Rect;

    .line 44
    iget-object v0, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v0}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->getHitRect(Landroid/graphics/Rect;)V

    .line 46
    iget-object v0, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v0}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v0

    invoke-virtual {v0}, Landroid/graphics/Rect;->width()I

    move-result v0

    int-to-float v0, v0

    iget-object v1, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v1}, Lcom/tkay/basead/ui/CloseImageView;->b(Lcom/tkay/basead/ui/CloseImageView;)F

    move-result v1

    const/high16 v2, 0x3f800000    # 1.0f

    sub-float/2addr v1, v2

    mul-float/2addr v0, v1

    float-to-int v0, v0

    div-int/lit8 v0, v0, 0x2

    .line 47
    iget-object v1, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v1}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v1

    invoke-virtual {v1}, Landroid/graphics/Rect;->height()I

    move-result v1

    int-to-float v1, v1

    iget-object v3, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v3}, Lcom/tkay/basead/ui/CloseImageView;->b(Lcom/tkay/basead/ui/CloseImageView;)F

    move-result v3

    sub-float/2addr v3, v2

    mul-float/2addr v1, v3

    float-to-int v1, v1

    div-int/lit8 v1, v1, 0x2

    .line 49
    iget-object v2, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v2}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v2

    iget v3, v2, Landroid/graphics/Rect;->top:I

    sub-int/2addr v3, v1

    iput v3, v2, Landroid/graphics/Rect;->top:I

    .line 50
    iget-object v2, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v2}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v2

    iget v3, v2, Landroid/graphics/Rect;->bottom:I

    add-int/2addr v3, v1

    iput v3, v2, Landroid/graphics/Rect;->bottom:I

    .line 51
    iget-object v1, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v1}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v1

    iget v2, v1, Landroid/graphics/Rect;->left:I

    sub-int/2addr v2, v0

    iput v2, v1, Landroid/graphics/Rect;->left:I

    .line 52
    iget-object v1, p0, Lcom/tkay/basead/ui/CloseImageView$1;->a:Lcom/tkay/basead/ui/CloseImageView;

    invoke-static {v1}, Lcom/tkay/basead/ui/CloseImageView;->a(Lcom/tkay/basead/ui/CloseImageView;)Landroid/graphics/Rect;

    move-result-object v1

    iget v2, v1, Landroid/graphics/Rect;->right:I

    add-int/2addr v2, v0

    iput v2, v1, Landroid/graphics/Rect;->right:I

    return-void
.end method
