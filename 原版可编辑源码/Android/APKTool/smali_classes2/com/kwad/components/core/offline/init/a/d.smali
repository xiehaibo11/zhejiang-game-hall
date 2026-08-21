.class final Lcom/kwad/components/core/offline/init/a/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/api/IEnvironment;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final addOnAudioConflictListener(Landroid/content/Context;Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V
    .locals 0

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final getAppId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getAppVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "3.3.42"

    return-object v0
.end method

.method public final getBiz()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/i;->agZ:Ljava/lang/String;

    return-object v0
.end method

.method public final getContext()Landroid/content/Context;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public final getDeviceId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getKpf()Ljava/lang/String;
    .locals 1

    const-string v0, "ANDROID_PHONE"

    return-object v0
.end method

.method public final getKpn()Ljava/lang/String;
    .locals 1

    const-string v0, "kseulivesdk"

    return-object v0
.end method

.method public final getLatitude(Landroid/content/Context;)D
    .locals 2

    invoke-static {p1}, Lcom/kwad/sdk/utils/au;->bU(Landroid/content/Context;)Landroid/location/Location;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/location/Location;->getLatitude()D

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method public final getLongitude(Landroid/content/Context;)D
    .locals 2

    invoke-static {p1}, Lcom/kwad/sdk/utils/au;->bU(Landroid/content/Context;)Landroid/location/Location;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/location/Location;->getLongitude()D

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method public final getOperator(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->cj(Landroid/content/Context;)I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getOsVersion()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getOsVersion()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getProcessName(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/SystemUtil;->getProcessName(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "3.3.42"

    return-object v0
.end method

.method public final getStatusBarHeight(Landroid/content/Context;)I
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result p1

    return p1
.end method

.method public final getUserAgent()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->getUserAgent()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final isArm64(Landroid/content/Context;)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/AbiUtil;->isArm64(Landroid/content/Context;)Z

    move-result p1

    return p1
.end method

.method public final isDebug()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final isDevelopEnable()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/core/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public final isInMainProcess(Landroid/content/Context;)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/SystemUtil;->isInMainProcess(Landroid/content/Context;)Z

    move-result p1

    return p1
.end method

.method public final localIpAddress()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/components/core/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    :cond_0
    const-string v0, "10.244.113.101"

    return-object v0
.end method

.method public final removeOnAudioConflictListener(Landroid/content/Context;Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V
    .locals 0

    if-eqz p1, :cond_1

    if-nez p2, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/t/a;->b(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final requestAudioFocus(Landroid/content/Context;Z)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    move-result p1

    return p1
.end method
