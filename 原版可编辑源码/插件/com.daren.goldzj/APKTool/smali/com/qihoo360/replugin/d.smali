.class public Lcom/qihoo360/replugin/d;
.super Ljava/lang/Object;


# static fields
.field private static a:Landroid/content/Context;

.field private static b:Landroid/content/Context;

.field private static c:Ljava/lang/ClassLoader;

.field private static d:Landroid/os/IBinder;


# direct methods
.method public static a()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/d;->b:Landroid/content/Context;

    return-object v0
.end method

.method static a(Landroid/content/Context;Ljava/lang/ClassLoader;Landroid/os/IBinder;)V
    .locals 0

    sput-object p0, Lcom/qihoo360/replugin/d;->a:Landroid/content/Context;

    check-cast p0, Landroid/content/ContextWrapper;

    invoke-virtual {p0}, Landroid/content/ContextWrapper;->getBaseContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/replugin/d;->b:Landroid/content/Context;

    sput-object p1, Lcom/qihoo360/replugin/d;->c:Ljava/lang/ClassLoader;

    sput-object p2, Lcom/qihoo360/replugin/d;->d:Landroid/os/IBinder;

    return-void
.end method

.method public static b()Ljava/lang/ClassLoader;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/d;->c:Ljava/lang/ClassLoader;

    return-object v0
.end method

.method public static c()Landroid/content/Context;
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/d;->a:Landroid/content/Context;

    return-object v0
.end method
