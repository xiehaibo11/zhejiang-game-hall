.class public Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "PullUpTaskListEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 1

    .line 11
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string v0, "push"

    .line 12
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setAct(Ljava/lang/String;)V

    const-string v0, "P1069"

    .line 13
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setPg(Ljava/lang/String;)V

    const-string v0, "BHF005"

    .line 14
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setBlk(Ljava/lang/String;)V

    const-string v0, "\u6740\u8fdb\u7a0b"

    .line 15
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setBl(Ljava/lang/String;)V

    const-string v0, "\u62c9\u8d77\u4efb\u52a1\u5217\u8868"

    .line 16
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setLabel(Ljava/lang/String;)V

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 18
    invoke-virtual {v0, p2}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 19
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/other/PullUpTaskListEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
