.class public Lcom/tkay/network/ks/KSATDownloadAppInfo;
.super Lcom/tkay/core/api/TYAdAppInfo;


# instance fields
.field public appDownloadCount:Ljava/lang/String;

.field public appName:Ljava/lang/String;

.field public appPackageName:Ljava/lang/String;

.field public appPrivacyLink:Ljava/lang/String;

.field public appSize:J

.field public appVersion:Ljava/lang/String;

.field public apppermissionLink:Ljava/lang/String;

.field public publisher:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/api/KsNativeAd;)V
    .locals 2

    .line 16
    invoke-direct {p0}, Lcom/tkay/core/api/TYAdAppInfo;-><init>()V

    .line 17
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getCorporationName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->publisher:Ljava/lang/String;

    .line 18
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppVersion()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appVersion:Ljava/lang/String;

    .line 19
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppPrivacyUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    .line 20
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getPermissionInfoUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->apppermissionLink:Ljava/lang/String;

    .line 21
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appName:Ljava/lang/String;

    .line 22
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppPackageSize()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appSize:J

    .line 23
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appPackageName:Ljava/lang/String;

    .line 24
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsNativeAd;->getAppDownloadCountDes()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appDownloadCount:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getAppDownloadCount()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appDownloadCount:Ljava/lang/String;

    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPackageName()Ljava/lang/String;
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appPackageName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPermissonUrl()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->apppermissionLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPrivacyUrl()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppSize()J
    .locals 2

    .line 49
    iget-wide v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appSize:J

    return-wide v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->appVersion:Ljava/lang/String;

    return-object v0
.end method

.method public getPublisher()Ljava/lang/String;
    .locals 1

    .line 29
    iget-object v0, p0, Lcom/tkay/network/ks/KSATDownloadAppInfo;->publisher:Ljava/lang/String;

    return-object v0
.end method
