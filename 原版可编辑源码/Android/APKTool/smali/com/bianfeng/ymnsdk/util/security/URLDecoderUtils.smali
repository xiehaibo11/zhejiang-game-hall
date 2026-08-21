.class public Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;
.super Ljava/lang/Object;
.source "URLDecoderUtils.java"


# instance fields
.field private TAG:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 11
    const-class v0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->TAG:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public decode(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "str"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 16
    const-string v0, "%(?![0-9a-fA-F]{2})"

    const-string v1, "%25"

    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 18
    :try_start_0
    const-string v0, "UTF-8"

    invoke-static {p1, v0}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 19
    :catch_0
    move-exception v0

    .line 20
    .local v0, "e":Ljava/io/UnsupportedEncodingException;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "str"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 29
    :try_start_0
    const-string v0, "UTF-8"

    invoke-static {p1, v0}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 30
    :catch_0
    move-exception v0

    .line 31
    .local v0, "e":Ljava/io/UnsupportedEncodingException;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method
