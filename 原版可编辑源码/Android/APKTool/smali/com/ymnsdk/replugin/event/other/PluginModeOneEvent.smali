.class public Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "PluginModeOneEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF009"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "openPlugin\u5206\u652f\u6d41\u8f6c"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u6a21\u5f0f1"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 18
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/PluginModeOneEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
