.class public Lcom/kwad/library/b/c/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/b/c/a$a;
    }
.end annotation


# static fields
.field private static final CLAZZ_NAME:Ljava/lang/String;

.field private static final sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ThreadLocal<",
            "Lcom/kwad/library/b/c/a$a;",
            ">;"
        }
    .end annotation
.end field

.field private static final sAutoUnWrapStackList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final sResContextCache:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/kwad/library/b/c/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/library/b/c/a;->CLAZZ_NAME:Ljava/lang/String;

    new-instance v0, Ljava/lang/ThreadLocal;

    invoke-direct {v0}, Ljava/lang/ThreadLocal;-><init>()V

    sput-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapStackList:Ljava/util/List;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/kwad/library/b/c/a;->sResContextCache:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    sget-object v0, Lcom/kwad/library/b/c/a;->sResContextCache:Ljava/util/Map;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/ref/WeakReference;

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method static a(Landroid/content/res/Resources$Theme;Landroid/content/res/Resources$Theme;ILjava/lang/String;)Landroid/content/res/Resources$Theme;
    .locals 1

    invoke-static {p3}, Lcom/kwad/library/b/c/a;->by(Ljava/lang/String;)Lcom/kwad/library/b/a;

    move-result-object p3

    if-eqz p3, :cond_2

    invoke-virtual {p3}, Lcom/kwad/library/b/a;->isLoaded()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p3}, Lcom/kwad/library/b/a;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    if-eqz p3, :cond_2

    if-nez p1, :cond_1

    invoke-virtual {p3}, Landroid/content/res/Resources;->newTheme()Landroid/content/res/Resources$Theme;

    move-result-object p1

    const/4 p0, 0x1

    invoke-virtual {p1, p2, p0}, Landroid/content/res/Resources$Theme;->applyStyle(IZ)V

    :cond_1
    return-object p1

    :cond_2
    :goto_0
    return-object p0
.end method

.method static a(Landroid/content/res/Resources;Ljava/lang/String;)Landroid/content/res/Resources;
    .locals 3

    invoke-static {p1}, Lcom/kwad/library/b/c/a;->by(Ljava/lang/String;)Lcom/kwad/library/b/a;

    move-result-object v0

    const-string v1, "replaceExternalResources pluginId: "

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/library/b/a;->isLoaded()Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/library/b/a;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ", wrappedResources: "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    return-object p0

    :cond_2
    :goto_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " , plugin: "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ", isLoaded(): false"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object p0
.end method

