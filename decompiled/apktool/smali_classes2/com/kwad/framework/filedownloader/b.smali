.class public final Lcom/kwad/framework/filedownloader/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/s$a;
.implements Lcom/kwad/framework/filedownloader/s$b;


# instance fields
.field private aag:J

.field private aah:J

.field private aai:J

.field private aaj:I

.field private aak:I

.field private mStartTime:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x3e8

    iput v0, p0, Lcom/kwad/framework/filedownloader/b;->aak:I

    return-void
.end method


# virtual methods
.method public final G(J)V
    .locals 9

    iget v0, p0, Lcom/kwad/framework/filedownloader/b;->aak:I

    if-gtz v0, :cond_0

    return-void

    :cond_0
    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/b;->aag:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x1

    const/4 v4, 0x0

    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v5

    iget-wide v7, p0, Lcom/kwad/framework/filedownloader/b;->aag:J

    sub-long/2addr v5, v7

    iget v0, p0, Lcom/kwad/framework/filedownloader/b;->aak:I

    int-to-long v7, v0

    cmp-long v0, v5, v7

    if-gez v0, :cond_3

    iget v0, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    if-nez v0, :cond_2

    cmp-long v0, v5, v2

    if-lez v0, :cond_2

    goto :goto_0

    :cond_2
    move v1, v4

    goto :goto_1

    :cond_3
    :goto_0
    iget-wide v2, p0, Lcom/kwad/framework/filedownloader/b;->aah:J

    sub-long v2, p1, v2

    div-long/2addr v2, v5

    long-to-int v0, v2

    iput v0, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    invoke-static {v4, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    :goto_1
    if-eqz v1, :cond_4

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/b;->aah:J

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/b;->aag:J

    :cond_4
    return-void
.end method

.method public final end(J)V
    .locals 6

    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/b;->mStartTime:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    return-void

    :cond_0
    iget-wide v0, p0, Lcom/kwad/framework/filedownloader/b;->aai:J

    sub-long/2addr p1, v0

    iput-wide v2, p0, Lcom/kwad/framework/filedownloader/b;->aag:J

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iget-wide v4, p0, Lcom/kwad/framework/filedownloader/b;->mStartTime:J

    sub-long/2addr v0, v4

    cmp-long v2, v0, v2

    if-gtz v2, :cond_1

    :goto_0
    long-to-int p1, p1

    iput p1, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    return-void

    :cond_1
    div-long/2addr p1, v0

    goto :goto_0
.end method

.method public final getSpeed()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    return v0
.end method

.method public final reset()V
    .locals 2

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/framework/filedownloader/b;->aaj:I

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/b;->aag:J

    return-void
.end method

.method public final start(J)V
    .locals 2

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/framework/filedownloader/b;->mStartTime:J

    iput-wide p1, p0, Lcom/kwad/framework/filedownloader/b;->aai:J

    return-void
.end method
