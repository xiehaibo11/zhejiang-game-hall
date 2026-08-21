.class public final Lcom/kwad/sdk/utils/at;
.super Ljava/lang/Object;


# direct methods
.method private static IV()Z
    .locals 2

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    return v1
.end method

.method public static IW()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canReadLocation()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static IX()Landroid/location/Location;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getLocation()Landroid/location/Location;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static IY()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canUsePhoneState()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static IZ()Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getImei()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public static Ja()[Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getImeis()[Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const-string v0, ""

    filled-new-array {v0, v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static Jb()Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getAndroidId()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public static Jc()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canUseMacAddress()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static Jd()Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getMacAddress()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public static Je()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canUseOaid()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static Jf()Ljava/lang/String;
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getOaid()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public static Jg()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canUseNetworkState()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static Jh()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canUseStoragePermission()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static Ji()Z
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IV()Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    if-eqz v2, :cond_1

    iget-object v2, v2, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v2, :cond_1

    invoke-virtual {v2}, Lcom/kwad/sdk/api/KsCustomController;->canReadInstalledPackages()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_1

    return v1

    :catchall_0
    :cond_1
    return v0
.end method

.method public static Jj()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/api/SdkConfig;->ksCustomController:Lcom/kwad/sdk/api/KsCustomController;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/api/KsCustomController;->getInstalledPackages()Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    return-object v0
.end method
