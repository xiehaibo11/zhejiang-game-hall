.class public Lcom/qihoo360/loader2/mgr/PluginServiceClient;
.super Ljava/lang/Object;
.source "PluginServiceClient.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    .locals 0

    .line 52
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result p0

    return p0
.end method

.method public static startService(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;
    .locals 0

    .line 38
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->startService(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0
.end method

.method public static stopSelf(Landroid/app/Service;)V
    .locals 0

    .line 66
    invoke-static {p0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->stopSelf(Landroid/app/Service;)V

    return-void
.end method

.method public static stopService(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 0

    .line 45
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->stopService(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method public static unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;)Z
    .locals 0

    .line 59
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;)Z

    move-result p0

    return p0
.end method
