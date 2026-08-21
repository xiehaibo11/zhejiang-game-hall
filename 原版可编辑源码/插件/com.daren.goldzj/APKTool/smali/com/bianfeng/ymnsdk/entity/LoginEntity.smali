.class public Lcom/bianfeng/ymnsdk/entity/LoginEntity;
.super Ljava/lang/Object;
.source "LoginEntity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/ymnsdk/entity/LoginEntity$ThirdDataBean;
    }
.end annotation


# instance fields
.field private app_id:I

.field private channel:I

.field private package_id:I

.field private platform_id:I

.field private third_data:Ljava/lang/String;


# direct methods
.method public constructor <init>(IIILjava/lang/String;)V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    .line 3
    iput p2, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    .line 4
    iput p3, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    .line 5
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->getChannelToInt()V

    .line 6
    iput-object p4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    return-void
.end method

.method private getChannelToInt()V
    .locals 2

    const/4 v0, 0x0

    .line 1
    :try_start_0
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 2
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 7
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 8
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    :goto_0
    return-void
.end method


# virtual methods
.method public getApp_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    return v0
.end method

.method public getChannel()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    return v0
.end method

.method public getPackage_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    return v0
.end method

.method public getPlatform_id()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    return v0
.end method

.method public getThird_data()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    return-object v0
.end method

.method public setApp_id(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    return-void
.end method

.method public setChannel(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    return-void
.end method

.method public setPackage_id(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    return-void
.end method

.method public setPlatform_id(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    return-void
.end method

.method public setThird_data(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 6

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object v0

    .line 2
    new-instance v1, Ljava/lang/StringBuilder;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "V2&"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "&"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 5
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v2

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v2, ""

    .line 9
    :goto_0
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 10
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
