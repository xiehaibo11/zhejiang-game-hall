.class public Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;
.super Landroid/widget/GridView;
.source "MBGridView.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Landroid/widget/GridView;-><init>(Landroid/content/Context;)V

    .line 19
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 20
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 16
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;
    .locals 12

    .line 25
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->generateDefaultLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/AbsListView$LayoutParams;

    .line 26
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v1

    .line 27
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_d

    .line 29
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v5, :cond_0

    goto/16 :goto_3

    .line 33
    :cond_0
    sget-object v6, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView$1;->a:[I

    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v5

    aget v5, v6, v5

    const/4 v6, -0x2

    const-string v7, "wrap"

    const-string v8, "m"

    const/4 v9, -0x1

    const-string v10, "f"

    const/4 v11, 0x1

    if-eq v5, v11, :cond_8

    const/4 v11, 0x2

    if-eq v5, v11, :cond_4

    const/4 v6, 0x3

    if-eq v5, v6, :cond_3

    const/4 v6, 0x4

    if-eq v5, v6, :cond_1

    goto/16 :goto_3

    .line 65
    :cond_1
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 66
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_c

    const-string v7, "invisible"

    .line 67
    invoke-virtual {v5, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 68
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setVisibility(I)V

    goto/16 :goto_3

    :cond_2
    const-string v6, "gone"

    .line 69
    invoke-virtual {v5, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_c

    const/16 v5, 0x8

    .line 70
    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setVisibility(I)V

    goto :goto_3

    .line 62
    :cond_3
    invoke-interface {p1, v4, v3}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    .line 61
    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setHorizontalFadingEdgeEnabled(Z)V

    goto :goto_3

    .line 48
    :cond_4
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 49
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_7

    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_5

    goto :goto_1

    .line 53
    :cond_5
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_6

    .line 54
    iput v6, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 57
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 50
    :cond_7
    :goto_1
    iput v9, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 35
    :cond_8
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 36
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_b

    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_9

    goto :goto_2

    .line 40
    :cond_9
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_a

    .line 41
    iput v6, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 44
    :cond_a
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    .line 45
    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 37
    :cond_b
    :goto_2
    iput v9, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    :cond_c
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    :cond_d
    return-object v0
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 6

    .line 83
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    .line 84
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 85
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    .line 87
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    .line 88
    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 92
    :cond_0
    sget-object v4, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    packed-switch v3, :pswitch_data_0

    goto/16 :goto_1

    .line 119
    :pswitch_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->getContext()Landroid/content/Context;

    move-result-object v3

    .line 120
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 121
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 120
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    int-to-float v4, v4

    .line 118
    invoke-static {v3, v4}, Lcom/mbridge/msdk/widget/custom/b/a;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setHorizontalSpacing(I)V

    goto :goto_1

    .line 114
    :pswitch_1
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 115
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 114
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setCacheColorHint(I)V

    goto :goto_1

    .line 106
    :pswitch_2
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "false"

    .line 108
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    xor-int/lit8 v3, v3, 0x1

    .line 111
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setMotionEventSplittingEnabled(Z)V

    goto :goto_1

    :pswitch_3
    const/4 v3, 0x2

    .line 103
    invoke-interface {p1, v2, v3}, Landroid/util/AttributeSet;->getAttributeIntValue(II)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setNumColumns(I)V

    goto :goto_1

    .line 100
    :pswitch_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    int-to-float v4, v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/widget/custom/b/a;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setVerticalSpacing(I)V

    goto :goto_1

    .line 94
    :pswitch_5
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "@+id/"

    .line 95
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x5

    .line 96
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBGridView;->setId(I)V

    :cond_1
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_2
    return-void

    :pswitch_data_0
    .packed-switch 0x5
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
