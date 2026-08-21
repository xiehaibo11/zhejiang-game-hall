.class public Lcom/cmic/gen/sdk/c/d;
.super Lcom/cmic/gen/sdk/c/a;
.source "TlsSniSocketFactory.java"


# static fields
.field private static final b:[Ljava/lang/String;


# instance fields
.field a:Ljavax/net/ssl/HostnameVerifier;

.field private final c:Ljava/lang/String;

.field private final d:Ljavax/net/ssl/HttpsURLConnection;

.field private final e:Landroid/net/Network;

.field private final f:Lcom/cmic/gen/sdk/a;


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "TLSv1.2"

    aput-object v2, v0, v1

    .line 26
    sput-object v0, Lcom/cmic/gen/sdk/c/d;->b:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Ljavax/net/ssl/HttpsURLConnection;Landroid/net/Network;Lcom/cmic/gen/sdk/a;)V
    .locals 1

    .line 34
    invoke-direct {p0}, Lcom/cmic/gen/sdk/c/a;-><init>()V

    .line 28
    const-class v0, Lcom/cmic/gen/sdk/c/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    .line 29
    invoke-static {}, Ljavax/net/ssl/HttpsURLConnection;->getDefaultHostnameVerifier()Ljavax/net/ssl/HostnameVerifier;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/c/d;->a:Ljavax/net/ssl/HostnameVerifier;

    .line 35
    iput-object p1, p0, Lcom/cmic/gen/sdk/c/d;->d:Ljavax/net/ssl/HttpsURLConnection;

    .line 36
    iput-object p2, p0, Lcom/cmic/gen/sdk/c/d;->e:Landroid/net/Network;

    .line 37
    iput-object p3, p0, Lcom/cmic/gen/sdk/c/d;->f:Lcom/cmic/gen/sdk/a;

    return-void
.end method


# virtual methods
.method public createSocket(Ljava/lang/String;I)Ljava/net/Socket;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Ljava/net/UnknownHostException;
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public createSocket(Ljava/lang/String;ILjava/net/InetAddress;I)Ljava/net/Socket;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Ljava/net/UnknownHostException;
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public createSocket(Ljava/net/InetAddress;I)Ljava/net/Socket;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public createSocket(Ljava/net/InetAddress;ILjava/net/InetAddress;I)Ljava/net/Socket;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method

