.class public abstract Lcom/kwad/components/core/offline/init/a;
.super Ljava/lang/Object;


# instance fields
.field private Db:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/ClassLoader;)V
    .locals 2

    :try_start_0
    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/core/offline/init/a;->b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z

    move-result p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    invoke-static {p2}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const/4 p2, 0x0

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oh()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oi()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1, p2}, Lcom/kwad/sdk/utils/y;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Z)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/a;->af(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;Ljava/lang/ClassLoader;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/offline/init/a;->a(Landroid/content/Context;Ljava/lang/ClassLoader;)V

    return-void
.end method

.method private af(Landroid/content/Context;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "initReal disableOfflineComponents: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v2, Lcom/kwad/components/core/a;->HM:Ljava/lang/Boolean;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " , isDevelopEnable: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/kwad/components/core/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " , DEBUG: false"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v0, Lcom/kwad/components/core/a;->HM:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/offline/init/a;->a(Landroid/content/Context;Ljava/lang/ClassLoader;)V

    goto :goto_0

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/components/core/offline/init/a;->ag(Landroid/content/Context;)V

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p1

    const-string v0, "initReal end"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private ag(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0}, Lcom/kwad/components/core/offline/init/a;->og()Lcom/kwad/library/solder/lib/c/b;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "loadComponents pluginInfo: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v1, Lcom/kwad/components/core/offline/init/a$2;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/core/offline/init/a$2;-><init>(Lcom/kwad/components/core/offline/init/a;Landroid/content/Context;)V

    invoke-static {p1, v0, v1}, Lcom/kwad/library/solder/a/a;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/c/b;Lcom/kwad/library/solder/lib/ext/b$a;)V

    return-void
.end method

.method private og()Lcom/kwad/library/solder/lib/c/b;
    .locals 4

    new-instance v0, Lcom/kwad/library/solder/lib/c/b;

    invoke-direct {v0}, Lcom/kwad/library/solder/lib/c/b;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oh()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/library/solder/lib/c/b;->agy:Ljava/lang/String;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/library/solder/lib/c/b;->IH:Z

    const/4 v2, 0x0

    iput-boolean v2, v0, Lcom/kwad/library/solder/lib/c/b;->agC:Z

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v2

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oj()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/network/idc/a;->dc(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/library/solder/lib/c/b;->agz:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oi()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->ok()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/library/solder/lib/c/b;->agB:Ljava/lang/String;

    sget-object v2, Lcom/kwad/components/core/a;->HP:Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->ol()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/library/solder/lib/c/b;->agf:Ljava/lang/String;

    iput-boolean v1, v0, Lcom/kwad/library/solder/lib/c/b;->agg:Z

    :cond_0
    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/kwad/components/offline/api/IOfflineCompo;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/kwad/components/offline/api/IOfflineCompo;",
            ">(",
            "Ljava/lang/ClassLoader;",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "onOfflineComponentsLoaded classLoader:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :try_start_0
    invoke-virtual {p1, p2}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/offline/api/IOfflineCompo;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "loadClass or instance failed: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const/4 p1, 0x0

    :goto_0
    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onOfflineComponentsLoaded components: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1
.end method

.method protected abstract b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z
.end method

.method protected abstract getTag()Ljava/lang/String;
.end method

.method public final init(Landroid/content/Context;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->isEnabled()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object p1

    const-string v0, "initReal disable"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/offline/init/a;->Db:J

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oe()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/components/core/offline/a;->as(I)V

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oh()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oi()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/y;->h(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "init isSuccessLoaded: getCompoName()"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oh()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v1, Lcom/kwad/components/core/offline/init/a$1;

    invoke-direct {v1, p0, v0, p1}, Lcom/kwad/components/core/offline/init/a$1;-><init>(Lcom/kwad/components/core/offline/init/a;ZLandroid/content/Context;)V

    invoke-static {v1}, Lcom/kwad/components/core/p/f;->a(Lcom/kwad/components/core/p/f$a;)V

    return-void
.end method

.method public abstract isEnabled()Z
.end method

.method public abstract oe()I
.end method

.method protected of()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method protected abstract oh()Ljava/lang/String;
.end method

.method protected abstract oi()Ljava/lang/String;
.end method

.method protected abstract oj()Ljava/lang/String;
.end method

.method protected abstract ok()Ljava/lang/String;
.end method

.method protected abstract ol()Ljava/lang/String;
.end method

.method public final om()V
    .locals 5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/components/core/offline/init/a;->Db:J

    sub-long/2addr v0, v2

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->getTag()Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "init success cost: "

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/a;->oe()I

    move-result v2

    invoke-static {v2, v0, v1}, Lcom/kwad/components/core/offline/a;->b(IJ)V

    return-void
.end method
