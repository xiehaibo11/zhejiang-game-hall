.class public Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;
.super Ljava/lang/Object;
.source "AppContext.java"


# static fields
.field private static final KEY_CHANNEL_ID:Ljava/lang/String; = "TD_CHANNEL_ID"

.field private static final KEY_CHANNEL_ID_FIX:Ljava/lang/String; = "channel_id"

.field private static final KEY_CONFIG_ID:Ljava/lang/String; = "TD_CONFIG_ID"

.field private static final KEY_OS_TYPE:Ljava/lang/String; = "TD_CLIENT_TYPE"

.field private static final KEY_SDK_APP_ID:Ljava/lang/String; = "TD_SDK_APP_ID"

.field private static volatile appContext:Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;


# instance fields
.field private appId:I

.field private appName:Ljava/lang/String;

.field private channelId:Ljava/lang/String;

.field private deviceType:Ljava/lang/String;

.field private identify_id:I

.field private isFirst:Z

.field private mConfiguration:Landroid/content/res/Configuration;

.field private pi:Landroid/content/pm/PackageInfo;

.field private pkgName:Ljava/lang/String;

.field private pm:Landroid/content/pm/PackageManager;

.field private verCode:Ljava/lang/String;

.field private verName:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;
    .locals 2

    .line 44
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appContext:Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    if-nez v0, :cond_1

    .line 45
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    monitor-enter v0

    .line 46
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appContext:Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    if-nez v1, :cond_0

    .line 47
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appContext:Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    .line 49
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 51
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appContext:Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    return-object v0
.end method

.method private initChannel(Landroid/content/Context;)V
    .locals 1

    .line 77
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getApkPath(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    .line 79
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 80
    invoke-static {p1}, Lcom/bianfeng/afext/Afexter;->readChannel(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    .line 81
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "channelId from afexter "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 83
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    const-string p1, "TD_CHANNEL_ID"

    .line 84
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    .line 86
    :cond_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "channel_id"

    .line 87
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p1, ""

    .line 90
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method public getActivityOrientation(Landroid/app/Activity;)I
    .locals 2

    .line 160
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object p1

    const/16 v1, 0x80

    invoke-virtual {v0, p1, v1}, Landroid/content/pm/PackageManager;->getActivityInfo(Landroid/content/ComponentName;I)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    .line 161
    iget p1, p1, Landroid/content/pm/ActivityInfo;->screenOrientation:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 164
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return p1
.end method

.method public getApkPath(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 96
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public getAppId()I
    .locals 1

    .line 143
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appId:I

    return v0
.end method

.method public getAppName()Ljava/lang/String;
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appName:Ljava/lang/String;

    return-object v0
.end method

.method public getChannelId()Ljava/lang/String;
    .locals 1

    .line 103
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->channelId:Ljava/lang/String;

    return-object v0
.end method

.method public getDeviceType()Ljava/lang/String;
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->deviceType:Ljava/lang/String;

    return-object v0
.end method

.method public getIdentify_id()I
    .locals 1

    .line 147
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->identify_id:I

    return v0
.end method

.method public getMetaDataValueInt(Ljava/lang/String;)I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 119
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pkgName:Ljava/lang/String;

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 120
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v0, :cond_1

    .line 121
    invoke-virtual {v0, p1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 123
    :cond_0
    invoke-virtual {v0, p1}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return p1

    :catch_0
    move-exception p1

    .line 125
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 107
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pkgName:Ljava/lang/String;

    const/16 v2, 0x80

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    .line 108
    iget-object v0, v0, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;

    if-eqz v0, :cond_1

    .line 109
    invoke-virtual {v0, p1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 111
    :cond_0
    invoke-virtual {v0, p1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

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
    move-exception p1

    .line 113
    new-instance v0, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public getPkgName()Ljava/lang/String;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pkgName:Ljava/lang/String;

    return-object v0
.end method

.method public getVerCode()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->verCode:Ljava/lang/String;

    return-object v0
.end method

.method public getVerName()Ljava/lang/String;
    .locals 1

    .line 139
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->verName:Ljava/lang/String;

    return-object v0
.end method

.method public init(Landroid/content/Context;)V
    .locals 3

    .line 55
    iget-boolean v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->isFirst:Z

    if-eqz v0, :cond_0

    return-void

    .line 59
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pkgName:Ljava/lang/String;

    .line 60
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    .line 61
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pkgName:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pi:Landroid/content/pm/PackageInfo;

    const-string v0, "TD_SDK_APP_ID"

    .line 62
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appId:I

    const-string v0, "TD_CONFIG_ID"

    .line 63
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->identify_id:I

    const-string v0, "TD_CLIENT_TYPE"

    .line 64
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->deviceType:Ljava/lang/String;

    .line 65
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pi:Landroid/content/pm/PackageInfo;

    iget-object v0, v0, Landroid/content/pm/PackageInfo;->versionName:Ljava/lang/String;

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->verName:Ljava/lang/String;

    .line 66
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pi:Landroid/content/pm/PackageInfo;

    iget v1, v1, Landroid/content/pm/PackageInfo;->versionCode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->verCode:Ljava/lang/String;

    .line 67
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->mConfiguration:Landroid/content/res/Configuration;

    .line 68
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pm:Landroid/content/pm/PackageManager;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->pi:Landroid/content/pm/PackageInfo;

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {v0, v1}, Landroid/content/pm/PackageManager;->getApplicationLabel(Landroid/content/pm/ApplicationInfo;)Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appName:Ljava/lang/String;

    .line 69
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->initChannel(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 71
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const/4 p1, 0x1

    .line 73
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->isFirst:Z

    return-void
.end method

.method public isLand(Landroid/app/Activity;)Z
    .locals 1

    .line 170
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getActivityOrientation(Landroid/app/Activity;)I

    move-result p1

    .line 171
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->mConfiguration:Landroid/content/res/Configuration;

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public setAppId(I)V
    .locals 0

    .line 175
    iput p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->appId:I

    return-void
.end method

.method public setIdentify_id(I)V
    .locals 0

    .line 179
    iput p1, p0, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->identify_id:I

    return-void
.end method
