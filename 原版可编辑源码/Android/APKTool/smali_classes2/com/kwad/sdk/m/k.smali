.class public final Lcom/kwad/sdk/m/k;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/m/k$a;
    }
.end annotation


# static fields
.field private static aMK:Lcom/kwad/sdk/m/k$a;


# direct methods
.method private static KS()Lcom/kwad/sdk/m/k$a;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/m/k;->aMK:Lcom/kwad/sdk/m/k$a;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const/4 v1, 0x0

    new-instance v2, Lcom/kwad/sdk/m/k$1;

    invoke-direct {v2}, Lcom/kwad/sdk/m/k$1;-><init>()V

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->getAppConfigData(Ljava/lang/Object;Lcom/kwad/sdk/g/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    new-instance v1, Lcom/kwad/sdk/m/k$a;

    invoke-direct {v1}, Lcom/kwad/sdk/m/k$a;-><init>()V

    sput-object v1, Lcom/kwad/sdk/m/k;->aMK:Lcom/kwad/sdk/m/k$a;

    :try_start_0
    invoke-virtual {v1, v0}, Lcom/kwad/sdk/m/k$a;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    sget-object v0, Lcom/kwad/sdk/m/k;->aMK:Lcom/kwad/sdk/m/k$a;

    return-object v0
.end method

.method private static a(Landroid/content/Context;Lcom/kwad/sdk/m/k$a;)Z
    .locals 1

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object p1, p1, Lcom/kwad/sdk/m/k$a;->aML:Ljava/util/List;

    invoke-direct {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/kwad/sdk/utils/ah;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "WrapperBlackHelper"

    const-string p1, "isBlackClass"

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static a(Ljava/lang/StackTraceElement;Lcom/kwad/sdk/m/k$a;)Z
    .locals 3

    invoke-virtual {p0}, Ljava/lang/StackTraceElement;->getClassName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Ljava/lang/StackTraceElement;->getMethodName()Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/util/concurrent/CopyOnWriteArrayList;

    iget-object p1, p1, Lcom/kwad/sdk/m/k$a;->aMM:Ljava/util/List;

    invoke-direct {v1, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>(Ljava/util/Collection;)V

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/m/k$a$a;

    iget-object v2, v1, Lcom/kwad/sdk/m/k$a$a;->aMN:Ljava/lang/String;

    iget-object v1, v1, Lcom/kwad/sdk/m/k$a$a;->aMO:Ljava/lang/String;

    invoke-static {v2, v0}, Lcom/kwad/sdk/utils/ah;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-static {v1, p0}, Lcom/kwad/sdk/utils/ah;->a(Ljava/lang/Object;Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, "WrapperBlackHelper"

    const-string p1, "isBlackMethod"

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static dp(Landroid/content/Context;)Z
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/m/k;->KS()Lcom/kwad/sdk/m/k$a;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/m/k$a;->aML:Ljava/util/List;

    invoke-static {v1}, Lcom/kwad/sdk/utils/ah;->K(Ljava/util/List;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_3

    iget-object v1, v0, Lcom/kwad/sdk/m/k$a;->aMM:Ljava/util/List;

    invoke-static {v1}, Lcom/kwad/sdk/utils/ah;->K(Ljava/util/List;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {p0, v0}, Lcom/kwad/sdk/m/k;->a(Landroid/content/Context;Lcom/kwad/sdk/m/k$a;)Z

    move-result p0

    if-nez p0, :cond_1

    return v2

    :cond_1
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Thread;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object p0

    array-length v1, p0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_3

    aget-object v4, p0, v3

    invoke-static {v4, v0}, Lcom/kwad/sdk/m/k;->a(Ljava/lang/StackTraceElement;Lcom/kwad/sdk/m/k$a;)Z

    move-result v4

    if-eqz v4, :cond_2

    const/4 p0, 0x1

    return p0

    :cond_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    return v2
.end method
