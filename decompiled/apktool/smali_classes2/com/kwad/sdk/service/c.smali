.class public final Lcom/kwad/sdk/service/c;
.super Ljava/lang/Object;


# direct methods
.method public static gatherException(Ljava/lang/Throwable;)V
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method
