.class public final Lcom/tkay/basead/a/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/a/c$a;,
        Lcom/tkay/basead/a/c$b;
    }
.end annotation


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x4

.field public static final e:I = 0x6

.field public static final f:I = 0x0

.field public static final g:I = 0x1

.field public static final h:I = 0x1

.field public static final i:I = 0x2

.field public static final j:I = 0x3

.field public static final k:I = 0x4


# instance fields
.field private final A:I

.field private final B:I

.field private final C:I

.field l:Lcom/tkay/core/common/f/h;

.field m:Z

.field n:Z

.field o:Z

.field p:Landroid/content/Context;

.field q:Z

.field r:Lcom/tkay/core/common/f/i;

.field s:Lcom/tkay/basead/a/c$b;

.field t:Lcom/tkay/core/api/IOfferClickHandler;

.field u:Lcom/tkay/basead/a/c$a;

.field v:Z

.field w:Z

.field x:Lcom/tkay/basead/a/c$b;

.field private final y:Ljava/lang/String;

.field private final z:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V
    .locals 4

    .line 138
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/a/c;->y:Ljava/lang/String;

    const/4 v0, 0x0

    .line 55
    iput v0, p0, Lcom/tkay/basead/a/c;->z:I

    const/4 v1, 0x1

    .line 56
    iput v1, p0, Lcom/tkay/basead/a/c;->A:I

    const/4 v2, 0x2

    .line 57
    iput v2, p0, Lcom/tkay/basead/a/c;->B:I

    const/16 v3, 0xa

    .line 59
    iput v3, p0, Lcom/tkay/basead/a/c;->C:I

    .line 82
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->o:Z

    .line 94
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->w:Z

    .line 96
    new-instance v3, Lcom/tkay/basead/a/c$1;

    invoke-direct {v3, p0}, Lcom/tkay/basead/a/c$1;-><init>(Lcom/tkay/basead/a/c;)V

    iput-object v3, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    .line 139
    iput-object p3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    .line 140
    iput-object p2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    .line 141
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    .line 142
    iget-object p1, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 1189
    instance-of v3, p3, Lcom/tkay/core/common/f/f;

    if-eqz v3, :cond_0

    .line 1190
    instance-of p3, p1, Lcom/tkay/core/common/f/aa;

    if-eqz p3, :cond_1

    .line 1191
    check-cast p1, Lcom/tkay/core/common/f/aa;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->Y()I

    move-result p1

    if-ne p1, v1, :cond_1

    :goto_0
    move p1, v1

    goto :goto_1

    .line 1193
    :cond_0
    instance-of p1, p3, Lcom/tkay/core/common/f/r;

    if-eqz p1, :cond_1

    .line 1194
    check-cast p3, Lcom/tkay/core/common/f/r;

    invoke-virtual {p3}, Lcom/tkay/core/common/f/r;->O()I

    move-result p1

    if-ne p1, v1, :cond_1

    goto :goto_0

    :cond_1
    move p1, v0

    .line 142
    :goto_1
    iput-boolean p1, p0, Lcom/tkay/basead/a/c;->q:Z

    .line 143
    iget-object p1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/h;->g(Ljava/lang/String;)V

    .line 145
    new-instance p1, Lcom/tkay/basead/handler/OfferClickHandler;

    invoke-direct {p1}, Lcom/tkay/basead/handler/OfferClickHandler;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/a/c;->t:Lcom/tkay/core/api/IOfferClickHandler;

    .line 147
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->Q()I

    move-result p1

    if-eq p1, v2, :cond_2

    move v0, v1

    :cond_2
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->v:Z

    return-void
.end method

