.class public Lcom/qihoo360/loader2/DumpUtils;
.super Ljava/lang/Object;
.source "DumpUtils.java"


# static fields
.field private static final TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    sget-boolean v0, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    if-eqz v0, :cond_0

    const-class v0, Lcom/qihoo360/loader2/DumpUtils;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const-string v0, "DumpUtils"

    :goto_0
    sput-object v0, Lcom/qihoo360/loader2/DumpUtils;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 2

    .line 45
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyFetchHostBinder(Landroid/content/Context;)Landroid/os/IBinder;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    .line 51
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p0

    .line 54
    :try_start_0
    invoke-interface {p0}, Lcom/qihoo360/loader2/IPluginHost;->dump()Ljava/lang/String;

    move-result-object p0

    .line 56
    sget-boolean p2, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    if-eqz p2, :cond_1

    .line 57
    sget-object p2, Lcom/qihoo360/loader2/DumpUtils;->TAG:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "dumpInfo:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    if-eqz p1, :cond_2

    .line 61
    invoke-virtual {p1, p0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 64
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_0
    return-void
.end method
