.class public Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;
.super Landroid/support/v7/widget/AppCompatImageView;
.source "MBImageView.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1}, Landroid/support/v7/widget/AppCompatImageView;-><init>(Landroid/content/Context;)V

    .line 24
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setAttributeSet(Landroid/util/AttributeSet;)V

    return-void
.end method


# virtual methods
.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 11

    .line 126
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    const/4 v1, -0x1

    if-nez v0, :cond_0

    .line 128
    new-instance v0, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v0, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 130
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v2

    const/4 v3, 0x0

    :goto_0
    const/4 v4, 0x2

    if-ge v3, v4, :cond_d

    .line 133
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v5, :cond_1

    goto/16 :goto_3

    .line 137
    :cond_1
    sget-object v6, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView$1;->a:[I

    invoke-virtual {v5}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v5

    aget v5, v6, v5

    const/4 v6, -0x2

    const-string v7, "wrap"

    const-string v8, "m"

    const-string v9, "f"

    const/4 v10, 0x1

    if-eq v5, v10, :cond_8

    if-eq v5, v4, :cond_4

    const/4 v4, 0x7

    if-eq v5, v4, :cond_2

    goto/16 :goto_3

    .line 165
    :cond_2
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 166
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_c

    const-string v5, "invisible"

    .line 167
    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    const/4 v4, 0x4

    .line 168
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto :goto_3

    :cond_3
    const-string v5, "gone"

    .line 169
    invoke-virtual {v4, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_c

    const/16 v4, 0x8

    .line 170
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto :goto_3

    .line 152
    :cond_4
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 153
    invoke-virtual {v4, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_7

    invoke-virtual {v4, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_5

    goto :goto_1

    .line 157
    :cond_5
    invoke-virtual {v4, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 158
    iput v6, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    goto :goto_3

    .line 161
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    goto :goto_3

    .line 154
    :cond_7
    :goto_1
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    goto :goto_3

    .line 139
    :cond_8
    invoke-interface {p1, v3}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 140
    invoke-virtual {v4, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_b

    invoke-virtual {v4, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_9

    goto :goto_2

    .line 144
    :cond_9
    invoke-virtual {v4, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_a

    .line 145
    iput v6, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    goto :goto_3

    .line 148
    :cond_a
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v5

    .line 149
    invoke-virtual {v5, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v4

    iput v4, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    goto :goto_3

    .line 141
    :cond_b
    :goto_2
    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    :cond_c
    :goto_3
    add-int/lit8 v3, v3, 0x1

    goto/16 :goto_0

    :cond_d
    return-object v0
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 7

    .line 28
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 29
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_6

    .line 31
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/widget/custom/a/c;

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 35
    :cond_0
    sget-object v4, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/widget/custom/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    const-string v4, "m"

    const-string v5, "f"

    packed-switch v3, :pswitch_data_0

    goto/16 :goto_1

    .line 96
    :pswitch_0
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 97
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 98
    sget-object v3, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    goto/16 :goto_1

    .line 84
    :pswitch_1
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 85
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_5

    const-string v4, "invisible"

    .line 86
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    const/4 v6, 0x4

    if-eqz v5, :cond_1

    .line 87
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto/16 :goto_1

    :cond_1
    const-string v5, "gone"

    .line 88
    invoke-virtual {v3, v5}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    const/16 v3, 0x8

    .line 89
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto/16 :goto_1

    .line 90
    :cond_2
    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 91
    invoke-virtual {p0, v6}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setVisibility(I)V

    goto/16 :goto_1

    .line 80
    :pswitch_2
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 81
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setContentDescription(Ljava/lang/CharSequence;)V

    goto/16 :goto_1

    .line 60
    :pswitch_3
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "#"

    .line 61
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v3

    .line 63
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->b(Ljava/lang/String;)I

    move-result v3

    .line 62
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setBackgroundColor(I)V

    goto/16 :goto_1

    :cond_3
    const-string v4, "@drawable/"

    .line 65
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    const/16 v4, 0xa

    .line 66
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 68
    :cond_4
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-virtual {v4}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v4

    invoke-virtual {v4}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v4

    .line 69
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    .line 70
    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "/"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".png"

    .line 71
    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 73
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v3

    if-eqz v3, :cond_5

    .line 75
    new-instance v4, Landroid/graphics/drawable/BitmapDrawable;

    invoke-direct {v4, v3}, Landroid/graphics/drawable/BitmapDrawable;-><init>(Landroid/graphics/Bitmap;)V

    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    goto :goto_1

    .line 57
    :pswitch_4
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    goto :goto_1

    .line 51
    :pswitch_5
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "@+id/"

    .line 52
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    const/4 v4, 0x5

    .line 53
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->setId(I)V

    goto :goto_1

    .line 44
    :pswitch_6
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 45
    invoke-virtual {v3, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_5

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    goto :goto_1

    .line 37
    :pswitch_7
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 38
    invoke-virtual {p0}, Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    .line 39
    invoke-virtual {v3, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_5

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v3

    :cond_5
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_6
    return-void

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
