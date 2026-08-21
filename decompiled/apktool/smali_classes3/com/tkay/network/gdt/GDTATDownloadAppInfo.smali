.class public Lcom/tkay/network/gdt/GDTATDownloadAppInfo;
.super Lcom/tkay/core/api/TYAdAppInfo;


# instance fields
.field public appDownloadCount:Ljava/lang/String;

.field public appName:Ljava/lang/String;

.field public appPrivacyLink:Ljava/lang/String;

.field public appSize:J

.field public appVersion:Ljava/lang/String;

.field public apppermissionLink:Ljava/lang/String;

.field public publisher:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;Ljava/lang/String;)V
    .locals 2

    .line 22
    invoke-direct {p0}, Lcom/tkay/core/api/TYAdAppInfo;-><init>()V

    .line 23
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getAuthorName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->publisher:Ljava/lang/String;

    .line 24
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getVersionName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appVersion:Ljava/lang/String;

    .line 25
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getPrivacyAgreement()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    .line 26
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getPermissionsUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->apppermissionLink:Ljava/lang/String;

    .line 27
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getAppName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appName:Ljava/lang/String;

    .line 28
    invoke-interface {p1}, Lcom/qq/e/ads/nativ/NativeUnifiedADAppMiitInfo;->getPackageSizeBytes()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appSize:J

    .line 29
    iput-object p2, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appDownloadCount:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getAppDownloadCount()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appDownloadCount:Ljava/lang/String;

    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPackageName()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method

.method public getAppPermissonUrl()Ljava/lang/String;
    .locals 1

    .line 49
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->apppermissionLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppPrivacyUrl()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appPrivacyLink:Ljava/lang/String;

    return-object v0
.end method

.method public getAppSize()J
    .locals 2

    .line 69
    iget-wide v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appSize:J

    return-wide v0
.end method

.method public getAppVersion()Ljava/lang/String;
    .locals 1

    .line 39
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->appVersion:Ljava/lang/String;

    return-object v0
.end method

.method public getPublisher()Ljava/lang/String;
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTATDownloadAppInfo;->publisher:Ljava/lang/String;

    return-object v0
.end method
