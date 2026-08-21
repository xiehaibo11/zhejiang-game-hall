.class public Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;
.super Landroid/widget/ScrollView;
.source "MBScrollView.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1}, Landroid/widget/ScrollView;-><init>(Landroid/content/Context;)V

    .line 22
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 23
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 19
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/FrameLayout$LayoutParams;
    .locals 8

    .line 73
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->generateDefaultLayoutParams()Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v0

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v1

    .line 76
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_7

    .line 79
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v5, :cond_0

    goto :goto_1

    .line 86
    :cond_0
    sget-object v6, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView$1;->a:[I

    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v5

    aget v5, v6, v5

    const/4 v6, 0x4

    if-eq v5, v6, :cond_5

    const/4 v7, 0x5

    if-eq v5, v7, :cond_2

    const/4 v6, 0x6

    if-eq v5, v6, :cond_1

    goto :goto_1

    .line 103
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    .line 104
    iput v5, v0, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    goto :goto_1

    .line 91
    :cond_2
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 92
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_6

    const-string v7, "invisible"

    .line 93
    invoke-virtual {v5, v7}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_3

    .line 94
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setVisibility(I)V

    goto :goto_1

    :cond_3
    const-string v6, "gone"

    .line 95
    invoke-virtual {v5, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_4

    const/16 v5, 0x8

    .line 96
    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setVisibility(I)V

    goto :goto_1

    :cond_4
    const-string v6, "visible"

    .line 97
    invoke-virtual {v5, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 98
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setVisibility(I)V

    goto :goto_1

    .line 88
    :cond_5
    invoke-interface {p1, v4, v3}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setHorizontalFadingEdgeEnabled(Z)V

    :cond_6
    :goto_1
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_7
    return-object v0
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 6

    .line 28
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 30
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_7

    .line 32
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 36
    :cond_0
    sget-object v4, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    const/4 v4, 0x1

    if-eq v3, v4, :cond_5

    const/4 v4, 0x2

    if-eq v3, v4, :cond_2

    const/4 v4, 0x3

    if-eq v3, v4, :cond_1

    goto/16 :goto_1

    .line 64
    :cond_1
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 65
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setContentDescription(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 45
    :cond_2
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "#"

    .line 46
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 47
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 48
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 47
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v3

    .line 49
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setBackgroundColor(I)V

    goto :goto_1

    :cond_3
    const-string v4, "@drawable/"

    .line 51
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    const/16 v4, 0xa

    .line 52
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 54
    :cond_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v4

    .line 55
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    .line 56
    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".png"

    .line 57
    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 59
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v3

    .line 60
    new-instance v4, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v4, v3}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    .line 38
    :cond_5
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "@+id/"

    .line 39
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_6

    const/4 v4, 0x5

    .line 40
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBScrollView;->setId(I)V

    :cond_6
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_7
    return-void
.end method