.method private a(ILcom/tkay/basead/c/i;)V
    .locals 7

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    .line 377
    iget-object v1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v1, :cond_0

    .line 378
    invoke-interface {v1}, Lcom/tkay/basead/a/c$b;->a()V

    .line 380
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/a/c$6;

    invoke-direct {v2, p0}, Lcom/tkay/basead/a/c$6;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 390
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_2
    move-object v1, v2

    :goto_0
    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v3, :cond_3

    move-object v3, v2

    goto :goto_1

    :cond_3
    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v4, "\\{req_id\\}"

    invoke-virtual {v1, v4, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 393
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v1, p2, v3, v4}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;J)Ljava/lang/String;

    move-result-object v1

    .line 406
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v3

    const/4 v4, 0x4

    if-eqz v3, :cond_4

    iget-object v3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    .line 407
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->D()I

    move-result v3

    if-ne v3, v4, :cond_4

    .line 408
    new-instance v3, Lcom/tkay/basead/c/d;

    invoke-direct {v3, v2, v2, v2}, Lcom/tkay/basead/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 410
    :cond_4
    new-instance v3, Lcom/tkay/basead/c/d;

    invoke-direct {v3, v1, v2, v2}, Lcom/tkay/basead/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 413
    :goto_2
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 419
    iget-object v5, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->D()I

    move-result v5

    if-eq v5, v0, :cond_e

    const/4 v6, 0x2

    if-eq v5, v6, :cond_b

    const/4 v6, 0x3

    if-eq v5, v6, :cond_b

    if-eq v5, v4, :cond_6

    .line 529
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 530
    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 532
    :cond_5
    invoke-direct {p0, v2, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    goto/16 :goto_7

    .line 442
    :cond_6
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v2

    if-eqz v2, :cond_7

    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 443
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 444
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v2, v4, v1}, Lcom/tkay/basead/d/b/a/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)Lcom/tkay/basead/c/d;

    move-result-object v1

    if-eqz v1, :cond_7

    .line 446
    iget-object v2, v1, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    iput-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 447
    iget-object v1, v1, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    iput-object v1, v3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    .line 455
    :cond_7
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Lcom/tkay/basead/a/c$a;->a()Z

    move-result v1

    if-eqz v1, :cond_8

    .line 456
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v1, v1, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    goto :goto_3

    .line 463
    :cond_8
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 465
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 467
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;)V

    .line 471
    :cond_9
    :goto_3
    iput-object v1, v3, Lcom/tkay/basead/c/d;->b:Ljava/lang/String;

    .line 472
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 474
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_a

    .line 475
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    goto :goto_4

    .line 477
    :cond_a
    iput-boolean v0, p2, Lcom/tkay/basead/c/i;->j:Z

    .line 479
    :goto_4
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    .line 423
    :cond_b
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v0

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    .line 424
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 425
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 427
    invoke-static {v2}, Lcom/tkay/basead/d/b/a/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 428
    iput-object v2, v3, Lcom/tkay/basead/c/d;->b:Ljava/lang/String;

    .line 429
    iput-object v0, v3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    .line 430
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 434
    :cond_c
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 435
    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 438
    :cond_d
    invoke-direct {p0, v2, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    :cond_e
    const-string v2, "http"

    .line 483
    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_f

    .line 484
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    .line 492
    :cond_f
    iget-object v2, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    const/4 v4, 0x0

    if-eqz v2, :cond_10

    invoke-virtual {v2}, Lcom/tkay/basead/a/c$a;->a()Z

    move-result v2

    if-eqz v2, :cond_10

    move v2, v0

    goto :goto_5

    :cond_10
    move v2, v4

    .line 493
    :goto_5
    iget-boolean v5, p0, Lcom/tkay/basead/a/c;->q:Z

    if-eqz v5, :cond_12

    .line 494
    iget-object v5, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->y()Ljava/lang/String;

    move-result-object v5

    if-eqz v2, :cond_11

    .line 496
    iget-object v5, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v5, v5, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    .line 499
    :cond_11
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_12

    .line 500
    invoke-direct {p0, v5, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    move v0, v4

    :cond_12
    if-eqz v2, :cond_13

    .line 506
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v1, v1, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    goto :goto_6

    .line 513
    :cond_13
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 515
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_14

    .line 517
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;)V

    :cond_14
    :goto_6
    if-eqz v0, :cond_16

    .line 522
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 523
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 525
    :cond_15
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    :cond_16
    :goto_7
    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/a/c;ILcom/tkay/basead/c/i;)V
    .locals 7

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    .line 6377
    iget-object v1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v1, :cond_0

    .line 6378
    invoke-interface {v1}, Lcom/tkay/basead/a/c$b;->a()V

    .line 6380
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/basead/a/c$6;

    invoke-direct {v2, p0}, Lcom/tkay/basead/a/c$6;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 6390
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_2
    move-object v1, v2

    :goto_0
    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v3, :cond_3

    move-object v3, v2

    goto :goto_1

    :cond_3
    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v4, "\\{req_id\\}"

    invoke-virtual {v1, v4, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 6393
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v1, p2, v3, v4}, Lcom/tkay/basead/a/j;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;J)Ljava/lang/String;

    move-result-object v1

    .line 6406
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v3

    const/4 v4, 0x4

    if-eqz v3, :cond_4

    iget-object v3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    .line 6407
    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->D()I

    move-result v3

    if-ne v3, v4, :cond_4

    .line 6408
    new-instance v3, Lcom/tkay/basead/c/d;

    invoke-direct {v3, v2, v2, v2}, Lcom/tkay/basead/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    .line 6410
    :cond_4
    new-instance v3, Lcom/tkay/basead/c/d;

    invoke-direct {v3, v1, v2, v2}, Lcom/tkay/basead/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 6413
    :goto_2
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 6419
    iget-object v5, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->D()I

    move-result v5

    if-eq v5, v0, :cond_e

    const/4 v6, 0x2

    if-eq v5, v6, :cond_b

    const/4 v6, 0x3

    if-eq v5, v6, :cond_b

    if-eq v5, v4, :cond_6

    .line 6529
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 6530
    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 6532
    :cond_5
    invoke-direct {p0, v2, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    goto/16 :goto_7

    .line 6442
    :cond_6
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v2

    if-eqz v2, :cond_7

    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 6443
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_7

    .line 6444
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v2, v4, v1}, Lcom/tkay/basead/d/b/a/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)Lcom/tkay/basead/c/d;

    move-result-object v1

    if-eqz v1, :cond_7

    .line 6446
    iget-object v2, v1, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    iput-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 6447
    iget-object v1, v1, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    iput-object v1, v3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    .line 6455
    :cond_7
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    if-eqz v1, :cond_8

    invoke-virtual {v1}, Lcom/tkay/basead/a/c$a;->a()Z

    move-result v1

    if-eqz v1, :cond_8

    .line 6456
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v1, v1, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    goto :goto_3

    .line 6463
    :cond_8
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 6465
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    .line 6467
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;)V

    .line 6471
    :cond_9
    :goto_3
    iput-object v1, v3, Lcom/tkay/basead/c/d;->b:Ljava/lang/String;

    .line 6472
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 6474
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_a

    .line 6475
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    goto :goto_4

    .line 6477
    :cond_a
    iput-boolean v0, p2, Lcom/tkay/basead/c/i;->j:Z

    .line 6479
    :goto_4
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    .line 6423
    :cond_b
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->g()Z

    move-result v0

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    .line 6424
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_c

    .line 6425
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 6427
    invoke-static {v2}, Lcom/tkay/basead/d/b/a/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 6428
    iput-object v2, v3, Lcom/tkay/basead/c/d;->b:Ljava/lang/String;

    .line 6429
    iput-object v0, v3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    .line 6430
    invoke-direct {p0, v3}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/d;)V

    .line 6434
    :cond_c
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 6435
    iget-object v2, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 6438
    :cond_d
    invoke-direct {p0, v2, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    :cond_e
    const-string v2, "http"

    .line 6483
    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_f

    .line 6484
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    return-void

    .line 6492
    :cond_f
    iget-object v2, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    const/4 v4, 0x0

    if-eqz v2, :cond_10

    invoke-virtual {v2}, Lcom/tkay/basead/a/c$a;->a()Z

    move-result v2

    if-eqz v2, :cond_10

    move v2, v0

    goto :goto_5

    :cond_10
    move v2, v4

    .line 6493
    :goto_5
    iget-boolean v5, p0, Lcom/tkay/basead/a/c;->q:Z

    if-eqz v5, :cond_12

    .line 6494
    iget-object v5, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/h;->y()Ljava/lang/String;

    move-result-object v5

    if-eqz v2, :cond_11

    .line 6496
    iget-object v5, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v5, v5, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    .line 6499
    :cond_11
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_12

    .line 6500
    invoke-direct {p0, v5, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    move v0, v4

    :cond_12
    if-eqz v2, :cond_13

    .line 6506
    iget-object v1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v1, v1, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    goto :goto_6

    .line 6513
    :cond_13
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 6515
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_14

    .line 6517
    invoke-direct {p0, v1}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;)V

    :cond_14
    :goto_6
    if-eqz v0, :cond_16

    .line 6522
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 6523
    iget-object v1, v3, Lcom/tkay/basead/c/d;->a:Ljava/lang/String;

    .line 6525
    :cond_15
    invoke-direct {p0, v1, p1, p2}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V

    :cond_16
    :goto_7
    return-void
.end method

.method private a(Lcom/tkay/basead/c/d;)V
    .locals 3

    .line 710
    invoke-static {}, Lcom/tkay/basead/a/d;->a()Lcom/tkay/basead/a/d;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->d()I

    move-result v1

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2, p1}, Lcom/tkay/basead/a/d;->a(ILjava/lang/String;Lcom/tkay/basead/c/d;)V

    return-void
