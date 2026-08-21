.class public Lcom/tkay/expressad/videocommon/b/c;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "DownLoadManager"

.field private static b:Lcom/tkay/expressad/videocommon/b/c;


# instance fields
.field private c:Ljava/util/concurrent/ThreadPoolExecutor;

.field private d:Z

.field private e:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/n;",
            ">;"
        }
    .end annotation
.end field

.field private f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;>;>;"
        }
    .end annotation
.end field

.field private g:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;>;"
        }
    .end annotation
.end field

.field private h:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 9

    .line 42
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 38
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/c;->d:Z

    .line 40
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    .line 44
    new-instance v0, Ljava/util/concurrent/ThreadPoolExecutor;

    sget-object v6, Ljava/util/concurrent/TimeUnit;->SECONDS:Ljava/util/concurrent/TimeUnit;

    new-instance v7, Ljava/util/concurrent/LinkedBlockingDeque;

    invoke-direct {v7}, Ljava/util/concurrent/LinkedBlockingDeque;-><init>()V

    new-instance v8, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;

    invoke-direct {v8}, Ljava/util/concurrent/ThreadPoolExecutor$DiscardPolicy;-><init>()V

    const/4 v2, 0x5

    const/16 v3, 0xf

    const-wide/16 v4, 0xf

    move-object v1, v0

    invoke-direct/range {v1 .. v8}, Ljava/util/concurrent/ThreadPoolExecutor;-><init>(IIJLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/BlockingQueue;Ljava/util/concurrent/RejectedExecutionHandler;)V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->c:Ljava/util/concurrent/ThreadPoolExecutor;

    const/4 v1, 0x1

    .line 45
    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->allowCoreThreadTimeOut(Z)V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/b/c;
    .locals 2

    .line 50
    sget-object v0, Lcom/tkay/expressad/videocommon/b/c;->b:Lcom/tkay/expressad/videocommon/b/c;

    if-nez v0, :cond_1

    .line 51
    const-class v0, Lcom/tkay/expressad/videocommon/b/c;

    monitor-enter v0

    .line 52
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/videocommon/b/c;->b:Lcom/tkay/expressad/videocommon/b/c;

    if-nez v1, :cond_0

    .line 53
    new-instance v1, Lcom/tkay/expressad/videocommon/b/c;

    invoke-direct {v1}, Lcom/tkay/expressad/videocommon/b/c;-><init>()V

    sput-object v1, Lcom/tkay/expressad/videocommon/b/c;->b:Lcom/tkay/expressad/videocommon/b/c;

    .line 55
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 57
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/videocommon/b/c;->b:Lcom/tkay/expressad/videocommon/b/c;

    return-object v0
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;
    .locals 2

    .line 596
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    if-nez p2, :cond_0

    goto :goto_3

    .line 600
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 601
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/n;

    const/16 v0, 0x5e

    if-eq p3, v0, :cond_2

    const/16 v0, 0x11f

    if-ne p3, v0, :cond_1

    goto :goto_0

    .line 608
    :cond_1
    invoke-virtual {p1, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/d/b;)V

    goto :goto_1

    .line 606
    :cond_2
    :goto_0
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/d/b;)V

    .line 610
    :goto_1
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/foundation/d/c;)V

    goto :goto_2

    .line 612
    :cond_3
    new-instance v0, Lcom/tkay/expressad/videocommon/b/n;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/c;->c:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-direct {v0, p2, v1, p1, p3}, Lcom/tkay/expressad/videocommon/b/n;-><init>(Lcom/tkay/expressad/foundation/d/c;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V

    if-eqz p4, :cond_4

    .line 614
    invoke-virtual {v0, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/d/b;)V

    .line 616
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-object p1, v0

    :goto_2
    return-object p1

    :cond_5
    :goto_3
    const/4 p1, 0x0

    return-object p1
.end method

.method private static a(Lcom/tkay/expressad/videocommon/b/n;Ljava/lang/String;)V
    .locals 3

    const/4 v0, 0x2

    .line 758
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v1

    .line 759
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    .line 758
    invoke-virtual {v1, v2, p1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v1

    if-nez v1, :cond_0

    return-void

    .line 763
    :cond_0
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->F()I

    move-result v1

    if-ne v1, v0, :cond_1

    .line 764
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/n;->c()V

    return-void

    .line 766
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/n;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v1

    .line 770
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 774
    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 775
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 776
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v1

    if-nez v1, :cond_2

    .line 778
    invoke-static {p1}, Lcom/tkay/expressad/d/c;->d(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v1

    .line 780
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/d/c;->m()I

    move-result p1

    if-ne p1, v0, :cond_3

    .line 781
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/n;->c()V

    return-void

    .line 783
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/expressad/videocommon/b/n;->a()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :cond_4
    return-void

    :catch_1
    move-exception p0

    .line 787
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private b(ILjava/lang/String;Z)Lcom/tkay/expressad/videocommon/b/a;
    .locals 0

    .line 124
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 126
    invoke-virtual {p2, p1, p3}, Lcom/tkay/expressad/videocommon/b/n;->b(IZ)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 303
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 306
    :try_start_0
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/n;->b(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method private d()V
    .locals 2

    .line 645
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    .line 646
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 647
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 648
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 649
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 650
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/n;

    if-eqz v1, :cond_0

    .line 652
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/n;->b()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private e(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;>;"
        }
    .end annotation

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 796
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 798
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/n;->d()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;
    .locals 0

    .line 67
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 69
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;ILcom/tkay/expressad/videocommon/d/b;)Lcom/tkay/expressad/videocommon/b/n;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;I",
            "Lcom/tkay/expressad/videocommon/d/b;",
            ")",
            "Lcom/tkay/expressad/videocommon/b/n;"
        }
    .end annotation

    .line 568
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    if-eqz p2, :cond_5

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_3

    .line 572
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 573
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/n;

    const/16 v0, 0x5e

    if-eq p3, v0, :cond_2

    const/16 v0, 0x11f

    if-ne p3, v0, :cond_1

    goto :goto_0

    .line 581
    :cond_1
    invoke-virtual {p1, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/d/b;)V

    goto :goto_1

    :cond_2
    :goto_0
    const/4 p3, 0x0

    .line 579
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/d/b;)V

    .line 583
    :goto_1
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/videocommon/b/n;->a(Ljava/util/List;)V

    goto :goto_2

    .line 585
    :cond_3
    new-instance v0, Lcom/tkay/expressad/videocommon/b/n;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/c;->c:Ljava/util/concurrent/ThreadPoolExecutor;

    invoke-direct {v0, p2, v1, p1, p3}, Lcom/tkay/expressad/videocommon/b/n;-><init>(Ljava/util/List;Ljava/util/concurrent/ExecutorService;Ljava/lang/String;I)V

    if-eqz p4, :cond_4

    .line 587
    invoke-virtual {v0, p4}, Lcom/tkay/expressad/videocommon/b/n;->a(Lcom/tkay/expressad/videocommon/d/b;)V

    .line 589
    :cond_4
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-object p1, v0

    :goto_2
    return-object p1

    :cond_5
    :goto_3
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 718
    iget-boolean p1, p0, Lcom/tkay/expressad/videocommon/b/c;->d:Z

    if-eqz p1, :cond_1

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 722
    iput-boolean p1, p0, Lcom/tkay/expressad/videocommon/b/c;->d:Z

    .line 725
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_2

    .line 726
    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    .line 727
    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 728
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 729
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 730
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/b/n;

    .line 731
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/n;->a()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final a(ILjava/lang/String;Z)Z
    .locals 1

    const/4 v0, 0x0

    .line 157
    :try_start_0
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 159
    invoke-virtual {p2, p1, p3}, Lcom/tkay/expressad/videocommon/b/n;->a(IZ)Lcom/tkay/expressad/videocommon/b/a;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 168
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_1

    .line 169
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return v0
.end method

.method public final a(Ljava/lang/String;ZIZILjava/util/List;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "ZIZI",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)Z"
        }
    .end annotation

    .line 176
    invoke-virtual/range {p0 .. p6}, Lcom/tkay/expressad/videocommon/b/c;->b(Ljava/lang/String;ZIZILjava/util/List;)Z

    move-result p1

    return p1
