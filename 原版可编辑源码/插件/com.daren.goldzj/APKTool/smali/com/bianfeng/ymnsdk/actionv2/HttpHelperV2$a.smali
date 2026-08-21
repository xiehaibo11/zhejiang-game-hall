.class Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;
.super Ljava/lang/Thread;
.source "HttpHelperV2.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->request(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/bianfeng/ymnsdk/action/HttpListener;

.field final synthetic f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->a:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->e:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->a:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->setAud(Ljava/lang/String;)V

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v0

    sget-object v1, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity;->getHeader:Ljava/lang/String;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->a:Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/entity/PayTokenEntity$PayloadEntity;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->d:Ljava/lang/String;

    invoke-static {v1, v2, v3, v0, v4}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->access$000(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v0

    .line 4
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->e:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-static {v1, v0, v2}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->access$100(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;Ljava/net/HttpURLConnection;Lcom/bianfeng/ymnsdk/action/HttpListener;)Z

    move-result v1

    if-eqz v1, :cond_0

    if-eqz v0, :cond_1

    .line 6
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_0

    .line 9
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->e:Lcom/bianfeng/ymnsdk/action/HttpListener;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->access$200(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;)I

    move-result v1

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2$a;->f:Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;->access$300(Lcom/bianfeng/ymnsdk/actionv2/HttpHelperV2;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onError(ILjava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
