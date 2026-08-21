.class public Lcom/tkay/core/common/k/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/core/common/k/b;


# instance fields
.field private final a:Ljava/lang/String;

.field private c:I

.field private d:I

.field private e:J

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Landroid/content/Context;

.field private i:Ljava/io/File;

.field private j:Ljava/util/concurrent/atomic/AtomicInteger;

.field private k:Z

.field private l:Ljava/lang/String;

.field private m:Lcom/tkay/core/common/h/k;

.field private n:Lcom/tkay/core/common/h/a/c$a;

.field private o:Ljava/lang/Object;


# direct methods
.method private constructor <init>()V
    .locals 2

    .line 120
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "Agent"

    .line 44
    iput-object v0, p0, Lcom/tkay/core/common/k/b;->a:Ljava/lang/String;

    const/4 v0, 0x5

    .line 48
    iput v0, p0, Lcom/tkay/core/common/k/b;->c:I

    const/16 v0, 0xa

    .line 49
    iput v0, p0, Lcom/tkay/core/common/k/b;->d:I

    const-wide/32 v0, 0x1b7740

    .line 51
    iput-wide v0, p0, Lcom/tkay/core/common/k/b;->e:J

    const-string v0, ""

    .line 53
    iput-object v0, p0, Lcom/tkay/core/common/k/b;->f:Ljava/lang/String;

    .line 54
    iput-object v0, p0, Lcom/tkay/core/common/k/b;->g:Ljava/lang/String;

    const/4 v1, 0x0

    .line 61
    iput-boolean v1, p0, Lcom/tkay/core/common/k/b;->k:Z

    .line 63
    iput-object v0, p0, Lcom/tkay/core/common/k/b;->l:Ljava/lang/String;

    .line 65
    new-instance v0, Lcom/tkay/core/common/k/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/k/b$1;-><init>(Lcom/tkay/core/common/k/b;)V

    iput-object v0, p0, Lcom/tkay/core/common/k/b;->m:Lcom/tkay/core/common/h/k;

    .line 94
    new-instance v0, Lcom/tkay/core/common/k/b$2;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/k/b$2;-><init>(Lcom/tkay/core/common/k/b;)V

    iput-object v0, p0, Lcom/tkay/core/common/k/b;->n:Lcom/tkay/core/common/h/a/c$a;

    .line 124
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/k/b;->o:Ljava/lang/Object;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/k/b;)Landroid/content/Context;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    return-object p0
.end method

.method public static a()Lcom/tkay/core/common/k/b;
    .locals 2

    .line 111
    sget-object v0, Lcom/tkay/core/common/k/b;->b:Lcom/tkay/core/common/k/b;

    if-nez v0, :cond_1

    .line 112
    const-class v0, Lcom/tkay/core/common/k/b;

    monitor-enter v0

    .line 113
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/k/b;->b:Lcom/tkay/core/common/k/b;

    if-nez v1, :cond_0

    .line 114
    new-instance v1, Lcom/tkay/core/common/k/b;

    invoke-direct {v1}, Lcom/tkay/core/common/k/b;-><init>()V

    sput-object v1, Lcom/tkay/core/common/k/b;->b:Lcom/tkay/core/common/k/b;

    .line 115
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 117
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/k/b;->b:Lcom/tkay/core/common/k/b;

    return-object v0
.end method

