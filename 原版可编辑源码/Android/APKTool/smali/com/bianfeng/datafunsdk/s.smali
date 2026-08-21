.class public final Lcom/bianfeng/datafunsdk/s;
.super Ljava/lang/Object;
.source "PostDataClient.java"


# instance fields
.field public a:Ljava/lang/String;

.field public b:Lcom/bianfeng/datafunsdk/p;

.field public c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

.field public d:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

.field public e:Lcom/bianfeng/datafunsdk/net/ResponseData;

.field public f:Lcom/bianfeng/datafunsdk/q;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/bean/DataFunBean;)V
    .locals 4

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getUrl()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/s;->a:Ljava/lang/String;

    .line 3
    new-instance v0, Lcom/bianfeng/datafunsdk/p;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getHttpMethod()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/bianfeng/datafunsdk/p;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/s;->b:Lcom/bianfeng/datafunsdk/p;

    .line 4
    new-instance v0, Lcom/bianfeng/datafunsdk/q;

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/s;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getData()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    iget-object v3, p0, Lcom/bianfeng/datafunsdk/s;->b:Lcom/bianfeng/datafunsdk/p;

    invoke-direct {v0, v1, v2, v3}, Lcom/bianfeng/datafunsdk/q;-><init>(Ljava/lang/String;[BLcom/bianfeng/datafunsdk/p;)V

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/s;->f:Lcom/bianfeng/datafunsdk/q;

    .line 5
    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getRequestHeaders()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/datafunsdk/s;->a(Ljava/lang/String;)V

    .line 6
    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getResponseData()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/datafunsdk/s;->b(Ljava/lang/String;)V

    .line 7
    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->getResponseHeaders()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/datafunsdk/s;->c(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/s;->f:Lcom/bianfeng/datafunsdk/q;

    invoke-virtual {v0}, Lcom/bianfeng/datafunsdk/q;->a()I

    move-result v0

    return v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 4
    :cond_0
    const-string v0, "NULL"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 8
    :cond_1
    :try_start_0
    const-class v0, Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    invoke-static {p1, v0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/s;->c:Lcom/bianfeng/datafunsdk/net/RequestHeaders;

    .line 9
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/s;->f:Lcom/bianfeng/datafunsdk/q;

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/q;->a(Lcom/bianfeng/datafunsdk/net/RequestHeaders;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "requestHeader==="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 4
    :cond_0
    const-string v0, "NULL"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 8
    :cond_1
    :try_start_0
    const-class v0, Lcom/bianfeng/datafunsdk/net/ResponseData;

    invoke-static {p1, v0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/datafunsdk/net/ResponseData;

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/s;->e:Lcom/bianfeng/datafunsdk/net/ResponseData;

    .line 9
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/s;->f:Lcom/bianfeng/datafunsdk/q;

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/q;->a(Lcom/bianfeng/datafunsdk/net/ResponseData;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "responseData==="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 2

    .line 1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 4
    :cond_0
    const-string v0, "NULL"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 8
    :cond_1
    :try_start_0
    const-class v0, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    invoke-static {p1, v0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/s;->d:Lcom/bianfeng/datafunsdk/net/ResponseHeaders;

    .line 9
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/s;->f:Lcom/bianfeng/datafunsdk/q;

    invoke-virtual {v0, p1}, Lcom/bianfeng/datafunsdk/q;->a(Lcom/bianfeng/datafunsdk/net/ResponseHeaders;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 11
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "responseHeader==="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
