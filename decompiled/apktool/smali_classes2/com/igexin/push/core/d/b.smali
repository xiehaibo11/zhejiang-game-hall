.class Lcom/igexin/push/core/d/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/d/c;


# instance fields
.field private a:Ljava/lang/String;

.field private b:J


# direct methods
.method constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/igexin/push/core/d/b;->b:J

    return-void
.end method

.method private a()Z
    .locals 6

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/core/d/b;->a:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_2

    iget-wide v2, p0, Lcom/igexin/push/core/d/b;->b:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/core/d/b;->a:Ljava/lang/String;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-wide v2, p0, Lcom/igexin/push/core/d/b;->b:J

    sget-wide v4, Lcom/igexin/push/core/d;->t:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :cond_2
    :goto_0
    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v0, p0, Lcom/igexin/push/core/d/b;->a:Ljava/lang/String;

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    iput-wide v2, p0, Lcom/igexin/push/core/d/b;->b:J

    return v1

    :catchall_0
    move-exception v0

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    iput-object v1, p0, Lcom/igexin/push/core/d/b;->a:Ljava/lang/String;

    sget-wide v1, Lcom/igexin/push/core/d;->t:J

    iput-wide v1, p0, Lcom/igexin/push/core/d/b;->b:J

    throw v0
.end method


# virtual methods
.method public a(Landroid/content/Context;)Ljava/lang/String;
    .locals 5

    const-string p1, "BasicSDStorage|get device id from file : "

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v2, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    invoke-static {v2}, Lcom/igexin/push/util/c;->a(Ljava/lang/String;)[B

    move-result-object v2

    if-nez v2, :cond_0

    const-string v2, "BasicSDStorage|read file device id = null"

    new-array v3, v1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v0

    :cond_0
    new-instance v3, Ljava/lang/String;

    const-string v4, "UTF-8"

    invoke-direct {v3, v2, v4}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BasicSDStorage|read file device id = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v2

    move-object v0, v3

    goto :goto_0

    :catch_1
    move-exception v2

    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    move-object v3, v0

    :goto_1
    return-object v3
.end method

.method public a(Landroid/content/Context;J)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/d/b;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/c;->a()V

    :cond_0
    return-void
.end method

.method public a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "BasicSDStorage|save device id to file : "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x0

    new-instance v1, Ljava/util/concurrent/locks/ReentrantReadWriteLock;

    invoke-direct {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;-><init>()V

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock;->writeLock()Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;

    move-result-object v1

    :try_start_0
    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->tryLock()Z

    move-result v2

    if-eqz v2, :cond_2

    new-instance v2, Ljava/io/File;

    sget-object v3, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->createNewFile()Z

    move-result v3

    if-nez v3, :cond_1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "BasicSDStorage|create file : "

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " failed !!!"

    invoke-virtual {p2, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {p2, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    invoke-static {p1}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    return-void

    :cond_1
    :try_start_1
    new-instance v2, Ljava/io/FileOutputStream;

    sget-object v3, Lcom/igexin/push/core/d;->S:Ljava/lang/String;

    invoke-direct {v2, v3}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    const-string p1, "UTF-8"

    invoke-virtual {p2, p1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/io/FileOutputStream;->write([B)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    move-object p1, v2

    goto :goto_0

    :catchall_0
    move-exception p2

    move-object p1, v2

    goto :goto_3

    :catch_0
    move-exception p2

    move-object p1, v2

    goto :goto_1

    :cond_2
    :goto_0
    invoke-static {p1}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    goto :goto_2

    :catchall_1
    move-exception p2

    goto :goto_3

    :catch_1
    move-exception p2

    :goto_1
    :try_start_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "BasicSDStorage|"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p2, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :goto_2
    return-void

    :goto_3
    invoke-static {p1}, Lcom/igexin/push/util/h;->a(Ljava/io/Closeable;)V

    invoke-virtual {v1}, Ljava/util/concurrent/locks/ReentrantReadWriteLock$WriteLock;->unlock()V

    throw p2
.end method

.method public b(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    const/4 p1, 0x0

    const/4 v0, 0x0

    :try_start_0
    sget-object v1, Lcom/igexin/push/core/d;->R:Ljava/lang/String;

    invoke-static {v1}, Lcom/igexin/push/util/c;->a(Ljava/lang/String;)[B

    move-result-object v1

    if-nez v1, :cond_0

    const-string v1, "BasicSDStorage | read file cid id = null"

    new-array v2, p1, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v0

    :cond_0
    new-instance v2, Ljava/lang/String;

    sget-object v3, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v1, v3}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object v1

    invoke-direct {v2, v1}, Ljava/lang/String;-><init>([B)V

    const-string v1, "\\|"

    invoke-virtual {v2, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x2

    if-le v2, v3, :cond_2

    aget-object v1, v1, v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    if-eqz v1, :cond_1

    :try_start_1
    const-string v2, "null"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-eqz v2, :cond_1

    goto :goto_0

    :catch_0
    :cond_1
    move-object v0, v1

    :catch_1
    :cond_2
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "BasicSDStorage|get cid from file cid = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {v1, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v0
.end method

.method public b(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/d/b;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/c;->a()V

    :cond_0
    return-void
.end method

.method public c(Landroid/content/Context;)J
    .locals 5

    const-wide/16 v0, 0x0

    const/4 p1, 0x0

    :try_start_0
    sget-object v2, Lcom/igexin/push/core/d;->R:Ljava/lang/String;

    invoke-static {v2}, Lcom/igexin/push/util/c;->a(Ljava/lang/String;)[B

    move-result-object v2

    if-nez v2, :cond_0

    const-string v2, "BasicSDStorage|read session from file, not exist"

    new-array v3, p1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-wide v0

    :cond_0
    new-instance v3, Ljava/lang/String;

    sget-object v4, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {v2, v4}, Lcom/igexin/b/a/a/a;->c([BLjava/lang/String;)[B

    move-result-object v2

    invoke-direct {v3, v2}, Ljava/lang/String;-><init>([B)V

    const-string v2, "null"

    invoke-virtual {v3, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v2, 0x7

    invoke-virtual {v3, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_1
    const/16 v2, 0x14

    invoke-virtual {v3, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    :goto_0
    const-string v3, "|"

    invoke-virtual {v2, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v3

    if-ltz v3, :cond_2

    invoke-virtual {v2, p1, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    :cond_2
    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    cmp-long v4, v2, v0

    if-eqz v4, :cond_3

    move-wide v0, v2

    goto :goto_1

    :catch_0
    move-exception v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "BasicSDStorage|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, p1, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_3
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "BasicSDStorage|session : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {v2, p1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-wide v0
.end method
