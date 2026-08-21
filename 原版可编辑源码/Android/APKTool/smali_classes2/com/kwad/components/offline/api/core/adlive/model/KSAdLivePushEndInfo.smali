.class public Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final KET_CONFIG_DISPLAY_LIKE_USER_COUNT:Ljava/lang/String; = "displayLikeUserCount"

.field public static final KET_CONFIG_DISPLAY_WATCHING_USER_COUNT:Ljava/lang/String; = "displayWatchingUserCount"

.field public static final KET_CONFIG_LIKE_USER_COUNT:Ljava/lang/String; = "likeUserCount"

.field public static final KET_CONFIG_LIVE_DURATION:Ljava/lang/String; = "liveDuration"

.field public static final KET_CONFIG_TOTAL_WATCHING_DURATION:Ljava/lang/String; = "totalWatchingDuration"

.field public static final KET_CONFIG_WATCHING_USER_COUNT:Ljava/lang/String; = "watchingUserCount"

.field private static final serialVersionUID:J = 0x69a1c1dab27e0fc3L


# instance fields
.field public mDisplayLikeUserCount:Ljava/lang/String;

.field public mDisplayWatchingUserCount:Ljava/lang/String;

.field public mLikeUserCount:I

.field public mLiveDuration:J

.field public mTotalWatchingDuration:J

.field public mWatchingUserCount:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "0"

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayWatchingUserCount:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayLikeUserCount:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public parseJson(Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "totalWatchingDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mTotalWatchingDuration:J

    const-string v0, "watchingUserCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mWatchingUserCount:I

    const-string v0, "0"

    const-string v1, "displayWatchingUserCount"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayWatchingUserCount:Ljava/lang/String;

    const-string v1, "liveDuration"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mLiveDuration:J

    const-string v1, "likeUserCount"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mLikeUserCount:I

    const-string v1, "displayLikeUserCount"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayLikeUserCount:Ljava/lang/String;

    return-void
.end method

.method public toJson(Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    iget-wide v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mTotalWatchingDuration:J

    const-string v2, "totalWatchingDuration"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mWatchingUserCount:I

    const-string v1, "watchingUserCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayWatchingUserCount:Ljava/lang/String;

    const-string v1, "displayWatchingUserCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mLiveDuration:J

    const-string v2, "liveDuration"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mLikeUserCount:I

    const-string v1, "likeUserCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/components/offline/api/core/adlive/model/KSAdLivePushEndInfo;->mDisplayLikeUserCount:Ljava/lang/String;

    const-string v1, "displayLikeUserCount"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    return-object p1
.end method
