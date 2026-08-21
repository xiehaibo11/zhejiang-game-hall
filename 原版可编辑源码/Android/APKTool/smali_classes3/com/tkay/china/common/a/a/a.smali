.class public final Lcom/tkay/china/common/a/a/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field private static c:Lcom/tkay/china/common/a/a/a;


# instance fields
.field private d:Ljava/util/concurrent/ExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method protected constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 29
    iput-object v0, p0, Lcom/tkay/china/common/a/a/a;->d:Ljava/util/concurrent/ExecutorService;

    .line 33
    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/china/common/a/a/a;->d:Ljava/util/concurrent/ExecutorService;

    return-void
.end method

.method public static a()Lcom/tkay/china/common/a/a/a;
    .locals 1

    .line 38
    sget-object v0, Lcom/tkay/china/common/a/a/a;->c:Lcom/tkay/china/common/a/a/a;

    if-nez v0, :cond_0

    .line 39
    new-instance v0, Lcom/tkay/china/common/a/a/a;

    invoke-direct {v0}, Lcom/tkay/china/common/a/a/a;-><init>()V

    sput-object v0, Lcom/tkay/china/common/a/a/a;->c:Lcom/tkay/china/common/a/a/a;

    .line 41
    :cond_0
    sget-object v0, Lcom/tkay/china/common/a/a/a;->c:Lcom/tkay/china/common/a/a/a;

    return-object v0
.end method

.method private static a(Lcom/tkay/china/common/a/a/a;)V
    .locals 0

    .line 45
    sput-object p0, Lcom/tkay/china/common/a/a/a;->c:Lcom/tkay/china/common/a/a/a;

    return-void
.end method

.method private a(Ljava/lang/Runnable;)V
    .locals 5

    if-eqz p1, :cond_0

    .line 1063
    new-instance v0, Lcom/tkay/china/common/a/a/a$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/china/common/a/a/a$1;-><init>(Lcom/tkay/china/common/a/a/a;Ljava/lang/Runnable;)V

    .line 1078
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/l/b/b;->a(J)V

    .line 2054
    invoke-virtual {p0, v0}, Lcom/tkay/china/common/a/a/a;->a(Lcom/tkay/core/common/l/b/b;)V

    :cond_0
    return-void
.end method

.method private b()V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/tkay/china/common/a/a/a;->d:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    return-void
.end method

.method private b(Lcom/tkay/core/common/l/b/b;)V
    .locals 0

    .line 54
    invoke-virtual {p0, p1}, Lcom/tkay/china/common/a/a/a;->a(Lcom/tkay/core/common/l/b/b;)V

    return-void
.end method

.method private b(Ljava/lang/Runnable;)V
    .locals 5

    if-eqz p1, :cond_0

    .line 63
    new-instance v0, Lcom/tkay/china/common/a/a/a$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/china/common/a/a/a$1;-><init>(Lcom/tkay/china/common/a/a/a;Ljava/lang/Runnable;)V

    .line 78
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/l/b/b;->a(J)V

    .line 3054
    invoke-virtual {p0, v0}, Lcom/tkay/china/common/a/a/a;->a(Lcom/tkay/core/common/l/b/b;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/l/b/b;)V
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/tkay/china/common/a/a/a;->d:Ljava/util/concurrent/ExecutorService;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method
