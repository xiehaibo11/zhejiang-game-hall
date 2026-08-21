.class public Lcom/tkay/basead/d/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/d/a/b$a;
    }
.end annotation


# static fields
.field private static volatile c:Lcom/tkay/basead/d/a/b;


# instance fields
.field a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/a/g;",
            ">;"
        }
    .end annotation
.end field

.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 56
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/d/a/b;->b:Ljava/lang/String;

    .line 67
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a(Lcom/tkay/basead/a/c;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/basead/a/c;
    .locals 6

    .line 627
    invoke-virtual {p0}, Lcom/tkay/basead/a/c;->b()Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object v0

    .line 629
    invoke-virtual {p0}, Lcom/tkay/basead/a/c;->b()Lcom/tkay/core/common/f/h;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 630
    invoke-virtual {p0}, Lcom/tkay/basead/a/c;->b()Lcom/tkay/core/common/f/h;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/expressad/foundation/d/c;)V

    return-object p0

    .line 634
    :cond_0
    new-instance v1, Lcom/tkay/core/common/f/f;

    invoke-direct {v1}, Lcom/tkay/core/common/f/f;-><init>()V

    .line 635
    invoke-static {v1, p1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/expressad/foundation/d/c;)V

    .line 636
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->j(Ljava/lang/String;)V

    .line 637
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Q()I

    move-result v2

    const/4 v3, 0x2

    if-eqz v2, :cond_5

    const/4 v4, 0x1

    if-eq v2, v4, :cond_4

    if-eq v2, v3, :cond_4

    const/4 v4, 0x4

    const/4 v5, 0x3

    if-eq v2, v5, :cond_3

    if-eq v2, v4, :cond_2

    const/4 v4, 0x5

    if-eq v2, v4, :cond_5

    const/16 v4, 0x8

    if-eq v2, v4, :cond_2

    const/16 v4, 0x9

    if-eq v2, v4, :cond_5

    const/16 v3, 0xc

    if-eq v2, v3, :cond_1

    goto :goto_0

    :cond_1
    const/4 v2, 0x6

    .line 655
    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->e(I)V

    goto :goto_0

    .line 652
    :cond_2
    invoke-virtual {v1, v5}, Lcom/tkay/core/common/f/f;->e(I)V

    goto :goto_0

    .line 648
    :cond_3
    invoke-virtual {v1, v4}, Lcom/tkay/core/common/f/f;->e(I)V

    goto :goto_0

    .line 645
    :cond_4
    invoke-virtual {v1, v4}, Lcom/tkay/core/common/f/f;->e(I)V

    goto :goto_0

    .line 641
    :cond_5
    invoke-virtual {v1, v3}, Lcom/tkay/core/common/f/f;->e(I)V

    .line 661
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aG()Lcom/tkay/expressad/foundation/d/a;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 663
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->N(Ljava/lang/String;)V

    .line 664
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->y(Ljava/lang/String;)V

    .line 665
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->z(Ljava/lang/String;)V

    .line 666
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/f;->A(Ljava/lang/String;)V

    .line 667
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/a;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/f/f;->B(Ljava/lang/String;)V

    .line 699
    :cond_6
    invoke-virtual {p0}, Lcom/tkay/basead/a/c;->c()Lcom/tkay/core/common/f/i;

    move-result-object p0

    .line 700
    new-instance p1, Lcom/tkay/basead/a/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {p1, v2, p0, v1}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    .line 702
    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/f;->a(Lcom/tkay/core/common/f/j;)V

    return-object p1
.end method

