.class public Lcom/tkay/core/common/k/d;
.super Lcom/tkay/core/common/o;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/o<",
        "Lcom/tkay/core/common/f/g;",
        ">;"
    }
.end annotation


# static fields
.field private static volatile f:Lcom/tkay/core/common/k/d;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 34
    invoke-direct {p0, p1}, Lcom/tkay/core/common/o;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/k/d;)Landroid/content/Context;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/core/common/k/d;->e:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/k/d;
    .locals 2

    .line 39
    sget-object v0, Lcom/tkay/core/common/k/d;->f:Lcom/tkay/core/common/k/d;

    if-nez v0, :cond_1

    .line 40
    const-class v0, Lcom/tkay/core/common/k/d;

    monitor-enter v0

    .line 41
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/k/d;->f:Lcom/tkay/core/common/k/d;

    if-nez v1, :cond_0

    .line 42
    new-instance v1, Lcom/tkay/core/common/k/d;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/k/d;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/k/d;->f:Lcom/tkay/core/common/k/d;

    .line 43
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 45
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/k/d;->f:Lcom/tkay/core/common/k/d;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/core/common/k/d;)Landroid/content/Context;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/tkay/core/common/k/d;->e:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/g;",
            ">;)V"
        }
    .end annotation

    .line 51
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/k/d$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/k/d$1;-><init>(Lcom/tkay/core/common/k/d;Ljava/util/List;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
