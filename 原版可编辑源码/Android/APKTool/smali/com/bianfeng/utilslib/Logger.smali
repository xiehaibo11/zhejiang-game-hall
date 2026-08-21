.class public Lcom/bianfeng/utilslib/Logger;
.super Ljava/lang/Object;
.source "Logger.java"


# static fields
.field public static final ASSERT:I = 0x7

.field private static COLORS:[Ljava/lang/String; = null

.field public static final DEBUG:I = 0x3

.field public static final ERROR:I = 0x6

.field public static final INFO:I = 0x4

.field public static final TAG:Ljava/lang/String; = "YmnSdk"

.field public static final VERBOSE:I = 0x2

.field public static final WARN:I = 0x5

.field private static volatile logger:Lcom/bianfeng/utilslib/Logger;

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
    .locals 3

    const/4 v0, 0x7

    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    const-string v2, "#66007F"

    aput-object v2, v0, v1

    const/4 v1, 0x1

    aput-object v2, v0, v1

    const/4 v1, 0x2

    aput-object v2, v0, v1

    const/4 v1, 0x3

    aput-object v2, v0, v1

    const/4 v1, 0x4

    const-string v2, "#3A7F00"

    aput-object v2, v0, v1

    const/4 v1, 0x5

    const-string v2, "#FF7F00"

    aput-object v2, v0, v1

    const/4 v1, 0x6

    const-string v2, "#ff0000"

    aput-object v2, v0, v1

    .line 17
    sput-object v0, Lcom/bianfeng/utilslib/Logger;->COLORS:[Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/utilslib/Logger;
    .locals 2

    .line 25
    sget-object v0, Lcom/bianfeng/utilslib/Logger;->logger:Lcom/bianfeng/utilslib/Logger;

    if-nez v0, :cond_1

    .line 26
    const-class v0, Lcom/bianfeng/utilslib/Logger;

    monitor-enter v0

    .line 27
    :try_start_0
    sget-object v1, Lcom/bianfeng/utilslib/Logger;->logger:Lcom/bianfeng/utilslib/Logger;

    if-nez v1, :cond_0

    .line 28
    new-instance v1, Lcom/bianfeng/utilslib/Logger;

    invoke-direct {v1}, Lcom/bianfeng/utilslib/Logger;-><init>()V

    sput-object v1, Lcom/bianfeng/utilslib/Logger;->logger:Lcom/bianfeng/utilslib/Logger;

    .line 30
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 32
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/utilslib/Logger;->logger:Lcom/bianfeng/utilslib/Logger;

    return-object v0
.end method


# virtual methods
.method public d(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 104
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public d(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 96
    sget-boolean v0, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x3

    .line 97
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/utilslib/Logger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, -0x1

    return p1
.end method

.method public dRich(Ljava/lang/String;)I
    .locals 1

    .line 108
    invoke-virtual {p0, p1}, Lcom/bianfeng/utilslib/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "YmnSdk"

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->d(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public e(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 141
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public e(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x6

    .line 137
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/utilslib/Logger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public eRich(Ljava/lang/String;)I
    .locals 1

    .line 145
    invoke-virtual {p0, p1}, Lcom/bianfeng/utilslib/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "YmnSdk"

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getCacheLog()Ljava/lang/StringBuilder;
    .locals 3

    .line 75
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 76
    sget-object v1, Lcom/bianfeng/utilslib/Logger;->logs:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 78
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 79
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 80
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public getShowDebugLog()Z
    .locals 1

    .line 36
    sget-boolean v0, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z

    return v0
.end method

.method public i(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 121
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public i(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    .line 113
    sget-boolean v0, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x4

    .line 114
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/utilslib/Logger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, -0x1

    :goto_0
    return p1
.end method

.method public printlog(ILjava/lang/String;Ljava/lang/String;)I
    .locals 5

    .line 149
    sget-object v0, Lcom/bianfeng/utilslib/Logger;->logs:Ljava/util/LinkedList;

    if-eqz v0, :cond_0

    const-string v0, "\n"

    const-string v1, "<br/>"

    .line 150
    invoke-virtual {p3, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 151
    sget-object v1, Lcom/bianfeng/utilslib/Logger;->logs:Ljava/util/LinkedList;

    const/4 v2, 0x3

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    sget-object v4, Lcom/bianfeng/utilslib/Logger;->COLORS:[Ljava/lang/String;

    aget-object v4, v4, p1

    aput-object v4, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    const/4 v3, 0x2

    aput-object v0, v2, v3

    const-string v0, "<font color=\'%s\'>\u3010%s\u3011<br/>%s</font><br/><br/>"

    invoke-static {v0, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/util/LinkedList;->addLast(Ljava/lang/Object;)V

    .line 154
    :cond_0
    invoke-static {p1, p2, p3}, Landroid/util/Log;->println(ILjava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public rich(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 158
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "---------------------------------------------->>"

    .line 159
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n"

    .line 160
    invoke-virtual {p1, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 161
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 164
    :cond_0
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 165
    invoke-virtual {p1, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 166
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    const-string p1, "<<----------------------------------------------"

    .line 169
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 170
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public setDebugLog(Z)V
    .locals 0

    .line 40
    sput-boolean p1, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z

    return-void
.end method

.method public setLogToCache(Z)V
    .locals 0

    if-eqz p1, :cond_0

    .line 57
    new-instance p1, Lcom/bianfeng/utilslib/Logger$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/utilslib/Logger$1;-><init>(Lcom/bianfeng/utilslib/Logger;)V

    sput-object p1, Lcom/bianfeng/utilslib/Logger;->logs:Ljava/util/LinkedList;

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 69
    sput-object p1, Lcom/bianfeng/utilslib/Logger;->logs:Ljava/util/LinkedList;

    :goto_0
    return-void
.end method

.method public updateState()V
    .locals 3

    .line 45
    :try_start_0
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardReady()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getFileUtils()Lcom/bianfeng/utilslib/FileUtils;

    move-result-object v0

    const-string v1, "bianfeng/sdk/debug"

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/FileUtils;->isSdcardFileExist(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 46
    sput-boolean v0, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 49
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "updateState:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 52
    :cond_0
    :goto_0
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "state of showDebugLog is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v2, Lcom/bianfeng/utilslib/Logger;->showDebugLog:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/io/PrintStream;->print(Ljava/lang/String;)V

    return-void
.end method

.method public v(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 91
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->v(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public v(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x2

    .line 87
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/utilslib/Logger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public w(Ljava/lang/String;)I
    .locals 1

    const-string v0, "YmnSdk"

    .line 129
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public w(Ljava/lang/String;Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x5

    .line 125
    invoke-virtual {p0, v0, p1, p2}, Lcom/bianfeng/utilslib/Logger;->printlog(ILjava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public wRich(Ljava/lang/String;)I
    .locals 1

    .line 133
    invoke-virtual {p0, p1}, Lcom/bianfeng/utilslib/Logger;->rich(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "YmnSdk"

    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/utilslib/Logger;->w(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method
