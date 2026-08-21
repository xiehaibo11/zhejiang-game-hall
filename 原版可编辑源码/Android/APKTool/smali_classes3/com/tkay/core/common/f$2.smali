.class final Lcom/tkay/core/common/f$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/j;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/core/common/b/a;

.field final synthetic d:Landroid/content/Context;

.field final synthetic e:[I

.field final synthetic f:Ljava/lang/String;

.field final synthetic g:Ljava/util/Map;

.field final synthetic h:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;Lcom/tkay/core/common/j;Ljava/lang/String;Lcom/tkay/core/common/b/a;Landroid/content/Context;[ILjava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 282
    iput-object p1, p0, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput-object p2, p0, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iput-object p3, p0, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/f$2;->c:Lcom/tkay/core/common/b/a;

    iput-object p5, p0, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    iput-object p6, p0, Lcom/tkay/core/common/f$2;->e:[I

    iput-object p7, p0, Lcom/tkay/core/common/f$2;->f:Ljava/lang/String;

    iput-object p8, p0, Lcom/tkay/core/common/f$2;->g:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 21

    move-object/from16 v7, p0

    .line 285
    iget-object v8, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    monitor-enter v8

    .line 286
    :try_start_0
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->e()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v0, v0, Lcom/tkay/core/common/j;->d:I

    if-eqz v0, :cond_0

    .line 287
    monitor-exit v8

    return-void

    .line 290
    :cond_0
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->i()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v0, v0, Lcom/tkay/core/common/j;->d:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_1

    .line 291
    monitor-exit v8

    return-void

    .line 294
    :cond_1
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->j()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v0, v0, Lcom/tkay/core/common/j;->d:I

    if-nez v0, :cond_2

    const-string v0, "tkay"

    .line 295
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "PlacementId("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") the load api calls are not allowed in Auto-load mode"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 296
    monitor-exit v8

    return-void

    .line 299
    :cond_2
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v1, v7, Lcom/tkay/core/common/f$2;->c:Lcom/tkay/core/common/b/a;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/b/a;)V

    .line 301
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v1, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v1, v1, Lcom/tkay/core/common/f;->i:Lcom/tkay/core/common/b/a;

    iput-object v1, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    .line 303
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v0, v0, Lcom/tkay/core/common/j;->d:I

    const/4 v1, 0x4

    const/4 v2, 0x1

    if-eq v0, v1, :cond_3

    .line 304
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput v2, v0, Lcom/tkay/core/common/f;->h:I

    goto :goto_0

    .line 306
    :cond_3
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget v3, v0, Lcom/tkay/core/common/f;->h:I

    add-int/2addr v3, v2

    iput v3, v0, Lcom/tkay/core/common/f;->h:I

    .line 309
    :goto_0
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->k()V

    .line 310
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "PlacementId("

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ") start load type:"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v3, v3, Lcom/tkay/core/common/j;->d:I

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 313
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v3, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 315
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    .line 318
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iput-object v5, v0, Lcom/tkay/core/common/j;->a:Ljava/lang/String;

    .line 320
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v3, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v3, v3, Lcom/tkay/core/common/j;->a:Ljava/lang/String;

    iget-object v4, v7, Lcom/tkay/core/common/f$2;->c:Lcom/tkay/core/common/b/a;

    invoke-virtual {v0, v3, v4}, Lcom/tkay/core/common/f;->a(Ljava/lang/String;Lcom/tkay/core/common/b/a;)V

    .line 323
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const/4 v3, 0x0

    if-eqz v0, :cond_12

    .line 324
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_12

    .line 325
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_12

    iget-object v0, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    .line 326
    invoke-static {v0}, Lcom/tkay/core/common/l/h;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto/16 :goto_6

    .line 339
    :cond_4
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->g()Z

    move-result v0

    if-eqz v0, :cond_5

    const-string v0, "tkay"

    .line 340
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Placement("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") is loading."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 343
    monitor-exit v8

    return-void

    .line 346
    :cond_5
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v4

    .line 347
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    .line 348
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v18

    .line 349
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->u()Z

    move-result v6

    if-eqz v6, :cond_6

    const/4 v9, 0x0

    :goto_1
    move-object v15, v9

    goto :goto_2

    .line 351
    :cond_6
    invoke-static {v4}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v9

    iget-object v10, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v9, v10}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v9

    goto :goto_1

    :goto_2
    if-eqz v15, :cond_7

    .line 353
    invoke-virtual {v15}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v9

    goto :goto_3

    :cond_7
    const-string v9, ""

    :goto_3
    move-object/from16 v19, v9

    .line 356
    iget-object v10, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    const-string v11, ""

    const-string v13, ""

    if-eqz v15, :cond_8

    .line 357
    invoke-virtual {v15}, Lcom/tkay/core/c/d;->m()I

    move-result v9

    goto :goto_4

    :cond_8
    const/4 v9, -0x1

    :goto_4
    move v14, v9

    iget-object v9, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget v12, v9, Lcom/tkay/core/common/j;->d:I

    iget-object v9, v7, Lcom/tkay/core/common/f$2;->e:[I

    aget v16, v9, v3

    iget-object v9, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v9, v9, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    move-object/from16 v17, v9

    move-object v9, v5

    move/from16 v20, v12

    move-object v12, v15

    move-object v1, v15

    move/from16 v15, v20

    .line 356
    invoke-static/range {v9 .. v17}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v9

    .line 359
    iget-object v10, v7, Lcom/tkay/core/common/f$2;->f:Ljava/lang/String;

    invoke-virtual {v9, v10}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 361
    iget-object v10, v7, Lcom/tkay/core/common/f$2;->g:Ljava/util/Map;

    if-eqz v10, :cond_9

    .line 362
    iget-object v10, v7, Lcom/tkay/core/common/f$2;->g:Ljava/util/Map;

    invoke-virtual {v9, v10}, Lcom/tkay/core/common/f/d;->a(Ljava/util/Map;)V

    :cond_9
    if-nez v1, :cond_b

    if-nez v6, :cond_b

    .line 367
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v6, v6, Lcom/tkay/core/common/j;->c:Ljava/lang/String;

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_a

    iget-object v6, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v6, v6, Lcom/tkay/core/common/j;->b:Lcom/tkay/core/api/TYMediationRequestInfo;

    if-eqz v6, :cond_b

    :cond_a
    const-string v6, "tkay"

    const-string v10, "request default adsource for splash."

    .line 368
    invoke-static {v6, v10}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 369
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v10, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iget-object v11, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v12, v7, Lcom/tkay/core/common/f$2;->c:Lcom/tkay/core/common/b/a;

    invoke-virtual {v6, v10, v5, v11, v12}, Lcom/tkay/core/common/f;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)Z

    move-result v6

    if-eqz v6, :cond_b

    .line 370
    iget-object v1, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v9

    const/4 v10, 0x0

    iget-object v13, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iget-object v1, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v14, v1, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    const/4 v15, 0x0

    move-object v11, v0

    move-object/from16 v12, v18

    invoke-virtual/range {v9 .. v15}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/c/e$a;)V

    .line 371
    monitor-exit v8

    return-void

    .line 377
    :cond_b
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget v6, v6, Lcom/tkay/core/common/f;->e:I

    if-ne v6, v2, :cond_c

    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v6}, Lcom/tkay/core/common/f;->d()Z

    move-result v6

    if-nez v6, :cond_c

    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v6

    iget-object v10, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    iget-object v11, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v6, v10, v11}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;

    move-result-object v6

    if-eqz v6, :cond_c

    .line 378
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v0

    iget-object v1, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v5}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 379
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v0}, Lcom/tkay/core/common/f;->h()V

    .line 380
    invoke-virtual {v9, v3}, Lcom/tkay/core/common/f/d;->a(Z)V

    const/4 v0, 0x4

    .line 381
    invoke-virtual {v9, v0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 382
    invoke-static {v4}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/16 v1, 0xa

    invoke-virtual {v0, v1, v9}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 383
    invoke-static {v4}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/16 v1, 0xc

    invoke-virtual {v0, v1, v9}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 384
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput-boolean v3, v0, Lcom/tkay/core/common/f;->f:Z

    .line 385
    monitor-exit v8

    return-void

    :cond_c
    if-eqz v1, :cond_e

    .line 389
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v6}, Lcom/tkay/core/common/f;->c(Lcom/tkay/core/common/f;)Z

    move-result v6

    if-eqz v6, :cond_e

    .line 390
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v6}, Lcom/tkay/core/common/f;->d(Lcom/tkay/core/common/f;)J

    move-result-wide v12

    sub-long/2addr v10, v12

    const-wide/16 v12, 0x0

    cmp-long v6, v10, v12

    if-lez v6, :cond_e

    .line 391
    invoke-virtual {v1}, Lcom/tkay/core/c/d;->ak()J

    move-result-wide v12

    cmp-long v6, v10, v12

    if-gez v6, :cond_e

    const-string v0, "2008"

    const-string v1, ""

    const-string v4, ""

    .line 392
    invoke-static {v0, v1, v4}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    const/4 v1, 0x7

    .line 393
    invoke-virtual {v9, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 394
    iget-object v1, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v1}, Lcom/tkay/core/common/f;->e(Lcom/tkay/core/common/f;)Z

    move-result v1

    if-nez v1, :cond_d

    move v3, v2

    .line 395
    :cond_d
    iget-object v1, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    new-instance v4, Lcom/tkay/core/common/e;

    invoke-virtual {v0}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v0, v5}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    invoke-static {v1, v3, v9, v4}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    .line 396
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v0, v2}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Z)Z

    .line 397
    monitor-exit v8

    return-void

    .line 402
    :cond_e
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v6}, Lcom/tkay/core/common/f;->f(Lcom/tkay/core/common/f;)Z

    .line 403
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v6}, Lcom/tkay/core/common/f;->g(Lcom/tkay/core/common/f;)J

    .line 404
    iget-object v6, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-static {v6, v3}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Z)Z

    if-eqz v1, :cond_f

    .line 407
    invoke-static {}, Lcom/tkay/core/a/b;->a()Lcom/tkay/core/a/b;

    move-result-object v3

    iget-object v6, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v3, v4, v6, v1}, Lcom/tkay/core/a/b;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;)Z

    move-result v3

    if-eqz v3, :cond_f

    const-string v0, "2009"

    const-string v1, ""

    const-string v3, ""

    .line 408
    invoke-static {v0, v1, v3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    const/16 v1, 0x8

    .line 409
    invoke-virtual {v9, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 410
    iget-object v1, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    new-instance v3, Lcom/tkay/core/common/e;

    invoke-virtual {v0}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v3, v0, v4}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    invoke-static {v1, v2, v9, v3}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    .line 411
    monitor-exit v8

    return-void

    .line 414
    :cond_f
    iget-object v3, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v3}, Lcom/tkay/core/common/f;->e()Z

    move-result v3

    if-eqz v3, :cond_10

    const-string v0, "tkay"

    .line 415
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Placement("

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ") is loading."

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 420
    monitor-exit v8

    return-void

    .line 423
    :cond_10
    iget-object v3, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput-boolean v2, v3, Lcom/tkay/core/common/f;->f:Z

    .line 426
    iget-object v2, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v2, v2, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_5
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_11

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/h;

    .line 427
    invoke-virtual {v3}, Lcom/tkay/core/common/h;->f()V

    goto :goto_5

    .line 430
    :cond_11
    iget-object v2, v7, Lcom/tkay/core/common/f$2;->d:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v10

    iget-object v13, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iget-object v2, v7, Lcom/tkay/core/common/f$2;->a:Lcom/tkay/core/common/j;

    iget-object v14, v2, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    new-instance v15, Lcom/tkay/core/common/f$2$1;

    move-object v11, v1

    move-object v1, v15

    move-object/from16 v2, p0

    move-object v3, v9

    move-object/from16 v6, v19

    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/common/f$2$1;-><init>(Lcom/tkay/core/common/f$2;Lcom/tkay/core/common/f/d;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    move-object v9, v10

    move-object v10, v11

    move-object v11, v0

    move-object/from16 v12, v18

    invoke-virtual/range {v9 .. v15}, Lcom/tkay/core/c/e;->a(Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/c/e$a;)V

    .line 498
    monitor-exit v8

    return-void

    :cond_12
    :goto_6
    const-string v0, "3002"

    const-string v1, ""

    const-string v2, ""

    .line 328
    invoke-static {v0, v1, v2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    .line 329
    iget-object v1, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/api/AdError;)V

    .line 331
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_13

    const-string v0, "tkay"

    .line 332
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Please check these params in your code (AppId: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", AppKey: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", PlacementId: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v7, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 334
    :cond_13
    iget-object v0, v7, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iput-boolean v3, v0, Lcom/tkay/core/common/f;->f:Z

    .line 335
    monitor-exit v8
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 498
    monitor-exit v8

    throw v0
.end method
