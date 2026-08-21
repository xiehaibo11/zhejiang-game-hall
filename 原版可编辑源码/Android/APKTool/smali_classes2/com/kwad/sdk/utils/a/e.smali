.class public final Lcom/kwad/sdk/utils/a/e;
.super Ljava/lang/Object;


# static fields
.field static aGN:Z

.field static aLu:Ljava/util/concurrent/ExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Ljava/util/concurrent/Executors;->newSingleThreadExecutor()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/a/e;->aLu:Ljava/util/concurrent/ExecutorService;

    invoke-static {}, Lcom/kwad/sdk/utils/a/e;->KB()Z

    move-result v0

    sput-boolean v0, Lcom/kwad/sdk/utils/a/e;->aGN:Z

    return-void
.end method

.method private static KB()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/utils/a/e;->aLu:Ljava/util/concurrent/ExecutorService;

    invoke-static {v0}, Lcom/kwad/sdk/utils/a/d;->setExecutor(Ljava/util/concurrent/Executor;)V

    new-instance v0, Lcom/kwad/sdk/utils/a/e$1;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/a/e$1;-><init>()V

    invoke-static {v0}, Lcom/kwad/sdk/utils/a/d;->a(Lcom/kwad/sdk/utils/a/c$d;)V

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/utils/a/e;->aGN:Z

    return v0
.end method

.method public static at(Landroid/content/Context;Ljava/lang/String;)Lcom/kwad/sdk/utils/a/c;
    .locals 1

    sget-boolean v0, Lcom/kwad/sdk/utils/a/e;->aGN:Z

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/a/e;->KB()Z

    :cond_0
    const-string v0, "ks_union"

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/q;->K(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Lcom/kwad/sdk/utils/a/c$a;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/utils/a/c$a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/utils/a/c$a;->Kz()Lcom/kwad/sdk/utils/a/c;

    move-result-object p0

    return-object p0
.end method
