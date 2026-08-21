.class public Lcom/kwad/components/core/liveEnd/AdLiveEndCommonResultData;
.super Lcom/kwad/sdk/core/network/BaseResultData;


# static fields
.field private static final serialVersionUID:J = 0xfa1ab2fecf90e09L


# instance fields
.field public displayLikeUserCount:Ljava/lang/String;

.field public displayWatchingUserCount:Ljava/lang/String;

.field public likeUserCount:I

.field public liveDuration:J

.field public totalWatchingDuration:J

.field public watchingUserCount:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/BaseResultData;-><init>()V

    const-string v0, "0"

    iput-object v0, p0, Lcom/kwad/components/core/liveEnd/AdLiveEndCommonResultData;->displayWatchingUserCount:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/core/liveEnd/AdLiveEndCommonResultData;->displayLikeUserCount:Ljava/lang/String;

    return-void
.end method
