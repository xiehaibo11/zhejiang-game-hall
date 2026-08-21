.class public final Lcom/kwad/sdk/crash/handler/AnrHandler;
.super Lcom/kwad/sdk/crash/handler/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/crash/handler/AnrHandler$a;
    }
.end annotation


# static fields
.field private static final ANR_HAPPENED_BEGIN:Ljava/lang/String; = "------ ANR Happened Begin ------\n"

.field private static final DEFAULT_TRACE_ROOT:Ljava/lang/String; = "/data/anr/"

.field private static final DUMP_FROM_SIG_QUIT:Z

.field private static final GET_REASON_INTERVAL:J = 0x1f4L

.field private static final MY_PID:I

.field private static final PARSE_TRACE_INTERVAL:J = 0x2710L

.field private static final PID_PATTERN:Ljava/util/regex/Pattern;

.field private static final TAG:Ljava/lang/String; = "AnrHandler"

.field private static final TRY_TIMES:J = 0x14L

.field private static sLastTime:J


# instance fields
.field private mTraceFileObserver:Landroid/os/FileObserver;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v0

    sput v0, Lcom/kwad/sdk/crash/handler/AnrHandler;->MY_PID:I

    const-string v0, "-{5}\\spid\\s\\d+\\sat\\s\\d+-\\d+-\\d+\\s\\d{2}:\\d{2}:\\d{2}\\s-{5}"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/handler/AnrHandler;->PID_PATTERN:Ljava/util/regex/Pattern;

    const/16 v0, 0x15

    invoke-static {v0}, Lcom/kwad/sdk/utils/SystemUtil;->de(I)Z

    move-result v0

    sput-boolean v0, Lcom/kwad/sdk/crash/handler/AnrHandler;->DUMP_FROM_SIG_QUIT:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/b;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/sdk/crash/handler/AnrHandler$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;-><init>()V

    return-void
.end method

