.class public Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;
.super Landroid/widget/LinearLayout;
.source "MBLinearLayout.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 26
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 27
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 18
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;
    .locals 10

    .line 96
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->generateDefaultLayoutParams()Landroid/widget/LinearLayout$LayoutParams;

    move-result-object v0

    .line 97
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v1

    .line 98
    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/custom/a/b;->b()Ljava/util/HashMap;

    move-result-object v1

    .line 102
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v2

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_7

    .line 104
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v4

    .line 105
    invoke-virtual {v1, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v4, :cond_0

    goto/16 :goto_3

    .line 110
    :cond_0
    sget-object v5, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout$1;->a:[I

    invoke-virtual {v4}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v4

    aget v4, v5, v4

    const/4 v5, -0x2

    const-string v6, "wrap"

    const-string v7, "m"

    const/4 v8, -0x1

    const-string v9, "f"

    packed-switch v4, :pswitch_data_0

    goto/16 :goto_3

    .line 178
    :pswitch_0
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 179
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 178
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->d(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    goto/16 :goto_3

    .line 174
    :pswitch_1
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 175
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 174
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    goto/16 :goto_3

    .line 170
    :pswitch_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 171
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 170
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    goto/16 :goto_3

    .line 166
    :pswitch_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 167
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->rightMargin:I

    goto/16 :goto_3

    .line 162
    :pswitch_4
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 163
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 162
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    goto/16 :goto_3

    .line 154
    :pswitch_5
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 155
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 154
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    .line 156
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->bottomMargin:I

    .line 157
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->leftMargin:I

    .line 158
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->rightMargin:I

    .line 159
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    goto/16 :goto_3

    .line 148
    :pswitch_6
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 149
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 148
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->d(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setGravity(I)V

    goto :goto_3

    :pswitch_7
    const/4 v4, 0x0

    .line 145
    invoke-interface {p1, v3, v4}, Landroid/util/AttributeSet;->getAttributeFloatValue(IF)F

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->weight:F

    goto :goto_3

    :pswitch_8
    const/16 v4, 0x10

    .line 142
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    goto :goto_3

    :pswitch_9
    const/4 v4, 0x1

    .line 139
    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->gravity:I

    goto :goto_3

    .line 126
    :pswitch_a
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 127
    invoke-virtual {v4, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-nez v9, :cond_3

    invoke-virtual {v4, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    goto :goto_1

    .line 131
    :cond_1
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    .line 132
    iput v5, v0, Landroid/widget/LinearLayout$LayoutParams;->height:I

    goto :goto_3

    .line 135
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->height:I

    goto :goto_3

    .line 128
    :cond_3
    :goto_1
    iput v8, v0, Landroid/widget/LinearLayout$LayoutParams;->height:I

    goto :goto_3

    .line 112
    :pswitch_b
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 114
    invoke-virtual {v4, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-nez v9, :cond_6

    invoke-virtual {v4, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    goto :goto_2

    .line 118
    :cond_4
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_5

    .line 119
    iput v5, v0, Landroid/widget/LinearLayout$LayoutParams;->width:I

    goto :goto_3

    .line 122
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 123
    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/widget/LinearLayout$LayoutParams;->width:I

    goto :goto_3

    .line 115
    :cond_6
    :goto_2
    iput v8, v0, Landroid/widget/LinearLayout$LayoutParams;->width:I

    :goto_3
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_7
    return-object v0

    nop

    :pswitch_data_0
    .packed-switch 0x6
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
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

.method protected onLayout(ZIIII)V
    .locals 0

    .line 190
    invoke-super/range {p0 .. p5}, Landroid/widget/LinearLayout;->onLayout(ZIIII)V

    return-void
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 8

    .line 31
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 32
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_c

    .line 34
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v4, :cond_0

    goto/16 :goto_1

    .line 38
    :cond_0
    sget-object v5, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout$1;->a:[I

    invoke-virtual {v4}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v4

    aget v4, v5, v4

    const/4 v5, 0x5

    const/4 v6, 0x1

    if-eq v4, v6, :cond_a

    const/4 v7, 0x2

    if-eq v4, v7, :cond_7

    const/4 v7, 0x3

    if-eq v4, v7, :cond_5

    const/4 v6, 0x4

    if-eq v4, v6, :cond_2

    if-eq v4, v5, :cond_1

    goto/16 :goto_1

    .line 87
    :cond_1
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 88
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setContentDescription(Ljava/lang/CharSequence;)V

    goto/16 :goto_1

    .line 75
    :cond_2
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 76
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_b

    const-string v5, "visible"

    .line 77
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_3

    .line 78
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setVisibility(I)V

    goto/16 :goto_1

    :cond_3
    const-string v6, "gone"

    .line 79
    invoke-virtual {v4, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_4

    const/16 v4, 0x8

    .line 80
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setVisibility(I)V

    goto/16 :goto_1

    .line 81
    :cond_4
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_b

    .line 82
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setVisibility(I)V

    goto/16 :goto_1

    .line 67
    :cond_5
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "horizontal"

    .line 68
    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_6

    .line 69
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setOrientation(I)V

    goto/16 :goto_1

    .line 71
    :cond_6
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setOrientation(I)V

    goto :goto_1

    .line 47
    :cond_7
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "#"

    .line 48
    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_8

    .line 49
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 50
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 49
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v4

    .line 51
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setBackgroundColor(I)V

    goto :goto_1

    :cond_8
    const-string v5, "@drawable/"

    .line 53
    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_9

    const/16 v5, 0xa

    .line 54
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 56
    :cond_9
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {v5}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v5

    invoke-virtual {v5}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v5

    .line 57
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    .line 58
    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".png"

    .line 59
    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 61
    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v4

    .line 62
    new-instance v5, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v5, v4}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    .line 40
    :cond_a
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v6, "@+id/"

    .line 41
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_b

    .line 42
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->setId(I)V

    :cond_b
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_c
    return-void
.end method
