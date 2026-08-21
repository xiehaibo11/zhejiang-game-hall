.class Lcom/qihoo360/replugin/f$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
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


# direct methods
.method static synthetic a()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->a:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static a(Ljava/lang/ClassLoader;)V
    .locals 9

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v1, 0x2

    new-array v2, v1, [Ljava/lang/Class;

    const-class v3, Landroid/app/Activity;

    const/4 v4, 0x0

    aput-object v3, v2, v4

    const-class v3, Landroid/content/Context;

    const/4 v5, 0x1

    aput-object v3, v2, v5

    const-string v3, "com.qihoo360.i.Factory2"

    const-string v6, "createActivityContext"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->a:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-class v6, Landroid/app/Activity;

    aput-object v6, v2, v4

    const-class v6, Landroid/os/Bundle;

    aput-object v6, v2, v5

    const-string v6, "handleActivityCreateBefore"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->b:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-class v6, Landroid/app/Activity;

    aput-object v6, v2, v4

    const-class v6, Landroid/os/Bundle;

    aput-object v6, v2, v5

    const-string v6, "handleActivityCreate"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->c:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v5, [Ljava/lang/Class;

    const-class v6, Landroid/app/Activity;

    aput-object v6, v2, v4

    const-string v6, "handleActivityDestroy"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->d:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-class v6, Landroid/app/Activity;

    aput-object v6, v2, v4

    const-class v6, Landroid/os/Bundle;

    aput-object v6, v2, v5

    const-string v6, "handleRestoreInstanceState"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->e:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v1, [Ljava/lang/Class;

    const-class v6, Landroid/app/Activity;

    aput-object v6, v2, v4

    const-class v6, Landroid/content/Intent;

    aput-object v6, v2, v5

    const-string v6, "startActivity"

    invoke-direct {v0, p0, v3, v6, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->f:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    const/4 v2, 0x4

    new-array v6, v2, [Ljava/lang/Class;

    const-class v7, Landroid/app/Activity;

    aput-object v7, v6, v4

    const-class v7, Landroid/content/Intent;

    aput-object v7, v6, v5

    sget-object v7, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v7, v6, v1

    const-class v7, Landroid/os/Bundle;

    const/4 v8, 0x3

    aput-object v7, v6, v8

    const-string v7, "startActivityForResult"

    invoke-direct {v0, p0, v3, v7, v6}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->g:Lcom/qihoo360/replugin/b;

    new-instance v0, Lcom/qihoo360/replugin/b;

    new-array v2, v2, [Ljava/lang/Class;

    const-class v3, Landroid/content/Intent;

    aput-object v3, v2, v4

    const-class v3, Ljava/lang/String;

    aput-object v3, v2, v5

    const-class v3, Ljava/lang/String;

    aput-object v3, v2, v1

    sget-object v1, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    aput-object v1, v2, v8

    const-string v1, "com.qihoo360.i.Factory"

    const-string v3, "loadPluginActivity"

    invoke-direct {v0, p0, v1, v3, v2}, Lcom/qihoo360/replugin/b;-><init>(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Class;)V

    sput-object v0, Lcom/qihoo360/replugin/f$a;->h:Lcom/qihoo360/replugin/b;

    return-void
.end method

.method static synthetic b()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->b:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic c()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->c:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic d()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->d:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic e()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->e:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic f()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->f:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic g()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->g:Lcom/qihoo360/replugin/b;

    return-object v0
.end method

.method static synthetic h()Lcom/qihoo360/replugin/b;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/f$a;->h:Lcom/qihoo360/replugin/b;

    return-object v0
.end method
