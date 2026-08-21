.class public Lcom/kwad/components/core/t/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile Rg:Lcom/kwad/components/core/t/a;


# instance fields
.field private Rc:Lcom/kwad/sdk/utils/h;

.field private Rd:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;",
            ">;>;"
        }
    .end annotation
.end field

.field private Re:Z

.field private Rf:Z


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/t/a;->Rd:Ljava/util/List;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/t/a;->Re:Z

    iput-boolean v0, p0, Lcom/kwad/components/core/t/a;->Rf:Z

    invoke-direct {p0, p1}, Lcom/kwad/components/core/t/a;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/t/a;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/t/a;->Rd:Ljava/util/List;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/t/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/t/a;->Rf:Z

    return p1
.end method

.method public static al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/t/a;->Rg:Lcom/kwad/components/core/t/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/t/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/t/a;->Rg:Lcom/kwad/components/core/t/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/t/a;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v1, p0}, Lcom/kwad/components/core/t/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/kwad/components/core/t/a;->Rg:Lcom/kwad/components/core/t/a;

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
    sget-object p0, Lcom/kwad/components/core/t/a;->Rg:Lcom/kwad/components/core/t/a;

    return-object p0
.end method

.method private init(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/core/t/a;->Re:Z

    new-instance v0, Lcom/kwad/sdk/utils/h;

    invoke-direct {v0, p1}, Lcom/kwad/sdk/utils/h;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/core/t/a;->Rc:Lcom/kwad/sdk/utils/h;

    new-instance p1, Lcom/kwad/components/core/t/a$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/t/a$1;-><init>(Lcom/kwad/components/core/t/a;)V

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/utils/h;->c(Lcom/kwad/sdk/utils/h$a;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/a;->Rd:Ljava/util/List;

    new-instance v1, Ljava/lang/ref/WeakReference;

    invoke-direct {v1, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final aJ(Z)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/a;->Rc:Lcom/kwad/sdk/utils/h;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    if-nez p1, :cond_1

    iget-boolean p1, p0, Lcom/kwad/components/core/t/a;->Re:Z

    if-eqz p1, :cond_1

    return v1

    :cond_1
    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/t/a;->Re:Z

    iput-boolean v1, p0, Lcom/kwad/components/core/t/a;->Rf:Z

    iget-object p1, p0, Lcom/kwad/components/core/t/a;->Rc:Lcom/kwad/sdk/utils/h;

    invoke-virtual {p1}, Lcom/kwad/sdk/utils/h;->HT()Z

    move-result p1

    return p1
.end method

.method public final b(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/a;->Rd:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/ref/WeakReference;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-ne v1, p1, :cond_0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final qh()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/t/a;->Rf:Z

    return v0
.end method

.method public final qi()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/core/t/a;->Re:Z

    return v0
.end method
