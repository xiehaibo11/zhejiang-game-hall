.class public Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;
.super Landroid/support/v7/widget/AppCompatTextView;
.source "MBTextView.java"


# instance fields
.field private a:Z

.field public attrs:Landroid/util/AttributeSet;


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 27
    invoke-direct {p0, p1}, Landroid/support/v7/widget/AppCompatTextView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 22
    iput-boolean p1, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->a:Z

    .line 28
    iput-object p2, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->attrs:Landroid/util/AttributeSet;

    .line 29
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setAttributeSet(Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/AbsListView$LayoutParams;
    .locals 11

    .line 161
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/AbsListView$LayoutParams;

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 163
    new-instance v0, Landroid/widget/AbsListView$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 165
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v2

    .line 166
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v3

    const/4 v4, 0x0

    move v5, v4

    :goto_0
    if-ge v5, v3, :cond_c

    .line 168
    invoke-interface {p1, v5}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v6, :cond_1

    goto/16 :goto_3

    .line 172
    :cond_1
    sget-object v7, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView$1;->a:[I

    invoke-virtual {v6}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v6

    aget v6, v7, v6

    const/4 v7, 0x4

    if-eq v6, v7, :cond_a

    const/16 v8, 0x9

    if-eq v6, v8, :cond_8

    const/4 v7, -0x2

    const-string v8, "wrap"

    const-string v9, "m"

    const-string v10, "f"

    packed-switch v6, :pswitch_data_0

    goto/16 :goto_3

    .line 187
    :pswitch_0
    invoke-interface {p1, v5}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 188
    invoke-virtual {v6, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_4

    invoke-virtual {v6, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_2

    goto :goto_1

    .line 192
    :cond_2
    invoke-virtual {v6, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_3

    .line 193
    iput v7, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto/16 :goto_3

    .line 196
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v7

    invoke-virtual {v7, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v6

    iput v6, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 189
    :cond_4
    :goto_1
    iput v1, v0, Landroid/widget/AbsListView$LayoutParams;->height:I

    goto :goto_3

    .line 174
    :pswitch_1
    invoke-interface {p1, v5}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 175
    invoke-virtual {v6, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_7

    invoke-virtual {v6, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_5

    goto :goto_2

    .line 179
    :cond_5
    invoke-virtual {v6, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_6

    .line 180
    iput v7, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 183
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v7

    .line 184
    invoke-virtual {v7, v6}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v6

    iput v6, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 176
    :cond_7
    :goto_2
    iput v1, v0, Landroid/widget/AbsListView$LayoutParams;->width:I

    goto :goto_3

    .line 223
    :pswitch_2
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    .line 224
    invoke-interface {p1, v5}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v7

    .line 223
    invoke-virtual {v6, v7}, Lcom/mbridge/msdk/widget/custom/a/b;->d(Ljava/lang/String;)I

    move-result v6

    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setGravity(I)V

    goto :goto_3

    .line 204
    :cond_8
    invoke-interface {p1, v5}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 205
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_b

    const-string v8, "invisible"

    .line 206
    invoke-virtual {v6, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    if-eqz v8, :cond_9

    .line 207
    invoke-virtual {p0, v7}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setVisibility(I)V

    goto :goto_3

    :cond_9
    const-string v7, "gone"

    .line 208
    invoke-virtual {v6, v7}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_b

    const/16 v6, 0x8

    .line 209
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setVisibility(I)V

    goto :goto_3

    .line 201
    :cond_a
    invoke-interface {p1, v5, v4}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v6

    .line 200
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setHorizontalFadingEdgeEnabled(Z)V

    :cond_b
    :goto_3
    add-int/lit8 v5, v5, 0x1

    goto/16 :goto_0

    :cond_c
    return-object v0

    :pswitch_data_0
    .packed-switch 0xe
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public isFocused()Z
    .locals 1

    .line 35
    iget-boolean v0, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->a:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    .line 38
    :cond_0
    invoke-super {p0}, Landroid/support/v7/widget/AppCompatTextView;->isFocused()Z

    move-result v0

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 44
    invoke-super {p0}, Landroid/support/v7/widget/AppCompatTextView;->onAttachedToWindow()V

    return-void
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 9

    .line 50
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 51
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_6

    .line 53
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v4, :cond_0

    goto/16 :goto_1

    .line 57
    :cond_0
    sget-object v5, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView$1;->a:[I

    invoke-virtual {v4}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v4

    aget v4, v5, v4

    const-string v5, "/"

    const/4 v6, 0x1

    packed-switch v4, :pswitch_data_0

    goto/16 :goto_1

    .line 151
    :pswitch_0
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->d(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setGravity(I)V

    goto/16 :goto_1

    .line 147
    :pswitch_1
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 148
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setContentDescription(Ljava/lang/CharSequence;)V

    goto/16 :goto_1

    .line 139
    :pswitch_2
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 140
    invoke-virtual {v4, v5}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v5

    add-int/2addr v5, v6

    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 142
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getContext()Landroid/content/Context;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "R.style."

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v5, v6, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->a(Landroid/content/Context;Ljava/lang/String;)I

    move-result v4

    .line 143
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0, v5, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setTextAppearance(Landroid/content/Context;I)V

    goto/16 :goto_1

    .line 135
    :pswitch_3
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "bold"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 136
    invoke-static {v6}, Landroid/graphics/Typeface;->defaultFromStyle(I)Landroid/graphics/Typeface;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setTypeface(Landroid/graphics/Typeface;)V

    goto/16 :goto_1

    .line 117
    :pswitch_4
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v6, "#"

    .line 118
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 119
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 120
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v4

    .line 119
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setBackgroundColor(I)V

    goto/16 :goto_1

    :cond_1
    const-string v6, "@drawable/"

    .line 122
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    const/16 v6, 0xa

    .line 123
    invoke-virtual {v4, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 125
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v6

    invoke-virtual {v6}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v6

    .line 126
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    .line 127
    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".png"

    .line 128
    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 130
    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v4

    .line 131
    new-instance v5, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v5, v4}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto/16 :goto_1

    .line 105
    :pswitch_5
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 106
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    const-string v5, "invisible"

    .line 107
    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x4

    .line 108
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setVisibility(I)V

    goto/16 :goto_1

    :cond_3
    const-string v5, "gone"

    .line 109
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    const/16 v4, 0x8

    .line 110
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setVisibility(I)V

    goto/16 :goto_1

    :cond_4
    const-string v5, "visible"

    .line 111
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 112
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setVisibility(I)V

    goto/16 :goto_1

    .line 101
    :pswitch_6
    invoke-interface {p1, v3, v6}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    .line 102
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setSingleLine(Z)V

    goto/16 :goto_1

    .line 94
    :pswitch_7
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 95
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_5

    .line 96
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 97
    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    int-to-float v4, v4

    .line 96
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setTextSize(F)V

    goto :goto_1

    .line 90
    :pswitch_8
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 91
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 90
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setTextColor(I)V

    goto :goto_1

    .line 86
    :pswitch_9
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setHorizontallyScrolling(Z)V

    goto :goto_1

    .line 83
    :pswitch_a
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    .line 82
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setHorizontalFadingEdgeEnabled(Z)V

    goto :goto_1

    .line 70
    :pswitch_b
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 71
    iput-boolean v6, p0, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->a:Z

    .line 72
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setFocusable(Z)V

    .line 73
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setFocusableInTouchMode(Z)V

    .line 74
    sget-object v4, Landroid/text/TextUtils$TruncateAt;->END:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    const/16 v4, 0x3e8

    .line 75
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setMarqueeRepeatLimit(I)V

    .line 77
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setHorizontallyScrolling(Z)V

    goto :goto_1

    .line 66
    :pswitch_c
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 67
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 59
    :pswitch_d
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "@+id/"

    .line 60
    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_5

    const/4 v5, 0x5

    .line 61
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 62
    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBTextView;->setId(I)V

    :cond_5
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_6
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
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
