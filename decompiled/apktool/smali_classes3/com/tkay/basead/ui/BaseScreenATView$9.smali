.class final Lcom/tkay/basead/ui/BaseScreenATView$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/ui/PlayerView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/ui/BaseScreenATView;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/ui/BaseScreenATView;


# direct methods
.method constructor <init>(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 0

    .line 348
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 351
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 353
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->D()V

    .line 356
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/BaseScreenATView;J)J

    .line 357
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->h()V

    .line 358
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-static {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->b(Lcom/tkay/basead/ui/BaseScreenATView;)V

    return-void
.end method

.method public final a(I)V
    .locals 4

    .line 364
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->D()V

    .line 366
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-static {v0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/BaseScreenATView;I)V

    .line 368
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-static {v0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;->b(Lcom/tkay/basead/ui/BaseScreenATView;I)V

    .line 370
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/CountDownView;->isShown()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 371
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/CountDownView;->refresh(I)V

    .line 374
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->L:I

    if-ltz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->L:I

    if-lt p1, v0, :cond_1

    .line 375
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->G()V

    :cond_1
    int-to-long v0, p1

    .line 378
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->e()J

    move-result-wide v2

    cmp-long p1, v0, v2

    if-ltz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    if-nez p1, :cond_2

    .line 379
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/BaseScreenATView;->G()V

    .line 380
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    .line 381
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz p1, :cond_2

    .line 382
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {p1}, Lcom/tkay/basead/e/b$b;->d()V

    :cond_2
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 3

    .line 429
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->p()V

    .line 431
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 432
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/tkay/basead/ui/BaseScreenATView;->fillVideoEndRecord(Z)Lcom/tkay/basead/c/j;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    .line 433
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v2, 0x11

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 434
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/c/e;)V

    .line 436
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->f()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 437
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iput-boolean v0, p1, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    .line 438
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz p1, :cond_0

    .line 439
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object p1, p1, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {p1}, Lcom/tkay/basead/e/b$b;->d()V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 389
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public final b(I)V
    .locals 2

    .line 446
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    const/16 v1, 0x19

    if-eq p1, v1, :cond_2

    const/16 v1, 0x32

    if-eq p1, v1, :cond_1

    const/16 v1, 0x4b

    if-eq p1, v1, :cond_0

    goto :goto_0

    .line 457
    :cond_0
    sget-object p1, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    const/4 p1, 0x4

    .line 458
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {p1, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    :goto_0
    return-void

    .line 453
    :cond_1
    sget-object p1, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    const/4 p1, 0x3

    .line 454
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {p1, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void

    .line 449
    :cond_2
    sget-object p1, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    const/4 p1, 0x2

    .line 450
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {p1, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method public final c()V
    .locals 3

    .line 395
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 398
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 400
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/4 v2, 0x5

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 402
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v2, 0x1f

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 404
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 405
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->c()V

    .line 408
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-boolean v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    const/4 v1, 0x1

    if-nez v0, :cond_1

    .line 409
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iput-boolean v1, v0, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    .line 410
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_1

    .line 411
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->d()V

    .line 415
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->J()I

    move-result v0

    if-ne v0, v1, :cond_2

    .line 416
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->p()V

    .line 417
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->l()V

    return-void

    .line 419
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->l()V

    .line 420
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    if-eqz v0, :cond_3

    .line 421
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Landroid/view/View;)V

    .line 423
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->C()V

    return-void
.end method

.method public final c(I)V
    .locals 2

    .line 496
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/BaseScreenATView;->d(I)V

    .line 498
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object p1

    .line 499
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v1, 0x23

    invoke-static {v1, v0, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method public final d()V
    .locals 3

    .line 467
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView;->getCurrentPosition()I

    move-result v1

    invoke-static {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->c(Lcom/tkay/basead/ui/BaseScreenATView;I)V

    .line 469
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 470
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/BaseScreenATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 471
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v2, 0xe

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 473
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v0, v0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->u()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 474
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->b(I)V

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 3

    .line 480
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 481
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 482
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/BaseScreenATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 483
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v2, 0xc

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method public final f()V
    .locals 3

    .line 488
    sget-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    .line 489
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 490
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/BaseScreenATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 491
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/16 v2, 0xd

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method public final g()V
    .locals 4

    .line 504
    new-instance v0, Lcom/tkay/basead/a/b/f;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v1, v1, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v2, v2, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView$9;->a:Lcom/tkay/basead/ui/BaseScreenATView;

    iget-object v3, v3, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/b/f;-><init>(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 505
    invoke-virtual {v0}, Lcom/tkay/basead/a/b/f;->b()V

    return-void
.end method
