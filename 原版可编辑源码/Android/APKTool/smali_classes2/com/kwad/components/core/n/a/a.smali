.class public final Lcom/kwad/components/core/n/a/a;
.super Ljava/lang/Object;


# instance fields
.field private Pp:Ljava/lang/String;

.field private Pq:J

.field private Pr:J

.field private Ps:J

.field private Pt:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/n/a/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/n/a/a;->Ps:J

    return-wide p1
.end method


# virtual methods
.method public final at(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/n/a/a;->Pp:Ljava/lang/String;

    return-void
.end method

.method public final pz()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/n/a/a;->Pt:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/n/a/a;->Pt:Z

    new-instance v0, Lcom/kwad/components/core/n/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/n/a/a$1;-><init>(Lcom/kwad/components/core/n/a/a;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final report()V
    .locals 7

    new-instance v0, Lcom/kwad/components/core/n/a/b;

    invoke-direct {v0}, Lcom/kwad/components/core/n/a/b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/core/n/a/a;->Pp:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/components/core/n/a/b;->Pp:Ljava/lang/String;

    iget-wide v1, p0, Lcom/kwad/components/core/n/a/a;->Pq:J

    const-wide/16 v3, 0x0

    cmp-long v5, v1, v3

    if-eqz v5, :cond_0

    iget-wide v5, p0, Lcom/kwad/components/core/n/a/a;->Pr:J

    sub-long/2addr v5, v1

    goto :goto_0

    :cond_0
    move-wide v5, v3

    :goto_0
    iput-wide v5, v0, Lcom/kwad/components/core/n/a/b;->Pw:J

    iget-wide v1, p0, Lcom/kwad/components/core/n/a/a;->Pr:J

    cmp-long v5, v1, v3

    if-eqz v5, :cond_1

    iget-wide v5, p0, Lcom/kwad/components/core/n/a/a;->Ps:J

    sub-long/2addr v5, v1

    goto :goto_1

    :cond_1
    move-wide v5, v3

    :goto_1
    iput-wide v5, v0, Lcom/kwad/components/core/n/a/b;->Px:J

    iget-wide v1, p0, Lcom/kwad/components/core/n/a/a;->Pq:J

    cmp-long v5, v1, v3

    if-eqz v5, :cond_2

    iget-wide v3, p0, Lcom/kwad/components/core/n/a/a;->Ps:J

    sub-long/2addr v3, v1

    :cond_2
    iput-wide v3, v0, Lcom/kwad/components/core/n/a/b;->Pv:J

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/components/core/n/a/b;)V

    invoke-virtual {v0}, Lcom/kwad/components/core/n/a/b;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PageMonitor"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final y(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/n/a/a;->Pq:J

    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwad/components/core/n/a/a;->Pr:J

    return-void
.end method
