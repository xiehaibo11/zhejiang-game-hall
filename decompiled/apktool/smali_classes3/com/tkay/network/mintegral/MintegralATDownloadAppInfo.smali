.class public Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;
.super Lcom/tkay/core/api/TYAdAppInfo;


# instance fields
.field public appName:Ljava/lang/String;

.field public appPackageName:Ljava/lang/String;

.field public appPrivacyLink:Ljava/lang/String;

.field public appSize:J

.field public appVersion:Ljava/lang/String;

.field public publisher:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/out/ApkDisplayInfo;Ljava/lang/String;J)V
    .locals 1

    .line 14
    invoke-direct {p0}, Lcom/tkay/core/api/TYAdAppInfo;-><init>()V

    .line 15
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getDevName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->publisher:Ljava/lang/String;

    .line 16
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getAppVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appVersion:Ljava/lang/String;

    .line 17
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getPriUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    .line 18
    invoke-virtual {p1}, Lcom/mbridge/msdk/out/ApkDisplayInfo;->getAppName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appName:Ljava/lang/String;

    .line 19
    iput-object p2, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appPackageName:Ljava/lang/String;

    .line 20
    iput-wide p3, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appSize:J

    return-void
.end method


# virtual methods
.method public getAppDownloadCount()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 50
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPackageName()Ljava/lang/String;
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appPackageName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPermissonUrl()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getAppPrivacyUrl()Ljava/lang/String;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppSize()J
    .locals 2

    .line 45
    iget-wide v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appSize:J

    return-wide v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->appVersion:Ljava/lang/String;

    return-object v0
.end method

.method public getPublisher()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tkay/network/mintegral/MintegralATDownloadAppInfo;->publisher:Ljava/lang/String;

    return-object v0
.end method
