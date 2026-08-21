.class public Lcom/qihoo360/replugin/RePluginApplication;
.super Landroid/app/Application;
.source "RePluginApplication.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "RePluginApplication: "


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Landroid/app/Application;-><init>()V

    return-void
.end method


# virtual methods
.method protected attachBaseContext(Landroid/content/Context;)V
    .locals 2

    .line 60
    invoke-static {}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->getInstance()Lcom/qihoo360/replugin/utils/RepluginLogUtils;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/RepluginLogUtils;->setWriteablePath(Ljava/lang/String;)V

    .line 61
    invoke-super {p0, p1}, Landroid/app/Application;->attachBaseContext(Landroid/content/Context;)V

    const-string p1, "RePluginApplication: "

    const-string v0, "invoke createConfig"

    .line 62
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 64
    invoke-virtual {p0}, Lcom/qihoo360/replugin/RePluginApplication;->createConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    if-nez p1, :cond_0

    .line 66
    new-instance p1, Lcom/qihoo360/replugin/RePluginConfig;

    invoke-direct {p1}, Lcom/qihoo360/replugin/RePluginConfig;-><init>()V

    .line 69
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/RePluginApplication;->createCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 71
    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/RePluginConfig;->setCallbacks(Lcom/qihoo360/replugin/RePluginCallbacks;)Lcom/qihoo360/replugin/RePluginConfig;

    .line 74
    :cond_1
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/RePlugin$App;->attachBaseContext(Landroid/app/Application;Lcom/qihoo360/replugin/RePluginConfig;)V

    return-void
.end method

.method protected createCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method protected createConfig()Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 44
    new-instance v0, Lcom/qihoo360/replugin/RePluginConfig;

    invoke-direct {v0}, Lcom/qihoo360/replugin/RePluginConfig;-><init>()V

    return-object v0
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 102
    invoke-super {p0, p1}, Landroid/app/Application;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 105
    invoke-static {p1}, Lcom/qihoo360/replugin/RePlugin$App;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onCreate()V
    .locals 0

    .line 79
    invoke-super {p0}, Landroid/app/Application;->onCreate()V

    .line 81
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin$App;->onCreate()V

    return-void
.end method

.method public onLowMemory()V
    .locals 0

    .line 86
    invoke-super {p0}, Landroid/app/Application;->onLowMemory()V

    .line 89
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin$App;->onLowMemory()V

    return-void
.end method

.method public onTrimMemory(I)V
    .locals 0

    .line 94
    invoke-super {p0, p1}, Landroid/app/Application;->onTrimMemory(I)V

    .line 97
    invoke-static {p1}, Lcom/qihoo360/replugin/RePlugin$App;->onTrimMemory(I)V

    return-void
.end method
