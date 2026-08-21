.class public abstract Lcom/kwad/sdk/k/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/k/a/c;


# instance fields
.field protected aGk:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/k/a/c;",
            ">;"
        }
    .end annotation
.end field

.field protected enabled:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/k/a/a;->enabled:Z

    return-void
.end method

.method public constructor <init>(Z)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-boolean p1, p0, Lcom/kwad/sdk/k/a/a;->enabled:Z

    return-void
.end method

.method private getChildren()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/k/a/c;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/k/a/a;->aGk:Ljava/util/List;

    return-object v0
.end method


# virtual methods
.method public final bA(Landroid/content/Context;)Z
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/sdk/k/a/a;->enabled:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-direct {p0}, Lcom/kwad/sdk/k/a/a;->getChildren()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_3

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/k/a/c;

    invoke-interface {v2, p1}, Lcom/kwad/sdk/k/a/c;->bA(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_2
    return v1

    :cond_3
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/kwad/sdk/k/a/a;->bB(Landroid/content/Context;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    return v1
.end method

.method protected bB(Landroid/content/Context;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method
