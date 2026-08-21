.class public final Lcom/kwad/sdk/utils/an;
.super Ljava/lang/Object;


# static fields
.field private static volatile aIW:Lcom/kwad/sdk/utils/an;


# instance fields
.field private volatile aIX:Z

.field private volatile aIY:J

.field private volatile aIZ:Landroid/os/PowerManager;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/utils/an;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/an;-><init>()V

    sput-object v0, Lcom/kwad/sdk/utils/an;->aIW:Lcom/kwad/sdk/utils/an;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/an;->aIY:J

    return-void
.end method

.method public static IP()Lcom/kwad/sdk/utils/an;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/an;->aIW:Lcom/kwad/sdk/utils/an;

    return-object v0
.end method


# virtual methods
.method public final cr(Landroid/content/Context;)Z
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/utils/an;->aIY:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/sdk/utils/an;->aIY:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x258

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    iget-boolean p1, p0, Lcom/kwad/sdk/utils/an;->aIX:Z

    return p1

    :cond_0
    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    if-nez v1, :cond_2

    if-eqz p1, :cond_2

    monitor-enter p0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    if-nez v1, :cond_1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string v1, "power"

    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/PowerManager;

    iput-object p1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    :cond_1
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    if-eqz p1, :cond_4

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x14

    if-lt p1, v0, :cond_3

    iget-object p1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    invoke-virtual {p1}, Landroid/os/PowerManager;->isInteractive()Z

    move-result v0

    goto :goto_1

    :cond_3
    iget-object p1, p0, Lcom/kwad/sdk/utils/an;->aIZ:Landroid/os/PowerManager;

    invoke-virtual {p1}, Landroid/os/PowerManager;->isScreenOn()Z

    move-result v0

    :cond_4
    :goto_1
    iput-boolean v0, p0, Lcom/kwad/sdk/utils/an;->aIX:Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/an;->aIY:J

    iget-boolean p1, p0, Lcom/kwad/sdk/utils/an;->aIX:Z

    return p1
.end method
