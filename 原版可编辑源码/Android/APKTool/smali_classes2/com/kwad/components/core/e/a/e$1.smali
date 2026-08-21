.class final Lcom/kwad/components/core/e/a/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/e/a/e;->M(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic IZ:Lcom/kwad/components/core/e/a/e;

.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/a/e;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/a/e$1;->IZ:Lcom/kwad/components/core/e/a/e;

    iput-object p2, p0, Lcom/kwad/components/core/e/a/e$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/e/a/e$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e$1;->mP()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/e/a/e$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e$1;->mQ()V

    return-void
.end method

.method private mP()V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->isEnable()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-static {v0}, Lcom/kwad/components/core/e/a/e;->a(Lcom/kwad/components/core/e/a/e;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->isAppOnForeground()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e$1;->mQ()V

    return-void

    :cond_2
    :goto_0
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    new-instance v0, Lcom/kwad/components/core/e/a/e$1$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/e/a/e$1$2;-><init>(Lcom/kwad/components/core/e/a/e$1;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V

    return-void
.end method

.method private mQ()V
    .locals 2

    const-string v0, "InstalledActivateManager"

    const-string v1, "startShow"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1;->IZ:Lcom/kwad/components/core/e/a/e;

    iget-object v1, p0, Lcom/kwad/components/core/e/a/e$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1}, Lcom/kwad/components/core/e/a/e;->a(Lcom/kwad/components/core/e/a/e;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-static {v0}, Lcom/kwad/components/core/e/a/e;->a(Lcom/kwad/components/core/e/a/e;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    iget-object v0, p0, Lcom/kwad/components/core/e/a/e$1;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/e/a/e$1;->IZ:Lcom/kwad/components/core/e/a/e;

    invoke-static {v1}, Lcom/kwad/components/core/e/a/e;->b(Lcom/kwad/components/core/e/a/e;)Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Set;->remove(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    const-class v0, Lcom/kwad/components/ad/b/a/a;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/b/a/a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/b/a/a;->S()Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/e/a/e$1$1;

    invoke-direct {v1, p0, v0}, Lcom/kwad/components/core/e/a/e$1$1;-><init>(Lcom/kwad/components/core/e/a/e$1;Lcom/kwad/components/ad/b/a/a;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/b/a/a;->a(Lcom/kwad/components/ad/b/a/b;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/core/e/a/e$1;->mP()V

    return-void
.end method
