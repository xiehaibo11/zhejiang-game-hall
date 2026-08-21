.class public Lcom/tramini/plugin/a/e/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tramini/plugin/a/e/f$b;,
        Lcom/tramini/plugin/a/e/f$d;,
        Lcom/tramini/plugin/a/e/f$a;,
        Lcom/tramini/plugin/a/e/f$c;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method protected static a(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;
    .locals 3

    .line 117
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Class;

    .line 118
    invoke-virtual {v0, p1, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    .line 119
    invoke-virtual {p1, p0, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method protected static a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;
    .locals 5

    const/4 v0, 0x0

    if-nez p3, :cond_0

    return-object v0

    :cond_0
    if-eqz p0, :cond_5

    .line 141
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 143
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 146
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 147
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    :goto_0
    if-eqz v2, :cond_1

    .line 149
    invoke-virtual {v2}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v3

    .line 150
    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 151
    invoke-virtual {v2}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object v2

    goto :goto_0

    .line 153
    :cond_1
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    if-eqz v2, :cond_5

    .line 154
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/reflect/Field;

    const/4 v3, 0x1

    .line 155
    invoke-virtual {v2, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 157
    invoke-virtual {v2, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 161
    invoke-interface {p3, v2}, Lcom/tramini/plugin/a/e/f$c;->a(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 163
    invoke-interface {p3, v2}, Lcom/tramini/plugin/a/e/f$c;->b(Ljava/lang/Object;)Lcom/tramini/plugin/a/e/f$a;

    move-result-object v2

    .line 164
    iget v4, v2, Lcom/tramini/plugin/a/e/f$a;->d:I

    if-eqz v4, :cond_2

    if-ne v4, v3, :cond_3

    .line 168
    iget-object p0, v2, Lcom/tramini/plugin/a/e/f$a;->e:Ljava/lang/Object;

    return-object p0

    :cond_3
    const/4 v3, -0x1

    if-ne v4, v3, :cond_2

    .line 174
    iget-object v2, v2, Lcom/tramini/plugin/a/e/f$a;->e:Ljava/lang/Object;

    if-eqz v2, :cond_2

    .line 176
    invoke-virtual {p2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 180
    invoke-static {v2, p1, p2, p3}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    return-object v2

    .line 188
    :cond_4
    invoke-virtual {p2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    .line 192
    invoke-static {v2, p1, p2, p3}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/StringBuffer;Lcom/tramini/plugin/a/e/f$c;)Ljava/lang/Object;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_2

    return-object v2

    :catchall_0
    :cond_5
    return-object v0
.end method

.method protected static a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .locals 6

    const/4 v0, 0x0

    .line 73
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const-string v1, "getInstance"

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 74
    invoke-virtual {p0, v1, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    new-array v1, v2, [Ljava/lang/Object;

    .line 75
    invoke-virtual {p0, v0, v1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 77
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 80
    array-length v3, v1

    :goto_0
    if-ge v2, v3, :cond_3

    aget-object v4, v1, v2

    const/4 v5, 0x1

    .line 81
    invoke-virtual {v4, v5}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 82
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    .line 83
    instance-of v5, v5, Ljava/util/Map;

    if-eqz v5, :cond_2

    .line 84
    invoke-virtual {v4, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/Map;

    if-nez p0, :cond_0

    return-object v0

    .line 88
    :cond_0
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    .line 89
    instance-of v2, v1, Ljava/lang/ref/WeakReference;

    if-eqz v2, :cond_1

    .line 90
    check-cast v1, Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    return-object p0

    .line 92
    :cond_1
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_0
    :cond_3
    return-object v0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 252
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 255
    :cond_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    const-string v1, "id"

    .line 256
    invoke-virtual {p0, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method static synthetic a(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
    .locals 0

    .line 33
    invoke-static {p0, p1, p2}, Lcom/tramini/plugin/a/e/f;->b(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method protected static a(Ljava/lang/Class;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class;",
            "Ljava/util/List<",
            "Ljava/lang/reflect/Field;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_2

    .line 37
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    const-class v1, Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 40
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 41
    array-length v1, v0

    if-lez v1, :cond_1

    .line 42
    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 45
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/Class;Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    :goto_0
    return-void
.end method

.method protected static b(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;
    .locals 1

    .line 127
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    .line 128
    invoke-virtual {v0, p1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    const/4 v0, 0x1

    .line 129
    invoke-virtual {p1, v0}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 130
    invoke-virtual {p1, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method protected static b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;
    .locals 3

    const/4 v0, 0x0

    .line 107
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Class;

    .line 108
    invoke-virtual {p0, p1, v2}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    new-array p1, v1, [Ljava/lang/Object;

    .line 109
    invoke-virtual {p0, v0, p1}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method public static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    .line 265
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 268
    :cond_0
    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    const-string v1, "adurl"

    .line 269
    invoke-virtual {p0, v1}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 270
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    .line 273
    :cond_1
    invoke-static {p0}, Lcom/tramini/plugin/a/e/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    return-object v0
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
    .locals 9

    const/4 v0, 0x2

    .line 406
    invoke-static {v0}, Ljava/util/concurrent/Executors;->newFixedThreadPool(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    const/4 v1, 0x1

    new-array v7, v1, [Ljava/lang/String;

    .line 409
    new-instance v8, Lcom/tramini/plugin/a/e/f$1;

    move-object v1, v8

    move-object v2, p1

    move-object v3, p0

    move-object v4, v7

    move v5, p2

    move-object v6, v0

    invoke-direct/range {v1 .. v6}, Lcom/tramini/plugin/a/e/f$1;-><init>(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;ILjava/util/concurrent/ExecutorService;)V

    invoke-interface {v0, v8}, Ljava/util/concurrent/ExecutorService;->submit(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;

    .line 431
    :try_start_0
    monitor-enter v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-wide/16 p0, 0x1f4

    .line 432
    :try_start_1
    invoke-virtual {v0, p0, p1}, Ljava/lang/Object;->wait(J)V

    .line 433
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 434
    :try_start_2
    invoke-interface {v0}, Ljava/util/concurrent/ExecutorService;->shutdown()V

    const/4 p0, 0x0

    .line 435
    aget-object p1, v7, p0

    if-eqz p1, :cond_0

    aget-object p0, v7, p0

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0

    :catchall_0
    move-exception p0

    .line 433
    monitor-exit v0

    throw p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    const-string p0, ""

    return-object p0
.end method

.method protected static b(Ljava/lang/Class;Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class;",
            "Ljava/util/List<",
            "Ljava/lang/reflect/Method;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_2

    .line 54
    :try_start_0
    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    const-class v1, Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 57
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 58
    array-length v1, v0

    if-lez v1, :cond_1

    .line 59
    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 62
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Class;->getSuperclass()Ljava/lang/Class;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/tramini/plugin/a/e/f;->b(Ljava/lang/Class;Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    :goto_0
    return-void
.end method

.method public static c(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 442
    new-instance v0, Ljava/util/Properties;

    invoke-direct {v0}, Ljava/util/Properties;-><init>()V

    .line 443
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "unicodedString="

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 444
    new-instance v1, Ljava/io/StringReader;

    invoke-direct {v1, p0}, Ljava/io/StringReader;-><init>(Ljava/lang/String;)V

    .line 446
    :try_start_0
    invoke-virtual {v0, v1}, Ljava/util/Properties;->load(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string p0, "unicodedString"

    .line 449
    invoke-virtual {v0, p0}, Ljava/util/Properties;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    .line 1402
    invoke-static {p0, p1, v0}, Lcom/tramini/plugin/a/e/f;->b(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    :try_start_0
    const-string v0, "%(?![0-9a-fA-F]{2})"

    const-string v1, "%25"

    .line 455
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "UTF-8"

    invoke-static {v0, v1}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception v0

    .line 458
    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    return-object p0
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    .line 402
    invoke-static {p0, p1, v0}, Lcom/tramini/plugin/a/e/f;->b(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
