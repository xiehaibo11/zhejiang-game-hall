.class public final Lcom/tkay/expressad/exoplayer/h/a/c;
.super Lcom/tkay/expressad/exoplayer/h/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/a/c$b;,
        Lcom/tkay/expressad/exoplayer/h/a/c$c;,
        Lcom/tkay/expressad/exoplayer/h/a/c$d;,
        Lcom/tkay/expressad/exoplayer/h/a/c$a;,
        Lcom/tkay/expressad/exoplayer/h/a/c$e;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/exoplayer/h/f<",
        "Lcom/tkay/expressad/exoplayer/h/s$a;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "AdsMediaSource"


# instance fields
.field private final b:Lcom/tkay/expressad/exoplayer/h/s;

.field private final c:Lcom/tkay/expressad/exoplayer/h/a/c$e;

.field private final d:Lcom/tkay/expressad/exoplayer/h/a/b;

.field private final e:Landroid/view/ViewGroup;

.field private final f:Landroid/os/Handler;

.field private final g:Lcom/tkay/expressad/exoplayer/h/a/c$d;

.field private final h:Landroid/os/Handler;

.field private final i:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/exoplayer/h/l;",
            ">;>;"
        }
    .end annotation
.end field

.field private final j:Lcom/tkay/expressad/exoplayer/ae$a;

.field private k:Lcom/tkay/expressad/exoplayer/h/a/c$c;

.field private l:Lcom/tkay/expressad/exoplayer/ae;

.field private m:Ljava/lang/Object;

.field private n:Lcom/tkay/expressad/exoplayer/h/a/a;

