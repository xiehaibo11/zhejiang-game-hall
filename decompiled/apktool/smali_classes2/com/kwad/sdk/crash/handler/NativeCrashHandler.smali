.class public final Lcom/kwad/sdk/crash/handler/NativeCrashHandler;
.super Lcom/kwad/sdk/crash/handler/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/crash/handler/NativeCrashHandler$a;
    }
.end annotation


# static fields
.field private static final NATIVE_CRASH_HAPPENED_BEGIN:Ljava/lang/String; = "------ Native Crash Happened Begin ------\n"

.field private static final TAG:Ljava/lang/String; = "NativeCrashHandler"

.field private static mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;


# instance fields
.field private mMessageFile:Ljava/io/File;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;-><init>()V

    sput-object v0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/b;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/sdk/crash/handler/NativeCrashHandler$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;-><init>()V

    return-void
.end method

.method public static native doCrash()V
.end method

.method public static getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler$a;->EU()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v0

    return-object v0
.end method

.method public static native install(Ljava/lang/String;ZLjava/lang/String;I)V
.end method

.method public static onCallFromNative()V
    .locals 10

    const-string v0, "NativeCrashHandler"

    const-string v1, "onCallFromNative NativeCrashHandler.doCrash()"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mLogDir:Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessageFile:Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mJavaTraceFile:Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v4

    iget-object v4, v4, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMemoryInfoFile:Ljava/io/File;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v5

    invoke-virtual {v5}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v5

    :try_start_0
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v6

    if-nez v6, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->mkdirs()Z

    move-result v6

    if-nez v6, :cond_0

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v7, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    iget-object v8, v7, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, "create "

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, " failed!\n"

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    iput-object v6, v7, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    if-eqz v5, :cond_0

    sget-object v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-virtual {v6}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    :cond_0
    if-nez v2, :cond_1

    new-instance v6, Ljava/io/File;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    sget-object v8, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ".msg"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v6, v1, v7}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v2, v6

    :cond_1
    if-nez v3, :cond_2

    new-instance v6, Ljava/io/File;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    sget-object v8, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ".jtrace"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v6, v1, v7}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v3, v6

    :cond_2
    if-nez v4, :cond_3

    new-instance v6, Ljava/io/File;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    sget-object v8, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v8, ".minfo"

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v6, v1, v7}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    move-object v4, v6

    :cond_3
    const/4 v6, 0x0

    sget-object v7, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v8

    invoke-virtual {v8}, Lcom/kwad/sdk/crash/e;->getContext()Landroid/content/Context;

    move-result-object v8

    invoke-static {v6, v7, v8}, Lcom/kwad/sdk/crash/utils/g;->b(Ljava/lang/Throwable;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;Landroid/content/Context;)V

    sget-object v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v7

    invoke-virtual {v7}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getCrashType()I

    move-result v7

    invoke-static {v6, v7}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/model/message/ExceptionMessage;I)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v6

    iget-object v6, v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    if-eqz v6, :cond_4

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v6

    iget-object v6, v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mExceptionListener:Lcom/kwad/sdk/crash/f;

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v7

    invoke-virtual {v7}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getCrashType()I

    move-result v7

    sget-object v8, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-interface {v6, v7, v8}, Lcom/kwad/sdk/crash/f;->a(ILcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :cond_4
    if-eqz v2, :cond_5

    :try_start_1
    sget-object v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-virtual {v6}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v6

    invoke-virtual {v6}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    :cond_5
    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->backupLogFiles(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    invoke-static {v5, v0, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/report/e;Ljava/lang/String;Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->uploadRemainingExceptions()V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    if-eqz v5, :cond_6

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;

    :cond_6
    return-void

    :catchall_1
    move-exception v6

    :try_start_2
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v8, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    iget-object v9, v8, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    iput-object v7, v8, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-static {v6}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    if-eqz v2, :cond_7

    :try_start_3
    sget-object v6, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-virtual {v6}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v6

    invoke-virtual {v6}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    :cond_7
    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->backupLogFiles(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    invoke-static {v5, v0, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/report/e;Ljava/lang/String;Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->uploadRemainingExceptions()V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    return-void

    :catchall_2
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    if-eqz v5, :cond_8

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;

    :cond_8
    return-void

    :catchall_3
    move-exception v6

    if-eqz v2, :cond_9

    :try_start_4
    sget-object v7, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessage:Lcom/kwad/sdk/crash/model/message/ExceptionMessage;

    invoke-virtual {v7}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->toJson()Lorg/json/JSONObject;

    move-result-object v7

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {v2, v7}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    :cond_9
    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/g;->G(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->backupLogFiles(Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    invoke-static {v5, v0, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Lcom/kwad/sdk/crash/report/e;Ljava/lang/String;Ljava/io/File;)V

    invoke-static {}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getInstance()Lcom/kwad/sdk/crash/handler/NativeCrashHandler;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->uploadRemainingExceptions()V

    invoke-static {v4}, Lcom/kwad/sdk/crash/utils/g;->H(Ljava/io/File;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    goto :goto_0

    :catchall_4
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    if-eqz v5, :cond_a

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->p(Ljava/lang/Throwable;)Ljava/lang/String;

    :cond_a
    :goto_0
    throw v6
.end method


# virtual methods
.method protected final getCrashType()I
    .locals 1

    const/4 v0, 0x4

    return v0
.end method

.method public final init(Ljava/io/File;ZLjava/lang/String;Lcom/kwad/sdk/crash/report/c;)V
    .locals 2

    const/4 v0, 0x0

    invoke-super {p0, p1, v0, p4}, Lcom/kwad/sdk/crash/handler/b;->init(Ljava/io/File;Lcom/kwad/sdk/crash/f;Lcom/kwad/sdk/crash/report/e;)V

    invoke-static {}, Lcom/kwad/sdk/crash/b;->Em()Z

    move-result p4

    if-nez p4, :cond_0

    return-void

    :cond_0
    iput-object p1, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mLogDir:Ljava/io/File;

    iget-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mLogDir:Ljava/io/File;

    invoke-virtual {p4}, Ljava/io/File;->exists()Z

    move-result p4

    if-nez p4, :cond_1

    iget-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mLogDir:Ljava/io/File;

    invoke-virtual {p4}, Ljava/io/File;->mkdirs()Z

    :cond_1
    new-instance p4, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".dump"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p4, p1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    new-instance p4, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".jtrace"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p4, p1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mJavaTraceFile:Ljava/io/File;

    new-instance p4, Ljava/io/File;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ".minfo"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p4, p1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMemoryInfoFile:Ljava/io/File;

    :try_start_0
    const-string p4, "NativeCrashHandler"

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ANR init2 "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p4, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p4, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mDumpFile:Ljava/io/File;

    invoke-virtual {p4}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object p4

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-static {p4, p2, p3, v0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->install(Ljava/lang/String;ZLjava/lang/String;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    new-instance p2, Ljava/io/File;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p4, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->FILE_NAME_BASE:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, ".msg"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-direct {p2, p1, p3}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->mMessageFile:Ljava/io/File;

    return-void

    :catchall_0
    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    return-void
.end method

.method protected final reportException([Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V
    .locals 4

    new-instance v0, Lcom/kwad/sdk/crash/report/g;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/report/g;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/handler/NativeCrashHandler;->getUploader()Lcom/kwad/sdk/crash/report/e;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/crash/report/g;->a(Lcom/kwad/sdk/crash/report/e;)V

    array-length v1, p1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, p1, v2

    invoke-virtual {v0, v3, p2}, Lcom/kwad/sdk/crash/report/g;->a(Ljava/io/File;Ljava/util/concurrent/CountDownLatch;)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method
