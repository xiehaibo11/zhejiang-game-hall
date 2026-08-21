.class public final Lcom/kwad/sdk/utils/bi;
.super Ljava/lang/Object;


# instance fields
.field private aKm:J

.field private aKn:J

.field private aKo:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-direct {p0}, Lcom/kwad/sdk/utils/bi;->reset()V

    return-void
.end method

.method private reset()V
    .locals 2

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    return-void
.end method


# virtual methods
.method public final Kb()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/sdk/utils/bi;->aKo:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gez v0, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    :cond_1
    return-void
.end method

.method public final Kc()V
    .locals 6

    iget-boolean v0, p0, Lcom/kwad/sdk/utils/bi;->aKo:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    sub-long/2addr v2, v4

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    :cond_1
    return-void
.end method

.method public final Kd()J
    .locals 6

    iget-boolean v0, p0, Lcom/kwad/sdk/utils/bi;->aKo:Z

    const-wide/16 v1, 0x0

    if-nez v0, :cond_0

    return-wide v1

    :cond_0
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/utils/bi;->aKo:Z

    iget-wide v3, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    cmp-long v0, v3, v1

    if-lez v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    sub-long/2addr v2, v4

    add-long/2addr v0, v2

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    return-wide v0
.end method

.method public final getTime()J
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    add-long/2addr v0, v2

    iget-wide v2, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    sub-long/2addr v0, v2

    return-wide v0

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKm:J

    return-wide v0
.end method

.method public final startTiming()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/utils/bi;->reset()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/utils/bi;->aKo:Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/utils/bi;->aKn:J

    return-void
.end method
