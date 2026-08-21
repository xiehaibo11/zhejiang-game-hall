.class public Lcom/tkay/core/common/e/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "DomainManager"

.field private static final b:Ljava/lang/String; = "tkay_sdk"

.field private static final c:Ljava/lang/String; = "cdn_request_time_key"

.field private static final d:Ljava/lang/String; = "cur_using_domain_key"

.field private static final e:Ljava/lang/String; = "ru"

.field private static final f:Ljava/lang/String; = "api."

.field private static final g:I = 0x18

.field private static final h:Ljava/lang/String; = "api.anythinktech.com"

.field private static final i:Ljava/lang/String; = "api.toponadss.com"

.field private static volatile q:Lcom/tkay/core/common/e/a;


# instance fields
.field private final j:Ljava/lang/Object;

.field private final k:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private volatile l:Z

.field private volatile m:Z

.field private volatile n:J

.field private volatile o:Ljava/lang/String;

.field private volatile p:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 42
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/e/a;->j:Ljava/lang/Object;

    .line 43
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/e/a;->k:Ljava/util/List;

    const-string v0, ""

    .line 48
    iput-object v0, p0, Lcom/tkay/core/common/e/a;->o:Ljava/lang/String;

    .line 49
    iput-object v0, p0, Lcom/tkay/core/common/e/a;->p:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/e/a;
    .locals 2

    .line 58
    sget-object v0, Lcom/tkay/core/common/e/a;->q:Lcom/tkay/core/common/e/a;

    if-nez v0, :cond_0

    .line 59
    const-class v0, Lcom/tkay/core/common/e/a;

    monitor-enter v0

    .line 60
    :try_start_0
    new-instance v1, Lcom/tkay/core/common/e/a;

    invoke-direct {v1}, Lcom/tkay/core/common/e/a;-><init>()V

    sput-object v1, Lcom/tkay/core/common/e/a;->q:Lcom/tkay/core/common/e/a;

    .line 61
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 63
    :cond_0
    :goto_0
    sget-object v0, Lcom/tkay/core/common/e/a;->q:Lcom/tkay/core/common/e/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/e/a;)Ljava/util/List;
    .locals 0

    .line 29
    iget-object p0, p0, Lcom/tkay/core/common/e/a;->k:Ljava/util/List;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/core/common/e/a;Landroid/content/Context;)V
    .locals 3

    .line 1312
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 1313
    iput-wide v0, p0, Lcom/tkay/core/common/e/a;->n:J

    const-string p0, "tkay_sdk"

    const-string v2, "cdn_request_time_key"

    .line 1314
    invoke-static {p1, p0, v2, v0, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/e/a;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 29
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 353
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/tkay/core/common/e/a;->c(Landroid/content/Context;)Ljava/lang/Long;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 354
    iget-object v1, p0, Lcom/tkay/core/common/e/a;->p:Ljava/lang/String;

    invoke-static {v1, p1, p2, v0}, Lcom/tkay/core/common/k/c;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 236
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 239
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iput-object p1, p0, Lcom/tkay/core/common/e/a;->p:Ljava/lang/String;

    .line 240
    iget-object p1, p0, Lcom/tkay/core/common/e/a;->p:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/tkay/core/common/e/a;->c(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_3

    .line 246
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 252
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 253
    invoke-static {p1, p2}, Lcom/tkay/core/common/e/a;->c(Ljava/util/List;Ljava/lang/String;)V

    :cond_1
    const/4 v0, 0x0

    .line 255
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 256
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_2

    return-void

    .line 260
    :cond_2
    invoke-direct {p0, p1}, Lcom/tkay/core/common/e/a;->c(Ljava/lang/String;)V

    .line 262
    invoke-static {}, Lcom/tkay/core/common/e/a;->c()V

    .line 263
    invoke-direct {p0, p1, p3}, Lcom/tkay/core/common/e/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 265
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    const-string p3, "tkay_sdk"

    const-string v0, "cur_using_domain_key"

    invoke-static {p2, p3, v0, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 203
    invoke-static {p1, p3}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;Ljava/lang/String;)Z

    move-result v0

    .line 204
    invoke-static {v0}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v1

    const-string v2, "handleSwitchDomain() >>> isCanSwitch = "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    if-nez v0, :cond_0

    return-void

    .line 209
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 210
    invoke-direct {p0, p1, p3, p4}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 213
    :cond_1
    invoke-virtual {p2, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 214
    invoke-static {p1, p3}, Lcom/tkay/core/common/e/a;->c(Ljava/util/List;Ljava/lang/String;)V

    goto :goto_0

    .line 216
    :cond_2
    invoke-static {p1, p2}, Lcom/tkay/core/common/e/a;->b(Ljava/util/List;Ljava/lang/String;)V

    .line 218
    :goto_0
    invoke-direct {p0, p1, p3, p4}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Ljava/util/List;Ljava/lang/String;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 271
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 272
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 273
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "isCanSwitchDomain() >>> firstDomain = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " failedDomain = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    .line 274
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0

    :cond_0
    return v1
.end method

.method private b(Landroid/content/Context;)V
    .locals 4

    .line 312
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 313
    iput-wide v0, p0, Lcom/tkay/core/common/e/a;->n:J

    const-string v2, "tkay_sdk"

    const-string v3, "cdn_request_time_key"

    .line 314
    invoke-static {p1, v2, v3, v0, v1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method private static b(Ljava/util/List;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 280
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    if-nez p0, :cond_0

    goto :goto_0

    .line 284
    :cond_0
    invoke-interface {p0, p1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v0

    const/4 v1, 0x0

    if-lez v0, :cond_1

    .line 286
    invoke-interface {p0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 287
    invoke-interface {p0, v1, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    return-void

    :cond_1
    if-gez v0, :cond_2

    .line 289
    invoke-interface {p0, v1, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private static b()Z
    .locals 2

    .line 328
    :try_start_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, ""

    :goto_0
    const-string v1, "ru"

    .line 331
    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method static synthetic b(Lcom/tkay/core/common/e/a;)Z
    .locals 1

    const/4 v0, 0x0

    .line 29
    iput-boolean v0, p0, Lcom/tkay/core/common/e/a;->m:Z

    return v0
.end method

.method private c(Landroid/content/Context;)Ljava/lang/Long;
    .locals 5

    .line 318
    iget-wide v0, p0, Lcom/tkay/core/common/e/a;->n:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-nez v4, :cond_0

    .line 320
    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "tkay_sdk"

    const-string v2, "cdn_request_time_key"

    invoke-static {p1, v1, v2, v0}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    .line 322
    :cond_0
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    return-object p1
.end method

.method private static c()V
    .locals 1

    .line 335
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/c/b;->b()V

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 1

    .line 102
    iput-object p1, p0, Lcom/tkay/core/common/e/a;->o:Ljava/lang/String;

    .line 103
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "setCurrentDomain() >>> currentDomain = "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    return-void
.end method

.method private static c(Ljava/util/List;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 296
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    if-nez p0, :cond_0

    goto :goto_0

    .line 299
    :cond_0
    invoke-interface {p0, p1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v0

    if-ltz v0, :cond_1

    .line 301
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    if-ge v0, v1, :cond_1

    .line 302
    invoke-interface {p0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 303
    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_1
    if-gez v0, :cond_2

    .line 305
    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    :goto_0
    return-void
.end method

.method private static d()V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    return-void
.end method

.method private static d(Ljava/lang/String;)V
    .locals 3

    .line 339
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " threadId = "

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Thread;->getId()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 108
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isCnSDK()Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p1

    .line 112
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/e/a;->o:Ljava/lang/String;

    .line 113
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object p1

    .line 116
    :cond_1
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 117
    invoke-virtual {v1}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v1

    .line 118
    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception v0

    .line 120
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "replaceUrlDomain() >> exception:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    return-object p1
.end method

.method public final a(Landroid/content/Context;)V
    .locals 4

    .line 70
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isCnSDK()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 74
    :cond_0
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_1

    .line 75
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    .line 77
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/core/common/e/a;->l:Z

    if-eqz v0, :cond_2

    return-void

    :cond_2
    const/4 v0, 0x1

    .line 80
    iput-boolean v0, p0, Lcom/tkay/core/common/e/a;->l:Z

    .line 82
    iget-object v0, p0, Lcom/tkay/core/common/e/a;->k:Ljava/util/List;

    .line 84
    invoke-static {}, Lcom/tkay/core/common/e/a;->b()Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "api.anythinktech.com"

    .line 85
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_3
    const-string v1, "api.toponadss.com"

    .line 87
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    const-string v1, "tkay_sdk"

    const-string v2, "cur_using_domain_key"

    const-string v3, ""

    .line 90
    invoke-static {p1, v1, v2, v3}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 91
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "initDomain() >>> curUseDomain = "

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    .line 92
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 93
    invoke-static {v0, p1}, Lcom/tkay/core/common/e/a;->b(Ljava/util/List;Ljava/lang/String;)V

    .line 94
    invoke-direct {p0, v0}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;)V

    return-void

    .line 98
    :cond_4
    invoke-direct {p0, v0}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 9

    .line 129
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "tryGetDomainFromCdn() >>> start isTrying = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/tkay/core/common/e/a;->m:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " url = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    .line 130
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 132
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-boolean v1, p0, Lcom/tkay/core/common/e/a;->m:Z

    if-nez v1, :cond_3

    invoke-static {v0}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_0

    goto/16 :goto_1

    .line 137
    :cond_0
    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 139
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "tryGetDomainFromCdn() >>> "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    const-string v1, ""

    .line 144
    :goto_0
    iget-object v2, p0, Lcom/tkay/core/common/e/a;->j:Ljava/lang/Object;

    monitor-enter v2

    .line 145
    :try_start_1
    iget-boolean v3, p0, Lcom/tkay/core/common/e/a;->m:Z

    if-eqz v3, :cond_1

    .line 146
    monitor-exit v2

    return-void

    :cond_1
    const/4 v3, 0x1

    .line 149
    iput-boolean v3, p0, Lcom/tkay/core/common/e/a;->m:Z

    .line 152
    invoke-direct {p0, v0}, Lcom/tkay/core/common/e/a;->c(Landroid/content/Context;)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    iput-wide v3, p0, Lcom/tkay/core/common/e/a;->n:J

    .line 153
    iget-wide v3, p0, Lcom/tkay/core/common/e/a;->n:J

    const-wide/16 v5, 0x0

    cmp-long v3, v3, v5

    const/4 v4, 0x0

    if-lez v3, :cond_2

    .line 154
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    iget-wide v7, p0, Lcom/tkay/core/common/e/a;->n:J

    sub-long/2addr v5, v7

    const-wide/32 v7, 0x36ee80

    div-long/2addr v5, v7

    const-wide/16 v7, 0x18

    cmp-long v3, v5, v7

    if-gez v3, :cond_2

    const-string v0, "tryGetDomainFromCdn() >>> intervalTime = "

    .line 156
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/e/a;->d(Ljava/lang/String;)V

    .line 157
    iget-object v0, p0, Lcom/tkay/core/common/e/a;->k:Ljava/util/List;

    const-string v3, ""

    invoke-direct {p0, v0, v3, v1, p1}, Lcom/tkay/core/common/e/a;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 158
    iput-boolean v4, p0, Lcom/tkay/core/common/e/a;->m:Z

    .line 159
    monitor-exit v2

    return-void

    .line 164
    :cond_2
    new-instance v3, Lcom/tkay/core/common/h/h;

    invoke-direct {v3}, Lcom/tkay/core/common/h/h;-><init>()V

    new-instance v5, Lcom/tkay/core/common/e/a$1;

    invoke-direct {v5, p0, v0, v1, p1}, Lcom/tkay/core/common/e/a$1;-><init>(Lcom/tkay/core/common/e/a;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3, v4, v5}, Lcom/tkay/core/common/h/h;->a(ILcom/tkay/core/common/h/k;)V

    .line 192
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v2

    throw p1

    :cond_3
    :goto_1
    return-void
.end method
