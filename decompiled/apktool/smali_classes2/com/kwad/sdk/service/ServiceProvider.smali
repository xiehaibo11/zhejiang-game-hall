.class public final Lcom/kwad/sdk/service/ServiceProvider;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;
    }
.end annotation


# static fields
.field private static IQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Throwable;",
            ">;"
        }
    .end annotation
.end field

.field private static aHD:Landroid/content/Context;

.field private static aHE:Landroid/content/Context;

.field private static aHF:Lcom/kwad/sdk/api/SdkConfig;

.field private static aHG:Z

.field private static mContext:Landroid/content/Context;


# direct methods
.method public static HC()V
    .locals 1

    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/service/ServiceProvider;->aHG:Z

    return-void
.end method

.method public static HD()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->mContext:Landroid/content/Context;

    return-object v0
.end method

.method public static HE()Lcom/kwad/sdk/api/SdkConfig;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->aHF:Lcom/kwad/sdk/api/SdkConfig;

    return-object v0
.end method

.method public static a(Lcom/kwad/sdk/api/SdkConfig;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/service/ServiceProvider;->aHF:Lcom/kwad/sdk/api/SdkConfig;

    return-void
.end method

.method public static b(Ljava/lang/Throwable;)V
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    if-eqz v0, :cond_0

    invoke-interface {v0, p0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->c(Ljava/lang/Throwable;)V

    return-void
.end method

.method public static bC(Landroid/content/Context;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/service/ServiceProvider;->aHD:Landroid/content/Context;

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dx(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/kwad/sdk/service/ServiceProvider;->mContext:Landroid/content/Context;

    return-void
.end method

.method private static c(Ljava/lang/Throwable;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    :cond_0
    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static d(Lcom/kwad/sdk/g/a;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/g/a<",
            "Ljava/lang/Throwable;",
            ">;)V"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Throwable;

    invoke-interface {p0, v1}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    goto :goto_0

    :cond_1
    sget-object p0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->clear()V

    const/4 p0, 0x0

    sput-object p0, Lcom/kwad/sdk/service/ServiceProvider;->IQ:Ljava/util/List;

    return-void
.end method

.method public static get(Ljava/lang/Class;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;->INSTANCE:Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    sget-boolean v0, Lcom/kwad/sdk/service/ServiceProvider;->aHG:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    return-object v0

    :cond_0
    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->aHE:Landroid/content/Context;

    if-nez v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/service/ServiceProvider;->aHE:Landroid/content/Context;

    :cond_1
    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider;->aHE:Landroid/content/Context;

    return-object v0
.end method

.method public static put(Ljava/lang/Class;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;TT;)V"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;->INSTANCE:Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;

    invoke-virtual {v0, p0, p1}, Lcom/kwad/sdk/service/ServiceProvider$ServiceProviderDelegate;->put(Ljava/lang/Class;Ljava/lang/Object;)V

    return-void
.end method
