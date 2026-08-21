.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$3:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;)V
    .locals 0

    .line 191
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;->this$3:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public CheckFail()V
    .locals 0

    return-void
.end method

.method public CheckSuccess(Ljava/lang/String;)V
    .locals 3

    .line 195
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 196
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;->this$3:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;

    iget-object p1, p1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object p1, p1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object p1, p1, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    const v1, 0x1ca4851

    const-string v2, "data"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 200
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;->this$3:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    const v1, 0x1ca4852

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    .line 201
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
