.class public Lcom/qihoo360/replugin/Entry;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final create(Landroid/content/Context;Ljava/lang/ClassLoader;Landroid/os/IBinder;)Landroid/os/IBinder;
    .locals 0

    invoke-static {p1}, Lcom/qihoo360/replugin/e;->a(Ljava/lang/ClassLoader;)Z

    invoke-static {p0, p1, p2}, Lcom/qihoo360/replugin/d;->a(Landroid/content/Context;Ljava/lang/ClassLoader;Landroid/os/IBinder;)V

    new-instance p0, Lcom/qihoo360/replugin/Entry$1;

    invoke-direct {p0}, Lcom/qihoo360/replugin/Entry$1;-><init>()V

    return-object p0
.end method
