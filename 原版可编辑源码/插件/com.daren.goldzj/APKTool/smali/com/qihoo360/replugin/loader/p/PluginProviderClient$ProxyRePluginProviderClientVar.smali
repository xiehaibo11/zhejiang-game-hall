.class public Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/loader/p/PluginProviderClient;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "ProxyRePluginProviderClientVar"
.end annotation


# static fields
.field private static a:Lcom/qihoo360/replugin/b;

.field private static b:Lcom/qihoo360/replugin/b;

.field private static c:Lcom/qihoo360/replugin/b;

.field private static d:Lcom/qihoo360/replugin/b;

.field private static e:Lcom/qihoo360/replugin/b;

.field private static f:Lcom/qihoo360/replugin/b;

.field private static g:Lcom/qihoo360/replugin/b;

.field private static h:Lcom/qihoo360/replugin/b;

.field private static i:Lcom/qihoo360/replugin/b;

.field private static j:Lcom/qihoo360/replugin/b;

.field private static k:Lcom/qihoo360/replugin/b;

.field private static l:Lcom/qihoo360/replugin/b;

.field private static m:Lcom/qihoo360/replugin/b;

.field private static n:Lcom/qihoo360/replugin/b;

.field private static o:Lcom/qihoo360/replugin/b;

.field private static p:Lcom/qihoo360/replugin/b;

.field private static q:Lcom/qihoo360/replugin/b;

.field private static r:Lcom/qihoo360/replugin/b;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->a:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic b()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->b:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic c()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->c:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic d()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->d:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic e()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->e:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic f()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->f:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic g()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->g:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic h()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->h:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic i()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->i:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method public static initLocked(Ljava/lang/ClassLoader;)V
    .locals 13

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v1, 0x6

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-class v3, Landroid/net/Uri;

    const/4 v5, 0x1

    aput-object v3, v2, v5

    const-class v3, [Ljava/lang/String;

    const/4 v6, 0x2

    aput-object v3, v2, v6

    const-class v3, Ljava/lang/String;

    const/4 v7, 0x3

    aput-object v3, v2, v7

    const-class v3, [Ljava/lang/String;

    const/4 v8, 0x4

    aput-object v3, v2, v8

    const-class v3, Ljava/lang/String;

    const/4 v9, 0x5

    aput-object v3, v2, v9

    const-string v3, "query"

    const-string v10, "com.qihoo360.loader2.mgr.PluginProviderClient"

    invoke-direct {v0, p0, v10, v3, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->a:Lcom/qihoo360/replugin/b;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_0

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v11, 0x7

    new-array v11, v11, [Ljava/lang/Class;

    const-class v12, Landroid/content/Context;

    aput-object v12, v11, v4

    const-class v12, Landroid/net/Uri;

    aput-object v12, v11, v5

    const-class v12, [Ljava/lang/String;

    aput-object v12, v11, v6

    const-class v12, Ljava/lang/String;

    aput-object v12, v11, v7

    const-class v12, [Ljava/lang/String;

    aput-object v12, v11, v8

    const-class v12, Ljava/lang/String;

    aput-object v12, v11, v9

    const-class v12, Landroid/os/CancellationSignal;

    aput-object v12, v11, v1

    invoke-direct {v0, p0, v10, v3, v11}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->b:Lcom/qihoo360/replugin/b;

    :cond_0
    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v7, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, Landroid/content/ContentValues;

    aput-object v3, v1, v6

    const-string v3, "insert"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->c:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v7, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, [Landroid/content/ContentValues;

    aput-object v3, v1, v6

    const-string v3, "bulkInsert"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->d:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v8, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v6

    const-class v3, [Ljava/lang/String;

    aput-object v3, v1, v7

    const-string v3, "delete"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->e:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v9, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, Landroid/content/ContentValues;

    aput-object v3, v1, v6

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v7

    const-class v3, [Ljava/lang/String;

    aput-object v3, v1, v8

    const-string v3, "update"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->f:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v6, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-string v3, "getType"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->g:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v6, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-string v3, "openInputStream"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->h:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v6, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-string v3, "openOutputStream"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->i:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v7, [Ljava/lang/Class;

    const-class v9, Landroid/content/Context;

    aput-object v9, v1, v4

    const-class v9, Landroid/net/Uri;

    aput-object v9, v1, v5

    const-class v9, Ljava/lang/String;

    aput-object v9, v1, v6

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->j:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v7, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v6

    const-string v3, "openFileDescriptor"

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->k:Lcom/qihoo360/replugin/b;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v2, :cond_1

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v8, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    aput-object v2, v1, v4

    const-class v2, Landroid/net/Uri;

    aput-object v2, v1, v5

    const-class v2, Ljava/lang/String;

    aput-object v2, v1, v6

    const-class v2, Landroid/os/CancellationSignal;

    aput-object v2, v1, v7

    invoke-direct {v0, p0, v10, v3, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->l:Lcom/qihoo360/replugin/b;

    :cond_1
    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v8, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    aput-object v2, v1, v4

    const-class v2, Landroid/net/Uri;

    aput-object v2, v1, v5

    const-class v2, Ljava/lang/Boolean;

    aput-object v2, v1, v6

    const-class v2, Landroid/database/ContentObserver;

    aput-object v2, v1, v7

    const-string v2, "registerContentObserver"

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->m:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v6, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    aput-object v2, v1, v4

    const-class v2, Ljava/lang/String;

    aput-object v2, v1, v5

    const-string v2, "acquireContentProviderClient"

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->n:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v7, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    aput-object v2, v1, v4

    const-class v2, Landroid/net/Uri;

    aput-object v2, v1, v5

    const-class v2, Landroid/database/ContentObserver;

    aput-object v2, v1, v6

    const-string v2, "notifyChange"

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->o:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v8, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v5

    const-class v3, Landroid/database/ContentObserver;

    aput-object v3, v1, v6

    const-class v3, Ljava/lang/Boolean;

    aput-object v3, v1, v7

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->p:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v6, [Ljava/lang/Class;

    const-class v2, Landroid/content/Context;

    aput-object v2, v1, v4

    const-class v2, Landroid/net/Uri;

    aput-object v2, v1, v5

    const-string v2, "toCalledUri"

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->q:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v1, v8, [Ljava/lang/Class;

    const-class v3, Landroid/content/Context;

    aput-object v3, v1, v4

    const-class v3, Ljava/lang/String;

    aput-object v3, v1, v5

    const-class v3, Landroid/net/Uri;

    aput-object v3, v1, v6

    const-class v3, Ljava/lang/Integer;

    aput-object v3, v1, v7

    invoke-direct {v0, p0, v10, v2, v1}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->r:Lcom/qihoo360/replugin/b;

    return-void
.end method

.method static synthetic j()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->j:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic k()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->k:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic l()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->l:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic m()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->m:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic n()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->n:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic o()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->o:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic p()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->p:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic q()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->q:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic r()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->r:Lcom/qihoo360/replugin/b;

    return-object v0
.end method
