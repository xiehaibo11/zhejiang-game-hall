.class public Lcom/tkay/network/toutiao/TTATDownloadAppInfo;
.super Lcom/tkay/core/api/TYAdAppInfo;


# instance fields
.field public appName:Ljava/lang/String;

.field public appPrivacyLink:Ljava/lang/String;

.field public appSize:J

.field public appVersion:Ljava/lang/String;

.field public publisher:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/ComplianceInfo;J)V
    .locals 1

    .line 13
    invoke-direct {p0}, Lcom/tkay/core/api/TYAdAppInfo;-><init>()V

    .line 14
    invoke-interface {p1}, Lcom/bykv/vk/openvk/ComplianceInfo;->getPrivacyUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    .line 15
    invoke-interface {p1}, Lcom/bykv/vk/openvk/ComplianceInfo;->getAppName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appName:Ljava/lang/String;

    .line 16
    invoke-interface {p1}, Lcom/bykv/vk/openvk/ComplianceInfo;->getDeveloperName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->publisher:Ljava/lang/String;

    .line 17
    invoke-interface {p1}, Lcom/bykv/vk/openvk/ComplianceInfo;->getAppVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appVersion:Ljava/lang/String;

    .line 18
    iput-wide p2, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appSize:J

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

    .line 48
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPackageName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getAppPermissonUrl()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getAppPrivacyUrl()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppSize()J
    .locals 2

    .line 43
    iget-wide v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appSize:J

    return-wide v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->appVersion:Ljava/lang/String;

    return-object v0
.end method

.method public getPublisher()Ljava/lang/String;
    .locals 1

    .line 23
    iget-object v0, p0, Lcom/tkay/network/toutiao/TTATDownloadAppInfo;->publisher:Ljava/lang/String;

    return-object v0
.end method
