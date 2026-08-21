.class public Lcom/tkay/core/common/res/d;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "about:blank"

.field private static final e:Ljava/lang/String; = "tkay_internal_resouce"

.field private static final f:Ljava/lang/String; = "tkay_custom_resouce"

.field private static final g:Ljava/lang/String; = "tkay_internal_extra_resource"

.field private static final h:Ljava/lang/String; = "tkay_internal_video_resource"

.field private static final i:Ljava/lang/String; = "tkay_internal_html_resouce"

.field private static volatile j:Lcom/tkay/core/common/res/d;


# instance fields
.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Integer;",
            "Lcom/tkay/core/common/res/a;",
            ">;"
        }
    .end annotation
.end field

.field final c:J

.field private final d:Ljava/lang/String;

.field private k:Landroid/content/Context;

.field private l:Ljava/io/File;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/res/d;->d:Ljava/lang/String;

    .line 51
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/res/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    const-wide/32 v0, 0xa4cb800

    .line 52
    iput-wide v0, p0, Lcom/tkay/core/common/res/d;->c:J

    .line 56
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/res/d;->k:Landroid/content/Context;

    .line 57
    invoke-static {p1}, Lcom/tkay/core/common/l/j;->a(Landroid/content/Context;)Ljava/io/File;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    return-void
.end method

