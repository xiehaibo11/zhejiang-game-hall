.class public Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;
.super Landroid/widget/RelativeLayout;
.source "MBRelativeLayout.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 33
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    .line 27
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 28
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 21
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 17
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;
    .locals 12

    .line 92
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, 0x0

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 95
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    .line 96
    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/a/b;->b()Ljava/util/HashMap;

    move-result-object v2

    .line 97
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v3

    move v4, v1

    :goto_0
    if-ge v4, v3, :cond_8

    .line 99
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v5

    .line 100
    invoke-virtual {v2, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v5, :cond_0

    goto/16 :goto_3

    .line 104
    :cond_0
    sget-object v6, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout$1;->a:[I

    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v5

    aget v5, v6, v5

    const/4 v6, -0x2

    const-string v7, "match"

    const-string v8, "fill"

    const/4 v9, 0x4

    const-string v10, "@id"

    const/4 v11, -0x1

    packed-switch v5, :pswitch_data_0

    goto/16 :goto_3

    .line 205
    :pswitch_0
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0x9

    .line 206
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 196
    :pswitch_1
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xb

    .line 197
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 192
    :pswitch_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 193
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 192
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    goto/16 :goto_3

    .line 188
    :pswitch_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 189
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 188
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    goto/16 :goto_3

    .line 184
    :pswitch_4
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 185
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto/16 :goto_3

    .line 180
    :pswitch_5
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 181
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 180
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    goto/16 :goto_3

    .line 173
    :pswitch_6
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 174
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 175
    invoke-virtual {v5, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 176
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x1

    .line 175
    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 166
    :pswitch_7
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 167
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 168
    invoke-virtual {v5, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 169
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    .line 168
    invoke-virtual {v0, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 159
    :pswitch_8
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 160
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v6, 0x2

    .line 161
    invoke-virtual {v5, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 162
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    .line 161
    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 152
    :pswitch_9
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 153
    invoke-virtual {v5, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v6, 0x3

    .line 154
    invoke-virtual {v5, v9}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 155
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    .line 154
    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 147
    :pswitch_a
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xf

    .line 148
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 142
    :pswitch_b
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xa

    .line 143
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 137
    :pswitch_c
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xc

    .line 138
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_3

    .line 132
    :pswitch_d
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xe

    .line 133
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_3

    .line 119
    :pswitch_e
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 120
    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    goto :goto_1

    :cond_1
    const-string v7, "wrap"

    .line 124
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 125
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 128
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 121
    :cond_3
    :goto_1
    iput v11, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 106
    :pswitch_f
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 107
    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_6

    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    goto :goto_2

    :cond_4
    const-string v7, "w"

    .line 111
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_5

    .line 112
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    goto :goto_3

    .line 115
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    .line 116
    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    goto :goto_3

    .line 108
    :cond_6
    :goto_2
    iput v11, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    :cond_7
    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto/16 :goto_0

    :cond_8
    return-object v0

    :pswitch_data_0
    .packed-switch 0x6
        :pswitch_f
        :pswitch_e
        :pswitch_d
        :pswitch_c
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
    .locals 5

    const/4 v0, 0x0

    move v1, v0

    .line 219
    :goto_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 220
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 222
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 223
    instance-of v3, v2, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;

    if-eqz v3, :cond_0

    .line 224
    check-cast v2, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;

    move v3, v0

    .line 225
    :goto_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->getChildCount()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 226
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBLinearLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    .line 228
    invoke-virtual {v4}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    check-cast v4, Landroid/widget/LinearLayout$LayoutParams;

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 233
    :cond_1
    invoke-super/range {p0 .. p5}, Landroid/widget/RelativeLayout;->onLayout(ZIIII)V

    return-void
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 7

    .line 40
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 42
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_9

    .line 44
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 48
    :cond_0
    sget-object v4, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    const/4 v4, 0x5

    const/4 v5, 0x1

    if-eq v3, v5, :cond_7

    const/4 v5, 0x2

    if-eq v3, v5, :cond_4

    const/4 v5, 0x3

    if-eq v3, v5, :cond_3

    const/4 v5, 0x4

    if-eq v3, v5, :cond_2

    if-eq v3, v4, :cond_1

    goto/16 :goto_1

    .line 80
    :cond_1
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 81
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_8

    .line 82
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getPaddingLeft()I

    move-result v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getPaddingTop()I

    move-result v5

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    invoke-virtual {v6, v3}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getPaddingBottom()I

    move-result v6

    invoke-virtual {p0, v4, v5, v3, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setPadding(IIII)V

    goto :goto_1

    .line 76
    :cond_2
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 77
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setContentDescription(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 71
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 72
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 71
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->d(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setGravity(I)V

    goto :goto_1

    .line 57
    :cond_4
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "#"

    .line 58
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 60
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 59
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v3

    .line 61
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setBackgroundColor(I)V

    goto :goto_1

    :cond_5
    const-string v4, "@drawable/"

    .line 63
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_6

    const/16 v4, 0xa

    .line 64
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 66
    :cond_6
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->getContext()Landroid/content/Context;

    move-result-object v4

    const-string v5, "drawable"

    invoke-static {v4, v3, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setBackgroundResource(I)V

    goto :goto_1

    .line 50
    :cond_7
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v5, "@+id/"

    .line 51
    invoke-virtual {v3, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_8

    .line 52
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBRelativeLayout;->setId(I)V

    :cond_8
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_9
    return-void
.end method
