.class final Lcom/kwad/sdk/api/loader/k;
.super Ljava/lang/Object;


# instance fields
.field private final aiF:Ljava/lang/String;

.field private final aiG:Ljava/lang/String;

.field private final aiH:Ljava/lang/String;

.field private aiI:Landroid/content/res/Resources;

.field private aiJ:Ljava/lang/ClassLoader;

.field private aiK:Lcom/kwad/sdk/api/core/IKsAdSDK;


# direct methods
.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/api/loader/k;->aiG:Ljava/lang/String;

    iput-object p3, p0, Lcom/kwad/sdk/api/loader/k;->aiH:Ljava/lang/String;

    return-void
.end method

.method static declared-synchronized a(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/k;
    .locals 3

    const-class v0, Lcom/kwad/sdk/api/loader/k;

    monitor-enter v0

    :try_start_0
    invoke-static {p0, p2}, Lcom/kwad/sdk/api/loader/h;->q(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, p2}, Lcom/kwad/sdk/api/loader/h;->r(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, p2}, Lcom/kwad/sdk/api/loader/h;->s(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, v1, v2, p2}, Lcom/kwad/sdk/api/loader/k;->b(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/k;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    goto :goto_0

    :catch_0
    move-exception p0

    :try_start_1
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 p0, 0x0

    monitor-exit v0

    return-object p0

    :goto_0
    monitor-exit v0

    throw p0
.end method

.method static b(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/api/loader/k;
    .locals 2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/api/loader/k;

    invoke-direct {v0, p2, p3, p4}, Lcom/kwad/sdk/api/loader/k;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/api/loader/k;->c(Landroid/content/Context;Ljava/lang/ClassLoader;)V

    return-object v0

    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "mApk not a file"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "mApk is null"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private c(Landroid/content/Context;Ljava/lang/ClassLoader;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/sdk/api/loader/k;->yt()V

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/api/loader/q;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/k;->aiG:Ljava/lang/String;

    iget-object v3, p0, Lcom/kwad/sdk/api/loader/k;->aiH:Ljava/lang/String;

    invoke-static {p1, p2, v1, v2, v3}, Lcom/kwad/sdk/api/loader/e;->a(Landroid/content/Context;Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/api/loader/Loader;->a(Ljava/lang/ClassLoader;)Lcom/kwad/sdk/api/core/IKsAdSDK;

    move-result-object p2

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/k;->aiI:Landroid/content/res/Resources;

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/k;->aiJ:Ljava/lang/ClassLoader;

    iput-object p2, p0, Lcom/kwad/sdk/api/loader/k;->aiK:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-interface {p2}, Lcom/kwad/sdk/api/core/IKsAdSDK;->getSDKType()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "sdkType error apiType: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " , sdkType:"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private yt()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "mApk not a file"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "mApk is null"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method final getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/k;->aiJ:Ljava/lang/ClassLoader;

    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ExternalPackage{mApk=\'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiF:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", mDexDir=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/k;->aiG:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", mNativeLibDir=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/k;->aiH:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v1, ", mResource="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiI:Landroid/content/res/Resources;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mClassLoader="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiJ:Ljava/lang/ClassLoader;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mKsSdk="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/k;->aiK:Lcom/kwad/sdk/api/core/IKsAdSDK;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method final yr()Landroid/content/res/Resources;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/k;->aiI:Landroid/content/res/Resources;

    return-object v0
.end method

.method final ys()Lcom/kwad/sdk/api/core/IKsAdSDK;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/k;->aiK:Lcom/kwad/sdk/api/core/IKsAdSDK;

    return-object v0
.end method
