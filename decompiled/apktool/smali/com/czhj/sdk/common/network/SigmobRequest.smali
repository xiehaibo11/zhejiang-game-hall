.class public abstract Lcom/czhj/sdk/common/network/SigmobRequest;
.super Lcom/czhj/volley/Request;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Lcom/czhj/volley/Request<",
        "TT;>;"
    }
.end annotation


# static fields
.field protected static final AESKEY:Ljava/lang/String; = "KGpfzbYsn4T9Jyuq"


# instance fields
.field private final a:Ljava/lang/String;


# direct methods
.method protected constructor <init>(Ljava/lang/String;ILcom/czhj/volley/Response$ErrorListener;)V
    .locals 1

    invoke-direct {p0, p2, p1, p3}, Lcom/czhj/volley/Request;-><init>(ILjava/lang/String;Lcom/czhj/volley/Response$ErrorListener;)V

    iput-object p1, p0, Lcom/czhj/sdk/common/network/SigmobRequest;->a:Ljava/lang/String;

    new-instance p1, Lcom/czhj/volley/DefaultRetryPolicy;

    const/16 p2, 0x2710

    const/4 p3, 0x2

    const/4 v0, 0x0

    invoke-direct {p1, p2, p3, v0}, Lcom/czhj/volley/DefaultRetryPolicy;-><init>(IIF)V

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequest;->setRetryPolicy(Lcom/czhj/volley/RetryPolicy;)Lcom/czhj/volley/Request;

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/czhj/sdk/common/network/SigmobRequest;->setShouldCache(Z)Lcom/czhj/volley/Request;

    return-void
.end method


# virtual methods
.method public getBody()[B
    .locals 2

    invoke-virtual {p0}, Lcom/czhj/sdk/common/network/SigmobRequest;->getParams()Ljava/util/Map;

    move-result-object v0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/network/SigmobRequest;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/network/SigmobRequestUtil;->generateBodyFromParams(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    return-object v0
.end method

.method public getBodyContentType()Ljava/lang/String;
    .locals 1

    invoke-super {p0}, Lcom/czhj/volley/Request;->getBodyContentType()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getHeaders()Ljava/util/Map;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/TreeMap;

    invoke-direct {v0}, Ljava/util/TreeMap;-><init>()V

    iget-object v1, p0, Lcom/czhj/sdk/common/network/SigmobRequest;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/czhj/sdk/common/network/SigmobRequestUtil;->a(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    if-eqz v3, :cond_2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getDeviceLocale()Ljava/util/Locale;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3}, Ljava/util/Locale;->getLanguage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    :cond_1
    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v3

    invoke-virtual {v3}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v2

    invoke-virtual {v2}, Lcom/czhj/sdk/common/ClientMetadata;->getAndroidId()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    :cond_2
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    sget-object v3, Lcom/czhj/sdk/common/network/ResponseHeader;->ACCEPT_LANGUAGE:Lcom/czhj/sdk/common/network/ResponseHeader;

    invoke-virtual {v3}, Lcom/czhj/sdk/common/network/ResponseHeader;->getKey()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    const-string v1, "token"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    return-object v0
.end method

.method public getOriginalUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/network/SigmobRequest;->a:Ljava/lang/String;

    return-object v0
.end method

.method protected parseNetworkError(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/VolleyError;
    .locals 0

    invoke-super {p0, p1}, Lcom/czhj/volley/Request;->parseNetworkError(Lcom/czhj/volley/VolleyError;)Lcom/czhj/volley/VolleyError;

    move-result-object p1

    return-object p1
.end method

.method protected parseNetworkResponse(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Response;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/czhj/volley/NetworkResponse;",
            ")",
            "Lcom/czhj/volley/Response<",
            "TT;>;"
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/volley/toolbox/HttpHeaderParser;->parseCacheHeaders(Lcom/czhj/volley/NetworkResponse;)Lcom/czhj/volley/Cache$Entry;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/czhj/volley/Response;->success(Ljava/lang/Object;Lcom/czhj/volley/Cache$Entry;)Lcom/czhj/volley/Response;

    move-result-object p1

    return-object p1
.end method
