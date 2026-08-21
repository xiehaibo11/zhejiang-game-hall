.class public Lcom/mbridge/msdk/c/b;
.super Ljava/lang/Object;
.source "SettingManager.java"


# static fields
.field public static final a:Ljava/lang/String;

.field private static b:Lcom/mbridge/msdk/c/b;

.field private static c:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/c/d;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile d:Lcom/mbridge/msdk/c/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 49
    const-class v0, Lcom/mbridge/msdk/c/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 55
    sput-object v0, Lcom/mbridge/msdk/c/b;->b:Lcom/mbridge/msdk/c/b;

    .line 438
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    .line 440
    sput-object v0, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/c/b;
    .locals 2

    .line 61
    sget-object v0, Lcom/mbridge/msdk/c/b;->b:Lcom/mbridge/msdk/c/b;

    if-nez v0, :cond_1

    .line 62
    const-class v0, Lcom/mbridge/msdk/c/b;

    monitor-enter v0

    .line 63
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/c/b;->b:Lcom/mbridge/msdk/c/b;

    if-nez v1, :cond_0

    .line 64
    new-instance v1, Lcom/mbridge/msdk/c/b;

    invoke-direct {v1}, Lcom/mbridge/msdk/c/b;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/c/b;->b:Lcom/mbridge/msdk/c/b;

    .line 66
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 68
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/c/b;->b:Lcom/mbridge/msdk/c/b;

    return-object v0
.end method

