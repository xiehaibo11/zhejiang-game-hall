.class public final Lcom/tencent/bugly/proguard/ac;
.super Ljava/lang/Object;
.source "BUGLY"


# static fields
.field public static a:I = 0x3e8

.field public static b:J = 0xf731400L

.field private static d:Lcom/tencent/bugly/proguard/ac;

.field private static i:Ljava/lang/String;


# instance fields
.field public final c:Lcom/tencent/bugly/proguard/ak;

.field private final e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;"
        }
    .end annotation
.end field

.field private final f:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

.field private g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

.field private h:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;)V"
        }
    .end annotation

    .line 60
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 55
    iput-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    .line 61
    iput-object p1, p0, Lcom/tencent/bugly/proguard/ac;->h:Landroid/content/Context;

    .line 1338
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 1339
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p1

    iget-object p1, p1, Lcom/tencent/bugly/proguard/aa;->H:Ljava/lang/String;

    const-string v0, "oversea"

    .line 1341
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p1, "https://astat.bugly.qcloud.com/rqd/async"

    .line 1342
    sput-object p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->a:Ljava/lang/String;

    .line 1343
    sput-object p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string v0, "na_https"

    .line 1345
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "https://astat.bugly.cros.wr.pvp.net/:8180/rqd/async"

    .line 1346
    sput-object p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->a:Ljava/lang/String;

    .line 1347
    sput-object p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->b:Ljava/lang/String;

    .line 63
    :cond_1
    :goto_0
    new-instance p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    invoke-direct {p1}, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;-><init>()V

    iput-object p1, p0, Lcom/tencent/bugly/proguard/ac;->f:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    .line 64
    iput-object p2, p0, Lcom/tencent/bugly/proguard/ac;->e:Ljava/util/List;

    .line 65
    invoke-static {}, Lcom/tencent/bugly/proguard/ak;->a()Lcom/tencent/bugly/proguard/ak;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/ac;->c:Lcom/tencent/bugly/proguard/ak;

    return-void
.end method

