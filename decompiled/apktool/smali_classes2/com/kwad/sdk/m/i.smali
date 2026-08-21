.class public Lcom/kwad/sdk/m/i;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/m/i$a;
    }
.end annotation


# static fields
.field private static final CLAZZ_NAME:Ljava/lang/String;

.field private static final aMJ:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ThreadLocal<",
            "Lcom/kwad/sdk/m/i$a;",
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
            "Landroid/content/Context;",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    const-class v0, Lcom/kwad/sdk/m/i;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/m/i;->CLAZZ_NAME:Ljava/lang/String;

    new-instance v0, Ljava/lang/ThreadLocal;

    invoke-direct {v0}, Ljava/lang/ThreadLocal;-><init>()V

    sput-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapStackList:Ljava/util/List;

    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/m/i;->sResContextCache:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/m/i;->aMJ:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static KR()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/i;->aMJ:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method private static a(Landroid/content/Context;Landroid/content/Context;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/i;->sResContextCache:Ljava/util/Map;

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    instance-of p1, p0, Landroid/app/Activity;

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    new-instance p1, Lcom/kwad/sdk/m/i$1;

    invoke-direct {p1, p0}, Lcom/kwad/sdk/m/i$1;-><init>(Landroid/content/Context;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V

    return-void
.end method

.method private static a(Landroid/content/Context;Lcom/kwad/sdk/m/i$a;)Z
    .locals 11

    sget-object v0, Lcom/kwad/sdk/m/i;->sResContextCache:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/content/Context;

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

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    invoke-static {p1}, Lcom/kwad/sdk/m/i$a;->f(Lcom/kwad/sdk/m/i$a;)[Ljava/lang/StackTraceElement;

    move-result-object v1

    invoke-static {v0, v1}, Ljava/util/Arrays;->equals([Ljava/lang/Object;[Ljava/lang/Object;)Z

    move-result v1

    const-string v2, "Wrapper"

    const/4 v3, 0x5

    const/4 v4, 0x1

    const/4 v5, 0x0

    if-eqz v1, :cond_2

    invoke-static {p1}, Lcom/kwad/sdk/m/i$a;->g(Lcom/kwad/sdk/m/i$a;)I

    invoke-static {p1, v0}, Lcom/kwad/sdk/m/i$a;->a(Lcom/kwad/sdk/m/i$a;[Ljava/lang/StackTraceElement;)[Ljava/lang/StackTraceElement;

    invoke-static {p1}, Lcom/kwad/sdk/m/i$a;->h(Lcom/kwad/sdk/m/i$a;)I

    move-result p0

    if-lt p0, v3, :cond_1

    const-string p0, "needAutoUnWrap true \u8fde\u7eed\u76f8\u540c\u5806\u6808"

    :goto_1
    invoke-static {v2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return v4

    :cond_1
    return v5

    :cond_2
    invoke-static {p1}, Lcom/kwad/sdk/m/i$a;->f(Lcom/kwad/sdk/m/i$a;)[Ljava/lang/StackTraceElement;

    move-result-object v1

    if-eqz v1, :cond_3

    invoke-static {p1}, Lcom/kwad/sdk/m/i$a;->e(Lcom/kwad/sdk/m/i$a;)V

    return v5

    :cond_3
    invoke-static {p1, v0}, Lcom/kwad/sdk/m/i$a;->a(Lcom/kwad/sdk/m/i$a;[Ljava/lang/StackTraceElement;)[Ljava/lang/StackTraceElement;

    move p1, v5

    move v1, p1

    :cond_4
    array-length v6, v0

    if-ge p1, v6, :cond_7

    aget-object v6, v0, p1

    invoke-virtual {v6}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Lcom/kwad/sdk/m/i;->getAutoUnWrapStackList()Ljava/util/List;

    move-result-object v8

    invoke-interface {v8}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v8

    :cond_5
    invoke-interface {v8}, Ljava/util/Iterator;->hasNext()Z

    move-result v9

    if-eqz v9, :cond_6

    invoke-interface {v8}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Ljava/lang/String;

    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_5

    invoke-virtual {v7, v9}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v9

    if-eqz v9, :cond_5

    const-string p0, "needAutoUnWrap true \u547d\u4e2d\u767d\u540d\u5355"

    goto :goto_1

    :cond_6
    invoke-virtual {v6}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v6

    add-int/lit8 p1, p1, 0x1

    array-length v8, v0

    if-ge p1, v8, :cond_4

    sget-object v8, Lcom/kwad/sdk/m/i;->CLAZZ_NAME:Ljava/lang/String;

    invoke-virtual {v8, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_4

    const-string v7, "wrapContextIfNeed"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    aget-object v6, v0, p1

    invoke-virtual {v6}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v7

    invoke-static {p0, v7}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-virtual {v6}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "getBaseContext"

    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_4

    add-int/lit8 v1, v1, 0x1

    if-lt v1, v3, :cond_4

    return v4

    :cond_7
    return v5
.end method

.method public static bW(Z)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/i;->aMJ:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method static dn(Landroid/content/Context;)Landroid/content/Context;
    .locals 5

    instance-of v0, p0, Lcom/kwad/sdk/m/a;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/m/a;

    invoke-interface {p0}, Lcom/kwad/sdk/m/a;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-object p0

    :cond_1
    const/4 v0, 0x0

    const/4 v1, 0x0

    :goto_0
    const/16 v2, 0xa

    if-ge v1, v2, :cond_6

    if-nez v0, :cond_2

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v2, Ljava/lang/RuntimeException;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "expect normalContext --context:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "--initFinish:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v0, v2}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    move-object v0, v2

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->at(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :cond_3
    instance-of v2, p0, Lcom/kwad/sdk/m/a;

    if-eqz v2, :cond_4

    check-cast p0, Lcom/kwad/sdk/m/a;

    invoke-interface {p0}, Lcom/kwad/sdk/m/a;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    :cond_4
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_5

    return-object p0

    :cond_5
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_6
    return-object p0
.end method

.method static do(Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/m/i;->dn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_1

    return-object p0

    :cond_1
    const/4 v0, 0x0

    :goto_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_4

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    instance-of v1, p0, Landroid/app/Application;

    if-eqz v1, :cond_2

    return-object p0

    :cond_2
    instance-of v1, p0, Lcom/kwad/sdk/m/a;

    if-eqz v1, :cond_3

    check-cast p0, Lcom/kwad/sdk/m/a;

    invoke-interface {p0}, Lcom/kwad/sdk/m/a;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_4
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

    sget-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapStackList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapStackList:Ljava/util/List;

    const-string v1, "com.sensorsdata.analytics.android.sdk"

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    sget-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapStackList:Ljava/util/List;

    return-object v0
.end method

.method public static onDestroy(Landroid/content/Context;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/i;->sResContextCache:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method static replaceExternalClassLoader(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m/e;->KO()Lcom/kwad/sdk/m/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/m/e;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    return-object p0
.end method

.method static replaceTheme(Landroid/content/res/Resources$Theme;Landroid/content/res/Resources$Theme;I)Landroid/content/res/Resources$Theme;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m/e;->KO()Lcom/kwad/sdk/m/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/m/e;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    invoke-virtual {v0}, Landroid/content/res/Resources;->newTheme()Landroid/content/res/Resources$Theme;

    move-result-object p1

    const/4 p0, 0x1

    invoke-virtual {p1, p2, p0}, Landroid/content/res/Resources$Theme;->applyStyle(IZ)V

    :cond_0
    return-object p1

    :cond_1
    return-object p0
.end method

.method private static returnUnWrappedContext(Landroid/content/Context;)Z
    .locals 6

    sget-object v0, Lcom/kwad/sdk/m/i;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    invoke-virtual {v0}, Ljava/lang/ThreadLocal;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/m/i$a;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->a(Lcom/kwad/sdk/m/i$a;)Ljava/lang/ref/WeakReference;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v2

    if-ne v2, p0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->b(Lcom/kwad/sdk/m/i$a;)J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(J)J

    move-result-wide v2

    const-wide/16 v4, 0x96

    cmp-long v2, v2, v4

    if-gez v2, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->c(Lcom/kwad/sdk/m/i$a;)I

    instance-of v2, p0, Landroid/app/Application;

    if-eqz v2, :cond_0

    const/16 v2, 0xf

    goto :goto_0

    :cond_0
    const/4 v2, 0x5

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->d(Lcom/kwad/sdk/m/i$a;)I

    move-result v3

    if-lt v3, v2, :cond_3

    invoke-static {p0, v0}, Lcom/kwad/sdk/m/i;->a(Landroid/content/Context;Lcom/kwad/sdk/m/i$a;)Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->e(Lcom/kwad/sdk/m/i$a;)V

    const/4 p0, 0x1

    return p0

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/m/i$a;->e(Lcom/kwad/sdk/m/i$a;)V

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-static {v0, v2}, Lcom/kwad/sdk/m/i$a;->a(Lcom/kwad/sdk/m/i$a;Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/m/i$a;->a(Lcom/kwad/sdk/m/i$a;J)J

    goto :goto_1

    :cond_2
    sget-object p0, Lcom/kwad/sdk/m/i;->sAutoUnWrapModelTL:Ljava/lang/ThreadLocal;

    new-instance v0, Lcom/kwad/sdk/m/i$a;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/m/i$a;-><init>(B)V

    invoke-virtual {p0, v0}, Ljava/lang/ThreadLocal;->set(Ljava/lang/Object;)V

    :cond_3
    :goto_1
    return v1
.end method

.method static wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;
    .locals 4

    if-nez p0, :cond_0

    const-class p0, Lcom/kwad/sdk/service/a/d;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/d;

    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "KSWrapper wrapContextIfNeed context is null"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-interface {p0, v0}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v0

    if-nez v0, :cond_1

    return-object p0

    :cond_1
    instance-of v0, p0, Lcom/kwad/sdk/m/a;

    if-eqz v0, :cond_2

    return-object p0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->unwrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_3

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "KSWrapper unwrapContextIfNeed fail"

    invoke-direct {v1, v2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-object p0

    :cond_3
    sget-object v0, Lcom/kwad/sdk/m/i;->sResContextCache:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/Context;

    instance-of v1, v0, Lcom/kwad/sdk/m/a;

    if-eqz v1, :cond_4

    return-object v0

    :cond_4
    invoke-static {p0}, Lcom/kwad/sdk/m/k;->dp(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    return-object p0

    :cond_5
    invoke-static {p0}, Lcom/kwad/sdk/m/i;->returnUnWrappedContext(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_6

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "KSWrapper returnUnWrappedContext context: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-interface {v0, v1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-object p0

    :cond_6
    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_7

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/m/f;

    move-object v1, p0

    check-cast v1, Landroid/app/Application;

    new-instance v2, Lcom/kwad/sdk/m/g;

    invoke-static {}, Lcom/kwad/sdk/m/e;->KO()Lcom/kwad/sdk/m/e;

    move-result-object v3

    invoke-direct {v2, p0, v3}, Lcom/kwad/sdk/m/g;-><init>(Landroid/content/Context;Lcom/kwad/sdk/m/e;)V

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/m/f;-><init>(Landroid/app/Application;Lcom/kwad/sdk/m/g;)V

    move-object v1, v0

    check-cast v1, Landroid/app/Application;

    invoke-static {v1}, Lcom/kwad/sdk/m/l;->a(Landroid/app/Application;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "wrapper Application fail --context:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "--initFinish:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    const-class v0, Lcom/kwad/sdk/service/a/d;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return-object p0

    :cond_7
    instance-of v0, p0, Landroid/view/ContextThemeWrapper;

    if-eqz v0, :cond_8

    new-instance v0, Lcom/kwad/sdk/m/b;

    move-object v1, p0

    check-cast v1, Landroid/view/ContextThemeWrapper;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/m/b;-><init>(Landroid/view/ContextThemeWrapper;)V

    goto :goto_0

    :cond_8
    instance-of v0, p0, Landroid/support/v7/view/ContextThemeWrapper;

    if-eqz v0, :cond_9

    new-instance v0, Lcom/kwad/sdk/m/c;

    move-object v1, p0

    check-cast v1, Landroid/support/v7/view/ContextThemeWrapper;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/m/c;-><init>(Landroid/support/v7/view/ContextThemeWrapper;)V

    goto :goto_0

    :cond_9
    instance-of v0, p0, Landroid/content/ContextWrapper;

    if-eqz v0, :cond_a

    new-instance v0, Lcom/kwad/sdk/m/d;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/m/d;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :cond_a
    new-instance v0, Lcom/kwad/sdk/m/d;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/m/d;-><init>(Landroid/content/Context;)V

    :goto_0
    invoke-static {p0, v0}, Lcom/kwad/sdk/m/i;->a(Landroid/content/Context;Landroid/content/Context;)V

    return-object v0
.end method
