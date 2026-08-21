.class Lcom/bianfeng/privategetui/YmnGetuiHandler;
.super Landroid/os/Handler;
.source "YmnGetuiHandler.java"


# static fields
.field private static anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

.field private static handler:Lcom/bianfeng/privategetui/YmnGetuiHandler;

.field private static volatile isFirst:Z


# direct methods
.method public constructor <init>(Landroid/os/Looper;)V
    .locals 0

    .line 15
    invoke-direct {p0, p1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    return-void
.end method

.method public static init(Lcom/bianfeng/privategetui/PrivateGetuiInterface;)V
    .locals 1

    .line 18
    sget-boolean v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->isFirst:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 19
    sput-boolean v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->isFirst:Z

    .line 20
    sput-object p0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    .line 21
    new-instance p0, Lcom/bianfeng/privategetui/YmnGetuiHandler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/bianfeng/privategetui/YmnGetuiHandler;-><init>(Landroid/os/Looper;)V

    sput-object p0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->handler:Lcom/bianfeng/privategetui/YmnGetuiHandler;

    :cond_0
    return-void
.end method

.method public static setMsg(Landroid/os/Message;)V
    .locals 1

    .line 26
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->handler:Lcom/bianfeng/privategetui/YmnGetuiHandler;

    if-eqz v0, :cond_0

    .line 27
    invoke-virtual {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiHandler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 4

    .line 33
    invoke-super {p0, p1}, Landroid/os/Handler;->handleMessage(Landroid/os/Message;)V

    .line 34
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const-string v1, "ymnsdk"

    if-nez v0, :cond_0

    const-string p1, "getui handler not init "

    .line 35
    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 38
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getui handler msg "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 39
    iget v0, p1, Landroid/os/Message;->what:I

    const-string v1, ""

    packed-switch v0, :pswitch_data_0

    packed-switch v0, :pswitch_data_1

    goto/16 :goto_0

    .line 65
    :pswitch_0
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5eb

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto/16 :goto_0

    .line 62
    :pswitch_1
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5ea

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto/16 :goto_0

    .line 47
    :pswitch_2
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e9

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto/16 :goto_0

    .line 44
    :pswitch_3
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e8

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto/16 :goto_0

    .line 41
    :pswitch_4
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e7

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 59
    :pswitch_5
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 56
    :pswitch_6
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5e0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 53
    :pswitch_7
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5df

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 50
    :pswitch_8
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiHandler;->anInterface:Lcom/bianfeng/privategetui/PrivateGetuiInterface;

    const/16 v2, 0x5de

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v2, p1}, Lcom/bianfeng/privategetui/PrivateGetuiInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void

    :pswitch_data_0
    .packed-switch 0x5de
        :pswitch_8
        :pswitch_7
        :pswitch_6
        :pswitch_5
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x5e7
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
