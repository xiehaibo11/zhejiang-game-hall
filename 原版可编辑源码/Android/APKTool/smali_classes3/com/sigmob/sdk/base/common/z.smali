.class public Lcom/sigmob/sdk/base/common/z;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/common/z$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/pm/PackageInfo;)V
    .locals 4

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;-><init>()V

    const-string v1, "10"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setAc_type(Ljava/lang/String;)V

    const-string v1, "app"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setCategory(Ljava/lang/String;)V

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/b;->b()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/AppPackageUtil;->getPackageManager(Landroid/content/Context;)Landroid/content/pm/PackageManager;

    move-result-object v2

    iget-object v3, p0, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {v2, v3}, Landroid/content/pm/PackageManager;->getApplicationLabel(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "app_name"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    iget-object v2, p0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    const-string v3, "package_name"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-wide v2, p0, Landroid/content/pm/PackageInfo;->lastUpdateTime:J

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    const-string v3, "update"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p0, p0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    const-string v2, "app_version"

    invoke-interface {v1, v2, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setOptions(Ljava/util/Map;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->commit()V

    return-void
.end method

.method public static a(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Z)V
    .locals 3

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;-><init>()V

    const-string v1, "30"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAc_type(Ljava/lang/String;)V

    iget v1, p0, Lcom/czhj/volley/toolbox/DownloadItem;->status:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIssuccess(Ljava/lang/String;)V

    if-eqz p3, :cond_0

    const-string p3, "1"

    goto :goto_0

    :cond_0
    const-string p3, "0"

    :goto_0
    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIscached(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/czhj/volley/toolbox/DownloadItem;->networkMs:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setDuration(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/czhj/volley/toolbox/DownloadItem;->size:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFile_size(Ljava/lang/String;)V

    iget-object p3, p0, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {p3}, Ljava/lang/String;->getBytes()[B

    move-result-object p3

    const/4 v1, 0x2

    invoke-static {p3, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setFile_name(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setError_message(Ljava/lang/String;)V

    iget-object p0, p0, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-virtual {p0}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->getType()I

    move-result p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getCategory()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getSub_category()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->commit()V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const-wide/16 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 10

    if-nez p0, :cond_0

    move-object v0, p1

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/a;->name()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    :goto_0
    new-instance v9, Lcom/sigmob/sdk/base/common/z$6;

    move-object v1, v9

    move-object v2, p2

    move-object v3, p1

    move-object v4, p3

    move-object v5, p4

    move-object v6, p5

    move-wide/from16 v7, p6

    invoke-direct/range {v1 .. v8}, Lcom/sigmob/sdk/base/common/z$6;-><init>(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    move-object v1, p1

    invoke-static {v0, p1, p2, v9}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/g;->n()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/ae;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object v0

    const-string v1, "13"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/ae;->c(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p2

    new-instance v0, Lcom/sigmob/sdk/base/common/z$4;

    invoke-direct {v0, p1, p0, p3, p4}, Lcom/sigmob/sdk/base/common/z$4;-><init>(Ljava/lang/String;Lcom/sigmob/sdk/base/common/g;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/sdk/base/common/z$a;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/ae;->a()V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/VolleyError;)V
    .locals 2

    const/4 v0, 0x0

    if-eqz p3, :cond_0

    iget-object v1, p3, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    goto :goto_0

    :cond_0
    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    new-instance v0, Lcom/sigmob/sdk/base/common/z$3;

    invoke-direct {v0, p3}, Lcom/sigmob/sdk/base/common/z$3;-><init>(Lcom/czhj/volley/VolleyError;)V

    :goto_1
    invoke-static {p0, p1, p2, v1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/view/MotionEvent;Ljava/lang/String;Z)V
    .locals 6

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getDownTime()J

    move-result-wide v0

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getEventTime()J

    move-result-wide v2

    sub-long/2addr v2, v0

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntityClick;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntityClick;-><init>()V

    const-string v1, "102"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setCategory(Ljava/lang/String;)V

    const/4 p2, 0x2

    new-array p2, p2, [Ljava/lang/Object;

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v1

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    const/4 v4, 0x0

    aput-object v1, p2, v4

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v1

    invoke-static {v1}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v1

    const/4 v5, 0x1

    aput-object v1, p2, v5

    const-string v1, "{x:%f,y:%f}"

    invoke-static {v1, p2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setLocation(Ljava/lang/String;)V

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setClick_duration(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getPressure()F

    move-result p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setPressure(Ljava/lang/String;)V

    invoke-virtual {p1}, Landroid/view/MotionEvent;->getSize()F

    move-result p2

    invoke-static {p2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setTouchSize(Ljava/lang/String;)V

    invoke-virtual {p1, v4}, Landroid/view/MotionEvent;->getToolType(I)I

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setTouchType(Ljava/lang/String;)V

    if-eqz p3, :cond_0

    const-string p1, "1"

    goto :goto_0

    :cond_0
    const-string p1, "0"

    :goto_0
    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setIs_valid_click(Ljava/lang/String;)V

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->setLoad_id(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntityClick;->commit()V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Landroid/content/pm/PackageInfo;Ljava/lang/String;)V
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/base/common/z$5;

    invoke-direct {v1, p1, p3, p0, p2}, Lcom/sigmob/sdk/base/common/z$5;-><init>(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/content/pm/PackageInfo;)V

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->submit(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance p1, Lcom/sigmob/sdk/base/common/z$2;

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/base/common/z$2;-><init>(Ljava/lang/String;)V

    const-string p2, "target_url"

    const/4 v0, 0x0

    invoke-static {p2, v0, p0, p1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method protected static a(Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V
    .locals 4

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object v0

    const-string v1, "0"

    if-eqz v0, :cond_3

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object v2

    if-eqz v2, :cond_3

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->isCanUsePhoneState()Z

    move-result v2

    const-string v3, "1"

    if-eqz v2, :cond_0

    move-object v2, v1

    goto :goto_0

    :cond_0
    move-object v2, v3

    :goto_0
    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_custom_imei(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->isCanUseAndroidId()Z

    move-result v2

    if-eqz v2, :cond_1

    move-object v2, v1

    goto :goto_1

    :cond_1
    move-object v2, v3

    :goto_1
    invoke-virtual {p0, v2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_custom_android_id(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/windad/WindCustomController;->getDevOaid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    move-object v1, v3

    goto :goto_2

    :cond_3
    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_custom_imei(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_custom_android_id(Ljava/lang/String;)V

    :goto_2
    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setIs_custom_oaid(Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;-><init>()V

    const-string v1, "102"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setCategory(Ljava/lang/String;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getApkSha1()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setSha1(Ljava/lang/String;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getApkMd5()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->setMd5(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobSuper;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, p2, p3, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    if-eqz p4, :cond_0

    invoke-interface {p4, p1}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    invoke-static {p0, p0, p3, p1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 5

    new-instance v0, Lcom/sigmob/sdk/base/common/y;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/common/y;-><init>()V

    const-string v1, "1"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/y;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/y;->setCategory(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/i;->H()Z

    move-result p0

    if-nez p0, :cond_0

    const-string p0, "1,1"

    goto :goto_0

    :cond_0
    const-string p0, "0,0"

    :goto_0
    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/y;->setAppinfo_switch(Ljava/lang/String;)V

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/ClientMetadata;->getLocation()Landroid/location/Location;

    move-result-object p0

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    move p0, v2

    goto :goto_1

    :cond_1
    move p0, v3

    :goto_1
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v4

    invoke-virtual {v4}, Lcom/sigmob/sdk/base/i;->G()Z

    move-result v4

    if-nez v4, :cond_2

    move v3, p0

    goto :goto_2

    :cond_2
    move v2, v3

    :goto_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/common/y;->setLocation_switch(Ljava/lang/String;)V

    if-eqz p1, :cond_3

    invoke-interface {p1, v0}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_3
    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object p0

    const-string p1, "0"

    if-eqz p0, :cond_7

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAds;->getOptions()Lcom/sigmob/windad/WindAdOptions;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object v2

    if-eqz v2, :cond_7

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdOptions;->getCustomController()Lcom/sigmob/windad/WindCustomController;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/windad/WindCustomController;->isCanUsePhoneState()Z

    move-result v2

    if-eqz v2, :cond_4

    move-object v2, p1

    goto :goto_3

    :cond_4
    move-object v2, v1

    :goto_3
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/y;->a(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/WindCustomController;->isCanUseAndroidId()Z

    move-result v2

    if-eqz v2, :cond_5

    move-object v2, p1

    goto :goto_4

    :cond_5
    move-object v2, v1

    :goto_4
    invoke-virtual {v0, v2}, Lcom/sigmob/sdk/base/common/y;->b(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/WindCustomController;->getDevOaid()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_6

    move-object v1, p1

    :cond_6
    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/y;->c(Ljava/lang/String;)V

    goto :goto_5

    :cond_7
    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/y;->a(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/y;->b(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/y;->c(Ljava/lang/String;)V

    :goto_5
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/y;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;-><init>()V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAc_type(Ljava/lang/String;)V

    if-eqz p3, :cond_0

    invoke-interface {p3, v0}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getCategory()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getSub_category()Ljava/lang/String;

    move-result-object p3

    invoke-static {p0, p3, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setLoad_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneDesc()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_desc(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPlacement_id(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 8

    const/4 v0, 0x0

    const-wide/16 v6, 0x0

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 8

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v3

    const/4 v1, 0x0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v7, 0x0

    move-object v0, p0

    move-object v6, p2

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    invoke-static {p0, p0, p2, p1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    if-eqz p3, :cond_0

    invoke-interface {p3, p1}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 8

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v3

    const/4 v1, 0x0

    const/4 v4, 0x0

    const/4 v7, 0x0

    move-object v0, p0

    move-object v5, p3

    move-object v6, p2

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/windad/WindAdRequest;)V
    .locals 8

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v3

    const/4 v1, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v0, p0

    move-object v4, p2

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 8

    const/4 v4, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    move-object v0, p0

    move-object v1, p1

    move v2, p2

    move-object v3, p3

    move-object v5, p4

    invoke-static/range {v0 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 0

    invoke-static {p0, p2, p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setSub_category(Ljava/lang/String;)V

    invoke-static {p0, p0, p2, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/windad/WindAdRequest;)V

    invoke-static {p0, p0, p2, p5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-static {p0, p0, p6, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    if-eqz p7, :cond_0

    invoke-interface {p7, p2}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 6

    const/4 v3, 0x0

    const/4 v4, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v5, p3

    invoke-static/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 6

    const/4 v3, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v4, p3

    move-object v5, p4

    invoke-static/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method protected static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V
    .locals 2

    if-eqz p2, :cond_7

    :try_start_0
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCampaign_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCreative_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRequest_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setLoad_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVid()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setVid(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_id()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_scene_desc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setScene_desc(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPlay_mode(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setCreative_type(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getBid_token()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setBid_token(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->settlement_price_enc:Ljava/lang/String;

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPrice(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/Ad;->product_id:Ljava/lang/String;

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setProduct_id(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->template_type:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTemplate_type(I)V

    :cond_1
    invoke-virtual {p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getTarget_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setTarget_url(Ljava/lang/String;)V

    :cond_2
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    if-eqz v0, :cond_4

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_path:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_path:Ljava/lang/String;

    const-string v1, "UTF-8"

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setWx_app_path(Ljava/lang/String;)V

    :cond_3
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_username:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getWXProgramRes()Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;

    move-result-object v0

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/WXProgramRes;->wx_app_username:Ljava/lang/String;

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setWx_app_username(Ljava/lang/String;)V

    :cond_4
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAd_source_channel(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getShow_type()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "request"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "ready"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "start"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "endcard"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_5

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_7

    const-string p0, "click"

    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    :cond_5
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result p0

    const/4 p1, 0x4

    if-ne p0, p1, :cond_7

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isHalfInterstitial()Z

    move-result p0

    if-eqz p0, :cond_6

    const-string p0, "2"

    :goto_0
    invoke-virtual {p3, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setShow_type(Ljava/lang/String;)V

    goto :goto_1

    :cond_6
    const-string p0, "1"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :cond_7
    :goto_1
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 6

    const/4 v4, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v5, p4

    invoke-static/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 0

    invoke-static {p0}, Lcom/sigmob/sdk/base/common/ae;->a(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/ae;->d(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/windad/WindAdRequest;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    new-instance p1, Lcom/sigmob/sdk/base/common/z$1;

    invoke-direct {p1, p5}, Lcom/sigmob/sdk/base/common/z$1;-><init>(Lcom/sigmob/sdk/base/common/z$a;)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/common/ae;->a(Lcom/sigmob/sdk/base/common/z$a;)Lcom/sigmob/sdk/base/common/ae;

    move-result-object p0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/common/ae;->a()V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 6

    const/4 v2, 0x0

    const/4 v3, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v4, p2

    invoke-static/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method protected static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 2

    if-eqz p2, :cond_7

    if-eqz p3, :cond_7

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setBid_token(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setLoad_id(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getRequestId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setRequest_id(Ljava/lang/String;)V

    :cond_2
    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_3

    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setExtinfo(Ljava/lang/String;)V

    :cond_3
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getShow_type()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "request"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "ready"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "start"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "endcard"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_5

    :cond_4
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_7

    const-string p0, "click"

    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_7

    :cond_5
    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdType()I

    move-result p0

    const/4 p1, 0x4

    if-ne p0, p1, :cond_7

    invoke-virtual {p3}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isHalfInterstitial()Z

    move-result p0

    if-eqz p0, :cond_6

    const-string p0, "2"

    goto :goto_0

    :cond_6
    const-string p0, "1"

    :goto_0
    invoke-virtual {p2, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setShow_type(Ljava/lang/String;)V

    :cond_7
    return-void
.end method

.method protected static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/windad/WindAdRequest;)V
    .locals 2

    if-eqz p2, :cond_4

    if-eqz p3, :cond_4

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setLoad_id(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->getAdType()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->hasOptions()Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v1

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setExtinfo(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    invoke-virtual {p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->getShow_type()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "request"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "ready"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "start"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "endcard"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_2

    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_4

    const-string p0, "click"

    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    :cond_2
    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->getAdType()I

    move-result p0

    const/4 p1, 0x4

    if-ne p0, p1, :cond_4

    invoke-virtual {p3}, Lcom/sigmob/windad/WindAdRequest;->isHalfInterstitial()Z

    move-result p0

    if-eqz p0, :cond_3

    const-string p0, "2"

    goto :goto_0

    :cond_3
    const-string p0, "1"

    :goto_0
    invoke-virtual {p2, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmob;->setShow_type(Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;-><init>()V

    const-string v1, "5"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setAc_type(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->setSub_category(Ljava/lang/String;)V

    invoke-static {p0, p0, v0, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/mta/PointEntitySigmob;Lcom/sigmob/windad/WindAdRequest;)V

    if-eqz p3, :cond_0

    invoke-interface {p3, v0}, Lcom/sigmob/sdk/base/common/z$a;->a(Ljava/lang/Object;)V

    :cond_0
    invoke-static {v0}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/mta/PointEntitySigmob;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobRequest;->commit()V

    return-void
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method
