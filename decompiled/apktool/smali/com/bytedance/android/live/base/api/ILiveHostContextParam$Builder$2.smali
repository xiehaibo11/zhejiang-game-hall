.class Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/ILiveHostContextParam;


# instance fields
.field final synthetic this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

.field final synthetic val$selfBuilder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;


# direct methods
.method constructor <init>(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iput-object p2, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->val$selfBuilder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getALogConfig()Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;
    .locals 1

    .line 444
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/saas/middleware/alog/ALogConfig;

    move-result-object v0

    return-object v0
.end method

.method public getAid()I
    .locals 1

    .line 316
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I

    move-result v0

    return v0
.end method

.method public getAppIcon()I
    .locals 2

    .line 373
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I

    move-result v0

    if-nez v0, :cond_0

    .line 374
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Landroid/app/Application;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 375
    iget-object v1, v0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz v1, :cond_0

    .line 376
    iget-object v0, v0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->icon:I

    return v0

    .line 379
    :cond_0
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I

    move-result v0

    return v0
.end method

.method public getAppLogConfig()Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;
    .locals 1

    .line 449
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/saas/middleware/applog/AppLogConfig;

    move-result-object v0

    return-object v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 2

    .line 321
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    .line 322
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Landroid/app/Application;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 323
    iget-object v1, v0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    if-eqz v1, :cond_0

    .line 324
    iget-object v0, v0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->name:Ljava/lang/String;

    return-object v0

    .line 327
    :cond_0
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCJAppId()Ljava/lang/String;
    .locals 1

    .line 419
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getCJMerchantId()Ljava/lang/String;
    .locals 1

    .line 424
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getChannel()Ljava/lang/String;
    .locals 1

    .line 332
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getClientKey()Ljava/lang/String;
    .locals 1

    .line 479
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$3000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getContext()Landroid/app/Application;
    .locals 1

    .line 337
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;

    move-result-object v0

    return-object v0
.end method

.method public getDebug()Z
    .locals 1

    .line 384
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z

    move-result v0

    return v0
.end method

.method public getECHostAppId()Ljava/lang/String;
    .locals 1

    .line 474
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getFEParamsExtra()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 469
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getGeneralAppId()Ljava/lang/String;
    .locals 1

    .line 394
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1300(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getHostAction()Lcom/bytedance/android/live/base/api/ILiveHostActionParam;
    .locals 1

    .line 409
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostActionParam;

    move-result-object v0

    return-object v0
.end method

.method public getHostActivity(I)Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 434
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IHostActivityProvider;->getHostActivity(I)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method public getHostPermission()Lcom/bytedance/android/live/base/api/IHostPermission;
    .locals 1

    .line 489
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$3200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/IHostPermission;

    move-result-object v0

    return-object v0
.end method

.method public getHostWebViewParam()Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;
    .locals 1

    .line 414
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostWebViewParam;

    move-result-object v0

    return-object v0
.end method

.method public getNativeLibraryDir()Ljava/lang/String;
    .locals 1

    .line 429
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPartner()Ljava/lang/String;
    .locals 1

    .line 454
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getPartnerExtra()Lcom/bytedance/android/live/base/api/PartnerExtra;
    .locals 1

    .line 464
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/PartnerExtra;

    move-result-object v0

    return-object v0
.end method

.method public getPartnerSecret()Ljava/lang/String;
    .locals 1

    .line 459
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2600(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTtSDKAppId()Ljava/lang/String;
    .locals 1

    .line 399
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTtSDKCertAssetsPath()Ljava/lang/String;
    .locals 1

    .line 404
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getVersion()Ljava/lang/String;
    .locals 2

    .line 342
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_1

    .line 343
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Landroid/app/Application;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 344
    iget-object v1, v0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 345
    iget-object v0, v0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "1.0.0-default"

    return-object v0

    .line 350
    :cond_1
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$700(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getVersionCode()I
    .locals 2

    .line 355
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I

    move-result v0

    if-nez v0, :cond_1

    .line 356
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$400(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Landroid/app/Application;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$500(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Landroid/app/Application;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 358
    iget v0, v0, Landroid/content/pm/PackageInfo;->versionCode:I

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0

    .line 363
    :cond_1
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$800(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)I

    move-result v0

    return v0
.end method

.method public injectAccount()Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;
    .locals 1

    .line 368
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$900(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/livehostapi/platform/IHostTokenInjectionAuth;

    move-result-object v0

    return-object v0
.end method

.method public isBoe()Z
    .locals 1

    .line 389
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$1200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z

    move-result v0

    return v0
.end method

.method public isNeedInitNetwork()Z
    .locals 1

    .line 484
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$3100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Z

    move-result v0

    return v0
.end method

.method public provideMethodChannel()Lcom/bytedance/android/live/base/api/MethodChannelService;
    .locals 1

    .line 311
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$100(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/MethodChannelService;

    move-result-object v0

    return-object v0
.end method

.method public provideUserIdGetter()Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;
    .locals 1

    .line 439
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$2200(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$IUserIdGetter;

    move-result-object v0

    return-object v0
.end method

.method public toBuilder()Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;
    .locals 2

    .line 303
    :try_start_0
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->this$0:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    iget-object v1, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->val$selfBuilder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    invoke-static {v0, v1}, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;->access$000(Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;)Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 305
    :catch_0
    iget-object v0, p0, Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder$2;->val$selfBuilder:Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;

    return-object v0
.end method
