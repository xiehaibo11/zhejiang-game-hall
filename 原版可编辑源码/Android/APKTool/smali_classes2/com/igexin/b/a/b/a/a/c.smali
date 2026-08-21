.class public final Lcom/igexin/b/a/b/a/a/c;
.super Lcom/igexin/b/a/b/a/a/a;


# instance fields
.field private i:Lcom/igexin/b/a/b/a/a/a/d;

.field private j:Ljava/net/Socket;


# direct methods
.method public constructor <init>(Lcom/igexin/b/a/b/a/a/a/d;)V
    .locals 2

    const/4 v0, 0x0

    const/16 v1, -0x7f5

    invoke-direct {p0, v1, v0, v0}, Lcom/igexin/b/a/b/a/a/a;-><init>(ILjava/lang/String;Lcom/igexin/b/a/b/b;)V

    iput-object p1, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    return-void
.end method


# virtual methods
.method public b()V
    .locals 7

    invoke-super {p0}, Lcom/igexin/b/a/b/a/a/a;->b()V

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->a()Z

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getCmAddress()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    :try_start_0
    invoke-static {v0}, Lcom/igexin/b/a/b/f;->a(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    aget-object v4, v2, v3

    const/4 v5, 0x2

    aget-object v2, v2, v5

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "GS-C|start connect :  "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " *********"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-array v6, v1, [Ljava/lang/Object;

    invoke-static {v5, v6}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v5, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    if-eqz v5, :cond_0

    invoke-interface {v5, v0}, Lcom/igexin/b/a/b/a/a/a/d;->a(Ljava/lang/String;)V

    :cond_0
    new-instance v5, Ljava/net/Socket;

    invoke-direct {v5}, Ljava/net/Socket;-><init>()V

    iput-object v5, p0, Lcom/igexin/b/a/b/a/a/c;->j:Ljava/net/Socket;

    :try_start_1
    new-instance v6, Ljava/net/InetSocketAddress;

    invoke-direct {v6, v4, v2}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    const/16 v2, 0x2710

    invoke-virtual {v5, v6, v2}, Ljava/net/Socket;->connect(Ljava/net/SocketAddress;I)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "GS-C|connected :  "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " #########"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "GS-C|local-"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/b/a/b/a/a/c;->j:Ljava/net/Socket;

    invoke-virtual {v2}, Ljava/net/Socket;->getLocalAddress()Ljava/net/InetAddress;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ":"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/igexin/b/a/b/a/a/c;->j:Ljava/net/Socket;

    invoke-virtual {v2}, Ljava/net/Socket;->getLocalPort()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    if-eq v0, v1, :cond_1

    sget-object v0, Lcom/igexin/b/a/b/a/a/b;->a:Lcom/igexin/b/a/b/a/a/b;

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    iget-object v1, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v2, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    if-eq v1, v2, :cond_1

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->b:Lcom/igexin/b/a/b/a/a/b;

    iput-object v1, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->g:Ljava/lang/String;

    :cond_1
    :goto_0
    iput-boolean v3, p0, Lcom/igexin/b/a/b/a/a/c;->e:Z

    return-void

    :catch_1
    move-exception v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "GS-C|ips invalid, "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v2, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    throw v0
.end method

.method public final b_()I
    .locals 1

    const/16 v0, -0x7f5

    return v0
.end method

.method public f()V
    .locals 3

    invoke-super {p0}, Lcom/igexin/b/a/b/a/a/a;->f()V

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "GS-C|sc dispose"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    invoke-interface {v0, p0}, Lcom/igexin/b/a/b/a/a/a/d;->a(Lcom/igexin/b/a/b/e;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->b:Lcom/igexin/b/a/b/a/a/b;

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    new-instance v1, Ljava/lang/Exception;

    iget-object v2, p0, Lcom/igexin/b/a/b/a/a/c;->g:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1}, Lcom/igexin/b/a/b/a/a/a/d;->a(Ljava/lang/Exception;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    sget-object v1, Lcom/igexin/b/a/b/a/a/b;->a:Lcom/igexin/b/a/b/a/a/b;

    if-ne v0, v1, :cond_2

    iget-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->j:Ljava/net/Socket;

    if-eqz v0, :cond_2

    iget-object v1, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    invoke-interface {v1, v0}, Lcom/igexin/b/a/b/a/a/a/d;->a(Ljava/net/Socket;)V

    :cond_2
    :goto_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->i:Lcom/igexin/b/a/b/a/a/a/d;

    return-void
.end method

.method public j()V
    .locals 1

    sget-object v0, Lcom/igexin/b/a/b/a/a/b;->c:Lcom/igexin/b/a/b/a/a/b;

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/c;->f:Lcom/igexin/b/a/b/a/a/b;

    return-void
.end method
