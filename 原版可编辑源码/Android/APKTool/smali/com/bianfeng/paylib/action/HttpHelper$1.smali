.class Lcom/bianfeng/paylib/action/HttpHelper$1;
.super Ljava/lang/Thread;
.source "HttpHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/action/HttpHelper;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/paylib/action/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/action/HttpHelper;

.field final synthetic val$listerner:Lcom/bianfeng/paylib/action/HttpListener;

.field final synthetic val$postContent:Ljava/lang/String;

.field final synthetic val$requestAction:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/paylib/action/HttpListener;)V
    .locals 0

    .line 164
    iput-object p1, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    iput-object p2, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$requestAction:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$postContent:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$listerner:Lcom/bianfeng/paylib/action/HttpListener;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .line 167
    invoke-static {}, Lcom/bianfeng/paylib/utils/YmnURLManager;->getPayUrl()[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    aget-object v3, v0, v2

    .line 168
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$requestAction:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 169
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "getPayUrl----"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 170
    iget-object v4, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    iget-object v5, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$postContent:Ljava/lang/String;

    invoke-static {v4, v3, v5}, Lcom/bianfeng/paylib/action/HttpHelper;->access$000(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v3

    .line 171
    iget-object v4, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    iget-object v5, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$listerner:Lcom/bianfeng/paylib/action/HttpListener;

    invoke-static {v4, v3, v5}, Lcom/bianfeng/paylib/action/HttpHelper;->access$100(Lcom/bianfeng/paylib/action/HttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/paylib/action/HttpListener;)Z

    move-result v4

    if-eqz v4, :cond_1

    if-eqz v3, :cond_0

    .line 173
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_0
    return-void

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 178
    :cond_2
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u54cd\u5e94\u6570\u636e----"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-static {v2}, Lcom/bianfeng/paylib/action/HttpHelper;->access$200(Lcom/bianfeng/paylib/action/HttpHelper;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "---"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-static {v2}, Lcom/bianfeng/paylib/action/HttpHelper;->access$300(Lcom/bianfeng/paylib/action/HttpHelper;)I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 179
    iget-object v0, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->val$listerner:Lcom/bianfeng/paylib/action/HttpListener;

    iget-object v1, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-static {v1}, Lcom/bianfeng/paylib/action/HttpHelper;->access$300(Lcom/bianfeng/paylib/action/HttpHelper;)I

    move-result v1

    iget-object v2, p0, Lcom/bianfeng/paylib/action/HttpHelper$1;->this$0:Lcom/bianfeng/paylib/action/HttpHelper;

    invoke-static {v2}, Lcom/bianfeng/paylib/action/HttpHelper;->access$200(Lcom/bianfeng/paylib/action/HttpHelper;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/paylib/action/HttpListener;->onError(ILjava/lang/String;)V

    return-void
.end method
