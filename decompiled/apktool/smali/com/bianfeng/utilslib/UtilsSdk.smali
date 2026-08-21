.class public Lcom/bianfeng/utilslib/UtilsSdk;
.super Ljava/lang/Object;
.source "UtilsSdk.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getActivityHook()Lcom/bianfeng/utilslib/ActivityHookUtils;
    .locals 1

    .line 77
    invoke-static {}, Lcom/bianfeng/utilslib/ActivityHookUtils;->getInstance()Lcom/bianfeng/utilslib/ActivityHookUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getAppConfig()Lcom/bianfeng/utilslib/AppConfigUtils;
    .locals 1

    .line 53
    invoke-static {}, Lcom/bianfeng/utilslib/AppConfigUtils;->getInstance()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;
    .locals 1

    .line 81
    invoke-static {}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getInstance()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getConfiguration()Lcom/bianfeng/utilslib/ConfigurationUtils;
    .locals 1

    .line 89
    invoke-static {}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getInstance()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getDensityUtils()Lcom/bianfeng/utilslib/DensityUtils;
    .locals 1

    .line 73
    invoke-static {}, Lcom/bianfeng/utilslib/DensityUtils;->getInstance()Lcom/bianfeng/utilslib/DensityUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getFileUtils()Lcom/bianfeng/utilslib/FileUtils;
    .locals 1

    .line 49
    invoke-static {}, Lcom/bianfeng/utilslib/FileUtils;->getInstance()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getFullScreen()Lcom/bianfeng/utilslib/screen/FullScreenUtils;
    .locals 1

    .line 61
    invoke-static {}, Lcom/bianfeng/utilslib/screen/FullScreenUtils;->getInstance()Lcom/bianfeng/utilslib/screen/FullScreenUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getLogger()Lcom/bianfeng/utilslib/Logger;
    .locals 1

    .line 33
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    return-object v0
.end method

.method public static getNotchScreen()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;
    .locals 1

    .line 93
    invoke-static {}, Lcom/bianfeng/utilslib/screen/NotchScreenUtils;->getInstance()Lcom/bianfeng/utilslib/screen/NotchScreenUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getPermission(Landroid/app/Activity;)Lcom/bianfeng/utilslib/PermissionUtils;
    .locals 1

    .line 37
    new-instance v0, Lcom/bianfeng/utilslib/PermissionUtils;

    invoke-direct {v0, p0}, Lcom/bianfeng/utilslib/PermissionUtils;-><init>(Landroid/app/Activity;)V

    return-object v0
.end method

.method public static getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;
    .locals 1

    .line 85
    invoke-static {}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->getInstance()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getResourceManger()Lcom/bianfeng/utilslib/ResourceManger;
    .locals 1

    .line 45
    new-instance v0, Lcom/bianfeng/utilslib/ResourceManger;

    invoke-direct {v0}, Lcom/bianfeng/utilslib/ResourceManger;-><init>()V

    return-object v0
.end method

.method public static getSharedPreferences()Lcom/bianfeng/utilslib/SharedPreferencesUtils;
    .locals 1

    .line 57
    invoke-static {}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->getInstance()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object v0

    return-object v0
.end method

.method public static getSignMd5()Lcom/bianfeng/utilslib/SignMd5Utils;
    .locals 1

    .line 69
    invoke-static {}, Lcom/bianfeng/utilslib/SignMd5Utils;->getInstance()Lcom/bianfeng/utilslib/SignMd5Utils;

    move-result-object v0

    return-object v0
.end method

.method public static getSystemUtil()Lcom/bianfeng/utilslib/SystemUtil;
    .locals 1

    .line 65
    invoke-static {}, Lcom/bianfeng/utilslib/SystemUtil;->getInstance()Lcom/bianfeng/utilslib/SystemUtil;

    move-result-object v0

    return-object v0
.end method

.method public static getToast()Lcom/bianfeng/utilslib/ToastUtils;
    .locals 1

    .line 41
    invoke-static {}, Lcom/bianfeng/utilslib/ToastUtils;->getInstance()Lcom/bianfeng/utilslib/ToastUtils;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/app/Activity;)V
    .locals 1

    .line 16
    invoke-static {}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->getInstance()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 17
    invoke-static {}, Lcom/bianfeng/utilslib/FileUtils;->getInstance()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/utilslib/FileUtils;->init(Landroid/app/Activity;)V

    .line 18
    invoke-static {}, Lcom/bianfeng/utilslib/AppConfigUtils;->getInstance()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/utilslib/AppConfigUtils;->init(Landroid/app/Activity;)V

    .line 19
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/utilslib/Logger;->updateState()V

    return-void
.end method

.method public static onCreate(Landroid/app/Activity;)V
    .locals 1

    .line 25
    invoke-static {}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getInstance()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/utilslib/ConfigurationUtils;->onInit(Landroid/app/Activity;)V

    return-void
.end method

.method public static onWindowFocusChanged(ZLandroid/app/Activity;)V
    .locals 1

    .line 29
    invoke-static {}, Lcom/bianfeng/utilslib/ConfigurationUtils;->getInstance()Lcom/bianfeng/utilslib/ConfigurationUtils;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/utilslib/ConfigurationUtils;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method