.method public static a(Landroid/view/LayoutInflater;Ljava/lang/String;)Landroid/view/LayoutInflater;
    .locals 2

    invoke-static {p1}, Lcom/kwad/library/b/c/a;->by(Ljava/lang/String;)Lcom/kwad/library/b/a;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/library/b/a;->isLoaded()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object v0

    instance-of v1, v0, Lcom/kwad/library/b/c/b;

    if-nez v1, :cond_1

    invoke-static {v0, p1}, Lcom/kwad/library/b/c/a;->g(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Context;

    move-result-object p1

    instance-of v0, p1, Lcom/kwad/library/b/c/b;

    if-eqz v0, :cond_1

    invoke-virtual {p0, p1}, Landroid/view/LayoutInflater;->cloneInContext(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    :cond_1
    :goto_0
    return-object p0
.end method

.method private static a(Ljava/lang/String;Landroid/content/Context;Landroid/content/Context;)V
    .locals 2

    sget-object v0, Lcom/kwad/library/b/c/a;->sResContextCache:Ljava/util/Map;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static a(Ljava/lang/String;Landroid/content/Context;Lcom/kwad/library/b/c/a$a;)Z
    .locals 9

    invoke-static {p0, p1}, Lcom/kwad/library/b/c/a;->a(Ljava/lang/String;Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/library/b/c/a$a;->f(Lcom/kwad/library/b/c/a$a;)[Ljava/lang/StackTraceElement;

    move-result-object v0

    invoke-static {p1, v0}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "Solder.PluginWrapper"

    const/4 v2, 0x5

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v0, :cond_2

    invoke-static {p2}, Lcom/kwad/library/b/c/a$a;->g(Lcom/kwad/library/b/c/a$a;)I

    invoke-static {p2, p1}, Lcom/kwad/library/b/c/a$a;->a(Lcom/kwad/library/b/c/a$a;[Ljava/lang/StackTraceElement;)[Ljava/lang/StackTraceElement;

    invoke-static {p2}, Lcom/kwad/library/b/c/a$a;->h(Lcom/kwad/library/b/c/a$a;)I

    move-result p0

    if-lt p0, v2, :cond_1

    const-string p0, "needAutoUnWrap true \u8fde\u7eed\u76f8\u540c\u5806\u6808"

    :goto_1
    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v3

    :cond_1
    return v4

    :cond_2
    invoke-static {p2}, Lcom/kwad/library/b/c/a$a;->f(Lcom/kwad/library/b/c/a$a;)[Ljava/lang/StackTraceElement;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-static {p2}, Lcom/kwad/library/b/c/a$a;->e(Lcom/kwad/library/b/c/a$a;)V

    return v4

    :cond_3
    invoke-static {p2, p1}, Lcom/kwad/library/b/c/a$a;->a(Lcom/kwad/library/b/c/a$a;[Ljava/lang/StackTraceElement;)[Ljava/lang/StackTraceElement;

    move p2, v4

    move v0, p2

    :cond_4
    array-length v5, p1

    if-ge p2, v5, :cond_7

    aget-object v5, p1, p2

    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Lcom/kwad/library/b/c/a;->getAutoUnWrapStackList()Ljava/util/List;

    move-result-object v7

    invoke-interface {v7}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_5
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_6

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/String;

    invoke-virtual {v6, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_5

    const-string p0, "needAutoUnWrap true \u547d\u4e2d\u767d\u540d\u5355"

    goto :goto_1

    :cond_6
    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v5

    add-int/lit8 p2, p2, 0x1

    array-length v7, p1

    if-ge p2, v7, :cond_4

    sget-object v7, Lcom/kwad/library/b/c/a;->CLAZZ_NAME:Ljava/lang/String;

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    const-string v6, "wrapContextIfNeed"

    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    aget-object v5, p1, p2

    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v6

    invoke-static {p0, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_4

    invoke-virtual {v5}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v5

    const-string v6, "getBaseContext"

    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    add-int/lit8 v0, v0, 0x1

    if-lt v0, v2, :cond_4

    return v3

    :cond_7
    return v4
.end method

.method private static at(Landroid/content/Context;)Landroid/content/Context;
    .locals 0

    check-cast p0, Lcom/kwad/library/b/c/b;

    invoke-interface {p0}, Lcom/kwad/library/b/c/b;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private static au(Landroid/content/Context;)Z
    .locals 0

    instance-of p0, p0, Lcom/kwad/library/b/c/b;

    return p0
.end method

.method static b(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/ClassLoader;
    .locals 1

    invoke-static {p1}, Lcom/kwad/library/b/c/a;->by(Ljava/lang/String;)Lcom/kwad/library/b/a;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/b/a;->isLoaded()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/b/a;->vV()Lcom/kwad/library/b/a/b;

    move-result-object p1

    if-eqz p1, :cond_1

    return-object p1

    :cond_1
    :goto_0
    return-object p0
.end method

.method private static b(Ljava/lang/String;Landroid/content/Context;)Z
    .locals 6

    sget-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    invoke-virtual {v0}, Ljava/lang/ThreadLocal;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/library/b/c/a$a;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->a(Lcom/kwad/library/b/c/a$a;)Ljava/lang/ref/WeakReference;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-ne v2, p1, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->b(Lcom/kwad/library/b/c/a$a;)J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(J)J

    move-result-wide v2

    const-wide/16 v4, 0x96

    cmp-long v2, v2, v4

    if-gez v2, :cond_1

    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->c(Lcom/kwad/library/b/c/a$a;)I

    instance-of v2, p1, Landroid/app/Application;

    if-eqz v2, :cond_0

    const/16 v2, 0xf

    goto :goto_0

    :cond_0
    const/4 v2, 0x5

    :goto_0
    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->d(Lcom/kwad/library/b/c/a$a;)I

    move-result v3

    if-lt v3, v2, :cond_3

    invoke-static {p0, p1, v0}, Lcom/kwad/library/b/c/a;->a(Ljava/lang/String;Landroid/content/Context;Lcom/kwad/library/b/c/a$a;)Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->e(Lcom/kwad/library/b/c/a$a;)V

    const/4 p0, 0x1

    return p0

    :cond_1
    invoke-static {v0}, Lcom/kwad/library/b/c/a$a;->e(Lcom/kwad/library/b/c/a$a;)V

    new-instance p0, Ljava/lang/ref/WeakReference;

    invoke-direct {p0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-static {v0, p0}, Lcom/kwad/library/b/c/a$a;->a(Lcom/kwad/library/b/c/a$a;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    invoke-static {v0, p0, p1}, Lcom/kwad/library/b/c/a$a;->a(Lcom/kwad/library/b/c/a$a;J)J

    goto :goto_1

    :cond_2
    sget-object p0, Lcom/kwad/library/b/c/a;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    new-instance p1, Lcom/kwad/library/b/c/a$a;

    invoke-direct {p1, v1}, Lcom/kwad/library/b/c/a$a;-><init>(B)V

    invoke-virtual {p0, p1}, Ljava/lang/ThreadLocal;->set(Ljava/lang/Object;)V

    :cond_3
    :goto_1
    return v1
.end method

.method private static by(Ljava/lang/String;)Lcom/kwad/library/b/a;
    .locals 1

    invoke-static {}, Lcom/kwad/library/solder/lib/i;->wb()Lcom/kwad/library/solder/lib/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/i;->we()Lcom/kwad/library/solder/lib/a/d;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/library/solder/lib/a/d;->bB(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/a;->isLoaded()Z

    move-result v0

    if-eqz v0, :cond_1

    instance-of v0, p0, Lcom/kwad/library/b/a;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    check-cast p0, Lcom/kwad/library/b/a;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static g(Landroid/content/Context;Ljava/lang/String;)Landroid/content/Context;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-static {p1}, Lcom/kwad/library/b/c/a;->by(Ljava/lang/String;)Lcom/kwad/library/b/a;

    move-result-object v0

    if-eqz v0, :cond_7

    invoke-virtual {v0}, Lcom/kwad/library/b/a;->isLoaded()Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    instance-of v0, p0, Lcom/kwad/library/b/c/b;

    if-nez v0, :cond_7

    invoke-static {p1, p0}, Lcom/kwad/library/b/c/a;->b(Ljava/lang/String;Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-static {p1, p0}, Lcom/kwad/library/b/c/a;->a(Ljava/lang/String;Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_3

    return-object v0

    :cond_3
    instance-of v0, p0, Landroid/view/ContextThemeWrapper;

    if-eqz v0, :cond_4

    new-instance v0, Lcom/kwad/library/b/c/c;

    move-object v1, p0

    check-cast v1, Landroid/view/ContextThemeWrapper;

    invoke-direct {v0, v1, p1}, Lcom/kwad/library/b/c/c;-><init>(Landroid/view/ContextThemeWrapper;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    instance-of v0, p0, Landroid/support/v7/view/ContextThemeWrapper;

    if-eqz v0, :cond_5

    new-instance v0, Lcom/kwad/library/b/c/d;

    move-object v1, p0

    check-cast v1, Landroid/support/v7/view/ContextThemeWrapper;

    invoke-direct {v0, v1, p1}, Lcom/kwad/library/b/c/d;-><init>(Landroid/support/v7/view/ContextThemeWrapper;Ljava/lang/String;)V

    goto :goto_0

    :cond_5
    instance-of v0, p0, Landroid/content/ContextWrapper;

    if-eqz v0, :cond_6

    new-instance v0, Lcom/kwad/library/b/c/e;

    invoke-direct {v0, p0, p1}, Lcom/kwad/library/b/c/e;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_6
    new-instance v0, Lcom/kwad/library/b/c/e;

    invoke-direct {v0, p0, p1}, Lcom/kwad/library/b/c/e;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    invoke-static {p1, p0, v0}, Lcom/kwad/library/b/c/a;->a(Ljava/lang/String;Landroid/content/Context;Landroid/content/Context;)V

    return-object v0

    :cond_7
    :goto_1
    return-object p0
.end method

.method private static getAutoUnWrapStackList()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapStackList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapStackList:Ljava/util/List;

    const-string v1, "com.sensorsdata.analytics.android.sdk"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    sget-object v0, Lcom/kwad/library/b/c/a;->sAutoUnWrapStackList:Ljava/util/List;

    return-object v0
.end method

.method public static unwrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    invoke-static {p0}, Lcom/kwad/library/b/c/a;->au(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/library/b/c/a;->at(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/library/b/c/a;->au(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object p0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_3

    invoke-static {p0}, Lcom/kwad/library/b/c/a;->at(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/library/b/c/a;->au(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_2

    return-object p0

    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    return-object p0
.end method

.method static wrapSystemService(Ljava/lang/Object;Ljava/lang/String;Landroid/content/Context;)Ljava/lang/Object;
    .locals 1

    const-string v0, "layout_inflater"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    instance-of p1, p0, Landroid/view/LayoutInflater;

    if-eqz p1, :cond_1

    check-cast p0, Landroid/view/LayoutInflater;

    invoke-virtual {p0}, Landroid/view/LayoutInflater;->getContext()Landroid/content/Context;

    move-result-object p1

    instance-of p1, p1, Lcom/kwad/library/b/c/b;

    if-eqz p1, :cond_0

    return-object p0

    :cond_0
    invoke-virtual {p0, p2}, Landroid/view/LayoutInflater;->cloneInContext(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    :cond_1
    return-object p0
.end method