.end method

.method private declared-synchronized a(Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 539
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    if-nez v0, :cond_0

    .line 540
    new-instance v0, Lcom/tkay/basead/a/c$a;

    invoke-direct {v0}, Lcom/tkay/basead/a/c$a;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    .line 542
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iput-object p1, v0, Lcom/tkay/basead/a/c$a;->c:Ljava/lang/String;

    .line 543
    iget-object p1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->P()I

    move-result v0

    int-to-long v0, v0

    iput-wide v0, p1, Lcom/tkay/basead/a/c$a;->b:J

    .line 544
    iget-object p1, p0, Lcom/tkay/basead/a/c;->u:Lcom/tkay/basead/a/c$a;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p1, Lcom/tkay/basead/a/c$a;->a:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 549
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Ljava/lang/String;ILcom/tkay/basead/c/i;)V
    .locals 7

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    return-void

    .line 732
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/basead/a/c;->n:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 733
    iput-boolean v2, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 734
    iget-object p1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 735
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p1, :cond_2

    .line 736
    invoke-interface {p1, v2}, Lcom/tkay/basead/a/c$b;->a(Z)V

    .line 740
    :cond_2
    invoke-direct {p0, p3}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    .line 742
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/basead/a/c$7;

    invoke-direct {p2, p0}, Lcom/tkay/basead/a/c$7;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    :cond_3
    if-nez p2, :cond_4

    .line 755
    invoke-direct {p0, p3, v0}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;Z)Z

    move-result p2

    if-eqz p2, :cond_4

    return-void

    .line 758
    :cond_4
    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_5

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_6

    .line 759
    :cond_5
    iget-object p2, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p2, :cond_6

    .line 760
    invoke-interface {p2, v2}, Lcom/tkay/basead/a/c$b;->a(Z)V

    .line 765
    :cond_6
    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v1, 0x4

    if-nez p2, :cond_c

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->D()I

    move-result p2

    if-eq p2, v0, :cond_7

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->D()I

    move-result p2

    if-ne p2, v1, :cond_c

    .line 766
    :cond_7
    iget-object p2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v3

    invoke-static {p2, v3}, Lcom/tkay/basead/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2

    .line 767
    new-instance v3, Lcom/tkay/basead/c/b;

    invoke-direct {v3}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v3, p3, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 768
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->e()Lcom/tkay/basead/c/d;

    move-result-object v3

    .line 769
    iget-object v4, p3, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    if-eqz v3, :cond_8

    iget-object v3, v3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    goto :goto_0

    :cond_8
    const-string v3, ""

    :goto_0
    iput-object v3, v4, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    .line 771
    iget-object v3, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz v3, :cond_a

    .line 772
    iget-object v3, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz p2, :cond_9

    const/4 v4, 0x5

    goto :goto_1

    :cond_9
    iget-object v4, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iget v4, v4, Lcom/tkay/basead/c/a;->j:I

    :goto_1
    iput v4, v3, Lcom/tkay/basead/c/a;->j:I

    :cond_a
    if-eqz p2, :cond_b

    .line 776
    invoke-direct {p0, p3}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    const/16 p1, 0x19

    .line 777
    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {p1, p2, p3}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 778
    iput-boolean v2, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 779
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/basead/a/c$8;

    invoke-direct {p2, p0}, Lcom/tkay/basead/a/c$8;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    :cond_b
    const/16 p2, 0x1a

    .line 790
    iget-object v3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {p2, v3, p3}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 794
    :cond_c
    iget-object p2, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    const/4 v3, 0x3

    if-eqz p2, :cond_f

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->D()I

    move-result p2

    if-ne p2, v1, :cond_f

    .line 795
    iget-boolean p2, p3, Lcom/tkay/basead/c/i;->j:Z

    if-eqz p2, :cond_e

    .line 796
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object p2

    .line 797
    iget-object v4, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz p2, :cond_d

    iget-object v5, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iget-object v6, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    invoke-interface {p2, v5, v6}, Lcom/tkay/core/api/IExHandler;->checkDownloadType(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)I

    move-result p2

    goto :goto_2

    :cond_d
    iget-object p2, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iget p2, p2, Lcom/tkay/basead/c/a;->j:I

    :goto_2
    iput p2, v4, Lcom/tkay/basead/c/a;->j:I

    goto :goto_3

    .line 799
    :cond_e
    iget-object p2, p3, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iput v3, p2, Lcom/tkay/basead/c/a;->j:I

    .line 803
    :cond_f
    :goto_3
    invoke-direct {p0, p3}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    .line 805
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_10

    iget-object p1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->y()Ljava/lang/String;

    move-result-object p1

    .line 807
    :cond_10
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_11

    const-string p1, "tkay"

    const-string p2, "Offer click result is null."

    .line 808
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 809
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/basead/a/c$9;

    invoke-direct {p2, p0}, Lcom/tkay/basead/a/c$9;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    .line 824
    iput-boolean v2, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 825
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/basead/a/c$10;

    invoke-direct {p2, p0}, Lcom/tkay/basead/a/c$10;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 837
    :cond_11
    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->D()I

    move-result p2

    const/4 v4, 0x2

    if-eq p2, v0, :cond_17

    if-eq p2, v4, :cond_16

    if-eq p2, v3, :cond_15

    if-eq p2, v1, :cond_14

    const/4 p3, 0x6

    if-eq p2, p3, :cond_13

    .line 885
    iget-object p2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->k()I

    move-result p2

    if-ne p2, v4, :cond_12

    .line 886
    new-instance p2, Lcom/tkay/core/basead/b/a;

    invoke-direct {p2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 887
    iget-object p3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 888
    iget-object p3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 889
    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    .line 890
    iget-object p1, p0, Lcom/tkay/basead/a/c;->t:Lcom/tkay/core/api/IOfferClickHandler;

    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    .line 892
    iget-object p1, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V

    goto/16 :goto_5

    .line 3204
    :cond_12
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    goto/16 :goto_5

    .line 874
    :cond_13
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->f()Z

    move-result p2

    if-nez p2, :cond_1a

    .line 875
    new-instance p2, Lcom/tkay/core/basead/b/a;

    invoke-direct {p2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 876
    iget-object p3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 877
    iget-object p3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 878
    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    .line 879
    iget-object p1, p0, Lcom/tkay/basead/a/c;->t:Lcom/tkay/core/api/IOfferClickHandler;

    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    .line 881
    iget-object p1, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V

    goto :goto_5

    .line 861
    :cond_14
    invoke-direct {p0, p1, p3}, Lcom/tkay/basead/a/c;->a(Ljava/lang/String;Lcom/tkay/basead/c/i;)V

    goto :goto_5

    .line 864
    :cond_15
    new-instance p2, Lcom/tkay/core/basead/b/a;

    invoke-direct {p2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 865
    iget-object p3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 866
    iget-object p3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 867
    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    .line 868
    iget-object p1, p0, Lcom/tkay/basead/a/c;->t:Lcom/tkay/core/api/IOfferClickHandler;

    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    .line 870
    iget-object p1, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V

    goto :goto_5

    .line 2204
    :cond_16
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    goto :goto_5

    :cond_17
    if-eqz p1, :cond_18

    const-string p2, "http"

    .line 839
    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-nez p2, :cond_18

    goto :goto_4

    :cond_18
    move v0, v2

    .line 840
    :goto_4
    iget-object p2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {p2, p1, v0}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result p2

    if-nez p2, :cond_1a

    if-nez v0, :cond_1a

    .line 842
    iget-object p2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->k()I

    move-result p2

    if-ne p2, v4, :cond_19

    .line 843
    new-instance p2, Lcom/tkay/core/basead/b/a;

    invoke-direct {p2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 844
    iget-object p3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 845
    iget-object p3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iput-object p3, p2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 846
    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->f:Ljava/lang/String;

    .line 847
    iget-object p1, p0, Lcom/tkay/basead/a/c;->t:Lcom/tkay/core/api/IOfferClickHandler;

    iput-object p1, p2, Lcom/tkay/core/basead/b/a;->g:Lcom/tkay/core/api/IOfferClickHandler;

    .line 849
    iget-object p1, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/basead/ui/web/WebLandPageActivity;->a(Landroid/content/Context;Lcom/tkay/core/basead/b/a;)V

    goto :goto_5

    .line 1204
    :cond_19
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    .line 898
    :cond_1a
    :goto_5
    iput-boolean v2, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 899
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/basead/a/c$2;

    invoke-direct {p2, p0}, Lcom/tkay/basead/a/c$2;-><init>(Lcom/tkay/basead/a/c;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/basead/c/i;)V
    .locals 6

    .line 964
    iget-boolean p2, p2, Lcom/tkay/basead/c/i;->j:Z

    if-eqz p2, :cond_1

    .line 965
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 966
    iget-object v0, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-direct {p0}, Lcom/tkay/basead/a/c;->e()Lcom/tkay/basead/c/d;

    move-result-object v3

    new-instance v5, Lcom/tkay/basead/a/i;

    invoke-direct {v5}, Lcom/tkay/basead/a/i;-><init>()V

    move-object v4, p1

    invoke-static/range {v0 .. v5}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/d;Ljava/lang/String;Lcom/tkay/core/common/g/b;)Z

    move-result p2

    if-nez p2, :cond_2

    goto :goto_0

    .line 5204
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void

    .line 6204
    :cond_1
    :goto_0
    invoke-static {p1}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 1

    .line 981
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/content/pm/PackageManager;->getLaunchIntentForPackage(Ljava/lang/String;)Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_0

    const/high16 v0, 0x10000000

    .line 983
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 984
    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    .line 988
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method static synthetic a(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)Z
    .locals 5

    .line 6252
    new-instance v0, Lcom/tkay/basead/c/b;

    invoke-direct {v0}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v0, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 6253
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->e()Lcom/tkay/basead/c/d;

    move-result-object v0

    .line 6254
    iget-object v1, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    const-string v2, ""

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    iput-object v0, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    .line 6255
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_6

    .line 6257
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v3, :cond_1

    goto :goto_1

    :cond_1
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v3, "\\{req_id\\}"

    invoke-virtual {v0, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 6262
    iget-object v2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {v2, v0, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_5

    .line 6263
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz v2, :cond_2

    .line 6264
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iput-boolean v3, v2, Lcom/tkay/basead/c/a;->i:Z

    .line 6267
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    .line 6268
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v4, "1"

    invoke-static {p1, v2, v0, v4, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    .line 6269
    iget-object p1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p1, :cond_3

    .line 6271
    invoke-interface {p1}, Lcom/tkay/basead/a/c$b;->a()V

    .line 6275
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p1, :cond_4

    .line 6276
    invoke-interface {p1, v3}, Lcom/tkay/basead/a/c$b;->a(Z)V

    .line 6279
    :cond_4
    iput-boolean v1, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 6280
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/basead/a/c$4;

    invoke-direct {v0, p0, v1}, Lcom/tkay/basead/a/c$4;-><init>(Lcom/tkay/basead/a/c;Z)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return v3

    .line 6297
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v2, "0"

    invoke-static {p1, p0, v0, v2, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    :cond_6
    return v1
.end method

.method private a(Lcom/tkay/basead/c/i;Z)Z
    .locals 5

    .line 252
    new-instance v0, Lcom/tkay/basead/c/b;

    invoke-direct {v0}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v0, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 253
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->e()Lcom/tkay/basead/c/d;

    move-result-object v0

    .line 254
    iget-object v1, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    const-string v2, ""

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    iput-object v0, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    .line 255
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_6

    .line 257
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->o()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v3, :cond_1

    goto :goto_1

    :cond_1
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v3, "\\{req_id\\}"

    invoke-virtual {v0, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 262
    iget-object v2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {v2, v0, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v2

    const/4 v3, 0x1

    if-eqz v2, :cond_5

    .line 263
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    if-eqz v2, :cond_2

    .line 264
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iput-boolean v3, v2, Lcom/tkay/basead/c/a;->i:Z

    .line 267
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    .line 268
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v4, "1"

    invoke-static {p1, v2, v0, v4, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    .line 269
    iget-object p1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p1, :cond_3

    if-nez p2, :cond_3

    .line 271
    invoke-interface {p1}, Lcom/tkay/basead/a/c$b;->a()V

    .line 275
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz p1, :cond_4

    .line 276
    invoke-interface {p1, v3}, Lcom/tkay/basead/a/c$b;->a(Z)V

    .line 279
    :cond_4
    iput-boolean v1, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 280
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance v0, Lcom/tkay/basead/a/c$4;

    invoke-direct {v0, p0, p2}, Lcom/tkay/basead/a/c$4;-><init>(Lcom/tkay/basead/a/c;Z)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return v3

    .line 297
    :cond_5
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v2, "0"

    invoke-static {p1, p2, v0, v2, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    :cond_6
    return v1
.end method

.method private b(Ljava/lang/String;)Ljava/lang/String;
    .locals 12

    const/4 v0, 0x0

    move-object v2, p1

    move v1, v0

    :goto_0
    const/16 v3, 0xa

    const-string v4, ""

    if-ge v1, v3, :cond_b

    const/4 v3, 0x0

    .line 594
    :try_start_0
    new-instance v5, Ljava/net/URL;

    invoke-direct {v5, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 596
    invoke-virtual {v5}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v5

    check-cast v5, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v3, "GET"

    .line 597
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 599
    invoke-virtual {v5, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 601
    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v3, :cond_0

    const/16 v3, 0x9

    .line 602
    iget-object v6, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v6, v6, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-static {v3, v6}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/j;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 603
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v3

    .line 604
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_0

    const-string v6, "User-Agent"

    .line 605
    invoke-virtual {v5, v6, v3}, Ljava/net/HttpURLConnection;->addRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/16 v3, 0x7530

    .line 610
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 611
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->connect()V

    .line 612
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    const/16 v6, 0x12e

    if-eq v3, v6, :cond_1

    const/16 v6, 0x12d

    if-eq v3, v6, :cond_1

    const/16 v6, 0x133

    if-ne v3, v6, :cond_5

    :cond_1
    const-string v6, "Location"

    .line 614
    invoke-virtual {v5, v6}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 620
    invoke-static {v2}, Lcom/tkay/core/basead/a/a;->b(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_4

    const-string v6, ".apk"

    invoke-virtual {v2, v6}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_4

    const-string v6, "http"

    invoke-virtual {v2, v6}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-nez v6, :cond_2

    goto :goto_1

    .line 623
    :cond_2
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v5, :cond_3

    .line 647
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    :goto_1
    const/4 v0, 0x1

    :cond_5
    if-nez v0, :cond_8

    const/16 v0, 0xc8

    if-ne v3, v0, :cond_6

    goto :goto_2

    .line 637
    :cond_6
    :try_start_2
    iget-object v6, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v7, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    const-string v11, ""

    move-object v8, p1

    move-object v9, v2

    invoke-static/range {v6 .. v11}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v5, :cond_7

    .line 647
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_7
    return-object v4

    :cond_8
    :goto_2
    if-eqz v5, :cond_9

    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_9
    return-object v2

    :catchall_0
    move-exception p1

    move-object v3, v5

    goto :goto_4

    :catch_0
    move-exception v0

    move-object v8, v2

    move-object v3, v5

    goto :goto_3

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_1
    move-exception v0

    move-object v8, v2

    .line 643
    :goto_3
    :try_start_3
    iget-object v5, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v6, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v9, ""

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v10

    move-object v7, p1

    invoke-static/range {v5 .. v10}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v3, :cond_b

    .line 647
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_5

    :goto_4
    if-eqz v3, :cond_a

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 649
    :cond_a
    throw p1

    :cond_b
    :goto_5
    return-object v4
.end method

.method private b(Lcom/tkay/basead/c/i;)V
    .locals 2

    .line 161
    iget-boolean v0, p0, Lcom/tkay/basead/a/c;->v:Z

    if-nez v0, :cond_0

    .line 162
    iget-boolean v0, p0, Lcom/tkay/basead/a/c;->w:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 173
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->w:Z

    const/16 v0, 0x9

    .line 174
    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)Z
    .locals 1

    const/4 v0, 0x0

    .line 49
    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;Z)Z

    move-result p0

    return p0
.end method

.method private b(Lcom/tkay/basead/c/i;Z)Z
    .locals 6

    .line 309
    new-instance v0, Lcom/tkay/basead/c/b;

    invoke-direct {v0}, Lcom/tkay/basead/c/b;-><init>()V

    iput-object v0, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    .line 310
    invoke-direct {p0}, Lcom/tkay/basead/a/c;->e()Lcom/tkay/basead/c/d;

    move-result-object v0

    .line 311
    iget-object v1, p1, Lcom/tkay/basead/c/i;->i:Lcom/tkay/basead/c/b;

    const-string v2, ""

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    move-object v0, v2

    :goto_0
    iput-object v0, v1, Lcom/tkay/basead/c/b;->a:Ljava/lang/String;

    const/16 v0, 0x17

    .line 312
    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 314
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_7

    .line 316
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    if-nez v3, :cond_1

    goto :goto_1

    :cond_1
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    :goto_1
    const-string v3, "\\{req_id\\}"

    invoke-virtual {v0, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 320
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/p;->a(Lcom/tkay/core/common/f/h;)V

    .line 321
    iget-object v2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    invoke-static {v2, v0, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v2

    if-eqz v2, :cond_5

    .line 322
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    .line 323
    iget-object v2, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    iput-boolean v3, v2, Lcom/tkay/basead/c/a;->i:Z

    .line 325
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/basead/a/c;->b(Lcom/tkay/basead/c/i;)V

    .line 326
    iget-object v2, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v5, "1"

    invoke-static {v2, v4, v0, v5, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    .line 327
    iget-object v0, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_3

    if-nez p2, :cond_3

    .line 329
    invoke-interface {v0}, Lcom/tkay/basead/a/c$b;->a()V

    .line 333
    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/a/c;->x:Lcom/tkay/basead/a/c$b;

    if-eqz v0, :cond_4

    .line 334
    invoke-interface {v0, v3}, Lcom/tkay/basead/a/c$b;->a(Z)V

    .line 336
    :cond_4
    iput-boolean v1, p0, Lcom/tkay/basead/a/c;->m:Z

    .line 337
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/a/c$5;

    invoke-direct {v1, p0, p2}, Lcom/tkay/basead/a/c$5;-><init>(Lcom/tkay/basead/a/c;Z)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    const/16 p2, 0x18

    .line 352
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {p2, v0, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return v3

    .line 355
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/p;->a()Lcom/tkay/core/common/p;

    move-result-object p2

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {p2, v2}, Lcom/tkay/core/common/p;->b(Lcom/tkay/core/common/f/h;)V

    .line 357
    iget-object p2, p0, Lcom/tkay/basead/a/c;->p:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v2}, Lcom/tkay/basead/a/b;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_6

    const/16 p2, 0x1c

    .line 358
    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {p2, v2, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    goto :goto_2

    :cond_6
    const/16 p2, 0x1d

    .line 360
    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {p2, v2, p1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 362
    :goto_2
    iget-object p1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object p2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const-string v2, "0"

    invoke-static {p1, p2, v0, v2, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;I)V

    :cond_7
    return v1
.end method

.method private e()Lcom/tkay/basead/c/d;
    .locals 3

    .line 717
    invoke-static {}, Lcom/tkay/basead/a/d;->a()Lcom/tkay/basead/a/d;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->d()I

    move-result v1

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/a/d;->a(ILjava/lang/String;)Lcom/tkay/basead/c/d;

    move-result-object v0

    return-object v0
.end method

.method private f()Z
    .locals 8

    .line 911
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->K()Lcom/tkay/core/common/f/al;

    move-result-object v0

    .line 912
    invoke-virtual {v0}, Lcom/tkay/core/common/f/al;->b()I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ne v1, v2, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    .line 913
    :goto_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/al;->a()I

    move-result v0

    if-ne v0, v2, :cond_1

    move v0, v2

    goto :goto_1

    :cond_1
    move v0, v3

    .line 914
    :goto_1
    invoke-static {}, Lcom/tkay/core/common/l/d;->l()Ljava/lang/String;

    move-result-object v4

    .line 915
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 916
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const/4 v2, 0x5

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V

    return v3

    :cond_2
    if-nez v1, :cond_3

    .line 920
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const/4 v2, 0x3

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V

    return v3

    :cond_3
    if-nez v0, :cond_4

    .line 924
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V

    return v3

    .line 928
    :cond_4
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->e()Ljava/lang/String;

    move-result-object v0

    .line 929
    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->f()Ljava/lang/String;

    move-result-object v1

    .line 931
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_6

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_5

    goto :goto_2

    .line 937
    :cond_5
    :try_start_0
    invoke-static {v4}, Lcom/tkay/core/common/l/d;->c(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    const-string v5, "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"

    .line 938
    invoke-static {v5}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    .line 939
    invoke-virtual {v5}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v6

    const-string v7, "userName"

    .line 940
    invoke-virtual {v5, v7}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v7

    .line 941
    invoke-virtual {v7, v6, v0}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v0, "path"

    .line 942
    invoke-virtual {v5, v0}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    .line 943
    invoke-virtual {v0, v6, v1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v0, "miniprogramType"

    .line 944
    invoke-virtual {v5, v0}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const-string v1, "MINIPTOGRAM_TYPE_RELEASE"

    .line 945
    invoke-virtual {v5, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    const/4 v5, 0x0

    .line 946
    invoke-virtual {v1, v5}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, v6, v1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    const-string v0, "com.tencent.mm.opensdk.openapi.IWXAPI"

    .line 947
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "sendReq"

    new-array v5, v2, [Ljava/lang/Class;

    const-string v7, "com.tencent.mm.opensdk.modelbase.BaseReq"

    .line 948
    invoke-static {v7}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v7

    aput-object v7, v5, v3

    invoke-virtual {v0, v1, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    aput-object v6, v1, v3

    .line 949
    invoke-virtual {v0, v4, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 950
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-static {v0, v1, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :catchall_0
    move-exception v0

    .line 953
    iget-object v1, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const/4 v4, 0x2

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {v1, v2, v4}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V

    return v3

    .line 932
    :cond_6
    :goto_2
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    iget-object v1, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    const/4 v2, 0x4

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;I)V

    return v3
.end method

.method private g()Z
    .locals 3

    .line 994
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->n()I

    move-result v0

    const/16 v1, 0x2a

    if-eq v0, v1, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    instance-of v2, v0, Lcom/tkay/core/common/f/y;

    if-eqz v2, :cond_0

    check-cast v0, Lcom/tkay/core/common/f/y;

    .line 995
    invoke-virtual {v0}, Lcom/tkay/core/common/f/y;->a()I

    move-result v0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method private h()V
    .locals 1

    const/4 v0, 0x1

    .line 1010
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->n:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/basead/a/c$b;)V
    .locals 0

    .line 152
    iput-object p1, p0, Lcom/tkay/basead/a/c;->s:Lcom/tkay/basead/a/c$b;

    return-void
.end method

.method public final a(Lcom/tkay/basead/c/i;)V
    .locals 2

    .line 194
    iget-boolean v0, p0, Lcom/tkay/basead/a/c;->m:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 197
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->m:Z

    const/4 v0, 0x0

    .line 198
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->n:Z

    .line 200
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/a/c$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/a/c$3;-><init>(Lcom/tkay/basead/a/c;Lcom/tkay/basead/c/i;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 178
    iget-boolean v0, p0, Lcom/tkay/basead/a/c;->m:Z

    return v0
.end method

.method public final b()Lcom/tkay/core/common/f/h;
    .locals 1

    .line 999
    iget-object v0, p0, Lcom/tkay/basead/a/c;->l:Lcom/tkay/core/common/f/h;

    return-object v0
.end method

.method public final c()Lcom/tkay/core/common/f/i;
    .locals 1

    .line 1003
    iget-object v0, p0, Lcom/tkay/basead/a/c;->r:Lcom/tkay/core/common/f/i;

    return-object v0
.end method

.method public final d()V
    .locals 1

    const/4 v0, 0x1

    .line 1014
    iput-boolean v0, p0, Lcom/tkay/basead/a/c;->o:Z

    return-void
.end method
