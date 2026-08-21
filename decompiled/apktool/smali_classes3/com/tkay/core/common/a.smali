.class public Lcom/tkay/core/common/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/common/a;


# instance fields
.field private final b:Ljava/lang/String;

.field private c:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/ak;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 56
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a;->b:Ljava/lang/String;

    .line 72
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/a;
    .locals 2

    .line 62
    sget-object v0, Lcom/tkay/core/common/a;->a:Lcom/tkay/core/common/a;

    if-nez v0, :cond_1

    .line 63
    const-class v0, Lcom/tkay/core/common/a;

    monitor-enter v0

    .line 64
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/a;->a:Lcom/tkay/core/common/a;

    if-nez v1, :cond_0

    .line 65
    new-instance v1, Lcom/tkay/core/common/a;

    invoke-direct {v1}, Lcom/tkay/core/common/a;-><init>()V

    sput-object v1, Lcom/tkay/core/common/a;->a:Lcom/tkay/core/common/a;

    .line 66
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 68
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/a;->a:Lcom/tkay/core/common/a;

    return-object v0
.end method

.method private a(Ljava/lang/String;Z)Ljava/util/List;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/a;",
            ">;"
        }
    .end annotation

    .line 889
    iget-object v0, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 893
    :cond_0
    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 894
    new-instance v2, Ljava/util/ArrayList;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(I)V

    move-object v3, v1

    .line 897
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 898
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 899
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/ak;

    if-eqz v4, :cond_2

    .line 900
    invoke-virtual {v4}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v4

    goto :goto_1

    :cond_2
    move-object v4, v1

    :goto_1
    const/4 v5, 0x0

    if-eqz v4, :cond_5

    .line 904
    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->j()Z

    move-result v6

    if-eqz v6, :cond_5

    const/4 v5, 0x1

    if-eqz p2, :cond_3

    .line 907
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    :cond_3
    if-nez v3, :cond_4

    goto :goto_2

    .line 913
    :cond_4
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v8

    invoke-static {v8}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v8

    cmpg-double v6, v6, v8

    if-gez v6, :cond_5

    :goto_2
    move-object v3, v4

    :cond_5
    :goto_3
    if-nez v5, :cond_1

    if-eqz v4, :cond_1

    .line 925
    invoke-static {p1, v4}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 926
    invoke-virtual {v4}, Lcom/tkay/core/common/f/a;->k()V

    goto :goto_0

    :cond_6
    if-eqz p2, :cond_7

    .line 931
    invoke-static {v2}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    goto :goto_4

    :cond_7
    if-eqz v3, :cond_8

    .line 934
    invoke-interface {v2, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_8
    :goto_4
    return-object v2
.end method

.method private static a(Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;ILjava/util/Map;)V
    .locals 14
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/api/TYBaseAdAdapter;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Lcom/tkay/core/common/f/aj;",
            "I",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    move-object v0, p0

    move-object/from16 v1, p4

    .line 585
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    move-object/from16 v4, p2

    invoke-virtual {v2, v4}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    const/4 v12, 0x1

    new-array v3, v12, [I

    const/4 v13, 0x0

    aput v13, v3, v13

    const-string v5, "ofm_tid_key"

    .line 588
    invoke-interface {v2, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    .line 590
    :try_start_0
    invoke-interface {v2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    aput v2, v3, v13
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 595
    :catchall_0
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x1

    const/4 v9, 0x0

    aget v10, v3, v13

    const-string v5, ""

    move-object v3, p1

    move-object/from16 v4, p2

    move-object/from16 v6, p3

    move-object/from16 v11, p6

    invoke-static/range {v3 .. v11}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v2

    move/from16 v3, p5

    .line 596
    invoke-static {v2, v1, v3, v12}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 597
    invoke-static {p0, v2, v1}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/d;

    const/4 v1, 0x3

    .line 4594
    iput v1, v2, Lcom/tkay/core/common/f/d;->q:I

    .line 600
    invoke-virtual {p0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 601
    invoke-virtual {p0, v13}, Lcom/tkay/core/api/TYBaseAdAdapter;->setRefresh(Z)V

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/core/common/f/a;)V
    .locals 6

    .line 536
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 538
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 540
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object p1

    .line 541
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v2

    invoke-virtual {v2, p0}, Lcom/tkay/core/b/c;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/aj;

    move-result-object p0

    .line 542
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v2

    .line 548
    new-instance v4, Lcom/tkay/core/common/f/q;

    invoke-direct {v4}, Lcom/tkay/core/common/f/q;-><init>()V

    const/4 v5, 0x1

    .line 549
    iput v5, v4, Lcom/tkay/core/common/f/q;->a:I

    .line 550
    iput-wide v2, v4, Lcom/tkay/core/common/f/q;->b:D

    .line 551
    iput-object p1, v4, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 552
    iput-object p0, v4, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 553
    iput-object v0, v4, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 555
    invoke-virtual {v1, v4, v5}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private static a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V
    .locals 2

    .line 605
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "priority"

    .line 607
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "unit_id"

    .line 608
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "nw_firm_id"

    .line 609
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "nw_ver"

    .line 610
    invoke-virtual {v0, p1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "result"

    if-eqz p5, :cond_0

    const/4 p2, 0x1

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    .line 611
    :goto_0
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const/4 p1, -0x1

    if-eq p6, p1, :cond_1

    const-string p1, "reason"

    .line 613
    invoke-virtual {v0, p1, p6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 617
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 620
    :cond_1
    :goto_1
    invoke-virtual {p0, v0}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    return-void
.end method

.method public static b(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    .line 952
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Clean own ad cache :"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|||"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 953
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_2

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    const/4 p0, 0x7

    if-eq v0, p0, :cond_2

    goto :goto_0

    .line 955
    :cond_1
    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/basead/b;->a()Lcom/tkay/core/basead/b;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result p1

    invoke-static {p0, v1, p1}, Lcom/tkay/core/basead/b;->a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/tkay/core/basead/b;->b(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    .line 961
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object p0

    .line 962
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;)V

    .line 963
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;)V

    if-eqz p0, :cond_3

    .line 965
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 966
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->b()V

    .line 967
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object p1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object p0, p0, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-virtual {p1, v0, p0}, Lcom/tkay/core/common/a/a;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/common/f/a;
    .locals 8

    .line 163
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 164
    monitor-enter v0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    .line 165
    :try_start_0
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;ZZZLjava/util/Map;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 166
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_0

    const/4 p2, 0x0

    .line 167
    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/a;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :cond_0
    const/4 p1, 0x0

    .line 169
    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 170
    monitor-exit v0

    throw p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "ZZ",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/common/f/a;"
        }
    .end annotation

    .line 175
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 176
    monitor-enter v0

    const/4 v6, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move v4, p3

    move v5, p4

    move-object v7, p5

    .line 177
    :try_start_0
    invoke-virtual/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;ZZZLjava/util/Map;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 178
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p2

    if-lez p2, :cond_0

    const/4 p2, 0x0

    .line 179
    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/a;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :cond_0
    const/4 p1, 0x0

    .line 181
    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 182
    monitor-exit v0

    throw p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;
    .locals 3

    .line 796
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x3

    if-eq v0, v2, :cond_0

    .line 797
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v2, 0x7

    if-ne v0, v2, :cond_1

    .line 798
    :cond_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 799
    invoke-virtual {v0}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    .line 803
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v0, :cond_4

    .line 805
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/ak;

    if-eqz p2, :cond_2

    .line 806
    invoke-virtual {p2}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object p2

    goto :goto_0

    :cond_2
    move-object p2, v1

    :goto_0
    if-eqz p2, :cond_3

    .line 807
    invoke-virtual {p2}, Lcom/tkay/core/common/f/a;->j()Z

    move-result v0

    if-eqz v0, :cond_3

    return-object p2

    :cond_3
    if-eqz p2, :cond_4

    .line 815
    invoke-static {p1, p2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 816
    invoke-virtual {p2}, Lcom/tkay/core/common/f/a;->k()V

    :cond_4
    :goto_1
    return-object v1
.end method

.method public final a(Ljava/lang/String;ILcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;J)Lcom/tkay/core/common/f/ak;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Lcom/tkay/core/api/TYBaseAdAdapter;",
            "Ljava/util/List<",
            "+",
            "Lcom/tkay/core/api/BaseAd;",
            ">;J)",
            "Lcom/tkay/core/common/f/ak;"
        }
    .end annotation

    .line 88
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 89
    monitor-enter v0

    .line 91
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/concurrent/ConcurrentHashMap;

    .line 92
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    .line 94
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    if-nez v1, :cond_0

    .line 96
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    .line 97
    iget-object v4, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v4, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 101
    :cond_0
    invoke-virtual {v1, v3}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/ak;

    if-nez v4, :cond_1

    .line 104
    new-instance v4, Lcom/tkay/core/common/f/ak;

    invoke-direct {v4}, Lcom/tkay/core/common/f/ak;-><init>()V

    .line 105
    iput p2, v4, Lcom/tkay/core/common/f/ak;->a:I

    .line 106
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v5

    iput-object v5, v4, Lcom/tkay/core/common/f/ak;->b:Ljava/lang/String;

    .line 107
    invoke-virtual {v1, v3, v4}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 109
    :cond_1
    iput p2, v4, Lcom/tkay/core/common/f/ak;->a:I

    .line 110
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v4, Lcom/tkay/core/common/f/ak;->b:Ljava/lang/String;

    .line 113
    :goto_0
    invoke-virtual {v4}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 115
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v3

    invoke-virtual {v3, p1}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 116
    monitor-exit v0

    return-object v4

    :cond_2
    if-eqz p4, :cond_4

    .line 119
    invoke-interface {p4}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_4

    .line 120
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 121
    invoke-interface {p4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p4

    :goto_1
    invoke-interface {p4}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {p4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/api/BaseAd;

    .line 122
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 123
    new-instance v3, Lcom/tkay/core/common/f/a;

    invoke-direct {v3}, Lcom/tkay/core/common/f/a;-><init>()V

    .line 124
    invoke-virtual {v3, p2}, Lcom/tkay/core/common/f/a;->b(I)V

    .line 125
    invoke-virtual {v3, p3}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 126
    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/api/BaseAd;)V

    .line 127
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/a;->c(J)V

    .line 128
    invoke-virtual {v3, p5, p6}, Lcom/tkay/core/common/f/a;->b(J)V

    .line 129
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/a;->a(Ljava/lang/String;)V

    .line 130
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->A()J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/a;->a(J)V

    .line 132
    invoke-interface {p1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 134
    :cond_3
    invoke-virtual {v4, p1}, Lcom/tkay/core/common/f/ak;->a(Ljava/util/List;)V

    goto :goto_2

    .line 136
    :cond_4
    new-instance p1, Lcom/tkay/core/common/f/a;

    invoke-direct {p1}, Lcom/tkay/core/common/f/a;-><init>()V

    .line 137
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/a;->b(I)V

    .line 138
    invoke-virtual {p1, p3}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 139
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {p1, v5, v6}, Lcom/tkay/core/common/f/a;->c(J)V

    .line 140
    invoke-virtual {p1, p5, p6}, Lcom/tkay/core/common/f/a;->b(J)V

    .line 141
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/f/a;->a(Ljava/lang/String;)V

    .line 142
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->A()J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/f/a;->a(J)V

    .line 144
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    .line 145
    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 146
    invoke-virtual {v4, p2}, Lcom/tkay/core/common/f/ak;->a(Ljava/util/List;)V

    .line 149
    :goto_2
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v4

    :catchall_0
    move-exception p1

    .line 152
    monitor-exit v0

    throw p1
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;ZZZLjava/util/Map;)Ljava/util/List;
    .locals 35
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "ZZZ",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/a;",
            ">;"
        }
    .end annotation

    move-object/from16 v8, p0

    move-object/from16 v0, p1

    move-object/from16 v15, p2

    .line 192
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, v15}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v18

    .line 193
    monitor-enter v18

    .line 195
    :try_start_0
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    if-eq v1, v2, :cond_0

    .line 196
    invoke-static {}, Landroid/os/Looper;->prepare()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 202
    :catchall_0
    :cond_0
    :try_start_1
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    .line 204
    new-instance v19, Lorg/json/JSONArray;

    invoke-direct/range {v19 .. v19}, Lorg/json/JSONArray;-><init>()V

    .line 205
    new-instance v10, Ljava/util/ArrayList;

    invoke-direct {v10}, Ljava/util/ArrayList;-><init>()V

    .line 207
    new-instance v11, Ljava/util/ArrayList;

    invoke-direct {v11}, Ljava/util/ArrayList;-><init>()V

    .line 208
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    invoke-virtual {v1, v15}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v14

    const/16 v20, 0x0

    if-nez v14, :cond_1

    .line 211
    monitor-exit v18

    return-object v20

    .line 214
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v1

    invoke-virtual {v1, v15}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 215
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v2

    invoke-virtual {v2, v15}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 216
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-static/range {p1 .. p1}, Lcom/tkay/core/common/l/g;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    :cond_2
    move-object v13, v2

    if-eqz v1, :cond_3

    .line 219
    invoke-interface {v11, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 222
    :cond_3
    iget-object v1, v8, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v15}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Ljava/util/concurrent/ConcurrentHashMap;

    .line 231
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v1

    const/4 v7, 0x2

    const/4 v6, 0x3

    const/4 v5, 0x1

    if-lez v1, :cond_20

    const/4 v3, 0x0

    .line 234
    :goto_0
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v1

    if-ge v3, v1, :cond_20

    .line 235
    invoke-interface {v11, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 236
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    const/16 v4, 0x23

    if-ne v1, v4, :cond_4

    .line 237
    invoke-interface {v10, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 240
    :cond_4
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->a()I

    move-result v1

    if-gez v1, :cond_5

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->a()I

    move-result v1

    move v4, v1

    goto :goto_1

    :cond_5
    move v4, v3

    .line 242
    :goto_1
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    move-result-object v1

    invoke-virtual {v1, v15, v2}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z

    move-result v1

    if-eqz v1, :cond_6

    .line 243
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v17

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v21

    const-string v22, ""

    const/16 v23, 0x0

    const/16 v24, 0x3

    move-object/from16 v1, v19

    move v2, v4

    move/from16 v32, v3

    move-object/from16 v3, v17

    move/from16 v4, v21

    move-object/from16 v5, v22

    move-object/from16 v16, v10

    move v10, v6

    move/from16 v6, v23

    move/from16 v7, v24

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    :goto_2
    move-object/from16 v33, v12

    goto/16 :goto_10

    :cond_6
    move/from16 v32, v3

    move-object/from16 v16, v10

    move v10, v6

    .line 248
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v1

    invoke-virtual {v1, v15, v2}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 249
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    const-string v6, ""

    const/4 v7, 0x0

    const/16 v17, 0x2

    move-object/from16 v1, v19

    move v2, v4

    move v4, v5

    move-object v5, v6

    move v6, v7

    move/from16 v7, v17

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    goto :goto_2

    .line 257
    :cond_7
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    if-eq v1, v10, :cond_8

    .line 258
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v1

    const/4 v3, 0x7

    if-ne v1, v3, :cond_9

    .line 259
    :cond_8
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v1

    if-eqz v1, :cond_1f

    .line 260
    invoke-virtual {v1}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v1

    if-eqz v1, :cond_9

    goto/16 :goto_f

    :cond_9
    if-eqz v12, :cond_a

    .line 267
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v12, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/ak;

    move-object/from16 v17, v1

    goto :goto_3

    :cond_a
    move-object/from16 v17, v20

    :goto_3
    if-eqz v17, :cond_b

    .line 269
    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v1

    move-object v7, v1

    goto :goto_4

    :cond_b
    move-object/from16 v7, v20

    :goto_4
    if-eqz v17, :cond_12

    if-nez v7, :cond_c

    goto/16 :goto_7

    .line 357
    :cond_c
    invoke-virtual {v7}, Lcom/tkay/core/common/f/a;->g()Z

    move-result v1

    .line 358
    invoke-virtual {v7}, Lcom/tkay/core/common/f/a;->i()Z

    move-result v3

    if-eqz v1, :cond_10

    if-eqz v3, :cond_10

    .line 363
    invoke-virtual {v7}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v21

    .line 364
    invoke-virtual {v7}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    .line 366
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object v6

    const/16 v22, 0x1

    const/16 v23, -0x1

    move-object/from16 v1, v19

    move-object/from16 v24, v2

    move v2, v4

    move v10, v4

    move v4, v5

    move-object v5, v6

    move/from16 v6, v22

    move-object/from16 v34, v7

    move/from16 v7, v23

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    .line 368
    invoke-virtual/range {v34 .. v34}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 369
    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->r(Ljava/lang/String;)V

    .line 371
    invoke-virtual {v1, v10}, Lcom/tkay/core/common/f/d;->p(I)V

    if-eqz p3, :cond_e

    const/16 v22, 0x1

    const/16 v23, -0x1

    .line 373
    invoke-virtual/range {v24 .. v24}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v25

    invoke-virtual/range {v24 .. v24}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v26

    .line 374
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object v27

    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v28

    .line 1598
    iget v2, v1, Lcom/tkay/core/common/f/d;->q:I

    const/4 v3, 0x3

    if-ne v2, v3, :cond_d

    const/16 v30, 0x1

    goto :goto_5

    :cond_d
    const/16 v30, 0x0

    :goto_5
    const-string v31, ""

    move-object/from16 v21, v1

    move/from16 v24, v10

    move-object/from16 v29, v13

    .line 373
    invoke-static/range {v21 .. v31}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_e
    if-nez p5, :cond_f

    move-object/from16 v2, v34

    .line 380
    invoke-interface {v9, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 381
    monitor-exit v18

    return-object v9

    .line 383
    :cond_f
    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/ak;->b()Ljava/util/List;

    move-result-object v1

    invoke-interface {v9, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto/16 :goto_2

    :cond_10
    move-object/from16 v24, v2

    move v10, v4

    move-object v2, v7

    .line 393
    invoke-static {v15, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 399
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->k()V

    .line 401
    invoke-virtual/range {v24 .. v24}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {v24 .. v24}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    const-string v5, ""

    const/4 v6, 0x0

    if-nez v1, :cond_11

    const/4 v7, 0x0

    goto :goto_6

    :cond_11
    const/4 v7, 0x1

    :goto_6
    move-object/from16 v1, v19

    move v2, v10

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    goto/16 :goto_2

    :cond_12
    :goto_7
    move-object/from16 v24, v2

    move v10, v4

    .line 275
    invoke-virtual/range {v24 .. v24}, Lcom/tkay/core/common/f/aj;->J()I

    move-result v1

    const/4 v7, 0x2

    if-ne v1, v7, :cond_13

    const/4 v5, 0x1

    goto :goto_8

    :cond_13
    const/4 v5, 0x0

    :goto_8
    if-eqz v5, :cond_14

    .line 277
    invoke-static/range {v24 .. v24}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    move-object v6, v1

    goto :goto_9

    :cond_14
    move-object/from16 v6, v20

    :goto_9
    if-eqz v6, :cond_1e

    move-object/from16 v5, v24

    .line 281
    invoke-virtual {v14, v15, v13, v5}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v1

    .line 282
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v2, v15}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    .line 285
    :try_start_2
    invoke-virtual {v6, v0, v1, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalInitNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z

    move-result v17
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    if-eqz v17, :cond_15

    move-object v1, v6

    move-object v2, v13

    move-object/from16 v3, p2

    move-object v4, v14

    move-object/from16 v21, v5

    move-object/from16 v33, v12

    move-object v12, v6

    move v6, v10

    move-object/from16 v7, p6

    .line 287
    :try_start_3
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;ILjava/util/Map;)V

    goto :goto_a

    :cond_15
    move-object/from16 v21, v5

    move-object/from16 v33, v12

    move-object v12, v6

    .line 291
    :goto_a
    invoke-virtual {v14}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_18

    if-eqz v17, :cond_16

    .line 292
    invoke-virtual {v12, v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getBaseAdObject(Landroid/content/Context;)Lcom/tkay/core/api/BaseAd;

    move-result-object v1

    if-eqz v1, :cond_17

    const/4 v5, 0x1

    goto :goto_b

    :cond_16
    move-object/from16 v1, v20

    :cond_17
    const/4 v5, 0x0

    :goto_b
    move v4, v5

    goto :goto_d

    :cond_18
    if-eqz v17, :cond_19

    .line 294
    invoke-virtual {v12}, Lcom/tkay/core/api/TYBaseAdAdapter;->isAdReady()Z

    move-result v1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    move v4, v1

    goto :goto_c

    :cond_19
    const/4 v4, 0x0

    :goto_c
    move-object/from16 v1, v20

    goto :goto_d

    :catchall_1
    move-object/from16 v21, v5

    move-object/from16 v33, v12

    move-object v12, v6

    :catchall_2
    move-object/from16 v1, v20

    const/4 v4, 0x0

    :goto_d
    if-eqz v4, :cond_1d

    if-eqz v1, :cond_1a

    .line 321
    :try_start_4
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 322
    invoke-virtual {v12}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 323
    invoke-interface {v2, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    move-object v5, v2

    goto :goto_e

    :cond_1a
    move-object/from16 v5, v20

    .line 325
    :goto_e
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v6

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move v3, v10

    move-object v4, v12

    invoke-virtual/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;ILcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;J)Lcom/tkay/core/common/f/ak;

    move-result-object v1

    .line 327
    invoke-virtual {v1}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v2

    .line 328
    invoke-virtual {v2, v10}, Lcom/tkay/core/common/f/d;->p(I)V

    if-eqz p3, :cond_1b

    const/16 v22, 0x1

    const/16 v23, -0x1

    .line 332
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v25

    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v26

    invoke-virtual {v12}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object v27

    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v28

    const/16 v30, 0x1

    const-string v31, ""

    move-object/from16 v21, v2

    move/from16 v24, v10

    move-object/from16 v29, v13

    invoke-static/range {v21 .. v31}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_1b
    if-nez p5, :cond_1c

    .line 337
    invoke-virtual {v1}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v0

    invoke-interface {v9, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 338
    monitor-exit v18

    return-object v9

    .line 340
    :cond_1c
    invoke-virtual {v1}, Lcom/tkay/core/common/f/ak;->b()Ljava/util/List;

    move-result-object v1

    invoke-interface {v9, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_10

    .line 345
    :cond_1d
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    const-string v5, ""

    const/4 v6, 0x0

    const/4 v7, 0x4

    move-object/from16 v1, v19

    move v2, v10

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    goto :goto_10

    :cond_1e
    move-object/from16 v33, v12

    move-object/from16 v21, v24

    .line 350
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    const-string v5, ""

    const/4 v6, 0x0

    const/4 v7, 0x4

    move-object/from16 v1, v19

    move v2, v10

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    goto :goto_10

    :cond_1f
    :goto_f
    move-object/from16 v21, v2

    move v10, v4

    move-object/from16 v33, v12

    .line 261
    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {v21 .. v21}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    const-string v5, ""

    const/4 v6, 0x0

    const/4 v7, 0x5

    move-object/from16 v1, v19

    move v2, v10

    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    :goto_10
    add-int/lit8 v3, v32, 0x1

    move-object/from16 v10, v16

    move-object/from16 v12, v33

    const/4 v5, 0x1

    const/4 v6, 0x3

    const/4 v7, 0x2

    goto/16 :goto_0

    :cond_20
    move-object/from16 v16, v10

    if-eqz p5, :cond_22

    .line 415
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_21

    const/4 v12, 0x1

    .line 416
    invoke-direct {v8, v15, v12}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Z)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_21

    .line 418
    invoke-interface {v9, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 421
    :cond_21
    monitor-exit v18

    return-object v9

    :cond_22
    const/4 v10, 0x0

    const/4 v12, 0x1

    .line 425
    invoke-direct {v8, v15, v10}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Z)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_23

    .line 426
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_23

    invoke-interface {v1, v10}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/a;

    goto :goto_11

    :cond_23
    move-object/from16 v1, v20

    :goto_11
    if-eqz v1, :cond_26

    .line 428
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 429
    invoke-interface {v9, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz p3, :cond_25

    const/16 v22, 0x1

    const/16 v23, -0x1

    .line 431
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v24

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v25

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v26

    .line 2451
    iget-object v1, v0, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    .line 432
    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v28

    .line 2598
    iget v2, v0, Lcom/tkay/core/common/f/d;->q:I

    const/4 v3, 0x3

    if-ne v2, v3, :cond_24

    move/from16 v30, v12

    goto :goto_12

    :cond_24
    move/from16 v30, v10

    :goto_12
    const-string v31, ""

    move-object/from16 v21, v0

    move-object/from16 v27, v1

    move-object/from16 v29, v13

    .line 431
    invoke-static/range {v21 .. v31}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    .line 435
    :cond_25
    invoke-interface {v11}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->H()I

    move-result v3

    .line 3451
    iget-object v4, v0, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    const/4 v5, 0x1

    const/4 v6, -0x1

    move-object/from16 v0, v19

    .line 435
    invoke-static/range {v0 .. v6}, Lcom/tkay/core/common/a;->a(Lorg/json/JSONArray;ILjava/lang/String;ILjava/lang/String;ZI)V

    .line 437
    monitor-exit v18

    return-object v9

    .line 442
    :cond_26
    invoke-virtual {v14}, Lcom/tkay/core/c/d;->R()I

    move-result v1

    if-ne v1, v12, :cond_27

    move v5, v12

    goto :goto_13

    .line 444
    :cond_27
    invoke-virtual {v14}, Lcom/tkay/core/c/d;->R()I

    move-result v1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_28

    move/from16 v5, p4

    goto :goto_13

    :cond_28
    move v5, v10

    .line 449
    :goto_13
    invoke-interface/range {v16 .. v16}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_32

    if-eqz v5, :cond_32

    .line 450
    invoke-static {}, Lcom/tkay/core/common/s;->a()Lcom/tkay/core/common/s;

    move-result-object v1

    invoke-virtual {v1, v0, v15}, Lcom/tkay/core/common/s;->b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 453
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2a

    .line 454
    invoke-interface/range {v16 .. v16}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_29
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2a

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 455
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_29

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_29

    move-object v7, v3

    goto :goto_14

    :cond_2a
    move-object/from16 v7, v20

    :goto_14
    if-eqz v7, :cond_32

    .line 463
    invoke-virtual {v14, v15, v13, v7}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v1

    const-string v2, "isDefaultOffer"

    .line 464
    sget-object v3, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 465
    invoke-interface {v11, v7}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v11
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    .line 467
    :try_start_5
    invoke-static {v7}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v6

    .line 468
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v2, v15}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    invoke-virtual {v6, v0, v1, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->initNetworkObjectByPlacementId(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;)Z

    move-result v16

    if-eqz v16, :cond_2b

    move-object v1, v6

    move-object v2, v13

    move-object/from16 v3, p2

    move-object v4, v14

    move-object v5, v7

    move-object v10, v6

    move v6, v11

    move-object/from16 v17, v7

    move-object/from16 v7, p6

    .line 471
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;ILjava/util/Map;)V

    goto :goto_15

    :cond_2b
    move-object v10, v6

    move-object/from16 v17, v7

    .line 476
    :goto_15
    invoke-virtual {v14}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-static {v1, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2e

    if-eqz v16, :cond_2c

    .line 477
    invoke-virtual {v10, v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getBaseAdObject(Landroid/content/Context;)Lcom/tkay/core/api/BaseAd;

    move-result-object v0

    if-eqz v0, :cond_2d

    move v5, v12

    goto :goto_17

    :cond_2c
    move-object/from16 v0, v20

    :cond_2d
    const/4 v5, 0x0

    goto :goto_17

    :cond_2e
    if-eqz v16, :cond_2f

    .line 479
    invoke-virtual {v10}, Lcom/tkay/core/api/TYBaseAdAdapter;->isAdReady()Z

    move-result v4

    goto :goto_16

    :cond_2f
    const/4 v4, 0x0

    :goto_16
    move v5, v4

    move-object/from16 v0, v20

    :goto_17
    if-eqz v5, :cond_32

    if-eqz v0, :cond_30

    .line 486
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 487
    invoke-virtual {v10}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 488
    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    move-object v5, v1

    goto :goto_18

    :cond_30
    move-object/from16 v5, v20

    .line 491
    :goto_18
    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v6

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    move v3, v11

    move-object v4, v10

    invoke-virtual/range {v1 .. v7}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;ILcom/tkay/core/api/TYBaseAdAdapter;Ljava/util/List;J)Lcom/tkay/core/common/f/ak;

    move-result-object v0

    .line 493
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 4431
    iput v12, v1, Lcom/tkay/core/common/f/d;->z:I

    .line 496
    invoke-virtual {v1, v11}, Lcom/tkay/core/common/f/d;->p(I)V

    .line 497
    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->r(Ljava/lang/String;)V

    if-eqz p3, :cond_31

    const/16 v22, 0x1

    const/16 v23, -0x1

    .line 500
    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v25

    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v26

    .line 501
    invoke-virtual {v10}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object v27

    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v28

    const/16 v30, 0x1

    invoke-virtual/range {v17 .. v17}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object v31

    move-object/from16 v21, v1

    move/from16 v24, v11

    move-object/from16 v29, v13

    .line 500
    invoke-static/range {v21 .. v31}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    .line 504
    :cond_31
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v0

    invoke-interface {v9, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    .line 505
    :try_start_6
    monitor-exit v18

    return-object v9

    :catchall_3
    :cond_32
    if-eqz p3, :cond_36

    const-string v11, ""

    const-string v0, ""

    const/4 v1, -0x1

    const/4 v2, 0x0

    const/16 v16, 0x0

    move-object v9, v13

    const/4 v3, 0x0

    move-object/from16 v10, p2

    move v4, v12

    move-object v12, v14

    move-object v5, v13

    move-object v13, v0

    move-object v0, v14

    move v14, v1

    move-object v1, v15

    move v15, v2

    move-object/from16 v17, p6

    .line 515
    invoke-static/range {v9 .. v17}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v21

    .line 516
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Y()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v1, v6}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v2

    if-eqz v2, :cond_33

    .line 517
    invoke-virtual {v2}, Lcom/tkay/core/common/f;->e()Z

    move-result v3

    :cond_33
    if-nez v2, :cond_34

    const-string v2, "AdManage is null--isReady"

    .line 519
    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "Id:"

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "--format:"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->Y()I

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v6, v7}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_34
    const/16 v22, 0x0

    if-eqz v3, :cond_35

    const/4 v2, 0x5

    move/from16 v23, v2

    goto :goto_19

    :cond_35
    move/from16 v23, v4

    :goto_19
    const/16 v24, -0x1

    const-string v25, ""

    const/16 v26, -0x1

    const-string v27, ""

    .line 522
    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v28

    const/16 v30, 0x0

    const-string v31, ""

    move-object/from16 v29, v5

    .line 521
    invoke-static/range {v21 .. v31}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    goto :goto_1a

    :cond_36
    move v4, v12

    move-object v5, v13

    move-object v0, v14

    move-object v1, v15

    :goto_1a
    if-eqz p4, :cond_37

    const-string v11, ""

    const-string v13, ""

    const/4 v14, -0x1

    const/4 v15, 0x0

    const/16 v16, 0x0

    move-object v9, v5

    move-object/from16 v10, p2

    move-object v12, v0

    move-object/from16 v17, p6

    .line 526
    invoke-static/range {v9 .. v17}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 527
    invoke-virtual/range {v19 .. v19}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v4, v1, v5}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILjava/lang/String;Ljava/lang/String;)V

    .line 530
    :cond_37
    monitor-exit v18
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    return-object v20

    :catchall_4
    move-exception v0

    .line 531
    monitor-exit v18

    throw v0
.end method

.method public final a(Landroid/content/Context;Lcom/tkay/core/common/f/a;)V
    .locals 8

    .line 747
    invoke-virtual {p2}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    .line 748
    invoke-virtual {p2}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v3

    if-eqz v5, :cond_0

    .line 749
    invoke-virtual {v5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v3, :cond_3

    .line 752
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v2, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 754
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v2

    if-eqz v0, :cond_1

    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    goto :goto_1

    :cond_1
    const-wide/16 v6, 0x0

    :goto_1
    invoke-virtual {v1, v2, v6, v7, v0}, Lcom/tkay/core/common/f;->a(Ljava/lang/String;DLcom/tkay/core/common/f/aj;)V

    goto :goto_2

    .line 756
    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Id:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "--format:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "--adsource:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v2

    const-string v4, "AdManage is null--Show"

    invoke-static {v4, v1, v2}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 760
    :goto_2
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/tkay/core/common/a;->b(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    .line 763
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v6

    new-instance v7, Lcom/tkay/core/common/a$1;

    move-object v0, v7

    move-object v1, p0

    move-object v2, p1

    move-object v4, p2

    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/common/a$1;-><init>(Lcom/tkay/core/common/a;Landroid/content/Context;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/a;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    invoke-virtual {v6, v7}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_3
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 657
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 658
    monitor-enter v0

    .line 659
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_0

    .line 660
    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 661
    invoke-virtual {p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/ak;

    if-eqz p1, :cond_0

    .line 663
    invoke-virtual {p1}, Lcom/tkay/core/common/f/ak;->c()V

    .line 666
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;)V
    .locals 6

    .line 829
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 830
    monitor-enter v0

    .line 831
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v1, :cond_4

    .line 832
    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v2

    if-nez v2, :cond_0

    goto :goto_1

    .line 836
    :cond_0
    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_0
    if-eqz v1, :cond_3

    .line 837
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 838
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 839
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/ak;

    if-eqz v2, :cond_1

    .line 841
    invoke-virtual {v2}, Lcom/tkay/core/common/f/ak;->a()Lcom/tkay/core/common/f/a;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 846
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->j()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 849
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 852
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v4

    .line 853
    invoke-virtual {v4}, Lcom/tkay/core/api/TYBaseAdAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v4

    .line 5578
    iput-object p2, v4, Lcom/tkay/core/common/f/d;->v:Ljava/lang/String;

    const/4 v5, 0x4

    .line 5594
    iput v5, v4, Lcom/tkay/core/common/f/d;->q:I

    .line 858
    invoke-static {v4, p3}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/c/d;)V

    .line 861
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->b()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;)V

    .line 864
    invoke-virtual {v2, v4}, Lcom/tkay/core/common/f/ak;->a(Lcom/tkay/core/common/f/d;)V

    goto :goto_0

    .line 871
    :cond_2
    invoke-static {p1, v3}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/a;)V

    .line 877
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->k()V

    goto :goto_0

    .line 881
    :cond_3
    monitor-exit v0

    return-void

    .line 833
    :cond_4
    :goto_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 881
    monitor-exit v0

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/a;)V
    .locals 2

    .line 677
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    .line 678
    monitor-enter v0

    if-nez p3, :cond_0

    .line 680
    monitor-exit v0

    return-void

    .line 682
    :cond_0
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/a;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz p1, :cond_1

    .line 683
    invoke-virtual {p1}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 684
    invoke-virtual {p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/ak;

    if-eqz v1, :cond_1

    .line 686
    invoke-virtual {v1, p3}, Lcom/tkay/core/common/f/ak;->a(Lcom/tkay/core/common/f/a;)V

    .line 688
    invoke-virtual {v1}, Lcom/tkay/core/common/f/ak;->d()Z

    move-result p3

    if-nez p3, :cond_1

    .line 689
    invoke-virtual {p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 693
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method
