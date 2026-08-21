.class Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;
.super Ljava/lang/Object;
.source "AlloginInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;->onPreLoginRequest(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

.field final synthetic val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;)V
    .locals 0

    .line 249
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->this$0:Lcom/bianfeng/ymnsdk/allogin/AlloginInterface;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onComplete(Ljava/lang/String;)V
    .locals 4

    const-string v0, "msg"

    .line 259
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "code"

    .line 260
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 261
    new-instance v2, Lorg/json/JSONObject;

    const-string v3, "data"

    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    if-nez p1, :cond_0

    .line 264
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;

    const-string v0, "authInfo"

    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;->onPreLoginSuccess(Ljava/lang/String;)V

    goto :goto_0

    .line 267
    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "data is \u83b7\u53d6\u5931\u8d25+"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 268
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;

    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, p1, v0}, Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;->onPreLoginError(ILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 272
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 273
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "data is "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 274
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;

    const/4 v0, -0x1

    const-string v1, "\u68c0\u9a8c\u5931\u8d25"

    invoke-interface {p1, v0, v1}, Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;->onPreLoginError(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 2

    const-string v0, "data is \u6821\u9a8c\u5931\u8d25"

    .line 252
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 253
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/allogin/AlloginInterface$4;->val$callback:Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\u6821\u9a8c\u5931\u8d25"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/ymnsdk/allogin/net/getPreLoginCallback;->onPreLoginError(ILjava/lang/String;)V

    return-void
.end method
