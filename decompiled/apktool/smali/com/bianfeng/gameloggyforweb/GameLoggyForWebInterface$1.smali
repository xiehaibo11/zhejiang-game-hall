.class Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;
.super Ljava/lang/Object;
.source "GameLoggyForWebInterface.java"

# interfaces
.implements Lcom/bianfeng/splitscreenlib/YmnH5Callback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;)V
    .locals 0

    .line 101
    iput-object p1, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCloseGame()V
    .locals 3

    const-string v0, "onCloseGame"

    .line 134
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 135
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b5

    const-string v2, "\u9000\u51fa\u6e38\u620f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onCloseGameList()V
    .locals 3

    const-string v0, "onCloseGameList"

    .line 140
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 141
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b2

    const-string v2, "\u5173\u95ed\u5217\u8868"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onFullScreen()V
    .locals 3

    const-string v0, "onFullScreen"

    .line 158
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 159
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b9

    const-string v2, "\u5168\u5c4f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onGameListFail(Ljava/lang/String;)V
    .locals 2

    const-string v0, "onGameListFail"

    .line 116
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 117
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b1

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onGameListSuccess()V
    .locals 3

    const-string v0, "onGameListSuccess"

    .line 146
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 147
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b0

    const-string v2, "\u83b7\u53d6\u5217\u8868\u6210\u529f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onLoginFail(Ljava/lang/String;)V
    .locals 2

    .line 110
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onLoginFail"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 111
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b4

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onLoginSuccess()V
    .locals 3

    const-string v0, "onLoginSuccess"

    .line 104
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 105
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b3

    const-string v2, "\u767b\u5f55\u6210\u529f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onPayFail(Ljava/lang/String;)V
    .locals 2

    .line 128
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPayFail"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 129
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b7

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onPaySuccess()V
    .locals 3

    const-string v0, "onPaySuccess"

    .line 122
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 123
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b6

    const-string v2, "\u652f\u4ed8\u6210\u529f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onSplitScreen()V
    .locals 3

    const-string v0, "onSplitScreen"

    .line 152
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 153
    iget-object v0, p0, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface$1;->this$0:Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;

    const v1, 0xde2b8

    const-string v2, "\u5206\u5c4f"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/gameloggyforweb/GameLoggyForWebInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method
