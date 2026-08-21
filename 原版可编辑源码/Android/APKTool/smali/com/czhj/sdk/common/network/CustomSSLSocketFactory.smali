.class public Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;
.super Ljavax/net/ssl/SSLSocketFactory;


# static fields
.field private static final b:[Ljavax/net/ssl/TrustManager;


# instance fields
.field private a:Ljavax/net/ssl/SSLSocketFactory;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljavax/net/ssl/TrustManager;

    new-instance v1, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory$1;

    invoke-direct {v1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory$1;-><init>()V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sput-object v0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->b:[Ljavax/net/ssl/TrustManager;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljavax/net/ssl/SSLSocketFactory;-><init>()V

    return-void
.end method

.method private static a(Landroid/net/SSLCertificateSocketFactory;Ljavax/net/ssl/SSLSocket;Ljava/lang/String;)V
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_0

    invoke-virtual {p0, p1, p2}, Landroid/net/SSLCertificateSocketFactory;->setHostname(Ljava/net/Socket;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    :try_start_0
    new-instance p0, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    const-string v0, "setHostname"

    invoke-direct {p0, p1, v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    const-class p1, Ljava/lang/String;

    invoke-virtual {p0, p1, p2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    move-result-object p0

    invoke-virtual {p0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-string p0, "Unable to call setHostname() on the socket"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private a(Ljava/net/Socket;)V
    .locals 1

    instance-of v0, p1, Ljavax/net/ssl/SSLSocket;

    if-eqz v0, :cond_0

    check-cast p1, Ljavax/net/ssl/SSLSocket;

    invoke-virtual {p1}, Ljavax/net/ssl/SSLSocket;->getSupportedProtocols()[Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljavax/net/ssl/SSLSocket;->setEnabledProtocols([Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/net/Socket;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_1

    instance-of v1, p1, Ljavax/net/ssl/SSLSocket;

    if-eqz v1, :cond_0

    :try_start_0
    check-cast p1, Ljavax/net/ssl/SSLSocket;

    instance-of v1, v0, Landroid/net/SSLCertificateSocketFactory;

    if-eqz v1, :cond_0

    check-cast v0, Landroid/net/SSLCertificateSocketFactory;

    invoke-static {v0, p1, p2}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Landroid/net/SSLCertificateSocketFactory;Ljavax/net/ssl/SSLSocket;Ljava/lang/String;)V

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljavax/net/ssl/SSLSocket;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void

    :cond_1
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private static a(Ljavax/net/ssl/SSLSocket;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    invoke-virtual {p0}, Ljavax/net/ssl/SSLSocket;->startHandshake()V

    invoke-static {}, Ljavax/net/ssl/HttpsURLConnection;->getDefaultHostnameVerifier()Ljavax/net/ssl/HostnameVerifier;

    move-result-object v0

    invoke-virtual {p0}, Ljavax/net/ssl/SSLSocket;->getSession()Ljavax/net/ssl/SSLSession;

    move-result-object p0

    invoke-interface {v0, p1, p0}, Ljavax/net/ssl/HostnameVerifier;->verify(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z

    move-result p0

    if-eqz p0, :cond_0

    return-void

    :cond_0
    new-instance p0, Ljavax/net/ssl/SSLHandshakeException;

    const-string p1, "Server Name Identification failed."

    invoke-direct {p0, p1}, Ljavax/net/ssl/SSLHandshakeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static getDefault(I)Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;
    .locals 2

    new-instance v0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;

    invoke-direct {v0}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;-><init>()V

    const/4 v1, 0x0

    invoke-static {p0, v1}, Landroid/net/SSLCertificateSocketFactory;->getDefault(ILandroid/net/SSLSessionCache;)Ljavax/net/ssl/SSLSocketFactory;

    move-result-object p0

    iput-object p0, v0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    return-object v0
.end method

.method public static getForceValid()Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;
    .locals 5

    new-instance v0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;

    invoke-direct {v0}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;-><init>()V

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "SSL"

    invoke-static {v2}, Ljavax/net/ssl/SSLContext;->getInstance(Ljava/lang/String;)Ljavax/net/ssl/SSLContext;

    move-result-object v2
    :try_end_0
    .catch Ljava/security/KeyManagementException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    sget-object v3, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->b:[Ljavax/net/ssl/TrustManager;

    new-instance v4, Ljava/security/SecureRandom;

    invoke-direct {v4}, Ljava/security/SecureRandom;-><init>()V

    invoke-virtual {v2, v1, v3, v4}, Ljavax/net/ssl/SSLContext;->init([Ljavax/net/ssl/KeyManager;[Ljavax/net/ssl/TrustManager;Ljava/security/SecureRandom;)V
    :try_end_1
    .catch Ljava/security/KeyManagementException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception v3

    goto :goto_0

    :catch_1
    move-exception v3

    goto :goto_1

    :catch_2
    move-exception v3

    move-object v2, v1

    :goto_0
    invoke-virtual {v3}, Ljava/security/NoSuchAlgorithmException;->getMessage()Ljava/lang/String;

    move-result-object v3

    goto :goto_2

    :catch_3
    move-exception v3

    move-object v2, v1

    :goto_1
    invoke-virtual {v3}, Ljava/security/KeyManagementException;->getMessage()Ljava/lang/String;

    move-result-object v3

    :goto_2
    invoke-static {v3}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_3
    if-nez v2, :cond_0

    return-object v1

    :cond_0
    invoke-virtual {v2}, Ljavax/net/ssl/SSLContext;->getSocketFactory()Ljavax/net/ssl/SSLSocketFactory;

    move-result-object v1

    iput-object v1, v0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    return-object v0
.end method


# virtual methods
.method a(Ljavax/net/ssl/SSLSocketFactory;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput-object p1, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    return-void
.end method

.method public createSocket()Ljava/net/Socket;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocketFactory;->createSocket()Ljava/net/Socket;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object v0

    :cond_0
    new-instance v0, Ljava/net/SocketException;

    const-string v1, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {v0, v1}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public createSocket(Ljava/lang/String;I)Ljava/net/Socket;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/lang/String;I)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object p1

    :cond_0
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public createSocket(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3, p4}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object p1

    :cond_0
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public createSocket(Ljava/net/InetAddress;I)Ljava/net/Socket;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/net/InetAddress;I)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object p1

    :cond_0
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public createSocket(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3, p4}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object p1

    :cond_0
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public createSocket(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_2

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-ge v0, v1, :cond_1

    if-eqz p4, :cond_0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/net/Socket;->close()V

    :cond_0
    iget-object p1, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    invoke-static {p2}, Lcom/czhj/sdk/common/network/InetAddressUtils;->getInetAddressByName(Ljava/lang/String;)Ljava/net/InetAddress;

    move-result-object p4

    invoke-virtual {p1, p4, p3}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/net/InetAddress;I)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    invoke-direct {p0, p1, p2}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;Ljava/lang/String;)V

    return-object p1

    :cond_1
    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    invoke-virtual {v0, p1, p2, p3, p4}, Ljavax/net/ssl/SSLSocketFactory;->createSocket(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a(Ljava/net/Socket;)V

    return-object p1

    :cond_2
    new-instance p1, Ljava/net/SocketException;

    const-string p2, "SSLSocketFactory was null. Unable to create socket."

    invoke-direct {p1, p2}, Ljava/net/SocketException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public getDefaultCipherSuites()[Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocketFactory;->getDefaultCipherSuites()[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSupportedCipherSuites()[Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/sdk/common/network/CustomSSLSocketFactory;->a:Ljavax/net/ssl/SSLSocketFactory;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    return-object v0

    :cond_0
    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocketFactory;->getSupportedCipherSuites()[Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
