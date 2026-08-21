.class public Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;
.super Ljava/lang/Object;
.source "UtilsLogger.java"


# static fields
.field public static final ASSERT:I = 0x7

.field private static COLORS:[Ljava/lang/String; = null

.field public static final DEBUG:I = 0x3

.field public static final ERROR:I = 0x6

.field public static final INFO:I = 0x4

.field public static final TAG:Ljava/lang/String; = "YmnSdk"

.field public static final VERBOSE:I = 0x2

.field public static final WARN:I = 0x5

.field private static logs:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static showDebugLog:Z


# direct methods
.method static constructor <clinit>()V
    .locals 7

    const-string v0, "#66007F"

    const-string v1, "#66007F"

    const-string v2, "#66007F"

    const-string v3, "#66007F"

    const-string v4, "#3A7F00"

    const-string v5, "#FF7F00"

    const-string v6, "#ff0000"

    .line 47
    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->COLORS:[Ljava/lang/String;

    const/4 v0, 0x0

    .line 51
    sput-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static d(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 135
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static d(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 130
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    invoke-static {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p0, -0x1

    return p0
.end method

.method public static dRich(Ljava/lang/String;)I
    .locals 1

    .line 139
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "YmnSdk"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/Class;Ljava/lang/String;)I
    .locals 1

    .line 199
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YmnSdk"

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/Object;Ljava/lang/String;)I
    .locals 1

    .line 196
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YmnSdk"

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 202
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static e(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x6

    .line 192
    invoke-static {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static eRich(Ljava/lang/String;)I
    .locals 1

    .line 206
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "YmnSdk"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static getCacheLog()Ljava/lang/StringBuilder;
    .locals 3

    .line 99
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 100
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->logs:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 101
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public static getShowDebugLog()Z
    .locals 1

    .line 57
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    return v0
.end method

.method public static i(Ljava/lang/Class;Ljava/lang/String;)I
    .locals 1

    .line 159
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YmnSdk"

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static i(Ljava/lang/Object;Ljava/lang/String;)I
    .locals 1

    .line 156
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, ":"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YmnSdk"

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static i(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 162
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static i(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 151
    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x4

    invoke-static {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    goto :goto_0

    :cond_0
    const/4 p0, -0x1

    :goto_0
    return p0
.end method

.method public static printlog(ILjava/lang/String;Ljava/lang/String;)I
    .locals 5

    .line 210
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->logs:Ljava/util/LinkedList;

    if-eqz v0, :cond_0

    const-string v0, "\n"

    const-string v1, "<br/>"

    .line 211
    invoke-virtual {p2, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 212
    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->logs:Ljava/util/LinkedList;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    sget-object v4, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->COLORS:[Ljava/lang/String;

    aget-object v4, v4, p0

    aput-object v4, v2, v3

    const/4 v3, 0x1

    aput-object p1, v2, v3

    const/4 v3, 0x2

    aput-object v0, v2, v3

    const-string v0, "<font color=\'%s\'>\u3010%s\u3011<br/>%s</font><br/><br/>"

    invoke-static {v0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/util/LinkedList;->addLast(Ljava/lang/Object;)V

    .line 214
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Thread name:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2}, Landroid/util/Log;->println(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static rich(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 218
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "---------------------------------------------->>"

    .line 219
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    .line 220
    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 221
    :cond_0
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 222
    invoke-virtual {p0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    const-string p0, "<<----------------------------------------------"

    .line 223
    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 224
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static setDebugLog(Z)V
    .locals 0

    .line 61
    sput-boolean p0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    return-void
.end method

.method public static setLogToCache(Z)V
    .locals 0

    if-eqz p0, :cond_0

    .line 82
    new-instance p0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;

    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger$1;-><init>()V

    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->logs:Ljava/util/LinkedList;

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    .line 94
    sput-object p0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->logs:Ljava/util/LinkedList;

    :goto_0
    return-void
.end method

.method public static updateState()V
    .locals 4

    const-string v0, "state of showDebugLog is "

    .line 67
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 68
    sget-object v1, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isSDCardMounted()Z

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    const-string v1, "bianfeng/sdk/debug"

    .line 69
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/cache/FileUtils;->isFileExistInSdCard(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 70
    sput-boolean v1, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    .line 71
    sget-object v1, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 75
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "updateState:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 77
    :cond_0
    :goto_0
    sget-object v1, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v0, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->showDebugLog:Z

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    return-void
.end method

.method public static v(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 118
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->v(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static v(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x2

    .line 114
    invoke-static {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static w(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 177
    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static w(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x5

    .line 173
    invoke-static {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static wRich(Ljava/lang/String;)I
    .locals 1

    .line 181
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "YmnSdk"

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method
