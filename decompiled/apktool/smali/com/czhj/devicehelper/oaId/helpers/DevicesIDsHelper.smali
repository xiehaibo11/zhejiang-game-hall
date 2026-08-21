.class public Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;,
        Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$IdentifyListenerHandler;
    }
.end annotation


# static fields
.field private static a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater; = null

.field private static b:Ljava/lang/String; = null

.field private static d:I = -0x1

.field private static e:I

.field private static f:Ljava/lang/String;

.field private static g:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static h:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static i:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static j:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private static k:Ljava/lang/String;

.field private static final l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final m:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$2;

    invoke-direct {v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$2;-><init>()V

    sput-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->l:Ljava/util/List;

    new-instance v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$3;

    invoke-direct {v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$3;-><init>()V

    sput-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->m:Ljava/util/List;

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i()V

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;)Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;
    .locals 0

    iget-object p0, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    return-object p0
.end method

.method private static a(Landroid/content/Context;)V
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h()V

    if-eqz p0, :cond_2

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->j:Ljava/lang/Class;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    if-eqz v0, :cond_2

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h:Ljava/lang/Class;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b(Landroid/content/Context;)V

    goto :goto_1

    :cond_1
    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p0, :cond_4

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-interface {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    :goto_0
    const-string p0, "OAID \u8bfb\u53d6\u7c7b\u521b\u5efa\u5931\u8d25"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p0, :cond_3

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-interface {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p0, :cond_4

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-interface {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;

    invoke-direct {v1, p0, p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$1;-><init>(Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;Ljava/lang/String;Landroid/content/Context;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 0

    sput-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b:Ljava/lang/String;

    return-void
.end method

.method public static a()Z
    .locals 2

    const-string v0, "ro.build.freeme.label"

    invoke-static {v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "FREEMEOS"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private static b(Landroid/content/Context;)V
    .locals 9

    :try_start_0
    invoke-static {p0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_1
    sget-object v2, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;

    if-eqz v2, :cond_0

    sget-object v2, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;

    const-string v3, "classLoader"

    invoke-virtual {v2, v3}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v2

    sget-object v3, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;

    invoke-virtual {v2, v3}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-nez v2, :cond_0

    sget-object v2, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;

    const-string v3, "InitEntry"

    new-array v4, v1, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v0

    invoke-virtual {v2, v3, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    sget-object v3, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;

    new-array v4, v1, [Ljava/lang/Object;

    aput-object p0, v4, v0

    invoke-virtual {v2, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :cond_0
    :try_start_2
    new-instance v2, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$IdentifyListenerHandler;

    invoke-direct {v2}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$IdentifyListenerHandler;-><init>()V

    sget-object v3, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->j:Ljava/lang/Class;

    const-string v4, "InitSdk"

    const/4 v5, 0x3

    new-array v6, v5, [Ljava/lang/Class;

    const-class v7, Landroid/content/Context;

    aput-object v7, v6, v0

    sget-object v7, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v1

    sget-object v7, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    const/4 v8, 0x2

    aput-object v7, v6, v8

    invoke-virtual {v3, v4, v6}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const/4 v4, 0x0

    new-array v5, v5, [Ljava/lang/Object;

    aput-object p0, v5, v0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v6

    aput-object v6, v5, v1

    invoke-virtual {p0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    new-array v1, v1, [Ljava/lang/Class;

    sget-object v6, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    aput-object v6, v1, v0

    invoke-static {p0, v1, v2}, Ljava/lang/reflect/Proxy;->newProxyInstance(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;

    move-result-object p0

    aput-object p0, v5, v8

    invoke-virtual {v3, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "MdidSdkHelper ErrorCode : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const v0, 0xf63e6

    if-eq p0, v0, :cond_1

    const v0, 0xf63e2

    if-eq p0, v0, :cond_1

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p0, :cond_1

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-interface {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p0, :cond_1

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    sget-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    invoke-interface {p0, v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static b(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 0

    sput-object p1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    invoke-static {p0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Landroid/content/Context;)V

    return-void
.end method

.method public static b(Ljava/lang/String;)V
    .locals 0

    sput-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->k:Ljava/lang/String;

    return-void
.end method

.method public static b()Z
    .locals 2

    const-string v0, "ro.ssui.product"

    invoke-static {v0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "unknown"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic c()Ljava/lang/Class;
    .locals 1

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h:Ljava/lang/Class;

    return-object v0
.end method

.method static synthetic c(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    sput-object p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    return-object p0
.end method

.method private static c(Landroid/content/Context;)V
    .locals 8

    :try_start_0
    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b:Ljava/lang/String;

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    sget-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->j:Ljava/lang/Class;

    const-string v2, "InitCert"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    aput-object v0, v3, v7

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_1
    :goto_1
    return-void
.end method

.method static synthetic d()Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;
    .locals 1

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    return-object v0
.end method

.method private static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".cert.pem"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    sget-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->k:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1

    if-nez v1, :cond_0

    :try_start_1
    sget-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->k:Ljava/lang/String;

    invoke-virtual {p0, v1}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    :cond_0
    :try_start_2
    invoke-virtual {p0, v0}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object p0

    :goto_0
    new-instance v0, Ljava/io/BufferedReader;

    new-instance v1, Ljava/io/InputStreamReader;

    invoke-direct {v1, p0}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    invoke-direct {v0, v1}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    :goto_1
    invoke-virtual {v0}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0xa

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_1

    return-object p0

    :catch_1
    const-string p0, "loadPemFromAssetFile failed"

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const-string p0, ""

    return-object p0
.end method

.method private static d(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-string v1, "android.os.SystemProperties"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    const/4 v6, 0x0

    aput-object v5, v4, v6

    const-class v5, Ljava/lang/String;

    const/4 v7, 0x1

    aput-object v5, v4, v7

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p0, v3, v6

    const-string p0, "unknown"

    aput-object p0, v3, v7

    invoke-virtual {v2, v1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p0

    :catch_0
    return-object v0
.end method

.method static synthetic e()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->f:Ljava/lang/String;

    return-object v0
.end method

.method private static f()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->BRAND:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static g()Ljava/lang/String;
    .locals 1

    sget-object v0, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static h()V
    .locals 2

    const-string v0, "com.bun.miitmdid.core.JLibrary"

    :try_start_0
    const-string v1, "com.bun.miitmdid.core.MdidSdkHelper"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->j:Ljava/lang/Class;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_3

    :try_start_1
    const-string v1, "com.bun.miitmdid.interfaces.IIdentifierListener"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    const-string v1, "com.bun.miitmdid.interfaces.IdSupplier"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h:Ljava/lang/Class;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    :try_start_2
    const-string v1, "com.bun.supplier.IIdentifierListener"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    const-string v1, "com.bun.supplier.IdSupplier"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h:Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    return-void

    :catch_1
    :try_start_3
    const-string v1, "com.bun.miitmdid.core.IIdentifierListener"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g:Ljava/lang/Class;

    const-string v1, "com.bun.miitmdid.supplier.IdSupplier"

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    sput-object v1, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->h:Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    sput-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->i:Ljava/lang/Class;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    :catch_2
    return-void

    :catch_3
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method

.method private static i()V
    .locals 2

    sget-object v0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->m:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catchall_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    :try_start_0
    invoke-static {v1}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void
.end method


# virtual methods
.method public a(Landroid/content/Context;Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 1

    iput-object p2, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getManufacturer ===> "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->g()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object p2

    const-string v0, "ASUS"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    :goto_0
    invoke-direct {p0, p1, p2}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto/16 :goto_2

    :cond_1
    const-string v0, "HUAWEI"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_0

    :cond_2
    const-string v0, "LENOVO"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    goto :goto_0

    :cond_3
    const-string v0, "MOTOLORA"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_0

    :cond_4
    const-string v0, "MEIZU"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto :goto_0

    :cond_5
    const-string v0, "NUBIA"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    new-instance p2, Lcom/czhj/devicehelper/oaId/helpers/e;

    invoke-direct {p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/e;-><init>(Landroid/content/Context;)V

    invoke-virtual {p2}, Lcom/czhj/devicehelper/oaId/helpers/e;->a()Ljava/lang/String;

    move-result-object p1

    goto/16 :goto_3

    :cond_6
    const-string v0, "OPPO"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_7

    goto :goto_0

    :cond_7
    const-string v0, "SAMSUNG"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_8

    goto :goto_0

    :cond_8
    const-string v0, "VIVO"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    new-instance p2, Lcom/czhj/devicehelper/oaId/helpers/i;

    invoke-direct {p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/i;-><init>(Landroid/content/Context;)V

    invoke-virtual {p2}, Lcom/czhj/devicehelper/oaId/helpers/i;->a()Ljava/lang/String;

    move-result-object p1

    goto :goto_3

    :cond_9
    const-string v0, "XIAOMI"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    new-instance p2, Lcom/czhj/devicehelper/oaId/helpers/j;

    invoke-direct {p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/j;-><init>(Landroid/content/Context;)V

    :goto_1
    invoke-virtual {p2}, Lcom/czhj/devicehelper/oaId/helpers/j;->a()Ljava/lang/String;

    move-result-object p1

    goto :goto_3

    :cond_a
    const-string v0, "BLACKSHARK"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_b

    new-instance p2, Lcom/czhj/devicehelper/oaId/helpers/j;

    invoke-direct {p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/j;-><init>(Landroid/content/Context;)V

    goto :goto_1

    :cond_b
    const-string v0, "ONEPLUS"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    goto/16 :goto_0

    :cond_c
    const-string v0, "ZTE"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_d

    goto/16 :goto_0

    :cond_d
    const-string v0, "FERRMEOS"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->a()Z

    move-result v0

    if-eqz v0, :cond_e

    goto/16 :goto_0

    :cond_e
    const-string v0, "SSUI"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->b()Z

    move-result v0

    goto/16 :goto_0

    :goto_2
    const/4 p1, 0x0

    :goto_3
    iget-object p2, p0, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper;->c:Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;

    if-eqz p2, :cond_f

    invoke-interface {p2, p1}, Lcom/czhj/devicehelper/oaId/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_f
    return-void
.end method
