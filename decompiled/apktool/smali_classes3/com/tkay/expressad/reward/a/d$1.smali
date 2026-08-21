.class final Lcom/tkay/expressad/reward/a/d$1;
.super Landroid/os/Handler;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d;Landroid/os/Looper;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 18

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    const-string v3, "_"

    .line 228
    :try_start_0
    iget v4, v2, Landroid/os/Message;->what:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v5, 0x8

    if-eq v4, v5, :cond_1d

    const/16 v5, 0x9

    const/4 v6, 0x4

    const/4 v7, 0x3

    const/4 v8, 0x2

    const/4 v9, 0x6

    const/4 v10, 0x0

    if-eq v4, v5, :cond_18

    const/16 v5, 0x10

    if-eq v4, v5, :cond_18

    const/16 v5, 0x11

    const/4 v11, 0x1

    if-eq v4, v5, :cond_16

    const-string v5, "  mExcludes:"

    const/4 v6, 0x5

    packed-switch v4, :pswitch_data_0

    goto/16 :goto_5

    .line 473
    :pswitch_0
    :try_start_1
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    invoke-static {v2, v3}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 474
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_1e

    .line 476
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 477
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 478
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 480
    :cond_0
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_1e

    .line 481
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    if-nez v2, :cond_1e

    .line 482
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 483
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 486
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/reward/a/b;->a()V

    return-void

    .line 273
    :pswitch_1
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_1e

    .line 276
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_3

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 277
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    .line 278
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    move v4, v11

    goto :goto_0

    :cond_1
    move v4, v10

    .line 279
    :goto_0
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ap()I

    move-result v2

    .line 280
    iget-object v5, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-object v7, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v7}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v7

    invoke-static {v5, v7, v4, v2}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/util/List;ZI)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 281
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    invoke-static {v2, v3}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 282
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->sendEmptyMessage(I)Z

    .line 283
    invoke-virtual {v1, v6}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 284
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    if-nez v2, :cond_2

    .line 285
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v2, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 286
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 289
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/reward/a/b;->a()V

    :cond_2
    return-void

    .line 294
    :cond_3
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 295
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 296
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 297
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v9}, Landroid/os/Handler;->removeMessages(I)V

    .line 299
    :cond_4
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v2, :cond_1e

    .line 300
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 303
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_5

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_5

    .line 304
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    .line 309
    :cond_5
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    const-string v4, "errorCode: 3401 errorMessage: resource load timeout"

    invoke-interface {v2, v4}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    .line 310
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-eqz v2, :cond_b

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->size()I

    move-result v2

    if-lez v2, :cond_b

    .line 312
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/concurrent/CopyOnWriteArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    move v4, v10

    :catch_0
    :cond_6
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_b

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v5, :cond_7

    .line 316
    :try_start_2
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_7

    .line 317
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v6

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Lcom/tkay/expressad/videocommon/b/j;->a(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_7

    move v6, v11

    goto :goto_2

    :cond_7
    move v6, v10

    :goto_2
    if-eqz v5, :cond_8

    .line 328
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_8

    .line 329
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v7

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_8

    move v6, v11

    :cond_8
    if-eqz v5, :cond_a

    .line 340
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_a

    .line 341
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v7

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_9

    move v6, v11

    goto :goto_3

    :cond_9
    if-nez v4, :cond_a

    if-nez v6, :cond_a

    .line 350
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v8, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v8}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/expressad/videocommon/a;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/a$a;

    move-result-object v7

    if-nez v7, :cond_a

    move v4, v11

    :cond_a
    :goto_3
    if-eqz v5, :cond_6

    .line 362
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v7

    if-eqz v7, :cond_6

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_6

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v7

    const-string v8, "cmpt=1"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_6

    .line 363
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v7

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_6

    .line 371
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_6

    if-nez v6, :cond_6

    .line 372
    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->w()I

    move-result v6

    invoke-static {v6, v5}, Lcom/tkay/expressad/videocommon/a;->a(ILcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/videocommon/a$a;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto/16 :goto_1

    :cond_b
    return-void

    .line 392
    :pswitch_2
    :try_start_3
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v3

    if-eqz v3, :cond_1e

    .line 395
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 398
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_c

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_c

    .line 399
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v3, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_4
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 402
    :cond_c
    :try_start_4
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-nez v3, :cond_e

    .line 403
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_d

    .line 404
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 406
    :cond_d
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 408
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v2, :cond_12

    .line 409
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 415
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    const-string v3, "errorCode: 3506 errorMessage: data load failed"

    invoke-interface {v2, v3}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 418
    :cond_e
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Ljava/lang/String;

    .line 419
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_10

    .line 420
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    if-eqz v2, :cond_f

    .line 421
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v2

    invoke-virtual {v2, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 423
    :cond_f
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 425
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v2, :cond_12

    .line 426
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v2, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 432
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    const-string v3, "errorCode: 3507 errorMessage: data load failed, errorMsg null"

    invoke-interface {v2, v3}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    return-void

    .line 436
    :cond_10
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_11

    .line 437
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v3

    invoke-virtual {v3, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 439
    :cond_11
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 440
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "=====================onVideoLoadFail=====================3333333 + "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " isCalledLoadFailed: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v4, v4, Lcom/tkay/expressad/reward/a/d;->t:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 441
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v3, v3, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v3, :cond_12

    .line 442
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v3, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 448
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v3

    const-string v4, "errorCode: 3507 errorMessage: data load failed, errorMsg is "

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v3, v2}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :cond_12
    return-void

    :catch_1
    move-exception v0

    move-object v2, v0

    .line 453
    :try_start_5
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v3

    if-eqz v3, :cond_13

    .line 454
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v3

    invoke-virtual {v3, v6}, Landroid/os/Handler;->removeMessages(I)V

    .line 456
    :cond_13
    invoke-virtual {v1, v9}, Lcom/tkay/expressad/reward/a/d$1;->removeMessages(I)V

    .line 457
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 459
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v3, v3, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v3, :cond_14

    .line 460
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v11, v3, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 466
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "errorCode: 3508 errorMessage: data load failed, exception is "

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v3, v2}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    :cond_14
    return-void

    .line 252
    :pswitch_3
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    if-eqz v2, :cond_15

    .line 255
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v2

    invoke-interface {v2}, Lcom/tkay/expressad/reward/a/b;->b()V

    .line 257
    :cond_15
    sget v2, Lcom/tkay/expressad/foundation/g/a;->cq:I

    int-to-long v2, v2

    invoke-virtual {v1, v6, v2, v3}, Lcom/tkay/expressad/reward/a/d$1;->sendEmptyMessageDelayed(IJ)Z

    return-void

    .line 242
    :pswitch_4
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "handler id obtain timeout,start load mTtcIds:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->b(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 244
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v3, :cond_1e

    .line 245
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    return-void

    .line 231
    :pswitch_5
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "handler id obtain success,start load mTtcIds:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->b(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 233
    iget-object v3, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz v3, :cond_1e

    .line 234
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    return-void

    .line 542
    :cond_16
    :try_start_6
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 543
    aget-object v3, v2, v10

    move-object v14, v3

    check-cast v14, Lcom/tkay/expressad/foundation/d/c;

    .line 544
    aget-object v3, v2, v11

    move-object v15, v3

    check-cast v15, Ljava/lang/String;

    .line 545
    aget-object v3, v2, v8

    move-object/from16 v16, v3

    check-cast v16, Ljava/lang/String;

    .line 546
    aget-object v3, v2, v7

    move-object/from16 v17, v3

    check-cast v17, Lcom/tkay/expressad/videocommon/e/d;

    .line 547
    aget-object v2, v2, v6

    move-object v13, v2

    check-cast v13, Ljava/lang/String;

    if-eqz v14, :cond_17

    .line 548
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_17

    .line 550
    iget-object v12, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static/range {v12 .. v17}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_2
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :cond_17
    return-void

    :catch_2
    move-exception v0

    move-object v2, v0

    .line 553
    :try_start_7
    invoke-virtual {v2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 554
    sget-boolean v3, Lcom/tkay/expressad/b;->a:Z

    if-eqz v3, :cond_1e

    .line 555
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_4
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto/16 :goto_5

    .line 510
    :cond_18
    :try_start_8
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 511
    aget-object v3, v2, v10

    move-object v13, v3

    check-cast v13, Lcom/tkay/expressad/foundation/d/c;

    .line 513
    aget-object v3, v2, v8

    move-object/from16 v16, v3

    check-cast v16, Ljava/lang/String;

    .line 514
    aget-object v3, v2, v7

    move-object/from16 v17, v3

    check-cast v17, Lcom/tkay/expressad/videocommon/e/d;

    .line 515
    aget-object v3, v2, v6

    move-object v12, v3

    check-cast v12, Ljava/lang/String;

    const/4 v3, 0x0

    .line 518
    array-length v4, v2

    const/4 v5, 0x7

    if-ne v4, v5, :cond_19

    .line 520
    aget-object v2, v2, v9

    check-cast v2, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    move-object v11, v2

    goto :goto_4

    :cond_19
    move-object v11, v3

    :goto_4
    if-eqz v13, :cond_1b

    .line 524
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->j(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v2

    if-nez v2, :cond_1a

    .line 525
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_1b

    .line 526
    iget-object v10, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v14

    const-string v15, ""

    invoke-static/range {v10 .. v17}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V

    return-void

    .line 529
    :cond_1a
    iget-object v10, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->j(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v14

    const-string v15, ""

    invoke-static/range {v10 .. v17}, Lcom/tkay/expressad/reward/a/d;->a(Lcom/tkay/expressad/reward/a/d;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/videocommon/e/d;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_3
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    :cond_1b
    return-void

    :catch_3
    move-exception v0

    move-object v2, v0

    .line 533
    :try_start_9
    invoke-virtual {v2}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    .line 534
    sget-boolean v3, Lcom/tkay/expressad/b;->a:Z

    if-eqz v3, :cond_1c

    .line 535
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1c
    return-void

    .line 493
    :cond_1d
    iget-object v3, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v3

    if-eqz v3, :cond_1e

    .line 496
    iget-object v2, v2, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_1e

    .line 497
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v2}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1e

    .line 500
    iget-object v2, v1, Lcom/tkay/expressad/reward/a/d$1;->a:Lcom/tkay/expressad/reward/a/d;

    invoke-virtual {v2}, Lcom/tkay/expressad/reward/a/d;->c()Z
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    :cond_1e
    :goto_5
    return-void

    :catchall_0
    move-exception v0

    move-object v2, v0

    .line 566
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_4
    move-exception v0

    move-object v2, v0

    .line 564
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
