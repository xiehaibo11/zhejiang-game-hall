.class Lcom/bianfeng/netlib/HttpHelper$1;
.super Ljava/lang/Thread;
.source "HttpHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/netlib/HttpHelper;->request(Ljava/lang/String;Lcom/bianfeng/netlib/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/netlib/HttpHelper;

.field final synthetic val$listerner:Lcom/bianfeng/netlib/HttpListener;

.field final synthetic val$url:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/netlib/HttpHelper;Ljava/lang/String;Lcom/bianfeng/netlib/HttpListener;)V
    .locals 0

    .line 193
    iput-object p1, p0, Lcom/bianfeng/netlib/HttpHelper$1;->this$0:Lcom/bianfeng/netlib/HttpHelper;

    iput-object p2, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$url:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$listerner:Lcom/bianfeng/netlib/HttpListener;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 196
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "HttpHelper request \uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$url:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 197
    iget-object v0, p0, Lcom/bianfeng/netlib/HttpHelper$1;->this$0:Lcom/bianfeng/netlib/HttpHelper;

    iget-object v1, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/netlib/HttpHelper;->createHttpRequest(Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v0

    .line 198
    iget-object v1, p0, Lcom/bianfeng/netlib/HttpHelper$1;->this$0:Lcom/bianfeng/netlib/HttpHelper;

    iget-object v2, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$listerner:Lcom/bianfeng/netlib/HttpListener;

    invoke-static {v1, v0, v2}, Lcom/bianfeng/netlib/HttpHelper;->access$000(Lcom/bianfeng/netlib/HttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/netlib/HttpListener;)Z

    move-result v1

    if-eqz v1, :cond_1

    if-eqz v0, :cond_0

    .line 200
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_0
    return-void

    .line 204
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/netlib/HttpHelper$1;->val$listerner:Lcom/bianfeng/netlib/HttpListener;

    iget-object v1, p0, Lcom/bianfeng/netlib/HttpHelper$1;->this$0:Lcom/bianfeng/netlib/HttpHelper;

    invoke-static {v1}, Lcom/bianfeng/netlib/HttpHelper;->access$100(Lcom/bianfeng/netlib/HttpHelper;)I

    move-result v1

    iget-object v2, p0, Lcom/bianfeng/netlib/HttpHelper$1;->this$0:Lcom/bianfeng/netlib/HttpHelper;

    invoke-static {v2}, Lcom/bianfeng/netlib/HttpHelper;->access$200(Lcom/bianfeng/netlib/HttpHelper;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/netlib/HttpListener;->onError(ILjava/lang/String;)V

    return-void
.end method
