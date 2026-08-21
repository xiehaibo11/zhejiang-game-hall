.class public Lcom/kwad/sdk/m/e;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/m/e$a;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z


# instance fields
.field private final IP:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private aMA:Landroid/content/res/Resources;

.field private aMB:Lcom/kwad/sdk/m/h;

.field private aMC:Z

.field private aMD:Ljava/lang/ClassLoader;

.field private aMz:Landroid/content/res/Resources;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/sdk/m/e;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/m/e;-><init>()V

    return-void
.end method

.method public static KO()Lcom/kwad/sdk/m/e;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/m/e$a;->KQ()Lcom/kwad/sdk/m/e;

    move-result-object v0

    return-object v0
.end method

.method private KP()Z
    .locals 13

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/m/l;->dw(Landroid/content/Context;)Z

    move-result v2

    if-nez v2, :cond_0

    const-class v1, Lcom/kwad/sdk/service/a/d;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/d;

    new-instance v2, Ljava/lang/IllegalArgumentException;

    const-string v3, "KSPlugin unwrapContextIfNeed fail"

    invoke-direct {v2, v3}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    invoke-interface {v1, v2}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    return v0

    :cond_0
    const-string v2, "com.kwad.sdk.api.loader.Loader"

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-static {v2, v0, v3}, Ljava/lang/Class;->forName(Ljava/lang/String;ZLjava/lang/ClassLoader;)Ljava/lang/Class;

    move-result-object v2

    const-string v3, "get"

    new-array v4, v0, [Ljava/lang/Class;

    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const/4 v4, 0x0

    new-array v5, v0, [Ljava/lang/Object;

    invoke-virtual {v3, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v2

    array-length v4, v2

    move v5, v0

    :goto_0
    if-ge v5, v4, :cond_3

    aget-object v6, v2, v5

    invoke-virtual {v6}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v7

    const-class v8, Lcom/kwad/sdk/api/core/IKsAdSDK;

    if-eq v7, v8, :cond_2

    invoke-virtual {v6}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v7

    const-class v8, Landroid/content/Context;

    if-eq v7, v8, :cond_2

    invoke-virtual {v6}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v7

    const-class v8, Ljava/util/concurrent/atomic/AtomicBoolean;

    if-eq v7, v8, :cond_2

    invoke-static {v6, v3}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    if-eqz v6, :cond_2

    invoke-virtual {v6}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/Class;->getDeclaredFields()[Ljava/lang/reflect/Field;

    move-result-object v7

    array-length v8, v7

    move v9, v0

    :goto_1
    if-ge v9, v8, :cond_2

    aget-object v10, v7, v9

    invoke-virtual {v10}, Ljava/lang/reflect/Field;->getType()Ljava/lang/Class;

    move-result-object v11

    const-class v12, Landroid/content/res/Resources;

    if-ne v11, v12, :cond_1

    const/4 v2, 0x1

    invoke-virtual {v10, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    invoke-virtual {v10, v6}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/res/Resources;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    new-instance v4, Lcom/kwad/sdk/m/h;

    invoke-direct {v4, v3, v1}, Lcom/kwad/sdk/m/h;-><init>(Landroid/content/res/Resources;Landroid/content/res/Resources;)V

    invoke-static {v10, v6, v4}, Lcom/kwad/sdk/utils/s;->a(Ljava/lang/reflect/Field;Ljava/lang/Object;Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/kwad/sdk/m/e;->aMz:Landroid/content/res/Resources;

    iput-object v3, p0, Lcom/kwad/sdk/m/e;->aMA:Landroid/content/res/Resources;

    iput-object v4, p0, Lcom/kwad/sdk/m/e;->aMB:Lcom/kwad/sdk/m/h;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v2

    :cond_1
    add-int/lit8 v9, v9, 0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :catchall_0
    move-exception v1

    const-class v2, Lcom/kwad/sdk/service/a/d;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v2, v1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    :cond_3
    return v0
.end method

.method private static xK()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xK()Z

    move-result v0

    return v0
.end method

.method private static xL()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xL()Z

    move-result v0

    return v0
.end method


# virtual methods
.method public final Jr()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/e;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public final getClassLoader()Ljava/lang/ClassLoader;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/e;->aMD:Ljava/lang/ClassLoader;

    return-object v0
.end method

.method public final getResources()Landroid/content/res/Resources;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/m/e;->aMB:Lcom/kwad/sdk/m/h;

    return-object v0
.end method

.method public final init()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/m/e;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    :try_start_0
    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-static {}, Lcom/kwad/sdk/m/e;->xK()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/m/e;->KP()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/sdk/m/e;->aMD:Ljava/lang/ClassLoader;

    invoke-static {}, Lcom/kwad/sdk/m/e;->xL()Z

    move-result v1

    invoke-static {v1}, Lcom/kwad/sdk/m/i;->bW(Z)V

    const-string v1, "KSDY/KSPlugin"

    invoke-virtual {p0}, Lcom/kwad/sdk/m/e;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iput-boolean v0, p0, Lcom/kwad/sdk/m/e;->aMC:Z

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/kwad/sdk/m/e;->aMC:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    const-class v2, Lcom/kwad/sdk/service/a/d;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/d;

    invoke-interface {v2, v1}, Lcom/kwad/sdk/service/a/d;->gatherException(Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/m/e;->IP:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1, v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "KSPlugin{mHostResources="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/m/e;->aMz:Landroid/content/res/Resources;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mResResources="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/m/e;->aMA:Landroid/content/res/Resources;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mPluginResources="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/m/e;->aMB:Lcom/kwad/sdk/m/h;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ", mEnable="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/kwad/sdk/m/e;->aMC:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
