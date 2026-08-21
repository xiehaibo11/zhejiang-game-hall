.class Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$3;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->closeGameRoom()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V
    .locals 0

    .line 119
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$3;->this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 2

    .line 122
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "callBackFromH5\uff1a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 123
    invoke-static {}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getCallback()Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;->onClose()V

    .line 125
    iget-object p1, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$3;->this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    invoke-static {p1}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->access$000(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void
.end method
