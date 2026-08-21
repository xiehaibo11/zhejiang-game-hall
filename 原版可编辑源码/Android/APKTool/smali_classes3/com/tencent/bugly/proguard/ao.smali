.class public final Lcom/tencent/bugly/proguard/ao;
.super Ljava/lang/Object;
.source "BUGLY"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/bugly/proguard/ao$a;
    }
.end annotation


# static fields
.field public static a:Z = true

.field public static b:Z = true

.field private static c:Ljava/text/SimpleDateFormat; = null

.field private static d:I = 0x7800

.field private static e:Ljava/lang/StringBuilder;

.field private static f:Ljava/lang/StringBuilder;

.field private static g:Z

.field private static h:Lcom/tencent/bugly/proguard/ao$a;

.field private static i:Ljava/lang/String;

.field private static j:Ljava/lang/String;

.field private static k:Landroid/content/Context;

.field private static l:Ljava/lang/String;

.field private static m:Z

.field private static n:Z

.field private static o:Ljava/util/concurrent/ExecutorService;

.field private static p:I

.field private static final q:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 47
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/ao;->q:Ljava/lang/Object;

    .line 51
    :try_start_0
    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "MM-dd HH:mm:ss"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/tencent/bugly/proguard/ao;->c:Ljava/text/SimpleDateFormat;
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 53
    invoke-virtual {v0}, Ljava/lang/Throwable;->getCause()Ljava/lang/Throwable;

    move-result-object v0

    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;
    .locals 3

    .line 268
    sget-object v0, Lcom/tencent/bugly/proguard/ao;->e:Ljava/lang/StringBuilder;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 269
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x7800

    if-le v0, v1, :cond_0

    .line 270
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    sub-int/2addr v0, v1

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v1

    add-int/lit8 v1, v1, -0x1

    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p2

    .line 272
    :cond_0
    new-instance v0, Ljava/util/Date;

    invoke-direct {v0}, Ljava/util/Date;-><init>()V

    .line 274
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->c:Ljava/text/SimpleDateFormat;

    if-eqz v1, :cond_1

    .line 275
    invoke-virtual {v1, v0}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 277
    :cond_1
    invoke-virtual {v0}, Ljava/util/Date;->toString()Ljava/lang/String;

    move-result-object v0

    .line 279
    :goto_0
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->e:Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " "

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v2, Lcom/tencent/bugly/proguard/ao;->p:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 280
    invoke-virtual {v1, p3, p4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ": "

    .line 281
    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\u0001\r\n"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 282
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->e:Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(I)V
    .locals 2

    .line 132
    sget-object v0, Lcom/tencent/bugly/proguard/ao;->q:Ljava/lang/Object;

    monitor-enter v0

    .line 133
    :try_start_0
    sput p0, Lcom/tencent/bugly/proguard/ao;->d:I

    if-gez p0, :cond_0

    const/4 p0, 0x0

    .line 135
    sput p0, Lcom/tencent/bugly/proguard/ao;->d:I

    goto :goto_0

    :cond_0
    const/16 v1, 0x7800

    if-le p0, v1, :cond_1

    .line 137
    sput v1, Lcom/tencent/bugly/proguard/ao;->d:I

    .line 139
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static declared-synchronized a(Landroid/content/Context;)V
    .locals 3

    const-class v0, Lcom/tencent/bugly/proguard/ao;

    monitor-enter v0

    .line 105
    :try_start_0
    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->m:Z

    if-nez v1, :cond_1

    if-eqz p0, :cond_1

    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    goto :goto_0

    .line 109
    :cond_0
    :try_start_1
    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v1

    sput-object v1, Lcom/tencent/bugly/proguard/ao;->o:Ljava/util/concurrent/ExecutorService;

    .line 110
    new-instance v1, Ljava/lang/StringBuilder;

    const/4 v2, 0x0

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(I)V

    sput-object v1, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    .line 111
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(I)V

    sput-object v1, Lcom/tencent/bugly/proguard/ao;->e:Ljava/lang/StringBuilder;

    .line 112
    sput-object p0, Lcom/tencent/bugly/proguard/ao;->k:Landroid/content/Context;

    .line 113
    invoke-static {p0}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p0

    .line 114
    iget-object v1, p0, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    sput-object v1, Lcom/tencent/bugly/proguard/ao;->i:Ljava/lang/String;

    .line 115
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    const-string p0, ""

    sput-object p0, Lcom/tencent/bugly/proguard/ao;->j:Ljava/lang/String;

    .line 116
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/tencent/bugly/proguard/ao;->k:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/buglylog_"

    .line 117
    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/tencent/bugly/proguard/ao;->i:Ljava/lang/String;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/tencent/bugly/proguard/ao;->j:Ljava/lang/String;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".txt"

    .line 118
    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/tencent/bugly/proguard/ao;->l:Ljava/lang/String;

    .line 119
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result p0

    sput p0, Lcom/tencent/bugly/proguard/ao;->p:I
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    const/4 p0, 0x1

    .line 123
    :try_start_2
    sput-boolean p0, Lcom/tencent/bugly/proguard/ao;->m:Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 124
    monitor-exit v0

    return-void

    .line 106
    :cond_1
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static declared-synchronized a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const-class v0, Lcom/tencent/bugly/proguard/ao;

    monitor-enter v0

    .line 177
    :try_start_0
    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->m:Z

    if-eqz v1, :cond_2

    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    goto :goto_0

    .line 181
    :cond_0
    :try_start_1
    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->n:Z

    if-eqz v1, :cond_1

    .line 182
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->o:Ljava/util/concurrent/ExecutorService;

    new-instance v2, Lcom/tencent/bugly/proguard/ao$1;

    invoke-direct {v2, p0, p1, p2}, Lcom/tencent/bugly/proguard/ao$1;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v1, v2}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    .line 192
    :cond_1
    :try_start_2
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->o:Ljava/util/concurrent/ExecutorService;

    new-instance v2, Lcom/tencent/bugly/proguard/ao$2;

    invoke-direct {v2, p0, p1, p2}, Lcom/tencent/bugly/proguard/ao$2;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v1, v2}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 201
    monitor-exit v0

    return-void

    :catch_0
    move-exception p0

    .line 200
    :try_start_3
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 203
    monitor-exit v0

    return-void

    .line 178
    :cond_2
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    .line 163
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    if-nez v0, :cond_1

    const-string v0, ""

    .line 165
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v0, 0xa

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-static {p2}, Lcom/tencent/bugly/proguard/ap;->b(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    .line 166
    invoke-static {p0, p1, p2}, Lcom/tencent/bugly/proguard/ao;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a()[B
    .locals 2

    .line 304
    sget-boolean v0, Lcom/tencent/bugly/proguard/ao;->a:Z

    if-eqz v0, :cond_1

    .line 5292
    sget-boolean v0, Lcom/tencent/bugly/proguard/ao;->b:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 5295
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BuglyLog.txt"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    .line 307
    :cond_1
    invoke-static {}, Lcom/tencent/bugly/proguard/ao;->c()[B

    move-result-object v0

    return-object v0
.end method

.method private static b()Ljava/lang/String;
    .locals 2

    .line 86
    :try_start_0
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    iget-object v1, v0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    if-eqz v1, :cond_0

    .line 88
    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    invoke-interface {v0}, Lcom/tencent/bugly/proguard/q;->getLogFromNative()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 91
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 92
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method static synthetic b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 21
    invoke-static {p0, p1, p2}, Lcom/tencent/bugly/proguard/ao;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method static synthetic c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 21
    invoke-static {p0, p1, p2}, Lcom/tencent/bugly/proguard/ao;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static c()[B
    .locals 8

    .line 318
    sget-boolean v0, Lcom/tencent/bugly/proguard/ao;->b:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 321
    :cond_0
    sget-boolean v0, Lcom/tencent/bugly/proguard/ao;->n:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_1

    const/4 v0, 0x0

    .line 322
    new-array v2, v0, [Ljava/lang/Object;

    const-string v3, "[LogUtil] Get user log from native."

    invoke-static {v3, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 323
    invoke-static {}, Lcom/tencent/bugly/proguard/ao;->b()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 326
    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v0

    const-string v0, "[LogUtil] Got user log from native: %d bytes"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    const-string v0, "BuglyNativeLog.txt"

    .line 327
    invoke-static {v2, v0}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    .line 330
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 331
    sget-object v2, Lcom/tencent/bugly/proguard/ao;->q:Ljava/lang/Object;

    monitor-enter v2

    .line 333
    :try_start_0
    sget-object v3, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    if-eqz v3, :cond_2

    sget-object v3, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 5348
    iget-boolean v3, v3, Lcom/tencent/bugly/proguard/ao$a;->a:Z

    if-eqz v3, :cond_2

    .line 334
    sget-object v3, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 6348
    iget-object v3, v3, Lcom/tencent/bugly/proguard/ao$a;->b:Ljava/io/File;

    if-eqz v3, :cond_2

    .line 334
    sget-object v3, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 7348
    iget-object v3, v3, Lcom/tencent/bugly/proguard/ao$a;->b:Ljava/io/File;

    .line 334
    invoke-virtual {v3}, Ljava/io/File;->length()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v7, v3, v5

    if-lez v7, :cond_2

    .line 335
    sget-object v3, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 8348
    iget-object v3, v3, Lcom/tencent/bugly/proguard/ao$a;->b:Ljava/io/File;

    const/16 v4, 0x7800

    .line 335
    invoke-static {v3, v4, v1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/io/File;IZ)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 338
    :cond_2
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    if-eqz v1, :cond_3

    sget-object v1, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    if-lez v1, :cond_3

    .line 339
    sget-object v1, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 341
    :cond_3
    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 342
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BuglyLog.txt"

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/ap;->a(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    return-object v0

    :catchall_0
    move-exception v0

    .line 341
    :try_start_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 67
    :try_start_0
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 68
    iget-object v1, v0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    if-eqz v1, :cond_0

    .line 69
    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->N:Lcom/tencent/bugly/proguard/q;

    invoke-interface {v0, p0, p1, p2}, Lcom/tencent/bugly/proguard/q;->appendLogToNative(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 72
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/Throwable;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 73
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static declared-synchronized e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const-class v0, Lcom/tencent/bugly/proguard/ao;

    monitor-enter v0

    .line 206
    :try_start_0
    sget-boolean v1, Lcom/tencent/bugly/proguard/ao;->a:Z

    if-eqz v1, :cond_0

    .line 207
    invoke-static {p0, p1, p2}, Lcom/tencent/bugly/proguard/ao;->f(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    .line 209
    :cond_0
    :try_start_1
    invoke-static {p0, p1, p2}, Lcom/tencent/bugly/proguard/ao;->g(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 211
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized f(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    const-class v0, Lcom/tencent/bugly/proguard/ao;

    monitor-enter v0

    .line 214
    :try_start_0
    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v1

    int-to-long v1, v1

    .line 215
    invoke-static {p0, p1, p2, v1, v2}, Lcom/tencent/bugly/proguard/ao;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object p0

    .line 217
    sget-object p1, Lcom/tencent/bugly/proguard/ao;->q:Ljava/lang/Object;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 219
    :try_start_1
    sget-object p2, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 220
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    sget p2, Lcom/tencent/bugly/proguard/ao;->d:I

    if-lt p0, p2, :cond_0

    .line 221
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    const/4 p2, 0x0

    sget-object v1, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    const-string v2, "\u0001\r\n"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->indexOf(Ljava/lang/String;)I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {p0, p2, v1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    move-result-object p0

    sput-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 224
    :try_start_2
    invoke-static {p0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 225
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 228
    :cond_0
    :goto_0
    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-void

    :goto_1
    :try_start_3
    monitor-exit p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw p0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized g(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 5

    const-class v0, Lcom/tencent/bugly/proguard/ao;

    monitor-enter v0

    .line 232
    :try_start_0
    invoke-static {}, Landroid/os/Process;->myTid()I

    move-result v1

    int-to-long v1, v1

    .line 233
    invoke-static {p0, p1, p2, v1, v2}, Lcom/tencent/bugly/proguard/ao;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object p0

    .line 235
    sget-object p1, Lcom/tencent/bugly/proguard/ao;->q:Ljava/lang/Object;

    monitor-enter p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 237
    :try_start_1
    sget-object p2, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 238
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    sget p2, Lcom/tencent/bugly/proguard/ao;->d:I
    :try_end_1
    .catch Ljava/lang/Throwable; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-gt p0, p2, :cond_0

    .line 239
    :try_start_2
    monitor-exit p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-void

    .line 241
    :cond_0
    :try_start_3
    sget-boolean p0, Lcom/tencent/bugly/proguard/ao;->g:Z
    :try_end_3
    .catch Ljava/lang/Throwable; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    if-eqz p0, :cond_1

    .line 243
    :try_start_4
    monitor-exit p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit v0

    return-void

    :cond_1
    const/4 p0, 0x1

    .line 246
    :try_start_5
    sput-boolean p0, Lcom/tencent/bugly/proguard/ao;->g:Z

    .line 247
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    if-nez p0, :cond_2

    .line 249
    new-instance p0, Lcom/tencent/bugly/proguard/ao$a;

    sget-object p2, Lcom/tencent/bugly/proguard/ao;->l:Ljava/lang/String;

    invoke-direct {p0, p2}, Lcom/tencent/bugly/proguard/ao$a;-><init>(Ljava/lang/String;)V

    sput-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    goto :goto_0

    .line 250
    :cond_2
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 1348
    iget-object p0, p0, Lcom/tencent/bugly/proguard/ao$a;->b:Ljava/io/File;

    if-eqz p0, :cond_3

    .line 250
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 2348
    iget-object p0, p0, Lcom/tencent/bugly/proguard/ao$a;->b:Ljava/io/File;

    .line 250
    invoke-virtual {p0}, Ljava/io/File;->length()J

    move-result-wide v1

    sget-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    .line 251
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->length()I

    move-result p0

    int-to-long v3, p0

    add-long/2addr v1, v3

    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 3348
    iget-wide v3, p0, Lcom/tencent/bugly/proguard/ao$a;->c:J

    cmp-long p0, v1, v3

    if-lez p0, :cond_4

    .line 253
    :cond_3
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    .line 4348
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/ao$a;->a()Z

    .line 255
    :cond_4
    :goto_0
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->h:Lcom/tencent/bugly/proguard/ao$a;

    sget-object p2, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/tencent/bugly/proguard/ao$a;->a(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_5

    .line 257
    sget-object p0, Lcom/tencent/bugly/proguard/ao;->f:Ljava/lang/StringBuilder;

    const/4 p2, 0x0

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->setLength(I)V

    .line 258
    sput-boolean p2, Lcom/tencent/bugly/proguard/ao;->g:Z
    :try_end_5
    .catch Ljava/lang/Throwable; {:try_start_5 .. :try_end_5} :catch_0
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    goto :goto_2

    .line 263
    :catch_0
    :cond_5
    :goto_1
    :try_start_6
    monitor-exit p1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    monitor-exit v0

    return-void

    :goto_2
    :try_start_7
    monitor-exit p1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    :try_start_8
    throw p0
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_1

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method
