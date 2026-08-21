.class public Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;
.super Lcom/czhj/sdk/common/mta/PointEntityCrash;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/mta/PointEntityCrash;-><init>()V

    return-void
.end method

.method public static WindCrash(Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;
    .locals 2

    new-instance v0, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;

    invoke-direct {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;-><init>()V

    const-string v1, "402"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->setAc_type(Ljava/lang/String;)V

    const-string v1, "crash"

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->setCategory(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->setCrashMessage(Ljava/lang/String;)V

    return-object v0
.end method


# virtual methods
.method public appId()Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSdkversion()Ljava/lang/String;
    .locals 1

    const-string v0, "4.9.0"

    return-object v0
.end method

.method public isAcTypeBlock()Z
    .locals 4

    invoke-static {}, Lcom/sigmob/sdk/base/c;->a()Lcom/sigmob/sdk/base/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/c;->i()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/i;->D()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->getAc_type()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "black ac type "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobCrash;->getAc_type()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return v1

    :cond_2
    const/4 v0, 0x0

    return v0
.end method
