.class public Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi;
.super Ljava/lang/Object;
.source "CheckApi.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkLogin(Landroid/content/Context;Ljava/lang/Object;Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V
    .locals 0

    .line 11
    invoke-static {p0, p1, p2}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi;->requestCheckLogin(Landroid/content/Context;Ljava/lang/Object;Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V

    return-void
.end method

.method protected static requestCheckLogin(Landroid/content/Context;Ljava/lang/Object;Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V
    .locals 3

    .line 14
    new-instance v0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;-><init>(Landroid/content/Context;)V

    const/4 p0, 0x0

    const/4 v1, 0x1

    :try_start_0
    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    .line 16
    invoke-virtual {v0, p0, v1}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->putReqData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 19
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 21
    :goto_0
    new-instance p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi$1;

    invoke-direct {p0, p2}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi$1;-><init>(Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->addObserver(Ljava/util/Observer;)V

    .line 29
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->actionStart()V

    return-void
.end method
