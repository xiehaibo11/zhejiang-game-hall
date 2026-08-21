.class final Lcom/kwad/library/solder/lib/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/lib/a/d;


# instance fields
.field private final afz:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/kwad/library/solder/lib/a/a;",
            ">;"
        }
    .end annotation
.end field

.field private final mContext:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/library/solder/lib/d;->afz:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/library/solder/lib/d;->mContext:Landroid/content/Context;

    return-void
.end method

.method private static a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onCanceled state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v0, -0x7

    invoke-virtual {p0, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/library/solder/lib/ext/a;->o(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)Lcom/kwad/library/solder/lib/a/a;
    .locals 5

    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/a/a;->wm()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Loading plugin, path = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v2

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getVersion()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v1}, Lcom/kwad/library/solder/lib/d;->bB(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object v3

    if-eqz v3, :cond_0

    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "The current plugin has been loaded, id = "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object v3

    :cond_0
    invoke-virtual {p2, v1}, Lcom/kwad/library/solder/lib/a/a;->bE(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Lcom/kwad/library/solder/lib/a/a;->bD(Ljava/lang/String;)V

    invoke-interface {v2}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v3

    invoke-interface {v3, v1, p1}, Lcom/kwad/library/solder/lib/a/c;->z(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v3

    invoke-interface {v3, v1, p1}, Lcom/kwad/library/solder/lib/a/c;->y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->fq(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p2, p1}, Lcom/kwad/library/solder/lib/a/a;->bF(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/library/solder/lib/d;->mContext:Landroid/content/Context;

    invoke-virtual {p2, v0, p1}, Lcom/kwad/library/solder/lib/a/a;->i(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {p0, v1, p2}, Lcom/kwad/library/solder/lib/d;->b(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)V

    return-object p2

    :cond_1
    invoke-interface {v2}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object p1

    invoke-interface {p1, p2}, Lcom/kwad/library/solder/lib/a/c;->b(Lcom/kwad/library/solder/lib/a/a;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/kwad/library/solder/lib/a/a;->bF(Ljava/lang/String;)V

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "installed ."

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/library/solder/lib/d;->mContext:Landroid/content/Context;

    invoke-virtual {p2, v3, p1}, Lcom/kwad/library/solder/lib/a/a;->i(Landroid/content/Context;Ljava/lang/String;)V

    invoke-direct {p0, v1, p2}, Lcom/kwad/library/solder/lib/d;->b(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)V

    invoke-interface {v2}, Lcom/kwad/library/solder/lib/a/e;->wd()Lcom/kwad/library/solder/lib/ext/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/c;->wJ()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->delete(Ljava/lang/String;)Z

    :cond_2
    return-object p2

    :cond_3
    new-instance p1, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;

    const/16 p2, 0xbb9

    const-string v0, "Apk file not exist."

    invoke-direct {p1, v0, p2}, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;-><init>(Ljava/lang/String;I)V

    throw p1
.end method

.method private b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onError state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/4 v0, -0x5

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-virtual {p1, p2}, Lcom/kwad/library/solder/lib/a/f;->j(Ljava/lang/Throwable;)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private declared-synchronized b(Ljava/lang/String;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 1

    monitor-enter p0

    if-eqz p2, :cond_0

    :try_start_0
    invoke-virtual {p2}, Lcom/kwad/library/solder/lib/a/a;->isLoaded()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/d;->afz:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    :cond_0
    :goto_0
    monitor-exit p0

    return-void
.end method

.method private static g(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPreLoad state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object p0

    invoke-interface {p0}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    return-void
.end method

.method private static h(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPostLoad state = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->ww()Lcom/kwad/library/solder/lib/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v1

    invoke-interface {v1}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v1

    invoke-virtual {v1, p0, v0}, Lcom/kwad/library/solder/lib/ext/a;->c(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V

    return-void

    :cond_0
    const/4 v0, -0x1

    invoke-virtual {p0, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wr()Ljava/lang/Throwable;

    move-result-object v0

    const/16 v1, 0xfab

    if-eqz v0, :cond_3

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wr()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v0, v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wr()Ljava/lang/Throwable;

    move-result-object v0

    check-cast v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wr()Ljava/lang/Throwable;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;-><init>(Ljava/lang/Throwable;I)V

    goto :goto_0

    :cond_3
    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Can not get plugin instance "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$LoadError;-><init>(Ljava/lang/String;I)V

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v1

    invoke-interface {v1}, Lcom/kwad/library/solder/lib/a/e;->wi()Lcom/kwad/library/solder/lib/ext/a;

    move-result-object v1

    invoke-virtual {v1, p0, v0}, Lcom/kwad/library/solder/lib/ext/a;->c(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-void
.end method


# virtual methods
.method public final declared-synchronized bB(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;
    .locals 1

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/kwad/library/solder/lib/d;->afz:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/library/solder/lib/a/a;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/a;->isLoaded()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    monitor-exit p0

    return-object p1

    :cond_0
    monitor-exit p0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final f(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;
    .locals 9

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Loading plugin, id = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "Load"

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bG(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->g(Lcom/kwad/library/solder/lib/a/f;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->isCanceled()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wD()V

    iget-object v0, p0, Lcom/kwad/library/solder/lib/d;->afz:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/library/solder/lib/a/a;

    const/4 v1, 0x0

    const-string v2, "Load plugin success, path = "

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/a/a;->isLoaded()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->c(Lcom/kwad/library/solder/lib/a/a;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/a/a;->wm()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wB()Ljava/util/List;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/library/solder/lib/f;->k(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/c/b;

    move-result-object v3

    const/4 v4, -0x1

    if-nez v3, :cond_2

    invoke-virtual {p1, v4}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_2
    const/4 v5, 0x0

    if-eqz v0, :cond_4

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_4

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/kwad/library/solder/lib/c/a;

    iget-object v7, v3, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    iget-object v8, v6, Lcom/kwad/library/solder/lib/c/a;->version:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    move-object v5, v6

    goto :goto_0

    :cond_3
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v7

    invoke-interface {v7}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v7

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v8

    iget-object v6, v6, Lcom/kwad/library/solder/lib/c/a;->version:Ljava/lang/String;

    invoke-interface {v7, v8, v6}, Lcom/kwad/library/solder/lib/a/c;->u(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const/4 v0, 0x1

    if-nez v5, :cond_7

    iget-object v5, p0, Lcom/kwad/library/solder/lib/d;->mContext:Landroid/content/Context;

    invoke-static {v5}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result v5

    if-nez v5, :cond_6

    iget-boolean v5, v3, Lcom/kwad/library/solder/lib/c/b;->agC:Z

    if-nez v5, :cond_5

    iget-boolean v5, v3, Lcom/kwad/library/solder/lib/c/b;->agD:Z

    if-eqz v5, :cond_6

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wu()I

    move-result v5

    if-lez v5, :cond_6

    :cond_5
    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$NotWifiDownloadError;

    const/16 v1, 0x7d7

    const-string v2, "It can be downloaded only on WiFi"

    invoke-direct {v0, v2, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$NotWifiDownloadError;-><init>(Ljava/lang/String;I)V

    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/d;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-object p1

    :cond_6
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v5

    invoke-interface {v5}, Lcom/kwad/library/solder/lib/a/e;->wf()Lcom/kwad/library/solder/lib/a/g;

    move-result-object v5

    invoke-interface {v5, p1}, Lcom/kwad/library/solder/lib/a/g;->i(Lcom/kwad/library/solder/lib/a/f;)Lcom/kwad/library/solder/lib/a/f;

    goto :goto_1

    :cond_7
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v6

    invoke-interface {v6}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v6

    iget-object v7, v5, Lcom/kwad/library/solder/lib/c/a;->agy:Ljava/lang/String;

    iget-object v8, v5, Lcom/kwad/library/solder/lib/c/a;->version:Ljava/lang/String;

    invoke-interface {v6, v7, v8}, Lcom/kwad/library/solder/lib/a/c;->y(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    new-instance v7, Ljava/lang/StringBuilder;

    const-string v8, "-------\u672c\u5730\u5df2\u5b58\u5728--------"

    invoke-direct {v7, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v6}, Lcom/kwad/library/solder/lib/a/f;->bH(Ljava/lang/String;)V

    invoke-virtual {p1, v6}, Lcom/kwad/library/solder/lib/a/f;->bI(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    iget-object v5, v5, Lcom/kwad/library/solder/lib/c/a;->version:Ljava/lang/String;

    invoke-virtual {p1, v5}, Lcom/kwad/library/solder/lib/a/f;->bD(Ljava/lang/String;)V

    :goto_1
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getState()I

    move-result v5

    if-ne v5, v0, :cond_a

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wv()Ljava/lang/String;

    move-result-object v0

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "-------\u66f4\u65b0\u6210\u529f\u6216\u8005\u83b7\u53d6\u5230\u672c\u5730\u6210\u529f------------"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_9

    invoke-virtual {p1, v0}, Lcom/kwad/library/solder/lib/a/f;->bL(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/kwad/library/solder/lib/a/a;->a(Lcom/kwad/library/solder/lib/c/b;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object v3

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->isCanceled()Z

    move-result v4

    if-eqz v4, :cond_8

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_8
    :try_start_0
    invoke-direct {p0, p1, v3}, Lcom/kwad/library/solder/lib/d;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object v3

    invoke-virtual {p1, v3}, Lcom/kwad/library/solder/lib/a/f;->c(Lcom/kwad/library/solder/lib/a/a;)V

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V
    :try_end_0
    .catch Lcom/kwad/library/solder/lib/ext/PluginError$LoadError; {:try_start_0 .. :try_end_0} :catch_1
    .catch Lcom/kwad/library/solder/lib/ext/PluginError$InstallError; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Load plugin failed, path = "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "Sodler.loader"

    invoke-static {v2, v0, v1}, Lcom/kwad/library/solder/lib/a;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    new-instance v0, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;

    const/16 v1, 0xfa4

    const-string v2, "Load or install plugin failed"

    invoke-direct {v0, v2, v1}, Lcom/kwad/library/solder/lib/ext/PluginError$InstallError;-><init>(Ljava/lang/String;I)V

    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/d;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-object p1

    :catch_0
    move-exception v0

    goto :goto_2

    :catch_1
    move-exception v0

    :goto_2
    invoke-direct {p0, p1, v0}, Lcom/kwad/library/solder/lib/d;->b(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-object p1

    :cond_9
    invoke-virtual {p1, v4}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1

    :cond_a
    invoke-static {p1}, Lcom/kwad/library/solder/lib/d;->h(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1
.end method
