.class Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$1;
.super Landroid/os/Handler;
.source "PluginServiceServer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;


# direct methods
.method constructor <init>(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;Landroid/os/Looper;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$1;->this$0:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 101
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 103
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 105
    :cond_0
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "intent"

    .line 106
    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object v0

    check-cast v0, Landroid/content/Intent;

    .line 108
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_1

    .line 111
    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1, v1}, Landroid/app/Service;->onStartCommand(Landroid/content/Intent;II)I

    goto :goto_0

    .line 113
    :cond_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "ws001"

    const-string v0, "pss.onStartCommand fail."

    .line 114
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    :goto_0
    return-void
.end method
