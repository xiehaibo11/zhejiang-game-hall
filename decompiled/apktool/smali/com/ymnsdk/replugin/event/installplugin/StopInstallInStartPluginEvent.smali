.class public Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "StopInstallInStartPluginEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 12
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 13
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF010"

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u6a21\u5f0f\u6d41\u7a0b"

    .line 15
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u542f\u52a8\u63d2\u4ef6\u540e\u505c\u6b62\u5b89\u88c5"

    .line 16
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/StopInstallInStartPluginEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method
