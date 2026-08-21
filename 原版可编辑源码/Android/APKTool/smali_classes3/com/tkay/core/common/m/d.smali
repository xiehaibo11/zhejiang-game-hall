.class public Lcom/tkay/core/common/m/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/m/d$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field b:Ljava/lang/String;

.field c:Lcom/tkay/core/common/f/aj;

.field d:Lcom/tkay/core/common/f/d;

.field e:Ljava/lang/String;

.field f:I

.field g:Lcom/tkay/core/api/TYBaseAdAdapter;

.field h:Lcom/tkay/core/common/m/b;

.field i:Z

.field j:Z

.field k:J

.field l:J

.field m:Ljava/lang/Runnable;

.field n:Ljava/lang/Runnable;

.field o:Lcom/tkay/core/common/m/c;

.field p:Ljava/lang/Boolean;

.field q:I

.field r:Ljava/lang/String;

.field s:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 53
    const-class v0, Lcom/tkay/core/common/m/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/common/m/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/f/aj;I)V
    .locals 0

    .line 82
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 83
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    .line 84
    iput p2, p0, Lcom/tkay/core/common/m/d;->q:I

    .line 86
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    .line 87
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/m/d;)Landroid/content/Context;
    .locals 3

    .line 8404
    iget-object p0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object p0, p0, Lcom/tkay/core/common/m/c;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;

    .line 8406
    instance-of v0, p0, Landroid/app/Activity;

    if-nez v0, :cond_0

    .line 8407
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object p0

    .line 8409
    :cond_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 8410
    sget-object v0, Lcom/tkay/core/common/m/d;->a:Ljava/lang/String;

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "requestContext = "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object p0
.end method

