.class public Lcom/bianfeng/ymnsdk/YmnApplication;
.super Landroid/app/Application;
.source "YmnApplication.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Landroid/app/Application;-><init>()V

    return-void
.end method


# virtual methods
.method protected attachBaseContext(Landroid/content/Context;)V
    .locals 0
    .param p1, "base"    # Landroid/content/Context;

    .line 22
    invoke-super {p0, p1}, Landroid/app/Application;->attachBaseContext(Landroid/content/Context;)V

    .line 23
    invoke-static {p1}, Landroid/support/multidex/MultiDex;->install(Landroid/content/Context;)V

    .line 24
    return-void
.end method

.method public onCreate()V
    .locals 8

    .line 28
    invoke-super {p0}, Landroid/app/Application;->onCreate()V

    .line 29
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "YmnApplication--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnsdk"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 35
    new-instance v0, Lnet/grandcentrix/tray/AppPreferences;

    invoke-direct {v0, p0}, Lnet/grandcentrix/tray/AppPreferences;-><init>(Landroid/content/Context;)V

    .line 36
    .local v0, "appPreferences":Lnet/grandcentrix/tray/AppPreferences;
    const-string v1, "ymnInit"

    const-string v2, "false"

    invoke-virtual {v0, v1, v2}, Lnet/grandcentrix/tray/AppPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 37
    .local v3, "inInit":Ljava/lang/String;
    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 39
    const-string v2, "YmnApplication"

    const-string v4, "onCreate"

    invoke-static {v2, v4}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 40
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->innerInit(Landroid/content/Context;)V

    .line 41
    const-string v2, "true"

    invoke-virtual {v0, v1, v2}, Lnet/grandcentrix/tray/AppPreferences;->put(Ljava/lang/String;Ljava/lang/String;)Z

    .line 44
    :cond_0
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/YmnApplication;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".R"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "init"

    const/4 v4, 0x1

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    invoke-virtual {v1, v2, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 45
    .local v1, "localMethod":Ljava/lang/reflect/Method;
    invoke-virtual {v1, v4}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 46
    const/4 v2, 0x0

    new-array v4, v4, [Ljava/lang/Object;

    aput-object p0, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 47
    return-void

    .line 48
    .end local v1    # "localMethod":Ljava/lang/reflect/Method;
    :catch_0
    move-exception v1

    .line 49
    .local v1, "localException":Ljava/lang/Exception;
    sget-object v2, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string v4, "PlatformApplication can\'t find init method on R class"

    invoke-virtual {v2, v4}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 51
    .end local v1    # "localException":Ljava/lang/Exception;
    return-void
.end method
