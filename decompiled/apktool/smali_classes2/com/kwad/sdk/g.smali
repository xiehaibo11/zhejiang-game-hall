.class public final Lcom/kwad/sdk/g;
.super Ljava/lang/Object;


# static fields
.field private static agW:Lcom/kwad/sdk/export/proxy/AdHttpProxy;


# direct methods
.method public static wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/g;->agW:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/kwad/sdk/g;->wY()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v0

    return-object v0

    :cond_1
    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/network/a/c;->Bm()Lokhttp3/OkHttpClient;

    move-result-object v0

    if-eqz v0, :cond_2

    new-instance v0, Lcom/kwad/sdk/core/network/c/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/b;-><init>()V

    :goto_0
    sput-object v0, Lcom/kwad/sdk/g;->agW:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    goto :goto_1

    :cond_2
    new-instance v0, Lcom/kwad/sdk/core/network/c/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/a;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    new-instance v0, Lcom/kwad/sdk/core/network/c/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/a;-><init>()V

    sput-object v0, Lcom/kwad/sdk/g;->agW:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    :goto_1
    sget-object v0, Lcom/kwad/sdk/g;->agW:Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    return-object v0
.end method

.method private static wY()Lcom/kwad/sdk/export/proxy/AdHttpProxy;
    .locals 2

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/network/c/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/b;-><init>()V

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/network/c/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/c/a;-><init>()V

    return-object v0
.end method
