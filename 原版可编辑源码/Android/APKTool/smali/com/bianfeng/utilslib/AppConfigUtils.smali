.class public Lcom/bianfeng/utilslib/AppConfigUtils;
.super Ljava/lang/Object;
.source "AppConfigUtils.java"


# static fields
.field private static final YMNSDK_ALIPAY_CHANNEL_ID:Ljava/lang/String; = "YMNSDK_H5GAME_ALIPAY_CHANNEL_ID"

.field private static final YMNSDK_H5GAME_SDK_VERSION:Ljava/lang/String; = "YMNSDK_H5GAME_SDK_VERSION"

.field private static final YMNSDK_WEBPAY_APP_ID:Ljava/lang/String; = "GX_GCP_ID"

.field private static final YMNSDK_WEBPAY_PRIVATE_KEY:Ljava/lang/String; = "GX_GCP_SERCERT"

.field private static final YMNSDK_WEBPAY_SHOP_ID:Ljava/lang/String; = "YMNSDK_H5GAME_SHOP_ID"

.field private static final YMNSDK_WXPAY_CHANNEL_ID:Ljava/lang/String; = "YMNSDK_H5GAME_WXPAY_CHANNEL_ID"

.field private static appConfig:Lcom/bianfeng/utilslib/AppConfigUtils;


# instance fields
.field private context:Landroid/app/Activity;

.field private cp:Ljava/lang/String;

.field private ext:Ljava/lang/String;

.field private netIp:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 18
    new-instance v0, Lcom/bianfeng/utilslib/AppConfigUtils;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/AppConfigUtils;-><init>()V

    sput-object v0, Lcom/bianfeng/utilslib/AppConfigUtils;->appConfig:Lcom/bianfeng/utilslib/AppConfigUtils;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 27
    iput-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->netIp:Ljava/lang/String;

    .line 28
    iput-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->ext:Ljava/lang/String;

    .line 29
    iput-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->cp:Ljava/lang/String;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/AppConfigUtils;
    .locals 1

    .line 59
    sget-object v0, Lcom/bianfeng/utilslib/AppConfigUtils;->appConfig:Lcom/bianfeng/utilslib/AppConfigUtils;

    return-object v0
.end method


# virtual methods
.method public getActivityOrientation(Landroid/app/Activity;)I
    .locals 2

    .line 121
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    .line 122
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object p1

    const/16 v1, 0x80

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    .line 123
    iget p1, p1, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 126
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public getCp()Ljava/lang/String;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->cp:Ljava/lang/String;

    return-object v0
.end method

.method public getExt()Ljava/lang/String;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->ext:Ljava/lang/String;

    return-object v0
.end method

.method public getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 107
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 108
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    const/4 v1, 0x0

    .line 109
    invoke-virtual {p1, v0, v1}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    const/16 v1, 0x80

    .line 110
    invoke-virtual {p1, v0, v1}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    .line 111
    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz p1, :cond_1

    .line 112
    invoke-virtual {p1, p2}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 113
    :cond_0
    invoke-virtual {p1, p2}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1

    :catch_0
    const-string p1, "\u672a\u83b7\u53d6appid"

    return-object p1
.end method

.method public getMetaDataValue(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getNetIp()Ljava/lang/String;
    .locals 1

    .line 31
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->netIp:Ljava/lang/String;

    return-object v0
.end method

.method public getSDKVersion()Ljava/lang/String;
    .locals 2

    .line 87
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "YMNSDK_H5GAME_SDK_VERSION"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 3

    .line 136
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object v0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getH5Version()Ljava/lang/String;

    move-result-object v1

    const-string v2, "version"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->getField(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getWebPayAppId()Ljava/lang/String;
    .locals 2

    .line 68
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "GX_GCP_ID"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getWebPayPrivateKey()Ljava/lang/String;
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "GX_GCP_SERCERT"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getYmnsdkAliPayChannelId()Ljava/lang/String;
    .locals 2

    .line 99
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "YMNSDK_H5GAME_ALIPAY_CHANNEL_ID"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getYmnsdkWebpayShopId()Ljava/lang/String;
    .locals 2

    .line 91
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "YMNSDK_H5GAME_SHOP_ID"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getYmnsdkWxPayChannelId()Ljava/lang/String;
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    const-string v1, "YMNSDK_H5GAME_WXPAY_CHANNEL_ID"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getMetaDataValue(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public init(Landroid/app/Activity;)V
    .locals 0

    .line 63
    iput-object p1, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->context:Landroid/app/Activity;

    return-void
.end method

.method public isGetIpSuccess()Z
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->netIp:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public setCp(Ljava/lang/String;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->cp:Ljava/lang/String;

    return-void
.end method

.method public setExt(Ljava/lang/String;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->ext:Ljava/lang/String;

    return-void
.end method

.method public setNetIp(Ljava/lang/String;)V
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/bianfeng/utilslib/AppConfigUtils;->netIp:Ljava/lang/String;

    return-void
.end method