.method private a(J)V
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    return-void

    .line 229
    :cond_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->p()Ljava/lang/Runnable;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    .line 231
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private a(Landroid/content/Context;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 3

    .line 323
    invoke-static {}, Lcom/tkay/core/c/a;->an()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 324
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    .line 327
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/p;->c(I)Z

    move-result v1

    if-nez v1, :cond_0

    .line 328
    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->c()Z

    move-result v1

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v2, v2, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/core/api/TYSDK;->isEUTraffic(Landroid/content/Context;)Z

    move-result v2

    invoke-virtual {p3, p1, v1, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->setUserDataConsent(Landroid/content/Context;ZZ)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 329
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/p;->b(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 332
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 340
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 2

    .line 261
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->k()Ljava/util/Map;

    move-result-object v0

    .line 263
    new-instance v1, Lcom/tkay/core/common/m/d$1;

    invoke-direct {v1, p0, p1, p2, v0}, Lcom/tkay/core/common/m/d$1;-><init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Ljava/util/Map;)V

    .line 315
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object p1, p1, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->Y()I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    const-string p2, "2"

    invoke-static {p1, p2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 318
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static varargs a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;[Lcom/tkay/core/api/BaseAd;)V
    .locals 1

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 593
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object p0

    if-eqz p3, :cond_0

    .line 594
    array-length v0, p3

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 595
    aget-object p3, p3, v0

    .line 596
    invoke-virtual {p3}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 597
    invoke-virtual {p3}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object p0

    .line 600
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 602
    invoke-virtual {p1, p0}, Lcom/tkay/core/common/f/l;->a(Ljava/util/Map;)V

    .line 603
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/d;)V

    :cond_1
    return-void
.end method

.method private varargs declared-synchronized a(Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V
    .locals 8

    monitor-enter p0

    .line 558
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->n()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 559
    monitor-exit p0

    return-void

    .line 562
    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    const-wide/16 v1, 0x0

    .line 565
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v3

    const/4 v4, 0x2

    if-ne v3, v4, :cond_1

    .line 566
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->k()J

    move-result-wide v1

    .line 568
    :cond_1
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    iget-wide v6, p0, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v4, v6

    add-long/2addr v4, v1

    invoke-virtual {v3, v4, v5}, Lcom/tkay/core/common/f/d;->d(J)V

    .line 571
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->i()V

    .line 572
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->j()V

    const/4 v1, 0x0

    .line 2683
    iput-object v1, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 576
    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    iput-object v1, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    .line 578
    iget-boolean v1, p0, Lcom/tkay/core/common/m/d;->i:Z

    if-eqz v1, :cond_2

    .line 579
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    const/4 v2, 0x1

    .line 3603
    iput v2, v1, Lcom/tkay/core/common/f/d;->r:I

    .line 582
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    if-eqz p1, :cond_4

    if-eqz v0, :cond_4

    .line 4593
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v2

    if-eqz p2, :cond_3

    .line 4594
    array-length v3, p2

    if-lez v3, :cond_3

    const/4 v3, 0x0

    .line 4595
    aget-object v3, p2, v3

    .line 4596
    invoke-virtual {v3}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 4597
    invoke-virtual {v3}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v2

    .line 4600
    :cond_3
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 4602
    invoke-virtual {v0, v2}, Lcom/tkay/core/common/f/l;->a(Ljava/util/Map;)V

    .line 4603
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/d;)V

    .line 584
    :cond_4
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_5

    .line 586
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/tkay/core/common/m/b;->a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 588
    :cond_5
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/core/common/m/d;Landroid/content/Context;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 2

    .line 9323
    invoke-static {}, Lcom/tkay/core/c/a;->an()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 9324
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v0

    .line 9327
    :try_start_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/p;->c(I)Z

    move-result v1

    if-nez v1, :cond_0

    .line 9328
    invoke-virtual {v0}, Lcom/tkay/core/common/b/p;->c()Z

    move-result v1

    iget-object p0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object p0, p0, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    invoke-static {p0}, Lcom/tkay/core/api/TYSDK;->isEUTraffic(Landroid/content/Context;)Z

    move-result p0

    invoke-virtual {p3, p1, v1, p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->setUserDataConsent(Landroid/content/Context;ZZ)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 9329
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/p;->b(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    .line 9332
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 0

    .line 10340
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V
    .locals 0

    .line 51
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/core/common/m/d;)Ljava/util/Map;
    .locals 1

    .line 9393
    iget-object p0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object p0, p0, Lcom/tkay/core/common/m/c;->f:Ljava/util/Map;

    if-nez p0, :cond_0

    .line 9395
    new-instance p0, Ljava/util/HashMap;

    const/4 v0, 0x2

    invoke-direct {p0, v0}, Ljava/util/HashMap;-><init>(I)V

    :cond_0
    return-object p0
.end method

.method private b(J)V
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    return-void

    .line 239
    :cond_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->p()Ljava/lang/Runnable;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    .line 241
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method private declared-synchronized b(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 609
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->n()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 610
    monitor-exit p0

    return-void

    .line 613
    :cond_0
    :try_start_1
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->i()V

    .line 614
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->j()V

    const/4 v0, 0x0

    .line 4683
    iput-object v0, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 618
    sget-object v0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    .line 620
    iget-boolean v0, p0, Lcom/tkay/core/common/m/d;->i:Z

    if-eqz v0, :cond_1

    .line 621
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    const/4 v1, 0x1

    .line 5603
    iput v1, v0, Lcom/tkay/core/common/f/d;->r:I

    .line 624
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_2

    .line 626
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    invoke-interface {v0, v1, p1, p2}, Lcom/tkay/core/common/m/b;->a(Ljava/lang/String;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 629
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic c(Lcom/tkay/core/common/m/d;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->o()V

    return-void
.end method

.method static synthetic d(Lcom/tkay/core/common/m/d;)V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->q()V

    return-void
.end method

.method private i()V
    .locals 2

    .line 245
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 246
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 247
    iput-object v0, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    :cond_0
    return-void
.end method

.method private j()V
    .locals 2

    .line 252
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 253
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    const/4 v0, 0x0

    .line 254
    iput-object v0, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    :cond_0
    return-void
.end method

.method private k()Ljava/util/Map;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 345
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    .line 346
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v1, v1, Lcom/tkay/core/common/m/c;->c:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 349
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    return-object v0

    .line 352
    :cond_0
    iget-object v2, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v0, v2, v1, v3}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v2

    .line 354
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x0

    const/4 v6, 0x1

    if-eq v3, v4, :cond_2

    const/4 v4, 0x6

    if-eq v3, v4, :cond_1

    goto :goto_1

    .line 356
    :cond_1
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v3, v3, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    iget-object v4, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Y()I

    move-result v7

    iget v8, p0, Lcom/tkay/core/common/m/d;->f:I

    invoke-static {v3, v1, v4, v7, v8}, Lcom/tkay/core/common/l/g;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;II)Lorg/json/JSONObject;

    move-result-object v1

    .line 357
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->aw()I

    move-result v0

    if-ne v0, v6, :cond_5

    .line 358
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tp_info"

    invoke-interface {v2, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 363
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v1, v1, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 365
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->j()I

    move-result v1

    if-ne v1, v6, :cond_3

    move v1, v6

    goto :goto_0

    :cond_3
    move v1, v5

    :goto_0
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const-string v3, "mediation_switch"

    invoke-interface {v2, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 367
    :cond_4
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->a()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "admob_show_with_pay_info"

    invoke-interface {v2, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 371
    :cond_5
    :goto_1
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-static {v0}, Lcom/tkay/core/common/l/t;->a(Lcom/tkay/core/common/f/aj;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 372
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->ar()I

    move-result v0

    if-ne v0, v6, :cond_8

    .line 375
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 376
    iget v5, v0, Lcom/tkay/core/common/f/ad;->c:I

    .line 377
    :cond_6
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "tkay_adload_seq"

    invoke-interface {v2, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 380
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 381
    monitor-enter v0

    .line 382
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    invoke-virtual {v1, v3, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    .line 383
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_7

    const-string v3, "tkay_content"

    .line 384
    invoke-interface {v2, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 386
    :cond_7
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    :cond_8
    :goto_2
    return-object v2
.end method

.method private l()Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 393
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->f:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 395
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    :cond_0
    return-object v0
.end method

.method private m()Landroid/content/Context;
    .locals 4

    .line 404
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    .line 406
    instance-of v1, v0, Landroid/app/Activity;

    if-nez v1, :cond_0

    .line 407
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v0

    .line 409
    :cond_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 410
    sget-object v1, Lcom/tkay/core/common/m/d;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "requestContext = "

    invoke-virtual {v3, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v0
.end method

.method private n()Z
    .locals 2

    .line 435
    iget-boolean v0, p0, Lcom/tkay/core/common/m/d;->s:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    .line 438
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/core/common/m/d;->j:Z

    if-eqz v0, :cond_1

    return v1

    .line 441
    :cond_1
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->s()Z

    move-result v0

    if-eqz v0, :cond_2

    return v1

    :cond_2
    const/4 v0, 0x0

    return v0
.end method

.method private declared-synchronized o()V
    .locals 3

    monitor-enter p0

    .line 448
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->n()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 449
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 452
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/common/m/d;->i:Z

    .line 454
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "network short timeout: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 456
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_1

    .line 457
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/common/m/b;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 459
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private p()Ljava/lang/Runnable;
    .locals 1

    .line 462
    new-instance v0, Lcom/tkay/core/common/m/d$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/m/d$2;-><init>(Lcom/tkay/core/common/m/d;)V

    return-object v0
.end method

.method private declared-synchronized q()V
    .locals 4

    monitor-enter p0

    .line 546
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->i()V

    .line 548
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/core/common/m/d;->l:J

    .line 551
    iget-object v2, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    if-eqz v2, :cond_0

    .line 552
    iget-object v2, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2, v0, v1}, Lcom/tkay/core/common/f/d;->c(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 555
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private r()V
    .locals 1

    const/4 v0, 0x0

    .line 683
    iput-object v0, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    return-void
.end method

.method private s()Z
    .locals 1

    .line 692
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private t()J
    .locals 2

    .line 704
    iget-wide v0, p0, Lcom/tkay/core/common/m/d;->k:J

    return-wide v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 91
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final declared-synchronized a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V
    .locals 4

    monitor-enter p0

    .line 633
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->n()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 634
    monitor-exit p0

    return-void

    .line 637
    :cond_0
    :try_start_1
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->i()V

    .line 638
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->j()V

    if-eqz p1, :cond_1

    .line 641
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/m/d$3;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/m/d$3;-><init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    :cond_1
    const/4 p1, 0x0

    .line 5683
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 657
    sget-object p1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    iput-object p1, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    .line 659
    iget-boolean p1, p0, Lcom/tkay/core/common/m/d;->j:Z

    if-eqz p1, :cond_2

    .line 660
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    const/4 v0, 0x2

    .line 6603
    iput v0, p1, Lcom/tkay/core/common/f/d;->r:I

    goto :goto_0

    .line 661
    :cond_2
    iget-boolean p1, p0, Lcom/tkay/core/common/m/d;->i:Z

    if-eqz p1, :cond_3

    .line 662
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    const/4 v0, 0x1

    .line 7603
    iput v0, p1, Lcom/tkay/core/common/f/d;->r:I

    .line 666
    :cond_3
    :goto_0
    iget-boolean p1, p0, Lcom/tkay/core/common/m/d;->j:Z

    if-nez p1, :cond_4

    .line 668
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 669
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    invoke-virtual {p1, v2, v0, v1}, Lcom/tkay/core/common/c;->a(Ljava/lang/String;J)V

    .line 670
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->e:Ljava/lang/String;

    iget-object v3, p2, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    invoke-virtual {p1, v2, v0, v1, v3}, Lcom/tkay/core/common/c;->a(Ljava/lang/String;JLcom/tkay/core/api/AdError;)V

    .line 673
    :cond_4
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    iput-object p1, p2, Lcom/tkay/core/common/m/a;->d:Lcom/tkay/core/common/f/d;

    .line 674
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    iput-object p1, p2, Lcom/tkay/core/common/m/a;->e:Lcom/tkay/core/common/f/aj;

    .line 676
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz p1, :cond_5

    .line 677
    iget-object p1, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    iget-object v0, p0, Lcom/tkay/core/common/m/d;->r:Ljava/lang/String;

    invoke-interface {p1, v0, p2}, Lcom/tkay/core/common/m/b;->a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 679
    :cond_5
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/m/b;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    return-void
.end method

.method public final a(Lcom/tkay/core/common/m/c;)V
    .locals 1

    .line 95
    iput-object p1, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    .line 97
    iget-object v0, p1, Lcom/tkay/core/common/m/c;->d:Ljava/lang/String;

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    .line 98
    iget-object v0, p1, Lcom/tkay/core/common/m/c;->h:Lcom/tkay/core/common/f/d;

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    .line 99
    iget p1, p1, Lcom/tkay/core/common/m/c;->g:I

    iput p1, p0, Lcom/tkay/core/common/m/d;->f:I

    return-void
.end method

.method public final b()V
    .locals 11

    const/4 v0, 0x1

    .line 107
    iput-boolean v0, p0, Lcom/tkay/core/common/m/d;->s:Z

    .line 109
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    .line 110
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v1, v1, Lcom/tkay/core/common/m/c;->c:Ljava/lang/String;

    .line 111
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 112
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v2, v2, Lcom/tkay/core/common/m/c;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 115
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/m/d;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 116
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->a()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 119
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_1

    .line 120
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v2

    invoke-interface {v0, v2}, Lcom/tkay/core/common/m/b;->b(Lcom/tkay/core/common/f/d;)V

    .line 123
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-direct {p0, v0, v1}, Lcom/tkay/core/common/m/d;->b(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    return-void

    .line 131
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    const/4 v2, 0x0

    const/4 v3, 0x0

    if-eqz v1, :cond_4

    .line 133
    iget-boolean v4, v1, Lcom/tkay/core/common/f/l;->s:Z

    if-eqz v4, :cond_4

    .line 135
    iget-object v4, v1, Lcom/tkay/core/common/f/l;->r:Lcom/tkay/core/b/c/a;

    if-eqz v4, :cond_3

    .line 137
    invoke-virtual {v4}, Lcom/tkay/core/b/c/a;->a()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    .line 138
    invoke-virtual {v4}, Lcom/tkay/core/b/c/a;->b()Lcom/tkay/core/api/BaseAd;

    move-result-object v4

    goto :goto_0

    :cond_3
    move-object v4, v3

    move-object v5, v4

    .line 144
    :goto_0
    iput-object v3, v1, Lcom/tkay/core/common/f/l;->r:Lcom/tkay/core/b/c/a;

    move v1, v0

    goto :goto_1

    :cond_4
    move v1, v2

    move-object v4, v3

    move-object v5, v4

    :goto_1
    if-nez v5, :cond_5

    if-nez v1, :cond_5

    .line 155
    iget-object v5, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-static {v5}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    :cond_5
    if-nez v5, :cond_a

    .line 159
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v0, :cond_9

    .line 161
    new-instance v0, Lcom/tkay/core/common/m/a;

    invoke-direct {v0}, Lcom/tkay/core/common/m/a;-><init>()V

    .line 162
    iput v2, v0, Lcom/tkay/core/common/m/a;->a:I

    if-eqz v1, :cond_6

    .line 163
    iget-object v2, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->k()J

    move-result-wide v4

    goto :goto_2

    :cond_6
    const-wide/16 v4, 0x0

    :goto_2
    iput-wide v4, v0, Lcom/tkay/core/common/m/a;->c:J

    if-eqz v1, :cond_7

    const-string v2, "2012"

    goto :goto_3

    :cond_7
    const-string v2, "2002"

    :goto_3
    const-string v4, ""

    if-eqz v1, :cond_8

    move-object v1, v4

    goto :goto_4

    .line 165
    :cond_8
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->h()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " does not exist!"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 164
    :goto_4
    invoke-static {v2, v4, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 168
    invoke-virtual {p0, v3, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V

    :cond_9
    return-void

    .line 174
    :cond_a
    :try_start_0
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v3

    invoke-virtual {v5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/tkay/core/common/l/d;->a(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 179
    :catchall_0
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    iget-object v6, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-static {v5, v3, v6}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/d;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    .line 182
    iget-object v6, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v6, :cond_b

    .line 183
    invoke-interface {v6, v3}, Lcom/tkay/core/common/m/b;->a(Lcom/tkay/core/common/f/d;)V

    .line 187
    :cond_b
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->B()J

    move-result-wide v6

    const-wide/16 v8, -0x1

    cmp-long v3, v6, v8

    if-eqz v3, :cond_c

    .line 1239
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->p()Ljava/lang/Runnable;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    .line 1241
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    iget-object v10, p0, Lcom/tkay/core/common/m/d;->m:Ljava/lang/Runnable;

    invoke-virtual {v3, v10, v6, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 188
    :cond_c
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->q()J

    move-result-wide v6

    cmp-long v3, v6, v8

    if-eqz v3, :cond_d

    .line 2229
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->p()Ljava/lang/Runnable;

    move-result-object v3

    iput-object v3, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    .line 2231
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    iget-object v8, p0, Lcom/tkay/core/common/m/d;->n:Ljava/lang/Runnable;

    invoke-virtual {v3, v8, v6, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 192
    :cond_d
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iput-wide v6, p0, Lcom/tkay/core/common/m/d;->k:J

    .line 195
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v3, v3, Lcom/tkay/core/common/m/c;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {v3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/Context;

    if-eqz v3, :cond_e

    .line 196
    instance-of v6, v3, Landroid/app/Activity;

    if-eqz v6, :cond_e

    .line 197
    check-cast v3, Landroid/app/Activity;

    invoke-virtual {v5, v3}, Lcom/tkay/core/api/TYBaseAdAdapter;->refreshActivityContext(Landroid/app/Activity;)V

    :cond_e
    if-eqz v1, :cond_11

    .line 208
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->h:Lcom/tkay/core/common/m/b;

    if-eqz v1, :cond_f

    .line 209
    iget-object v3, p0, Lcom/tkay/core/common/m/d;->d:Lcom/tkay/core/common/f/d;

    invoke-interface {v1, v3}, Lcom/tkay/core/common/m/b;->b(Lcom/tkay/core/common/f/d;)V

    :cond_f
    if-eqz v4, :cond_10

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    aput-object v4, v0, v2

    .line 213
    invoke-direct {p0, v5, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V

    return-void

    :cond_10
    new-array v0, v2, [Lcom/tkay/core/api/BaseAd;

    .line 215
    invoke-direct {p0, v5, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;[Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 221
    :cond_11
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    .line 2261
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->k()Ljava/util/Map;

    move-result-object v1

    .line 2263
    new-instance v2, Lcom/tkay/core/common/m/d$1;

    invoke-direct {v2, p0, v5, v0, v1}, Lcom/tkay/core/common/m/d$1;-><init>(Lcom/tkay/core/common/m/d;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;Ljava/util/Map;)V

    .line 2315
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->o:Lcom/tkay/core/common/m/c;

    iget-object v0, v0, Lcom/tkay/core/common/m/c;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Y()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "2"

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 2316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 2318
    :cond_12
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final declared-synchronized c()V
    .locals 5

    monitor-enter p0

    .line 418
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->n()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 419
    monitor-exit p0

    return-void

    .line 422
    :cond_0
    :try_start_1
    sget-object v0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    iput-object v0, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    const/4 v0, 0x1

    .line 423
    iput-boolean v0, p0, Lcom/tkay/core/common/m/d;->j:Z

    .line 426
    new-instance v0, Lcom/tkay/core/common/m/a;

    invoke-direct {v0}, Lcom/tkay/core/common/m/a;-><init>()V

    const/4 v1, 0x0

    .line 427
    iput v1, v0, Lcom/tkay/core/common/m/a;->a:I

    .line 428
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/tkay/core/common/m/d;->k:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/tkay/core/common/m/a;->c:J

    const-string v1, "2001"

    const-string v2, ""

    const-string v3, ""

    .line 429
    invoke-static {v1, v2, v3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    .line 431
    iget-object v1, p0, Lcom/tkay/core/common/m/d;->g:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {p0, v1, v0}, Lcom/tkay/core/common/m/d;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/m/a;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 432
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final d()Ljava/lang/Boolean;
    .locals 1

    .line 688
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->p:Ljava/lang/Boolean;

    return-object v0
.end method

.method public final e()Z
    .locals 1

    .line 696
    invoke-direct {p0}, Lcom/tkay/core/common/m/d;->s()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/tkay/core/common/m/d;->i:Z

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public final f()I
    .locals 1

    .line 700
    iget v0, p0, Lcom/tkay/core/common/m/d;->q:I

    return v0
.end method

.method public final g()Z
    .locals 1

    .line 708
    iget-boolean v0, p0, Lcom/tkay/core/common/m/d;->i:Z

    return v0
.end method

.method public final h()Lcom/tkay/core/common/f/aj;
    .locals 1

    .line 712
    iget-object v0, p0, Lcom/tkay/core/common/m/d;->c:Lcom/tkay/core/common/f/aj;

    return-object v0
.end method
