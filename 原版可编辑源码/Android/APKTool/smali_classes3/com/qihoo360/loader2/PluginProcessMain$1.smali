.class final Lcom/qihoo360/loader2/PluginProcessMain$1;
.super Ljava/lang/Object;
.source "PluginProcessMain.java"

# interfaces
.implements Landroid/os/IBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/PluginProcessMain;->connectToHostSvc()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 245
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public binderDied()V
    .locals 2

    const-string v0, "ws001"

    const-string v1, "p.p d, p.h s n"

    .line 249
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 252
    invoke-static {}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    const-string v0, "ws000"

    const-string v1, "p p e, pp q n"

    .line 255
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    .line 257
    invoke-static {v0}, Ljava/lang/System;->exit(I)V

    :cond_0
    const/4 v0, 0x0

    .line 259
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->access$102(Lcom/qihoo360/loader2/IPluginHost;)Lcom/qihoo360/loader2/IPluginHost;

    .line 262
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->disconnect()V

    return-void
.end method
