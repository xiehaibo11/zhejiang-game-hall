.class public Lcom/czhj/sdk/common/utils/AdvertisingId;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field private static final c:J = 0x5265c00L


# instance fields
.field final a:Ljava/util/Calendar;

.field final b:Ljava/lang/String;

.field public final mAdvertisingId:Ljava/lang/String;

.field public final mDoNotTrack:Z


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;ZJ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    iput-object p2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->a:Ljava/util/Calendar;

    invoke-virtual {p1, p4, p5}, Ljava/util/Calendar;->setTimeInMillis(J)V

    return-void
.end method

.method static a()Ljava/lang/String;
    .locals 1

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static generateExpiredAdvertisingId()Lcom/czhj/sdk/common/utils/AdvertisingId;
    .locals 8

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/utils/AdvertisingId;->a()Ljava/lang/String;

    move-result-object v3

    new-instance v7, Lcom/czhj/sdk/common/utils/AdvertisingId;

    invoke-virtual {v0}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v0

    const-wide/32 v4, 0x5265c00

    sub-long/2addr v0, v4

    const-wide/16 v4, 0x1

    sub-long v5, v0, v4

    const/4 v2, 0x0

    const/4 v4, 0x0

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/czhj/sdk/common/utils/AdvertisingId;-><init>(Ljava/lang/String;Ljava/lang/String;ZJ)V

    return-object v7
.end method


# virtual methods
.method b()Z
    .locals 4

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v0

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->a:Ljava/util/Calendar;

    invoke-virtual {v2}, Ljava/util/Calendar;->getTimeInMillis()J

    move-result-wide v2

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x5265c00

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x1

    if-ne p0, p1, :cond_1

    return v1

    :cond_1
    instance-of v2, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;

    if-nez v2, :cond_2

    return v0

    :cond_2
    check-cast p1, Lcom/czhj/sdk/common/utils/AdvertisingId;

    iget-boolean v2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    iget-boolean v3, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    if-ne v2, v3, :cond_3

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    iget-object v3, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    iget-object p1, p1, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    move v0, v1

    :cond_3
    return v0
.end method

.method public hashCode()I
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    mul-int/lit8 v0, v0, 0x1f

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    mul-int/lit8 v0, v0, 0x1f

    iget-boolean v1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    add-int/2addr v0, v1

    return v0
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "AdvertisingId{mLastRotation="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->a:Ljava/util/Calendar;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mAdvertisingId=\'"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mAdvertisingId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", mSigmobId=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v1, ", mDoNotTrack="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/czhj/sdk/common/utils/AdvertisingId;->mDoNotTrack:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