.method static synthetic access$200(Lcom/kwad/sdk/crash/handler/AnrHandler;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/handler/AnrHandler;->onTraceFileWritten(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Ljava/lang/String;Ljava/io/File;)V
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getAnrReasonInner(Ljava/lang/String;Ljava/io/File;)V

    return-void
.end method

.method private static declared-synchronized dumpAnr(Ljava/lang/String;I)V
    .locals 7

    const-class v0, Lcom/kwad/sdk/crash/handler/AnrHandler;

    monitor-enter v0

    :try_start_0
    const-string v1, "AnrHandler"

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "ANR dumpAnr tracePath="

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " index="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;

    invoke-direct {v1}, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/4 v3, 0x1

    :try_start_1
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v4

    if-nez v4, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    move-result v4

    if-nez v4, :cond_0

    const-string v4, "AnrHandler"

    const-string v5, "ANR dumpAnr create dir failed."

    invoke-static {v4, v5}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "create "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " failed!\n"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    const/4 v3, 0x0

    :cond_0
    if-eqz p0, :cond_1

    if-eqz v3, :cond_1

    new-instance v4, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v6, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "-"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ".dump"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v2, v5}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    new-instance v5, Ljava/io/File;

    invoke-direct {v5, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v5, v4}, Lcom/kwad/sdk/utils/q;->f(Ljava/io/File;Ljava/io/File;)V

    new-instance v4, Ljava/io/File;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v6, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "-"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ".log"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v4, v2, v5}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/g;->E(Ljava/io/File;)V

    :cond_1
    const/4 v2, 0x0

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/sdk/crash/e;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v2, v1, v4}, Lcom/kwad/sdk/crash/utils/g;->b(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;)V

    const/4 v2, 0x3

    invoke-static {v1, v2}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;I)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/crash/handler/AnrHandler;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    if-eqz v2, :cond_2

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/crash/handler/AnrHandler;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v4

    invoke-virtual {v4}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getCrashType()I

    move-result v4

    invoke-interface {v2, v4, v1}, Lcom/kwad/sdk/crash/f;->a(ILcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    :try_start_2
    invoke-static {p0, p1, v1, v3}, Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnrReason(Ljava/lang/String;ILcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v2

    :try_start_3
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, v1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, v1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :try_start_4
    invoke-static {p0, p1, v1, v3}, Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnrReason(Ljava/lang/String;ILcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Z)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    monitor-exit v0

    return-void

    :catchall_1
    move-exception v2

    :try_start_5
    invoke-static {p0, p1, v1, v3}, Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnrReason(Ljava/lang/String;ILcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Z)V

    throw v2
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    :catchall_2
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static dumpAnrReason(Ljava/lang/String;ILcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Z)V
    .locals 10

    const-string v0, "-"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "ANR dumpAnrReason tracePath="

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " index="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " dirReady="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AnrHandler"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v5, Lcom/kwad/sdk/crash/handler/AnrHandler$2;

    invoke-direct {v5, v4}, Lcom/kwad/sdk/crash/handler/AnrHandler$2;-><init>(Ljava/lang/StringBuilder;)V

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v6

    const-string v7, ""

    invoke-virtual {v6, v5, v7}, Landroid/os/Looper;->dump(Landroid/util/Printer;Ljava/lang/String;)V

    const/4 v5, 0x0

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->length()I

    move-result v6

    add-int/lit8 v6, v6, -0x1

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mMessageQueueDetail:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/io/File;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v7, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, ".dump"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-direct {v5, v3, v6}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v6, "------ ANR Happened Begin ------\n"

    if-eqz p3, :cond_1

    :try_start_1
    new-instance p3, Ljava/io/File;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v8, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ".msg"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {p3, v3, v7}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    new-instance v7, Ljava/io/File;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v9, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v9, ".minfo"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-direct {v7, v3, v8}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-static {p3, v4}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object p3

    invoke-virtual {p3, v3}, Lcom/kwad/sdk/crash/handler/AnrHandler;->backupLogFiles(Ljava/io/File;)V

    if-eqz v1, :cond_0

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    invoke-static {v1, v2, v5}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/report/e;Ljava/lang/String;Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object p2

    invoke-virtual {p2}, Lcom/kwad/sdk/crash/handler/AnrHandler;->uploadRemainingExceptions()V

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V

    goto :goto_0

    :cond_1
    if-eqz v1, :cond_3

    if-eqz p0, :cond_2

    const/4 p3, 0x0

    invoke-interface {v1, p2, p3}, Lcom/kwad/sdk/crash/report/e;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Ljava/util/concurrent/CountDownLatch;)V

    :cond_2
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_3
    :goto_0
    new-instance p2, Ljava/io/File;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    sget-object v2, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {p3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ".anr"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, v3, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    invoke-static {p0, p2}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getAnrReason(Ljava/lang/String;Ljava/io/File;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    if-eqz v1, :cond_4

    invoke-static {p0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;

    :cond_4
    return-void
.end method

.method private static getAnrReason(Ljava/lang/String;Ljava/io/File;)V
    .locals 2

    const-string v0, "AnrHandler"

    const-string v1, "ANR getAnrReason"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-nez p0, :cond_0

    new-instance p0, Lcom/kwad/sdk/crash/handler/AnrHandler$3;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/handler/AnrHandler$3;-><init>(Ljava/io/File;)V

    const-wide/16 v0, 0x0

    sget-object p1, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-static {p0, v0, v1, p1}, Lcom/kwad/sdk/utils/g;->schedule(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)V

    return-void

    :cond_0
    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getAnrReasonInner(Ljava/lang/String;Ljava/io/File;)V

    return-void
.end method

.method private static getAnrReasonInner(Ljava/lang/String;Ljava/io/File;)V
    .locals 7

    const-string v0, "AnrHandler"

    const-string v1, "ANR getAnrReasonInner"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v0

    if-eqz p0, :cond_1

    :try_start_0
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/io/File;->lastModified()J

    move-result-wide v1

    sget-wide v3, Lcom/kwad/sdk/crash/handler/AnrHandler;->sLastTime:J

    sub-long v3, v1, v3

    invoke-static {v3, v4}, Ljava/lang/Math;->abs(J)J

    move-result-wide v3

    const-wide/16 v5, 0x2710

    cmp-long p0, v3, v5

    if-gez p0, :cond_0

    return-void

    :cond_0
    sput-wide v1, Lcom/kwad/sdk/crash/handler/AnrHandler;->sLastTime:J

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/e;->getContext()Landroid/content/Context;

    move-result-object p0

    const-string v1, "activity"

    invoke-virtual {p0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/app/ActivityManager;

    const/4 v1, 0x0

    if-nez p0, :cond_2

    return-void

    :cond_2
    const/4 v2, 0x0

    :goto_0
    int-to-long v3, v2

    const-wide/16 v5, 0x14

    cmp-long v3, v3, v5

    if-gez v3, :cond_5

    invoke-virtual {p0}, Landroid/app/ActivityManager;->getProcessesInErrorState()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_4

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_3
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_4

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/app/ActivityManager$ProcessErrorStateInfo;

    iget v5, v4, Landroid/app/ActivityManager$ProcessErrorStateInfo;->condition:I

    const/4 v6, 0x2

    if-ne v5, v6, :cond_3

    move-object v1, v4

    :cond_4
    if-nez v1, :cond_5

    const-wide/16 v3, 0x1f4

    invoke-static {v3, v4}, Ljava/lang/Thread;->sleep(J)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_5
    if-nez v1, :cond_6

    return-void

    :cond_6
    iget p0, v1, Landroid/app/ActivityManager$ProcessErrorStateInfo;->pid:I

    sget v2, Lcom/kwad/sdk/crash/handler/AnrHandler;->MY_PID:I

    if-eq p0, v2, :cond_8

    if-eqz v0, :cond_7

    new-instance p0, Ljava/lang/StringBuilder;

    const-string p1, "other process anr:\n"

    invoke-direct {p0, p1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p1, v1, Landroid/app/ActivityManager$ProcessErrorStateInfo;->shortMsg:Ljava/lang/String;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    return-void

    :cond_8
    new-instance p0, Lcom/kwad/sdk/crash/model/message/AnrReason;

    invoke-direct {p0}, Lcom/kwad/sdk/crash/model/message/AnrReason;-><init>()V

    iget-object v2, v1, Landroid/app/ActivityManager$ProcessErrorStateInfo;->tag:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/AnrReason;->mTag:Ljava/lang/String;

    iget-object v2, v1, Landroid/app/ActivityManager$ProcessErrorStateInfo;->shortMsg:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/AnrReason;->mShortMsg:Ljava/lang/String;

    iget-object v1, v1, Landroid/app/ActivityManager$ProcessErrorStateInfo;->longMsg:Ljava/lang/String;

    iput-object v1, p0, Lcom/kwad/sdk/crash/model/message/AnrReason;->mLongMsg:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/AnrReason;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler$a;->ER()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v0

    return-object v0
.end method

.method public static native install(Ljava/lang/String;I)V
.end method

.method public static onCallFromNative(I)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ANR onCallFromNative index="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AnrHandler"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    invoke-static {v0, p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnr(Ljava/lang/String;I)V

    return-void
.end method

.method private onTraceFileWritten(Ljava/lang/String;)V
    .locals 2

    const-string v0, "AnrHandler"

    const-string v1, "ANR onTraceFileWritten"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/kwad/sdk/crash/handler/AnrHandler;->parseTraceFile(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mIndex:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->getAndIncrement()I

    move-result v0

    invoke-static {p1, v0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->dumpAnr(Ljava/lang/String;I)V

    :cond_0
    return-void
.end method

.method private parseTraceFile(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x0

    :try_start_0
    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    invoke-direct {v3, p1}, Ljava/io/FileReader;-><init>(Ljava/lang/String;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 p1, -0x1

    :cond_0
    :try_start_1
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_1

    sget-object v3, Lcom/kwad/sdk/crash/handler/AnrHandler;->PID_PATTERN:Ljava/util/regex/Pattern;

    invoke-virtual {v3, v1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/regex/Matcher;->matches()Z

    move-result v3

    if-eqz v3, :cond_0

    const-string p1, "\\s"

    invoke-virtual {v1, p1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x2

    aget-object p1, p1, v1

    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1

    :cond_1
    sget v1, Lcom/kwad/sdk/crash/handler/AnrHandler;->MY_PID:I
    :try_end_1
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-ne p1, v1, :cond_2

    const/4 v0, 0x1

    :cond_2
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return v0

    :catchall_0
    move-exception p1

    move-object v1, v2

    goto :goto_1

    :catch_0
    move-object v1, v2

    goto :goto_0

    :catch_1
    move-object v1, v2

    goto :goto_0

    :catchall_1
    move-exception p1

    goto :goto_1

    :catch_2
    :goto_0
    :try_start_2
    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return v0

    :goto_1
    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method private watchTraceFile()V
    .locals 3

    const-string v0, "AnrHandler"

    const-string v1, "ANR watchTraceFile"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v0, Lcom/kwad/sdk/crash/handler/AnrHandler$1;

    const-string v1, "/data/anr/"

    const/16 v2, 0x8

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/sdk/crash/handler/AnrHandler$1;-><init>(Lcom/kwad/sdk/crash/handler/AnrHandler;Ljava/lang/String;I)V

    iput-object v0, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mTraceFileObserver:Landroid/os/FileObserver;

    :try_start_0
    invoke-virtual {v0}, Landroid/os/FileObserver;->startWatching()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    invoke-static {}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getInstance()Lcom/kwad/sdk/crash/handler/AnrHandler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    return-void
.end method


# virtual methods
.method protected final getCrashType()I
    .locals 1

    const/4 v0, 0x3

    return v0
.end method

.method public final init(Ljava/io/File;Lcom/kwad/sdk/crash/f;Lcom/kwad/sdk/crash/report/e;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/crash/handler/b;->init(Ljava/io/File;Lcom/kwad/sdk/crash/f;Lcom/kwad/sdk/crash/report/e;)V

    invoke-static {}, Lcom/kwad/sdk/crash/b;->Em()Z

    move-result p2

    if-nez p2, :cond_0

    return-void

    :cond_0
    const-string p2, "AnrHandler"

    const-string p3, "ANR init"

    invoke-static {p2, p3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p1, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;

    iget-object p1, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    :cond_1
    new-instance p1, Ljava/io/File;

    iget-object p2, p0, Lcom/kwad/sdk/crash/handler/AnrHandler;->mLogDir:Ljava/io/File;

    sget-object p3, Lcom/kwad/sdk/crash/handler/AnrHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-direct {p1, p2, p3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    sget-boolean p2, Lcom/kwad/sdk/crash/handler/AnrHandler;->DUMP_FROM_SIG_QUIT:Z

    if-nez p2, :cond_2

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->watchTraceFile()V

    return-void

    :cond_2
    :try_start_0
    invoke-virtual {p1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p1

    sget p2, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-static {p1, p2}, Lcom/kwad/sdk/crash/handler/AnrHandler;->install(Ljava/lang/String;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    return-void
.end method

.method protected final reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/crash/report/b;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/report/b;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/AnrHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/report/b;->a(Lcom/kwad/sdk/crash/report/e;)V

    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p1, v2

    invoke-virtual {v0, v3, p2}, Lcom/kwad/sdk/crash/report/b;->a(Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
