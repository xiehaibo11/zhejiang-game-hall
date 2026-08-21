.class final Lcom/tencent/bugly/proguard/s$a;
.super Ljava/lang/Object;
.source "BUGLY"

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tencent/bugly/proguard/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 331
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 1

    .line 452
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    .line 453
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 454
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const/4 p2, 0x1

    .line 459
    new-array p2, p2, [Ljava/lang/Object;

    const/4 v0, 0x0

    aput-object p1, p2, v0

    const-string v0, ">>> %s onCreated <<<"

    invoke-static {v0, p2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 460
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 462
    iget-object p2, p2, Lcom/tencent/bugly/proguard/aa;->L:Ljava/util/List;

    const-string v0, "onCreated"

    .line 463
    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/s;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 2

    .line 435
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    .line 436
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 437
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 442
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string v1, ">>> %s onDestroyed <<<"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 443
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 445
    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->L:Ljava/util/List;

    const-string v1, "onDestroyed"

    .line 446
    invoke-static {p1, v1}, Lcom/tencent/bugly/proguard/s;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 5

    .line 407
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    .line 408
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 409
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 414
    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string v1, ">>> %s onPaused <<<"

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 415
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 419
    :cond_1
    iget-object v1, v0, Lcom/tencent/bugly/proguard/aa;->L:Ljava/util/List;

    const-string v2, "onPaused"

    .line 420
    invoke-static {p1, v2}, Lcom/tencent/bugly/proguard/s;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 422
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tencent/bugly/proguard/aa;->A:J

    .line 423
    iget-wide v1, v0, Lcom/tencent/bugly/proguard/aa;->A:J

    iget-wide v3, v0, Lcom/tencent/bugly/proguard/aa;->z:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/tencent/bugly/proguard/aa;->B:J

    .line 425
    iget-wide v1, v0, Lcom/tencent/bugly/proguard/aa;->A:J

    invoke-static {v1, v2}, Lcom/tencent/bugly/proguard/s;->c(J)J

    .line 427
    iget-wide v1, v0, Lcom/tencent/bugly/proguard/aa;->B:J

    const-wide/16 v3, 0x0

    cmp-long p1, v1, v3

    if-gez p1, :cond_2

    .line 428
    iput-wide v3, v0, Lcom/tencent/bugly/proguard/aa;->B:J

    :cond_2
    const-string p1, "background"

    .line 430
    iput-object p1, v0, Lcom/tencent/bugly/proguard/aa;->y:Ljava/lang/String;

    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 9

    .line 354
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    .line 355
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 356
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->b()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 361
    new-array v1, v0, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const-string v3, ">>> %s onResumed <<<"

    invoke-static {v3, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 362
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v1

    if-nez v1, :cond_1

    return-void

    .line 366
    :cond_1
    iget-object v3, v1, Lcom/tencent/bugly/proguard/aa;->L:Ljava/util/List;

    const-string v4, "onResumed"

    .line 367
    invoke-static {p1, v4}, Lcom/tencent/bugly/proguard/s;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 368
    iput-object p1, v1, Lcom/tencent/bugly/proguard/aa;->y:Ljava/lang/String;

    .line 370
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iput-wide v3, v1, Lcom/tencent/bugly/proguard/aa;->z:J

    .line 372
    iget-wide v3, v1, Lcom/tencent/bugly/proguard/aa;->z:J

    .line 373
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->c()J

    move-result-wide v5

    sub-long/2addr v3, v5

    iput-wide v3, v1, Lcom/tencent/bugly/proguard/aa;->C:J

    .line 374
    iget-wide v3, v1, Lcom/tencent/bugly/proguard/aa;->z:J

    invoke-static {}, Lcom/tencent/bugly/proguard/s;->d()J

    move-result-wide v5

    sub-long/2addr v3, v5

    .line 376
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->e()J

    move-result-wide v5

    const-wide/16 v7, 0x0

    cmp-long p1, v5, v7

    if-lez p1, :cond_2

    .line 377
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->e()J

    move-result-wide v5

    goto :goto_0

    :cond_2
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->f()J

    move-result-wide v5

    :goto_0
    cmp-long p1, v3, v5

    if-lez p1, :cond_4

    .line 380
    invoke-virtual {v1}, Lcom/tencent/bugly/proguard/aa;->c()V

    .line 381
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->g()I

    const/4 p1, 0x2

    .line 382
    new-array p1, p1, [Ljava/lang/Object;

    const-wide/16 v5, 0x3e8

    div-long/2addr v3, v5

    .line 384
    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, p1, v2

    invoke-static {}, Lcom/tencent/bugly/proguard/s;->f()J

    move-result-wide v3

    div-long/2addr v3, v5

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    aput-object v1, p1, v0

    const-string v1, "[session] launch app one times (app in background %d seconds and over %d seconds)"

    .line 382
    invoke-static {v1, p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 386
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->h()I

    move-result p1

    invoke-static {}, Lcom/tencent/bugly/proguard/s;->i()I

    move-result v1

    rem-int/2addr p1, v1

    const/4 v1, 0x4

    if-nez p1, :cond_3

    .line 387
    sget-object p1, Lcom/tencent/bugly/proguard/s;->b:Lcom/tencent/bugly/proguard/r;

    .line 388
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->j()Z

    move-result v0

    .line 387
    invoke-virtual {p1, v1, v0}, Lcom/tencent/bugly/proguard/r;->a(IZ)V

    return-void

    .line 390
    :cond_3
    sget-object p1, Lcom/tencent/bugly/proguard/s;->b:Lcom/tencent/bugly/proguard/r;

    invoke-virtual {p1, v1, v2}, Lcom/tencent/bugly/proguard/r;->a(IZ)V

    .line 391
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 392
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->k()J

    move-result-wide v5

    sub-long v5, v3, v5

    invoke-static {}, Lcom/tencent/bugly/proguard/s;->l()J

    move-result-wide v7

    cmp-long p1, v5, v7

    if-lez p1, :cond_4

    .line 393
    invoke-static {v3, v4}, Lcom/tencent/bugly/proguard/s;->b(J)J

    .line 394
    new-array p1, v2, [Ljava/lang/Object;

    const-string v1, "add a timer to upload hot start user info"

    invoke-static {v1, p1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 395
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->j()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 397
    sget-object p1, Lcom/tencent/bugly/proguard/s;->b:Lcom/tencent/bugly/proguard/r;

    .line 398
    invoke-static {}, Lcom/tencent/bugly/proguard/s;->l()J

    move-result-wide v1

    .line 1142
    invoke-static {}, Lcom/tencent/bugly/proguard/ak;->a()Lcom/tencent/bugly/proguard/ak;

    move-result-object v3

    new-instance v4, Lcom/tencent/bugly/proguard/r$a;

    const/4 v5, 0x0

    invoke-direct {v4, p1, v5, v0}, Lcom/tencent/bugly/proguard/r$a;-><init>(Lcom/tencent/bugly/proguard/r;Lcom/tencent/bugly/crashreport/biz/UserInfoBean;Z)V

    invoke-virtual {v3, v4, v1, v2}, Lcom/tencent/bugly/proguard/ak;->a(Ljava/lang/Runnable;J)Z

    :cond_4
    return-void
.end method

.method public final onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onActivityStarted(Landroid/app/Activity;)V
    .locals 4

    .line 342
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    .line 343
    new-array v2, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    const-string v0, ">>> %s onStart <<<"

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 344
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    invoke-virtual {v0, p1, v1}, Lcom/tencent/bugly/proguard/aa;->a(IZ)V

    return-void
.end method

.method public final onActivityStopped(Landroid/app/Activity;)V
    .locals 3

    .line 335
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    .line 336
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const-string v0, ">>> %s onStop <<<"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 337
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result p1

    invoke-virtual {v0, p1, v2}, Lcom/tencent/bugly/proguard/aa;->a(IZ)V

    return-void
.end method
