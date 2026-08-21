.class public Lcom/sigmob/sdk/videoplayer/m;
.super Landroid/view/TextureView;


# static fields
.field protected static final a:Ljava/lang/String; = "ResizeTextureView"


# instance fields
.field public b:I

.field public c:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/view/TextureView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/view/TextureView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    return-void
.end method


# virtual methods
.method public a(II)V
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    if-ne v0, p1, :cond_0

    iget v0, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    if-eq v0, p2, :cond_1

    :cond_0
    iput p1, p0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iput p2, p0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/m;->requestLayout()V

    :cond_1
    return-void
.end method

.method protected onMeasure(II)V
    .locals 17

    move-object/from16 v0, p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onMeasure  ["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p0 .. p0}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "] "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ResizeTextureView"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual/range {p0 .. p0}, Lcom/sigmob/sdk/videoplayer/m;->getRotation()F

    move-result v1

    float-to-int v1, v1

    iget v3, v0, Lcom/sigmob/sdk/videoplayer/m;->b:I

    iget v4, v0, Lcom/sigmob/sdk/videoplayer/m;->c:I

    invoke-virtual/range {p0 .. p0}, Lcom/sigmob/sdk/videoplayer/m;->getParent()Landroid/view/ViewParent;

    move-result-object v5

    check-cast v5, Landroid/view/View;

    invoke-virtual {v5}, Landroid/view/View;->getMeasuredHeight()I

    move-result v5

    invoke-virtual/range {p0 .. p0}, Lcom/sigmob/sdk/videoplayer/m;->getParent()Landroid/view/ViewParent;

    move-result-object v6

    check-cast v6, Landroid/view/View;

    invoke-virtual {v6}, Landroid/view/View;->getMeasuredWidth()I

    move-result v6

    const/16 v7, 0x10e

    const/16 v8, 0x5a

    if-eqz v6, :cond_2

    if-eqz v5, :cond_2

    if-eqz v3, :cond_2

    if-eqz v4, :cond_2

    sget v9, Lcom/sigmob/sdk/videoplayer/g;->u:I

    const/4 v10, 0x1

    if-ne v9, v10, :cond_2

    if-eq v1, v8, :cond_0

    if-ne v1, v7, :cond_1

    :cond_0
    move/from16 v16, v6

    move v6, v5

    move/from16 v5, v16

    :cond_1
    mul-int v4, v3, v5

    div-int/2addr v4, v6

    :cond_2
    if-eq v1, v8, :cond_4

    if-ne v1, v7, :cond_3

    goto :goto_0

    :cond_3
    move/from16 v9, p1

    move/from16 v10, p2

    goto :goto_1

    :cond_4
    :goto_0
    move/from16 v10, p1

    move/from16 v9, p2

    :goto_1
    invoke-static {v3, v9}, Lcom/sigmob/sdk/videoplayer/m;->getDefaultSize(II)I

    move-result v11

    invoke-static {v4, v10}, Lcom/sigmob/sdk/videoplayer/m;->getDefaultSize(II)I

    move-result v12

    if-lez v3, :cond_d

    if-lez v4, :cond_d

    invoke-static {v9}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v11

    invoke-static {v9}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v12

    invoke-static {v10}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v13

    invoke-static {v10}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v14

    new-instance v15, Ljava/lang/StringBuilder;

    invoke-direct {v15}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "widthMeasureSpec  ["

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v9}, Landroid/view/View$MeasureSpec;->toString(I)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "]"

    invoke-virtual {v15, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v15}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v2, v9}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "heightMeasureSpec ["

    invoke-virtual {v9, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Landroid/view/View$MeasureSpec;->toString(I)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/high16 v2, 0x40000000    # 2.0f

    if-ne v11, v2, :cond_7

    if-ne v13, v2, :cond_7

    mul-int v2, v3, v14

    mul-int v7, v12, v4

    if-ge v2, v7, :cond_5

    :goto_2
    div-int v11, v2, v4

    goto :goto_5

    :cond_5
    if-le v2, v7, :cond_6

    div-int v2, v7, v3

    goto :goto_3

    :cond_6
    move v11, v12

    goto :goto_5

    :cond_7
    const/high16 v7, -0x80000000

    if-ne v11, v2, :cond_9

    mul-int v2, v12, v4

    div-int/2addr v2, v3

    if-ne v13, v7, :cond_8

    if-le v2, v14, :cond_8

    mul-int v2, v14, v3

    goto :goto_2

    :cond_8
    :goto_3
    move v11, v12

    move v12, v2

    goto :goto_7

    :cond_9
    if-ne v13, v2, :cond_b

    mul-int v2, v14, v3

    div-int/2addr v2, v4

    if-ne v11, v7, :cond_a

    if-le v2, v12, :cond_a

    :goto_4
    mul-int v2, v12, v4

    div-int/2addr v2, v3

    goto :goto_3

    :cond_a
    move v11, v2

    :goto_5
    move v12, v14

    goto :goto_7

    :cond_b
    if-ne v13, v7, :cond_c

    if-le v4, v14, :cond_c

    mul-int v2, v14, v3

    div-int/2addr v2, v4

    goto :goto_6

    :cond_c
    move v2, v3

    move v14, v4

    :goto_6
    if-ne v11, v7, :cond_a

    if-le v2, v12, :cond_a

    goto :goto_4

    :cond_d
    :goto_7
    if-eqz v6, :cond_12

    if-eqz v5, :cond_12

    if-eqz v3, :cond_12

    if-eqz v4, :cond_12

    sget v2, Lcom/sigmob/sdk/videoplayer/g;->u:I

    const/4 v7, 0x3

    if-ne v2, v7, :cond_e

    goto :goto_8

    :cond_e
    sget v2, Lcom/sigmob/sdk/videoplayer/g;->u:I

    const/4 v7, 0x2

    if-ne v2, v7, :cond_12

    if-eq v1, v8, :cond_f

    const/16 v2, 0x10e

    if-ne v1, v2, :cond_10

    :cond_f
    move/from16 v16, v6

    move v6, v5

    move/from16 v5, v16

    :cond_10
    int-to-double v1, v4

    int-to-double v3, v3

    div-double/2addr v1, v3

    int-to-double v3, v5

    int-to-double v7, v6

    div-double v9, v3, v7

    cmpl-double v13, v1, v9

    if-lez v13, :cond_11

    int-to-double v1, v11

    div-double/2addr v7, v1

    int-to-double v1, v12

    mul-double/2addr v7, v1

    double-to-int v4, v7

    move v3, v6

    goto :goto_8

    :cond_11
    cmpg-double v1, v1, v9

    if-gez v1, :cond_12

    int-to-double v1, v12

    div-double/2addr v3, v1

    int-to-double v1, v11

    mul-double/2addr v3, v1

    double-to-int v3, v3

    move v4, v5

    goto :goto_8

    :cond_12
    move v3, v11

    move v4, v12

    :goto_8
    invoke-virtual {v0, v3, v4}, Lcom/sigmob/sdk/videoplayer/m;->setMeasuredDimension(II)V

    return-void
.end method

.method public setRotation(F)V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/m;->getRotation()F

    move-result v0

    cmpl-float v0, p1, v0

    if-eqz v0, :cond_0

    invoke-super {p0, p1}, Landroid/view/TextureView;->setRotation(F)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/m;->requestLayout()V

    :cond_0
    return-void
.end method
