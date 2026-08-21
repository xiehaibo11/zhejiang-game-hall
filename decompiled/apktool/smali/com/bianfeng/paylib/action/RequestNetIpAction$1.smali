.class Lcom/bianfeng/paylib/action/RequestNetIpAction$1;
.super Ljava/lang/Thread;
.source "RequestNetIpAction.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/action/RequestNetIpAction;->GetNetIp()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/action/RequestNetIpAction;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/action/RequestNetIpAction;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;->this$0:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 6

    const-string v0, "\u8bf7\u6c42\u5916\u7f51\u51fa\u73b0\u95ee\u9898"

    .line 37
    :try_start_0
    new-instance v1, Ljava/net/URL;

    const-string v2, "http://pv.sohu.com/cityjson?ie=utf-8"

    invoke-direct {v1, v2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 38
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    .line 39
    check-cast v1, Ljava/net/HttpURLConnection;

    .line 40
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_2

    .line 42
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    .line 43
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/InputStreamReader;

    const-string v4, "utf-8"

    invoke-direct {v3, v1, v4}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 44
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 45
    :goto_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 46
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 47
    :cond_0
    invoke-virtual {v1}, Ljava/io/InputStream;->close()V

    const-string v1, "{"

    .line 49
    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->indexOf(Ljava/lang/String;)I

    move-result v1

    const-string v2, "}"

    .line 50
    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->indexOf(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    .line 51
    invoke-virtual {v3, v1, v2}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/net/MalformedURLException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v1, :cond_1

    .line 54
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "cip"

    .line 55
    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/net/MalformedURLException; {:try_start_1 .. :try_end_1} :catch_2

    goto :goto_1

    :catch_0
    move-exception v1

    .line 57
    :try_start_2
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 60
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;->this$0:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    invoke-static {v1}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->access$000(Lcom/bianfeng/paylib/action/RequestNetIpAction;)Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    move-result-object v1

    invoke-interface {v1, v4}, Lcom/bianfeng/paylib/action/RequestNetIpCallBack;->onSuccess(Ljava/lang/String;)V

    .line 61
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ip=="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I
    :try_end_2
    .catch Ljava/net/MalformedURLException; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception v1

    .line 67
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 68
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;->this$0:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    invoke-static {v2}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->access$000(Lcom/bianfeng/paylib/action/RequestNetIpAction;)Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0}, Lcom/bianfeng/paylib/action/RequestNetIpCallBack;->onFail(Ljava/lang/String;)V

    goto :goto_2

    :catch_2
    move-exception v1

    .line 64
    invoke-virtual {v1}, Ljava/net/MalformedURLException;->printStackTrace()V

    .line 65
    iget-object v2, p0, Lcom/bianfeng/paylib/action/RequestNetIpAction$1;->this$0:Lcom/bianfeng/paylib/action/RequestNetIpAction;

    invoke-static {v2}, Lcom/bianfeng/paylib/action/RequestNetIpAction;->access$000(Lcom/bianfeng/paylib/action/RequestNetIpAction;)Lcom/bianfeng/paylib/action/RequestNetIpCallBack;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0}, Lcom/bianfeng/paylib/action/RequestNetIpCallBack;->onFail(Ljava/lang/String;)V

    :cond_2
    :goto_2
    return-void
.end method
