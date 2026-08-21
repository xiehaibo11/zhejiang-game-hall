.class public Lcom/tencent/open/log/a;
.super Lcom/tencent/open/log/Tracer;
.source "ProGuard"

# interfaces
.implements Landroid/os/Handler$Callback;


# instance fields
.field private a:Lcom/tencent/open/log/b;

.field private b:Ljava/io/FileWriter;

.field private c:Ljava/io/File;

.field private d:[C

.field private volatile e:Lcom/tencent/open/log/f;

.field private volatile f:Lcom/tencent/open/log/f;

.field private volatile g:Lcom/tencent/open/log/f;

.field private volatile h:Lcom/tencent/open/log/f;

.field private volatile i:Z

.field private j:Landroid/os/HandlerThread;

.field private k:Landroid/os/Handler;


# direct methods
.method public constructor <init>(IZLcom/tencent/open/log/g;Lcom/tencent/open/log/b;)V
    .locals 0

    .line 94
    invoke-direct {p0, p1, p2, p3}, Lcom/tencent/open/log/Tracer;-><init>(IZLcom/tencent/open/log/g;)V

    const/4 p1, 0x0

    .line 64
    iput-boolean p1, p0, Lcom/tencent/open/log/a;->i:Z

    .line 97
    invoke-virtual {p0, p4}, Lcom/tencent/open/log/a;->a(Lcom/tencent/open/log/b;)V

    .line 99
    new-instance p1, Lcom/tencent/open/log/f;

    invoke-direct {p1}, Lcom/tencent/open/log/f;-><init>()V

    iput-object p1, p0, Lcom/tencent/open/log/a;->e:Lcom/tencent/open/log/f;

    .line 100
    new-instance p1, Lcom/tencent/open/log/f;

    invoke-direct {p1}, Lcom/tencent/open/log/f;-><init>()V

    iput-object p1, p0, Lcom/tencent/open/log/a;->f:Lcom/tencent/open/log/f;

    .line 102
    iget-object p1, p0, Lcom/tencent/open/log/a;->e:Lcom/tencent/open/log/f;

    iput-object p1, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    .line 103
    iget-object p1, p0, Lcom/tencent/open/log/a;->f:Lcom/tencent/open/log/f;

    iput-object p1, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    .line 105
    invoke-virtual {p4}, Lcom/tencent/open/log/b;->c()I

    move-result p1

    new-array p1, p1, [C

    iput-object p1, p0, Lcom/tencent/open/log/a;->d:[C

    .line 107
    new-instance p1, Landroid/os/HandlerThread;

    invoke-virtual {p4}, Lcom/tencent/open/log/b;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4}, Lcom/tencent/open/log/b;->d()I

    move-result p3

    invoke-direct {p1, p2, p3}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;I)V

    iput-object p1, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    if-eqz p1, :cond_0

    .line 111
    invoke-virtual {p1}, Landroid/os/HandlerThread;->start()V

    .line 114
    :cond_0
    iget-object p1, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    invoke-virtual {p1}, Landroid/os/HandlerThread;->isAlive()Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    invoke-virtual {p1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 116
    new-instance p1, Landroid/os/Handler;

    iget-object p2, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    invoke-virtual {p2}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object p2

    invoke-direct {p1, p2, p0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;Landroid/os/Handler$Callback;)V

    iput-object p1, p0, Lcom/tencent/open/log/a;->k:Landroid/os/Handler;

    :cond_1
    return-void
.end method

.method public constructor <init>(Lcom/tencent/open/log/b;)V
    .locals 3

    .line 77
    sget v0, Lcom/tencent/open/log/c;->b:I

    sget-object v1, Lcom/tencent/open/log/g;->a:Lcom/tencent/open/log/g;

    const/4 v2, 0x1

    invoke-direct {p0, v0, v2, v1, p1}, Lcom/tencent/open/log/a;-><init>(IZLcom/tencent/open/log/g;Lcom/tencent/open/log/b;)V

    return-void
.end method

.method private a(Ljava/io/File;)V
    .locals 9

    .line 276
    invoke-virtual {p1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 277
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {p1}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_3

    .line 281
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    .line 286
    :cond_1
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_5

    aget-object v2, p1, v1

    .line 287
    invoke-direct {p0, v2}, Lcom/tencent/open/log/a;->b(Ljava/io/File;)Z

    move-result v3

    if-nez v3, :cond_2

    goto :goto_2

    .line 291
    :cond_2
    invoke-virtual {v2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v3

    const/16 v4, 0x20

    const/16 v5, 0x2b

    .line 294
    invoke-virtual {v3, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v4

    .line 296
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    .line 297
    sget-boolean v7, Lcom/tencent/tauth/Tencent;->USE_ONE_HOUR:Z

    if-eqz v7, :cond_3

    const-wide/32 v7, 0x36ee80

    goto :goto_1

    :cond_3
    const-wide/32 v7, 0xf731400

    :goto_1
    sub-long/2addr v5, v7

    .line 298
    invoke-static {v5, v6}, Lcom/tencent/open/log/b;->a(J)Ljava/lang/String;

    move-result-object v5

    .line 299
    invoke-virtual {v5, v4}, Ljava/lang/String;->compareTo(Ljava/lang/String;)I

    move-result v4

    if-gtz v4, :cond_4

    goto :goto_2

    .line 303
    :cond_4
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    move-result v2

    .line 304
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "delete name="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", success="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "FileTracer"

    invoke-static {v3, v2}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_5
    :goto_3
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    .line 163
    iget-object v0, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    invoke-virtual {v0, p1}, Lcom/tencent/open/log/f;->a(Ljava/lang/String;)I

    .line 166
    iget-object p1, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    invoke-virtual {p1}, Lcom/tencent/open/log/f;->a()I

    move-result p1

    invoke-virtual {p0}, Lcom/tencent/open/log/a;->c()Lcom/tencent/open/log/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/open/log/b;->c()I

    move-result v0

    if-lt p1, v0, :cond_0

    .line 168
    invoke-virtual {p0}, Lcom/tencent/open/log/a;->a()V

    :cond_0
    return-void
.end method

.method private b(Ljava/io/File;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return v0

    .line 313
    :cond_0
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p1

    .line 314
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "name="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "FileTracer"

    invoke-static {v2, v1}, Lcom/tencent/open/log/SLog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v0

    .line 323
    :cond_1
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0x2f

    if-eq v1, v2, :cond_2

    return v0

    :cond_2
    const-string v1, "com.tencent.mobileqq_connectSdk."

    .line 327
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, ".log"

    invoke-virtual {p1, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    const/4 v0, 0x1

    :cond_3
    return v0
.end method

.method private f()V
    .locals 3

    .line 208
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    iget-object v1, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    if-eq v0, v1, :cond_0

    return-void

    .line 213
    :cond_0
    iget-boolean v0, p0, Lcom/tencent/open/log/a;->i:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 218
    iput-boolean v0, p0, Lcom/tencent/open/log/a;->i:Z

    .line 221
    invoke-direct {p0}, Lcom/tencent/open/log/a;->i()V

    .line 225
    :try_start_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    invoke-direct {p0}, Lcom/tencent/open/log/a;->g()Ljava/io/Writer;

    move-result-object v1

    iget-object v2, p0, Lcom/tencent/open/log/a;->d:[C

    invoke-virtual {v0, v1, v2}, Lcom/tencent/open/log/f;->a(Ljava/io/Writer;[C)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 234
    :goto_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    invoke-virtual {v0}, Lcom/tencent/open/log/f;->b()V

    goto :goto_1

    :catchall_0
    move-exception v0

    goto :goto_2

    :catch_0
    move-exception v0

    :try_start_1
    const-string v1, "FileTracer"

    const-string v2, "flushBuffer exception"

    .line 229
    invoke-static {v1, v2, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :goto_1
    const/4 v0, 0x0

    .line 238
    iput-boolean v0, p0, Lcom/tencent/open/log/a;->i:Z

    return-void

    .line 234
    :goto_2
    iget-object v1, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    invoke-virtual {v1}, Lcom/tencent/open/log/f;->b()V

    .line 235
    throw v0
.end method

.method private g()Ljava/io/Writer;
    .locals 4

    .line 250
    invoke-virtual {p0}, Lcom/tencent/open/log/a;->c()Lcom/tencent/open/log/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tencent/open/log/b;->a()Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_2

    if-eqz v0, :cond_0

    .line 254
    iget-object v1, p0, Lcom/tencent/open/log/a;->c:Ljava/io/File;

    invoke-virtual {v0, v1}, Ljava/io/File;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    :cond_0
    iget-object v1, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    if-nez v1, :cond_2

    if-eqz v0, :cond_2

    .line 255
    :cond_1
    iput-object v0, p0, Lcom/tencent/open/log/a;->c:Ljava/io/File;

    .line 257
    invoke-direct {p0}, Lcom/tencent/open/log/a;->h()V

    .line 260
    :try_start_0
    new-instance v1, Ljava/io/FileWriter;

    iget-object v2, p0, Lcom/tencent/open/log/a;->c:Ljava/io/File;

    const/4 v3, 0x1

    invoke-direct {v1, v2, v3}, Ljava/io/FileWriter;-><init>(Ljava/io/File;Z)V

    iput-object v1, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v1, 0x0

    .line 262
    iput-object v1, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    const-string v1, "openSDK_LOG"

    const-string v2, "-->obtainFileWriter() app specific file permission denied"

    .line 263
    invoke-static {v1, v2}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    :goto_0
    invoke-direct {p0, v0}, Lcom/tencent/open/log/a;->a(Ljava/io/File;)V

    .line 269
    :cond_2
    iget-object v0, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    return-object v0
.end method

.method private h()V
    .locals 3

    .line 337
    :try_start_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    if-eqz v0, :cond_0

    .line 339
    iget-object v0, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    invoke-virtual {v0}, Ljava/io/FileWriter;->flush()V

    .line 340
    iget-object v0, p0, Lcom/tencent/open/log/a;->b:Ljava/io/FileWriter;

    invoke-virtual {v0}, Ljava/io/FileWriter;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "openSDK_LOG"

    const-string v2, "-->closeAppSpecificFileWriter() exception:"

    .line 345
    invoke-static {v1, v2, v0}, Lcom/tencent/open/log/SLog;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private i()V
    .locals 2

    .line 354
    monitor-enter p0

    .line 356
    :try_start_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    iget-object v1, p0, Lcom/tencent/open/log/a;->e:Lcom/tencent/open/log/f;

    if-ne v0, v1, :cond_0

    .line 358
    iget-object v0, p0, Lcom/tencent/open/log/a;->f:Lcom/tencent/open/log/f;

    iput-object v0, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    .line 359
    iget-object v0, p0, Lcom/tencent/open/log/a;->e:Lcom/tencent/open/log/f;

    iput-object v0, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    goto :goto_0

    .line 363
    :cond_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->e:Lcom/tencent/open/log/f;

    iput-object v0, p0, Lcom/tencent/open/log/a;->g:Lcom/tencent/open/log/f;

    .line 364
    iget-object v0, p0, Lcom/tencent/open/log/a;->f:Lcom/tencent/open/log/f;

    iput-object v0, p0, Lcom/tencent/open/log/a;->h:Lcom/tencent/open/log/f;

    .line 366
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method


# virtual methods
.method public a()V
    .locals 2

    .line 130
    iget-object v0, p0, Lcom/tencent/open/log/a;->k:Landroid/os/Handler;

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 132
    iget-object v0, p0, Lcom/tencent/open/log/a;->k:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 136
    :cond_0
    iget-object v0, p0, Lcom/tencent/open/log/a;->k:Landroid/os/Handler;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    return-void
.end method

.method public a(Lcom/tencent/open/log/b;)V
    .locals 0

    .line 387
    iput-object p1, p0, Lcom/tencent/open/log/a;->a:Lcom/tencent/open/log/b;

    return-void
.end method

.method public b()V
    .locals 1

    .line 148
    invoke-direct {p0}, Lcom/tencent/open/log/a;->h()V

    .line 150
    iget-object v0, p0, Lcom/tencent/open/log/a;->j:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->quit()Z

    return-void
.end method

.method public c()Lcom/tencent/open/log/b;
    .locals 1

    .line 376
    iget-object v0, p0, Lcom/tencent/open/log/a;->a:Lcom/tencent/open/log/b;

    return-object v0
.end method

.method protected doTrace(ILjava/lang/Thread;JLjava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 8

    .line 156
    invoke-virtual {p0}, Lcom/tencent/open/log/a;->e()Lcom/tencent/open/log/g;

    move-result-object v0

    move v1, p1

    move-object v2, p2

    move-wide v3, p3

    move-object v5, p5

    move-object v6, p6

    move-object v7, p7

    invoke-virtual/range {v0 .. v7}, Lcom/tencent/open/log/g;->a(ILjava/lang/Thread;JLjava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    .line 158
    invoke-direct {p0, p1}, Lcom/tencent/open/log/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method public handleMessage(Landroid/os/Message;)Z
    .locals 1

    .line 175
    iget p1, p1, Landroid/os/Message;->what:I

    const/16 v0, 0x400

    if-eq p1, v0, :cond_0

    goto :goto_0

    .line 179
    :cond_0
    invoke-direct {p0}, Lcom/tencent/open/log/a;->f()V

    :goto_0
    const/4 p1, 0x1

    return p1
.end method
