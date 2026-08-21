.class public final Lcom/tkay/expressad/foundation/h/y;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "ViewUtils"

.field private static b:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/view/View;Landroid/view/ViewGroup;)I
    .locals 2

    const/4 v0, 0x0

    .line 131
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 132
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    if-eq v1, p0, :cond_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return v0
.end method

.method public static a(Landroid/view/View;)Z
    .locals 7

    .line 27
    invoke-virtual {p0}, Landroid/view/View;->getVisibility()I

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 33
    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getAlpha()F

    move-result v0

    const/high16 v2, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v2

    if-gez v0, :cond_1

    return v1

    .line 39
    :cond_1
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v0, v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    .line 40
    invoke-virtual {p0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 41
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_2

    return v1

    .line 48
    :cond_2
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 49
    invoke-virtual {p0, v0}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result v2

    .line 50
    iget v3, v0, Landroid/graphics/Rect;->bottom:I

    iget v4, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v3, v4

    iget v4, v0, Landroid/graphics/Rect;->right:I

    iget v0, v0, Landroid/graphics/Rect;->left:I

    sub-int/2addr v4, v0

    mul-int/2addr v3, v4

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredHeight()I

    move-result v0

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v4

    mul-int/2addr v0, v4

    div-int/lit8 v0, v0, 0x2

    const/4 v4, 0x0

    if-lt v3, v0, :cond_3

    move v0, v1

    goto :goto_0

    :cond_3
    move v0, v4

    :goto_0
    if-eqz v2, :cond_4

    if-eqz v0, :cond_4

    move v3, v1

    goto :goto_1

    :cond_4
    move v3, v4

    .line 53
    :goto_1
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "View Judge : partVisible is "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " halfPercentVisible is "

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    if-nez v3, :cond_5

    return v1

    :cond_5
    move-object v0, p0

    .line 60
    :goto_2
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    instance-of v2, v2, Landroid/view/ViewGroup;

    if-eqz v2, :cond_9

    .line 61
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    .line 63
    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;Landroid/view/ViewGroup;)I

    move-result v0

    add-int/2addr v0, v1

    .line 64
    :goto_3
    invoke-virtual {v2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    if-ge v0, v3, :cond_8

    .line 65
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v3

    .line 67
    invoke-virtual {v3}, Landroid/view/View;->getVisibility()I

    move-result v5

    if-nez v5, :cond_7

    .line 70
    invoke-static {p0, v3}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;Landroid/view/View;)Z

    move-result v5

    if-eqz v5, :cond_7

    .line 71
    instance-of v5, v3, Landroid/view/ViewGroup;

    if-eqz v5, :cond_6

    move-object v5, v3

    check-cast v5, Landroid/view/ViewGroup;

    invoke-virtual {v5}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v6

    if-lez v6, :cond_6

    .line 73
    invoke-static {p0, v5}, Lcom/tkay/expressad/foundation/h/y;->b(Landroid/view/View;Landroid/view/ViewGroup;)Z

    move-result v3

    .line 74
    sput-boolean v4, Lcom/tkay/expressad/foundation/h/y;->b:Z

    if-eqz v3, :cond_7

    return v1

    .line 79
    :cond_6
    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/y;->b(Landroid/view/View;)Z

    move-result v3

    if-eqz v3, :cond_7

    return v1

    :cond_7
    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    :cond_8
    move-object v0, v2

    goto :goto_2

    :cond_9
    return v4
.end method

.method private static a(Landroid/view/View;Landroid/view/View;)Z
    .locals 4

    .line 111
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 112
    invoke-virtual {p0, v0}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    .line 114
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    .line 115
    invoke-virtual {p1, v1}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    .line 117
    invoke-static {v0, v1}, Landroid/graphics/Rect;->intersects(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 118
    iget p1, v0, Landroid/graphics/Rect;->right:I

    iget v2, v1, Landroid/graphics/Rect;->right:I

    invoke-static {p1, v2}, Ljava/lang/Math;->min(II)I

    move-result p1

    iget v2, v0, Landroid/graphics/Rect;->left:I

    iget v3, v1, Landroid/graphics/Rect;->left:I

    invoke-static {v2, v3}, Ljava/lang/Math;->max(II)I

    move-result v2

    sub-int/2addr p1, v2

    .line 119
    iget v2, v0, Landroid/graphics/Rect;->bottom:I

    iget v3, v1, Landroid/graphics/Rect;->bottom:I

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v2

    iget v0, v0, Landroid/graphics/Rect;->top:I

    iget v1, v1, Landroid/graphics/Rect;->top:I

    invoke-static {v0, v1}, Ljava/lang/Math;->max(II)I

    move-result v0

    sub-int/2addr v2, v0

    mul-int/2addr p1, v2

    mul-int/lit8 p1, p1, 0x2

    .line 121
    invoke-virtual {p0}, Landroid/view/View;->getMeasuredHeight()I

    move-result v0

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredWidth()I

    move-result p0

    mul-int/2addr v0, p0

    if-lt p1, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Landroid/view/View;)Z
    .locals 3

    .line 96
    invoke-virtual {p0}, Landroid/view/View;->getAlpha()F

    move-result v0

    const/high16 v1, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v1

    const/4 v1, 0x0

    if-gtz v0, :cond_0

    return v1

    .line 101
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x13

    if-lt v0, v2, :cond_2

    .line 102
    invoke-virtual {p0}, Landroid/view/View;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object p0

    invoke-virtual {p0}, Landroid/graphics/drawable/Drawable;->getAlpha()I

    move-result p0

    const/16 v0, 0x7f

    if-gt p0, v0, :cond_2

    :cond_1
    return v1

    :cond_2
    const/4 p0, 0x1

    return p0
.end method

.method private static b(Landroid/view/View;Landroid/view/ViewGroup;)Z
    .locals 4

    const/4 v0, 0x0

    .line 140
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_3

    .line 142
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 144
    invoke-virtual {v1}, Landroid/view/View;->getVisibility()I

    move-result v2

    if-nez v2, :cond_2

    .line 148
    invoke-static {p0, v1}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;Landroid/view/View;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 149
    instance-of v2, v1, Landroid/webkit/WebView;

    const/4 v3, 0x1

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Landroid/view/View;->getVisibility()I

    move-result v2

    if-nez v2, :cond_0

    .line 151
    sput-boolean v3, Lcom/tkay/expressad/foundation/h/y;->b:Z

    .line 154
    :cond_0
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/y;->b(Landroid/view/View;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 156
    sput-boolean v3, Lcom/tkay/expressad/foundation/h/y;->b:Z

    .line 159
    :cond_1
    sget-boolean v2, Lcom/tkay/expressad/foundation/h/y;->b:Z

    if-nez v2, :cond_3

    .line 163
    instance-of v2, v1, Landroid/view/ViewGroup;

    if-eqz v2, :cond_2

    .line 164
    check-cast v1, Landroid/view/ViewGroup;

    invoke-static {p0, v1}, Lcom/tkay/expressad/foundation/h/y;->b(Landroid/view/View;Landroid/view/ViewGroup;)Z

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 169
    :cond_3
    sget-boolean p0, Lcom/tkay/expressad/foundation/h/y;->b:Z

    return p0
.end method