.method private declared-synchronized a(I)V
    .locals 6

    monitor-enter p0

    const/4 v0, 0x0

    .line 339
    :try_start_0
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->g:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 340
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_0

    .line 341
    invoke-virtual {v1}, Ljava/io/File;->createNewFile()Z

    .line 343
    :cond_0
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    iget-object v4, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-direct {v3, v4}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_a
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_7
    .catch Ljava/lang/StackOverflowError; {:try_start_0 .. :try_end_0} :catch_7
    .catch Ljava/lang/Error; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 344
    :try_start_1
    new-instance v0, Ljava/io/FileWriter;

    invoke-direct {v0, v1}, Ljava/io/FileWriter;-><init>(Ljava/io/File;)V

    const/4 v3, 0x0

    move v4, v3

    .line 348
    :cond_1
    :goto_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_2

    add-int/lit8 v4, v4, 0x1

    if-le v4, p1, :cond_1

    .line 352
    invoke-virtual {v0, v5}, Ljava/io/FileWriter;->append(Ljava/lang/CharSequence;)Ljava/io/Writer;

    const-string v5, "\n"

    .line 353
    invoke-virtual {v0, v5}, Ljava/io/FileWriter;->append(Ljava/lang/CharSequence;)Ljava/io/Writer;

    goto :goto_0

    .line 358
    :cond_2
    invoke-virtual {v0}, Ljava/io/FileWriter;->flush()V

    .line 359
    invoke-virtual {v0}, Ljava/io/FileWriter;->close()V

    .line 360
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V

    .line 362
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    iget-object v4, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v4}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v4

    sub-int/2addr v4, p1

    if-gez v4, :cond_3

    goto :goto_1

    :cond_3
    iget-object v3, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    sub-int/2addr v3, p1

    :goto_1
    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    .line 363
    iget-object p1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    .line 364
    iget-object p1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-virtual {v1, p1}, Ljava/io/File;->renameTo(Ljava/io/File;)Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 383
    :try_start_2
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 389
    monitor-exit p0

    return-void

    .line 390
    :catch_0
    monitor-exit p0

    return-void

    :catchall_0
    move-object v0, v2

    goto :goto_2

    :catch_1
    move-object v0, v2

    goto :goto_4

    :catch_2
    move-object v0, v2

    goto :goto_6

    :catch_3
    move-object v0, v2

    goto :goto_8

    :catchall_1
    :goto_2
    if-eqz v0, :cond_4

    .line 383
    :try_start_3
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_4
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    goto :goto_3

    .line 390
    :catch_4
    monitor-exit p0

    return-void

    .line 389
    :cond_4
    :goto_3
    monitor-exit p0

    return-void

    :catch_5
    :goto_4
    if-eqz v0, :cond_5

    .line 383
    :try_start_4
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_6
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    goto :goto_5

    .line 390
    :catch_6
    monitor-exit p0

    return-void

    .line 389
    :cond_5
    :goto_5
    monitor-exit p0

    return-void

    .line 373
    :catch_7
    :goto_6
    :try_start_5
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v0, :cond_6

    .line 383
    :try_start_6
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_6
    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_6} :catch_8
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_7

    .line 390
    :catch_8
    monitor-exit p0

    return-void

    .line 389
    :cond_6
    :goto_7
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    if-eqz v0, :cond_7

    .line 383
    :try_start_7
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_9
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    .line 390
    :catch_9
    :cond_7
    :try_start_8
    throw p1
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    :catch_a
    :goto_8
    if-eqz v0, :cond_8

    .line 383
    :try_start_9
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_9
    .catch Ljava/io/IOException; {:try_start_9 .. :try_end_9} :catch_b
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_9

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1

    .line 390
    :catch_b
    monitor-exit p0

    return-void

    .line 389
    :cond_8
    :goto_9
    monitor-exit p0

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/k/b;I)V
    .locals 0

    .line 42
    invoke-direct {p0, p1}, Lcom/tkay/core/common/k/b;->a(I)V

    return-void
.end method