.method public static a()Lcom/tkay/basead/d/a/b;
    .locals 2

    .line 71
    sget-object v0, Lcom/tkay/basead/d/a/b;->c:Lcom/tkay/basead/d/a/b;

    if-nez v0, :cond_1

    .line 72
    const-class v0, Lcom/tkay/basead/d/a/b;

    monitor-enter v0

    .line 73
    :try_start_0
    sget-object v1, Lcom/tkay/basead/d/a/b;->c:Lcom/tkay/basead/d/a/b;

    if-nez v1, :cond_0

    .line 74
    new-instance v1, Lcom/tkay/basead/d/a/b;

    invoke-direct {v1}, Lcom/tkay/basead/d/a/b;-><init>()V

    sput-object v1, Lcom/tkay/basead/d/a/b;->c:Lcom/tkay/basead/d/a/b;

    .line 75
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 77
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/basead/d/a/b;->c:Lcom/tkay/basead/d/a/b;

    return-object v0
.end method

.method static synthetic a(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 0

    .line 55
    invoke-static {p0, p1}, Lcom/tkay/basead/d/a/b;->c(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Ljava/lang/String;ZIJ)Ljava/lang/String;
    .locals 0

    .line 55
    invoke-static {p0, p1, p2, p3, p4}, Lcom/tkay/basead/d/a/b;->b(Ljava/lang/String;ZIJ)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/basead/d/a/b;Ljava/lang/String;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V
    .locals 2

    .line 3561
    iget-object p0, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p3, :cond_0

    const-string p0, "30003"

    .line 3564
    invoke-static {p0, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p0

    .line 3565
    invoke-interface {p3, p0}, Lcom/tkay/basead/d/a/b$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/f;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    .line 572
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->w(Ljava/lang/String;)V

    .line 573
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->n(Ljava/lang/String;)V

    .line 574
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->l(Ljava/lang/String;)V

    .line 575
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->m(Ljava/lang/String;)V

    .line 576
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->v(Ljava/lang/String;)V

    .line 577
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->af()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->u(Ljava/lang/String;)V

    .line 579
    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->X()Lcom/tkay/core/common/f/ab;

    move-result-object v0

    if-nez v0, :cond_0

    .line 582
    new-instance v0, Lcom/tkay/core/common/f/ab;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ab;-><init>()V

    .line 583
    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/f;->a(Lcom/tkay/core/common/f/ab;)V

    .line 586
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 590
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->a()[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/f/ab;->b([Ljava/lang/String;)V

    .line 591
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->b()[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/f/ab;->c([Ljava/lang/String;)V

    .line 592
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->c()[Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/ab;->d([Ljava/lang/String;)V

    .line 595
    :cond_1
    invoke-static {p0, p1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/h;Lcom/tkay/expressad/foundation/d/c;)V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/f;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/f;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 601
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 602
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 603
    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->v()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->t(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/h;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 4

    .line 715
    instance-of v0, p0, Lcom/tkay/core/common/f/f;

    if-eqz v0, :cond_0

    .line 716
    move-object v0, p0

    check-cast v0, Lcom/tkay/core/common/f/f;

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz p0, :cond_4

    if-nez p1, :cond_1

    goto :goto_2

    .line 723
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ad()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/h;->v(Ljava/lang/String;)V

    .line 725
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aO()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/h;->d(Ljava/lang/String;)V

    .line 726
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aN()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/tkay/core/common/f/h;->c(Ljava/lang/String;)V

    .line 728
    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    .line 729
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ah()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&opdptype={opdptype}&apk_ptype={apk_ptype}"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 731
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 733
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/n;->l()[Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 735
    array-length v1, p1

    const/4 v2, 0x0

    :goto_1
    if-ge v2, v1, :cond_2

    aget-object v3, p1, v2

    .line 736
    invoke-interface {p0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 741
    :cond_2
    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->X()Lcom/tkay/core/common/f/ab;

    move-result-object p1

    if-nez p1, :cond_3

    .line 744
    new-instance p1, Lcom/tkay/core/common/f/ab;

    invoke-direct {p1}, Lcom/tkay/core/common/f/ab;-><init>()V

    .line 745
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/f;->a(Lcom/tkay/core/common/f/ab;)V

    .line 749
    :cond_3
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 750
    invoke-interface {p0, v0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/String;

    .line 751
    invoke-virtual {p1, p0}, Lcom/tkay/core/common/f/ab;->a([Ljava/lang/String;)V

    :cond_4
    :goto_2
    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/i;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/i;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 609
    iget v0, p0, Lcom/tkay/core/common/f/i;->j:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/core/common/f/i;->j:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    :cond_0
    const/4 v0, 0x0

    .line 610
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 611
    iget-object p0, p0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/j;->z()I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/tkay/expressad/foundation/d/c;->a(I)V

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V
    .locals 3

    .line 561
    iget-object v0, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz p3, :cond_0

    const-string p2, "30003"

    .line 564
    invoke-static {p2, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    .line 565
    invoke-interface {p3, p1}, Lcom/tkay/basead/d/a/b$a;->a(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 3

    const-string v0, "hdbtn=1"

    const-string v1, "hdbtn=0"

    const-string v2, "hdbtn"

    if-eqz p1, :cond_1

    .line 3481
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 3482
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 3484
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&hdbtn=0"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 3488
    :cond_1
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 3489
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 3491
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&hdbtn=1"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method private static b(Ljava/lang/String;ZIJ)Ljava/lang/String;
    .locals 3

    const-string v0, "shake_show=0"

    const-string v1, "shake_show=1"

    const-string v2, "shake_show"

    if-eqz p1, :cond_1

    .line 450
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 451
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 453
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&shake_show=1"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 456
    :cond_1
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 457
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 459
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&shake_show=0"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_0
    const-string p1, "shake_time"

    .line 463
    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    const-wide/16 v0, 0x3e8

    if-eqz p1, :cond_3

    .line 464
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "shake_time="

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    div-long/2addr p3, v0

    invoke-virtual {p1, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "(shake_time=[^&]*)"

    invoke-virtual {p0, p3, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_1

    .line 466
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&shake_time="

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    div-long/2addr p3, v0

    invoke-virtual {p1, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_1
    const-string p1, "shake_strength"

    .line 469
    invoke-virtual {p0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 470
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string p2, "shake_strength="

    invoke-virtual {p2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "(shake_strength=[^&]*)"

    invoke-virtual {p0, p2, p1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    goto :goto_2

    .line 472
    :cond_4
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&shake_strength="

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_2
    return-object p0
.end method

.method private b(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
    .locals 8

    .line 118
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v7, Lcom/tkay/basead/d/a/b$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/basead/d/a/b$1;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static c(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 3

    const-string v0, "alecfc=0"

    const-string v1, "alecfc=1"

    const-string v2, "alecfc"

    if-eqz p1, :cond_1

    .line 432
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 433
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 435
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&alecfc=1"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 438
    :cond_1
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 439
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 441
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&alecfc=0"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method private c(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
    .locals 9

    .line 207
    iget-object v0, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 209
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42480000    # 50.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    .line 210
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v2

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v5, 0x2

    const/4 v6, 0x1

    if-lez v2, :cond_0

    const/4 v5, 0x5

    .line 212
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v1

    goto/16 :goto_3

    :cond_0
    if-eqz v0, :cond_7

    .line 215
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v2

    .line 216
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v7

    const v8, -0x215ddd38

    if-eq v7, v8, :cond_3

    const v8, 0x59df5a3e

    if-eq v7, v8, :cond_2

    const v8, 0x60b65fb2

    if-eq v7, v8, :cond_1

    goto :goto_0

    :cond_1
    const-string v7, "728x90"

    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, v6

    goto :goto_1

    :cond_2
    const-string v7, "320x90"

    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, v3

    goto :goto_1

    :cond_3
    const-string v7, "300x250"

    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    move v2, v5

    goto :goto_1

    :cond_4
    :goto_0
    move v2, v4

    :goto_1
    if-eqz v2, :cond_6

    if-eq v2, v6, :cond_6

    if-eq v2, v5, :cond_5

    goto :goto_2

    .line 225
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x437a0000    # 250.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    goto :goto_3

    .line 220
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42b40000    # 90.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v1

    move v5, v6

    goto :goto_3

    :cond_7
    :goto_2
    const/4 v5, 0x4

    .line 231
    :goto_3
    new-instance v2, Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    invoke-direct {v2, v7}, Lcom/tkay/expressad/out/TemplateBannerView;-><init>(Landroid/content/Context;)V

    .line 232
    new-instance v7, Lcom/tkay/expressad/out/c;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v8

    invoke-direct {v7, v5, v8}, Lcom/tkay/expressad/out/c;-><init>(II)V

    .line 233
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_8

    iget-object p1, p2, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    goto :goto_4

    :cond_8
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object p1

    :goto_4
    const-string v5, ""

    invoke-virtual {v2, v7, v5, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->init(Lcom/tkay/expressad/out/c;Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->s()I

    move-result p1

    if-nez p1, :cond_9

    move v3, v6

    :cond_9
    invoke-virtual {v2, v3}, Lcom/tkay/expressad/out/TemplateBannerView;->setAllowShowCloseBtn(Z)V

    if-lez v1, :cond_a

    .line 237
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p1, v4, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 239
    :cond_a
    new-instance p1, Lcom/tkay/basead/d/a/b$2;

    invoke-direct {p1, p0, p2, p4}, Lcom/tkay/basead/d/a/b$2;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V

    invoke-virtual {v2, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->setBannerAdListener(Lcom/tkay/expressad/out/b;)V

    .line 291
    iget-object p1, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 292
    invoke-virtual {v2, p3}, Lcom/tkay/expressad/out/TemplateBannerView;->load(Lcom/tkay/expressad/foundation/d/d;)V

    return-void
.end method

.method private static d(Ljava/lang/String;Z)Ljava/lang/String;
    .locals 3

    const-string v0, "hdbtn=1"

    const-string v1, "hdbtn=0"

    const-string v2, "hdbtn"

    if-eqz p1, :cond_1

    .line 481
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 482
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 484
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&hdbtn=0"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 488
    :cond_1
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 489
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 491
    :cond_2
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&hdbtn=1"

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method private d(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
    .locals 10

    .line 297
    new-instance v0, Lcom/tkay/expressad/reward/b/a;

    invoke-direct {v0}, Lcom/tkay/expressad/reward/b/a;-><init>()V

    .line 298
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object p1, p2, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object p1

    .line 299
    :goto_0
    iget v1, p2, Lcom/tkay/core/common/f/i;->j:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    .line 300
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4, p1, v2}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    .line 301
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/reward/b/a;->a(Z)V

    goto :goto_1

    .line 302
    :cond_1
    iget v1, p2, Lcom/tkay/core/common/f/i;->j:I

    const/4 v4, 0x3

    if-ne v1, v4, :cond_2

    .line 303
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4, p1, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    .line 304
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/reward/b/a;->a(Z)V

    .line 307
    :cond_2
    :goto_1
    iget-object v1, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->y()I

    move-result v1

    if-nez v1, :cond_3

    move v1, v3

    goto :goto_2

    :cond_3
    const/4 v1, 0x2

    .line 308
    :goto_2
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/reward/b/a;->a(I)V

    const-string v1, ""

    .line 309
    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/reward/b/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 311
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4, p1, v2}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    .line 312
    iget-object v1, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->z()I

    move-result v1

    if-ltz v1, :cond_4

    .line 313
    iget-object v1, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->z()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/videocommon/e/d;->a(I)V

    .line 315
    :cond_4
    iget v1, p2, Lcom/tkay/core/common/f/i;->j:I

    if-ne v1, v3, :cond_5

    .line 316
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->l()V

    .line 3374
    :cond_5
    iget-object p1, p3, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz p1, :cond_c

    .line 320
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_c

    .line 321
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_6
    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_c

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_6

    .line 325
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/shake/a;->b()Z

    move-result v4

    if-eqz v4, :cond_7

    iget-object v4, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/j;->M()I

    move-result v4

    if-ne v4, v3, :cond_7

    move v4, v3

    goto :goto_4

    :cond_7
    move v4, v2

    .line 326
    :goto_4
    iget-object v5, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/j;->x()I

    move-result v5

    if-nez v5, :cond_8

    move v5, v3

    goto :goto_5

    :cond_8
    move v5, v2

    .line 328
    :goto_5
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v6

    .line 329
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_9

    .line 331
    invoke-static {v6, v5}, Lcom/tkay/basead/d/a/b;->c(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v6

    .line 332
    iget-object v7, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/j;->N()I

    move-result v7

    iget-object v8, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v8}, Lcom/tkay/core/common/f/j;->O()J

    move-result-wide v8

    invoke-static {v6, v4, v7, v8, v9}, Lcom/tkay/basead/d/a/b;->b(Ljava/lang/String;ZIJ)Ljava/lang/String;

    move-result-object v6

    .line 333
    invoke-virtual {v1, v6}, Lcom/tkay/expressad/foundation/d/c;->k(Ljava/lang/String;)V

    .line 336
    :cond_9
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v6

    .line 337
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_a

    .line 338
    invoke-static {v6, v5}, Lcom/tkay/basead/d/a/b;->c(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v5

    .line 339
    iget-object v6, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/j;->N()I

    move-result v6

    iget-object v7, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v7}, Lcom/tkay/core/common/f/j;->O()J

    move-result-wide v7

    invoke-static {v5, v4, v6, v7, v8}, Lcom/tkay/basead/d/a/b;->b(Ljava/lang/String;ZIJ)Ljava/lang/String;

    move-result-object v4

    .line 340
    invoke-virtual {v1, v4}, Lcom/tkay/expressad/foundation/d/c;->n(Ljava/lang/String;)V

    .line 343
    :cond_a
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    .line 344
    iget-object v4, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/j;->u()I

    move-result v4

    if-ne v4, v3, :cond_b

    move v4, v3

    goto :goto_6

    :cond_b
    move v4, v2

    :goto_6
    if-eqz v1, :cond_6

    .line 346
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v5

    .line 347
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    .line 348
    invoke-static {v5, v4}, Lcom/tkay/basead/d/a/b;->c(Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object v4

    .line 349
    invoke-virtual {v1, v4}, Lcom/tkay/expressad/foundation/d/c$c;->a(Ljava/lang/String;)V

    goto/16 :goto_3

    .line 362
    :cond_c
    new-instance p1, Lcom/tkay/basead/d/a/b$3;

    invoke-direct {p1, p0, p2, p4}, Lcom/tkay/basead/d/a/b$3;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/reward/b/a;->a(Lcom/tkay/expressad/videocommon/d/a;)V

    .line 425
    iget-object p1, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {p4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 426
    invoke-virtual {v0, p3}, Lcom/tkay/expressad/reward/b/a;->a(Lcom/tkay/expressad/foundation/d/d;)V

    return-void
.end method

.method private e(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
    .locals 8

    .line 498
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v7, Lcom/tkay/basead/d/a/b$4;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p4

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/tkay/basead/d/a/b$4;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V
    .locals 10

    .line 82
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->l()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 83
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->l()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/out/n;->a:Ljava/lang/String;

    .line 86
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_1

    .line 87
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/b/b;->a(Landroid/content/Context;)V

    .line 88
    invoke-static {}, Lcom/tkay/expressad/out/r;->a()Lcom/tkay/expressad/e/b;

    move-result-object v0

    .line 91
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x3

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 92
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->Q()Ljava/lang/String;

    move-result-object v2

    const-string v3, "dsp_tkay_appid"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 93
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->R()Ljava/lang/String;

    move-result-object v2

    const-string v3, "dsp_tkay_appkey"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 94
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/c;->a(Ljava/util/Map;Landroid/content/Context;)V

    .line 97
    :cond_1
    iget v0, p2, Lcom/tkay/core/common/f/i;->j:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "0"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1498
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v7, Lcom/tkay/basead/d/a/b$4;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p4

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/tkay/basead/d/a/b$4;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 102
    :cond_2
    iget v0, p2, Lcom/tkay/core/common/f/i;->j:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 2207
    iget-object v0, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    const/4 v1, 0x4

    .line 2209
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42480000    # 50.0f

    invoke-static {v2, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    .line 2210
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v3

    const/4 v4, 0x0

    const/4 v5, -0x1

    const/4 v6, 0x2

    const/4 v7, 0x1

    if-lez v3, :cond_3

    const/4 v1, 0x5

    .line 2212
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v2

    goto/16 :goto_2

    :cond_3
    if-eqz v0, :cond_a

    .line 2215
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->r()Ljava/lang/String;

    move-result-object v3

    .line 2216
    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v8

    const v9, -0x215ddd38

    if-eq v8, v9, :cond_6

    const v9, 0x59df5a3e

    if-eq v8, v9, :cond_5

    const v9, 0x60b65fb2

    if-eq v8, v9, :cond_4

    goto :goto_0

    :cond_4
    const-string v8, "728x90"

    invoke-virtual {v3, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v7

    goto :goto_1

    :cond_5
    const-string v8, "320x90"

    invoke-virtual {v3, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v4

    goto :goto_1

    :cond_6
    const-string v8, "300x250"

    invoke-virtual {v3, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    move v3, v6

    goto :goto_1

    :cond_7
    :goto_0
    move v3, v5

    :goto_1
    if-eqz v3, :cond_9

    if-eq v3, v7, :cond_9

    if-eq v3, v6, :cond_8

    goto :goto_2

    .line 2225
    :cond_8
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x437a0000    # 250.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    move v1, v6

    goto :goto_2

    .line 2220
    :cond_9
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x42b40000    # 90.0f

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v2

    move v1, v7

    .line 2231
    :cond_a
    :goto_2
    new-instance v3, Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    invoke-direct {v3, v6}, Lcom/tkay/expressad/out/TemplateBannerView;-><init>(Landroid/content/Context;)V

    .line 2232
    new-instance v6, Lcom/tkay/expressad/out/c;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->b()I

    move-result v8

    invoke-direct {v6, v1, v8}, Lcom/tkay/expressad/out/c;-><init>(II)V

    .line 2233
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_b

    iget-object p1, p2, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    goto :goto_3

    :cond_b
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->S()Ljava/lang/String;

    move-result-object p1

    :goto_3
    const-string v1, ""

    invoke-virtual {v3, v6, v1, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->init(Lcom/tkay/expressad/out/c;Ljava/lang/String;Ljava/lang/String;)V

    .line 2235
    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->s()I

    move-result p1

    if-nez p1, :cond_c

    move v4, v7

    :cond_c
    invoke-virtual {v3, v4}, Lcom/tkay/expressad/out/TemplateBannerView;->setAllowShowCloseBtn(Z)V

    if-lez v2, :cond_d

    .line 2237
    new-instance p1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {p1, v5, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v3, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2239
    :cond_d
    new-instance p1, Lcom/tkay/basead/d/a/b$2;

    invoke-direct {p1, p0, p2, p4}, Lcom/tkay/basead/d/a/b$2;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/b$a;)V

    invoke-virtual {v3, p1}, Lcom/tkay/expressad/out/TemplateBannerView;->setBannerAdListener(Lcom/tkay/expressad/out/b;)V

    .line 2291
    iget-object p1, p0, Lcom/tkay/basead/d/a/b;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2292
    invoke-virtual {v3, p3}, Lcom/tkay/expressad/out/TemplateBannerView;->load(Lcom/tkay/expressad/foundation/d/d;)V

    return-void

    .line 107
    :cond_e
    iget v0, p2, Lcom/tkay/core/common/f/i;->j:I

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "4"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_f

    .line 3118
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v7, Lcom/tkay/basead/d/a/b$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-object v4, p2

    move-object v5, p3

    move-object v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/basead/d/a/b$1;-><init>(Lcom/tkay/basead/d/a/b;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 112
    :cond_f
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/d/a/b;->d(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V

    return-void
.end method
