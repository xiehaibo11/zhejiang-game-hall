.class final Lcom/kwad/sdk/collector/b/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/collector/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/collector/b/a;->onCreate(Landroid/app/Service;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ajU:Lcom/kwad/sdk/collector/b/a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/collector/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/collector/b/a$1;->ajU:Lcom/kwad/sdk/collector/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final cj(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onLoadError: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RemoteService"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/collector/b/a;->mH()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method public final onLoaded()V
    .locals 2

    const-string v0, "RemoteService"

    const-string v1, "onLoaded"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/collector/b/a;->mH()Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    sget-object v0, Lcom/kwad/sdk/collector/b/a;->ajT:Landroid/os/Message;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/collector/b/a$1;->ajU:Lcom/kwad/sdk/collector/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/collector/b/a;->a(Lcom/kwad/sdk/collector/b/a;)Lcom/kwad/sdk/collector/b/a$a;

    move-result-object v0

    sget-object v1, Lcom/kwad/sdk/collector/b/a;->ajT:Landroid/os/Message;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/collector/b/a$a;->handleMessage(Landroid/os/Message;)V

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/sdk/collector/b/a;->ajT:Landroid/os/Message;

    :cond_0
    return-void
.end method
