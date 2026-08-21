.class public Lcom/ymnsdk/replugin/YmnRepluginApplication;
.super Lcom/qihoo360/replugin/RePluginApplication;
.source "YmnRepluginApplication.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ymnsdk/replugin/YmnRepluginApplication$HostEventCallbacks;,
        Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 51
    invoke-direct {p0}, Lcom/qihoo360/replugin/RePluginApplication;-><init>()V

    return-void
.end method

.method private closeAndroidPDialog()V
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_0
    const-string v2, "android.content.pm.PackageParser$Package"

    .line 301
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Class;

    .line 302
    const-class v4, Ljava/lang/String;

    aput-object v4, v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v2

    .line 303
    invoke-virtual {v2, v1}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    .line 305
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_1
    const-string v2, "android.app.ActivityThread"

    .line 308
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "currentActivityThread"

    new-array v4, v0, [Ljava/lang/Class;

    .line 309
    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    .line 310
    invoke-virtual {v3, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    const/4 v4, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    .line 311
    invoke-virtual {v3, v4, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    const-string v3, "mHiddenApiWarningShown"

    .line 312
    invoke-virtual {v2, v3}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    .line 313
    invoke-virtual {v2, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 314
    invoke-virtual {v2, v0, v1}, Ljava/lang/reflect/Field;->setBoolean(Ljava/lang/Object;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 316
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-void
.end method

.method private static createFile(Ljava/io/File;Z)V
    .locals 0

    if-eqz p1, :cond_0

    .line 291
    :try_start_0
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_0

    .line 292
    invoke-virtual {p0}, Ljava/io/File;->createNewFile()Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 295
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private static handleWebviewDir(Landroid/content/Context;)V
    .locals 8

    .line 230
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ge v0, v1, :cond_0

    return-void

    .line 234
    :cond_0
    :try_start_0
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    .line 236
    invoke-virtual {p0}, Landroid/content/Context;->getDataDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    const-string v2, "/app_webview"

    const-string v3, "/app_hws_webview"

    const-string v4, "/webview_data.lock"

    .line 240
    invoke-static {}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->getProcessName()Ljava/lang/String;

    move-result-object v5

    .line 241
    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6, v5}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v7, "_"

    if-nez v6, :cond_2

    .line 242
    :try_start_1
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v5

    .line 243
    :cond_1
    invoke-static {v5}, Landroid/webkit/WebView;->setDataDirectorySuffix(Ljava/lang/String;)V

    .line 244
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 245
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 246
    invoke-static {}, Lcom/ymnsdk/replugin/util/RomUtil;->isEmui()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 247
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 251
    :cond_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 252
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v0, v5}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 253
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 254
    invoke-static {}, Lcom/ymnsdk/replugin/util/RomUtil;->isEmui()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 255
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 256
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    .line 259
    :cond_3
    :goto_0
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_4
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 260
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 261
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 262
    invoke-static {v1}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->tryLockOrRecreateFile(Ljava/io/File;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 267
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_1
    return-void
.end method

.method private static tryLockOrRecreateFile(Ljava/io/File;)V
    .locals 2

    .line 274
    :try_start_0
    new-instance v0, Ljava/io/RandomAccessFile;

    const-string v1, "rw"

    invoke-direct {v0, p0, v1}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object v0

    invoke-virtual {v0}, Ljava/nio/channels/FileChannel;->tryLock()Ljava/nio/channels/FileLock;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 276
    invoke-virtual {v0}, Ljava/nio/channels/FileLock;->close()V

    goto :goto_0

    .line 278
    :cond_0
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    move-result v0

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->createFile(Ljava/io/File;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 281
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v0, 0x0

    .line 283
    invoke-virtual {p0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 284
    invoke-virtual {p0}, Ljava/io/File;->delete()Z

    move-result v0

    .line 286
    :cond_1
    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->createFile(Ljava/io/File;Z)V

    :goto_0
    return-void
.end method


# virtual methods
.method protected attachBaseContext(Landroid/content/Context;)V
    .locals 2

    .line 97
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/RePluginApplication;->attachBaseContext(Landroid/content/Context;)V

    .line 98
    invoke-static {p0}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->handleWebviewDir(Landroid/content/Context;)V

    .line 99
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1c

    if-ne v0, v1, :cond_0

    .line 100
    invoke-direct {p0}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->closeAndroidPDialog()V

    :cond_0
    const/4 v0, 0x0

    .line 102
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/RePlugin;->enableDebugger(Landroid/content/Context;Z)Z

    return-void
.end method

.method protected createCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;
    .locals 2

    .line 137
    new-instance v0, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;

    const/4 v1, 0x0

    invoke-direct {v0, p0, p0, v1}, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;-><init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;Lcom/ymnsdk/replugin/YmnRepluginApplication$1;)V

    return-object v0
.end method

.method protected createConfig()Lcom/qihoo360/replugin/RePluginConfig;
    .locals 3

    .line 114
    new-instance v0, Lcom/qihoo360/replugin/RePluginConfig;

    invoke-direct {v0}, Lcom/qihoo360/replugin/RePluginConfig;-><init>()V

    const/4 v1, 0x1

    .line 117
    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/RePluginConfig;->setUseHostClassIfNotFound(Z)Lcom/qihoo360/replugin/RePluginConfig;

    const/4 v1, 0x0

    .line 120
    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/RePluginConfig;->setVerifySign(Z)Lcom/qihoo360/replugin/RePluginConfig;

    .line 123
    new-instance v2, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostEventCallbacks;

    invoke-direct {v2, p0, p0}, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostEventCallbacks;-><init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;)V

    invoke-virtual {v0, v2}, Lcom/qihoo360/replugin/RePluginConfig;->setEventCallbacks(Lcom/qihoo360/replugin/RePluginEventCallbacks;)Lcom/qihoo360/replugin/RePluginConfig;

    .line 131
    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/RePluginConfig;->setMoveFileWhenInstalling(Z)Lcom/qihoo360/replugin/RePluginConfig;

    return-object v0
.end method

.method public getBaseContext()Landroid/content/Context;
    .locals 1

    .line 61
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->getBaseContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    .line 87
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    return-object v0
.end method

.method public getPackageName()Ljava/lang/String;
    .locals 1

    .line 81
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->getPackageName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getResources()Landroid/content/res/Resources;
    .locals 1

    .line 92
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    return-object v0
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 66
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/RePluginApplication;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public onCreate()V
    .locals 2

    .line 55
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->onCreate()V

    .line 56
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    move-result-object v0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/YmnRepluginApplication;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->initLogFilePatch(Landroid/content/Context;)V

    return-void
.end method

.method public onLowMemory()V
    .locals 0

    .line 226
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->onLowMemory()V

    return-void
.end method

.method public onTerminate()V
    .locals 0

    .line 71
    invoke-super {p0}, Lcom/qihoo360/replugin/RePluginApplication;->onTerminate()V

    return-void
.end method

.method public onTrimMemory(I)V
    .locals 0

    .line 76
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/RePluginApplication;->onTrimMemory(I)V

    return-void
.end method
