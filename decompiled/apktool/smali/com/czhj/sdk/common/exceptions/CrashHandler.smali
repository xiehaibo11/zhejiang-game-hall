.class public Lcom/czhj/sdk/common/exceptions/CrashHandler;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Thread$UncaughtExceptionHandler;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;
    }
.end annotation


# static fields
.field private static final CRASH:Ljava/lang/String; = "crash"

.field private static gInstance:Lcom/czhj/sdk/common/exceptions/CrashHandler;


# instance fields
.field private crashHandlerListenerSet:Ljava/util/Set;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Set<",
            "Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;",
            ">;"
        }
    .end annotation
.end field

.field private entityCrash:Lcom/czhj/sdk/common/mta/PointEntityCrash;

.field private mDefaultCrashHandler:Ljava/lang/Thread$UncaughtExceptionHandler;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->entityCrash:Lcom/czhj/sdk/common/mta/PointEntityCrash;

    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->crashHandlerListenerSet:Ljava/util/Set;

    invoke-static {}, Ljava/lang/Thread;->getDefaultUncaughtExceptionHandler()Ljava/lang/Thread$UncaughtExceptionHandler;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->mDefaultCrashHandler:Ljava/lang/Thread$UncaughtExceptionHandler;

    invoke-static {p0}, Ljava/lang/Thread;->setDefaultUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V

    return-void
.end method

.method static synthetic access$000(Lcom/czhj/sdk/common/exceptions/CrashHandler;Ljava/lang/Throwable;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/sdk/common/exceptions/CrashHandler;->writeCrash(Ljava/lang/Throwable;)V

    return-void
.end method

.method public static declared-synchronized getInstance()Lcom/czhj/sdk/common/exceptions/CrashHandler;
    .locals 2

    const-class v0, Lcom/czhj/sdk/common/exceptions/CrashHandler;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/sdk/common/exceptions/CrashHandler;->gInstance:Lcom/czhj/sdk/common/exceptions/CrashHandler;

    if-nez v1, :cond_0

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v1, Lcom/czhj/sdk/common/exceptions/CrashHandler;

    invoke-direct {v1}, Lcom/czhj/sdk/common/exceptions/CrashHandler;-><init>()V

    sput-object v1, Lcom/czhj/sdk/common/exceptions/CrashHandler;->gInstance:Lcom/czhj/sdk/common/exceptions/CrashHandler;

    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw v1

    :cond_0
    :goto_0
    sget-object v1, Lcom/czhj/sdk/common/exceptions/CrashHandler;->gInstance:Lcom/czhj/sdk/common/exceptions/CrashHandler;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object v1

    :catchall_1
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private handleException(Ljava/lang/Throwable;)Z
    .locals 2

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;

    invoke-direct {v1, p0, p1}, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;-><init>(Lcom/czhj/sdk/common/exceptions/CrashHandler;Ljava/lang/Throwable;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    const-wide/16 v0, 0x3e8

    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method private writeCrash(Ljava/lang/Throwable;)V
    .locals 2

    :try_start_0
    new-instance v0, Ljava/io/StringWriter;

    invoke-direct {v0}, Ljava/io/StringWriter;-><init>()V

    new-instance v1, Ljava/io/PrintWriter;

    invoke-direct {v1, v0}, Ljava/io/PrintWriter;-><init>(Ljava/io/Writer;)V

    invoke-virtual {p1, v1}, Ljava/lang/Throwable;->printStackTrace(Ljava/io/PrintWriter;)V

    :goto_0
    invoke-virtual {p1}, Ljava/lang/Throwable;->getCause()Ljava/lang/Throwable;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1, v1}, Ljava/lang/Throwable;->printStackTrace(Ljava/io/PrintWriter;)V

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Ljava/io/PrintWriter;->close()V

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->crashHandlerListenerSet:Ljava/util/Set;

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;

    if-eqz v1, :cond_1

    invoke-interface {v1, p1}, Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;->reportCrash(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_2

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    :goto_2
    return-void
.end method


# virtual methods
.method public add(Lcom/czhj/sdk/common/exceptions/CrashHandler$CrashHandlerListener;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->crashHandlerListenerSet:Ljava/util/Set;

    invoke-interface {v0, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    .locals 1

    :try_start_0
    invoke-direct {p0, p2}, Lcom/czhj/sdk/common/exceptions/CrashHandler;->handleException(Ljava/lang/Throwable;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    iget-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler;->mDefaultCrashHandler:Ljava/lang/Thread$UncaughtExceptionHandler;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1, p2}, Ljava/lang/Thread$UncaughtExceptionHandler;->uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    goto :goto_1

    :cond_0
    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result p1

    invoke-static {p1}, Landroid/os/Process;->killProcess(I)V

    :goto_1
    return-void
.end method
