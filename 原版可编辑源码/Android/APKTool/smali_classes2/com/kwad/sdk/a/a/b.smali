.class public Lcom/kwad/sdk/a/a/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/a/a/b$a;
    }
.end annotation


# static fields
.field private static volatile ahw:Lcom/kwad/sdk/a/a/b;


# instance fields
.field private ahu:Ljava/util/Stack;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Stack<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private ahv:Ljava/io/File;

.field private mHasInit:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/Stack;

    invoke-direct {v0}, Ljava/util/Stack;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    return-void
.end method

.method static synthetic a(Lcom/kwad/sdk/a/a/b;)Ljava/io/File;
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/b;->xX()Ljava/io/File;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/sdk/a/a/b;Ljava/util/Stack;)Ljava/util/Stack;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/a/a/b;->ae(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method private declared-synchronized ad(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 7

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    invoke-virtual {v1}, Ljava/util/Stack;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v4

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    if-nez v0, :cond_2

    monitor-exit p0

    return-void

    :cond_2
    const/4 p1, 0x0

    :try_start_1
    new-instance v0, Ljava/io/ObjectOutputStream;

    new-instance v1, Ljava/io/FileOutputStream;

    iget-object v2, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;

    invoke-direct {v1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v0, v1}, Ljava/io/ObjectOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    iget-object p1, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    invoke-virtual {v0, p1}, Ljava/io/ObjectOutputStream;->writeObject(Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    monitor-exit p0

    return-void

    :catch_0
    move-exception p1

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v6, v0

    move-object v0, p1

    move-object p1, v6

    goto :goto_2

    :catch_1
    move-exception v0

    move-object v6, v0

    move-object v0, p1

    move-object p1, v6

    :goto_1
    :try_start_4
    const-string v1, "InstallTipsDataManager"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, " removeApkDownloadedData e"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    :goto_2
    :try_start_6
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized ae(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    invoke-virtual {v0, p1}, Ljava/util/Stack;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 p1, 0x0

    :try_start_1
    new-instance v0, Ljava/io/ObjectOutputStream;

    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {p0}, Lcom/kwad/sdk/a/a/b;->xX()Ljava/io/File;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v0, v1}, Ljava/io/ObjectOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    iget-object p1, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    invoke-virtual {v0, p1}, Ljava/io/ObjectOutputStream;->writeObject(Ljava/lang/Object;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    monitor-exit p0

    return-void

    :catch_0
    move-exception p1

    goto :goto_0

    :catchall_0
    move-exception v0

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    goto :goto_1

    :catch_1
    move-exception v0

    move-object v3, v0

    move-object v0, p1

    move-object p1, v3

    :goto_0
    :try_start_4
    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :try_start_5
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    monitor-exit p0

    return-void

    :catchall_1
    move-exception p1

    :goto_1
    :try_start_6
    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static ah(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/io/File;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/download/a;->B(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->L(Ljava/io/File;)Z

    move-result p0

    if-eqz p0, :cond_0

    return-object v0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method static synthetic ai(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/io/File;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/a/a/b;->ah(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/io/File;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/sdk/a/a/b;)Ljava/util/Stack;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/a/a/b;->ad(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method private declared-synchronized xX()Ljava/io/File;
    .locals 3

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v0, :cond_1

    const/4 v0, 0x0

    monitor-exit p0

    return-object v0

    :cond_1
    :try_start_2
    invoke-static {v0}, Lcom/kwad/sdk/utils/av;->cN(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-nez v2, :cond_2

    invoke-virtual {v1}, Ljava/io/File;->mkdir()Z

    :cond_2
    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "uninstall_ad"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v0, :cond_3

    :try_start_3
    iget-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/b;->ahv:Ljava/io/File;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public static xY()Lcom/kwad/sdk/a/a/b;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/a/a/b;->ahw:Lcom/kwad/sdk/a/a/b;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/a/a/b;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/a/a/b;->ahw:Lcom/kwad/sdk/a/a/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/a/a/b;

    invoke-direct {v1}, Lcom/kwad/sdk/a/a/b;-><init>()V

    sput-object v1, Lcom/kwad/sdk/a/a/b;->ahw:Lcom/kwad/sdk/a/a/b;

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
    sget-object v0, Lcom/kwad/sdk/a/a/b;->ahw:Lcom/kwad/sdk/a/a/b;

    return-object v0
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/kwad/sdk/a/a/b$a;)V
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/sdk/a/a/b;->mHasInit:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    :try_start_1
    iput-boolean v0, p0, Lcom/kwad/sdk/a/a/b;->mHasInit:Z

    new-instance v0, Lcom/kwad/sdk/a/a/b$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/a/a/b$1;-><init>(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/a/a/b$a;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final af(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/a/a/b$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/a/a/b$2;-><init>(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final ag(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/a/a/b$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/a/a/b$3;-><init>(Lcom/kwad/sdk/a/a/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final declared-synchronized xZ()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 9

    monitor-enter p0

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/a/a/b;->ahu:Ljava/util/Stack;

    invoke-virtual {v1}, Ljava/util/Stack;->clone()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Stack;

    :cond_0
    invoke-virtual {v1}, Ljava/util/Stack;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v1}, Ljava/util/Stack;->pop()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v2, :cond_0

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v2}, Lcom/kwad/sdk/a/a/b;->ah(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/io/File;

    move-result-object v5

    if-eqz v5, :cond_0

    invoke-virtual {v5}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_0

    invoke-virtual {v5}, Ljava/io/File;->lastModified()J

    move-result-wide v5

    const-wide/32 v7, 0x240c8400

    add-long/2addr v5, v7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    cmp-long v5, v5, v7

    if-lez v5, :cond_0

    invoke-static {v4, v3}, Lcom/kwad/sdk/utils/ak;->ak(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v3, :cond_0

    move-object v0, v2

    :cond_1
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method
