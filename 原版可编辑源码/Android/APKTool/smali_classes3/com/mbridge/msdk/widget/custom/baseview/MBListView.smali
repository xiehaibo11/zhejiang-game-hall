.class public Lcom/mbridge/msdk/widget/custom/baseview/MBListView;
.super Landroid/widget/ListView;
.source "MBListView.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 18
    invoke-direct {p0, p1}, Landroid/widget/ListView;-><init>(Landroid/content/Context;)V

    .line 19
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 20
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 16
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 25
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->generateDefaultLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/AbsListView$LayoutParams;

    .line 26
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v3

    .line 27
    invoke-interface/range {p1 .. p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v4

    const/4 v5, 0x0

    move v6, v5

    move v7, v6

    move v8, v7

    move v9, v8

    move v10, v9

    :goto_0
    if-ge v6, v4, :cond_9

    .line 33
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v11

    invoke-virtual {v3, v11}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v11, :cond_0

    goto/16 :goto_3

    .line 37
    :cond_0
    sget-object v12, Lcom/mbridge/msdk/widget/custom/baseview/MBListView$1;->a:[I

    invoke-virtual {v11}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v11

    aget v11, v12, v11

    const/4 v12, -0x2

    const-string v13, "wrap"

    const-string v14, "m"

    const-string v15, "f"

    packed-switch v11, :pswitch_data_0

    goto/16 :goto_3

    .line 93
    :pswitch_0
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v10

    .line 94
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 93
    invoke-virtual {v10, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v10

    goto/16 :goto_3

    .line 89
    :pswitch_1
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v9

    .line 90
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 89
    invoke-virtual {v9, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v9

    goto/16 :goto_3

    .line 85
    :pswitch_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v7

    .line 86
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 85
    invoke-virtual {v7, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v7

    goto/16 :goto_3

    .line 81
    :pswitch_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v8

    .line 82
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 81
    invoke-virtual {v8, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v8

    goto/16 :goto_3

    .line 71
    :pswitch_4
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 72
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_8

    const-string v12, "invisible"

    .line 73
    invoke-virtual {v11, v12}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_1

    const/4 v11, 0x4

    .line 74
    invoke-virtual {v0, v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setVisibility(I)V

    goto/16 :goto_3

    :cond_1
    const-string v12, "gone"

    .line 75
    invoke-virtual {v11, v12}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v11

    if-eqz v11, :cond_8

    const/16 v11, 0x8

    .line 76
    invoke-virtual {v0, v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setVisibility(I)V

    goto :goto_3

    .line 68
    :pswitch_5
    invoke-interface {v1, v6, v5}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v11

    .line 67
    invoke-virtual {v0, v11}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setHorizontalFadingEdgeEnabled(Z)V

    goto :goto_3

    .line 53
    :pswitch_6
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 54
    invoke-virtual {v11, v15}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v15

    if-nez v15, :cond_4

    invoke-virtual {v11, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v14

    if-eqz v14, :cond_2

    goto :goto_1

    .line 58
    :cond_2
    invoke-virtual {v11, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_3

    .line 59
    iput v12, v2, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 62
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v12

    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v11

    iput v11, v2, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    :cond_4
    :goto_1
    const/4 v11, -0x1

    .line 55
    iput v11, v2, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 39
    :pswitch_7
    invoke-interface {v1, v6}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v11

    .line 41
    invoke-virtual {v11, v15}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v15

    if-nez v15, :cond_7

    invoke-virtual {v11, v14}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v14

    if-eqz v14, :cond_5

    goto :goto_2

    .line 45
    :cond_5
    invoke-virtual {v11, v13}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v13

    if-eqz v13, :cond_6

    .line 46
    iput v12, v2, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 49
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v12

    .line 50
    invoke-virtual {v12, v11}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v11

    iput v11, v2, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    :cond_7
    :goto_2
    const/4 v11, -0x1

    .line 42
    iput v11, v2, Landroid/widget/AbsListView$LayoutParams;->width:I

    :cond_8
    :goto_3
    add-int/lit8 v6, v6, 0x1

    goto/16 :goto_0

    .line 100
    :cond_9
    invoke-virtual {v0, v7, v8, v9, v10}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setPadding(IIII)V

    return-object v2

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 6

    .line 105
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    .line 106
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 107
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    .line 109
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    .line 110
    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v3, :cond_0

    goto :goto_1

    .line 114
    :cond_0
    sget-object v4, Lcom/mbridge/msdk/widget/custom/baseview/MBListView$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    packed-switch v3, :pswitch_data_0

    goto :goto_1

    .line 128
    :pswitch_0
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "false"

    .line 130
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    xor-int/lit8 v3, v3, 0x1

    .line 133
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0xb

    if-lt v4, v5, :cond_1

    .line 134
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setMotionEventSplittingEnabled(Z)V

    goto :goto_1

    .line 122
    :pswitch_1
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 123
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 122
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v3

    .line 124
    new-instance v4, Landroid/graphics/drawable/ColorDrawable;

    invoke-direct {v4, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    .line 125
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setDivider(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    .line 116
    :pswitch_2
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "@+id/"

    .line 117
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    const/4 v4, 0x5

    .line 118
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBListView;->setId(I)V

    :cond_1
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x9
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
