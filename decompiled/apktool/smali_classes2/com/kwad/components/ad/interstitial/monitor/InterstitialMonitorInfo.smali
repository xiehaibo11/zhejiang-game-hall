.class public Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final DOWNLOAD_STATUS_ERROR:I = 0x2

.field public static final DOWNLOAD_STATUS_START:I = 0x1

.field public static final DOWNLOAD_TYPE_ALL:I = 0x2

.field public static final DOWNLOAD_TYPE_ONLINE:I = 0x1

.field public static final DOWNLOAD_TYPE_PART:I = 0x3

.field public static final LOAD_STATUS_AD_SHOWN:I = 0x4

.field public static final LOAD_STATUS_DATA_FINISH:I = 0x2

.field public static final LOAD_STATUS_FAILED:I = 0x5

.field public static final LOAD_STATUS_LOAD_FINISH:I = 0x3

.field public static final LOAD_STATUS_SHOW_AD_CALL:I = 0x6

.field public static final LOAD_STATUS_START:I = 0x1

.field public static final LOAD_TYPE_CACHE:I = 0x2

.field public static final LOAD_TYPE_ONLINE:I = 0x1

.field public static final TYPE_H5:I = 0x2

.field public static final TYPE_NATIVE:I = 0x1

.field public static final TYPE_TK:I = 0x3

.field public static final VIDEO_PLAY_ERROR:I = 0x2

.field public static final VIDEO_PLAY_START:I = 0x1

.field private static final serialVersionUID:J = 0x5f81dc9fd275397aL


# instance fields
.field public creativeId:J

.field public downloadDuration:J

.field public downloadSize:J

.field public downloadType:I

.field public errorCode:I

.field public errorMsg:Ljava/lang/String;

.field public expectedRenderType:I

.field public loadDataTime:J

.field public materialType:I

.field public posId:J

.field public renderDuration:J

.field public renderType:I

.field public status:I

.field public type:I

.field public videoDuration:J

.field public videoUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(J)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->posId:J

    return-void
.end method


# virtual methods
.method public setCreativeId(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->creativeId:J

    return-object p0
.end method

.method public setDownloadDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->downloadDuration:J

    return-object p0
.end method

.method public setDownloadSize(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->downloadSize:J

    return-object p0
.end method

.method public setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->downloadType:I

    return-object p0
.end method

.method public setErrorCode(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->errorCode:I

    return-object p0
.end method

.method public setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->errorMsg:Ljava/lang/String;

    return-object p0
.end method

.method public setExpectedRenderType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 1

    if-nez p1, :cond_0

    const/4 p1, 0x2

    :goto_0
    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->expectedRenderType:I

    goto :goto_1

    :cond_0
    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    const/4 p1, 0x3

    goto :goto_0

    :cond_1
    :goto_1
    return-object p0
.end method

.method public setLoadDataTime(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->loadDataTime:J

    return-object p0
.end method

.method public setMaterialType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->materialType:I

    return-object p0
.end method

.method public setRenderDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->renderDuration:J

    return-object p0
.end method

.method public setRenderType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->renderType:I

    return-object p0
.end method

.method public setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->status:I

    return-object p0
.end method

.method public setType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->type:I

    return-object p0
.end method

.method public setVideoDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->videoDuration:J

    return-object p0
.end method

.method public setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->videoUrl:Ljava/lang/String;

    return-object p0
.end method
