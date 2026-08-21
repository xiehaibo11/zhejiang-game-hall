.class public abstract Lcom/kwad/sdk/utils/j;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field protected IH:Z

.field protected aIe:Z


# direct methods
.method public constructor <init>(Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/utils/j;->aIe:Z

    iput-boolean p1, p0, Lcom/kwad/sdk/utils/j;->IH:Z

    return-void
.end method


# virtual methods
.method public final aO(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/utils/j;->IH:Z

    return-void
.end method

.method public final bO(Landroid/content/Context;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")TT;"
        }
    .end annotation

    iget-boolean v0, p0, Lcom/kwad/sdk/utils/j;->IH:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/sdk/utils/j;->aIe:Z

    if-eqz v0, :cond_1

    return-object v1

    :cond_1
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/kwad/sdk/utils/j;->bP(Landroid/content/Context;)Ljava/lang/Object;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return-object v1
.end method

.method protected abstract bP(Landroid/content/Context;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")TT;"
        }
    .end annotation
.end method