.method private declared-synchronized a(Z)V
    .locals 5

    monitor-enter p0

    .line 273
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    if-nez v0, :cond_0

    .line 274
    monitor-exit p0

    return-void

    .line 277
    :cond_0
    :try_start_1
    iget-boolean v0, p0, Lcom/tkay/core/common/k/b;->k:Z

    if-nez v0, :cond_9

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-eqz p1, :cond_9

    iget-object p1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result p1

    iget v0, p0, Lcom/tkay/core/common/k/b;->c:I

    if-lt p1, v0, :cond_9

    :cond_1
    const/4 p1, 0x1

    .line 279
    iput-boolean p1, p0, Lcom/tkay/core/common/k/b;->k:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 283
    :try_start_2
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    iget-object v4, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-direct {v3, v4}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_4
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_4
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 286
    :try_start_3
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    move v3, v1

    .line 287
    :goto_0
    iget v4, p0, Lcom/tkay/core/common/k/b;->d:I

    if-ge v3, v4, :cond_2

    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 289
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 295
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v3

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v3

    if-eqz v3, :cond_4

    .line 297
    invoke-virtual {v3}, Lcom/tkay/core/c/a;->u()I

    move-result v4

    if-eq v4, p1, :cond_3

    .line 304
    new-instance p1, Lcom/tkay/core/common/h/b;

    iget-object v4, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-virtual {v3}, Lcom/tkay/core/c/a;->u()I

    move-result v3

    invoke-direct {p1, v4, v3, v0}, Lcom/tkay/core/common/h/b;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 305
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->m:Lcom/tkay/core/common/h/k;

    invoke-virtual {p1, v1, v0}, Lcom/tkay/core/common/h/b;->a(ILcom/tkay/core/common/h/k;)V

    goto :goto_1

    .line 299
    :cond_3
    new-instance v4, Lcom/tkay/core/common/h/a/a;

    invoke-direct {v4, v0}, Lcom/tkay/core/common/h/a/a;-><init>(Ljava/util/List;)V

    .line 300
    invoke-virtual {v3}, Lcom/tkay/core/c/a;->t()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, p1, v0}, Lcom/tkay/core/common/h/a/a;->a(ILjava/lang/String;)V

    .line 301
    iget-object p1, p0, Lcom/tkay/core/common/k/b;->n:Lcom/tkay/core/common/h/a/c$a;

    invoke-virtual {v4, p1}, Lcom/tkay/core/common/h/a/a;->a(Lcom/tkay/core/common/h/a/c$a;)V

    goto :goto_1

    .line 309
    :cond_4
    new-instance p1, Lcom/tkay/core/common/h/b;

    iget-object v3, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-direct {p1, v3, v1, v0}, Lcom/tkay/core/common/h/b;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 310
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->m:Lcom/tkay/core/common/h/k;

    invoke-virtual {p1, v1, v0}, Lcom/tkay/core/common/h/b;->a(ILcom/tkay/core/common/h/k;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/StackOverflowError; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 326
    :goto_1
    :try_start_4
    invoke-virtual {v2}, Ljava/io/BufferedReader;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 330
    monitor-exit p0

    return-void

    .line 331
    :catch_0
    monitor-exit p0

    return-void

    :catchall_0
    move-object v0, v2

    goto :goto_2

    :catch_1
    move-object v0, v2

    goto :goto_4

    :catch_2
    move-object v0, v2

    goto :goto_6

    .line 322
    :catchall_1
    :goto_2
    :try_start_5
    iput-boolean v1, p0, Lcom/tkay/core/common/k/b;->k:Z
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    if-eqz v0, :cond_5

    .line 326
    :try_start_6
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_3

    goto :goto_3

    .line 331
    :catch_3
    monitor-exit p0

    return-void

    .line 330
    :cond_5
    :goto_3
    monitor-exit p0

    return-void

    .line 319
    :catch_4
    :goto_4
    :try_start_7
    iput-boolean v1, p0, Lcom/tkay/core/common/k/b;->k:Z

    .line 320
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    if-eqz v0, :cond_6

    .line 326
    :try_start_8
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_5
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    goto :goto_5

    .line 331
    :catch_5
    monitor-exit p0

    return-void

    .line 330
    :cond_6
    :goto_5
    monitor-exit p0

    return-void

    .line 314
    :catch_6
    :goto_6
    :try_start_9
    iput-boolean v1, p0, Lcom/tkay/core/common/k/b;->k:Z
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_2

    if-eqz v0, :cond_7

    .line 326
    :try_start_a
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_7
    .catchall {:try_start_a .. :try_end_a} :catchall_3

    goto :goto_7

    .line 331
    :catch_7
    monitor-exit p0

    return-void

    .line 330
    :cond_7
    :goto_7
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    if-eqz v0, :cond_8

    .line 326
    :try_start_b
    invoke-virtual {v0}, Ljava/io/BufferedReader;->close()V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_8
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    .line 331
    :catch_8
    :cond_8
    :try_start_c
    throw p1
    :try_end_c
    .catchall {:try_start_c .. :try_end_c} :catchall_3

    .line 333
    :cond_9
    monitor-exit p0

    return-void

    :catchall_3
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/core/common/k/b;Z)Z
    .locals 0

    .line 42
    iput-boolean p1, p0, Lcom/tkay/core/common/k/b;->k:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/core/common/k/b;)J
    .locals 2

    .line 42
    iget-wide v0, p0, Lcom/tkay/core/common/k/b;->e:J

    return-wide v0
