.class public Lcom/qihoo360/loader/utils/PatchClassLoaderUtils;
.super Ljava/lang/Object;
.source "PatchClassLoaderUtils.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "PatchClassLoaderUtils"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static patch(Landroid/app/Application;)Z
    .locals 8

    const-string v0, "mClassLoader"

    const/4 v1, 0x0

    .line 43
    :try_start_0
    invoke-virtual {p0}, Landroid/app/Application;->getBaseContext()Landroid/content/Context;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v3, "ws001"

    if-nez v2, :cond_0

    .line 46
    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "pclu.p: nf mb. ap cl="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    :cond_0
    const-string p0, "mPackageInfo"

    .line 55
    invoke-static {v2, p0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const-string v4, "pclu.p: nf mpi. mb cl="

    if-nez p0, :cond_1

    .line 58
    :try_start_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 66
    :cond_1
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const-string v6, "PatchClassLoaderUtils"

    if-eqz v5, :cond_2

    .line 67
    :try_start_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "patch: mBase cl="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v7, "; mPackageInfo cl="

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v6, v5}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 71
    :cond_2
    invoke-static {p0, v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/ClassLoader;

    if-nez v5, :cond_3

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, "; mpi cl="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 80
    :cond_3
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v2

    invoke-virtual {v5}, Ljava/lang/ClassLoader;->getParent()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {v2, v3, v5}, Lcom/qihoo360/replugin/RePluginCallbacks;->createClassLoader(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Lcom/qihoo360/replugin/RePluginClassLoader;

    move-result-object v2

    .line 83
    invoke-static {p0, v0, v2}, Lcom/qihoo360/replugin/utils/ReflectUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    .line 87
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p0

    invoke-virtual {p0, v2}, Ljava/lang/Thread;->setContextClassLoader(Ljava/lang/ClassLoader;)V

    .line 89
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    const-string p0, "patch: patch mClassLoader ok"

    .line 90
    invoke-static {v6, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :cond_4
    const/4 p0, 0x1

    return p0

    :catchall_0
    move-exception p0

    .line 93
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return v1
.end method
