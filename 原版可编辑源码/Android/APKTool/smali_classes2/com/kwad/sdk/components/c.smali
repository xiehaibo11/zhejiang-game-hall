.class public final Lcom/kwad/sdk/components/c;
.super Ljava/lang/Object;


# static fields
.field private static final ajZ:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Class;",
            "Lcom/kwad/sdk/components/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/components/c;->ajZ:Ljava/util/Map;

    return-void
.end method

.method public static a(Ljava/lang/Class;Lcom/kwad/sdk/components/a;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/components/c;->ajZ:Ljava/util/Map;

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T::",
            "Lcom/kwad/sdk/components/a;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/components/c;->ajZ:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/components/a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/components/ComponentsNotFoundException;

    invoke-virtual {p0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/sdk/components/ComponentsNotFoundException;-><init>(Ljava/lang/String;)V

    const-string v1, "KSAdSDK"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/Throwable;)V

    :try_start_0
    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-virtual {v0, p0}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/components/e;

    invoke-direct {v0}, Lcom/kwad/sdk/components/e;-><init>()V

    sget-object v1, Lcom/kwad/sdk/components/c;->ajZ:Ljava/util/Map;

    invoke-interface {v1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 2

    new-instance v0, Ljava/util/ArrayList;

    sget-object v1, Lcom/kwad/sdk/components/c;->ajZ:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    new-instance v1, Lcom/kwad/sdk/components/c$1;

    invoke-direct {v1}, Lcom/kwad/sdk/components/c$1;-><init>()V

    invoke-static {v0, v1}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/components/a;

    if-eqz v1, :cond_0

    :try_start_0
    invoke-interface {v1, p0}, Lcom/kwad/sdk/components/a;->init(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_1
    return-void
.end method
