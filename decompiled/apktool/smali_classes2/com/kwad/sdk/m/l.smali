.class public final Lcom/kwad/sdk/m/l;
.super Ljava/lang/Object;


# static fields
.field private static aMP:Landroid/app/Application;


# direct methods
.method public static KT()Landroid/app/Application;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/m/l;->checkInit()V

    invoke-static {}, Lcom/kwad/sdk/m/l;->KU()Landroid/app/Application;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/m/i;->KR()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/m/i;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    sput-object v0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    :cond_0
    sget-object v0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    return-object v0
.end method

.method private static KU()Landroid/app/Application;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    instance-of v1, v0, Landroid/app/Application;

    if-eqz v1, :cond_1

    check-cast v0, Landroid/app/Application;

    :goto_0
    sput-object v0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    return-object v0

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/m/l;->au(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {v0}, Lcom/kwad/sdk/m/i;->do(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    goto :goto_1

    :cond_2
    invoke-static {v0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {v0}, Lcom/kwad/sdk/m/j;->do(Landroid/content/Context;)Landroid/content/Context;

    move-result-object v0

    goto :goto_1

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    :goto_1
    instance-of v1, v0, Landroid/app/Application;

    if-eqz v1, :cond_4

    move-object v1, v0

    check-cast v1, Landroid/app/Application;

    :goto_2
    sput-object v1, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    goto :goto_3

    :cond_4
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/c/b;->getApplication()Landroid/app/Application;

    move-result-object v1

    if-eqz v1, :cond_5

    goto :goto_2

    :cond_5
    instance-of v1, v0, Landroid/content/ContextWrapper;

    if-eqz v1, :cond_7

    move-object v1, v0

    check-cast v1, Landroid/content/ContextWrapper;

    invoke-virtual {v1}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_6

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    :cond_6
    instance-of v2, v1, Landroid/app/Application;

    if-eqz v2, :cond_7

    check-cast v1, Landroid/app/Application;

    goto :goto_2

    :cond_7
    :goto_3
    sget-object v1, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    if-nez v1, :cond_8

    invoke-static {}, Lcom/kwad/sdk/m/l;->KV()Landroid/app/Application;

    move-result-object v1

    sput-object v1, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    :cond_8
    invoke-static {v0}, Lcom/kwad/sdk/m/l;->dv(Landroid/content/Context;)Landroid/app/Application;

    move-result-object v0

    goto :goto_0
.end method

.method private static KV()Landroid/app/Application;
    .locals 4

    const/4 v0, 0x0

    new-array v1, v0, [Ljava/lang/Object;

    const-string v2, "android.app.ActivityThread"

    const-string v3, "currentApplication"

    invoke-static {v2, v3, v1}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/Application;

    if-eqz v1, :cond_0

    return-object v1

    :cond_0
    new-array v0, v0, [Ljava/lang/Object;

    const-string v1, "android.app.AppGlobals"

    const-string v2, "getInitialApplication"

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    return-object v0
.end method

.method public static a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dy(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    const/4 p3, 0x0

    invoke-virtual {p0, p1, p2, p3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static a(Landroid/app/Application;)V
    .locals 1

    sget-object v0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    if-nez v0, :cond_0

    sput-object p0, Lcom/kwad/sdk/m/l;->aMP:Landroid/app/Application;

    :cond_0
    return-void
.end method

.method private static a(Landroid/view/LayoutInflater;)V
    .locals 2

    const/4 v0, 0x0

    const-string v1, "mFactory"

    invoke-static {p0, v1, v0}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string v1, "mFactory2"

    invoke-static {p0, v1, v0}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    return-void
.end method

.method private static au(Landroid/content/Context;)Z
    .locals 0

    instance-of p0, p0, Lcom/kwad/sdk/m/a;

    return p0
.end method

.method public static b(Landroid/content/Context;Landroid/content/Context;)Landroid/view/LayoutInflater;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dz(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/view/LayoutInflater;->cloneInContext(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->a(Landroid/view/LayoutInflater;)V

    return-object p0
.end method

.method private static checkInit()V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/m/e;->KO()Lcom/kwad/sdk/m/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/m/e;->Jr()Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/RuntimeException;

    const-string v1, "please init KSPlugin"

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->b(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method public static dq(Landroid/content/Context;)I
    .locals 3

    instance-of v0, p0, Landroid/view/ContextThemeWrapper;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    new-array v0, v1, [Ljava/lang/Object;

    const-string v2, "getThemeResId"

    invoke-static {p0, v2, v0}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0

    :cond_0
    return v1

    :cond_1
    instance-of v0, p0, Landroid/support/v7/view/ContextThemeWrapper;

    if-eqz v0, :cond_2

    check-cast p0, Landroid/support/v7/view/ContextThemeWrapper;

    invoke-virtual {p0}, Landroid/support/v7/view/ContextThemeWrapper;->getThemeResId()I

    move-result p0

    return p0

    :cond_2
    return v1
.end method

.method public static dr(Landroid/content/Context;)Landroid/app/Activity;
    .locals 1

    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_0

    check-cast p0, Landroid/app/Activity;

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dt(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    instance-of v0, p0, Landroid/app/Activity;

    if-eqz v0, :cond_1

    check-cast p0, Landroid/app/Activity;

    return-object p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object p0

    return-object p0
.end method

.method private static ds(Landroid/content/Context;)Landroid/content/Context;
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/m/i;->KR()Z

    move-result v0

    const-string v1, "--initFinish:"

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->au(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v2, Ljava/lang/RuntimeException;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "expect KSContext in external --context:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    :goto_0
    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->b(Ljava/lang/Throwable;)V

    goto :goto_1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/m/i;->KR()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v2, Ljava/lang/RuntimeException;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "expect ResContext in external --context:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    :goto_1
    return-object p0
.end method

.method public static dt(Landroid/content/Context;)Landroid/content/Context;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m/l;->checkInit()V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-object p0

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->au(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p0}, Lcom/kwad/sdk/m/i;->dn(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    goto :goto_0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/m/j;->unwrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->du(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private static du(Landroid/content/Context;)Landroid/content/Context;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    instance-of v0, p0, Lcom/kwad/sdk/m/a;

    if-eqz v0, :cond_1

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "expect normalContext --context:"

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

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->b(Ljava/lang/Throwable;)V

    :cond_1
    return-object p0
.end method

.method private static dv(Landroid/content/Context;)Landroid/app/Application;
    .locals 4

    instance-of v0, p0, Landroid/app/Application;

    if-eqz v0, :cond_0

    check-cast p0, Landroid/app/Application;

    return-object p0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->hasInitFinish()Z

    move-result v0

    new-instance v1, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "expect normalContext --context:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "--initFinish:"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, "--isExternal:"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class p0, Lcom/kwad/sdk/service/a/e;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->b(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static dw(Landroid/content/Context;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->au(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dx(Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->at(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :cond_0
    instance-of v0, p0, Lcom/kwad/sdk/m/a;

    if-eqz v0, :cond_1

    check-cast p0, Lcom/kwad/sdk/m/a;

    invoke-interface {p0}, Lcom/kwad/sdk/m/a;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-object p0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    const/4 v1, 0x5

    if-ge v0, v1, :cond_6

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->at(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :cond_3
    instance-of v1, p0, Lcom/kwad/sdk/m/a;

    if-eqz v1, :cond_4

    check-cast p0, Lcom/kwad/sdk/m/a;

    invoke-interface {p0}, Lcom/kwad/sdk/m/a;->getDelegatedContext()Landroid/content/Context;

    move-result-object p0

    :cond_4
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_5

    return-object p0

    :cond_5
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_6
    return-object p0
.end method

.method public static dy(Landroid/content/Context;)Landroid/view/LayoutInflater;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->au(Landroid/content/Context;)Z

    move-result v0

    invoke-static {p0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->a(Landroid/view/LayoutInflater;)V

    :cond_0
    return-object p0
.end method

.method private static dz(Landroid/content/Context;)Landroid/content/Context;
    .locals 1

    instance-of v0, p0, Landroid/content/ContextWrapper;

    if-eqz v0, :cond_0

    check-cast p0, Landroid/content/ContextWrapper;

    invoke-virtual {p0}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object p0

    :cond_0
    return-object p0
.end method

.method public static h(Landroid/app/Activity;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/m/j;->onDestroy(Landroid/content/Context;)V

    return-void
.end method

.method public static inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/m/l;->dy(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m/l;->checkInit()V

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/m/i;->KR()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/m/i;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    goto :goto_0

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/m/j;->wrapContextIfNeed(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/m/l;->ds(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method public static x(Landroid/content/Context;Z)V
    .locals 2

    :try_start_0
    const-string v0, "kssdk_api_pref"

    const/4 v1, 0x0

    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    const-string v0, "useContextClassLoader"

    invoke-interface {p0, v0, p1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method
