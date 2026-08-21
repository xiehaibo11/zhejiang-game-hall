.class public Lcom/tkay/core/c/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/c/b$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile c:Lcom/tkay/core/c/b;

.field private static volatile d:Lcom/tkay/core/c/a;


# instance fields
.field b:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/c/b$a;",
            ">;"
        }
    .end annotation
.end field

.field private e:Landroid/content/Context;

.field private f:Z

.field private g:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 40
    const-class v0, Lcom/tkay/core/c/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/c/b;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 41
    sput-object v0, Lcom/tkay/core/c/b;->c:Lcom/tkay/core/c/b;

    .line 42
    sput-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/c/b;->g:Ljava/lang/Object;

    .line 51
    iput-object p1, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    const/4 p1, 0x0

    .line 52
    iput-boolean p1, p0, Lcom/tkay/core/c/b;->f:Z

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    const/4 v0, 0x3

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {p1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/c/b;->b:Ljava/util/List;

    return-void
.end method

.method public static a()J
    .locals 4

    .line 174
    sget-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->J()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    goto :goto_0

    .line 177
    :cond_0
    sget-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->J()J

    move-result-wide v0

    return-wide v0

    :cond_1
    :goto_0
    const-wide/32 v0, 0xc800

    return-wide v0
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/core/c/a;
    .locals 2

    .line 222
    invoke-static {p0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/c/d;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/d;

    move-result-object p0

    const-string v0, "AP_SY"

    invoke-virtual {p0, p1, v0}, Lcom/tkay/core/common/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p0

    const/4 p1, 0x0

    if-eqz p0, :cond_0

    .line 224
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    .line 225
    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/f/af;

    if-eqz p0, :cond_0

    .line 227
    invoke-virtual {p0}, Lcom/tkay/core/common/f/af;->d()Ljava/lang/String;

    move-result-object p1

    .line 228
    invoke-static {p1}, Lcom/tkay/core/c/a;->f(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 230
    invoke-virtual {p0}, Lcom/tkay/core/common/f/af;->a()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/c/a;->a(J)V

    :cond_0
    return-object p1
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/c/a;
    .locals 2

    .line 243
    invoke-static {p0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/d;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/d;

    move-result-object v0

    const-string v1, "AP_SY"

    invoke-virtual {v0, p1, p2, v1}, Lcom/tkay/core/common/c/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J

    .line 244
    invoke-static {p2}, Lcom/tkay/core/c/a;->f(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p1

    .line 245
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/c/a;->a(J)V

    .line 246
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->U()I

    move-result p2

    const-string v0, "tkay_sdk"

    const-string v1, "EU_INFO"

    invoke-static {p0, v0, v1, p2}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-object p1
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/c/b;
    .locals 2

    .line 57
    sget-object v0, Lcom/tkay/core/c/b;->c:Lcom/tkay/core/c/b;

    if-nez v0, :cond_1

    .line 58
    const-class v0, Lcom/tkay/core/c/b;

    monitor-enter v0

    .line 59
    :try_start_0
    sget-object v1, Lcom/tkay/core/c/b;->c:Lcom/tkay/core/c/b;

    if-nez v1, :cond_0

    .line 60
    new-instance v1, Lcom/tkay/core/c/b;

    invoke-direct {v1, p0}, Lcom/tkay/core/c/b;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/c/b;->c:Lcom/tkay/core/c/b;

    .line 62
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 64
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/c/b;->c:Lcom/tkay/core/c/b;

    return-object p0
.end method

.method private static a(Landroid/content/Context;Lcom/tkay/core/c/a;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 368
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->n()Ljava/lang/String;

    move-result-object p1

    .line 369
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 370
    invoke-static {p0}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object p0

    new-instance v0, Lcom/tkay/core/common/res/e;

    const/4 v1, 0x3

    invoke-direct {v0, v1, p1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    const/4 p1, 0x0

    invoke-virtual {p0, v0, p1}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    :cond_1
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    if-eqz p2, :cond_3

    .line 433
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 434
    invoke-static {p1, p3, p2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p2

    .line 435
    sput-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-eqz p2, :cond_2

    .line 436
    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2}, Lcom/tkay/core/c/a;->s()Ljava/lang/String;

    move-result-object p2

    .line 437
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 438
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3, p2}, Lcom/tkay/core/common/b/m;->i(Ljava/lang/String;)V

    .line 441
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object p2

    sget-object p3, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2, p3}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/c/a;)V

    .line 443
    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-eqz p2, :cond_1

    .line 3368
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->n()Ljava/lang/String;

    move-result-object p2

    .line 3369
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    .line 3370
    invoke-static {p1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object p1

    new-instance p3, Lcom/tkay/core/common/res/e;

    const/4 v0, 0x3

    invoke-direct {p3, v0, p2}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    const/4 p2, 0x0

    invoke-virtual {p1, p3, p2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 446
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/c/b$3;

    invoke-direct {p2, p0}, Lcom/tkay/core/c/b$3;-><init>(Lcom/tkay/core/c/b;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 454
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object p1

    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2}, Lcom/tkay/core/c/a;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/c;->a(Ljava/lang/String;)V

    .line 457
    :cond_2
    invoke-direct {p0}, Lcom/tkay/core/c/b;->e()V

    :cond_3
    return-void
.end method

.method private a(Lcom/tkay/core/c/b$a;)V
    .locals 2

    .line 76
    iget-object v0, p0, Lcom/tkay/core/c/b;->g:Ljava/lang/Object;

    monitor-enter v0

    .line 77
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/c/b;->g:Ljava/lang/Object;

    if-eqz v1, :cond_0

    .line 78
    iget-object v1, p0, Lcom/tkay/core/c/b;->b:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 80
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

.method static synthetic a(Lcom/tkay/core/c/b;Landroid/content/Context;Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    if-eqz p2, :cond_3

    .line 3433
    invoke-virtual {p2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p2

    .line 3434
    invoke-static {p1, p3, p2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p2

    .line 3435
    sput-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-eqz p2, :cond_2

    .line 3436
    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2}, Lcom/tkay/core/c/a;->s()Ljava/lang/String;

    move-result-object p2

    .line 3437
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/core/common/b/m;->x()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 3438
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p3

    invoke-virtual {p3, p2}, Lcom/tkay/core/common/b/m;->i(Ljava/lang/String;)V

    .line 3441
    :cond_0
    invoke-static {p1}, Lcom/tkay/core/common/r;->a(Landroid/content/Context;)Lcom/tkay/core/common/r;

    move-result-object p2

    sget-object p3, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2, p3}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/c/a;)V

    .line 3443
    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-eqz p2, :cond_1

    .line 4368
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->n()Ljava/lang/String;

    move-result-object p2

    .line 4369
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    .line 4370
    invoke-static {p1}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object p1

    new-instance p3, Lcom/tkay/core/common/res/e;

    const/4 v0, 0x3

    invoke-direct {p3, v0, p2}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    const/4 p2, 0x0

    invoke-virtual {p1, p3, p2}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 3446
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance p2, Lcom/tkay/core/c/b$3;

    invoke-direct {p2, p0}, Lcom/tkay/core/c/b$3;-><init>(Lcom/tkay/core/c/b;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    .line 3454
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object p1

    sget-object p2, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    invoke-virtual {p2}, Lcom/tkay/core/c/a;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/c;->a(Ljava/lang/String;)V

    .line 3457
    :cond_2
    invoke-direct {p0}, Lcom/tkay/core/c/b;->e()V

    :cond_3
    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 2

    .line 384
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 386
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->am()Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "a_c"

    .line 388
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/c/b;)Z
    .locals 1

    const/4 v0, 0x0

    .line 39
    iput-boolean v0, p0, Lcom/tkay/core/c/b;->f:Z

    return v0
.end method

.method static synthetic b(Lcom/tkay/core/c/b;)Landroid/content/Context;
    .locals 0

    .line 39
    iget-object p0, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    return-object p0
.end method

.method private b(Landroid/content/Context;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    return-void
.end method

.method private b(Lcom/tkay/core/c/b$a;)V
    .locals 2

    .line 100
    iget-object v0, p0, Lcom/tkay/core/c/b;->g:Ljava/lang/Object;

    monitor-enter v0

    if-eqz p1, :cond_0

    .line 102
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/c/b;->b:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 104
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

.method static synthetic c()Lcom/tkay/core/c/a;
    .locals 1

    .line 39
    sget-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    return-object v0
.end method

.method static synthetic c(Lcom/tkay/core/c/b;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Lcom/tkay/core/c/b;->e()V

    return-void
.end method

.method private d()Landroid/content/Context;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    return-object v0
.end method

.method private e()V
    .locals 3

    .line 84
    iget-object v0, p0, Lcom/tkay/core/c/b;->g:Ljava/lang/Object;

    monitor-enter v0

    .line 85
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/c/b;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    goto :goto_0

    .line 95
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/c/b;->b:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    .line 96
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static f()Lcom/tkay/core/c/a;
    .locals 3

    .line 185
    new-instance v0, Lcom/tkay/core/c/a;

    invoke-direct {v0}, Lcom/tkay/core/c/a;-><init>()V

    const/4 v1, 0x1

    .line 186
    iput-boolean v1, v0, Lcom/tkay/core/c/a;->b:Z

    .line 187
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->Q()V

    const-string v1, "0"

    .line 188
    invoke-virtual {v0, v1}, Lcom/tkay/core/c/a;->b(Ljava/lang/String;)V

    const-wide/16 v1, 0x0

    .line 189
    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/c/a;->a(J)V

    .line 190
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->W()V

    .line 192
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->Z()V

    .line 193
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ab()V

    const-string v1, ""

    .line 194
    invoke-virtual {v0, v1}, Lcom/tkay/core/c/a;->c(Ljava/lang/String;)V

    .line 196
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ae()V

    .line 197
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ag()V

    .line 198
    invoke-virtual {v0, v1}, Lcom/tkay/core/c/a;->d(Ljava/lang/String;)V

    .line 200
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->O()V

    .line 201
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->K()V

    .line 203
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->C()V

    .line 204
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->E()V

    const-string v1, "[\"com.tkay\"]"

    .line 206
    invoke-virtual {v0, v1}, Lcom/tkay/core/c/a;->a(Ljava/lang/String;)V

    .line 207
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->y()V

    .line 209
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->e()V

    .line 210
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->i()V

    .line 211
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->g()V

    .line 212
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->k()V

    return-object v0
.end method

.method private g()Z
    .locals 1

    .line 251
    iget-boolean v0, p0, Lcom/tkay/core/c/b;->f:Z

    return v0
.end method

.method private static h()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 258
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/c/b;->f:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 259
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 261
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/c/b;->f:Z

    .line 262
    new-instance v0, Lcom/tkay/core/common/h/d;

    iget-object v1, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    invoke-direct {v0, v1, p1, p2}, Lcom/tkay/core/common/h/d;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p2, 0x0

    .line 263
    new-instance v1, Lcom/tkay/core/c/b$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/c/b$1;-><init>(Lcom/tkay/core/c/b;Ljava/lang/String;)V

    invoke-virtual {v0, p2, v1}, Lcom/tkay/core/common/h/d;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 287
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 10

    .line 112
    invoke-virtual {p0, p1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p1

    const/4 v0, 0x1

    if-eqz p1, :cond_4

    .line 114
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->a()Lcom/tkay/core/c/c;

    move-result-object v1

    .line 115
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->P()J

    move-result-wide v2

    .line 116
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 117
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->L()J

    move-result-wide v6

    add-long/2addr v6, v2

    cmp-long v2, v6, v4

    const/4 v3, 0x0

    if-gtz v2, :cond_0

    move v2, v0

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    if-eqz v1, :cond_1

    .line 123
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->L()J

    move-result-wide v6

    invoke-virtual {v1}, Lcom/tkay/core/c/c;->a()J

    move-result-wide v8

    add-long/2addr v6, v8

    cmp-long v1, v6, v4

    if-gtz v1, :cond_1

    move v1, v0

    goto :goto_1

    :cond_1
    move v1, v3

    .line 1910
    :goto_1
    iget-object p1, p1, Lcom/tkay/core/c/a;->c:Ljava/util/Map;

    .line 128
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v4

    if-eqz p1, :cond_2

    .line 130
    invoke-interface {p1, v4}, Ljava/util/Map;->equals(Ljava/lang/Object;)Z

    move-result p1

    xor-int/2addr p1, v0

    goto :goto_2

    :cond_2
    if-eqz v4, :cond_3

    move p1, v0

    goto :goto_2

    :cond_3
    move p1, v3

    :goto_2
    if-nez v2, :cond_4

    if-nez v1, :cond_4

    if-nez p1, :cond_4

    return v3

    :cond_4
    return v0
.end method

.method public final declared-synchronized b(Ljava/lang/String;)Lcom/tkay/core/c/a;
    .locals 3

    monitor-enter p0

    .line 150
    :try_start_0
    sget-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_2

    .line 152
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    if-nez v0, :cond_0

    .line 153
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    .line 155
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    .line 2222
    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/d;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/d;

    move-result-object v0

    const-string v1, "AP_SY"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object p1

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 2224
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    const/4 v1, 0x0

    .line 2225
    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/f/af;

    if-eqz p1, :cond_1

    .line 2227
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->d()Ljava/lang/String;

    move-result-object v0

    .line 2228
    invoke-static {v0}, Lcom/tkay/core/c/a;->f(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2230
    invoke-virtual {p1}, Lcom/tkay/core/common/f/af;->a()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/c/a;->a(J)V

    .line 156
    :cond_1
    sput-object v0, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;

    if-nez v0, :cond_2

    .line 3185
    new-instance p1, Lcom/tkay/core/c/a;

    invoke-direct {p1}, Lcom/tkay/core/c/a;-><init>()V

    const/4 v0, 0x1

    .line 3186
    iput-boolean v0, p1, Lcom/tkay/core/c/a;->b:Z

    .line 3187
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->Q()V

    const-string v0, "0"

    .line 3188
    invoke-virtual {p1, v0}, Lcom/tkay/core/c/a;->b(Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    .line 3189
    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/c/a;->a(J)V

    .line 3190
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->W()V

    .line 3192
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->Z()V

    .line 3193
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->ab()V

    const-string v0, ""

    .line 3194
    invoke-virtual {p1, v0}, Lcom/tkay/core/c/a;->c(Ljava/lang/String;)V

    .line 3196
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->ae()V

    .line 3197
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->ag()V

    const-string v0, ""

    .line 3198
    invoke-virtual {p1, v0}, Lcom/tkay/core/c/a;->d(Ljava/lang/String;)V

    .line 3200
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->O()V

    .line 3201
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->K()V

    .line 3203
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->C()V

    .line 3204
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->E()V

    const-string v0, "[\"com.tkay\"]"

    .line 3206
    invoke-virtual {p1, v0}, Lcom/tkay/core/c/a;->a(Ljava/lang/String;)V

    .line 3207
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->y()V

    .line 3209
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->e()V

    .line 3210
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->i()V

    .line 3211
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->g()V

    .line 3212
    invoke-virtual {p1}, Lcom/tkay/core/c/a;->k()V

    .line 157
    sput-object p1, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 167
    :catch_0
    :cond_2
    :try_start_2
    sget-object p1, Lcom/tkay/core/c/b;->d:Lcom/tkay/core/c/a;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b()V
    .locals 5

    .line 400
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    .line 401
    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    .line 402
    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->p()Ljava/lang/String;

    move-result-object v0

    .line 403
    iget-object v2, p0, Lcom/tkay/core/c/b;->e:Landroid/content/Context;

    if-eqz v2, :cond_1

    .line 404
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_0

    .line 408
    :cond_0
    new-instance v3, Lcom/tkay/core/common/h/g;

    invoke-direct {v3, v2, v1, v0}, Lcom/tkay/core/common/h/g;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 409
    new-instance v4, Lcom/tkay/core/c/b$2;

    invoke-direct {v4, p0, v2, v1}, Lcom/tkay/core/c/b$2;-><init>(Lcom/tkay/core/c/b;Landroid/content/Context;Ljava/lang/String;)V

    invoke-virtual {v3, v0, v4}, Lcom/tkay/core/common/h/g;->a(ILcom/tkay/core/common/h/k;)V

    :cond_1
    :goto_0
    return-void
.end method
