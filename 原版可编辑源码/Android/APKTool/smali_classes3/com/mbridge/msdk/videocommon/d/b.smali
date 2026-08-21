.class public Lcom/mbridge/msdk/videocommon/d/b;
.super Ljava/lang/Object;
.source "RewardSettingManager.java"


# static fields
.field public static a:Lcom/mbridge/msdk/videocommon/d/a;

.field private static b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/videocommon/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile d:Lcom/mbridge/msdk/videocommon/d/b;


# instance fields
.field private volatile c:Z

.field private e:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 45
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v0, 0x0

    .line 47
    sput-object v0, Lcom/mbridge/msdk/videocommon/d/b;->a:Lcom/mbridge/msdk/videocommon/d/a;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 49
    iput-boolean v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->c:Z

    .line 53
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->e:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/videocommon/d/b;
    .locals 2

    .line 56
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/b;->d:Lcom/mbridge/msdk/videocommon/d/b;

    if-nez v0, :cond_1

    .line 57
    const-class v0, Lcom/mbridge/msdk/videocommon/d/b;

    monitor-enter v0

    .line 58
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/videocommon/d/b;->d:Lcom/mbridge/msdk/videocommon/d/b;

    if-nez v1, :cond_0

    .line 59
    new-instance v1, Lcom/mbridge/msdk/videocommon/d/b;

    invoke-direct {v1}, Lcom/mbridge/msdk/videocommon/d/b;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/videocommon/d/b;->d:Lcom/mbridge/msdk/videocommon/d/b;

    .line 61
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 63
    :cond_1
    :goto_0
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/b;->d:Lcom/mbridge/msdk/videocommon/d/b;

    return-object v0
.end method

.method private final a(Lcom/mbridge/msdk/videocommon/d/c;)Z
    .locals 6

    .line 296
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/d/b;->b()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v0

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 298
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/a;->d()J

    move-result-wide v0

    .line 300
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 301
    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->x()J

    move-result-wide v4

    add-long/2addr v4, v0

    cmp-long p1, v4, v2

    if-lez p1, :cond_1

    .line 303
    sget-boolean p1, Lcom/mbridge/msdk/foundation/tools/z;->c:Z

    if-eqz p1, :cond_0

    .line 304
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "unit setting  nexttime is not ready  [settingNextRequestTime= "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, " currentTime = "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, "]"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RewardSettingManager"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    const/4 p1, 0x1

    return p1
.end method

