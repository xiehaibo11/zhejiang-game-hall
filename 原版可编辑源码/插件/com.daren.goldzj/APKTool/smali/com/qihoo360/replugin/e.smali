.class public Lcom/qihoo360/replugin/e;
.super Ljava/lang/Object;


# static fields
.field public static volatile a:Z

.field private static final b:[B

.field private static volatile c:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    sput-object v0, Lcom/qihoo360/replugin/e;->b:[B

    return-void
.end method

.method public static a()Z
    .locals 1

    sget-boolean v0, Lcom/qihoo360/replugin/e;->a:Z

    return v0
.end method

.method static a(Ljava/lang/ClassLoader;)Z
    .locals 1

    sget-object v0, Lcom/qihoo360/replugin/e;->b:[B

    monitor-enter v0

    :try_start_0
    invoke-static {p0}, Lcom/qihoo360/replugin/e;->b(Ljava/lang/ClassLoader;)Z

    move-result p0

    monitor-exit v0

    return p0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private static b(Ljava/lang/ClassLoader;)Z
    .locals 2

    sget-boolean v0, Lcom/qihoo360/replugin/e;->c:Z

    if-eqz v0, :cond_0

    sget-boolean p0, Lcom/qihoo360/replugin/e;->a:Z

    return p0

    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/qihoo360/replugin/e;->c:Z

    :try_start_0
    invoke-static {p0}, Lcom/qihoo360/replugin/f$a;->a(Ljava/lang/ClassLoader;)V

    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin$a;->a(Ljava/lang/ClassLoader;)V

    invoke-static {p0}, Lcom/qihoo360/replugin/loader/b/PluginLocalBroadcastManager$ProxyLocalBroadcastManagerVar;->initLocked(Ljava/lang/ClassLoader;)V

    invoke-static {p0}, Lcom/qihoo360/replugin/loader/p/PluginProviderClient$ProxyRePluginProviderClientVar;->initLocked(Ljava/lang/ClassLoader;)V

    invoke-static {p0}, Lcom/qihoo360/replugin/loader/s/PluginServiceClient$ProxyRePluginServiceClientVar;->initLocked(Ljava/lang/ClassLoader;)V

    invoke-static {p0}, Lcom/qihoo360/replugin/base/IPC$a;->a(Ljava/lang/ClassLoader;)V

    sput-boolean v0, Lcom/qihoo360/replugin/e;->a:Z
    :try_end_0
    .catch Ljava/lang/Throwable; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RePluginFramework"

    invoke-static {v1, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    sget-boolean p0, Lcom/qihoo360/replugin/e;->a:Z

    return p0
.end method
