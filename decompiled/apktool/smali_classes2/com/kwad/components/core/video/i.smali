.class public final Lcom/kwad/components/core/video/i;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/video/i$a;
    }
.end annotation


# instance fields
.field private volatile SW:Z

.field private SX:J

.field private SY:Lcom/kwad/components/core/video/i$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/video/i$a;

    invoke-direct {v0}, Lcom/kwad/components/core/video/i$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/video/i;->SY:Lcom/kwad/components/core/video/i$a;

    return-void
.end method


# virtual methods
.method public final rb()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/video/i;->SX:J

    const-string v0, "videoStartBlock"

    invoke-static {v0}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    return-void
.end method

.method public final rc()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/components/core/video/i;->SX:J

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/kwad/components/core/video/i;->SY:Lcom/kwad/components/core/video/i$a;

    invoke-virtual {v2, v0, v1}, Lcom/kwad/components/core/video/i$a;->accumulate(J)V

    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/kwad/components/core/video/i;->SW:Z

    const-string v2, "videoEndBlock"

    invoke-static {v2}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "videoBlockTime_"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final rd()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    return v0
.end method

.method public final re()Lcom/kwad/components/core/video/i$a;
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/video/i;->SY:Lcom/kwad/components/core/video/i$a;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/components/core/video/i;->SX:J

    sub-long/2addr v1, v3

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/core/video/i$a;->accumulate(J)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/video/i;->SW:Z

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/video/i;->SY:Lcom/kwad/components/core/video/i$a;

    return-object v0
.end method

.method public final rf()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/video/i;->SX:J

    return-wide v0
.end method
