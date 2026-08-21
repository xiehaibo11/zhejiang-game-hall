.class public Lcom/bykv/vk/openvk/api/plugin/rg/q;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/plugin/rg/q$rg;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/api/plugin/rg/q$1;)V
    .locals 0

    .line 27
    invoke-direct {p0}, Lcom/bykv/vk/openvk/api/plugin/rg/q;-><init>()V

    return-void
.end method

.method private df()Ljavax/net/ssl/X509TrustManager;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 157
    :try_start_0
    invoke-static {}, Ljavax/net/ssl/TrustManagerFactory;->getDefaultAlgorithm()Ljava/lang/String;

    move-result-object v0

    .line 156
    invoke-static {v0}, Ljavax/net/ssl/TrustManagerFactory;->getInstance(Ljava/lang/String;)Ljavax/net/ssl/TrustManagerFactory;

    move-result-object v0

    const/4 v1, 0x0

    .line 158
    check-cast v1, Ljava/security/KeyStore;

    invoke-virtual {v0, v1}, Ljavax/net/ssl/TrustManagerFactory;->init(Ljava/security/KeyStore;)V

    .line 159
    invoke-virtual {v0}, Ljavax/net/ssl/TrustManagerFactory;->getTrustManagers()[Ljavax/net/ssl/TrustManager;

    move-result-object v0

    .line 160
    array-length v1, v0

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    const/4 v1, 0x0

    aget-object v2, v0, v1

    instance-of v2, v2, Ljavax/net/ssl/X509TrustManager;

    if-eqz v2, :cond_0

    .line 163
    aget-object v0, v0, v1

    check-cast v0, Ljavax/net/ssl/X509TrustManager;

    return-object v0

    .line 161
    :cond_0
    new-instance v1, Ljava/lang/IllegalStateException;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unexpected default trust managers:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    move-exception v0

    .line 165
    new-instance v1, Ljava/io/IOException;

    const-string v2, "No System TLS"

    invoke-direct {v1, v2, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static rg()Lcom/bykv/vk/openvk/api/plugin/rg/q;
    .locals 1

    .line 43
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/rg/q$rg;->rg()Lcom/bykv/vk/openvk/api/plugin/rg/q;

    move-result-object v0

    return-object v0
.end method

.method private static rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    if-eqz p0, :cond_1

    const/4 v0, 0x0

    const-string v1, ";"

    .line 130
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->split(Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x1

    move v2, v1

    .line 131
    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_1

    .line 132
    aget-object v3, p0, v2

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    const-string v4, "="

    invoke-virtual {v3, v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;I)[Ljava/lang/String;

    move-result-object v3

    .line 133
    array-length v4, v3

    const/4 v5, 0x2

    if-ne v4, v5, :cond_0

    .line 134
    aget-object v4, v3, v0

    const-string v5, "charset"

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 135
    aget-object p0, v3, v1

    return-object p0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object p1
.end method

.method private rg(Ljavax/net/ssl/X509TrustManager;)Ljavax/net/ssl/SSLSocketFactory;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    :try_start_0
    const-string v0, "TLS"

    .line 146
    invoke-static {v0}, Ljavax/net/ssl/SSLContext;->getInstance(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;

    move-result-object v0

    const/4 v1, 0x1

    new-array v1, v1, [Ljavax/net/ssl/TrustManager;

    const/4 v2, 0x0

    aput-object p1, v1, v2

    const/4 p1, 0x0

    .line 147
    invoke-virtual {v0, p1, v1, p1}, Ljavax/net/ssl/SSLContext;->init([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V

    .line 148
    invoke-virtual {v0}, Ljavax/net/ssl/SSLContext;->getSocketFactory()Ljavax/net/ssl/SSLSocketFactory;

    move-result-object p1
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 150
    new-instance v0, Ljava/io/IOException;

    const-string v1, "No System TLS"

    invoke-direct {v0, v1, p1}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0
.end method

.method private static rg(Ljava/io/InputStream;I)[B
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const/4 v0, 0x1

    if-ge p1, v0, :cond_1

    move p1, v0

    .line 102
    :cond_1
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 105
    new-array p1, p1, [B

    .line 110
    :goto_0
    invoke-virtual {p0, p1}, Ljava/io/InputStream;->read([B)I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_2

    const/4 v2, 0x0

    .line 111
    invoke-virtual {v0, p1, v2, v1}, Ljava/io/ByteArrayOutputStream;->write([BII)V

    goto :goto_0

    .line 114
    :cond_2
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->close()V

    .line 115
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V

    .line 118
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public rg(ZLjava/lang/String;[B)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    .line 50
    :try_start_0
    new-instance v1, Ljava/net/URL;

    invoke-direct {v1, p2}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 52
    invoke-direct {p0}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->df()Ljavax/net/ssl/X509TrustManager;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->rg(Ljavax/net/ssl/X509TrustManager;)Ljavax/net/ssl/SSLSocketFactory;

    move-result-object p2

    .line 53
    invoke-static {p2}, Ljavax/net/ssl/HttpsURLConnection;->setDefaultSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    .line 54
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p2

    check-cast p2, Ljavax/net/ssl/HttpsURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v1, 0x1388

    .line 57
    :try_start_1
    invoke-virtual {p2, v1}, Ljavax/net/ssl/HttpsURLConnection;->setConnectTimeout(I)V

    .line 58
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/rg/rg;->rg:Lcom/bykv/vk/openvk/api/plugin/rg/rg;

    invoke-virtual {p2, v1}, Ljavax/net/ssl/HttpsURLConnection;->setHostnameVerifier(Ljavax/net/ssl/HostnameVerifier;)V

    if-eqz p1, :cond_0

    if-eqz p3, :cond_0

    .line 59
    array-length p1, p3

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 60
    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setDoOutput(Z)V

    .line 61
    array-length p1, p3

    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setFixedLengthStreamingMode(I)V

    .line 62
    new-instance p1, Ljava/io/BufferedOutputStream;

    invoke-virtual {p2}, Ljavax/net/ssl/HttpsURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    invoke-direct {p1, v1}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    .line 63
    invoke-virtual {p1, p3}, Ljava/io/OutputStream;->write([B)V

    .line 64
    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V

    .line 65
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V

    const-string p1, "POST"

    .line 66
    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p1, "GET"

    .line 68
    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 72
    :goto_0
    invoke-virtual {p2}, Ljavax/net/ssl/HttpsURLConnection;->getResponseCode()I

    move-result p1

    const/16 p3, 0xc8

    if-lt p1, p3, :cond_2

    const/16 p3, 0x12c

    if-ge p1, p3, :cond_2

    const-string p1, "Content-Type"

    .line 74
    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string p3, "utf-8"

    invoke-static {p1, p3}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->rg(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 75
    new-instance p3, Ljava/lang/String;

    invoke-virtual {p2}, Ljavax/net/ssl/HttpsURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    const/16 v2, 0x400

    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->rg(Ljava/io/InputStream;I)[B

    move-result-object v1

    invoke-direct {p3, v1, p1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz p2, :cond_1

    .line 83
    :try_start_2
    invoke-virtual {p2}, Ljavax/net/ssl/HttpsURLConnection;->disconnect()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_1
    return-object p3

    :cond_2
    if-eqz p2, :cond_3

    :goto_1
    :try_start_3
    invoke-virtual {p2}, Ljavax/net/ssl/HttpsURLConnection;->disconnect()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    goto :goto_3

    :catch_1
    move-exception p1

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception p1

    move-object p2, v0

    .line 78
    :goto_2
    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz p2, :cond_3

    goto :goto_1

    :catch_3
    :cond_3
    :goto_3
    return-object v0

    :catchall_1
    move-exception p1

    move-object v0, p2

    :goto_4
    if-eqz v0, :cond_4

    .line 83
    :try_start_5
    invoke-virtual {v0}, Ljavax/net/ssl/HttpsURLConnection;->disconnect()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    .line 88
    :catch_4
    :cond_4
    throw p1
.end method
