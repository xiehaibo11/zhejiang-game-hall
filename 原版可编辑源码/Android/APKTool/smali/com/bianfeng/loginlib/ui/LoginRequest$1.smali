.class Lcom/bianfeng/loginlib/ui/LoginRequest$1;
.super Lcom/bianfeng/netlib/ActionObserver;
.source "LoginRequest.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/loginlib/ui/LoginRequest;->requestLogin()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/loginlib/ui/LoginRequest;

.field final synthetic val$callBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;


# direct methods
.method constructor <init>(Lcom/bianfeng/loginlib/ui/LoginRequest;Lcom/bianfeng/loginlib/YmnH5LoginCallBack;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/bianfeng/loginlib/ui/LoginRequest$1;->this$0:Lcom/bianfeng/loginlib/ui/LoginRequest;

    iput-object p2, p0, Lcom/bianfeng/loginlib/ui/LoginRequest$1;->val$callBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

    invoke-direct {p0}, Lcom/bianfeng/netlib/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/bianfeng/netlib/ActionSupport$ResponseResult;)V
    .locals 3

    .line 45
    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 46
    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->processedResultAsMap()Ljava/util/Map;

    move-result-object p1

    const-string v0, "address"

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 47
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->show(Ljava/lang/String;)V

    goto :goto_0

    .line 49
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/loginlib/ui/LoginRequest$1;->val$callBack:Lcom/bianfeng/loginlib/YmnH5LoginCallBack;

    if-eqz v0, :cond_1

    .line 50
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u767b\u5f55\u8bf7\u6c42\u7ed3\u679c\u51fa\u9519\uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/netlib/ActionSupport$ResponseResult;->messageFail()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/loginlib/YmnH5LoginCallBack;->onLoginFail(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
