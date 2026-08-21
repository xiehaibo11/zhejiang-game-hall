.class public Lcom/igexin/push/f/a;
.super Lcom/igexin/b/a/d/e;


# static fields
.field private static e:Lcom/igexin/push/f/a;


# instance fields
.field private a:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private c:J

.field private d:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 2

    const v0, -0x7ffffff5

    invoke-direct {p0, v0}, Lcom/igexin/b/a/d/e;-><init>(I)V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/f/a;->b:Ljava/util/ArrayList;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/f/a;->c:J

    return-void
.end method

.method public static i()Lcom/igexin/push/f/a;
    .locals 4

    sget-object v0, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/igexin/push/f/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/f/a;

    invoke-direct {v1}, Lcom/igexin/push/f/a;-><init>()V

    sput-object v1, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    const/4 v3, 0x1

    invoke-virtual {v1, v2, v3, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    return-object v0
.end method

.method public static k()V
    .locals 1

    sget-object v0, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/igexin/push/f/a;->j()V

    :cond_0
    return-void
.end method

.method private u()J
    .locals 8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/push/f/a;->c:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0xea60

    cmp-long v4, v0, v2

    const-wide/16 v5, 0x0

    if-ltz v4, :cond_0

    iget-object v4, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-lez v4, :cond_0

    return-wide v5

    :cond_0
    iget-object v4, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    const/16 v7, 0xa

    if-lt v4, v7, :cond_1

    return-wide v5

    :cond_1
    iget-object v4, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-gtz v4, :cond_2

    const-wide v0, 0x7fffffffffffffffL

    return-wide v0

    :cond_2
    sub-long/2addr v2, v0

    return-wide v2
.end method

.method private v()V
    .locals 6

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    if-eqz v0, :cond_9

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    if-nez v0, :cond_0

    goto/16 :goto_4

    :cond_0
    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/f/a;->b:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    iget-object v0, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    invoke-direct {p0}, Lcom/igexin/push/f/a;->w()V

    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/igexin/push/f/a;->d:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    new-instance v0, Ljava/text/SimpleDateFormat;

    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v1

    const-string v2, "yyyy-MM-dd"

    invoke-direct {v0, v2, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;Ljava/util/Locale;)V

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1}, Ljava/util/Date;-><init>()V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const/4 v2, 0x0

    :try_start_1
    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/igexin/push/f/a;->d:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "/"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "."

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".log"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v3, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_3

    invoke-virtual {v3}, Ljava/io/File;->createNewFile()Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    :cond_2
    invoke-static {}, Lcom/igexin/b/a/c/a;->a()V

    :cond_3
    invoke-static {}, Lcom/igexin/b/a/c/a;->b()[B

    move-result-object v0

    if-nez v0, :cond_4

    invoke-static {}, Lcom/igexin/b/a/c/a;->a()V

    invoke-virtual {v3}, Ljava/io/File;->delete()Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :cond_4
    :try_start_2
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    sget-object v1, Lcom/igexin/push/core/d;->ao:[B

    const-string v4, "AES"

    invoke-direct {v0, v1, v4}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    invoke-static {v3, v0}, Lcom/igexin/b/a/c/a;->a(Ljava/io/File;Ljavax/crypto/spec/SecretKeySpec;)Ljavax/crypto/CipherOutputStream;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_3
    new-instance v0, Ljava/io/FileOutputStream;

    const/4 v1, 0x1

    invoke-direct {v0, v3, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;Z)V

    :goto_0
    move-object v2, v0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/igexin/push/f/a;->b:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\r\n"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_5
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_6

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "UTF-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/OutputStream;->write([B)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_6
    if-eqz v2, :cond_8

    :goto_2
    :try_start_4
    invoke-virtual {v2}, Ljava/io/OutputStream;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_3

    :catchall_1
    move-exception v0

    if-eqz v2, :cond_7

    :try_start_5
    invoke-virtual {v2}, Ljava/io/OutputStream;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_0

    :catch_0
    :cond_7
    throw v0

    :catch_1
    if-eqz v2, :cond_8

    goto :goto_2

    :catch_2
    :cond_8
    :goto_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/f/a;->c:J

    iget-object v0, p0, Lcom/igexin/push/f/a;->b:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    return-void

    :catchall_2
    move-exception v0

    :try_start_6
    monitor-exit p0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    throw v0

    :cond_9
    :goto_4
    return-void
.end method

.method private w()V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/f/a;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/util/c;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/igexin/push/f/a;->d:Ljava/lang/String;

    :cond_0
    return-void
.end method


# virtual methods
.method public declared-synchronized a(Ljava/lang/String;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    iget-object p1, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    const/4 v0, 0x1

    if-le p1, v0, :cond_0

    iget-object p1, p0, Lcom/igexin/push/f/a;->a:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    const/16 v0, 0xa

    if-lt p1, v0, :cond_1

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->notify()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_1
    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public b()V
    .locals 4

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->b()V

    :goto_0
    :try_start_0
    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :goto_1
    :try_start_1
    invoke-direct {p0}, Lcom/igexin/push/f/a;->u()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-eqz v2, :cond_0

    invoke-virtual {p0, v0, v1}, Ljava/lang/Object;->wait(J)V

    goto :goto_1

    :cond_0
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    invoke-direct {p0}, Lcom/igexin/push/f/a;->v()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_0
    move-exception v0

    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    invoke-direct {p0}, Lcom/igexin/push/f/a;->v()V

    return-void
.end method

.method public b_()I
    .locals 1

    const v0, -0x7ffffff5

    return v0
.end method

.method public d()V
    .locals 1

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->d()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/f/a;->n:Z

    return-void
.end method

.method protected e()V
    .locals 0

    return-void
.end method

.method protected e_()V
    .locals 1

    invoke-super {p0}, Lcom/igexin/b/a/d/e;->e_()V

    const/4 v0, 0x0

    sput-object v0, Lcom/igexin/push/f/a;->e:Lcom/igexin/push/f/a;

    return-void
.end method

.method public j()V
    .locals 1

    invoke-virtual {p0}, Lcom/igexin/push/f/a;->s()Ljava/lang/Thread;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/igexin/push/f/a;->s()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    :cond_0
    return-void
.end method
