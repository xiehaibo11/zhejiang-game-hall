.class public Lcom/czhj/sdk/common/utils/ImageManager;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;,
        Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;
    }
.end annotation


# static fields
.field private static a:Lcom/czhj/sdk/common/utils/ImageManager;


# instance fields
.field private b:Landroid/content/Context;

.field private final c:Ljava/lang/String;

.field private d:Ljava/util/concurrent/ExecutorService;

.field private e:Landroid/util/LruCache;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/LruCache<",
            "Ljava/lang/String;",
            "Landroid/graphics/Bitmap;",
            ">;"
        }
    .end annotation
.end field

.field private f:Landroid/os/Handler;

.field private g:Ljava/io/File;

.field private h:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SigImageCache"

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->c:Ljava/lang/String;

    const/4 v0, 0x4

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->d:Ljava/util/concurrent/ExecutorService;

    new-instance v0, Landroid/util/LruCache;

    const/high16 v1, 0x400000

    invoke-direct {v0, v1}, Landroid/util/LruCache;-><init>(I)V

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->e:Landroid/util/LruCache;

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->f:Landroid/os/Handler;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/ImageManager;->b:Landroid/content/Context;

    return-void
.end method

.method static synthetic a(Lcom/czhj/sdk/common/utils/ImageManager;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->f:Landroid/os/Handler;

    return-object p0
.end method

.method private static a(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;
    .locals 2

    sget-object v0, Lcom/czhj/sdk/common/utils/ImageManager;->a:Lcom/czhj/sdk/common/utils/ImageManager;

    if-nez v0, :cond_1

    const-class v0, Lcom/czhj/sdk/common/utils/ImageManager;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/utils/ImageManager;->a:Lcom/czhj/sdk/common/utils/ImageManager;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/sdk/common/utils/ImageManager;

    invoke-direct {v1, p0}, Lcom/czhj/sdk/common/utils/ImageManager;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/czhj/sdk/common/utils/ImageManager;->a:Lcom/czhj/sdk/common/utils/ImageManager;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/czhj/sdk/common/utils/ImageManager;->a:Lcom/czhj/sdk/common/utils/ImageManager;

    return-object p0
.end method

.method private a()Ljava/io/File;
    .locals 3

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->g:Ljava/io/File;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isDirectory()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->g:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->g:Ljava/io/File;

    return-object v0

    :cond_0
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object v0

    const-string v1, "mounted"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "SigImageCache"

    if-eqz v0, :cond_1

    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/ImageManager;->b:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getExternalCacheDir()Ljava/io/File;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    new-instance v0, Ljava/io/File;

    iget-object v2, p0, Lcom/czhj/sdk/common/utils/ImageManager;->b:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getCacheDir()Ljava/io/File;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method static synthetic b(Lcom/czhj/sdk/common/utils/ImageManager;)Landroid/util/LruCache;
    .locals 0

    iget-object p0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->e:Landroid/util/LruCache;

    return-object p0
.end method

.method static synthetic c(Lcom/czhj/sdk/common/utils/ImageManager;)Ljava/io/File;
    .locals 0

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/ImageManager;->a()Ljava/io/File;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/czhj/sdk/common/utils/ImageManager;)Ljava/util/concurrent/ExecutorService;
    .locals 0

    iget-object p0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->d:Ljava/util/concurrent/ExecutorService;

    return-object p0
.end method

.method public static with(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/ImageManager;->a(Landroid/content/Context;)Lcom/czhj/sdk/common/utils/ImageManager;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public clearCache()V
    .locals 3

    :try_start_0
    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/ImageManager;->a()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/FileUtil;->orderByDate(Ljava/lang/String;)[Ljava/io/File;

    move-result-object v0

    const/16 v1, 0x64

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/utils/FileUtil;->clearCacheFileByCount([Ljava/io/File;I)[Ljava/io/File;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, "native ad file list is null"

    :goto_0
    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "native ad file remain num: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v0, v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "clean native ad file error"

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    return-void
.end method

.method public customCachePath(Ljava/io/File;)Lcom/czhj/sdk/common/utils/ImageManager;
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/utils/ImageManager;->g:Ljava/io/File;

    return-object p0
.end method

.method public getBitmap(Ljava/lang/String;Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;)V
    .locals 7

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->e:Landroid/util/LruCache;

    invoke-virtual {v0, p1}, Landroid/util/LruCache;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/graphics/Bitmap;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-interface {p2, v0}, Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;->onBitmapLoaded(Landroid/graphics/Bitmap;)V

    return-void

    :cond_1
    const-string v0, "/"

    invoke-virtual {p1, v0}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/io/File;

    invoke-direct {p0}, Lcom/czhj/sdk/common/utils/ImageManager;->a()Ljava/io/File;

    move-result-object v3

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v3, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v0, v3, v5

    if-lez v0, :cond_2

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    :cond_2
    if-eqz v1, :cond_3

    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->e:Landroid/util/LruCache;

    invoke-virtual {v0, p1, v1}, Landroid/util/LruCache;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-interface {p2, v1}, Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;->onBitmapLoaded(Landroid/graphics/Bitmap;)V

    return-void

    :cond_3
    iget-object v0, p0, Lcom/czhj/sdk/common/utils/ImageManager;->d:Ljava/util/concurrent/ExecutorService;

    new-instance v1, Lcom/czhj/sdk/common/utils/ImageManager$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/czhj/sdk/common/utils/ImageManager$1;-><init>(Lcom/czhj/sdk/common/utils/ImageManager;Ljava/lang/String;Lcom/czhj/sdk/common/utils/ImageManager$BitmapLoadedListener;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    return-void
.end method

.method public load(Ljava/lang/String;)Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;
    .locals 1

    new-instance v0, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;

    invoke-direct {v0, p0, p1}, Lcom/czhj/sdk/common/utils/ImageManager$RequestCreatorRunnable;-><init>(Lcom/czhj/sdk/common/utils/ImageManager;Ljava/lang/String;)V

    return-object v0
.end method
