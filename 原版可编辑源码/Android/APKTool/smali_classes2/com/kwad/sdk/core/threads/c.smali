.class public Lcom/kwad/sdk/core/threads/c;
.super Ljava/lang/Object;


# static fields
.field public static final TAG:Ljava/lang/String;

.field private static avq:I

.field private static avr:I

.field private static avs:I

.field private static final avt:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/util/concurrent/ThreadPoolExecutor;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field private static final avu:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/util/concurrent/ThreadPoolExecutor;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static interval:J

.field private static startTime:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/threads/c;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/threads/c;->TAG:Ljava/lang/String;

    const/4 v0, 0x0

    sput v0, Lcom/kwad/sdk/core/threads/c;->avq:I

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/threads/c;->avu:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic Df()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/c;->avu:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method static synthetic Dg()Ljava/util/concurrent/ConcurrentHashMap;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    return-object v0
.end method

.method static synthetic Dh()I
    .locals 2

    sget v0, Lcom/kwad/sdk/core/threads/c;->avq:I

    add-int/lit8 v1, v0, 0x1

    sput v1, Lcom/kwad/sdk/core/threads/c;->avq:I

    return v0
.end method

.method static synthetic Di()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/threads/c;->avq:I

    return v0
.end method

.method static synthetic Dj()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/threads/c;->avs:I

    return v0
.end method

.method static synthetic Dk()J
    .locals 2

    sget-wide v0, Lcom/kwad/sdk/core/threads/c;->interval:J

    return-wide v0
.end method

.method private static a(Lcom/kwad/sdk/core/threads/d;)V
    .locals 3

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/core/threads/a/b;->avy:Z

    sput-boolean v0, Lcom/kwad/sdk/core/threads/a/a;->avy:Z

    iget-wide v0, p0, Lcom/kwad/sdk/core/threads/d;->interval:J

    sput-wide v0, Lcom/kwad/sdk/core/threads/c;->interval:J

    iget p0, p0, Lcom/kwad/sdk/core/threads/d;->avx:I

    sput p0, Lcom/kwad/sdk/core/threads/c;->avs:I

    new-instance p0, Landroid/os/HandlerThread;

    const-string v0, "pollingHT"

    invoke-direct {p0, v0}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Landroid/os/HandlerThread;->start()V

    new-instance v0, Landroid/os/Handler;

    invoke-virtual {p0}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object p0

    invoke-direct {v0, p0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    sput-wide v1, Lcom/kwad/sdk/core/threads/c;->startTime:J

    new-instance p0, Lcom/kwad/sdk/core/threads/c$2;

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/threads/c$2;-><init>(Landroid/os/Handler;)V

    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public static a(Ljava/util/concurrent/ThreadPoolExecutor;Ljava/lang/String;)V
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getCompletedTaskCount()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v0, p0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/kwad/sdk/core/threads/c;->avu:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static b(Ljava/util/concurrent/ThreadPoolExecutor;Ljava/lang/String;)Lcom/kwad/sdk/core/threads/b;
    .locals 7

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/threads/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/threads/b;-><init>()V

    iput-object p1, v0, Lcom/kwad/sdk/core/threads/b;->avg:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getCorePoolSize()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/threads/b;->avh:I

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getMaximumPoolSize()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/threads/b;->avi:I

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getPoolSize()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/threads/b;->avj:I

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getActiveCount()I

    move-result p1

    iput p1, v0, Lcom/kwad/sdk/core/threads/b;->avk:I

    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getQueue()Ljava/util/concurrent/BlockingQueue;

    move-result-object p1

    if-nez p1, :cond_1

    const/4 p1, 0x0

    goto :goto_0

    :cond_1
    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getQueue()Ljava/util/concurrent/BlockingQueue;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/concurrent/BlockingQueue;->size()I

    move-result p1

    :goto_0
    iput p1, v0, Lcom/kwad/sdk/core/threads/b;->avn:I

    sget-object p1, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    const-wide/16 v1, 0x0

    if-eqz p1, :cond_2

    sget-object p1, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_2

    sget-object p1, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Long;

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    goto :goto_1

    :cond_2
    move-wide v3, v1

    :goto_1
    invoke-virtual {p0}, Ljava/util/concurrent/ThreadPoolExecutor;->getCompletedTaskCount()J

    move-result-wide v5

    sub-long v3, v5, v3

    iput-wide v3, v0, Lcom/kwad/sdk/core/threads/b;->avm:J

    sget-object p1, Lcom/kwad/sdk/core/threads/c;->avt:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-virtual {p1, p0, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    instance-of p1, p0, Lcom/kwad/sdk/core/threads/a/c;

    if-eqz p1, :cond_3

    check-cast p0, Lcom/kwad/sdk/core/threads/a/c;

    invoke-interface {p0}, Lcom/kwad/sdk/core/threads/a/c;->Dl()J

    move-result-wide p0

    iput-wide p0, v0, Lcom/kwad/sdk/core/threads/b;->avl:J

    goto :goto_2

    :cond_3
    iput-wide v1, v0, Lcom/kwad/sdk/core/threads/b;->avl:J

    :goto_2
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p0

    sget-wide v1, Lcom/kwad/sdk/core/threads/c;->startTime:J

    sub-long/2addr p0, v1

    iput-wide p0, v0, Lcom/kwad/sdk/core/threads/b;->avo:J

    sget-wide p0, Lcom/kwad/sdk/core/threads/c;->interval:J

    iput-wide p0, v0, Lcom/kwad/sdk/core/threads/b;->interval:J

    sget p0, Lcom/kwad/sdk/core/threads/c;->avr:I

    iput p0, v0, Lcom/kwad/sdk/core/threads/b;->avp:I

    return-object v0
.end method

.method static synthetic b(Lcom/kwad/sdk/core/threads/d;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/threads/c;->a(Lcom/kwad/sdk/core/threads/d;)V

    return-void
.end method

.method static synthetic cx(I)I
    .locals 0

    sput p0, Lcom/kwad/sdk/core/threads/c;->avr:I

    return p0
.end method

.method public static dG(Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/threads/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/threads/c$1;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static dH(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/d;
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/threads/d;

    invoke-direct {p0}, Lcom/kwad/sdk/core/threads/d;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/threads/d;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    sget-object v0, Lcom/kwad/sdk/core/threads/c;->TAG:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/kwad/library/solder/lib/a;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method static synthetic xS()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/threads/c;->avr:I

    return v0
.end method
