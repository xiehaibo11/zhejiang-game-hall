.class Lcom/kwad/sdk/api/loader/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/api/loader/f$a;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z


# instance fields
.field private final aio:Lcom/kwad/sdk/api/loader/v;

.field private aip:I

.field private aiq:Ljava/lang/String;

.field private final mUrl:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method constructor <init>(Lcom/kwad/sdk/api/loader/v;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {p1}, Lcom/kwad/sdk/api/loader/v;->yz()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/f;->mUrl:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/f;->aiq:Ljava/lang/String;

    return-void
.end method

.method private static a(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 5

    const/16 v0, 0x400

    new-array v0, v0, [B

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v2}, Ljava/io/ByteArrayOutputStream;-><init>()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    :try_start_1
    invoke-virtual {p0, v0}, Ljava/io/InputStream;->read([B)I

    move-result v3

    const/4 v4, -0x1

    if-eq v3, v4, :cond_0

    const/4 v4, 0x0

    invoke-virtual {v2, v0, v4, v3}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    :cond_0
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p0, :cond_1

    :try_start_2
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_1
    :goto_1
    :try_start_3
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_2
    return-object v0

    :catch_2
    move-exception v0

    goto :goto_3

    :catchall_0
    move-exception v0

    goto :goto_6

    :catch_3
    move-exception v0

    move-object v2, v1

    :goto_3
    :try_start_4
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz p0, :cond_2

    :try_start_5
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_4

    :catch_4
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_2
    :goto_4
    if-eqz v2, :cond_3

    :try_start_6
    invoke-virtual {v2}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_5

    goto :goto_5

    :catch_5
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_3
    :goto_5
    return-object v1

    :catchall_1
    move-exception v0

    move-object v1, v2

    :goto_6
    if-eqz p0, :cond_4

    :try_start_7
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_6

    goto :goto_7

    :catch_6
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_4
    :goto_7
    if-eqz v1, :cond_5

    :try_start_8
    invoke-virtual {v1}, Ljava/io/ByteArrayOutputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_7

    goto :goto_8

    :catch_7
    move-exception p0

    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_5
    :goto_8
    throw v0
.end method

.method private static a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    if-eqz p0, :cond_0

    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static bW(Ljava/lang/String;)Ljava/net/HttpURLConnection;
    .locals 2

    new-instance v0, Ljava/net/URL;

    invoke-direct {v0, p0}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p0

    check-cast p0, Ljava/net/HttpURLConnection;

    invoke-static {p0}, Lcom/kwad/sdk/api/core/TLSConnectionUtils;->wrapHttpURLConnection(Ljava/net/URLConnection;)V

    const/16 v0, 0x2710

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    const/16 v0, 0x7530

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const-string v1, "POST"

    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    return-object p0
.end method

.method private d(Ljava/util/Map;)Ljava/lang/String;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v0}, Lcom/kwad/sdk/api/loader/v;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/api/loader/g;->ay(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v0}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getSDKVersion()Ljava/lang/String;

    move-result-object v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v1}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v1

    invoke-interface {v1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getSDKVersionCode()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v2}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v2

    invoke-interface {v2}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getAppInfo()Lorg/json/JSONObject;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v3}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v3

    invoke-interface {v3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getDeviceInfo()Lorg/json/JSONObject;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v4}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v4

    invoke-interface {v4}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getNetworkInfo()Lorg/json/JSONObject;

    move-result-object v4

    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "3.3.42"

    const-string v7, "sdkApiVersion"

    invoke-static {v5, v7, v6}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    const v7, 0x2e4c58

    const-string v8, "sdkApiVersionCode"

    invoke-static {v5, v8, v7}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const-string v7, "sdkVersion"

    invoke-static {v5, v7, v0}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "SDKVersionCode"

    invoke-static {v5, v0, v1}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const/4 v0, 0x1

    const-string v1, "sdkType"

    invoke-static {v5, v1, v0}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    const-string v0, "appInfo"

    invoke-static {v5, v0, v2}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    const-string v0, "deviceInfo"

    invoke-static {v5, v0, v3}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    const-string v0, "networkInfo"

    invoke-static {v5, v0, v4}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/sdk/api/loader/w;->wO()Ljava/lang/String;

    move-result-object v0

    const-string v1, "sdkAbi"

    invoke-static {v5, v1, v0}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v1}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v1

    invoke-interface {v1, p1}, Lcom/kwad/sdk/api/core/IKsAdSDK;->addHp(Ljava/util/Map;)V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "version"

    invoke-static {v1, v3, v6}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "appId"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v3, v2}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v2}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v2

    invoke-interface {v2, v0}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getRM(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "message"

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/api/loader/l;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v0}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/f;->mUrl:Ljava/lang/String;

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v2, p1, v3}, Lcom/kwad/sdk/api/core/IKsAdSDK;->sR(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private static yq()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "Accept-Language"

    const-string v2, "zh-CN"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Connection"

    const-string v2, "keep-alive"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Charset"

    const-string v2, "UTF-8"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "Content-Type"

    const-string v2, "application/json; charset=UTF-8"

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/api/core/RequestParamsUtils;->getUserAgent()Ljava/lang/String;

    move-result-object v1

    const-string v2, "User-Agent"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/api/loader/f$a;)V
    .locals 6

    const-string v0, "data"

    const/4 v1, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/api/loader/f;->yq()Ljava/util/Map;

    move-result-object v2

    invoke-direct {p0, v2}, Lcom/kwad/sdk/api/loader/f;->d(Ljava/util/Map;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/sdk/api/loader/f;->aiq:Ljava/lang/String;

    invoke-static {v4}, Lcom/kwad/sdk/api/loader/f;->bW(Ljava/lang/String;)Ljava/net/HttpURLConnection;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/kwad/sdk/api/loader/f;->a(Ljava/net/HttpURLConnection;Ljava/util/Map;)V

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->connect()V

    new-instance v2, Ljava/io/DataOutputStream;

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v4

    invoke-direct {v2, v4}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/io/DataOutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v2

    const/16 v3, 0xc8

    if-ne v2, v3, :cond_1

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/api/loader/f;->a(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/kwad/sdk/api/loader/a$b;

    invoke-direct {v3}, Lcom/kwad/sdk/api/loader/a$b;-><init>()V

    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_0

    const-string v5, "null"

    invoke-virtual {v5, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_0

    iget-object v5, p0, Lcom/kwad/sdk/api/loader/f;->aio:Lcom/kwad/sdk/api/loader/v;

    invoke-interface {v5}, Lcom/kwad/sdk/api/loader/v;->yA()Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object v5

    invoke-interface {v5, v2}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getRD(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_0
    invoke-virtual {v3, v4}, Lcom/kwad/sdk/api/loader/a$b;->parseJson(Lorg/json/JSONObject;)V

    invoke-interface {p1, v3}, Lcom/kwad/sdk/api/loader/f$a;->a(Lcom/kwad/sdk/api/loader/a$b;)V

    goto :goto_0

    :cond_1
    div-int/lit8 v0, v2, 0x64

    const/4 v3, 0x3

    if-ne v0, v3, :cond_3

    iget v0, p0, Lcom/kwad/sdk/api/loader/f;->aip:I

    const/16 v2, 0x15

    if-ge v0, v2, :cond_2

    const-string v0, "Location"

    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/f;->aiq:Ljava/lang/String;

    iget v0, p0, Lcom/kwad/sdk/api/loader/f;->aip:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/kwad/sdk/api/loader/f;->aip:I

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/api/loader/f;->a(Lcom/kwad/sdk/api/loader/f$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    :goto_0
    if-eqz v1, :cond_5

    :try_start_1
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    return-void

    :cond_3
    :try_start_2
    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "response code = "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    move-exception p1

    if-eqz v1, :cond_4

    :try_start_3
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    :catch_1
    :cond_4
    throw p1

    :catch_2
    if-eqz v1, :cond_5

    :try_start_4
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    :catch_3
    :cond_5
    return-void
.end method
