.class public final Lcom/kwad/sdk/core/a/d;
.super Ljava/lang/Object;


# static fields
.field private static aot:Lcom/kwad/sdk/core/a/f;


# direct methods
.method public static a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/a/d;->nR()Lcom/kwad/sdk/core/a/f;

    move-result-object v0

    invoke-interface {v0, p0, p1, p2}, Lcom/kwad/sdk/core/a/f;->a(Ljava/lang/String;Ljava/util/Map;Ljava/lang/String;)V

    return-void
.end method

.method public static cQ(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/a/d;->nR()Lcom/kwad/sdk/core/a/f;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/a/f;->cQ(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static e(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/a/d;->nR()Lcom/kwad/sdk/core/a/f;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/a/f;->e(Ljava/util/Map;)V

    return-void
.end method

.method public static getResponseData(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    invoke-static {}, Lcom/kwad/sdk/core/a/d;->nR()Lcom/kwad/sdk/core/a/f;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/a/f;->getResponseData(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static nR()Lcom/kwad/sdk/core/a/f;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/a/d;->aot:Lcom/kwad/sdk/core/a/f;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-class v0, Lcom/kwad/sdk/components/f;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/components/f;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/components/f;->nR()Lcom/kwad/sdk/core/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/components/f;->nR()Lcom/kwad/sdk/core/a/f;

    move-result-object v0

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/a/a;-><init>()V

    :goto_0
    sput-object v0, Lcom/kwad/sdk/core/a/d;->aot:Lcom/kwad/sdk/core/a/f;

    sget-object v0, Lcom/kwad/sdk/core/a/d;->aot:Lcom/kwad/sdk/core/a/f;

    return-object v0
.end method
