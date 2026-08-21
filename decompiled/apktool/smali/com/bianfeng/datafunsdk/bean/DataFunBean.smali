.class public Lcom/bianfeng/datafunsdk/bean/DataFunBean;
.super Ljava/lang/Object;
.source "DataFunBean.java"


# annotations
.annotation runtime Lcom/bianfeng/datafunsdk/c;
    value = "db_datafunbean"
.end annotation


# instance fields
.field public final NULL:Ljava/lang/String;

.field public data:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_data"
    .end annotation
.end field

.field public dataTime:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_dataTime"
    .end annotation
.end field

.field public httpMethod:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_method"
    .end annotation
.end field

.field public id:I

.field public requestHeaders:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_request_headers"
    .end annotation
.end field

.field public responseData:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_response_data"
    .end annotation
.end field

.field public responseHeaders:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_response_headers"
    .end annotation
.end field

.field public url:Ljava/lang/String;
    .annotation runtime Lcom/bianfeng/datafunsdk/b;
        value = "db_datafun_url"
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    const-string v0, "NULL"

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->NULL:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 60
    const-string v0, "NULL"

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->NULL:Ljava/lang/String;

    .line 118
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->data:Ljava/lang/String;

    .line 119
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    .line 120
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "post"

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    :goto_0
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    .line 121
    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->requestHeaders:Ljava/lang/String;

    .line 122
    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseHeaders:Ljava/lang/String;

    .line 123
    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseData:Ljava/lang/String;

    .line 124
    invoke-static {}, Lcom/bianfeng/datafunsdk/z;->a()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->dataTime:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 4
    const-string v0, "NULL"

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->NULL:Ljava/lang/String;

    .line 52
    iput-object p2, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->data:Ljava/lang/String;

    .line 53
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    .line 54
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p3, "post"

    :cond_0
    iput-object p3, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    .line 55
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    move-object p4, v0

    :cond_1
    iput-object p4, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->requestHeaders:Ljava/lang/String;

    .line 56
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    move-object p5, v0

    :cond_2
    iput-object p5, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseHeaders:Ljava/lang/String;

    .line 57
    invoke-static {p6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_3

    move-object p6, v0

    :cond_3
    iput-object p6, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseData:Ljava/lang/String;

    .line 58
    invoke-static {}, Lcom/bianfeng/datafunsdk/z;->a()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->dataTime:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getData()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->data:Ljava/lang/String;

    return-object v0
.end method

.method public getDataTime()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->dataTime:Ljava/lang/String;

    return-object v0
.end method

.method public getHttpMethod()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    return-object v0
.end method

.method public getId()I
    .locals 1

    .line 1
    iget v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->id:I

    return v0
.end method

.method public getRequestHeaders()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->requestHeaders:Ljava/lang/String;

    return-object v0
.end method

.method public getResponseData()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseData:Ljava/lang/String;

    return-object v0
.end method

.method public getResponseHeaders()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseHeaders:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2
    const-string v0, ""

    iput-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    .line 4
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    return-object v0
.end method

.method public setData(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->data:Ljava/lang/String;

    return-void
.end method

.method public setDataTime(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->dataTime:Ljava/lang/String;

    return-void
.end method

.method public setHttpMethod(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->httpMethod:Ljava/lang/String;

    return-void
.end method

.method public setHttpRequestHeaders(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->requestHeaders:Ljava/lang/String;

    return-void
.end method

.method public setHttpResponseHeaders(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseHeaders:Ljava/lang/String;

    return-void
.end method

.method public setId(I)V
    .locals 0

    .line 1
    iput p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->id:I

    return-void
.end method

.method public setResponseData(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->responseData:Ljava/lang/String;

    return-void
.end method

.method public setUrl(Ljava/lang/String;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/bean/DataFunBean;->url:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 1

    .line 1
    invoke-static {p0}, Lcom/bianfeng/datafunsdk/w;->a(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
