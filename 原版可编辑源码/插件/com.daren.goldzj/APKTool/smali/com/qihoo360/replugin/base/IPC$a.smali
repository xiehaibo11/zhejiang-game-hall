.class public Lcom/qihoo360/replugin/base/IPC$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/base/IPC;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
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


# direct methods
.method static synthetic a()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->a:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method public static a(Ljava/lang/ClassLoader;)V
    .locals 8

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Class;

    const-string v3, "com.qihoo360.replugin.base.IPC"

    const-string v4, "getCurrentProcessName"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->a:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "getCurrentProcessId"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->b:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "getPersistentProcessName"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->c:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "getPluginHostProcessName"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->d:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "isPluginHostProcess"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->e:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "isUIProcess"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->f:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "isPersistentProcess"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->g:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-string v4, "isPersistentEnable"

    invoke-direct {v0, p0, v3, v4, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->h:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v2, 0x1

    new-array v4, v2, [Ljava/lang/Class;

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v1

    const-string v5, "getPidByProcessName"

    invoke-direct {v0, p0, v3, v5, v4}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->i:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v4, v2, [Ljava/lang/Class;

    sget-object v5, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v5, v4, v1

    const-string v5, "getProcessNameByPid"

    invoke-direct {v0, p0, v3, v5, v4}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->j:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v4, v1, [Ljava/lang/Class;

    const-string v5, "getPackageName"

    invoke-direct {v0, p0, v3, v5, v4}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->k:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v4, 0x3

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v1

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    const-class v6, Landroid/content/Intent;

    const/4 v7, 0x2

    aput-object v6, v5, v7

    const-string v6, "sendLocalBroadcast2Plugin"

    invoke-direct {v0, p0, v3, v6, v5}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->l:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v1

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    const-class v6, Landroid/content/Intent;

    aput-object v6, v5, v7

    const-string v6, "sendLocalBroadcast2Process"

    invoke-direct {v0, p0, v3, v6, v5}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->m:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v5, v7, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v1

    const-class v6, Landroid/content/Intent;

    aput-object v6, v5, v2

    const-string v6, "sendLocalBroadcast2All"

    invoke-direct {v0, p0, v3, v6, v5}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->n:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Landroid/content/Context;

    aput-object v6, v5, v1

    const-class v6, Ljava/lang/String;

    aput-object v6, v5, v2

    const-class v6, Landroid/content/Intent;

    aput-object v6, v5, v7

    const-string v6, "sendLocalBroadcast2PluginSync"

    invoke-direct {v0, p0, v3, v6, v5}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->o:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v4, v4, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v1

    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v2

    const-class v5, Landroid/content/Intent;

    aput-object v5, v4, v7

    const-string v5, "sendLocalBroadcast2ProcessSync"

    invoke-direct {v0, p0, v3, v5, v4}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->p:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v4, v7, [Ljava/lang/Class;

    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v1

    const-class v1, Landroid/content/Intent;

    aput-object v1, v4, v2

    const-string v1, "sendLocalBroadcast2AllSync"

    invoke-direct {v0, p0, v3, v1, v4}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/base/IPC$a;->q:Lcom/qihoo360/replugin/b;

    return-void
.end method

.method static synthetic b()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->b:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic c()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->c:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic d()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->d:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic e()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->e:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic f()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->f:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic g()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->g:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic h()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->h:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic i()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->i:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic j()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->j:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic k()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->k:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic l()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->l:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic m()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->m:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic n()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->n:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic o()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->o:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic p()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->p:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic q()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/base/IPC$a;->q:Lcom/qihoo360/replugin/b;

    return-object v0
.end method
