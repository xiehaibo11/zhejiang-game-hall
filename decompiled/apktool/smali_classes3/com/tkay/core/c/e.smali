.class public Lcom/tkay/core/c/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/c/e$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile b:Lcom/tkay/core/c/e;


# instance fields
.field private c:Landroid/content/Context;

.field private d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/tkay/core/c/e;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/c/e;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 37
    sput-object v0, Lcom/tkay/core/c/e;->b:Lcom/tkay/core/c/e;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 53
    iput-object p1, p0, Lcom/tkay/core/c/e;->c:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/c/e;)Landroid/content/Context;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/core/c/e;->c:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/c/e;
    .locals 2

    .line 57
    sget-object v0, Lcom/tkay/core/c/e;->b:Lcom/tkay/core/c/e;

    if-nez v0, :cond_1

    .line 58
    const-class v0, Lcom/tkay/core/c/e;

    monitor-enter v0

    .line 59
    :try_start_0
    sget-object v1, Lcom/tkay/core/c/e;->b:Lcom/tkay/core/c/e;

    if-nez v1, :cond_0

    .line 60
    new-instance v1, Lcom/tkay/core/c/e;

    invoke-direct {v1, p0}, Lcom/tkay/core/c/e;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/c/e;->b:Lcom/tkay/core/c/e;

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
    sget-object p0, Lcom/tkay/core/c/e;->b:Lcom/tkay/core/c/e;

    return-object p0
.end method

.method static synthetic a(Landroid/content/Context;Lcom/tkay/core/c/d;)V
    .locals 2

    .line 1101
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->e()I

    move-result p1

    .line 1102
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/m;->c(I)V

    const-string v0, "tkay_sdk"

    const-string v1, "r"

    .line 1104
    invoke-static {p0, v0, v1, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method private a(Lorg/json/JSONObject;Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_2

    if-nez p2, :cond_0

    .line 407
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "p_c"

    if-eqz p2, :cond_1

    .line 413
    :try_start_0
    invoke-virtual {p1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    return-void

    .line 416
    :cond_1
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 417
    invoke-virtual {p0, p3}, Lcom/tkay/core/c/e;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 419
    invoke-virtual {p2}, Lcom/tkay/core/c/d;->ax()Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 421
    invoke-virtual {p1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_2
    :goto_0
    return-void
.end method

.method private b()V
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    return-void
.end method

.method private static b(Landroid/content/Context;Lcom/tkay/core/c/d;)V
    .locals 2

    .line 101
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->e()I

    move-result p1

    .line 102
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/b/m;->c(I)V

    const-string v0, "tkay_sdk"

    const-string v1, "r"

    .line 104
    invoke-static {p0, v0, v1, p1}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method private c(Ljava/lang/String;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/r;",
            ">;"
        }
    .end annotation

    .line 386
    iget-object v0, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 390
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 391
    iget-object v1, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1}, Ljava/util/concurrent/ConcurrentHashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 393
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 394
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/c/d;

    .line 395
    invoke-virtual {v2}, Lcom/tkay/core/c/d;->Y()I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 396
    invoke-virtual {v2}, Lcom/tkay/core/c/d;->F()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 398
    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_0

    :cond_2
    return-object v1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/c/d;
    .locals 5

    .line 112
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    move-object v0, v1

    .line 114
    :goto_0
    iget-object v2, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 115
    iget-object v1, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/c/d;

    return-object p1

    .line 117
    :cond_1
    iget-object v2, p0, Lcom/tkay/core/c/e;->c:Landroid/content/Context;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_PL_SY"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "tkay_sdk"

    invoke-static {v2, v4, v3, v1}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 118
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 119
    invoke-static {v1}, Lcom/tkay/core/c/d;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 121
    iget-object v2, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    return-object v1

    .line 125
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "no key["

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x0

    return-object p1
.end method

.method public final a()V
    .locals 3

    .line 72
    iget-object v0, p0, Lcom/tkay/core/c/e;->c:Landroid/content/Context;

    const-string v1, "tkay_placement_strategy_update_check"

    if-eqz v0, :cond_0

    const/4 v2, 0x0

    .line 1025
    :try_start_0
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 1026
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_0
    return-void
.end method

.method public final a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;)V
    .locals 3

    .line 79
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, ""

    .line 82
    :goto_0
    monitor-enter p0

    .line 83
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, p3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 87
    invoke-virtual {p3}, Lcom/tkay/core/c/d;->i()I

    move-result p3

    const/4 v1, 0x1

    if-ne p3, v1, :cond_2

    .line 88
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->H()Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "tkay"

    const-string p2, "PreInitNetwork may affect DebuggerMode.It is recommended to disable PreInitNetwork first and then setDebuggerMode."

    .line 89
    invoke-static {p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void

    .line 95
    :cond_2
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_3

    const-string p4, ""

    .line 96
    :cond_3
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_PL_SY"

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "tkay_sdk"

    invoke-static {p1, p3, p2, p4}, Lcom/tkay/core/common/l/p;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :catchall_0
    move-exception p1

    .line 84
    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/c/e$a;)V
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/c/d;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/c/e$a;",
            ")V"
        }
    .end annotation

    .line 144
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v9, Lcom/tkay/core/c/e$1;

    move-object v1, v9

    move-object v2, p0

    move-object v3, p1

    move-object v4, p4

    move-object/from16 v5, p6

    move-object v6, p2

    move-object v7, p3

    move-object v8, p5

    invoke-direct/range {v1 .. v8}, Lcom/tkay/core/c/e$1;-><init>(Lcom/tkay/core/c/e;Lcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/c/e$a;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    invoke-virtual {v0, v9}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/core/c/d;
    .locals 3

    .line 132
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    .line 133
    iget-object v1, p0, Lcom/tkay/core/c/e;->d:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/c/d;

    return-object p1
.end method
