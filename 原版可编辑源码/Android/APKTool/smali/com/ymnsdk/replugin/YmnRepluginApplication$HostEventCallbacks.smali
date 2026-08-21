.class Lcom/ymnsdk/replugin/YmnRepluginApplication$HostEventCallbacks;
.super Lcom/qihoo360/replugin/RePluginEventCallbacks;
.source "YmnRepluginApplication.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/YmnRepluginApplication;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "HostEventCallbacks"
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "HostEventCallbacks"


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/YmnRepluginApplication;


# direct methods
.method public constructor <init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostEventCallbacks;->this$0:Lcom/ymnsdk/replugin/YmnRepluginApplication;

    .line 188
    invoke-direct {p0, p2}, Lcom/qihoo360/replugin/RePluginEventCallbacks;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V
    .locals 0

    .line 198
    invoke-super {p0, p1, p2}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    return-void
.end method

.method public onInstallPluginStepInfo(Ljava/lang/String;Z)V
    .locals 1

    .line 214
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->summitInstallPluginLog(Ljava/lang/String;Z)V

    return-void
.end method

.method public onInstallPluginSucceed(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 0

    .line 219
    invoke-super {p0, p1}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginSucceed(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 220
    invoke-static {}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->getInstance()Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;->deleteInstallPluginLog()V

    return-void
.end method

.method public onStartActivityCompleted(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    .line 204
    invoke-super {p0, p1, p2, p3}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onStartActivityCompleted(Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method
