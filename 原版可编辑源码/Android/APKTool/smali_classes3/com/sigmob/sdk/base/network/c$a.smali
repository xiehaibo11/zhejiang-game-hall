.class public Lcom/sigmob/sdk/base/network/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/network/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "HttpGetProxy"


# instance fields
.field private b:Ljava/net/Socket;

.field private c:Ljava/net/SocketAddress;


# direct methods
.method public constructor <init>(Ljava/net/Socket;Ljava/net/SocketAddress;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    iput-object p1, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/c$a;->c:Ljava/net/SocketAddress;

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;J)I
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/16 v0, 0x2000

    new-array v0, v0, [B

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v2

    cmp-long p1, p2, v2

    const/4 v2, 0x0

    if-lez p1, :cond_0

    return v2

    :cond_0
    new-instance p1, Ljava/io/RandomAccessFile;

    const-string v3, "rw"

    invoke-direct {p1, v1, v3}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    const-wide/16 v3, 0x0

    cmp-long v1, p2, v3

    if-lez v1, :cond_1

    invoke-virtual {p1, p2, p3}, Ljava/io/RandomAccessFile;->seek(J)V

    :cond_1
    move p2, v2

    :goto_0
    :try_start_0
    invoke-virtual {p1, v0}, Ljava/io/RandomAccessFile;->read([B)I

    move-result p3

    const/4 v1, -0x1

    if-eq p3, v1, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "tmpFileRaf read size"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    add-int/2addr p2, p3

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {v1}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    invoke-virtual {v1, v0, v2, p3}, Ljava/io/OutputStream;->write([BII)V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mSckPlayer write size"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    iget-object p3, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {p3}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p3

    invoke-virtual {p3}, Ljava/io/OutputStream;->flush()V

    invoke-virtual {p1}, Ljava/io/RandomAccessFile;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p2

    :catch_0
    move-exception p2

    const-string p3, "sendPrebufferToMP"

    invoke-static {p3, p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    invoke-virtual {p1}, Ljava/io/RandomAccessFile;->close()V

    throw p2
.end method

.method public a([B)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    array-length v0, p1

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/io/OutputStream;->write([B)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {p1}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V

    return-void
.end method

.method public a([BI)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {v0}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, p2}, Ljava/io/OutputStream;->write([BII)V

    iget-object p1, p0, Lcom/sigmob/sdk/base/network/c$a;->b:Ljava/net/Socket;

    invoke-virtual {p1}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/OutputStream;->flush()V

    return-void
.end method
