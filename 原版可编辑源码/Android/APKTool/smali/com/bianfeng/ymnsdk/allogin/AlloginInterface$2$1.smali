.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->onPreLoginSuccess(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

.field final synthetic val$autoInfo:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;Ljava/lang/String;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->val$autoInfo:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 112
    :try_start_0
    new-instance v0, Lcom/alipay/sdk/app/AuthTask;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/alipay/sdk/app/AuthTask;-><init>(Landroid/app/Activity;)V

    .line 113
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->val$autoInfo:Ljava/lang/String;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Lcom/alipay/sdk/app/AuthTask;->authV2(Ljava/lang/String;Z)Ljava/util/Map;

    move-result-object v0

    .line 114
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "data is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    const-string v1, "resultStatus"

    .line 115
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "result"

    .line 116
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 117
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->StirngToMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0

    const-string v2, "result_code"

    .line 118
    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 119
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    new-instance v4, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;

    invoke-direct {v4, p0, v1, v2, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$1;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 134
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 135
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    new-instance v2, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;

    invoke-direct {v2, p0, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1$2;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$2$1;Ljava/lang/Exception;)V

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    :goto_0
    return-void
.end method
