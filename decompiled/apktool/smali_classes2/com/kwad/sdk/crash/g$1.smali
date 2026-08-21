.class final Lcom/kwad/sdk/crash/g$1;
.super Lcom/kwad/library/solder/lib/ext/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/crash/g;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/c/b;Lcom/kwad/sdk/crash/g$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic azZ:Lcom/kwad/sdk/crash/g$a;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/crash/g$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/crash/g$1;->azZ:Lcom/kwad/sdk/crash/g$a;

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/ext/b$c;-><init>()V

    return-void
.end method

.method private EL()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onFail thread="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ExceptionSoLoadHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->a(Lcom/kwad/library/solder/lib/a/f;)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onCanceled thread="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ExceptionSoLoadHelper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private c(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->b(Lcom/kwad/library/solder/lib/a/f;)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "onPostUpdate thread="

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ExceptionSoLoadHelper"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private sI()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onPostLoad thread="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ExceptionSoLoadHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/crash/g$1;->azZ:Lcom/kwad/sdk/crash/g$a;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/crash/g$a;->Ex()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/g$1;->a(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

.method public final synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/g$1;->sI()V

    return-void
.end method

.method public final synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/g$1;->EL()V

    return-void
.end method

.method public final synthetic b(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/g$1;->c(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method
