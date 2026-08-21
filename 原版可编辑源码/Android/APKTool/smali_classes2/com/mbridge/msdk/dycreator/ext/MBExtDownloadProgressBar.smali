.class public Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;
.super Lcom/mbridge/msdk/widget/MBDownloadProgressBar;
.source "MBExtDownloadProgressBar.java"


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 30
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;-><init>(Landroid/content/Context;)V

    .line 32
    :try_start_0
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setAttributeSet(Landroid/util/AttributeSet;)V

    .line 33
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 35
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "MBExtDownloadProgressBar"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method


# virtual methods
.method public bridge synthetic generateLayoutParams(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;
    .locals 0

    .line 21
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;

    move-result-object p1

    return-object p1
.end method

.method public generateLayoutParams(Landroid/util/AttributeSet;)Landroid/widget/RelativeLayout$LayoutParams;
    .locals 12

    .line 110
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, 0x0

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 111
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/dycreator/a/b;->b()Ljava/util/HashMap;

    move-result-object v2

    .line 112
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v3

    move v4, v1

    :goto_0
    if-ge v4, v3, :cond_8

    .line 114
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v5

    .line 115
    invoke-virtual {v2, v5}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/dycreator/a/c;

    if-nez v5, :cond_0

    goto/16 :goto_3

    .line 119
    :cond_0
    sget-object v6, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar$1;->a:[I

    invoke-virtual {v5}, Lcom/mbridge/msdk/dycreator/a/c;->ordinal()I

    move-result v5

    aget v5, v6, v5

    const/4 v6, -0x2

    const-string v7, "match"

    const-string v8, "fill"

    const-string v9, "@+id"

    const/4 v10, 0x5

    const/4 v11, -0x1

    packed-switch v5, :pswitch_data_0

    goto/16 :goto_3

    .line 260
    :pswitch_0
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0x15

    .line 261
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 255
    :pswitch_1
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xd

    .line 256
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 249
    :pswitch_2
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 250
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/16 v6, 0x8

    .line 251
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 243
    :pswitch_3
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 244
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v6, 0x7

    .line 245
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 237
    :pswitch_4
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 238
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 239
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v10, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 231
    :pswitch_5
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 232
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v6, 0x6

    .line 233
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 226
    :pswitch_6
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0x9

    .line 227
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 221
    :pswitch_7
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xb

    .line 222
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 217
    :pswitch_8
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v5

    .line 218
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 217
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    goto/16 :goto_3

    .line 213
    :pswitch_9
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v5

    .line 214
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 213
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    goto/16 :goto_3

    .line 209
    :pswitch_a
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v5

    .line 210
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    goto/16 :goto_3

    .line 205
    :pswitch_b
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v5

    .line 206
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    .line 205
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    goto/16 :goto_3

    .line 201
    :pswitch_c
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v5

    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    .line 202
    invoke-virtual {v0, v5, v5, v5, v5}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    goto/16 :goto_3

    .line 195
    :pswitch_d
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 196
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/16 v6, 0x11

    .line 197
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 188
    :pswitch_e
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 189
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 190
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 191
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x1

    .line 190
    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 181
    :pswitch_f
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 182
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 183
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    .line 184
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    .line 183
    invoke-virtual {v0, v1, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 173
    :pswitch_10
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 174
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    .line 175
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x2

    .line 177
    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    .line 176
    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 167
    :pswitch_11
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 168
    invoke-virtual {v5, v9}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v6, 0x3

    .line 169
    invoke-virtual {v5, v10}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/String;->hashCode()I

    move-result v5

    invoke-virtual {v0, v6, v5}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 162
    :pswitch_12
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xf

    .line 163
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 157
    :pswitch_13
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xa

    .line 158
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto/16 :goto_3

    .line 152
    :pswitch_14
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xc

    .line 153
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_3

    .line 147
    :pswitch_15
    invoke-interface {p1, v4, v1}, Landroid/util/AttributeSet;->getAttributeBooleanValue(IZ)Z

    move-result v5

    if-eqz v5, :cond_7

    const/16 v5, 0xe

    .line 148
    invoke-virtual {v0, v5, v11}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    goto :goto_3

    .line 134
    :pswitch_16
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 135
    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_3

    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    goto :goto_1

    :cond_1
    const-string v7, "wrap"

    .line 139
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 140
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 143
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 136
    :cond_3
    :goto_1
    iput v11, v0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    goto :goto_3

    .line 121
    :pswitch_17
    invoke-interface {p1, v4}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v5

    .line 122
    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-nez v8, :cond_6

    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    goto :goto_2

    :cond_4
    const-string v7, "w"

    .line 126
    invoke-virtual {v5, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_5

    .line 127
    iput v6, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    goto :goto_3

    .line 130
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v6

    .line 131
    invoke-virtual {v6, v5}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v5

    iput v5, v0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    goto :goto_3

    .line 123
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
        :pswitch_17
        :pswitch_16
        :pswitch_15
        :pswitch_14
        :pswitch_13
        :pswitch_12
        :pswitch_11
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

    .line 275
    :goto_0
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->getChildCount()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 276
    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 277
    invoke-virtual {v2}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 278
    instance-of v3, v2, Lcom/mbridge/msdk/dycreator/baseview/MBLinearLayout;

    if-eqz v3, :cond_0

    .line 279
    check-cast v2, Lcom/mbridge/msdk/dycreator/baseview/MBLinearLayout;

    move v3, v0

    .line 280
    :goto_1
    invoke-virtual {v2}, Lcom/mbridge/msdk/dycreator/baseview/MBLinearLayout;->getChildCount()I

    move-result v4

    if-ge v3, v4, :cond_0

    .line 281
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/dycreator/baseview/MBLinearLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v4

    .line 282
    invoke-virtual {v4}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v4

    check-cast v4, Landroid/widget/LinearLayout$LayoutParams;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception v0

    .line 287
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBExtDownloadProgressBar"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 289
    :cond_1
    invoke-super/range {p0 .. p5}, Lcom/mbridge/msdk/widget/MBDownloadProgressBar;->onLayout(ZIIII)V

    return-void
.end method

.method public setAttributeSet(Landroid/util/AttributeSet;)V
    .locals 6

    .line 47
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/a/b;->c()Ljava/util/HashMap;

    move-result-object v0

    .line 49
    invoke-interface {p1}, Landroid/util/AttributeSet;->getAttributeCount()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_a

    .line 51
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeName(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/dycreator/a/c;

    if-nez v3, :cond_0

    goto/16 :goto_1

    .line 55
    :cond_0
    invoke-virtual {v3}, Lcom/mbridge/msdk/dycreator/a/c;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "setupview"

    invoke-static {v5, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    sget-object v4, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar$1;->a:[I

    invoke-virtual {v3}, Lcom/mbridge/msdk/dycreator/a/c;->ordinal()I

    move-result v3

    aget v3, v4, v3

    const/4 v4, 0x5

    const/4 v5, 0x1

    if-eq v3, v5, :cond_8

    const/4 v5, 0x2

    if-eq v3, v5, :cond_5

    const/4 v5, 0x3

    if-eq v3, v5, :cond_4

    const/4 v5, 0x4

    if-eq v3, v5, :cond_3

    if-eq v3, v4, :cond_1

    goto/16 :goto_1

    .line 94
    :cond_1
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 95
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_9

    const-string v4, "invisible"

    .line 96
    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    .line 97
    invoke-virtual {p0, v5}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setVisibility(I)V

    goto/16 :goto_1

    :cond_2
    const-string v4, "gone"

    .line 98
    invoke-virtual {v3, v4}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_9

    const/16 v3, 0x8

    .line 99
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setVisibility(I)V

    goto/16 :goto_1

    .line 91
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v3

    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/dycreator/a/b;->c(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setGravity(I)V

    goto :goto_1

    .line 87
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v3

    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/dycreator/a/b;->b(Ljava/lang/String;)I

    move-result v3

    .line 88
    invoke-virtual {p0, v3, v3, v3, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setPadding(IIII)V

    goto :goto_1

    :cond_5
    const-string v3, "litongtest"

    const-string v4, "\u8bbe\u7f6e\u80cc\u666f\u989c\u8272"

    .line 64
    invoke-static {v3, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 66
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "#"

    .line 67
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_6

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/dycreator/a/b;->a()Lcom/mbridge/msdk/dycreator/a/b;

    move-result-object v3

    .line 69
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v4

    .line 68
    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/dycreator/a/b;->a(Ljava/lang/String;)I

    move-result v3

    .line 70
    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setBackgroundColor(I)V

    goto :goto_1

    :cond_6
    const-string v4, "@drawable/"

    .line 72
    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_7

    const/16 v4, 0xa

    .line 73
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    .line 75
    :cond_7
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    const-string v5, "drawable"

    invoke-static {v4, v3, v5}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setBackgroundResource(I)V

    goto :goto_1

    .line 58
    :cond_8
    invoke-interface {p1, v2}, Landroid/util/AttributeSet;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    const-string v5, "@+id/"

    .line 59
    invoke-virtual {v3, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_9

    .line 60
    invoke-virtual {v3, v4}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/dycreator/ext/MBExtDownloadProgressBar;->setId(I)V

    :cond_9
    :goto_1
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    :cond_a
    return-void
.end method