.end method

.method public final b(Ljava/lang/String;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/videocommon/b/a;",
            ">;"
        }
    .end annotation

    .line 110
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final b()V
    .locals 2

    const/4 v0, 0x0

    .line 625
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/c;->d:Z

    .line 626
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_1

    .line 628
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 630
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 631
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 632
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 633
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/videocommon/b/n;

    if-eqz v1, :cond_0

    .line 635
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/b/n;->c()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final b(Ljava/lang/String;ZIZILjava/util/List;)Z
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "ZIZI",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)Z"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p6, :cond_17

    .line 184
    :try_start_0
    invoke-interface {p6}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_b

    .line 187
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object v1

    if-eqz v1, :cond_17

    .line 189
    invoke-virtual {v1, p2, p6}, Lcom/tkay/expressad/videocommon/b/n;->a(ZLjava/util/List;)Ljava/util/List;

    move-result-object p2

    const/4 v1, 0x1

    if-eqz p2, :cond_f

    .line 190
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_1

    goto/16 :goto_5

    :cond_1
    if-eqz p4, :cond_b

    .line 194
    invoke-interface {p6}, Ljava/util/List;->size()I

    move-result p4

    if-lez p4, :cond_2

    .line 195
    invoke-interface {p6, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p4, :cond_2

    .line 197
    invoke-virtual {p4}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    if-eqz v2, :cond_2

    invoke-virtual {p4}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_2

    .line 198
    invoke-virtual {p4}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object p4

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {p4, v2}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz p4, :cond_2

    move p4, v1

    goto :goto_0

    :cond_2
    move p4, v0

    :goto_0
    if-nez p5, :cond_7

    .line 207
    :try_start_1
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    .line 209
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p5

    :cond_3
    invoke-interface {p5}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/b/a;

    .line 210
    invoke-interface {p6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_4
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    .line 211
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v4

    if-eqz v4, :cond_4

    if-eqz v3, :cond_4

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_4

    .line 212
    invoke-interface {p3, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 216
    :cond_5
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p3

    if-lez p3, :cond_6

    goto/16 :goto_4

    :cond_6
    move v0, p4

    goto/16 :goto_5

    .line 220
    :cond_7
    new-instance p5, Ljava/util/ArrayList;

    invoke-direct {p5}, Ljava/util/ArrayList;-><init>()V

    .line 222
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_8
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_a

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/videocommon/b/a;

    .line 223
    invoke-interface {p6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_9
    :goto_2
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_8

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_9

    .line 224
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v6

    if-eqz v6, :cond_9

    if-eqz v5, :cond_9

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_9

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_9

    .line 225
    invoke-interface {p5, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 230
    :cond_a
    invoke-interface {p5}, Ljava/util/List;->size()I

    move-result p4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-lt p4, p3, :cond_f

    goto :goto_4

    :catch_0
    move-exception p1

    move v0, p4

    goto/16 :goto_a

    .line 235
    :cond_b
    :try_start_2
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    .line 237
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p4

    :cond_c
    invoke-interface {p4}, Ljava/util/Iterator;->hasNext()Z

    move-result p5

    if-eqz p5, :cond_e

    invoke-interface {p4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p5

    check-cast p5, Lcom/tkay/expressad/videocommon/b/a;

    .line 238
    invoke-interface {p6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_d
    :goto_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_c

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    if-eqz p5, :cond_d

    .line 239
    invoke-virtual {p5}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v4

    if-eqz v4, :cond_d

    if-eqz v3, :cond_d

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p5}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_d

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p5}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_d

    .line 240
    invoke-interface {p3, p5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 244
    :cond_e
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p3

    if-lez p3, :cond_f

    :goto_4
    move v0, v1

    :cond_f
    :goto_5
    if-eqz v0, :cond_17

    .line 250
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    if-nez p3, :cond_10

    .line 251
    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    goto :goto_6

    .line 253
    :cond_10
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_11

    .line 254
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 258
    :cond_11
    :goto_6
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    if-nez p3, :cond_12

    .line 259
    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    goto :goto_7

    .line 261
    :cond_12
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_13

    .line 262
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 266
    :cond_13
    :goto_7
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    if-nez p3, :cond_14

    .line 267
    new-instance p3, Ljava/util/HashMap;

    invoke-direct {p3}, Ljava/util/HashMap;-><init>()V

    iput-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    goto :goto_8

    .line 269
    :cond_14
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_15

    .line 270
    iget-object p3, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    invoke-interface {p3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_15
    :goto_8
    if-eqz p2, :cond_17

    .line 274
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p3

    if-lez p3, :cond_17

    .line 275
    new-instance p3, Ljava/util/ArrayList;

    invoke-direct {p3}, Ljava/util/ArrayList;-><init>()V

    .line 276
    new-instance p4, Ljava/util/ArrayList;

    invoke-direct {p4}, Ljava/util/ArrayList;-><init>()V

    .line 277
    new-instance p5, Ljava/util/ArrayList;

    invoke-direct {p5}, Ljava/util/ArrayList;-><init>()V

    .line 278
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :goto_9
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result p6

    if-eqz p6, :cond_16

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p6

    check-cast p6, Lcom/tkay/expressad/videocommon/b/a;

    .line 279
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    .line 280
    invoke-virtual {p6}, Lcom/tkay/expressad/videocommon/b/a;->n()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v2

    .line 281
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->B()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 282
    invoke-virtual {v1, v3, p6}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 283
    invoke-interface {p3, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 284
    invoke-interface {p4, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 285
    invoke-interface {p5, p6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_9

    .line 287
    :cond_16
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/c;->f:Ljava/util/Map;

    invoke-interface {p2, p1, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 288
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/c;->g:Ljava/util/Map;

    invoke-interface {p2, p1, p4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 289
    iget-object p2, p0, Lcom/tkay/expressad/videocommon/b/c;->h:Ljava/util/Map;

    invoke-interface {p2, p1, p5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_b

    :catch_1
    move-exception p1

    .line 295
    :goto_a
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_17

    .line 296
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_17
    :goto_b
    return v0
.end method

.method public final c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_0

    .line 140
    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/b/n;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return-object p1
.end method

.method public final c()V
    .locals 6

    .line 740
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_5

    .line 742
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    .line 744
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 745
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 746
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 747
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/videocommon/b/n;

    .line 748
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v3, 0x2

    .line 1758
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v4

    .line 1759
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v5

    .line 1758
    invoke-virtual {v4, v5, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v4

    if-nez v4, :cond_1

    goto :goto_0

    .line 1763
    :cond_1
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/e/d;->F()I

    move-result v4

    if-ne v4, v3, :cond_2

    .line 1764
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/b/n;->c()V

    goto :goto_0

    .line 1766
    :cond_2
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/b/n;->a()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    .line 1770
    invoke-virtual {v4}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 1774
    :try_start_1
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 1775
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 1776
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v4

    if-nez v4, :cond_3

    .line 1778
    invoke-static {v1}, Lcom/tkay/expressad/d/c;->d(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v4

    .line 1780
    :cond_3
    invoke-virtual {v4}, Lcom/tkay/expressad/d/c;->m()I

    move-result v1

    if-ne v1, v3, :cond_4

    .line 1781
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/b/n;->c()V

    goto :goto_0

    .line 1783
    :cond_4
    invoke-virtual {v2}, Lcom/tkay/expressad/videocommon/b/n;->a()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v1

    .line 1787
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    goto :goto_0

    :cond_5
    return-void
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 553
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/b/n;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 555
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/b/n;->a()V

    :cond_0
    return-void
.end method
