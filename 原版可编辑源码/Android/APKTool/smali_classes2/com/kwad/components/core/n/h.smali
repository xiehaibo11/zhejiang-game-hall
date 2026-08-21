.class public Lcom/kwad/components/core/n/h;
.super Ljava/lang/Object;


# static fields
.field private static volatile Pk:Lcom/kwad/components/core/n/h;


# instance fields
.field private final mListeners:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/n/i;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/n/h;->mListeners:Ljava/util/List;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/n/h;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/n/h;->mListeners:Ljava/util/List;

    return-object p0
.end method

.method private c(Lcom/kwad/sdk/g/a;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/g/a<",
            "Lcom/kwad/components/core/n/i;",
            ">;)V"
        }
    .end annotation

    new-instance v0, Lcom/kwad/components/core/n/h$5;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/n/h$5;-><init>(Lcom/kwad/components/core/n/h;Lcom/kwad/sdk/g/a;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static py()Lcom/kwad/components/core/n/h;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/n/h;->Pk:Lcom/kwad/components/core/n/h;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/n/h;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/n/h;->Pk:Lcom/kwad/components/core/n/h;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/n/h;

    invoke-direct {v1}, Lcom/kwad/components/core/n/h;-><init>()V

    sput-object v1, Lcom/kwad/components/core/n/h;->Pk:Lcom/kwad/components/core/n/h;

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
    sget-object v0, Lcom/kwad/components/core/n/h;->Pk:Lcom/kwad/components/core/n/h;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/n/c;Landroid/os/Bundle;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/n/h$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/kwad/components/core/n/h$1;-><init>(Lcom/kwad/components/core/n/h;Lcom/kwad/components/core/n/c;Landroid/os/Bundle;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/n/h;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/n/i;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/n/h;->mListeners:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final e(Lcom/kwad/components/core/n/c;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/n/h$2;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/n/h$2;-><init>(Lcom/kwad/components/core/n/h;Lcom/kwad/components/core/n/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/n/h;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final f(Lcom/kwad/components/core/n/c;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/n/h$3;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/n/h$3;-><init>(Lcom/kwad/components/core/n/h;Lcom/kwad/components/core/n/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/n/h;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final g(Lcom/kwad/components/core/n/c;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/n/h$4;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/n/h$4;-><init>(Lcom/kwad/components/core/n/h;Lcom/kwad/components/core/n/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/n/h;->c(Lcom/kwad/sdk/g/a;)V

    return-void
.end method
