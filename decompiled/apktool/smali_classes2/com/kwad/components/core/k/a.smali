.class public Lcom/kwad/components/core/k/a;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# static fields
.field private static Ld:Ljava/text/SimpleDateFormat;


# instance fields
.field public Le:I

.field public Lf:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "yyyy-MM-dd"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/kwad/components/core/k/a;->Ld:Ljava/text/SimpleDateFormat;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final h(II)Z
    .locals 12

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "checkAndAddCount forceActiveIntervalHour: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", forceActiveThreshold: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdForceActiveInfo"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v2, p0, Lcom/kwad/components/core/k/a;->Lf:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    const/4 v2, 0x1

    if-lez v0, :cond_2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sget-object v0, Lcom/kwad/components/core/k/a;->Ld:Ljava/text/SimpleDateFormat;

    new-instance v5, Ljava/util/Date;

    iget-wide v6, p0, Lcom/kwad/components/core/k/a;->Lf:J

    invoke-direct {v5, v6, v7}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v5}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    sget-object v5, Lcom/kwad/components/core/k/a;->Ld:Ljava/text/SimpleDateFormat;

    new-instance v6, Ljava/util/Date;

    invoke-direct {v6, v3, v4}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v5, v6}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "checkAndAddCount lastDate: "

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ", currentDate: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v1, v6}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v5, 0x0

    if-nez v0, :cond_0

    iput v5, p0, Lcom/kwad/components/core/k/a;->Le:I

    invoke-virtual {p0}, Lcom/kwad/components/core/k/a;->oc()V

    return v2

    :cond_0
    iget-wide v6, p0, Lcom/kwad/components/core/k/a;->Lf:J

    int-to-long v8, p1

    const-wide/16 v10, 0x3c

    mul-long/2addr v8, v10

    mul-long/2addr v8, v10

    const-wide/16 v10, 0x3e8

    mul-long/2addr v8, v10

    add-long/2addr v6, v8

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "checkAndAddCount minTimestamp: "

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v6, v7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ", currentActiveCount: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/kwad/components/core/k/a;->Le:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    cmp-long p1, v6, v3

    if-gez p1, :cond_1

    iget p1, p0, Lcom/kwad/components/core/k/a;->Le:I

    if-gt p1, p2, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/core/k/a;->oc()V

    return v2

    :cond_1
    return v5

    :cond_2
    invoke-virtual {p0}, Lcom/kwad/components/core/k/a;->oc()V

    return v2
.end method

.method public final oc()V
    .locals 3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/k/a;->Lf:J

    iget v0, p0, Lcom/kwad/components/core/k/a;->Le:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/kwad/components/core/k/a;->Le:I

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "doAddCount, lastForceActiveTimestamp: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/kwad/components/core/k/a;->Lf:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ", currentActiveCount "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/components/core/k/a;->Le:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdForceActiveInfo"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
