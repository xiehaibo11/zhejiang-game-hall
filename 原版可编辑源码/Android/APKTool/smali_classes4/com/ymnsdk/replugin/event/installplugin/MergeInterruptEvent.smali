.class public Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "MergeInterruptEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 19
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 20
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 21
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF002"

    .line 22
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 23
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u5408\u5e76patch\u4e2d\u65ad"

    .line 24
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setLabel(Ljava/lang/String;)V

    .line 25
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 26
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 27
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergeInterruptEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