.method private declared-synchronized a(ILjava/io/File;)Lcom/tkay/core/common/res/a;
    .locals 3

    monitor-enter p0

    .line 328
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/res/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v0, :cond_0

    .line 331
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/b/m;->d(I)J

    move-result-wide v1

    invoke-static {p2, v1, v2}, Lcom/tkay/core/common/res/a;->a(Ljava/io/File;J)Lcom/tkay/core/common/res/a;

    move-result-object v0

    .line 332
    iget-object p2, p0, Lcom/tkay/core/common/res/d;->b:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p2, p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 334
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->z()Z

    move-result p2

    if-eqz p2, :cond_0

    .line 335
    iget-object p2, p0, Lcom/tkay/core/common/res/d;->d:Ljava/lang/String;

    const-string v1, "Create DiskCache error."

    invoke-static {p2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 336
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 341
    :cond_0
    :goto_0
    monitor-exit p0

    return-object v0

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;
    .locals 2

    .line 61
    sget-object v0, Lcom/tkay/core/common/res/d;->j:Lcom/tkay/core/common/res/d;

    if-nez v0, :cond_1

    .line 62
    const-class v0, Lcom/tkay/core/common/res/d;

    monitor-enter v0

    .line 63
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/res/d;->j:Lcom/tkay/core/common/res/d;

    if-nez v1, :cond_0

    .line 64
    new-instance v1, Lcom/tkay/core/common/res/d;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/res/d;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/core/common/res/d;->j:Lcom/tkay/core/common/res/d;

    .line 65
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 68
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/core/common/res/d;->j:Lcom/tkay/core/common/res/d;

    return-object p0
.end method

.method private a(Ljava/lang/String;)Z
    .locals 3

    .line 369
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return p1

    .line 374
    :cond_0
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v2, 0x1

    invoke-virtual {p0, v2}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".0"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 378
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    return p1
.end method


# virtual methods
.method public final a(ILjava/lang/String;)Ljava/io/FileInputStream;
    .locals 3

    const/4 v0, 0x4

    const/4 v1, 0x0

    if-eq p1, v0, :cond_3

    .line 285
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object v0

    .line 286
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    .line 290
    :cond_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 291
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_1

    .line 292
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 295
    :cond_1
    invoke-direct {p0, p1, v2}, Lcom/tkay/core/common/res/d;->a(ILjava/io/File;)Lcom/tkay/core/common/res/a;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 301
    :try_start_0
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/res/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/res/a$c;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 304
    invoke-virtual {p1}, Lcom/tkay/core/common/res/a$c;->a()Ljava/io/InputStream;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 306
    check-cast p1, Ljava/io/FileInputStream;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 312
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-object v1

    .line 318
    :cond_3
    :try_start_1
    invoke-virtual {p0, v0, p2}, Lcom/tkay/core/common/res/d;->b(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 319
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 320
    new-instance p1, Ljava/io/FileInputStream;

    invoke-direct {p1, p2}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :catchall_0
    return-object v1
.end method

.method public final a()Ljava/lang/String;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final a(I)Ljava/lang/String;
    .locals 2

    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    const-string p1, "tkay_custom_resouce"

    goto :goto_0

    :cond_0
    const-string p1, "tkay_internal_video_resource"

    goto :goto_0

    :cond_1
    const-string p1, "tkay_internal_extra_resource"

    goto :goto_0

    :cond_2
    const-string p1, "tkay_internal_resouce"

    .line 362
    :goto_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 364
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;
    .locals 3

    .line 82
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    const-string v2, "tkay_internal_html_resouce"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 83
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    .line 84
    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    .line 87
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "_"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, ".html"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 89
    new-instance p3, Ljava/io/File;

    invoke-direct {p3, v0, p2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    const/4 p2, 0x0

    :try_start_0
    const-string v0, "utf-8"

    .line 92
    invoke-virtual {p1, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    .line 93
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p3}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 p2, 0x0

    .line 94
    :try_start_1
    array-length v1, p1

    invoke-virtual {v0, p1, p2, v1}, Ljava/io/FileOutputStream;->write([BII)V

    .line 95
    invoke-virtual {p3}, Ljava/io/File;->toURL()Ljava/net/URL;

    move-result-object p1

    invoke-virtual {p1}, Ljava/net/URL;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 103
    :try_start_2
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    goto :goto_0

    :catchall_0
    move-object p2, v0

    :catchall_1
    if-eqz p2, :cond_1

    :try_start_3
    invoke-virtual {p2}, Ljava/io/FileOutputStream;->close()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :catchall_2
    :cond_1
    const-string p1, ""

    :catchall_3
    :goto_0
    return-object p1
.end method

.method public final a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V
    .locals 2

    .line 116
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 117
    new-instance p2, Ljava/io/File;

    iget-object v0, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    const-string v1, "tkay_internal_html_resouce"

    invoke-direct {p2, v0, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 118
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p2, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 119
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 120
    invoke-virtual {v0}, Ljava/io/File;->delete()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final a(ILjava/lang/String;Ljava/io/InputStream;)Z
    .locals 5

    const/4 v0, 0x0

    if-eqz p2, :cond_8

    if-nez p3, :cond_0

    goto/16 :goto_5

    .line 217
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object v1

    .line 218
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    .line 222
    :cond_1
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 223
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_2

    .line 224
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 229
    :cond_2
    invoke-direct {p0, p1, v2}, Lcom/tkay/core/common/res/d;->a(ILjava/io/File;)Lcom/tkay/core/common/res/a;

    move-result-object p1

    if-eqz p1, :cond_8

    const/4 v1, 0x0

    .line 237
    :try_start_0
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/res/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/res/a$c;

    move-result-object v2

    if-nez v2, :cond_4

    .line 239
    invoke-virtual {p1, p2}, Lcom/tkay/core/common/res/a;->b(Ljava/lang/String;)Lcom/tkay/core/common/res/a$a;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_5

    .line 241
    :try_start_1
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/res/a$a;->a(I)Ljava/io/OutputStream;

    move-result-object v1

    const/16 p2, 0x800

    new-array p2, p2, [B

    .line 245
    :goto_0
    invoke-virtual {p3, p2}, Ljava/io/InputStream;->read([B)I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_3

    .line 246
    invoke-virtual {v1, p2, v0, v2}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_0

    .line 248
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/core/common/res/a$a;->a()V

    .line 249
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p2

    move-object v4, v1

    move-object v1, p1

    move-object p1, v4

    goto :goto_2

    .line 252
    :cond_4
    :try_start_2
    invoke-virtual {v2}, Lcom/tkay/core/common/res/a$c;->a()Ljava/io/InputStream;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/InputStream;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_5
    :goto_1
    const/4 v0, 0x1

    if-eqz v1, :cond_8

    .line 267
    :try_start_3
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_4

    goto :goto_5

    :catchall_0
    move-exception p1

    goto :goto_4

    :catch_1
    move-exception p2

    move-object p1, v1

    .line 256
    :goto_2
    :try_start_4
    new-instance p3, Ljava/lang/StringBuilder;

    const-string v2, "writeToDiskLruCache - "

    invoke-direct {p3, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-eqz v1, :cond_6

    .line 259
    :try_start_5
    invoke-virtual {v1}, Lcom/tkay/core/common/res/a$a;->b()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_3

    :catch_2
    move-exception p2

    .line 262
    :try_start_6
    invoke-virtual {p2}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :cond_6
    :goto_3
    if-eqz p1, :cond_8

    .line 267
    :try_start_7
    invoke-virtual {p1}, Ljava/io/OutputStream;->close()V
    :try_end_7
    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_7} :catch_4

    goto :goto_5

    :catchall_1
    move-exception p2

    move-object v1, p1

    move-object p1, p2

    :goto_4
    if-eqz v1, :cond_7

    :try_start_8
    invoke-virtual {v1}, Ljava/io/OutputStream;->close()V
    :try_end_8
    .catch Ljava/io/IOException; {:try_start_8 .. :try_end_8} :catch_3

    .line 271
    :catch_3
    :cond_7
    throw p1

    :catch_4
    :cond_8
    :goto_5
    return v0
.end method

.method public final b(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/io/File;
    .locals 2

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".html"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 194
    new-instance p2, Ljava/io/File;

    iget-object v0, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    const-string v1, "tkay_internal_html_resouce"

    invoke-direct {p2, v0, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 195
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p2, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 197
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-eqz p1, :cond_0

    return-object v0

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final b(ILjava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x4

    if-eq p1, v0, :cond_0

    .line 383
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".0"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 385
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final b()V
    .locals 8

    .line 129
    :try_start_0
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/core/common/res/d;->l:Ljava/io/File;

    const-string v2, "tkay_internal_html_resouce"

    invoke-direct {v0, v1, v2}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 130
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 131
    invoke-virtual {v0}, Ljava/io/File;->listFiles()[Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 132
    array-length v1, v0

    if-lez v1, :cond_1

    .line 133
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 135
    :try_start_1
    invoke-virtual {v3}, Ljava/io/File;->isFile()Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {v3}, Ljava/io/File;->lastModified()J

    move-result-wide v6

    sub-long/2addr v4, v6

    const-wide/32 v6, 0x5265c00

    cmp-long v4, v4, v6

    if-lez v4, :cond_0

    .line 136
    invoke-virtual {v3}, Ljava/io/File;->delete()Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_1
    :cond_1
    return-void
.end method

.method public final c()V
    .locals 2

    .line 150
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/res/d$1;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/res/d$1;-><init>(Lcom/tkay/core/common/res/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