.end method

.method static synthetic c(Lcom/tkay/core/common/k/b;)Ljava/util/concurrent/atomic/AtomicInteger;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/core/common/k/b;)I
    .locals 0

    .line 42
    iget p0, p0, Lcom/tkay/core/common/k/b;->c:I

    return p0
.end method

.method static synthetic e(Lcom/tkay/core/common/k/b;)Z
    .locals 0

    .line 42
    iget-boolean p0, p0, Lcom/tkay/core/common/k/b;->k:Z

    return p0
.end method

.method static synthetic f(Lcom/tkay/core/common/k/b;)Ljava/io/File;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    return-object p0
.end method

.method static synthetic g(Lcom/tkay/core/common/k/b;)I
    .locals 0

    .line 42
    iget p0, p0, Lcom/tkay/core/common/k/b;->d:I

    return p0
.end method

.method static synthetic h(Lcom/tkay/core/common/k/b;)Lcom/tkay/core/common/h/a/c$a;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/core/common/k/b;->n:Lcom/tkay/core/common/h/a/c$a;

    return-object p0
.end method

.method static synthetic i(Lcom/tkay/core/common/k/b;)Lcom/tkay/core/common/h/k;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/core/common/k/b;->m:Lcom/tkay/core/common/h/k;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/content/Context;)V
    .locals 7

    .line 127
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->o:Ljava/lang/Object;

    monitor-enter v0

    .line 128
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    if-nez v1, :cond_b

    if-nez p1, :cond_0

    goto/16 :goto_8

    .line 132
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/k/b;->l:Ljava/lang/String;

    .line 133
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/4 p1, 0x0

    .line 136
    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "tkay_agent_log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/k/b;->f:Ljava/lang/String;

    .line 137
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "tkay_temp_log"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/k/b;->g:Ljava/lang/String;

    .line 139
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    if-nez v1, :cond_2

    .line 140
    new-instance v1, Ljava/io/File;

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->f:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    .line 141
    invoke-virtual {v1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    .line 142
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getParentFile()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    .line 144
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_2

    .line 145
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->createNewFile()Z
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_5
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :cond_2
    const/4 v1, 0x0

    .line 152
    :try_start_2
    new-instance v2, Ljava/io/LineNumberReader;

    new-instance v3, Ljava/io/FileReader;

    iget-object v4, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    invoke-direct {v3, v4}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/LineNumberReader;-><init>(Ljava/io/Reader;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-wide v3, 0x7fffffffffffffffL

    .line 153
    :try_start_3
    invoke-virtual {v2, v3, v4}, Ljava/io/LineNumberReader;->skip(J)J

    .line 154
    invoke-virtual {v2}, Ljava/io/LineNumberReader;->getLineNumber()I

    move-result v1

    .line 155
    iget-object v3, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v3, :cond_3

    .line 156
    new-instance v3, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v3, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v3, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 158
    :cond_3
    invoke-virtual {v2}, Ljava/io/LineNumberReader;->close()V

    .line 159
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "init file log count:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v3}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 167
    :try_start_4
    invoke-virtual {v2}, Ljava/io/LineNumberReader;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_4 .. :try_end_4} :catch_5
    .catch Ljava/lang/Error; {:try_start_4 .. :try_end_4} :catch_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    goto :goto_2

    :catchall_0
    move-exception v1

    goto :goto_0

    :catch_0
    move-object v1, v2

    goto :goto_1

    :catchall_1
    move-exception v2

    move-object v6, v2

    move-object v2, v1

    move-object v1, v6

    :goto_0
    if-eqz v2, :cond_4

    :try_start_5
    invoke-virtual {v2}, Ljava/io/LineNumberReader;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_1
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_5 .. :try_end_5} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_5 .. :try_end_5} :catch_5
    .catch Ljava/lang/Error; {:try_start_5 .. :try_end_5} :catch_4
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 174
    :catch_1
    :cond_4
    :try_start_6
    throw v1
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_6 .. :try_end_6} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_6 .. :try_end_6} :catch_5
    .catch Ljava/lang/Error; {:try_start_6 .. :try_end_6} :catch_4
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catch_2
    :goto_1
    if-eqz v1, :cond_5

    .line 167
    :try_start_7
    invoke-virtual {v1}, Ljava/io/LineNumberReader;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_3
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_7 .. :try_end_7} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_7 .. :try_end_7} :catch_5
    .catch Ljava/lang/Error; {:try_start_7 .. :try_end_7} :catch_4
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    .line 176
    :catch_3
    :cond_5
    :goto_2
    :try_start_8
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_6

    .line 177
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 180
    :cond_6
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->l:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v1

    .line 181
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->ad()I

    move-result v2

    if-eqz v2, :cond_7

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->ad()I

    move-result v2

    goto :goto_3

    :cond_7
    iget v2, p0, Lcom/tkay/core/common/k/b;->c:I

    :goto_3
    iput v2, p0, Lcom/tkay/core/common/k/b;->c:I

    mul-int/lit8 v2, v2, 0x2

    .line 182
    iput v2, p0, Lcom/tkay/core/common/k/b;->d:I

    .line 183
    invoke-virtual {v1}, Lcom/tkay/core/c/a;->af()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-eqz v2, :cond_8

    invoke-virtual {v1}, Lcom/tkay/core/c/a;->af()J

    move-result-wide v1

    goto :goto_4

    :cond_8
    iget-wide v1, p0, Lcom/tkay/core/common/k/b;->e:J

    :goto_4
    iput-wide v1, p0, Lcom/tkay/core/common/k/b;->e:J

    .line 185
    invoke-virtual {p0}, Lcom/tkay/core/common/k/b;->b()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_8 .. :try_end_8} :catch_5
    .catch Ljava/lang/StackOverflowError; {:try_start_8 .. :try_end_8} :catch_5
    .catch Ljava/lang/Error; {:try_start_8 .. :try_end_8} :catch_4
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    .line 199
    :try_start_9
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_a

    .line 200
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    :goto_5
    iput-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    goto :goto_7

    :catchall_2
    move-exception v1

    goto :goto_6

    .line 199
    :catch_4
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_a

    .line 200
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    goto :goto_5

    .line 193
    :catch_5
    :try_start_a
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_2

    .line 199
    :try_start_b
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_a

    .line 200
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    goto :goto_5

    .line 199
    :goto_6
    iget-object v2, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v2, :cond_9

    .line 200
    new-instance v2, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v2, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    iput-object v2, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    .line 202
    :cond_9
    throw v1

    .line 199
    :catch_6
    iget-object v1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v1, :cond_a

    .line 200
    new-instance v1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v1, p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    goto :goto_5

    .line 203
    :cond_a
    :goto_7
    monitor-exit v0

    return-void

    .line 129
    :cond_b
    :goto_8
    monitor-exit v0
    :try_end_b
    .catchall {:try_start_b .. :try_end_b} :catchall_3

    return-void

    :catchall_3
    move-exception p1

    .line 203
    monitor-exit v0

    throw p1
