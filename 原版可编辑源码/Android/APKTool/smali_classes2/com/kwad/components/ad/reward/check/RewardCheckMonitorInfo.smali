.class public Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final CHECK_TYPE_EXPOSURE:I = 0x1

.field public static final CHECK_TYPE_REWARD:I = 0x2

.field public static final ENVI_TYPE_NATIVE:I = 0x0

.field public static final ENVI_TYPE_TK:I = 0x1

.field public static final REQUEST_STATE_END:I = 0x2

.field public static final REQUEST_STATE_START:I = 0x1

.field public static final serialVersionUID:J = 0xefe552ccbb4468aL


# instance fields
.field public checkType:I

.field public code:I

.field public creativeId:J

.field public dataLoadInterval:J

.field public enviType:I

.field public errorMsg:Ljava/lang/String;

.field public posId:J

.field public requestStatus:I


# direct methods
.method public constructor <init>(J)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->posId:J

    return-void
.end method


# virtual methods
.method public setCheckType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->checkType:I

    return-object p0
.end method

.method public setCode(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->code:I

    return-object p0
.end method

.method public setCreativeId(J)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->creativeId:J

    return-object p0
.end method

.method public setDataLoadInterval(J)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->dataLoadInterval:J

    return-object p0
.end method

.method public setEnviType(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->enviType:I

    return-object p0
.end method

.method public setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->errorMsg:Ljava/lang/String;

    return-object p0
.end method

.method public setRequestStatus(I)Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/check/RewardCheckMonitorInfo;->requestStatus:I

    return-object p0
.end method