.method static synthetic a(Lcom/tencent/bugly/proguard/ac;)Landroid/content/Context;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tencent/bugly/proguard/ac;->h:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic a(Lcom/tencent/bugly/proguard/ac;Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;
    .locals 0

    .line 32
    iput-object p1, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    return-object p1
.end method

.method public static declared-synchronized a()Lcom/tencent/bugly/proguard/ac;
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/ac;

    monitor-enter v0

    .line 125
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/proguard/ac;->d:Lcom/tencent/bugly/proguard/ac;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/util/List;)Lcom/tencent/bugly/proguard/ac;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tencent/bugly/proguard/o;",
            ">;)",
            "Lcom/tencent/bugly/proguard/ac;"
        }
    .end annotation

    const-class v0, Lcom/tencent/bugly/proguard/ac;

    monitor-enter v0

    .line 72
    :try_start_0
    sget-object v1, Lcom/tencent/bugly/proguard/ac;->d:Lcom/tencent/bugly/proguard/ac;

    if-nez v1, :cond_0

    .line 73
    new-instance v1, Lcom/tencent/bugly/proguard/ac;

    invoke-direct {v1, p0, p1}, Lcom/tencent/bugly/proguard/ac;-><init>(Landroid/content/Context;Ljava/util/List;)V

    sput-object v1, Lcom/tencent/bugly/proguard/ac;->d:Lcom/tencent/bugly/proguard/ac;

    .line 75
    :cond_0
    sget-object p0, Lcom/tencent/bugly/proguard/ac;->d:Lcom/tencent/bugly/proguard/ac;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;)V
    .locals 1

    .line 178
    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 182
    :cond_0
    sput-object p0, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    return-void

    :cond_1
    :goto_0
    const/4 p0, 0x0

    .line 179
    new-array p0, p0, [Ljava/lang/Object;

    const-string v0, "URL user set is invalid."

    invoke-static {v0, p0}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void
.end method

.method static synthetic b(Lcom/tencent/bugly/proguard/ac;)Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;
    .locals 0

    .line 32
    iget-object p0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    return-object p0
.end method

.method public static d()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;
    .locals 2

    .line 327
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/proguard/w;->a(I)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 328
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    const/4 v1, 0x0

    .line 329
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tencent/bugly/proguard/y;

    .line 330
    iget-object v1, v0, Lcom/tencent/bugly/proguard/y;->g:[B

    if-eqz v1, :cond_0

    .line 331
    iget-object v0, v0, Lcom/tencent/bugly/proguard/y;->g:[B

    sget-object v1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/ap;->a([BLandroid/os/Parcelable$Creator;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic e()Ljava/lang/String;
    .locals 1

    .line 32
    sget-object v0, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method protected final a(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;Z)V
    .locals 6

    const/4 v0, 0x1

    .line 158
    new-array v1, v0, [Ljava/lang/Object;

    const-class v2, Lcom/tencent/bugly/proguard/s;

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "[Strategy] Notify %s"

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 159
    invoke-static {p1, p2}, Lcom/tencent/bugly/proguard/s;->a(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;Z)V

    .line 160
    iget-object p2, p0, Lcom/tencent/bugly/proguard/ac;->e:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tencent/bugly/proguard/o;

    .line 162
    :try_start_0
    new-array v4, v0, [Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v3

    invoke-static {v2, v4}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 163
    invoke-virtual {v1, p1}, Lcom/tencent/bugly/proguard/o;->onServerStrategyChanged(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 165
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 166
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a(Lcom/tencent/bugly/proguard/bt;)V
    .locals 8

    if-nez p1, :cond_0

    return-void

    .line 192
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    if-eqz v0, :cond_1

    iget-wide v0, p1, Lcom/tencent/bugly/proguard/bt;->h:J

    iget-object v2, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    iget-wide v2, v2, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->o:J

    cmp-long v4, v0, v2

    if-nez v4, :cond_1

    return-void

    .line 197
    :cond_1
    new-instance v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    invoke-direct {v0}, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;-><init>()V

    .line 199
    iget-boolean v1, p1, Lcom/tencent/bugly/proguard/bt;->a:Z

    iput-boolean v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    .line 200
    iget-boolean v1, p1, Lcom/tencent/bugly/proguard/bt;->c:Z

    iput-boolean v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->h:Z

    .line 201
    iget-boolean v1, p1, Lcom/tencent/bugly/proguard/bt;->b:Z

    iput-boolean v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->g:Z

    .line 2252
    sget-object v1, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_2

    sget-object v1, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2253
    :cond_2
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 2254
    new-array v1, v2, [Ljava/lang/Object;

    iget-object v4, p1, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    aput-object v4, v1, v3

    const-string v4, "[Strategy] Upload url changes to %s"

    invoke-static {v4, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2255
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->q:Ljava/lang/String;

    .line 2257
    :cond_3
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 2258
    new-array v1, v2, [Ljava/lang/Object;

    iget-object v4, p1, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    aput-object v4, v1, v3

    const-string v4, "[Strategy] Exception upload url changes to %s"

    invoke-static {v4, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 2260
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->r:Ljava/lang/String;

    .line 2271
    :cond_4
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    if-eqz v1, :cond_5

    .line 2272
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    iget-object v1, v1, Lcom/tencent/bugly/proguard/bs;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_5

    .line 2273
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->f:Lcom/tencent/bugly/proguard/bs;

    iget-object v1, v1, Lcom/tencent/bugly/proguard/bs;->a:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->s:Ljava/lang/String;

    .line 207
    :cond_5
    iget-wide v4, p1, Lcom/tencent/bugly/proguard/bt;->h:J

    const-wide/16 v6, 0x0

    cmp-long v1, v4, v6

    if-eqz v1, :cond_6

    .line 208
    iget-wide v4, p1, Lcom/tencent/bugly/proguard/bt;->h:J

    iput-wide v4, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->o:J

    :cond_6
    if-eqz p1, :cond_c

    .line 2287
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    if-eqz v1, :cond_c

    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-gtz v1, :cond_7

    goto/16 :goto_3

    .line 2290
    :cond_7
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->t:Ljava/util/Map;

    .line 2291
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-string v4, "B11"

    invoke-interface {v1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v4, "1"

    if-eqz v1, :cond_8

    .line 2293
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_8

    const/4 v1, 0x1

    goto :goto_0

    :cond_8
    const/4 v1, 0x0

    :goto_0
    iput-boolean v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->i:Z

    .line 2295
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-string v5, "B3"

    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-eqz v1, :cond_9

    .line 2297
    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v5

    iput-wide v5, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->w:J

    .line 2300
    :cond_9
    iget v1, p1, Lcom/tencent/bugly/proguard/bt;->l:I

    int-to-long v5, v1

    iput-wide v5, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->p:J

    .line 2301
    iget v1, p1, Lcom/tencent/bugly/proguard/bt;->l:I

    int-to-long v5, v1

    iput-wide v5, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->v:J

    .line 2303
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-string v5, "B27"

    .line 2304
    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-eqz v1, :cond_a

    .line 2305
    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    if-lez v5, :cond_a

    .line 2307
    :try_start_0
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_a

    .line 2309
    iput v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->u:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 2312
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v5

    if-nez v5, :cond_a

    .line 2313
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 2317
    :cond_a
    :goto_1
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->g:Ljava/util/Map;

    const-string v5, "B25"

    invoke-interface {v1, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    if-eqz v1, :cond_b

    .line 2319
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_b

    const/4 v1, 0x1

    goto :goto_2

    :cond_b
    const/4 v1, 0x0

    :goto_2
    iput-boolean v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->k:Z

    :cond_c
    :goto_3
    const/16 v1, 0xa

    .line 212
    new-array v1, v1, [Ljava/lang/Object;

    iget-boolean v4, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->f:Z

    .line 216
    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    aput-object v4, v1, v3

    iget-boolean v4, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->h:Z

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    aput-object v4, v1, v2

    iget-boolean v4, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->g:Z

    invoke-static {v4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v4

    const/4 v5, 0x2

    aput-object v4, v1, v5

    const/4 v4, 0x3

    iget-boolean v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->i:Z

    .line 217
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v1, v4

    const/4 v4, 0x4

    iget-boolean v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->j:Z

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v1, v4

    const/4 v4, 0x5

    iget-boolean v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->m:Z

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v1, v4

    const/4 v4, 0x6

    iget-boolean v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->n:Z

    .line 218
    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v1, v4

    const/4 v4, 0x7

    iget-wide v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->p:J

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    aput-object v6, v1, v4

    const/16 v4, 0x8

    iget-boolean v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->k:Z

    invoke-static {v6}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v1, v4

    const/16 v4, 0x9

    iget-wide v6, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->o:J

    .line 219
    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    aput-object v6, v1, v4

    const-string v4, "[Strategy] enableCrashReport:%b, enableQuery:%b, enableUserInfo:%b, enableAnr:%b, enableBlock:%b, enableSession:%b, enableSessionTimer:%b, sessionOverTime:%d, enableCocos:%b, strategyLastUpdateTime:%d"

    .line 212
    invoke-static {v4, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 221
    iput-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    .line 222
    iget-object v1, p1, Lcom/tencent/bugly/proguard/bt;->d:Ljava/lang/String;

    invoke-static {v1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v1

    const-string v4, ""

    if-nez v1, :cond_d

    .line 223
    new-array v1, v3, [Ljava/lang/Object;

    const-string v6, "[Strategy] download url is null"

    invoke-static {v6, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 224
    iget-object v1, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    iput-object v4, v1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->q:Ljava/lang/String;

    .line 226
    :cond_d
    iget-object p1, p1, Lcom/tencent/bugly/proguard/bt;->e:Ljava/lang/String;

    invoke-static {p1}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_e

    .line 227
    new-array p1, v3, [Ljava/lang/Object;

    const-string v1, "[Strategy] download crashurl is null"

    invoke-static {v1, p1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 228
    iget-object p1, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    iput-object v4, p1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->r:Ljava/lang/String;

    .line 232
    :cond_e
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object p1

    invoke-virtual {p1, v5}, Lcom/tencent/bugly/proguard/w;->b(I)V

    .line 233
    new-instance p1, Lcom/tencent/bugly/proguard/y;

    invoke-direct {p1}, Lcom/tencent/bugly/proguard/y;-><init>()V

    .line 234
    iput v5, p1, Lcom/tencent/bugly/proguard/y;->b:I

    .line 235
    iget-wide v3, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->d:J

    iput-wide v3, p1, Lcom/tencent/bugly/proguard/y;->a:J

    .line 236
    iget-wide v3, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->e:J

    iput-wide v3, p1, Lcom/tencent/bugly/proguard/y;->e:J

    .line 237
    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->a(Landroid/os/Parcelable;)[B

    move-result-object v1

    iput-object v1, p1, Lcom/tencent/bugly/proguard/y;->g:[B

    .line 238
    invoke-static {}, Lcom/tencent/bugly/proguard/w;->a()Lcom/tencent/bugly/proguard/w;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/tencent/bugly/proguard/w;->a(Lcom/tencent/bugly/proguard/y;)Z

    .line 241
    invoke-virtual {p0, v0, v2}, Lcom/tencent/bugly/proguard/ac;->a(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;Z)V

    return-void
.end method

.method public final declared-synchronized b()Z
    .locals 1

    monitor-enter p0

    .line 129
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    monitor-exit p0

    return v0

    :cond_0
    const/4 v0, 0x0

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final c()Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;
    .locals 2

    .line 136
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    if-eqz v0, :cond_2

    .line 137
    iget-object v0, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->q:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    sget-object v1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->a:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->q:Ljava/lang/String;

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    iget-object v0, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->r:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 141
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    sget-object v1, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->b:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->r:Ljava/lang/String;

    .line 143
    :cond_1
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->g:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    return-object v0

    .line 145
    :cond_2
    sget-object v0, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_3

    sget-object v0, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    .line 146
    invoke-static {v0}, Lcom/tencent/bugly/proguard/ap;->d(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 147
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->f:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    sget-object v1, Lcom/tencent/bugly/proguard/ac;->i:Ljava/lang/String;

    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->q:Ljava/lang/String;

    .line 148
    iput-object v1, v0, Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;->r:Ljava/lang/String;

    .line 150
    :cond_3
    iget-object v0, p0, Lcom/tencent/bugly/proguard/ac;->f:Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;

    return-object v0
.end method
