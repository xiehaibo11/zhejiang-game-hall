.class public Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "KillApplicationEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 12
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF005"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u6740\u8fdb\u7a0b"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u7ed3\u675f\u8fdb\u7a0b"

    .line 17
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setLabel(Ljava/lang/String;)V

    .line 18
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
