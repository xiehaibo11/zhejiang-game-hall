.class public final Lcom/tkay/basead/a/j;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/basead/c/b;)Ljava/lang/String;
    .locals 1

    .line 366
    iget-object v0, p1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string p1, ""

    goto :goto_0

    :cond_0
    iget-object p1, p1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    :goto_0
    const-string v0, "\\{__CLICK_ID__\\}"

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/basead/c/i;)Ljava/lang/String;
    .locals 12

    const-string v0, "up_y"

    const-string v1, "utf-8"

    const-string v2, "{}"

    const-string v3, "up_x"

    const-string v4, "down_y"

    const-string v5, "down_x"

    .line 371
    iget-object v6, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 372
    iget v7, p1, Lcom/tkay/basead/c/i;->e:I

    .line 373
    iget p1, p1, Lcom/tkay/basead/c/i;->f:I

    .line 376
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V

    .line 378
    :try_start_0
    iget v9, v6, Lcom/tkay/basead/c/a;->e:I

    invoke-virtual {v8, v5, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 379
    iget v9, v6, Lcom/tkay/basead/c/a;->f:I

    invoke-virtual {v8, v4, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 380
    iget v9, v6, Lcom/tkay/basead/c/a;->g:I

    invoke-virtual {v8, v3, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 381
    iget v9, v6, Lcom/tkay/basead/c/a;->h:I

    invoke-virtual {v8, v0, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    .line 386
    :catch_0
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9}, Lorg/json/JSONObject;-><init>()V

    .line 388
    :try_start_1
    iget v10, v6, Lcom/tkay/basead/c/a;->e:I

    int-to-float v10, v10

    int-to-float v7, v7

    div-float/2addr v10, v7

    const/high16 v11, 0x447a0000    # 1000.0f

    mul-float/2addr v10, v11

    float-to-int v10, v10

    invoke-virtual {v9, v5, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 389
    iget v5, v6, Lcom/tkay/basead/c/a;->e:I

    int-to-float v5, v5

    int-to-float p1, p1

    div-float/2addr v5, p1

    mul-float/2addr v5, v11

    float-to-int v5, v5

    invoke-virtual {v9, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 390
    iget v4, v6, Lcom/tkay/basead/c/a;->g:I

    int-to-float v4, v4

    div-float/2addr v4, v7

    mul-float/2addr v4, v11

    float-to-int v4, v4

    invoke-virtual {v9, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 391
    iget v3, v6, Lcom/tkay/basead/c/a;->h:I

    int-to-float v3, v3

    div-float/2addr v3, p1

    mul-float/2addr v3, v11

    float-to-int p1, v3

    invoke-virtual {v9, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    .line 397
    :catch_1
    :try_start_2
    invoke-virtual {v8}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 399
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    move-object p1, v2

    .line 403
    :goto_0
    :try_start_3
    invoke-virtual {v9}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v0

    .line 405
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 408
    :goto_1
    iget-boolean v0, v6, Lcom/tkay/basead/c/a;->i:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_2

    :cond_0
    const/4 v0, 0x2

    .line 410
    :goto_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->a:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__DOWN_X__\\}"

    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->b:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__DOWN_Y__\\}"

    .line 411
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->c:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__UP_X__\\}"

    .line 412
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->d:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__UP_Y__\\}"

    .line 413
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->e:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__RE_DOWN_X__\\}"

    .line 414
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->f:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__RE_DOWN_Y__\\}"

    .line 415
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->g:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__RE_UP_X__\\}"

    .line 416
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget v3, v6, Lcom/tkay/basead/c/a;->h:I

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v3, "\\{__RE_UP_Y__\\}"

    .line 417
    invoke-virtual {p0, v3, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "\\{ABSOLUTE_COORD\\}"

    .line 419
    invoke-virtual {p0, v1, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "\\{RELATIVE_COORD\\}"

    .line 420
    invoke-virtual {p0, p1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 422
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__DPLINK_TYPE__\\}"

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 424
    iget-boolean p1, v6, Lcom/tkay/basead/c/a;->i:Z

    const-string v0, ""

    const-string v1, "&apk_ptype=\\{apk_ptype\\}"

    if-eqz p1, :cond_1

    .line 425
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 428
    :cond_1
    iget p1, v6, Lcom/tkay/basead/c/a;->j:I

    const/4 v2, -0x1

    if-ne p1, v2, :cond_2

    .line 429
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_3

    .line 431
    :cond_2
    iget p1, v6, Lcom/tkay/basead/c/a;->j:I

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{apk_ptype\\}"

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 434
    :goto_3
    iget-boolean p1, v6, Lcom/tkay/basead/c/a;->i:Z

    if-eqz p1, :cond_3

    const-string p1, "1"

    goto :goto_4

    :cond_3
    const-string p1, "0"

    :goto_4
    const-string v0, "\\{opdptype\\}"

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method protected static a(Ljava/lang/String;Lcom/tkay/basead/c/i;J)Ljava/lang/String;
    .locals 5

    .line 307
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    .line 312
    :cond_0
    iget-object v0, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz v0, :cond_1

    .line 313
    invoke-static {p0, p1}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;)Ljava/lang/String;

    move-result-object p0

    .line 316
    :cond_1
    iget-object v0, p1, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    if-eqz v0, :cond_2

    .line 317
    iget-object v0, p1, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    invoke-static {p0, v0}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/j;)Ljava/lang/String;

    move-result-object p0

    .line 320
    :cond_2
    iget-object v0, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    if-eqz v0, :cond_3

    .line 321
    iget-object v0, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    invoke-static {p0, v0}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/b;)Ljava/lang/String;

    move-result-object p0

    :cond_3
    const-wide/16 v2, 0x3e8

    .line 324
    div-long v2, p2, v2

    .line 327
    iget v0, p1, Lcom/tkay/basead/c/i;->c:I

    if-nez v0, :cond_4

    const-string v0, "__REQ_WIDTH__"

    goto :goto_0

    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p1, Lcom/tkay/basead/c/i;->c:I

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    const-string v4, "\\{__REQ_WIDTH__\\}"

    invoke-virtual {p0, v4, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 328
    iget v0, p1, Lcom/tkay/basead/c/i;->d:I

    if-nez v0, :cond_5

    const-string v0, "__REQ_HEIGHT__"

    goto :goto_1

    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p1, Lcom/tkay/basead/c/i;->d:I

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_1
    const-string v4, "\\{__REQ_HEIGHT__\\}"

    invoke-virtual {p0, v4, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v4, p1, Lcom/tkay/basead/c/i;->e:I

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v4, "\\{__WIDTH__\\}"

    .line 329
    invoke-virtual {p0, v4, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget p1, p1, Lcom/tkay/basead/c/i;->f:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__HEIGHT__\\}"

    .line 330
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__TS__\\}"

    .line 331
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p2, p3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__TS_MSEC__\\}"

    .line 332
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__END_TS__\\}"

    .line 333
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p2, p3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p1

    const-string p2, "\\{__END_TS_MSEC__\\}"

    .line 334
    invoke-virtual {p0, p2, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "\\{__PLAY_SEC__\\}"

    const-string p2, "0"

    .line 335
    invoke-virtual {p0, p1, p2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "\\{"

    .line 340
    invoke-virtual {p0, p1, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string p1, "\\}"

    invoke-virtual {p0, p1, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/basead/c/j;)Ljava/lang/String;
    .locals 6

    .line 345
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__VIDEO_TIME__\\}"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__BEGIN_TIME__\\}"

    .line 346
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__END_TIME__\\}"

    .line 347
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->d:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__PLAY_FIRST_FRAME__\\}"

    .line 348
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->e:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__PLAY_LAST_FRAME__\\}"

    .line 349
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->l:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__SCENE__\\}"

    .line 350
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->o:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__TYPE__\\}"

    .line 351
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->r:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__BEHAVIOR__\\}"

    .line 352
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->u:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__STATUS__\\}"

    .line 353
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tkay/basead/c/j;->h:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "\\{__PLAY_SEC__\\}"

    .line 354
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p1, Lcom/tkay/basead/c/j;->f:J

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "\\{__TS__\\}"

    .line 355
    invoke-virtual {p0, v2, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p1, Lcom/tkay/basead/c/j;->f:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "\\{__TS_MSEC__\\}"

    .line 356
    invoke-virtual {p0, v2, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p1, Lcom/tkay/basead/c/j;->g:J

    div-long/2addr v2, v4

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "\\{__END_TS__\\}"

    .line 357
    invoke-virtual {p0, v2, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-wide v2, p1, Lcom/tkay/basead/c/j;->g:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "\\{__END_TS_MSEC__\\}"

    .line 358
    invoke-virtual {p0, v2, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v2, p1, Lcom/tkay/basead/c/j;->h:I

    div-int/lit16 v2, v2, 0x3e8

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 359
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget p1, p1, Lcom/tkay/basead/c/j;->h:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\{__PLAY_MSEC__\\}"

    .line 360
    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(ILcom/tkay/basead/c/i;Lcom/tkay/core/common/f/z;Lcom/tkay/core/common/f/ab;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/tkay/basead/c/i;",
            "Lcom/tkay/core/common/f/z;",
            "Lcom/tkay/core/common/f/ab;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    packed-switch p0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_0

    .line 293
    :pswitch_1
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ap()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 289
    :pswitch_2
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->an()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 286
    :pswitch_3
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->am()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 280
    :pswitch_4
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->al()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 277
    :pswitch_5
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ak()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 274
    :pswitch_6
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ai()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 271
    :pswitch_7
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->aj()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 267
    :pswitch_8
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ah()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 264
    :pswitch_9
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ag()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 261
    :pswitch_a
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->af()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 258
    :pswitch_b
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ae()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 255
    :pswitch_c
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ad()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 236
    :pswitch_d
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->P()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 252
    :pswitch_e
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ac()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 233
    :pswitch_f
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->O()Ljava/lang/String;

    move-result-object p3

    goto/16 :goto_1

    .line 230
    :pswitch_10
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->N()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 249
    :pswitch_11
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->ab()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 246
    :pswitch_12
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->aa()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 243
    :pswitch_13
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->Z()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 239
    :pswitch_14
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->I()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 227
    :pswitch_15
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->K()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 224
    :pswitch_16
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->J()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 221
    :pswitch_17
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->H()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 218
    :pswitch_18
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->z()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 215
    :pswitch_19
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->B()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 212
    :pswitch_1a
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->A()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 209
    :pswitch_1b
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->M()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 206
    :pswitch_1c
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->L()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 203
    :pswitch_1d
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->G()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 200
    :pswitch_1e
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->F()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 197
    :pswitch_1f
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->E()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 194
    :pswitch_20
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->D()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    .line 191
    :pswitch_21
    invoke-virtual {p3}, Lcom/tkay/core/common/f/ab;->C()Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    :goto_0
    const-string p3, ""

    .line 297
    :goto_1
    invoke-static {p3}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 301
    :cond_0
    new-instance v0, Lcom/tkay/basead/g/f;

    invoke-direct {v0, p0, p2, p3, p4}, Lcom/tkay/basead/g/f;-><init>(ILcom/tkay/core/common/f/z;Ljava/lang/String;Ljava/util/Map;)V

    .line 302
    iget-object p0, p1, Lcom/tkay/basead/c/i;->b:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/tkay/basead/g/f;->b(Ljava/lang/String;)V

    const/4 p0, 0x0

    const/4 p1, 0x0

    .line 303
    invoke-virtual {v0, p0, p1}, Lcom/tkay/basead/g/f;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
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
        :pswitch_0
        :pswitch_c
        :pswitch_b
        :pswitch_a
        :pswitch_9
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_0
        :pswitch_3
        :pswitch_2
        :pswitch_1
    .end packed-switch
.end method

.method protected static a(ILcom/tkay/core/common/f/z;Lcom/tkay/basead/c/i;)V
    .locals 12

    .line 31
    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->X()Lcom/tkay/core/common/f/ab;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 35
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->c()Ljava/lang/String;

    move-result-object v1

    .line 37
    invoke-static {v1}, Lcom/tkay/core/common/l/h;->c(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    packed-switch p0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_0

    .line 1157
    :pswitch_1
    :try_start_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ao()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1153
    :pswitch_2
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->b()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1150
    :pswitch_3
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->a()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1143
    :pswitch_4
    iget-object v4, p2, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    .line 1144
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->y()Ljava/util/Map;

    move-result-object v5

    if-eqz v4, :cond_1

    if-eqz v5, :cond_1

    .line 1146
    iget v4, v4, Lcom/tkay/basead/c/j;->i:I

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v5, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    goto/16 :goto_1

    .line 1140
    :pswitch_5
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->x()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1137
    :pswitch_6
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->w()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1134
    :pswitch_7
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->u()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1131
    :pswitch_8
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->v()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1126
    :pswitch_9
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->Y()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1123
    :pswitch_a
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->X()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1120
    :pswitch_b
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->W()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1117
    :pswitch_c
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->V()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1114
    :pswitch_d
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->U()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1095
    :pswitch_e
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->t()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1111
    :pswitch_f
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->T()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1092
    :pswitch_10
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->s()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1089
    :pswitch_11
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->r()[Ljava/lang/String;

    move-result-object v4

    goto/16 :goto_1

    .line 1108
    :pswitch_12
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->S()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1105
    :pswitch_13
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->R()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1102
    :pswitch_14
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->Q()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1098
    :pswitch_15
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->m()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1086
    :pswitch_16
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->o()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1083
    :pswitch_17
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->n()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1080
    :pswitch_18
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->l()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1077
    :pswitch_19
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->d()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1074
    :pswitch_1a
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->f()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1071
    :pswitch_1b
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->e()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1068
    :pswitch_1c
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->q()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1065
    :pswitch_1d
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->p()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1062
    :pswitch_1e
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->k()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1059
    :pswitch_1f
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->j()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1056
    :pswitch_20
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->i()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1053
    :pswitch_21
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->h()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 1050
    :pswitch_22
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->g()[Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    :catchall_0
    move-exception v4

    goto :goto_5

    :cond_1
    :goto_0
    move-object v4, v2

    :goto_1
    if-eqz v4, :cond_4

    const/16 v5, 0x8

    if-eq p0, v5, :cond_3

    const/16 v5, 0x9

    if-ne p0, v5, :cond_2

    goto :goto_2

    :cond_2
    move v5, v3

    goto :goto_3

    .line 1166
    :cond_3
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->k()Lcom/tkay/core/common/f/j;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->W()Z

    move-result v5

    .line 1169
    :goto_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    .line 1170
    array-length v8, v4

    move v9, v3

    :goto_4
    if-ge v9, v8, :cond_4

    aget-object v10, v4, v9

    .line 1173
    invoke-static {v10, p2, v6, v7}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;J)Ljava/lang/String;

    move-result-object v10

    .line 1175
    new-instance v11, Lcom/tkay/basead/g/e;

    invoke-direct {v11, p0, v10, p1, v1}, Lcom/tkay/basead/g/e;-><init>(ILjava/lang/String;Lcom/tkay/core/common/f/z;Ljava/util/Map;)V

    .line 1177
    invoke-virtual {v11, v5}, Lcom/tkay/basead/g/e;->a(Z)V

    .line 1178
    invoke-virtual {v11, v3, v2}, Lcom/tkay/basead/g/e;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v9, v9, 0x1

    goto :goto_4

    .line 1182
    :goto_5
    invoke-virtual {v4}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    packed-switch p0, :pswitch_data_1

    :pswitch_23
    goto/16 :goto_6

    .line 1293
    :pswitch_24
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ap()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1289
    :pswitch_25
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->an()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1286
    :pswitch_26
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->am()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1280
    :pswitch_27
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->al()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1277
    :pswitch_28
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ak()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1274
    :pswitch_29
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ai()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1271
    :pswitch_2a
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->aj()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1267
    :pswitch_2b
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ah()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1264
    :pswitch_2c
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ag()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1261
    :pswitch_2d
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->af()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1258
    :pswitch_2e
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ae()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1255
    :pswitch_2f
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ad()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1236
    :pswitch_30
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->P()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1252
    :pswitch_31
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ac()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1233
    :pswitch_32
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->O()Ljava/lang/String;

    move-result-object v0

    goto/16 :goto_7

    .line 1230
    :pswitch_33
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->N()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1249
    :pswitch_34
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->ab()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1246
    :pswitch_35
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->aa()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1243
    :pswitch_36
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->Z()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1239
    :pswitch_37
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->I()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1227
    :pswitch_38
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->K()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1224
    :pswitch_39
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->J()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1221
    :pswitch_3a
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->H()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1218
    :pswitch_3b
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->z()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1215
    :pswitch_3c
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->B()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1212
    :pswitch_3d
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->A()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1209
    :pswitch_3e
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->M()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1206
    :pswitch_3f
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->L()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1203
    :pswitch_40
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->G()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1200
    :pswitch_41
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->F()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1197
    :pswitch_42
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->E()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1194
    :pswitch_43
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->D()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    .line 1191
    :pswitch_44
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->C()Ljava/lang/String;

    move-result-object v0

    goto :goto_7

    :goto_6
    const-string v0, ""

    .line 1297
    :goto_7
    invoke-static {v0}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_5

    .line 1301
    new-instance v4, Lcom/tkay/basead/g/f;

    invoke-direct {v4, p0, p1, v0, v1}, Lcom/tkay/basead/g/f;-><init>(ILcom/tkay/core/common/f/z;Ljava/lang/String;Ljava/util/Map;)V

    .line 1302
    iget-object p0, p2, Lcom/tkay/basead/c/i;->b:Ljava/lang/String;

    invoke-virtual {v4, p0}, Lcom/tkay/basead/g/f;->b(Ljava/lang/String;)V

    .line 1303
    invoke-virtual {v4, v3, v2}, Lcom/tkay/basead/g/f;->a(ILcom/tkay/core/common/h/k;)V

    :cond_5
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
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
        :pswitch_0
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
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x1
        :pswitch_44
        :pswitch_43
        :pswitch_42
        :pswitch_41
        :pswitch_40
        :pswitch_3f
        :pswitch_3e
        :pswitch_3d
        :pswitch_3c
        :pswitch_3b
        :pswitch_3a
        :pswitch_39
        :pswitch_38
        :pswitch_37
        :pswitch_36
        :pswitch_35
        :pswitch_34
        :pswitch_33
        :pswitch_32
        :pswitch_31
        :pswitch_30
        :pswitch_23
        :pswitch_2f
        :pswitch_2e
        :pswitch_2d
        :pswitch_2c
        :pswitch_2b
        :pswitch_2a
        :pswitch_29
        :pswitch_28
        :pswitch_27
        :pswitch_23
        :pswitch_26
        :pswitch_25
        :pswitch_24
    .end packed-switch
.end method

.method private static a(ILcom/tkay/core/common/f/z;Lcom/tkay/core/common/f/ab;Ljava/util/Map;Lcom/tkay/basead/c/i;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/tkay/core/common/f/z;",
            "Lcom/tkay/core/common/f/ab;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/basead/c/i;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    packed-switch p0, :pswitch_data_0

    :pswitch_0
    goto/16 :goto_0

    .line 157
    :pswitch_1
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->ao()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 153
    :pswitch_2
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->b()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 150
    :pswitch_3
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->a()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 143
    :pswitch_4
    iget-object v1, p4, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    .line 144
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->y()Ljava/util/Map;

    move-result-object p2

    if-eqz v1, :cond_0

    if-eqz p2, :cond_0

    .line 146
    iget v1, v1, Lcom/tkay/basead/c/j;->i:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {p2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [Ljava/lang/String;

    goto/16 :goto_1

    .line 140
    :pswitch_5
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->x()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 137
    :pswitch_6
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->w()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 134
    :pswitch_7
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->u()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 131
    :pswitch_8
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->v()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 126
    :pswitch_9
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->Y()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 123
    :pswitch_a
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->X()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 120
    :pswitch_b
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->W()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 117
    :pswitch_c
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->V()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 114
    :pswitch_d
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->U()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 95
    :pswitch_e
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->t()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 111
    :pswitch_f
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->T()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 92
    :pswitch_10
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->s()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 89
    :pswitch_11
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->r()[Ljava/lang/String;

    move-result-object p2

    goto/16 :goto_1

    .line 108
    :pswitch_12
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->S()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 105
    :pswitch_13
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->R()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 102
    :pswitch_14
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->Q()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 98
    :pswitch_15
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->m()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 86
    :pswitch_16
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->o()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 83
    :pswitch_17
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->n()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 80
    :pswitch_18
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->l()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 77
    :pswitch_19
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->d()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 74
    :pswitch_1a
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->f()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 71
    :pswitch_1b
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->e()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 68
    :pswitch_1c
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->q()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 65
    :pswitch_1d
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->p()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 62
    :pswitch_1e
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->k()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 59
    :pswitch_1f
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->j()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 56
    :pswitch_20
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->i()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 53
    :pswitch_21
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->h()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    .line 50
    :pswitch_22
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ab;->g()[Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :catchall_0
    move-exception p0

    goto :goto_5

    :cond_0
    :goto_0
    move-object p2, v0

    :goto_1
    if-eqz p2, :cond_3

    const/16 v1, 0x8

    const/4 v2, 0x0

    if-eq p0, v1, :cond_2

    const/16 v1, 0x9

    if-ne p0, v1, :cond_1

    goto :goto_2

    :cond_1
    move v1, v2

    goto :goto_3

    .line 166
    :cond_2
    :goto_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/z;->k()Lcom/tkay/core/common/f/j;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->W()Z

    move-result v1

    .line 169
    :goto_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 170
    array-length v5, p2

    move v6, v2

    :goto_4
    if-ge v6, v5, :cond_3

    aget-object v7, p2, v6

    .line 173
    invoke-static {v7, p4, v3, v4}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;J)Ljava/lang/String;

    move-result-object v7

    .line 175
    new-instance v8, Lcom/tkay/basead/g/e;

    invoke-direct {v8, p0, v7, p1, p3}, Lcom/tkay/basead/g/e;-><init>(ILjava/lang/String;Lcom/tkay/core/common/f/z;Ljava/util/Map;)V

    .line 177
    invoke-virtual {v8, v1}, Lcom/tkay/basead/g/e;->a(Z)V

    .line 178
    invoke-virtual {v8, v2, v0}, Lcom/tkay/basead/g/e;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v6, v6, 0x1

    goto :goto_4

    .line 182
    :goto_5
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    return-void

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_22
        :pswitch_21
        :pswitch_20
        :pswitch_1f
        :pswitch_1e
        :pswitch_1d
        :pswitch_1c
        :pswitch_1b
        :pswitch_1a
        :pswitch_19
        :pswitch_18
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
        :pswitch_0
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
    .end packed-switch
.end method

.method private static a(Ljava/lang/String;)Z
    .locals 2

    .line 440
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 444
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 445
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-lez p0, :cond_1

    const/4 p0, 0x0

    return p0

    :catchall_0
    :cond_1
    return v1
.end method
