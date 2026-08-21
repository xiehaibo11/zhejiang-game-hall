.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

.field final synthetic val$resultMap:Ljava/util/Map;

.field final synthetic val$resultStatus:Ljava/lang/String;

.field final synthetic val$result_code:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0

    .line 178
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$resultStatus:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$result_code:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$resultMap:Ljava/util/Map;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    .line 181
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$resultStatus:Ljava/lang/String;

    const-string v1, "9000"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const v1, 0x1ca4852

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$result_code:Ljava/lang/String;

    const-string v2, "200"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 183
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getAppId()I

    move-result v0

    .line 184
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigId()I

    move-result v2

    .line 185
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object v3, v3, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getPluginId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 186
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "session"

    .line 187
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$resultMap:Ljava/util/Map;

    const-string v7, "auth_code"

    invoke-interface {v6, v7}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 188
    new-instance v5, Lcom/bianfeng/ymnsdk/entity/LoginEntity;

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v5, v0, v2, v3, v4}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;-><init>(IIILjava/lang/String;)V

    .line 189
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "sid"

    .line 190
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/entity/LoginEntity;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 191
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->getActivity()Landroid/app/Activity;

    move-result-object v2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v3, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;

    invoke-direct {v3, p0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1$1;-><init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;)V

    invoke-static {v2, v0, v3}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckApi;->checkLogin(Landroid/content/Context;Ljava/lang/Object;Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckCallBack;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 211
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 212
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object v2, v2, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v1, v0}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 215
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->this$2:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1;->this$1:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$3$1$1;->val$result_code:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method
