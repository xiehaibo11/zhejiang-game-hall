.class public Lcom/bianfeng/loginlib/ui/LoginRequest;
.super Ljava/lang/Object;
.source "LoginRequest.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private map:Ljava/util/TreeMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Landroid/app/Activity;Ljava/util/TreeMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 26
    iput-object p1, p0, Lcom/bianfeng/loginlib/ui/LoginRequest;->activity:Landroid/app/Activity;

    .line 27
    iput-object p2, p0, Lcom/bianfeng/loginlib/ui/LoginRequest;->map:Ljava/util/TreeMap;

    .line 28
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getWebPayAppId()Ljava/lang/String;

    move-result-object p1

    const-string v0, "gcp_id"

    .line 29
    invoke-virtual {p2, v0, p1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 30
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSignMd5()Lcom/bianfeng/utilslib/SignMd5Utils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/SignMd5Utils;->getMd5(Ljava/util/TreeMap;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "sign"

    invoke-virtual {p2, v0, p1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 31
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getSdkVersion()Ljava/lang/String;

    move-result-object p1

    const-string v0, "sdk_version"

    .line 32
    invoke-virtual {p2, v0, p1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 33
    invoke-direct {p0}, Lcom/bianfeng/loginlib/ui/LoginRequest;->requestLogin()V

    return-void
.end method

.method private requestLogin()V
    .locals 4

    .line 38
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getCallback()Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

    move-result-object v0

    .line 40
    :try_start_0
    new-instance v1, Lcom/bianfeng/loginlib/action/H5GameLoginAction;

    iget-object v2, p0, Lcom/bianfeng/loginlib/ui/LoginRequest;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2}, Lcom/bianfeng/loginlib/action/H5GameLoginAction;-><init>(Landroid/app/Activity;)V

    .line 41
    iget-object v2, p0, Lcom/bianfeng/loginlib/ui/LoginRequest;->map:Ljava/util/TreeMap;

    invoke-virtual {v1, v2}, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->putReqData(Ljava/util/TreeMap;)V

    .line 42
    new-instance v2, Lcom/bianfeng/loginlib/ui/LoginRequest$1;

    invoke-direct {v2, p0, v0}, Lcom/bianfeng/loginlib/ui/LoginRequest$1;-><init>(Lcom/bianfeng/loginlib/ui/LoginRequest;Lcom/bianfeng/loginlib/YmnH5LoginCallBack;)V

    invoke-virtual {v1, v2}, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->addObserver(Ljava/util/Observer;)V

    .line 55
    invoke-virtual {v1}, Lcom/bianfeng/loginlib/action/H5GameLoginAction;->actionStart()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    if-eqz v0, :cond_0

    .line 58
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u767b\u5f55\u8bf7\u6c42\u51fa\u73b0\u7684\u5f02\u5e38\uff1a"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/bianfeng/loginlib/YmnH5LoginCallBack;->onLoginFail(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public static start(Landroid/app/Activity;Ljava/util/TreeMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 22
    new-instance v0, Lcom/bianfeng/loginlib/ui/LoginRequest;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/loginlib/ui/LoginRequest;-><init>(Landroid/app/Activity;Ljava/util/TreeMap;)V

    return-void
.end method
