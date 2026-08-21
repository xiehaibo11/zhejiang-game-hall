.class public final Lcom/kwad/library/b/a/a;
.super Ldalvik/system/PathClassLoader;


# static fields
.field private static final afa:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/ClassLoader;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final aeZ:Ldalvik/system/BaseDexClassLoader;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/library/b/a/a;->afa:Ljava/util/List;

    return-void
.end method

.method public constructor <init>(Ldalvik/system/BaseDexClassLoader;)V
    .locals 1

    const-string v0, ""

    invoke-direct {p0, v0, p1}, Ldalvik/system/PathClassLoader;-><init>(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    iput-object p1, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    return-void
.end method


# virtual methods
.method protected final findClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v1, p1}, Ldalvik/system/BaseDexClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-class v2, Landroid/app/Activity;

    invoke-virtual {v2, v1}, Ljava/lang/Class;->isAssignableFrom(Ljava/lang/Class;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    return-object v1

    :cond_0
    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    goto :goto_0

    :catchall_0
    move-exception v1

    :goto_0
    if-nez v0, :cond_4

    sget-object v0, Lcom/kwad/library/b/a/a;->afa:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catchall_1
    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/ClassLoader;

    :try_start_1
    invoke-virtual {v2, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v2, :cond_1

    return-object v2

    :cond_2
    instance-of v0, v1, Ljava/lang/ClassNotFoundException;

    if-eqz v0, :cond_3

    check-cast v1, Ljava/lang/ClassNotFoundException;

    throw v1

    :cond_3
    new-instance v0, Ljava/lang/ClassNotFoundException;

    invoke-direct {v0, p1, v1}, Ljava/lang/ClassNotFoundException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v0

    :cond_4
    return-object v0
.end method

.method public final findLibrary(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v0, p1}, Ldalvik/system/BaseDexClassLoader;->findLibrary(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getResource(Ljava/lang/String;)Ljava/net/URL;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v0, p1}, Ldalvik/system/BaseDexClassLoader;->getResource(Ljava/lang/String;)Ljava/net/URL;

    move-result-object p1

    return-object p1
.end method

.method public final getResourceAsStream(Ljava/lang/String;)Ljava/io/InputStream;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v0, p1}, Ljava/lang/ClassLoader;->getResourceAsStream(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p1

    return-object p1
.end method

.method public final getResources(Ljava/lang/String;)Ljava/util/Enumeration;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Enumeration<",
            "Ljava/net/URL;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v0, p1}, Ldalvik/system/BaseDexClassLoader;->getResources(Ljava/lang/String;)Ljava/util/Enumeration;

    move-result-object p1

    return-object p1
.end method

.method public final loadClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    invoke-virtual {p0, p1}, Lcom/kwad/library/b/a/a;->findClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method public final toString()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/b/a/a;->aeZ:Ldalvik/system/BaseDexClassLoader;

    invoke-virtual {v0}, Ldalvik/system/BaseDexClassLoader;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
