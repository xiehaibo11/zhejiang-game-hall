.class final Lcom/kuaishou/weapon/p0/do$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kuaishou/weapon/p0/do;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "b"
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Ljava/lang/ClassLoader;Ljava/io/File;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/do$b;->b(Ljava/lang/ClassLoader;Ljava/io/File;)V

    return-void
.end method

.method private static b(Ljava/lang/ClassLoader;Ljava/io/File;)V
    .locals 6

    const-string v0, "pathList"

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/dq;->a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    const-string v0, "nativeLibraryDirectories"

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/dq;->a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    const/4 v3, 0x2

    if-nez v2, :cond_0

    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2, v3}, Ljava/util/ArrayList;-><init>(I)V

    :cond_0
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4, v2}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/io/File;

    invoke-virtual {p1, v5}, Ljava/io/File;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    return-void

    :cond_2
    invoke-interface {v4, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-virtual {v1, p0, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eq p1, v4, :cond_3

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/dq;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    invoke-virtual {p1, p0, v4}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    :cond_3
    const-string p1, "systemNativeLibraryDirectories"

    invoke-static {p0, p1}, Lcom/kuaishou/weapon/p0/dq;->a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    invoke-virtual {p1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/List;

    if-nez p1, :cond_4

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1, v3}, Ljava/util/ArrayList;-><init>(I)V

    :cond_4
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    add-int/2addr v1, v2

    const/4 v2, 0x1

    add-int/2addr v1, v2

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-interface {v0, v4}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-interface {v0, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    const/4 p1, 0x3

    new-array v1, p1, [Ljava/lang/Class;

    const-class v4, Ljava/util/List;

    const/4 v5, 0x0

    aput-object v4, v1, v5

    const-class v4, Ljava/io/File;

    aput-object v4, v1, v2

    const-class v4, Ljava/util/List;

    aput-object v4, v1, v3

    const-string v4, "makePathElements"

    invoke-static {p0, v4, v1}, Lcom/kuaishou/weapon/p0/dq;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    new-array p1, p1, [Ljava/lang/Object;

    aput-object v0, p1, v5

    const/4 v0, 0x0

    aput-object v0, p1, v2

    aput-object v4, p1, v3

    invoke-virtual {v1, p0, p1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Ljava/lang/Object;

    check-cast p1, [Ljava/lang/Object;

    const-string v0, "nativeLibraryPathElements"

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/dq;->a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    invoke-virtual {v1, p0, p1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-virtual {v1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eq v1, p1, :cond_5

    invoke-static {p0, v0}, Lcom/kuaishou/weapon/p0/dq;->b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    :cond_5
    return-void
.end method
