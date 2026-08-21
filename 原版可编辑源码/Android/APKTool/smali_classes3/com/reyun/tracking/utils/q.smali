.class Lcom/reyun/tracking/utils/q;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/reyun/tracking/utils/n;

.field final synthetic d:B

.field final synthetic e:Lcom/reyun/tracking/utils/p;


# direct methods
.method constructor <init>(Lcom/reyun/tracking/utils/p;Ljava/lang/String;Ljava/lang/String;Lcom/reyun/tracking/utils/n;B)V
    .locals 0

    iput-object p1, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    iput-object p2, p0, Lcom/reyun/tracking/utils/q;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/reyun/tracking/utils/q;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/reyun/tracking/utils/q;->c:Lcom/reyun/tracking/utils/n;

    iput-byte p5, p0, Lcom/reyun/tracking/utils/q;->d:B

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "=======> Begin send data to api: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/reyun/tracking/utils/q;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Tracking"

    invoke-static {v1, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "=======> "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/reyun/tracking/a/a;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v0}, Lcom/reyun/tracking/utils/p;->a(Lcom/reyun/tracking/utils/p;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v0}, Lcom/reyun/tracking/utils/p;->b(Lcom/reyun/tracking/utils/p;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    iget-object v1, p0, Lcom/reyun/tracking/utils/q;->c:Lcom/reyun/tracking/utils/n;

    invoke-static {v0, v1}, Lcom/reyun/tracking/utils/p;->a(Lcom/reyun/tracking/utils/p;Lcom/reyun/tracking/utils/n;)V

    :cond_0
    iget-object v0, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v0}, Lcom/reyun/tracking/utils/p;->a(Lcom/reyun/tracking/utils/p;)Z

    move-result v0

    if-eqz v0, :cond_7

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v1}, Lcom/reyun/tracking/utils/p;->c(Lcom/reyun/tracking/utils/p;)Ljava/net/Socket;

    move-result-object v1

    invoke-virtual {v1}, Ljava/net/Socket;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/reyun/tracking/utils/q;->b:Ljava/lang/String;

    if-eqz v3, :cond_2

    sget-boolean v2, Lcom/reyun/tracking/a/i;->d:Z

    if-eqz v2, :cond_1

    invoke-static {}, Lcom/reyun/tracking/utils/a;->a()Lcom/reyun/tracking/utils/a;

    move-result-object v2

    iget-object v3, p0, Lcom/reyun/tracking/utils/q;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/reyun/tracking/utils/a;->a(Ljava/lang/String;)[B

    move-result-object v2

    goto :goto_0

    :cond_1
    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->b:Ljava/lang/String;

    const-string v3, "UTF-8"

    invoke-virtual {v2, v3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    :cond_2
    :goto_0
    if-nez v2, :cond_3

    const/4 v3, 0x0

    goto :goto_1

    :cond_3
    array-length v3, v2

    :goto_1
    add-int/lit8 v4, v3, 0xe

    new-instance v5, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v5}, Ljava/io/ByteArrayOutputStream;-><init>()V

    invoke-static {v4}, Lcom/reyun/tracking/utils/p;->a(I)[B

    move-result-object v4

    invoke-virtual {v5, v4}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v5, v0}, Ljava/io/ByteArrayOutputStream;->write(I)V

    const/4 v4, 0x2

    invoke-virtual {v5, v4}, Ljava/io/ByteArrayOutputStream;->write(I)V

    iget-byte v6, p0, Lcom/reyun/tracking/utils/q;->d:B

    invoke-virtual {v5, v6}, Ljava/io/ByteArrayOutputStream;->write(I)V

    new-array v6, v4, [B

    invoke-virtual {v5, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-virtual {v5, v0}, Ljava/io/ByteArrayOutputStream;->write(I)V

    const/4 v6, 0x4

    new-array v6, v6, [B

    invoke-virtual {v5, v6}, Ljava/io/ByteArrayOutputStream;->write([B)V

    invoke-static {v3}, Lcom/reyun/tracking/utils/p;->a(I)[B

    move-result-object v3

    invoke-virtual {v5, v3}, Ljava/io/ByteArrayOutputStream;->write([B)V

    if-eqz v2, :cond_4

    invoke-virtual {v5, v2}, Ljava/io/ByteArrayOutputStream;->write([B)V

    :cond_4
    invoke-virtual {v5}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/OutputStream;->write([B)V

    invoke-virtual {v1}, Ljava/io/OutputStream;->flush()V

    iget-object v1, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v1}, Lcom/reyun/tracking/utils/p;->c(Lcom/reyun/tracking/utils/p;)Ljava/net/Socket;

    move-result-object v1

    invoke-virtual {v1}, Ljava/net/Socket;->getInputStream()Ljava/io/InputStream;

    move-result-object v1

    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v2, v1}, Lcom/reyun/tracking/utils/p;->a(Lcom/reyun/tracking/utils/p;Ljava/io/InputStream;)S

    move-result v2

    iget-object v3, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v3, v1, v2}, Lcom/reyun/tracking/utils/p;->a(Lcom/reyun/tracking/utils/p;Ljava/io/InputStream;I)[B

    move-result-object v1

    array-length v2, v1

    if-lt v2, v4, :cond_6

    array-length v2, v1

    add-int/lit8 v2, v2, -0x1

    aget-byte v2, v1, v2

    const/16 v3, 0xa

    if-ne v2, v3, :cond_5

    array-length v2, v1

    sub-int/2addr v2, v4

    aget-byte v2, v1, v2

    const/16 v3, 0xd

    if-ne v2, v3, :cond_5

    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->c:Lcom/reyun/tracking/utils/n;

    invoke-interface {v2, v0, v1}, Lcom/reyun/tracking/utils/n;->a(ILjava/lang/Object;)V

    goto :goto_3

    :cond_5
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "\u6570\u636e\u683c\u5f0f\u7ed3\u5c3e\u9519\u8bef"

    invoke-direct {v1, v2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v1

    :cond_6
    new-instance v2, Ljava/lang/RuntimeException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u8fd4\u56de\u6570\u636e\u957f\u5ea6\u9519\u8bef bytes.length:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v1, v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v2, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_0
    move-exception v1

    :try_start_1
    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v2}, Lcom/reyun/tracking/utils/p;->d(Lcom/reyun/tracking/utils/p;)I

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v2}, Lcom/reyun/tracking/utils/p;->e(Lcom/reyun/tracking/utils/p;)V

    iget-object v2, p0, Lcom/reyun/tracking/utils/q;->c:Lcom/reyun/tracking/utils/n;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v1, v3}, Lcom/reyun/tracking/utils/n;->a(Ljava/lang/Throwable;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/reyun/tracking/utils/q;->e:Lcom/reyun/tracking/utils/p;

    invoke-static {v1}, Lcom/reyun/tracking/utils/p;->f(Lcom/reyun/tracking/utils/p;)I

    move-result v1

    const/4 v2, 0x5

    if-lt v1, v2, :cond_8

    invoke-static {v0}, Lcom/reyun/tracking/sdk/Tracking;->setUseTcp(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_3

    :goto_2
    throw v0

    :cond_7
    iget-object v0, p0, Lcom/reyun/tracking/utils/q;->c:Lcom/reyun/tracking/utils/n;

    new-instance v1, Ljava/lang/Exception;

    const-string v2, "\u8fde\u63a5\u5df2\u91ca\u653e"

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1, v2}, Lcom/reyun/tracking/utils/n;->a(Ljava/lang/Throwable;Ljava/lang/String;)V

    :cond_8
    :goto_3
    return-void
.end method
