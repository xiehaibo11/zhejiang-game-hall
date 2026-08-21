.class public Lcom/tkay/expressad/mbbanner/a/d/b;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Landroid/content/Context;

.field private c:I

.field private d:Lcom/tkay/expressad/mbbanner/a/b/e;

.field private e:Lcom/tkay/expressad/mbbanner/a/e/a;

.field private f:Lcom/tkay/expressad/mbbanner/a/c/b;

.field private g:Lcom/tkay/expressad/mbbanner/a/c/d;

.field private volatile h:Z

.field private i:Ljava/util/Timer;

.field private volatile j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private volatile k:Z

.field private volatile l:Z

.field private volatile m:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/tkay/expressad/mbbanner/a/d/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/mbbanner/a/d/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/mbbanner/a/b/e;Lcom/tkay/expressad/mbbanner/a/c/b;Lcom/tkay/expressad/mbbanner/a/e/a;)V
    .locals 2

    .line 56
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 39
    iput v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->c:I

    .line 45
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    .line 46
    new-instance v1, Ljava/util/Timer;

    invoke-direct {v1}, Ljava/util/Timer;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->i:Ljava/util/Timer;

    .line 48
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->j:Ljava/util/List;

    .line 49
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->k:Z

    .line 50
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->l:Z

    .line 52
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->m:Z

    .line 57
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->b:Landroid/content/Context;

    .line 58
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    .line 59
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    .line 60
    iput-object p4, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    return-void
.end method

