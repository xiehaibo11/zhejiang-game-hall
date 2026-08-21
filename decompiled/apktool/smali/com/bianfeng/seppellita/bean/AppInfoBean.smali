.class public Lcom/bianfeng/seppellita/bean/AppInfoBean;
.super Ljava/lang/Object;
.source "AppInfoBean.java"


# instance fields
.field private final DEF_APIHUB_KEY:Ljava/lang/String;

.field private final SEPPELLITA_APIHUB_KEY:Ljava/lang/String;

.field private final SEPPELLITA_SITE:Ljava/lang/String;

.field private apihub_key:Ljava/lang/String;

.field private apihub_secret:Ljava/lang/String;

.field private app_build:Ljava/lang/String;

.field private app_channel:Ljava/lang/String;

.field private app_id:Ljava/lang/String;

.field private app_is_new_device:Ljava/lang/String;

.field private app_name:Ljava/lang/String;

.field private app_package:Ljava/lang/String;

.field private app_version:Ljava/lang/String;

.field private encrypt_key:Ljava/lang/String;

.field private site:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string p1, "SEPPELLITA_APIHUB_KEY"

    .line 22
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->SEPPELLITA_APIHUB_KEY:Ljava/lang/String;

    const-string p1, "sl_site"

    .line 23
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->SEPPELLITA_SITE:Ljava/lang/String;

    const-string p1, "Seppellita"

    .line 25
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->DEF_APIHUB_KEY:Ljava/lang/String;

    .line 32
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_id:Ljava/lang/String;

    .line 33
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_package:Ljava/lang/String;

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_build:Ljava/lang/String;

    .line 35
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_version:Ljava/lang/String;

    .line 36
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_name:Ljava/lang/String;

    .line 37
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getChannelId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_channel:Ljava/lang/String;

    .line 38
    invoke-direct {p0}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->init()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Z)V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string p1, "SEPPELLITA_APIHUB_KEY"

    .line 22
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->SEPPELLITA_APIHUB_KEY:Ljava/lang/String;

    const-string p1, "sl_site"

    .line 23
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->SEPPELLITA_SITE:Ljava/lang/String;

    const-string p1, "Seppellita"

    .line 25
    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->DEF_APIHUB_KEY:Ljava/lang/String;

    if-eqz p2, :cond_0

    .line 44
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_id:Ljava/lang/String;

    .line 45
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_package:Ljava/lang/String;

    .line 46
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerCode()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_build:Ljava/lang/String;

    .line 47
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_version:Ljava/lang/String;

    .line 48
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_name:Ljava/lang/String;

    .line 49
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getChannelId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_channel:Ljava/lang/String;

    .line 51
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/seppellita/bean/AppInfoBean;->init()V

    return-void
.end method

.method private init()V
    .locals 3

    const-string v0, "Seppellita"

    .line 55
    invoke-static {}, Lcom/bianfeng/seppellita/utils/SeppellitaSharedPreferencesUtils;->getIsNew()Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "1"

    goto :goto_0

    :cond_0
    const-string v1, "0"

    .line 56
    :goto_0
    iput-object v1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_is_new_device:Ljava/lang/String;

    .line 58
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    const-string v2, "SEPPELLITA_APIHUB_KEY"

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    .line 59
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    const-string v2, "sl_site"

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-nez v1, :cond_1

    const-string v1, "S011"

    .line 61
    iput-object v1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->site:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v1

    .line 64
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    const-string v1, ""

    .line 65
    iput-object v1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->site:Ljava/lang/String;

    .line 66
    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    .line 68
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 69
    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    .line 71
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/KeySecurityUtils;->getApihubSecret(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_secret:Ljava/lang/String;

    .line 72
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/KeySecurityUtils;->getEncryptKey(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->encrypt_key:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getApihub_key()Ljava/lang/String;
    .locals 1

    .line 105
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_key:Ljava/lang/String;

    return-object v0
.end method

.method public getApihub_secret()Ljava/lang/String;
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->apihub_secret:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_build()Ljava/lang/String;
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_build:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_channel()Ljava/lang/String;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_channel:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "0"

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_channel:Ljava/lang/String;

    :goto_0
    return-object v0
.end method

.method public getApp_id()Ljava/lang/String;
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_id:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_name()Ljava/lang/String;
    .locals 1

    .line 81
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_name:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_package()Ljava/lang/String;
    .locals 1

    .line 85
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_package:Ljava/lang/String;

    return-object v0
.end method

.method public getApp_version()Ljava/lang/String;
    .locals 1

    .line 93
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_version:Ljava/lang/String;

    return-object v0
.end method

.method public getEncrypt_key()Ljava/lang/String;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->encrypt_key:Ljava/lang/String;

    return-object v0
.end method

.method public getIs_New_Device()Ljava/lang/String;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->app_is_new_device:Ljava/lang/String;

    return-object v0
.end method

.method public getSite()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/bianfeng/seppellita/bean/AppInfoBean;->site:Ljava/lang/String;

    return-object v0
.end method
