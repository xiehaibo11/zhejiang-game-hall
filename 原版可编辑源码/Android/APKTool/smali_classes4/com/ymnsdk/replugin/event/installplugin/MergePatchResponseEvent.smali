.class public Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;
.super Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;
.source "MergePatchResponseEvent.java"


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 16
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;-><init>(Landroid/app/Activity;)V

    const-string p1, "push"

    .line 17
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setAct(Ljava/lang/String;)V

    const-string p1, "P1069"

    .line 18
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setPg(Ljava/lang/String;)V

    const-string p1, "BHF002"

    .line 19
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setBlk(Ljava/lang/String;)V

    const-string p1, "\u70b9\u51fb\u63d2\u4ef6icon"

    .line 20
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setBl(Ljava/lang/String;)V

    const-string p1, "\u5408\u5e76patch"

    .line 21
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setLabel(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V
    .locals 1

    .line 25
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;)V

    .line 26
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setEid(Ljava/lang/String;)V

    .line 27
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setDur(Ljava/lang/String;)V

    .line 29
    new-instance v0, Lcom/ymnsdk/replugin/event/base/CustEvent;

    invoke-direct {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;-><init>(Landroid/app/Activity;)V

    .line 30
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_code(Ljava/lang/String;)V

    .line 31
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_msg(Ljava/lang/String;)V

    .line 32
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p6, p7}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_duration(Ljava/lang/String;)V

    .line 33
    invoke-virtual {v0, p3}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setPlugin_id(Ljava/lang/String;)V

    const-string p1, "0"

    .line 34
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->setRequest_server_type(Ljava/lang/String;)V

    .line 35
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;->setCust(Ljava/lang/String;)V

    return-void
.end method
