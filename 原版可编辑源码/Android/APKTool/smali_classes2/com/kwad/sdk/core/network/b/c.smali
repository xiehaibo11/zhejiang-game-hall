.class public final Lcom/kwad/sdk/core/network/b/c;
.super Ljava/lang/Object;


# direct methods
.method public static BA()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xD()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/network/b/d;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/b/d;-><init>()V

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/network/b/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/b/a;-><init>()V

    return-object v0
.end method