.method private a(Ljava/util/List;I)Lcom/mbridge/msdk/foundation/entity/n;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;I)",
            "Lcom/mbridge/msdk/foundation/entity/n;"
        }
    .end annotation

    .line 307
    new-instance v0, Lcom/mbridge/msdk/foundation/entity/n;

    invoke-direct {v0}, Lcom/mbridge/msdk/foundation/entity/n;-><init>()V

    .line 309
    :try_start_0
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/c/b;->b(Ljava/util/List;I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/n;->d(Ljava/lang/String;)V

    .line 310
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/entity/n;->a(Ljava/lang/String;)V

    .line 311
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/q;->a()I

    move-result p1

    const/16 p2, 0x1f4

    if-le p1, p2, :cond_0

    .line 313
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object p1

    const-string p2, "0"

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/db/q;->b(Ljava/lang/String;)I

    .line 315
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/entity/n;)J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 346
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    const-string v0, "campaignid"

    .line 347
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "ts"

    .line 354
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getTs()J

    move-result-wide v2

    invoke-virtual {v1, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "label"

    .line 355
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLabel()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "vc"

    .line 356
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getcVersionCode()J

    move-result-wide v2

    invoke-virtual {v1, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 357
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPkgSource()Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    const-string p1, ""

    :cond_0
    const-string v0, "pkg_source"

    .line 361
    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-object v0, v1

    goto :goto_1

    :catch_0
    move-exception p1

    move-object v0, v1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 364
    :goto_0
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_1

    .line 365
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 5

    .line 450
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result v0

    const-string v1, "mbridge"

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 452
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v3, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v3, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_0
    move-object v0, v2

    :goto_0
    const-string v3, "_"

    if-eqz v0, :cond_2

    .line 462
    :try_start_1
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV;->getAll()Ljava/util/Map;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    if-eqz v2, :cond_4

    .line 469
    :try_start_2
    invoke-interface {v2}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    .line 470
    :cond_1
    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 471
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 472
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 473
    sget-object v1, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/mbridge/msdk/c/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v4

    invoke-virtual {v1, v0, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_1

    :catch_2
    move-exception p0

    .line 478
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_3

    :cond_2
    const/4 v0, 0x0

    .line 482
    :try_start_3
    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    .line 483
    invoke-interface {p0}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object p0

    .line 484
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 485
    :cond_3
    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 486
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 487
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 488
    sget-object v2, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-interface {p0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-static {v4}, Lcom/mbridge/msdk/c/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v4

    invoke-virtual {v2, v1, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_2

    :catch_3
    move-exception p0

    .line 492
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_3
    return-void
.end method

.method private b(Ljava/util/List;I)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;I)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 323
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "key=2000079&iex="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "&cal="

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 325
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 326
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 327
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/c/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v1

    .line 328
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 330
    :cond_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p1

    .line 331
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 332
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 335
    sget-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v0, :cond_1

    .line 336
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-object p2
.end method

.method private h(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 1

    .line 539
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 540
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object p1

    .line 542
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    .line 544
    sget-object v0, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 545
    sget-object p2, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-virtual {p2, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/c/d;

    goto :goto_1

    .line 548
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 549
    invoke-static {v0}, Lcom/mbridge/msdk/c/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    .line 550
    sget-object v0, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 552
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    move-object p1, p2

    :goto_1
    return-object p1
.end method


# virtual methods
.method public final a(Lorg/json/JSONObject;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 7

    const-string v0, "unitSetting"

    if-eqz p1, :cond_4

    .line 372
    invoke-virtual {p1}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_2

    :cond_0
    if-eqz p2, :cond_3

    .line 375
    invoke-virtual {p2}, Lorg/json/JSONObject;->length()I

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    .line 378
    :cond_1
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 379
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 381
    :try_start_0
    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 382
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v3

    const/4 v4, 0x0

    .line 383
    invoke-virtual {v3, v4}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lorg/json/JSONObject;

    .line 384
    invoke-virtual {p2, v0}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v6

    invoke-virtual {v6, v4}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lorg/json/JSONObject;

    .line 385
    invoke-virtual {p0, v5, v6}, Lcom/mbridge/msdk/c/b;->a(Lorg/json/JSONObject;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v5

    .line 386
    invoke-virtual {v3, v4, v5}, Lorg/json/JSONArray;->put(ILjava/lang/Object;)Lorg/json/JSONArray;

    .line 387
    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 389
    :cond_2
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {p1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 392
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_0

    :cond_3
    :goto_1
    return-object p1

    :cond_4
    :goto_2
    return-object p2
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 572
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 574
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p2

    invoke-virtual {p2, p1, p3}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 575
    invoke-static {p3}, Lcom/mbridge/msdk/c/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p2

    .line 576
    sget-object p3, Lcom/mbridge/msdk/c/b;->c:Ljava/util/HashMap;

    invoke-virtual {p3, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 6

    .line 78
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 81
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aj()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    .line 82
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 83
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->an()J

    move-result-wide v4

    add-long/2addr v4, v0

    cmp-long p1, v4, v2

    if-lez p1, :cond_0

    .line 85
    sget-object p1, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "app setting nexttime is not ready  [settingNextRequestTime= "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " currentTime = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    .line 90
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    const-string v0, "app setting timeout or not exists"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method

.method public final a(Ljava/lang/String;ILjava/lang/String;)Z
    .locals 11

    const-string v0, "_"

    const/4 v1, 0x0

    .line 99
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    .line 100
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 101
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    .line 102
    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-static {v2, p2, p3}, Lcom/mbridge/msdk/foundation/tools/ag;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/Long;

    invoke-virtual {p3}, Ljava/lang/Long;->longValue()J

    move-result-wide v7

    .line 104
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-nez p1, :cond_0

    .line 106
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    goto :goto_0

    :cond_0
    move-wide v5, v7

    .line 124
    :goto_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->Y()J

    move-result-wide v7

    const-wide/16 v9, 0x3e8

    mul-long/2addr v7, v9

    add-long/2addr v5, v7

    cmp-long p1, v5, v3

    if-lez p1, :cond_1

    return v1

    .line 130
    :cond_1
    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-static {v2, p2, p1}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p1, 0x1

    return p1

    :catch_0
    move-exception p1

    .line 134
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return v1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5

    .line 203
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 204
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/c/b;->a(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    invoke-virtual {p0, p2, v2, p1}, Lcom/mbridge/msdk/c/b;->a(Ljava/lang/String;ILjava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 205
    new-instance v1, Lcom/mbridge/msdk/c/c;

    invoke-direct {v1}, Lcom/mbridge/msdk/c/c;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    .line 206
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v4

    .line 205
    invoke-virtual {v1, v3, p2, v4}, Lcom/mbridge/msdk/c/c;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 209
    :cond_0
    invoke-virtual {p0, p2, p1}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 211
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->ae()J

    move-result-wide v0

    const-wide/16 v3, 0x3e8

    mul-long/2addr v0, v3

    .line 212
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 213
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->u()J

    move-result-wide p1

    add-long/2addr p1, v0

    cmp-long v0, p1, v3

    if-lez v0, :cond_1

    .line 216
    sget-object v0, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "unit setting  nexttime is not ready  [settingNextRequestTime= "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, " currentTime = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    .line 222
    :cond_1
    sget-object p1, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    const-string p2, "unit setting timeout or not exists"

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return v2
.end method

.method public final b()Lcom/mbridge/msdk/c/a;
    .locals 5

    .line 683
    new-instance v0, Lcom/mbridge/msdk/c/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/a;-><init>()V

    const-wide/32 v1, 0x15180

    .line 685
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/c/a;->h(J)V

    const/4 v1, 0x1

    .line 686
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->O(I)V

    .line 687
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->P(I)V

    .line 688
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->e(Z)V

    .line 689
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->f(Z)V

    const-wide/16 v2, 0xe10

    .line 690
    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/c/a;->f(J)V

    const-wide/16 v2, 0x0

    .line 691
    invoke-virtual {v0, v2, v3}, Lcom/mbridge/msdk/c/a;->g(J)V

    const/4 v2, 0x0

    .line 692
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->d(Z)V

    .line 693
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->c(Z)V

    const-wide/16 v3, 0x1c20

    .line 694
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/c/a;->b(J)V

    const-wide/16 v3, 0x14

    .line 695
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/c/a;->d(J)V

    const-wide/16 v3, 0xa

    .line 696
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/c/a;->e(J)V

    .line 697
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->I(I)V

    .line 698
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->J(I)V

    const-string v3, "\u6b63\u5728\u4e0b\u8f7d\u4e2d\uff0c\u8bf7\u53bb\u901a\u77e5\u680f\u67e5\u770b\u4e0b\u8f7d\u8fdb\u5ea6"

    .line 699
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->e(Ljava/lang/String;)V

    const-string v3, "mbridge"

    .line 700
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->c(Ljava/lang/String;)V

    .line 701
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->u(I)V

    const-wide/16 v3, 0x708

    .line 702
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/c/a;->c(J)V

    const/16 v3, 0x64

    .line 703
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->H(I)V

    const v3, 0xa8c0

    .line 704
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->G(I)V

    .line 705
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->F(I)V

    const-wide/32 v3, 0x93a80

    .line 706
    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/c/a;->a(J)V

    .line 707
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->N(I)V

    const/4 v3, 0x3

    .line 708
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->K(I)V

    .line 709
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->v(I)V

    .line 710
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->E(I)V

    .line 711
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->C(I)V

    const v3, 0x15180

    .line 712
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->D(I)V

    const v4, 0x3f480

    .line 713
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->L(I)V

    .line 714
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->w(I)V

    const/16 v4, 0x384

    .line 716
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->x(I)V

    const/16 v4, 0x14

    .line 717
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->y(I)V

    const-string v4, "pid"

    .line 718
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->d(Ljava/lang/String;)V

    .line 719
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->z(I)V

    .line 720
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->A(I)V

    .line 721
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->B(I)V

    .line 722
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->M(I)V

    .line 726
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->p(I)V

    .line 727
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->o(I)V

    .line 728
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->q(I)V

    .line 729
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->r(I)V

    .line 730
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->s(I)V

    const/4 v4, -0x1

    .line 731
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->t(I)V

    .line 732
    sget-object v4, Lcom/mbridge/msdk/c/a/b;->a:Ljava/lang/String;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->b(Ljava/lang/String;)V

    const/4 v4, 0x2

    .line 734
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->n(I)V

    .line 735
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->m(I)V

    .line 736
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->d(I)V

    const-string v3, "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"

    .line 737
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->h(Ljava/lang/String;)V

    const-string v3, "https://mtg-native.rayjump.com/omsdk/omsdkjs_common_js.txt"

    .line 738
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->g(Ljava/lang/String;)V

    const/16 v3, 0x78

    .line 739
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->c(I)V

    const/16 v4, 0xa

    .line 740
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->b(I)V

    .line 741
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->g(Z)V

    .line 742
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->R(I)V

    .line 743
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->S(I)V

    .line 745
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->T(I)V

    .line 746
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->M:I

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->j(I)V

    .line 747
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->O:I

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->i(I)V

    .line 748
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->N:I

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->h(I)V

    .line 749
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->a(I)V

    .line 750
    sget v3, Lcom/mbridge/msdk/foundation/same/a;->S:I

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->k(I)V

    .line 751
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/c/a;->g(I)V

    .line 752
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->V(I)V

    .line 753
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->U(I)V

    const-string v3, ""

    .line 754
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->a(Ljava/lang/String;)V

    .line 755
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->W(I)V

    .line 756
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->f(I)V

    const/16 v3, 0x18

    .line 757
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/c/a;->e(I)V

    .line 758
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/c/a;->a(Z)V

    .line 759
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->Q(I)V

    .line 760
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/a;->b(Z)V

    return-object v0
.end method

.method public final b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;
    .locals 1

    .line 405
    sget-object v0, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    if-nez v0, :cond_0

    .line 407
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 408
    invoke-static {p1}, Lcom/mbridge/msdk/c/a;->f(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    sput-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    .line 409
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    if-eqz p1, :cond_0

    .line 410
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aw()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 413
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 417
    :cond_0
    :goto_0
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    return-object p1
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    const-string v0, ""

    .line 233
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 234
    invoke-static {p2}, Lcom/mbridge/msdk/c/a;->f(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    sput-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    .line 235
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    if-eqz p1, :cond_0

    .line 236
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aw()V

    .line 239
    :cond_0
    sget-object p1, Lcom/mbridge/msdk/c/b;->d:Lcom/mbridge/msdk/c/a;

    .line 1249
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    const/4 v1, 0x0

    if-eqz p2, :cond_1

    .line 1252
    invoke-virtual {p2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    :cond_1
    if-eqz p1, :cond_4

    if-eqz v1, :cond_4

    .line 1256
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->M()I

    move-result p2

    if-lez p2, :cond_3

    .line 1257
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->O()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 1258
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_4

    .line 1260
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->P()I

    move-result p1

    const/4 v2, 0x1

    if-ne p1, v2, :cond_4

    .line 1261
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    const/4 v3, 0x0

    move v4, v3

    .line 1262
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_2

    .line 1263
    invoke-interface {p2, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1264
    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 1266
    :try_start_1
    invoke-virtual {v1, v6, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v7

    .line 1267
    invoke-virtual {v1, v6}, Landroid/content/pm/PackageManager;->getInstallerPackageName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1269
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    .line 1270
    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIex(I)V

    .line 1271
    iget-wide v8, v7, Landroid/content/pm/PackageInfo;->lastUpdateTime:J

    invoke-virtual {v5, v8, v9}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTs(J)V

    const-string v8, "is"

    .line 1272
    invoke-virtual {v5, v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLabel(Ljava/lang/String;)V

    .line 1273
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPkgSource(Ljava/lang/String;)V

    .line 1274
    iget v6, v7, Landroid/content/pm/PackageInfo;->versionCode:I

    int-to-long v6, v6

    invoke-virtual {v5, v6, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setcVersionCode(J)V
    :try_end_1
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    .line 1276
    :catch_0
    :try_start_2
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPackageName(Ljava/lang/String;)V

    .line 1277
    invoke-virtual {v5, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setIex(I)V

    const-wide/16 v6, 0x0

    .line 1278
    invoke-virtual {v5, v6, v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setTs(J)V

    const-string v6, "ni"

    .line 1279
    invoke-virtual {v5, v6}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setLabel(Ljava/lang/String;)V

    .line 1280
    invoke-virtual {v5, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setPkgSource(Ljava/lang/String;)V

    .line 1283
    :goto_1
    invoke-interface {p1, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 1285
    :cond_2
    invoke-direct {p0, p1, v2}, Lcom/mbridge/msdk/c/b;->a(Ljava/util/List;I)Lcom/mbridge/msdk/foundation/entity/n;

    goto :goto_2

    .line 1291
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/db/q;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/q;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/db/q;->b()I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    .line 1295
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_4

    .line 1296
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_2
    return-void
.end method

.method public final c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 499
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    if-nez p1, :cond_0

    .line 501
    invoke-static {}, Lcom/mbridge/msdk/c/d;->l()Lcom/mbridge/msdk/c/d;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method public final c(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    if-nez p1, :cond_0

    return-object v0

    .line 425
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    move-object v0, p1

    :goto_0
    return-object v0

    :catch_0
    move-exception p1

    .line 431
    sget-boolean v1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz v1, :cond_2

    .line 432
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-object v0
.end method

.method public final d(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 1561
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/c/b;->h(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    if-nez p1, :cond_0

    .line 509
    invoke-static {}, Lcom/mbridge/msdk/c/d;->l()Lcom/mbridge/msdk/c/d;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method public final d(Ljava/lang/String;)V
    .locals 5

    .line 580
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    .line 2158
    sget-object v0, Lcom/mbridge/msdk/c/d;->a:Ljava/lang/String;

    .line 582
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 583
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2591
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 2592
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "alert url is exception ,url:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v0, p1, v2, v3}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    goto :goto_0

    .line 2596
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/c/b$1;

    invoke-direct {v2, p0, v0, p1}, Lcom/mbridge/msdk/c/b$1;-><init>(Lcom/mbridge/msdk/c/b;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v0, v2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 523
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/c/b;->h(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 524
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/d;->j()I

    move-result p2

    if-nez p2, :cond_0

    const/4 p2, 0x1

    .line 525
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/c/d;->c(I)V

    :cond_0
    return-object p1
.end method

.method public final e(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 646
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ivreward_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final f(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 0

    .line 561
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/c/b;->h(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object p1

    return-object p1
.end method

.method public final f(Ljava/lang/String;)V
    .locals 3

    .line 650
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ivreward_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;
    .locals 1

    .line 768
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 769
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    return-object p1

    .line 772
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-nez p1, :cond_1

    .line 774
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 777
    :catch_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    :cond_1
    :goto_0
    return-object p1
.end method

.method public final g(Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 668
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 669
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 670
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "current_time"

    .line 671
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 672
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, p2, v0}, Lcom/mbridge/msdk/c/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 675
    sget-object p2, Lcom/mbridge/msdk/c/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method