.end method

.method protected final declared-synchronized a(Lcom/tkay/core/common/f/g;Z)V
    .locals 4

    monitor-enter p0

    .line 212
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    if-nez v0, :cond_1

    .line 213
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/k/b;->a(Landroid/content/Context;)V

    .line 216
    :cond_1
    iget-object v0, p0, Lcom/tkay/core/common/k/b;->h:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/k/b;->l:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 217
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ad()I

    move-result v1

    if-eqz v1, :cond_2

    invoke-virtual {v0}, Lcom/tkay/core/c/a;->ad()I

    move-result v1

    goto :goto_0

    :cond_2
    iget v1, p0, Lcom/tkay/core/common/k/b;->c:I

    :goto_0
    iput v1, p0, Lcom/tkay/core/common/k/b;->c:I

    mul-int/lit8 v1, v1, 0x2

    .line 218
    iput v1, p0, Lcom/tkay/core/common/k/b;->d:I

    .line 219
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->af()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/k/b;->e:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v0, 0x0

    .line 223
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/g;->a()Lorg/json/JSONObject;

    move-result-object p1

    .line 225
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 231
    new-instance v1, Ljava/io/FileWriter;

    iget-object v2, p0, Lcom/tkay/core/common/k/b;->i:Ljava/io/File;

    const/4 v3, 0x1

    invoke-direct {v1, v2, v3}, Ljava/io/FileWriter;-><init>(Ljava/io/File;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_6
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/StackOverflowError; {:try_start_1 .. :try_end_1} :catch_4
    .catch Ljava/lang/Error; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 233
    :try_start_2
    invoke-virtual {v1, p1}, Ljava/io/FileWriter;->append(Ljava/lang/CharSequence;)Ljava/io/Writer;

    const-string p1, "\n"

    .line 234
    invoke-virtual {v1, p1}, Ljava/io/FileWriter;->append(Ljava/lang/CharSequence;)Ljava/io/Writer;

    .line 235
    invoke-virtual {v1}, Ljava/io/FileWriter;->flush()V

    .line 237
    invoke-virtual {v1}, Ljava/io/FileWriter;->close()V

    .line 240
    iget-object p1, p0, Lcom/tkay/core/common/k/b;->j:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {p1}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catch Ljava/lang/OutOfMemoryError; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/StackOverflowError; {:try_start_2 .. :try_end_2} :catch_1
    .catch Ljava/lang/Error; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 255
    :try_start_3
    invoke-virtual {v1}, Ljava/io/FileWriter;->close()V

    goto :goto_6

    :catchall_0
    move-exception p1

    move-object v0, v1

    goto :goto_4

    :catch_0
    move-object v0, v1

    goto :goto_1

    :catch_1
    move-object v0, v1

    goto :goto_3

    :catch_2
    move-object v0, v1

    goto :goto_5

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_3
    :goto_1
    if-eqz v0, :cond_4

    :goto_2
    invoke-virtual {v0}, Ljava/io/FileWriter;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_7
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_6

    .line 247
    :catch_4
    :goto_3
    :try_start_4
    invoke-static {}, Ljava/lang/System;->gc()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v0, :cond_4

    goto :goto_2

    :goto_4
    if-eqz v0, :cond_3

    .line 255
    :try_start_5
    invoke-virtual {v0}, Ljava/io/FileWriter;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 262
    :catch_5
    :cond_3
    :try_start_6
    throw p1

    :catch_6
    :goto_5
    if-eqz v0, :cond_4

    goto :goto_2

    .line 264
    :catch_7
    :cond_4
    :goto_6
    invoke-direct {p0, p2}, Lcom/tkay/core/common/k/b;->a(Z)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    .line 266
    monitor-exit p0

    return-void

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b()V
    .locals 2

    .line 398
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/k/b$3;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/k/b$3;-><init>(Lcom/tkay/core/common/k/b;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