.method public createSocket(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 52
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/d;->d:Ljavax/net/ssl/HttpsURLConnection;

    const-string v0, "Host"

    invoke-virtual {p3, v0}, Ljavax/net/ssl/HttpsURLConnection;->getRequestProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    if-nez p3, :cond_0

    goto :goto_0

    :cond_0
    move-object p2, p3

    .line 55
    :goto_0
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "customized createSocket. host: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 56
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "plainSocket localAddress: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/net/Socket;->getLocalAddress()Ljava/net/InetAddress;

    move-result-object v1

    invoke-virtual {v1}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p3, v0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p4, :cond_1

    .line 59
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    const-string p4, "plainSocket close"

    invoke-static {p3, p4}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    invoke-virtual {p1}, Ljava/net/Socket;->close()V

    :cond_1
    const/4 p3, 0x0

    .line 63
    invoke-static {p3}, Landroid/net/SSLCertificateSocketFactory;->getDefault(I)Ljavax/net/SocketFactory;

    move-result-object p4

    check-cast p4, Landroid/net/SSLCertificateSocketFactory;

    .line 64
    invoke-virtual {p4}, Landroid/net/SSLCertificateSocketFactory;->createSocket()Ljava/net/Socket;

    move-result-object v0

    check-cast v0, Ljavax/net/ssl/SSLSocket;

    .line 65
    iget-object v1, p0, Lcom/cmic/gen/sdk/c/d;->e:Landroid/net/Network;

    if-eqz v1, :cond_2

    .line 66
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v1, v2, :cond_2

    .line 67
    iget-object v1, p0, Lcom/cmic/gen/sdk/c/d;->e:Landroid/net/Network;

    invoke-virtual {v1, v0}, Landroid/net/Network;->bindSocket(Ljava/net/Socket;)V

    .line 70
    :cond_2
    invoke-virtual {p1}, Ljava/net/Socket;->getRemoteSocketAddress()Ljava/net/SocketAddress;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljavax/net/ssl/SSLSocket;->connect(Ljava/net/SocketAddress;)V

    .line 71
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/d;->f:Lcom/cmic/gen/sdk/a;

    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocket;->getLocalAddress()Ljava/net/InetAddress;

    move-result-object v1

    invoke-virtual {v1}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object v1

    const-string v2, "socketip"

    invoke-virtual {p1, v2, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocket;->getSupportedProtocols()[Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljavax/net/ssl/SSLSocket;->setEnabledProtocols([Ljava/lang/String;)V

    .line 74
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x14

    const/4 v2, 0x1

    if-ge p1, v1, :cond_3

    .line 75
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    const-string v1, "5.0\u4ee5\u4e0b\u542f\u52a8tls 1.2"

    invoke-static {p1, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    sget-object p1, Lcom/cmic/gen/sdk/c/d;->b:[Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljavax/net/ssl/SSLSocket;->setEnabledProtocols([Ljava/lang/String;)V

    const/4 p1, 0x2

    new-array p1, p1, [Ljava/lang/String;

    const-string v1, "TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA"

    aput-object v1, p1, p3

    const-string v1, "TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA"

    aput-object v1, p1, v2

    .line 77
    invoke-virtual {v0, p1}, Ljavax/net/ssl/SSLSocket;->setEnabledCipherSuites([Ljava/lang/String;)V

    .line 84
    :cond_3
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-lt p1, v1, :cond_4

    .line 85
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    const-string p3, "Setting SNI hostname"

    invoke-static {p1, p3}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 86
    invoke-virtual {p4, v0, p2}, Landroid/net/SSLCertificateSocketFactory;->setHostname(Ljava/net/Socket;Ljava/lang/String;)V

    goto :goto_1

    .line 88
    :cond_4
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    const-string p4, "No documented SNI support on Android <4.2, trying with reflection"

    invoke-static {p1, p4}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    const-string p4, "setHostname"

    new-array v1, v2, [Ljava/lang/Class;

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, p3

    invoke-virtual {p1, p4, v1}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    new-array p4, v2, [Ljava/lang/Object;

    aput-object p2, p4, p3

    .line 91
    invoke-virtual {p1, v0, p4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 93
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 94
    iget-object p1, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    const-string p3, "SNI not useable"

    invoke-static {p1, p3}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    :goto_1
    invoke-virtual {v0}, Ljavax/net/ssl/SSLSocket;->getSession()Ljavax/net/ssl/SSLSession;

    move-result-object p1

    .line 101
    iget-object p3, p0, Lcom/cmic/gen/sdk/c/d;->a:Ljavax/net/ssl/HostnameVerifier;

    invoke-interface {p3, p2, p1}, Ljavax/net/ssl/HostnameVerifier;->verify(Ljava/lang/String;Ljavax/net/ssl/SSLSession;)Z

    move-result p3

    if-eqz p3, :cond_5

    .line 104
    iget-object p2, p0, Lcom/cmic/gen/sdk/c/d;->c:Ljava/lang/String;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "Established "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljavax/net/ssl/SSLSession;->getProtocol()Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, " connection with "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p1}, Ljavax/net/ssl/SSLSession;->getPeerHost()Ljava/lang/String;

    move-result-object p4

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, " using "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 105
    invoke-interface {p1}, Ljavax/net/ssl/SSLSession;->getCipherSuite()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 104
    invoke-static {p2, p1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0

    .line 102
    :cond_5
    new-instance p1, Ljavax/net/ssl/SSLPeerUnverifiedException;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "Cannot verify hostname: "

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljavax/net/ssl/SSLPeerUnverifiedException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public getDefaultCipherSuites()[Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    return-object v0
.end method

.method public getSupportedCipherSuites()[Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    return-object v0
.end method