.method static synthetic a()Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/tkay/expressad/mbbanner/a/d/b;->a:Ljava/lang/String;

    return-object v0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    .line 357
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_5

    const/4 v0, 0x0

    .line 360
    :try_start_0
    sget-object v2, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v2

    .line 361
    invoke-static {p2}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 362
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 363
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, ".html"

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 364
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 365
    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v2

    invoke-virtual {v2}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    .line 366
    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 367
    :try_start_1
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/io/FileOutputStream;->write([B)V

    .line 368
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->flush()V

    .line 369
    invoke-virtual {v4}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 375
    :try_start_2
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 378
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    move-object v1, v0

    goto :goto_2

    :catchall_0
    move-exception p1

    move-object v0, v2

    goto :goto_4

    :catch_1
    move-exception v0

    move-object v5, v2

    move-object v2, v0

    move-object v0, v5

    goto :goto_1

    :catchall_1
    move-exception p1

    goto :goto_4

    :catch_2
    move-exception v2

    .line 371
    :goto_1
    :try_start_3
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_1

    .line 375
    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_2

    :catch_3
    move-exception v0

    .line 378
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 382
    :cond_1
    :goto_2
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 383
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    const/4 v3, 0x2

    if-eqz v2, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_3

    :cond_2
    const/4 v0, 0x1

    .line 387
    invoke-virtual {p0, p1, v3, p2, v0}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    goto :goto_6

    :cond_3
    :goto_3
    const/4 v0, 0x0

    .line 384
    invoke-virtual {p0, p1, v3, p2, v0}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    goto :goto_6

    :goto_4
    if-eqz v0, :cond_4

    .line 375
    :try_start_5
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    :catch_4
    move-exception p2

    .line 378
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 380
    :cond_4
    :goto_5
    throw p1

    :cond_5
    :goto_6
    return-object v1
.end method

.method private a(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/d;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 292
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p1, :cond_7

    .line 4374
    :try_start_0
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v1, :cond_7

    .line 5374
    iget-object v1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 295
    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_7

    .line 6374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 298
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getNeedShowList total campaign:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    .line 302
    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_6

    .line 303
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_5

    .line 304
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->O()I

    move-result v3

    const/16 v4, 0x63

    if-eq v3, v4, :cond_5

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 305
    :cond_0
    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v3

    const/4 v4, 0x1

    if-eqz v3, :cond_2

    .line 306
    iget-object v3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->b:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    move v3, v4

    goto :goto_1

    :cond_1
    const/4 v3, 0x2

    :goto_1
    invoke-virtual {v2, v3}, Lcom/tkay/expressad/foundation/d/c;->i(I)V

    .line 308
    :cond_2
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ae()I

    move-result v3

    if-eq v3, v4, :cond_4

    iget-object v3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->b:Landroid/content/Context;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->ba()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_2

    .line 313
    :cond_3
    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->a(Lcom/tkay/expressad/foundation/d/c;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 314
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 310
    :cond_4
    :goto_2
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_5
    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 322
    :cond_6
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "getNeedShowList return these campaign with video res:"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 323
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p1

    .line 326
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_7
    :goto_4
    return-object v0
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 64
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->m:Z

    if-nez v0, :cond_1

    .line 69
    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->k:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->l:Z

    if-eqz v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x1

    .line 71
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    .line 72
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->m:Z

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->i:Ljava/util/Timer;

    invoke-virtual {v0}, Ljava/util/Timer;->cancel()V

    .line 75
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V

    .line 76
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/d;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private a(Ljava/lang/String;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    if-eqz p2, :cond_1

    .line 337
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 338
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_0
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    .line 339
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 341
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->j:Ljava/util/List;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 342
    new-instance v1, Lcom/tkay/expressad/mbbanner/a/c/g;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/mbbanner/a/c/g;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V

    .line 344
    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->b:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/mbbanner/a/d/b;)Z
    .locals 0

    .line 35
    iget-boolean p0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    return p0
.end method

.method private b()Ljava/lang/String;
    .locals 1

    .line 449
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v0}, Lcom/tkay/expressad/mbbanner/a/b/e;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private b(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2

    .line 415
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/b$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b$2;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 441
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x1

    .line 84
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->b(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/d;->a(Ljava/lang/String;)V

    return-void
.end method

.method private b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 400
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 401
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/c/f;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/mbbanner/a/c/f;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V

    .line 402
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p1

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/videocommon/b/g;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    :cond_0
    return-void
.end method

.method private b(Ljava/lang/String;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 486
    iget v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->c:I

    if-eqz p2, :cond_0

    .line 488
    :try_start_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 489
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    add-int/2addr v0, p2

    .line 492
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {p2}, Lcom/tkay/expressad/mbbanner/a/b/e;->c()I

    move-result p2

    if-le v0, p2, :cond_1

    const/4 v0, 0x0

    .line 498
    :cond_1
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 499
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/mbbanner/a/b/e;->a(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 502
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/mbbanner/a/d/b;)Z
    .locals 1

    const/4 v0, 0x1

    .line 35
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    return v0
.end method

.method private c()I
    .locals 3

    const/4 v0, 0x0

    .line 466
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v1}, Lcom/tkay/expressad/mbbanner/a/b/e;->b()I

    move-result v1

    .line 468
    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v2}, Lcom/tkay/expressad/mbbanner/a/b/e;->c()I

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-le v1, v2, :cond_0

    goto :goto_0

    :cond_0
    move v0, v1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 474
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return v0
.end method

.method static synthetic c(Lcom/tkay/expressad/mbbanner/a/d/b;)Landroid/content/Context;
    .locals 0

    .line 35
    iget-object p0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->b:Landroid/content/Context;

    return-object p0
.end method

.method private c(Ljava/lang/String;)V
    .locals 3

    .line 123
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/b$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b$1;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V

    .line 132
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->i:Ljava/util/Timer;

    const-wide/32 v1, 0xea60

    invoke-virtual {p1, v0, v1, v2}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    return-void
.end method

.method private d(Ljava/lang/String;)V
    .locals 1

    .line 456
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/mbbanner/a/b/e;->a(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;ILjava/lang/String;Z)V
    .locals 1

    const/4 v0, 0x1

    if-nez p4, :cond_1

    const/4 p3, -0x1

    if-ne p2, p3, :cond_0

    .line 93
    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, " unitId ="

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, " --> time out!"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 95
    :cond_0
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->i:Ljava/util/Timer;

    invoke-virtual {p2}, Ljava/util/Timer;->cancel()V

    .line 1084
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->h:Z

    .line 1085
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    iget-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    invoke-virtual {p2, p3, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->b(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;)V

    .line 1086
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/mbbanner/a/c/d;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    if-ne p2, v0, :cond_3

    .line 102
    monitor-enter p0

    .line 103
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->j:Ljava/util/List;

    invoke-interface {p2, p3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 104
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->j:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p2

    if-nez p2, :cond_2

    .line 105
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;)V

    .line 107
    :cond_2
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    :cond_3
    const/4 p3, 0x2

    if-ne p2, p3, :cond_4

    .line 111
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->l:Z

    .line 112
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;)V

    return-void

    :cond_4
    const/4 p3, 0x3

    if-ne p2, p3, :cond_5

    .line 116
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->k:Z

    .line 117
    invoke-direct {p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method protected final a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/expressad/mbbanner/a/c/d;)V
    .locals 5

    .line 211
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    if-nez p2, :cond_0

    .line 214
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    iget-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    const-string v0, "campaignUnit is NULL!"

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/mbbanner/a/c/d;->a(Ljava/lang/String;)V

    return-void

    .line 220
    :cond_0
    invoke-direct {p0, p2}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Lcom/tkay/expressad/foundation/d/d;)Ljava/util/List;

    move-result-object p3

    .line 1415
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/tkay/expressad/mbbanner/a/d/b$2;

    invoke-direct {v1, p0, p2}, Lcom/tkay/expressad/mbbanner/a/d/b$2;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Lcom/tkay/expressad/foundation/d/d;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 1441
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    .line 223
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 225
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->e:Lcom/tkay/expressad/mbbanner/a/e/a;

    iget-object p3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->f:Lcom/tkay/expressad/mbbanner/a/c/b;

    const-string v0, "APP ALREADY INSTALLED"

    invoke-virtual {p2, p3, v0, p1}, Lcom/tkay/expressad/mbbanner/a/e/a;->a(Lcom/tkay/expressad/mbbanner/a/c/b;Ljava/lang/String;Ljava/lang/String;)V

    .line 226
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->g:Lcom/tkay/expressad/mbbanner/a/c/d;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/mbbanner/a/c/d;->a(Ljava/lang/String;)V

    return-void

    .line 2123
    :cond_1
    new-instance v0, Lcom/tkay/expressad/mbbanner/a/d/b$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/mbbanner/a/d/b$1;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V

    .line 2132
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->i:Ljava/util/Timer;

    const-wide/32 v2, 0xea60

    invoke-virtual {v1, v0, v2, v3}, Ljava/util/Timer;->schedule(Ljava/util/TimerTask;J)V

    .line 236
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/d;->c()Ljava/lang/String;

    move-result-object p2

    .line 2456
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v0, p2}, Lcom/tkay/expressad/mbbanner/a/b/e;->a(Ljava/lang/String;)V

    .line 2486
    iget p2, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->c:I

    const/4 v0, 0x0

    .line 2488
    :try_start_0
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 2489
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    add-int/2addr p2, v1

    .line 2492
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v1}, Lcom/tkay/expressad/mbbanner/a/b/e;->c()I

    move-result v1

    if-le p2, v1, :cond_3

    move p2, v0

    .line 2498
    :cond_3
    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 2499
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->d:Lcom/tkay/expressad/mbbanner/a/b/e;

    invoke-virtual {v1, p2}, Lcom/tkay/expressad/mbbanner/a/b/e;->a(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 2502
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V

    .line 242
    :cond_4
    :goto_0
    invoke-interface {p3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/foundation/d/c;

    .line 244
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 245
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const/4 v3, 0x1

    if-nez v2, :cond_6

    .line 3400
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 3401
    new-instance v2, Lcom/tkay/expressad/mbbanner/a/c/f;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/mbbanner/a/c/f;-><init>(Lcom/tkay/expressad/mbbanner/a/d/b;Ljava/lang/String;)V

    .line 3402
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v4

    invoke-virtual {v4, v1, v2}, Lcom/tkay/expressad/videocommon/b/g;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    .line 249
    :cond_5
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_8

    .line 250
    :goto_1
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_8

    .line 251
    invoke-interface {p3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->d(Ljava/lang/String;)V

    .line 252
    invoke-interface {p3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 256
    :cond_6
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p2

    .line 257
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    .line 258
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 261
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_8

    .line 262
    :goto_2
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v2

    if-ge v0, v2, :cond_8

    .line 263
    invoke-interface {p3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/d/c;->e(Ljava/lang/String;)V

    .line 264
    invoke-interface {p3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    const-string v3, "<MBTPLMARK>"

    invoke-virtual {p2, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/foundation/d/c;->a(Z)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 268
    :cond_7
    iput-boolean v3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->l:Z

    .line 269
    iput-boolean v3, p0, Lcom/tkay/expressad/mbbanner/a/d/b;->k:Z

    .line 279
    :cond_8
    invoke-direct {p0, p1, p3}, Lcom/tkay/expressad/mbbanner/a/d/b;->a(Ljava/lang/String;Ljava/util/List;)V

    return-void
.end method
