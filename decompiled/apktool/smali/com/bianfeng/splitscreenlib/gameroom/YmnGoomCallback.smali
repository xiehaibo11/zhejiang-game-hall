.class public Lcom/bianfeng/splitscreenlib/gameroom/YmnGoomCallback;
.super Ljava/lang/Object;
.source "YmnGoomCallback.java"

# interfaces
.implements Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClose()V
    .locals 1

    .line 28
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onCloseGameList()V

    return-void
.end method

.method public onFail(Ljava/lang/String;)V
    .locals 1

    .line 13
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onGameListFail(Ljava/lang/String;)V

    return-void
.end method

.method public onSelectGame(Ljava/lang/String;Ljava/lang/String;II)V
    .locals 1

    .line 18
    invoke-static {}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->getInstance()Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/bianfeng/loginlib/YmnH5GameLoginSdk;->startGame(Ljava/lang/String;Ljava/lang/String;II)V

    return-void
.end method

.method public onSuccess()V
    .locals 1

    .line 23
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onGameListSuccess()V

    return-void
.end method
