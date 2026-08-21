.class Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;
.super Ljava/lang/Thread;
.source "HostHttpHelper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/bianfeng/ymnsdk/action/HttpListener;

.field final synthetic d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    .line 163
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    .line 166
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->b:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->access$000(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v0

    .line 167
    .local v0, "request":Ljava/net/HttpURLConnection;
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-static {v1, v0, v2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->access$100(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 168
    if-eqz v0, :cond_0

    .line 169
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 171
    :cond_0
    return-void

    .line 173
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->access$200(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;)I

    move-result v2

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper$a;->d:Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;->access$300(Lcom/bianfeng/ymnsdk/hostaction/HostHttpHelper;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onError(ILjava/lang/String;)V

    .line 174
    return-void
.end method
