.class public Lcom/tkay/core/common/res/a/c;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Lcom/tkay/core/common/res/a/c;


# instance fields
.field private final b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/res/a/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 14
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/res/a/c;->b:Ljava/util/Map;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/res/a/c;
    .locals 2

    .line 18
    sget-object v0, Lcom/tkay/core/common/res/a/c;->a:Lcom/tkay/core/common/res/a/c;

    if-nez v0, :cond_1

    .line 19
    const-class v0, Lcom/tkay/core/common/res/a/c;

    monitor-enter v0

    .line 20
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/res/a/c;->a:Lcom/tkay/core/common/res/a/c;

    if-nez v1, :cond_0

    .line 21
    new-instance v1, Lcom/tkay/core/common/res/a/c;

    invoke-direct {v1}, Lcom/tkay/core/common/res/a/c;-><init>()V

    sput-object v1, Lcom/tkay/core/common/res/a/c;->a:Lcom/tkay/core/common/res/a/c;

    .line 22
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 24
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/res/a/c;->a:Lcom/tkay/core/common/res/a/c;

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/common/res/a/a;
    .locals 2

    .line 28
    iget-object v0, p0, Lcom/tkay/core/common/res/a/c;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/res/a/a;

    if-eqz v0, :cond_0

    return-object v0

    .line 32
    :cond_0
    new-instance v0, Lcom/tkay/core/common/res/a/a;

    invoke-direct {v0, p1}, Lcom/tkay/core/common/res/a/a;-><init>(Ljava/lang/String;)V

    .line 33
    iget-object v1, p0, Lcom/tkay/core/common/res/a/c;->b:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/core/common/res/a/c;->b:Ljava/util/Map;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 40
    iget-object v0, p0, Lcom/tkay/core/common/res/a/c;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method
