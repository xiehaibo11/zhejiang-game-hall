.class public Lcom/mbridge/msdk/widget/custom/baseview/MBButton;
.super Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;
.source "MBButton.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/custom/baseview/MBCircularProgressButton;-><init>(Landroid/content/Context;)V

    .line 30
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setAttributeSet(Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 9

    .line 35
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 36
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_5

    .line 38
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v4, :cond_0

    goto/16 :goto_1

    .line 42
    :cond_0
    sget-object v5, Lcom/mbridge/msdk/widget/custom/baseview/MBButton$1;->a:[I

    invoke-virtual {v4}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v4

    aget v4, v5, v4

    const-string v5, "/"

    const/4 v6, 0x1

    packed-switch v4, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_1

    .line 150
    :pswitch_1
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 151
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 152
    sget v5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x15

    if-lt v5, v6, :cond_4

    .line 153
    invoke-static {v4}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setLetterSpacing(F)V

    goto/16 :goto_1

    .line 144
    :pswitch_2
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 145
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 146
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingLeft()I

    move-result v5

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v6

    invoke-virtual {v6, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingRight()I

    move-result v6

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingBottom()I

    move-result v7

    invoke-virtual {p0, v5, v4, v6, v7}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setPadding(IIII)V

    goto/16 :goto_1

    .line 136
    :pswitch_3
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 137
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 138
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingLeft()I

    move-result v5

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingTop()I

    move-result v6

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getPaddingRight()I

    move-result v7

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v8

    invoke-virtual {v8, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v5, v6, v7, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setPadding(IIII)V

    goto/16 :goto_1

    :pswitch_4
    const/16 v4, 0x11

    .line 133
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setGravity(I)V

    goto/16 :goto_1

    .line 129
    :pswitch_5
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 130
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setContentDescription(Ljava/lang/CharSequence;)V

    goto/16 :goto_1

    .line 120
    :pswitch_6
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 121
    invoke-virtual {v4, v5}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v5

    add-int/2addr v5, v6

    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 122
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

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

    .line 123
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v5

    invoke-virtual {p0, v5, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setTextAppearance(Landroid/content/Context;I)V

    goto/16 :goto_1

    .line 116
    :pswitch_7
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "bold"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 117
    invoke-static {v6}, Landroid/graphics/Typeface;->defaultFromStyle(I)Landroid/graphics/Typeface;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setTypeface(Landroid/graphics/Typeface;)V

    goto/16 :goto_1

    .line 98
    :pswitch_8
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v6, "#"

    .line 99
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_1

    .line 100
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 101
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v4

    .line 100
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setBackgroundColor(I)V

    goto/16 :goto_1

    :cond_1
    const-string v6, "@drawable/"

    .line 103
    invoke-virtual {v4, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_2

    const/16 v6, 0xa

    .line 104
    invoke-virtual {v4, v6}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 106
    :cond_2
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-virtual {v6}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v6

    invoke-virtual {v6}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v6

    .line 107
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    .line 108
    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ".png"

    .line 109
    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 111
    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v4

    .line 112
    new-instance v5, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v5, v4}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto/16 :goto_1

    .line 88
    :pswitch_9
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 89
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    const-string v5, "invisible"

    .line 90
    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x4

    .line 91
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setVisibility(I)V

    goto/16 :goto_1

    :cond_3
    const-string v5, "gone"

    .line 92
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    const/16 v4, 0x8

    .line 93
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setVisibility(I)V

    goto/16 :goto_1

    .line 81
    :pswitch_a
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 82
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_4

    .line 83
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 84
    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    int-to-float v4, v4

    .line 83
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setTextSize(F)V

    goto :goto_1

    .line 77
    :pswitch_b
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 78
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 77
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setTextColor(I)V

    goto :goto_1

    .line 73
    :pswitch_c
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setHorizontallyScrolling(Z)V

    goto :goto_1

    .line 70
    :pswitch_d
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    .line 69
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setHorizontalFadingEdgeEnabled(Z)V

    goto :goto_1

    .line 56
    :pswitch_e
    invoke-interface {p1, v3, v2}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 58
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setFocusable(Z)V

    .line 59
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setFocusableInTouchMode(Z)V

    .line 60
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setSingleLine(Z)V

    .line 61
    sget-object v4, Landroid/text/TextUtils$TruncateAt;->MARQUEE:Landroid/text/TextUtils$TruncateAt;

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setEllipsize(Landroid/text/TextUtils$TruncateAt;)V

    const/16 v4, 0x3e8

    .line 62
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setMarqueeRepeatLimit(I)V

    .line 63
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setSingleLine()V

    .line 64
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setHorizontallyScrolling(Z)V

    .line 65
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->requestFocus()Z

    goto :goto_1

    .line 51
    :pswitch_f
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v4

    .line 52
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 51
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/widget/custom/a/b;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 53
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 44
    :pswitch_10
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    const-string v5, "@+id/"

    .line 45
    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    const/4 v5, 0x5

    .line 46
    invoke-virtual {v4, v5}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v4

    .line 47
    invoke-virtual {v4}, Ljava/lang/String;->hashCode()I

    move-result v4

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;->setId(I)V

    :cond_4
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_5
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_10
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
        :pswitch_0
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method
