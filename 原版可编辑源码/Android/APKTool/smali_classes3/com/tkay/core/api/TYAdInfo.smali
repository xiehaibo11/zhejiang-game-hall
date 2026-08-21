.class public abstract Lcom/tkay/core/api/TYAdInfo;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract getABTestId()I
.end method

.method public abstract getAdNetworkType()Ljava/lang/String;
.end method

.method public abstract getAdsourceId()Ljava/lang/String;
.end method

.method public abstract getAdsourceIndex()I
.end method

.method public abstract getChannel()Ljava/lang/String;
.end method

.method public abstract getCountry()Ljava/lang/String;
.end method

.method public abstract getCurrency()Ljava/lang/String;
.end method

.method public abstract getCustomRule()Ljava/lang/String;
.end method

.method public abstract getDismissType()I
.end method

.method public abstract getEcpm()D
.end method

.method public abstract getEcpmLevel()I
.end method

.method public abstract getEcpmPrecision()Ljava/lang/String;
.end method

.method public abstract getExtInfoMap()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getLocalExtra()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getNetworkFirmId()I
.end method

.method public abstract getNetworkPlacementId()Ljava/lang/String;
.end method

.method public abstract getPublisherRevenue()Ljava/lang/Double;
.end method

.method public abstract getRewardUserCustomData()Ljava/lang/String;
.end method

.method public abstract getScenarioId()Ljava/lang/String;
.end method

.method public abstract getScenarioRewardName()Ljava/lang/String;
.end method

.method public abstract getScenarioRewardNumber()I
.end method

.method public abstract getSegmentId()I
.end method

.method public abstract getShowId()Ljava/lang/String;
.end method

.method public abstract getSubChannel()Ljava/lang/String;
.end method

.method public abstract getTYAdFormat()Ljava/lang/String;
.end method

.method public abstract getTYPlacementId()Ljava/lang/String;
.end method

.method public abstract getTpBidId()Ljava/lang/String;
.end method

.method public abstract isHeaderBiddingAdsource()I
.end method
