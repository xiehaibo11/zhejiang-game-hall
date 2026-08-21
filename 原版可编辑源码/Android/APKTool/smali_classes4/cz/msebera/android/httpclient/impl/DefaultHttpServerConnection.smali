.class public Lcz/msebera/android/httpclient/impl/DefaultHttpServerConnection;
.super Lcz/msebera/android/httpclient/impl/SocketHttpServerConnection;
.source "DefaultHttpServerConnection.java"


# annotations
.annotation build Lcz/msebera/android/httpclient/annotation/NotThreadSafe;
.end annotation

.annotation runtime Ljava/lang/Deprecated;
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Lcz/msebera/android/httpclient/impl/SocketHttpServerConnection;-><init>()V

    return-void
.end method


# virtual methods
.method public bind(Ljava/net/Socket;Lcz/msebera/android/httpclient/params/HttpParams;)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-string v0, "Socket"

    .line 55
    invoke-static {p1, v0}, Lcz/msebera/android/httpclient/util/Args;->notNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    const-string v0, "HTTP parameters"

    .line 56
    invoke-static {p2, v0}, Lcz/msebera/android/httpclient/util/Args;->notNull(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    .line 57
    invoke-virtual {p0}, Lcz/msebera/android/httpclient/impl/DefaultHttpServerConnection;->assertNotOpen()V

    const/4 v0, 0x1

    const-string v1, "http.tcp.nodelay"

    .line 58
    invoke-interface {p2, v1, v0}, Lcz/msebera/android/httpclient/params/HttpParams;->getBooleanParameter(Ljava/lang/String;Z)Z

    move-result v1

    invoke-virtual {p1, v1}, Ljava/net/Socket;->setTcpNoDelay(Z)V

    const/4 v1, 0x0

    const-string v2, "http.socket.timeout"

    .line 59
    invoke-interface {p2, v2, v1}, Lcz/msebera/android/httpclient/params/HttpParams;->getIntParameter(Ljava/lang/String;I)I

    move-result v2

    invoke-virtual {p1, v2}, Ljava/net/Socket;->setSoTimeout(I)V

    const-string v2, "http.socket.keepalive"

    .line 60
    invoke-interface {p2, v2, v1}, Lcz/msebera/android/httpclient/params/HttpParams;->getBooleanParameter(Ljava/lang/String;Z)Z

    move-result v2

    invoke-virtual {p1, v2}, Ljava/net/Socket;->setKeepAlive(Z)V

    const-string v2, "http.socket.linger"

    const/4 v3, -0x1

    .line 61
    invoke-interface {p2, v2, v3}, Lcz/msebera/android/httpclient/params/HttpParams;->getIntParameter(Ljava/lang/String;I)I

    move-result v2

    if-ltz v2, :cond_1

    if-lez v2, :cond_0

    const/4 v3, 0x1

    goto :goto_0

    :cond_0
    const/4 v3, 0x0

    .line 63
    :goto_0
    invoke-virtual {p1, v3, v2}, Ljava/net/Socket;->setSoLinger(ZI)V

    :cond_1
    if-ltz v2, :cond_3

    if-lez v2, :cond_2

    goto :goto_1

    :cond_2
    const/4 v0, 0x0

    .line 66
    :goto_1
    invoke-virtual {p1, v0, v2}, Ljava/net/Socket;->setSoLinger(ZI)V

    .line 68
    :cond_3
    invoke-super {p0, p1, p2}, Lcz/msebera/android/httpclient/impl/SocketHttpServerConnection;->bind(Ljava/net/Socket;Lcz/msebera/android/httpclient/params/HttpParams;)V

    return-void
.end method
