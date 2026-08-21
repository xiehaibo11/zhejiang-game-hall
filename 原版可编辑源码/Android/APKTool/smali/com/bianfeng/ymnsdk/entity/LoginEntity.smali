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
    .param p1, "app_id"    # I
    .param p2, "package_id"    # I
    .param p3, "platform_id"    # I
    .param p4, "third_data"    # Ljava/lang/String;

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 33
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    .line 34
    iput p2, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    .line 35
    iput p3, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    .line 36
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->getChannelToInt()V

    .line 37
    iput-object p4, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    .line 39
    return-void
.end method

.method private getChannelToInt()V
    .locals 2

    .line 43
    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 44
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    goto :goto_0

    .line 46
    :cond_0
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 51
    :goto_0
    goto :goto_1

    .line 48
    :catch_0
    move-exception v1

    .line 49
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 50
    iput v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    .line 53
    .end local v1    # "e":Ljava/lang/Exception;
    :goto_1
    return-void
.end method


# virtual methods
.method public getApp_id()I
    .locals 1

    .line 71
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    return v0
.end method

.method public getChannel()I
    .locals 1

    .line 95
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    return v0
.end method

.method public getPackage_id()I
    .locals 1

    .line 79
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    return v0
.end method

.method public getPlatform_id()I
    .locals 1

    .line 87
    iget v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    return v0
.end method

.method public getThird_data()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    return-object v0
.end method

.method public setApp_id(I)V
    .locals 0
    .param p1, "app_id"    # I

    .line 75
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->app_id:I

    .line 76
    return-void
.end method

.method public setChannel(I)V
    .locals 0
    .param p1, "channel"    # I

    .line 99
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->channel:I

    .line 100
    return-void
.end method

.method public setPackage_id(I)V
    .locals 0
    .param p1, "package_id"    # I

    .line 83
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->package_id:I

    .line 84
    return-void
.end method

.method public setPlatform_id(I)V
    .locals 0
    .param p1, "platform_id"    # I

    .line 91
    iput p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->platform_id:I

    .line 92
    return-void
.end method

.method public setThird_data(Ljava/lang/String;)V
    .locals 0
    .param p1, "third_data"    # Ljava/lang/String;

    .line 107
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->third_data:Ljava/lang/String;

    .line 108
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 7

    .line 58
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object v0

    .line 59
    .local v0, "trace":Ljava/lang/String;
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

    .line 60
    .local v1, "sb":Ljava/lang/StringBuilder;
    const/4 v2, 0x0

    .line 62
    .local v2, "signed":Ljava/lang/String;
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v4

    .line 65
    goto :goto_0

    .line 63
    :catch_0
    move-exception v4

    .line 64
    .local v4, "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    const-string v2, ""

    .line 66
    .end local v4    # "e":Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
    :goto_0
    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 67
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    return-object v3
.end method