.method private static b(Z)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 7

    .line 470
    new-instance v0, Lcom/mbridge/msdk/videocommon/d/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/videocommon/d/c;-><init>()V

    .line 472
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 473
    new-instance v2, Lcom/mbridge/msdk/videocommon/b/b;

    const/16 v3, 0xf

    const/4 v4, 0x0

    const/4 v5, 0x1

    invoke-direct {v2, v5, v3, v4}, Lcom/mbridge/msdk/videocommon/b/b;-><init>(IILcom/mbridge/msdk/videocommon/b/a;)V

    .line 474
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 475
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/c;->a(Ljava/util/List;)V

    .line 476
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->n(I)V

    .line 477
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->m(I)V

    .line 478
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->o(I)V

    .line 479
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->s(I)V

    const-wide/high16 v1, 0x3ff0000000000000L    # 1.0

    .line 480
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/c;->a(D)V

    .line 481
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/c;->b(D)V

    const/4 v1, 0x2

    .line 482
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/c;->t(I)V

    .line 483
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/c;->p(I)V

    .line 484
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->q(I)V

    .line 485
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->r(I)V

    const/4 v2, 0x3

    .line 486
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/d/c;->i(I)V

    const/16 v3, 0x50

    .line 487
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->j(I)V

    const/16 v3, 0x64

    .line 488
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->k(I)V

    const/4 v3, 0x0

    .line 489
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->l(I)V

    .line 490
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/c;->h(I)V

    const/4 v4, -0x1

    .line 491
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/videocommon/d/c;->f(I)V

    const/16 v6, 0x46

    .line 492
    invoke-virtual {v0, v6}, Lcom/mbridge/msdk/videocommon/d/c;->x(I)V

    .line 493
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/c;->e(I)V

    if-eqz p0, :cond_0

    const/4 p0, 0x5

    .line 495
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/videocommon/d/c;->d(I)V

    goto :goto_0

    .line 497
    :cond_0
    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/videocommon/d/c;->d(I)V

    .line 499
    :goto_0
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->c(I)V

    .line 500
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->b(I)V

    .line 501
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->g(I)V

    .line 502
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->u(I)V

    .line 503
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/d/c;->a(I)V

    .line 505
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/d/c;->w(I)V

    .line 506
    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x4

    .line 507
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x6

    .line 508
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 509
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/videocommon/d/c;->a(Ljava/util/ArrayList;)V

    .line 510
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->y(I)V

    .line 511
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/c;->z(I)V

    const/16 p0, 0x3c

    .line 512
    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/videocommon/d/c;->A(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 514
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object v0
.end method

.method public static c(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    .line 370
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 371
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "unitSetting"

    .line 372
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 374
    invoke-virtual {p0, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "unitId"

    .line 375
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz p0, :cond_0

    .line 376
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_0

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 383
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method private d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 122
    iget-boolean v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->c:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 123
    iput-boolean v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->c:Z

    .line 126
    new-instance v0, Lcom/mbridge/msdk/videocommon/c/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/videocommon/c/a;-><init>()V

    .line 128
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/mbridge/msdk/videocommon/c/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 4

    .line 177
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reward"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 178
    sget-object v1, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const/4 v1, 0x0

    .line 182
    :try_start_0
    sget-object v3, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/d/c;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 183
    :try_start_1
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/videocommon/d/b;->a(Lcom/mbridge/msdk/videocommon/d/c;)Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    move-object v0, v2

    :catch_1
    :goto_0
    if-eqz v1, :cond_0

    .line 189
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1, p2, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    :cond_0
    return-object v0

    .line 194
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 195
    invoke-static {v1}, Lcom/mbridge/msdk/videocommon/d/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v1

    .line 196
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Lcom/mbridge/msdk/videocommon/d/c;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 199
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0, p2, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    return-object v2

    .line 202
    :cond_2
    sget-object p1, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 4

    .line 209
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reward_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 210
    sget-object v1, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    const/4 p3, 0x0

    .line 214
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/d/c;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 215
    :try_start_1
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/videocommon/d/b;->a(Lcom/mbridge/msdk/videocommon/d/c;)Z

    move-result p3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    move-object v0, v2

    :catch_1
    :goto_0
    if-eqz p3, :cond_0

    .line 221
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p0, p1, p3, p2, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    :cond_0
    return-object v0

    .line 225
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 226
    invoke-static {v1}, Lcom/mbridge/msdk/videocommon/d/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v1

    .line 227
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Lcom/mbridge/msdk/videocommon/d/c;)Z

    move-result v3

    if-eqz v3, :cond_3

    if-nez v1, :cond_2

    .line 230
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0, p2, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    .line 231
    invoke-static {p3}, Lcom/mbridge/msdk/videocommon/d/b;->b(Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    return-object p1

    :cond_2
    return-object v1

    .line 236
    :cond_3
    sget-object p1, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v1
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 78
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->e:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 314
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reward_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 315
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p2

    invoke-virtual {p2, p1, p3}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    invoke-static {p3}, Lcom/mbridge/msdk/videocommon/d/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p2

    .line 317
    sget-object p3, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p3, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V
    .locals 8

    .line 143
    :try_start_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->e:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 2068
    :cond_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 2069
    iget-object v0, p0, Lcom/mbridge/msdk/videocommon/d/b;->e:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p3}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_1
    :goto_0
    const-string v0, "test_reward_unit_setting"

    .line 144
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "unitID: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " is requesting"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 153
    :catch_0
    :cond_2
    :goto_1
    new-instance v2, Lcom/mbridge/msdk/videocommon/c/a;

    invoke-direct {v2}, Lcom/mbridge/msdk/videocommon/c/a;-><init>()V

    .line 155
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    move-object v7, p4

    invoke-virtual/range {v2 .. v7}, Lcom/mbridge/msdk/videocommon/c/a;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/videocommon/c/c;)V

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 362
    iput-boolean p1, p0, Lcom/mbridge/msdk/videocommon/d/b;->c:Z

    return-void
.end method

.method public final b()Lcom/mbridge/msdk/videocommon/d/a;
    .locals 8

    .line 92
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/b;->a:Lcom/mbridge/msdk/videocommon/d/a;

    if-nez v0, :cond_4

    .line 93
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "reward_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 94
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 95
    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/d/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v0

    const-string v1, "RewardSettingManager"

    if-eqz v0, :cond_1

    .line 1252
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/a;->c()J

    move-result-wide v2

    .line 1253
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 1255
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/d/a;->h()J

    move-result-wide v6

    add-long/2addr v6, v2

    cmp-long v2, v6, v4

    if-lez v2, :cond_1

    .line 1258
    sget-boolean v2, Lcom/mbridge/msdk/foundation/tools/z;->c:Z

    if-eqz v2, :cond_0

    .line 1259
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "app setting nexttime is not ready  [settingNextRequestTime= "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, " currentTime = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, "]"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 v1, 0x0

    goto :goto_0

    :cond_1
    const-string v2, "app setting timeout or not exists"

    .line 1264
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v1, 0x1

    :goto_0
    if-nez v1, :cond_2

    return-object v0

    .line 100
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/videocommon/d/b;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 102
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/d/b;->c()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v0

    return-object v0

    .line 106
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->l()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/videocommon/d/b;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    invoke-virtual {p0}, Lcom/mbridge/msdk/videocommon/d/b;->c()Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object v0

    :cond_4
    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 5

    .line 326
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 327
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 2621
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 329
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 330
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getH5ResAddress(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 3338
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 3339
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

    .line 3342
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->getInstance()Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/videocommon/d/b$1;

    invoke-direct {v2, p0, v0, p1}, Lcom/mbridge/msdk/videocommon/d/b$1;-><init>(Lcom/mbridge/msdk/videocommon/d/b;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v0, v2}, Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager;->downloadH5Res(Ljava/lang/String;Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$H5ResDownloadListerInter;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 356
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reward_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 357
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 358
    invoke-static {p2}, Lcom/mbridge/msdk/videocommon/d/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/a;

    move-result-object p1

    sput-object p1, Lcom/mbridge/msdk/videocommon/d/b;->a:Lcom/mbridge/msdk/videocommon/d/a;

    return-void
.end method

.method public final c()Lcom/mbridge/msdk/videocommon/d/a;
    .locals 7

    .line 270
    new-instance v0, Lcom/mbridge/msdk/videocommon/d/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/videocommon/d/a;-><init>()V

    .line 271
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x5

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    const/16 v2, 0x3e8

    .line 272
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "1"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "9"

    .line 273
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "8"

    .line 274
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 275
    new-instance v2, Ljava/util/HashMap;

    const/4 v4, 0x3

    invoke-direct {v2, v4}, Ljava/util/HashMap;-><init>(I)V

    .line 276
    new-instance v4, Lcom/mbridge/msdk/videocommon/b/d;

    const/4 v5, 0x1

    const-string v6, "Virtual Item"

    invoke-direct {v4, v6, v5}, Lcom/mbridge/msdk/videocommon/b/d;-><init>(Ljava/lang/String;I)V

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 277
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/videocommon/d/a;->a(Ljava/util/Map;)V

    .line 278
    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/d/a;->b(Ljava/util/Map;)V

    const-wide/32 v1, 0xa8c0

    .line 279
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/a;->a(J)V

    const-wide/16 v1, 0x1518

    .line 280
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/a;->b(J)V

    const-wide/16 v1, 0xe10

    .line 281
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/a;->c(J)V

    .line 282
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/a;->d(J)V

    const-wide/16 v1, 0x5

    .line 283
    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/videocommon/d/a;->e(J)V

    .line 284
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/d/a;->a(I)V

    return-object v0
.end method

.method public final c(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;
    .locals 2

    .line 437
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reward_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 438
    sget-object p2, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 439
    sget-object p2, Lcom/mbridge/msdk/videocommon/d/b;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p2, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/videocommon/d/c;

    return-object p1

    .line 441
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 442
    invoke-static {p1}, Lcom/mbridge/msdk/videocommon/d/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    return-object p1
.end method
