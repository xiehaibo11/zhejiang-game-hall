.class Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper$1;
.super Landroid/os/Handler;
.source "VivoDeviceIDHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->f()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;Landroid/os/Looper;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;

    invoke-direct {p0, p2}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 5

    .line 104
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 105
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, "Wooo"

    const/16 v2, 0xb

    if-ne v0, v2, :cond_0

    .line 106
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    const-string v2, "type"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 107
    invoke-virtual {p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object p1

    const-string v2, "appid"

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 108
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper$1;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;

    invoke-static {v2, v0, p1}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/helpers/VivoDeviceIDHelper;ILjava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 109
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "VivoDeviceIDHelper getOAID id -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " , tag -> "

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " ,name -> "

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string p1, "VivoDeviceIDHelper getOAID is valied."

    .line 112
    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method
