.class public final Lcom/mbridge/msdk/widget/custom/b/b;
.super Ljava/lang/Object;
.source "FastBlurUtil.java"


# static fields
.field public static a:Ljava/lang/String; = "FastBlurUtil"

.field public static b:I = 0x800


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;
    .locals 35

    if-gtz p1, :cond_0

    const/16 v0, 0xa

    goto :goto_0

    :cond_0
    move/from16 v0, p1

    .line 76
    :goto_0
    invoke-virtual/range {p0 .. p0}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v1

    div-int/2addr v1, v0

    .line 77
    invoke-virtual/range {p0 .. p0}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v2

    div-int/2addr v2, v0

    const/4 v0, 0x0

    move-object/from16 v3, p0

    .line 75
    invoke-static {v3, v1, v2, v0}, Landroid/graphics/Bitmap;->createScaledBitmap(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;

    move-result-object v1

    .line 1095
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v2

    .line 1096
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v11

    mul-int v12, v2, v11

    .line 1098
    new-array v13, v12, [I

    const/4 v5, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v3, v1

    move-object v4, v13

    move v6, v2

    move v9, v2

    move v10, v11

    .line 1099
    invoke-virtual/range {v3 .. v10}, Landroid/graphics/Bitmap;->getPixels([IIIIIII)V

    add-int/lit8 v3, v2, -0x1

    add-int/lit8 v4, v11, -0x1

    const/16 v5, 0x11

    .line 1106
    new-array v6, v12, [I

    .line 1107
    new-array v7, v12, [I

    .line 1108
    new-array v8, v12, [I

    .line 1110
    invoke-static {v2, v11}, Ljava/lang/Math;->max(II)I

    move-result v9

    new-array v9, v9, [I

    const/16 v10, 0x5100

    new-array v12, v10, [I

    move v14, v0

    :goto_1
    if-ge v14, v10, :cond_1

    .line 1116
    div-int/lit8 v15, v14, 0x51

    aput v15, v12, v14

    add-int/lit8 v14, v14, 0x1

    goto :goto_1

    :cond_1
    const/4 v10, 0x3

    const/4 v14, 0x2

    new-array v15, v14, [I

    const/16 v16, 0x1

    aput v10, v15, v16

    aput v5, v15, v0

    .line 1121
    const-class v10, I

    invoke-static {v10, v15}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;[I)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, [[I

    move v15, v0

    move/from16 v17, v15

    move/from16 v18, v17

    :goto_2
    const/16 v19, -0x8

    const/16 v5, 0x8

    if-ge v15, v11, :cond_6

    move/from16 v20, v0

    move/from16 v21, v20

    move/from16 v22, v21

    move/from16 v23, v22

    move/from16 v24, v23

    move/from16 v25, v24

    move/from16 v26, v25

    move/from16 v27, v26

    move/from16 v14, v19

    move/from16 v19, v27

    :goto_3
    const v28, 0xff00

    const/high16 v29, 0xff0000

    if-gt v14, v5, :cond_3

    .line 1133
    invoke-static {v14, v0}, Ljava/lang/Math;->max(II)I

    move-result v5

    invoke-static {v3, v5}, Ljava/lang/Math;->min(II)I

    move-result v5

    add-int v5, v17, v5

    aget v5, v13, v5

    add-int/lit8 v31, v14, 0x8

    .line 1134
    aget-object v31, v10, v31

    and-int v29, v5, v29

    shr-int/lit8 v29, v29, 0x10

    .line 1135
    aput v29, v31, v0

    and-int v28, v5, v28

    const/16 v29, 0x8

    shr-int/lit8 v28, v28, 0x8

    .line 1136
    aput v28, v31, v16

    and-int/lit16 v5, v5, 0xff

    const/16 v28, 0x2

    .line 1137
    aput v5, v31, v28

    .line 1138
    invoke-static {v14}, Ljava/lang/Math;->abs(I)I

    move-result v5

    rsub-int/lit8 v5, v5, 0x9

    .line 1139
    aget v29, v31, v0

    mul-int v29, v29, v5

    add-int v19, v19, v29

    .line 1140
    aget v29, v31, v16

    mul-int v29, v29, v5

    add-int v20, v20, v29

    .line 1141
    aget v29, v31, v28

    mul-int v29, v29, v5

    add-int v21, v21, v29

    if-lez v14, :cond_2

    .line 1143
    aget v5, v31, v0

    add-int v25, v25, v5

    .line 1144
    aget v5, v31, v16

    add-int v26, v26, v5

    .line 1145
    aget v5, v31, v28

    add-int v27, v27, v5

    goto :goto_4

    .line 1147
    :cond_2
    aget v5, v31, v0

    add-int v22, v22, v5

    .line 1148
    aget v5, v31, v16

    add-int v23, v23, v5

    .line 1149
    aget v5, v31, v28

    add-int v24, v24, v5

    :goto_4
    add-int/lit8 v14, v14, 0x1

    const/16 v5, 0x8

    goto :goto_3

    :cond_3
    move v14, v0

    const/16 v5, 0x8

    :goto_5
    if-ge v14, v2, :cond_5

    .line 1156
    aget v31, v12, v19

    aput v31, v6, v17

    .line 1157
    aget v31, v12, v20

    aput v31, v7, v17

    .line 1158
    aget v31, v12, v21

    aput v31, v8, v17

    sub-int v19, v19, v22

    sub-int v20, v20, v23

    sub-int v21, v21, v24

    add-int/lit8 v31, v5, -0x8

    const/16 v32, 0x11

    add-int/lit8 v31, v31, 0x11

    .line 1165
    rem-int/lit8 v31, v31, 0x11

    aget-object v31, v10, v31

    .line 1167
    aget v32, v31, v0

    sub-int v22, v22, v32

    .line 1168
    aget v32, v31, v16

    sub-int v23, v23, v32

    const/16 v32, 0x2

    .line 1169
    aget v33, v31, v32

    sub-int v24, v24, v33

    if-nez v15, :cond_4

    add-int/lit8 v32, v14, 0x8

    add-int/lit8 v0, v32, 0x1

    .line 1172
    invoke-static {v0, v3}, Ljava/lang/Math;->min(II)I

    move-result v0

    aput v0, v9, v14

    .line 1174
    :cond_4
    aget v0, v9, v14

    add-int v0, v18, v0

    aget v0, v13, v0

    and-int v32, v0, v29

    shr-int/lit8 v32, v32, 0x10

    const/16 v33, 0x0

    .line 1176
    aput v32, v31, v33

    and-int v32, v0, v28

    const/16 v30, 0x8

    shr-int/lit8 v32, v32, 0x8

    .line 1177
    aput v32, v31, v16

    and-int/lit16 v0, v0, 0xff

    const/16 v32, 0x2

    .line 1178
    aput v0, v31, v32

    .line 1180
    aget v0, v31, v33

    add-int v25, v25, v0

    .line 1181
    aget v0, v31, v16

    add-int v26, v26, v0

    .line 1182
    aget v0, v31, v32

    add-int v27, v27, v0

    add-int v19, v19, v25

    add-int v20, v20, v26

    add-int v21, v21, v27

    add-int/lit8 v5, v5, 0x1

    const/16 v0, 0x11

    .line 1188
    rem-int/2addr v5, v0

    .line 1189
    rem-int/lit8 v0, v5, 0x11

    aget-object v0, v10, v0

    const/16 v31, 0x0

    .line 1191
    aget v32, v0, v31

    add-int v22, v22, v32

    .line 1192
    aget v32, v0, v16

    add-int v23, v23, v32

    const/16 v32, 0x2

    .line 1193
    aget v33, v0, v32

    add-int v24, v24, v33

    .line 1195
    aget v34, v0, v31

    sub-int v25, v25, v34

    .line 1196
    aget v31, v0, v16

    sub-int v26, v26, v31

    .line 1197
    aget v0, v0, v32

    sub-int v27, v27, v0

    add-int/lit8 v17, v17, 0x1

    add-int/lit8 v14, v14, 0x1

    const/4 v0, 0x0

    goto/16 :goto_5

    :cond_5
    add-int v18, v18, v2

    add-int/lit8 v15, v15, 0x1

    const/4 v0, 0x0

    const/16 v5, 0x11

    const/4 v14, 0x2

    goto/16 :goto_2

    :cond_6
    const/4 v0, 0x0

    :goto_6
    if-ge v0, v2, :cond_c

    mul-int v3, v19, v2

    move-object/from16 v24, v1

    move-object/from16 v25, v9

    move/from16 v1, v19

    const/4 v5, 0x0

    const/16 v9, 0x8

    const/4 v14, 0x0

    const/4 v15, 0x0

    const/16 v17, 0x0

    const/16 v18, 0x0

    const/16 v20, 0x0

    const/16 v21, 0x0

    const/16 v22, 0x0

    const/16 v23, 0x0

    :goto_7
    if-gt v1, v9, :cond_9

    const/4 v9, 0x0

    .line 1207
    invoke-static {v9, v3}, Ljava/lang/Math;->max(II)I

    move-result v26

    add-int v26, v26, v0

    add-int/lit8 v27, v1, 0x8

    .line 1209
    aget-object v27, v10, v27

    .line 1211
    aget v28, v6, v26

    aput v28, v27, v9

    .line 1212
    aget v9, v7, v26

    aput v9, v27, v16

    .line 1213
    aget v9, v8, v26

    const/16 v28, 0x2

    aput v9, v27, v28

    .line 1215
    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result v9

    rsub-int/lit8 v9, v9, 0x9

    .line 1217
    aget v28, v6, v26

    mul-int v28, v28, v9

    add-int v5, v5, v28

    .line 1218
    aget v28, v7, v26

    mul-int v28, v28, v9

    add-int v14, v14, v28

    .line 1219
    aget v26, v8, v26

    mul-int v26, v26, v9

    add-int v15, v15, v26

    if-lez v1, :cond_7

    const/4 v9, 0x0

    .line 1222
    aget v26, v27, v9

    add-int v21, v21, v26

    .line 1223
    aget v26, v27, v16

    add-int v22, v22, v26

    const/16 v26, 0x2

    .line 1224
    aget v27, v27, v26

    add-int v23, v23, v27

    goto :goto_8

    :cond_7
    const/4 v9, 0x0

    const/16 v26, 0x2

    .line 1226
    aget v28, v27, v9

    add-int v17, v17, v28

    .line 1227
    aget v9, v27, v16

    add-int v18, v18, v9

    .line 1228
    aget v9, v27, v26

    add-int v20, v20, v9

    :goto_8
    if-ge v1, v4, :cond_8

    add-int/2addr v3, v2

    :cond_8
    add-int/lit8 v1, v1, 0x1

    const/16 v9, 0x8

    goto :goto_7

    :cond_9
    move v3, v0

    const/4 v1, 0x0

    const/16 v29, 0x8

    :goto_9
    if-ge v1, v11, :cond_b

    const/high16 v9, -0x1000000

    .line 1239
    aget v26, v13, v3

    and-int v9, v26, v9

    aget v26, v12, v5

    shl-int/lit8 v26, v26, 0x10

    or-int v9, v9, v26

    aget v26, v12, v14

    const/16 v27, 0x8

    shl-int/lit8 v26, v26, 0x8

    or-int v9, v9, v26

    aget v26, v12, v15

    or-int v9, v9, v26

    aput v9, v13, v3

    sub-int v5, v5, v17

    sub-int v14, v14, v18

    sub-int v15, v15, v20

    add-int/lit8 v9, v29, -0x8

    const/16 v26, 0x11

    add-int/lit8 v9, v9, 0x11

    .line 1246
    rem-int/lit8 v9, v9, 0x11

    aget-object v9, v10, v9

    const/16 v26, 0x0

    .line 1248
    aget v28, v9, v26

    sub-int v17, v17, v28

    .line 1249
    aget v26, v9, v16

    sub-int v18, v18, v26

    const/16 v26, 0x2

    .line 1250
    aget v28, v9, v26

    sub-int v20, v20, v28

    if-nez v0, :cond_a

    move-object/from16 v26, v12

    add-int/lit8 v12, v1, 0x9

    .line 1253
    invoke-static {v12, v4}, Ljava/lang/Math;->min(II)I

    move-result v12

    mul-int/2addr v12, v2

    aput v12, v25, v1

    goto :goto_a

    :cond_a
    move-object/from16 v26, v12

    .line 1255
    :goto_a
    aget v12, v25, v1

    add-int/2addr v12, v0

    .line 1257
    aget v28, v6, v12

    const/16 v30, 0x0

    aput v28, v9, v30

    .line 1258
    aget v28, v7, v12

    aput v28, v9, v16

    .line 1259
    aget v12, v8, v12

    const/16 v28, 0x2

    aput v12, v9, v28

    .line 1261
    aget v12, v9, v30

    add-int v21, v21, v12

    .line 1262
    aget v12, v9, v16

    add-int v22, v22, v12

    .line 1263
    aget v9, v9, v28

    add-int v23, v23, v9

    add-int v5, v5, v21

    add-int v14, v14, v22

    add-int v15, v15, v23

    add-int/lit8 v29, v29, 0x1

    const/16 v9, 0x11

    .line 1269
    rem-int/lit8 v29, v29, 0x11

    .line 1270
    aget-object v12, v10, v29

    const/16 v28, 0x0

    .line 1272
    aget v30, v12, v28

    add-int v17, v17, v30

    .line 1273
    aget v30, v12, v16

    add-int v18, v18, v30

    const/16 v30, 0x2

    .line 1274
    aget v31, v12, v30

    add-int v20, v20, v31

    .line 1276
    aget v31, v12, v28

    sub-int v21, v21, v31

    .line 1277
    aget v31, v12, v16

    sub-int v22, v22, v31

    .line 1278
    aget v12, v12, v30

    sub-int v23, v23, v12

    add-int/2addr v3, v2

    add-int/lit8 v1, v1, 0x1

    move-object/from16 v12, v26

    goto/16 :goto_9

    :cond_b
    move-object/from16 v26, v12

    const/16 v9, 0x11

    const/16 v27, 0x8

    const/16 v28, 0x0

    const/16 v30, 0x2

    add-int/lit8 v0, v0, 0x1

    move-object/from16 v1, v24

    move-object/from16 v9, v25

    goto/16 :goto_6

    :cond_c
    move-object/from16 v24, v1

    const/4 v5, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object/from16 v3, v24

    move-object v4, v13

    move v6, v2

    move v9, v2

    move v10, v11

    .line 1284
    invoke-virtual/range {v3 .. v10}, Landroid/graphics/Bitmap;->setPixels([IIIIIII)V

    return-object v24
.end method

.method public static a(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V
    .locals 4

    const-string v0, "15dp"

    const-string v1, "1dp"

    if-eqz p0, :cond_0

    .line 384
    :try_start_0
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_0

    .line 385
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 387
    :cond_0
    sget-object v2, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 388
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    const-string v3, "20dp"

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v2

    sub-int/2addr p2, v2

    int-to-float v2, p2

    const v3, 0x3f05c28f    # 0.5225f

    mul-float/2addr v2, v3

    float-to-int v2, v2

    if-eqz p3, :cond_1

    .line 392
    invoke-virtual {p3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 393
    iput p2, v3, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 394
    iput v2, v3, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 395
    invoke-virtual {p3, v3}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 396
    invoke-static {p3, p0}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/widget/ImageView;Landroid/graphics/Bitmap;)V

    .line 398
    :cond_1
    invoke-virtual {p1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p0

    check-cast p0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 399
    iput p2, p0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 400
    iput v2, p0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 401
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result p2

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p3

    invoke-virtual {p3, v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result p3

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v1

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, p2, p3, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 p2, 0x9

    const/4 p3, -0x1

    .line 402
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 p2, 0xb

    .line 403
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 404
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 406
    sget-object p1, Lcom/mbridge/msdk/widget/custom/b/b;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private static a(Landroid/widget/ImageView;Landroid/graphics/Bitmap;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 371
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x5

    .line 372
    invoke-static {p1, v0}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    .line 373
    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p0, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 374
    invoke-virtual {p0, p1}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 377
    sget-object p1, Lcom/mbridge/msdk/widget/custom/b/b;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public static a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Landroid/widget/ImageView;Ljava/lang/String;IILcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
    .locals 8

    .line 317
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    .line 318
    new-instance v7, Lcom/mbridge/msdk/widget/custom/b/b$2;

    move-object v1, v7

    move-object v2, p0

    move v3, p3

    move v4, p4

    move-object v5, p1

    move-object v6, p5

    invoke-direct/range {v1 .. v6}, Lcom/mbridge/msdk/widget/custom/b/b$2;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;IILandroid/widget/ImageView;Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V

    invoke-virtual {v0, p2, v7}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;Ljava/lang/String;)V
    .locals 2

    .line 290
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    .line 291
    new-instance v1, Lcom/mbridge/msdk/widget/custom/b/b$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/widget/custom/b/b$1;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBImageView;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method public static b(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V
    .locals 6

    const-string v0, "15dp"

    const-string v1, "1dp"

    if-eqz p0, :cond_0

    .line 412
    :try_start_0
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_0

    .line 413
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 415
    :cond_0
    sget-object v2, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    int-to-double v2, p2

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    mul-double/2addr v2, v4

    .line 416
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p2

    const-string v4, "20dp"

    invoke-virtual {p2, v4}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result p2

    int-to-double v4, p2

    sub-double/2addr v2, v4

    double-to-int p2, v2

    int-to-float v2, p2

    const v3, 0x3f05c28f    # 0.5225f

    mul-float/2addr v2, v3

    float-to-int v2, v2

    if-eqz p3, :cond_1

    .line 419
    invoke-virtual {p3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;

    .line 420
    iput p2, v3, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 421
    iput v2, v3, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 422
    invoke-virtual {p3, v3}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 423
    invoke-static {p3, p0}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/widget/ImageView;Landroid/graphics/Bitmap;)V

    .line 425
    :cond_1
    invoke-virtual {p1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p0

    check-cast p0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 426
    iput p2, p0, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 427
    iput v2, p0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 428
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p2

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result p2

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object p3

    invoke-virtual {p3, v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result p3

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v1

    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, p2, p3, v1, v0}, Landroid/widget/RelativeLayout$LayoutParams;->setMargins(IIII)V

    const/16 p2, 0x9

    const/4 p3, -0x1

    .line 429
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 p2, 0xb

    .line 430
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 431
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 433
    sget-object p1, Lcom/mbridge/msdk/widget/custom/b/b;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static c(Landroid/graphics/Bitmap;Landroid/widget/ImageView;ILandroid/widget/ImageView;)V
    .locals 2

    if-eqz p0, :cond_0

    .line 439
    :try_start_0
    invoke-virtual {p0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_0

    .line 440
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setImageBitmap(Landroid/graphics/Bitmap;)V

    .line 442
    :cond_0
    sget-object v0, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 443
    invoke-static {}, Lcom/mbridge/msdk/widget/custom/a/b;->a()Lcom/mbridge/msdk/widget/custom/a/b;

    move-result-object v0

    const-string v1, "20dp"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/custom/a/b;->c(Ljava/lang/String;)I

    move-result v0

    sub-int/2addr p2, v0

    int-to-float v0, p2

    const v1, 0x3f05c28f    # 0.5225f

    mul-float/2addr v0, v1

    float-to-int v0, v0

    if-eqz p3, :cond_1

    .line 448
    invoke-virtual {p3}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 449
    iput p2, v1, Landroid/widget/RelativeLayout$LayoutParams;->width:I

    .line 450
    iput v0, v1, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    .line 451
    invoke-virtual {p3, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 452
    invoke-static {p3, p0}, Lcom/mbridge/msdk/widget/custom/b/b;->a(Landroid/widget/ImageView;Landroid/graphics/Bitmap;)V

    .line 454
    :cond_1
    invoke-virtual {p1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p0

    check-cast p0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 455
    iput v0, p0, Landroid/widget/RelativeLayout$LayoutParams;->height:I

    const/16 p2, 0xa

    const/4 p3, -0x1

    .line 456
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 p2, 0xc

    .line 457
    invoke-virtual {p0, p2, p3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    .line 458
    invoke-virtual {p1, p0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 460
    sget-object p1, Lcom/mbridge/msdk/widget/custom/b/b;->a:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method