.field private o:[[Lcom/tkay/expressad/exoplayer/h/s;

.field private p:[[J


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/a/c$e;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;)V
    .locals 7

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    .line 232
    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/a/c;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/a/c$e;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/a/c$d;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/a/c$e;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/a/c$d;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 297
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/f;-><init>()V

    .line 298
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->b:Lcom/tkay/expressad/exoplayer/h/s;

    .line 299
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->c:Lcom/tkay/expressad/exoplayer/h/a/c$e;

    .line 300
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->d:Lcom/tkay/expressad/exoplayer/h/a/b;

    .line 301
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->e:Landroid/view/ViewGroup;

    .line 302
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->f:Landroid/os/Handler;

    .line 303
    iput-object p6, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->g:Lcom/tkay/expressad/exoplayer/h/a/c$d;

    .line 304
    new-instance p1, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->h:Landroid/os/Handler;

    .line 305
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    .line 306
    new-instance p1, Lcom/tkay/expressad/exoplayer/ae$a;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/ae$a;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->j:Lcom/tkay/expressad/exoplayer/ae$a;

    const/4 p1, 0x0

    new-array p2, p1, [[Lcom/tkay/expressad/exoplayer/h/s;

    .line 307
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    new-array p1, p1, [[J

    .line 308
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;)V
    .locals 7

    .line 209
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/o$c;

    invoke-direct {v2, p2}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v3, p3

    move-object v4, p4

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/a/c;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/a/c$e;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/a/c$d;)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/j/h$a;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/a/c$d;)V
    .locals 7
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 265
    new-instance v2, Lcom/tkay/expressad/exoplayer/h/o$c;

    invoke-direct {v2, p2}, Lcom/tkay/expressad/exoplayer/h/o$c;-><init>(Lcom/tkay/expressad/exoplayer/j/h$a;)V

    move-object v0, p0

    move-object v1, p1

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    invoke-direct/range {v0 .. v6}, Lcom/tkay/expressad/exoplayer/h/a/c;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/a/c$e;Lcom/tkay/expressad/exoplayer/h/a/b;Landroid/view/ViewGroup;Landroid/os/Handler;Lcom/tkay/expressad/exoplayer/h/a/c$d;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/a/c;)Landroid/view/ViewGroup;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->e:Landroid/view/ViewGroup;

    return-object p0
.end method

.method private static a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 1

    .line 421
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    return-object p1
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 0

    .line 53
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p0

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/a/a;)V
    .locals 3

    .line 427
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    if-nez v0, :cond_0

    .line 428
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    new-array v0, v0, [[Lcom/tkay/expressad/exoplayer/h/s;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    const/4 v1, 0x0

    new-array v2, v1, [Lcom/tkay/expressad/exoplayer/h/s;

    .line 429
    invoke-static {v0, v2}, Ljava/util/Arrays;->fill([Ljava/lang/Object;Ljava/lang/Object;)V

    .line 430
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    new-array v0, v0, [[J

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    new-array v1, v1, [J

    .line 431
    invoke-static {v0, v1}, Ljava/util/Arrays;->fill([Ljava/lang/Object;Ljava/lang/Object;)V

    .line 433
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    .line 434
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h/a/a;)V
    .locals 3

    .line 6427
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    if-nez v0, :cond_0

    .line 6428
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    new-array v0, v0, [[Lcom/tkay/expressad/exoplayer/h/s;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    const/4 v1, 0x0

    new-array v2, v1, [Lcom/tkay/expressad/exoplayer/h/s;

    .line 6429
    invoke-static {v0, v2}, Ljava/util/Arrays;->fill([Ljava/lang/Object;Ljava/lang/Object;)V

    .line 6430
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    new-array v0, v0, [[J

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    new-array v1, v1, [J

    .line 6431
    invoke-static {v0, v1}, Ljava/util/Arrays;->fill([Ljava/lang/Object;Ljava/lang/Object;)V

    .line 6433
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    .line 6434
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 3

    .line 407
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 408
    iget p4, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    .line 409
    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    .line 1445
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 1446
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    aget-object p4, v0, p4

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->j:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 1750
    invoke-virtual {p3, v2, v0, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p3

    .line 2350
    iget-wide v0, p3, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 1446
    aput-wide v0, p4, p1

    .line 1447
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 1448
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    .line 1449
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p3

    if-ge v2, p3, :cond_1

    .line 1450
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/h/l;

    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 1452
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1454
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void

    .line 2438
    :cond_3
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    .line 2439
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->m:Ljava/lang/Object;

    .line 2440
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s;IILcom/tkay/expressad/exoplayer/ae;)V
    .locals 3

    .line 445
    invoke-virtual {p4}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 446
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    aget-object p2, v0, p2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->j:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 2750
    invoke-virtual {p4, v2, v0, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p4

    .line 3350
    iget-wide v0, p4, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 446
    aput-wide v0, p2, p3

    .line 447
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 448
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/List;

    .line 449
    :goto_1
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p3

    if-ge v2, p3, :cond_1

    .line 450
    invoke-interface {p2, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/h/l;

    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 452
    :cond_1
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 454
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/a/c;)Lcom/tkay/expressad/exoplayer/h/a/b;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->d:Lcom/tkay/expressad/exoplayer/h/a/b;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;
    .locals 0

    .line 53
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/t$a;

    move-result-object p0

    return-object p0
.end method

.method private b(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 0

    .line 438
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    .line 439
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->m:Ljava/lang/Object;

    .line 440
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/exoplayer/h/a/c;)Landroid/os/Handler;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->f:Landroid/os/Handler;

    return-object p0
.end method

.method private c()V
    .locals 3

    .line 458
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    if-eqz v1, :cond_1

    .line 459
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/a;->a([[J)Lcom/tkay/expressad/exoplayer/h/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    .line 461
    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    if-nez v0, :cond_0

    .line 462
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    goto :goto_0

    .line 463
    :cond_0
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/h/a/d;-><init>(Lcom/tkay/expressad/exoplayer/ae;Lcom/tkay/expressad/exoplayer/h/a/a;)V

    .line 464
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->m:Ljava/lang/Object;

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/exoplayer/h/a/c;)Lcom/tkay/expressad/exoplayer/h/a/c$d;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->g:Lcom/tkay/expressad/exoplayer/h/a/c$d;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/exoplayer/h/a/c;)Landroid/os/Handler;
    .locals 0

    .line 53
    iget-object p0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->h:Landroid/os/Handler;

    return-object p0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 9

    .line 329
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget v0, v0, Lcom/tkay/expressad/exoplayer/h/a/a;->g:I

    if-lez v0, :cond_3

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 330
    iget v0, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    .line 331
    iget v1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    .line 332
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/a/a;->i:[Lcom/tkay/expressad/exoplayer/h/a/a$a;

    aget-object v2, v2, v0

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/h/a/a$a;->b:[Landroid/net/Uri;

    aget-object v2, v2, v1

    .line 333
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v3, v3, v0

    array-length v3, v3

    if-gt v3, v1, :cond_1

    .line 334
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->c:Lcom/tkay/expressad/exoplayer/h/a/c$e;

    invoke-interface {v3, v2}, Lcom/tkay/expressad/exoplayer/h/a/c$e;->b(Landroid/net/Uri;)Lcom/tkay/expressad/exoplayer/h/s;

    move-result-object v3

    .line 335
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v5, v4, v0

    array-length v5, v5

    if-lt v1, v5, :cond_0

    add-int/lit8 v6, v1, 0x1

    .line 338
    aget-object v7, v4, v0

    .line 339
    invoke-static {v7, v6}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Lcom/tkay/expressad/exoplayer/h/s;

    aput-object v7, v4, v0

    .line 340
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    aget-object v7, v4, v0

    invoke-static {v7, v6}, Ljava/util/Arrays;->copyOf([JI)[J

    move-result-object v7

    aput-object v7, v4, v0

    .line 341
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    aget-object v4, v4, v0

    const-wide v7, -0x7fffffffffffffffL    # -4.9E-324

    invoke-static {v4, v5, v6, v7, v8}, Ljava/util/Arrays;->fill([JIIJ)V

    .line 343
    :cond_0
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v4, v4, v0

    aput-object v3, v4, v1

    .line 344
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v4, v3, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 345
    invoke-virtual {p0, p1, v3}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    .line 347
    :cond_1
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v3, v3, v0

    aget-object v3, v3, v1

    .line 348
    new-instance v4, Lcom/tkay/expressad/exoplayer/h/l;

    new-instance v5, Lcom/tkay/expressad/exoplayer/h/s$a;

    const/4 v6, 0x0

    iget-wide v7, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->d:J

    invoke-direct {v5, v6, v7, v8}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(IJ)V

    invoke-direct {v4, v3, v5, p2}, Lcom/tkay/expressad/exoplayer/h/l;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)V

    .line 353
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/a/c$b;

    invoke-direct {p1, p0, v2, v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/c$b;-><init>(Lcom/tkay/expressad/exoplayer/h/a/c;Landroid/net/Uri;II)V

    invoke-virtual {v4, p1}, Lcom/tkay/expressad/exoplayer/h/l;->a(Lcom/tkay/expressad/exoplayer/h/l$a;)V

    .line 355
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    if-nez p1, :cond_2

    .line 357
    invoke-virtual {v4}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    goto :goto_0

    .line 361
    :cond_2
    invoke-interface {p1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_0
    return-object v4

    .line 365
    :cond_3
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/l;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->b:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-direct {v0, v1, p1, p2}, Lcom/tkay/expressad/exoplayer/h/l;-><init>(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)V

    .line 366
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    return-object v0
.end method

.method protected final bridge synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s$a;)Lcom/tkay/expressad/exoplayer/h/s$a;
    .locals 1

    .line 53
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 3421
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    :cond_0
    return-object p2
.end method

.method public final a()V
    .locals 2

    .line 384
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->a()V

    .line 385
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->k:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/h/a/c$c;->c()V

    const/4 v0, 0x0

    .line 386
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->k:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    .line 387
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 388
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    .line 389
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->m:Ljava/lang/Object;

    .line 390
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->n:Lcom/tkay/expressad/exoplayer/h/a/a;

    const/4 v0, 0x0

    new-array v1, v0, [[Lcom/tkay/expressad/exoplayer/h/s;

    .line 391
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->o:[[Lcom/tkay/expressad/exoplayer/h/s;

    new-array v0, v0, [[J

    .line 392
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    .line 393
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->h:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/a/c$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/exoplayer/h/a/c$2;-><init>(Lcom/tkay/expressad/exoplayer/h/a/c;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 2

    .line 373
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/l;

    .line 374
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/h/l;->a:Lcom/tkay/expressad/exoplayer/h/s;

    .line 375
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-eqz v0, :cond_0

    .line 377
    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 379
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/l;->g()V

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 2

    .line 314
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    .line 315
    invoke-static {p2}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 316
    new-instance p2, Lcom/tkay/expressad/exoplayer/h/a/c$c;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/exoplayer/h/a/c$c;-><init>(Lcom/tkay/expressad/exoplayer/h/a/c;)V

    .line 317
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->k:Lcom/tkay/expressad/exoplayer/h/a/c$c;

    .line 318
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/s$a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/exoplayer/h/s$a;-><init>(I)V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->b:Lcom/tkay/expressad/exoplayer/h/s;

    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/exoplayer/h/a/c;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    .line 319
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->h:Landroid/os/Handler;

    new-instance v1, Lcom/tkay/expressad/exoplayer/h/a/c$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/a/c$1;-><init>(Lcom/tkay/expressad/exoplayer/h/a/c;Lcom/tkay/expressad/exoplayer/h;Lcom/tkay/expressad/exoplayer/h/a/c$c;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method protected final synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 3

    .line 53
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/s$a;

    .line 4407
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/h/s$a;->a()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 4408
    iget p4, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->b:I

    .line 4409
    iget p1, p1, Lcom/tkay/expressad/exoplayer/h/s$a;->c:I

    .line 4445
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 4446
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->p:[[J

    aget-object p4, v0, p4

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->j:Lcom/tkay/expressad/exoplayer/ae$a;

    .line 4750
    invoke-virtual {p3, v2, v0, v2}, Lcom/tkay/expressad/exoplayer/ae;->a(ILcom/tkay/expressad/exoplayer/ae$a;Z)Lcom/tkay/expressad/exoplayer/ae$a;

    move-result-object p3

    .line 5350
    iget-wide v0, p3, Lcom/tkay/expressad/exoplayer/ae$a;->d:J

    .line 4446
    aput-wide v0, p4, p1

    .line 4447
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 4448
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    .line 4449
    :goto_1
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p3

    if-ge v2, p3, :cond_1

    .line 4450
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/exoplayer/h/l;

    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/h/l;->f()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 4452
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->i:Ljava/util/Map;

    invoke-interface {p1, p2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 4454
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void

    .line 5438
    :cond_3
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->l:Lcom/tkay/expressad/exoplayer/ae;

    .line 5439
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/a/c;->m:Ljava/lang/Object;

    .line 5440
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/a/c;->c()V

    return-void
.end method
