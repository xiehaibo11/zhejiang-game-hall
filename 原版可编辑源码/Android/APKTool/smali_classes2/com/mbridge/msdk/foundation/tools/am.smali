.class public final Lcom/mbridge/msdk/foundation/tools/am;
.super Ljava/lang/Object;
.source "ViewCoveredUtils.java"


# static fields
.field private static a:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private static a(Landroid/view/View;Landroid/view/ViewGroup;)I
    .locals 2

    const/4 v0, 0x0

    .line 131
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 132
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    if-ne v1, p0, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    return v0
.end method

.method public static a(Landroid/view/View;)Z
    .locals 8

    .line 27
    invoke-virtual {p0}, Landroid/view/View;->getVisibility()I

    move-result v0

    const-string v1, "ViewUtils"

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    const-string p0, "Banner Judge : Banner\'s not visible."

    .line 28
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 33
    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getAlpha()F

    move-result v0

    const/high16 v3, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v3

    if-gez v0, :cond_1

    const-string p0, "Banner Judge : Banner\'s alpha must set up 50%."

    .line 34
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v2

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

    const-string p0, "View Judge : View\'s container is not visible."

    .line 42
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    .line 48
    :cond_2
    new-instance v0, Landroid/graphics/Rect;

    invoke-direct {v0}, Landroid/graphics/Rect;-><init>()V

    .line 49
    invoke-virtual {p0, v0}, Landroid/view/View;->getGlobalVisibleRect(Landroid/graphics/Rect;)Z

    move-result v3

    .line 50
    iget v4, v0, Landroid/graphics/Rect;->bottom:I

    iget v5, v0, Landroid/graphics/Rect;->top:I

    sub-int/2addr v4, v5

    iget v5, v0, Landroid/graphics/Rect;->right:I

    iget v0, v0, Landroid/graphics/Rect;->left:I

    sub-int/2addr v5, v0

    mul-int/2addr v4, v5

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredHeight()I

    move-result v0

    invoke-virtual {p0}, Landroid/view/View;->getMeasuredWidth()I

    move-result v5

    mul-int/2addr v0, v5

    div-int/lit8 v0, v0, 0x2

    const/4 v5, 0x0

    if-lt v4, v0, :cond_3

    move v0, v2

    goto :goto_0

    :cond_3
    move v0, v5

    :goto_0
    if-eqz v3, :cond_4

    if-eqz v0, :cond_4

    move v4, v2

    goto :goto_1

    :cond_4
    move v4, v5

    .line 53
    :goto_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "View Judge : partVisible is "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " halfPercentVisible is "

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 54
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "View Judge : totalViewVisible is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v4, :cond_5

    return v2

    :cond_5
    move-object v0, p0

    .line 60
    :goto_2
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    instance-of v3, v3, Landroid/view/ViewGroup;

    if-eqz v3, :cond_a

    .line 61
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    .line 63
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;Landroid/view/ViewGroup;)I

    move-result v0

    add-int/2addr v0, v2

    .line 64
    :goto_3
    invoke-virtual {v3}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v4

    if-ge v0, v4, :cond_9

    .line 65
    invoke-virtual {v3, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    .line 67
    invoke-virtual {v4}, Landroid/view/View;->getVisibility()I

    move-result v6

    if-eqz v6, :cond_6

    goto :goto_4

    .line 70
    :cond_6
    invoke-static {p0, v4}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;Landroid/view/View;)Z

    move-result v6

    if-eqz v6, :cond_8

    .line 71
    instance-of v6, v4, Landroid/view/ViewGroup;

    if-eqz v6, :cond_7

    move-object v6, v4

    check-cast v6, Landroid/view/ViewGroup;

    invoke-virtual {v6}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v7

    if-lez v7, :cond_7

    const-string v4, "View Judge : Covered by ViewGroup."

    .line 72
    invoke-static {v1, v4}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    invoke-static {p0, v6}, Lcom/mbridge/msdk/foundation/tools/am;->b(Landroid/view/View;Landroid/view/ViewGroup;)Z

    move-result v4

    .line 74
    sput-boolean v5, Lcom/mbridge/msdk/foundation/tools/am;->a:Z

    if-eqz v4, :cond_8

    return v2

    .line 79
    :cond_7
    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/am;->b(Landroid/view/View;)Z

    move-result v4

    if-eqz v4, :cond_8

    const-string p0, "View Judge : View Covered and Cover View is not transparent."

    .line 80
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v2

    :cond_8
    :goto_4
    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    :cond_9
    move-object v0, v3

    goto :goto_2

    :cond_a
    const-string p0, "View Judge : Well done, View is not covered."

    .line 90
    invoke-static {v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v5
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
    .locals 5

    const/4 v0, 0x0

    .line 140
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_5

    const-string v1, "ViewUtils"

    const-string v2, "View Judge : Start Loop"

    .line 141
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 142
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 144
    invoke-virtual {v2}, Landroid/view/View;->getVisibility()I

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    .line 148
    :cond_0
    invoke-static {p0, v2}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;Landroid/view/View;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 149
    instance-of v3, v2, Landroid/webkit/WebView;

    const/4 v4, 0x1

    if-eqz v3, :cond_1

    invoke-virtual {v2}, Landroid/view/View;->getVisibility()I

    move-result v3

    if-nez v3, :cond_1

    const-string v3, "View Judge : View Covered by WebView."

    .line 150
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 151
    sput-boolean v4, Lcom/mbridge/msdk/foundation/tools/am;->a:Z

    .line 154
    :cond_1
    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/am;->b(Landroid/view/View;)Z

    move-result v3

    if-eqz v3, :cond_2

    const-string v3, "View Judge : View Covered and Cover ViewGroup is not transparent."

    .line 155
    invoke-static {v1, v3}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    sput-boolean v4, Lcom/mbridge/msdk/foundation/tools/am;->a:Z

    .line 159
    :cond_2
    sget-boolean v1, Lcom/mbridge/msdk/foundation/tools/am;->a:Z

    if-eqz v1, :cond_3

    goto :goto_2

    .line 163
    :cond_3
    instance-of v1, v2, Landroid/view/ViewGroup;

    if-eqz v1, :cond_4

    .line 164
    check-cast v2, Landroid/view/ViewGroup;

    invoke-static {p0, v2}, Lcom/mbridge/msdk/foundation/tools/am;->b(Landroid/view/View;Landroid/view/ViewGroup;)Z

    :cond_4
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 169
    :cond_5
    :goto_2
    sget-boolean p0, Lcom/mbridge/msdk/foundation/tools/am;->a:Z

    return p0
.end method
