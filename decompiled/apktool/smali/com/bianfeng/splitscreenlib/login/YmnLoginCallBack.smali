.class public Lcom/bianfeng/splitscreenlib/login/YmnLoginCallBack;
.super Ljava/lang/Object;
.source "YmnLoginCallBack.java"

# interfaces
.implements Lcom/bianfeng/loginlib/YmnH5LoginCallBack;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(Ljava/util/HashMap;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const-string v0, "type"

    .line 18
    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    const-string v0, "GameClose"

    .line 19
    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 20
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onCloseGame()V

    goto :goto_0

    :cond_0
    const-string v0, "SplitScreen"

    .line 21
    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 22
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onSplitScreen()V

    goto :goto_0

    :cond_1
    const-string v0, "FullScreen"

    .line 23
    invoke-virtual {p1, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 24
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onFullScreen()V

    :cond_2
    :goto_0
    return-void
.end method

.method public onLoginFail(Ljava/lang/String;)V
    .locals 1

    .line 14
    invoke-static {}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getInstance()Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/splitscreenlib/YmnH5GameSdk;->getCallback()Lcom/bianfeng/splitscreenlib/YmnH5Callback;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/bianfeng/splitscreenlib/YmnH5Callback;->onLoginFail(Ljava/lang/String;)V

    return-void
.end method
