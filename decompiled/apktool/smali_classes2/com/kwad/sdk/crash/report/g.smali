.class public final Lcom/kwad/sdk/crash/report/g;
.super Lcom/kwad/sdk/crash/report/d;


# static fields
.field public static final aBn:Ljava/util/regex/Pattern;

.field public static final aBo:Ljava/util/regex/Pattern;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "(.*)\\s\\(tid=(\\d+), index=(\\d+)*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/report/g;->aBn:Ljava/util/regex/Pattern;

    const-string v0, "\\sd+\\spc"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/report/g;->aBo:Ljava/util/regex/Pattern;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/d;-><init>()V

    return-void
.end method

.method private D(Ljava/io/File;)Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;
    .locals 5

    const-string v0, "\n"

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->V(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    const/4 v1, 0x0

    :goto_0
    new-instance v2, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;

    invoke-direct {v2}, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;-><init>()V

    if-eqz v1, :cond_0

    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->parseJson(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    :cond_0
    :goto_1
    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->S(Ljava/io/File;)Z

    return-object v2
.end method

.method private a(Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;Ljava/io/File;)V
    .locals 8

    invoke-virtual {p2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/g;->eR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mLogUUID:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    invoke-direct {v3, p2}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    const/4 p2, 0x0

    const/4 v3, 0x1

    move v4, p2

    move v5, v4

    :cond_0
    :goto_0
    :try_start_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v6

    if-eqz v6, :cond_4

    if-eqz v4, :cond_1

    const-string v7, "backtrace:"

    invoke-virtual {v6, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_1

    move v4, p2

    move v5, v3

    goto :goto_0

    :cond_1
    if-eqz v5, :cond_2

    const-string v7, "###### ending of java stack trace ######"

    invoke-virtual {v6, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-nez v7, :cond_4

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v6, 0xa

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_2
    if-eqz v4, :cond_3

    invoke-static {p1, v6, v1}, Lcom/kwad/sdk/crash/report/g;->a(Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;Ljava/lang/String;Ljava/lang/StringBuilder;)V

    goto :goto_0

    :cond_3
    const-string v7, "*** ***"

    invoke-virtual {v6, v7}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v6, :cond_0

    move v4, v3

    goto :goto_0

    :cond_4
    :goto_1
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    goto :goto_2

    :catchall_0
    move-exception p1

    goto :goto_3

    :catch_0
    move-exception v4

    :try_start_1
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :goto_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    if-le v2, v3, :cond_5

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    sub-int/2addr v2, v3

    invoke-virtual {v0, p2, v2}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p1, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCrashDetail:Ljava/lang/String;

    :cond_5
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    if-le v0, v3, :cond_6

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result v0

    sub-int/2addr v0, v3

    invoke-virtual {v1, p2, v0}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRegister:Ljava/lang/String;

    :cond_6
    return-void

    :goto_3
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method private static a(Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;Ljava/lang/String;Ljava/lang/StringBuilder;)V
    .locals 6

    const-string v0, "Build fingerprint: "

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 p2, 0x13

    invoke-virtual {p1, p2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFingerprint:Ljava/lang/String;

    return-void

    :cond_0
    const-string v0, "Revision: "

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const/16 v1, 0xa

    if-eqz v0, :cond_1

    invoke-virtual {p1, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mRevision:Ljava/lang/String;

    return-void

    :cond_1
    const-string v0, "ABI: "

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const/4 v2, 0x5

    if-eqz v0, :cond_2

    invoke-virtual {p1, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mAbi:Ljava/lang/String;

    return-void

    :cond_2
    const-string v0, "Current UTC: "

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/16 p2, 0xd

    invoke-virtual {p1, p2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide p1

    iput-wide p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCurrentTimeStamp:J

    return-void

    :cond_3
    const-string v0, "Abort message: "

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    const/16 p2, 0xf

    invoke-virtual {p1, p2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mAbortMsg:Ljava/lang/String;

    return-void

    :cond_4
    const-string v0, "    r"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_10

    const-string v0, "    ip"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_10

    const-string v0, "    x"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_10

    const-string v0, "    sp"

    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    goto/16 :goto_5

    :cond_5
    const-string p2, "pid: "

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    const/16 v0, 0x9

    const-string v1, "\\s+"

    if-eqz p2, :cond_d

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    array-length p2, p1

    if-lt p2, v0, :cond_c

    const/4 p2, 0x0

    move v0, p2

    move v1, v0

    move v2, v1

    move v3, v2

    :goto_0
    array-length v4, p1

    if-ge v0, v4, :cond_9

    aget-object v4, p1, v0

    const-string v5, "name:"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_6

    move v1, v0

    goto :goto_1

    :cond_6
    aget-object v4, p1, v0

    const-string v5, ">>>"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_7

    move v2, v0

    goto :goto_1

    :cond_7
    aget-object v4, p1, v0

    const-string v5, "<<<"

    invoke-virtual {v5, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_8

    move v3, v0

    :cond_8
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_9
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    add-int/lit8 v1, v1, 0x1

    aget-object v4, p1, v1

    :goto_2
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    const-string v4, " "

    if-ge v1, v2, :cond_a

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v4, p1, v1

    goto :goto_2

    :cond_a
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mThreadName:Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->setLength(I)V

    add-int/lit8 v2, v2, 0x1

    aget-object p2, p1, v2

    :goto_3
    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    if-ge v2, v3, :cond_b

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object p2, p1, v2

    goto :goto_3

    :cond_b
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mProcessName:Ljava/lang/String;

    :cond_c
    return-void

    :cond_d
    const-string p2, "signal "

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_f

    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    array-length p2, p1

    if-lt p2, v0, :cond_f

    const/4 p2, 0x2

    aget-object p2, p1, p2

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/g;->eS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mSignal:Ljava/lang/String;

    aget-object p2, p1, v2

    invoke-static {p2}, Lcom/kwad/sdk/crash/utils/g;->eS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mCode:Ljava/lang/String;

    array-length p2, p1

    add-int/lit8 p2, p2, -0x1

    aget-object p2, p1, p2

    iput-object p2, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mFaultAddr:Ljava/lang/String;

    array-length p2, p1

    add-int/lit8 p2, p2, -0x1

    aget-object p1, p1, p2

    const-string p2, "--------"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_e

    const-string p1, "True"

    goto :goto_4

    :cond_e
    const-string p1, "False"

    :goto_4
    iput-object p1, p0, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mManuallyKill:Ljava/lang/String;

    :cond_f
    return-void

    :cond_10
    :goto_5
    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    return-void
.end method

.method private static c(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V
    .locals 6

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/crash/model/message/MemoryInfo;

    iget-object v1, p1, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/crash/model/message/MemoryInfo;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    new-instance v2, Ljava/io/BufferedReader;

    new-instance v3, Ljava/io/FileReader;

    invoke-direct {v3, p0}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v2, v3}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    new-instance p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;

    invoke-direct {p0}, Lcom/kwad/sdk/crash/model/message/ThreadInfo;-><init>()V

    :cond_0
    :goto_0
    invoke-virtual {v2}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_4

    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    new-instance p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;

    invoke-direct {p0}, Lcom/kwad/sdk/crash/model/message/ThreadInfo;-><init>()V

    goto :goto_0

    :cond_1
    sget-object v4, Lcom/kwad/sdk/crash/report/g;->aBo:Ljava/util/regex/Pattern;

    invoke-virtual {v4, v3}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v4

    invoke-virtual {v4}, Ljava/util/regex/Matcher;->matches()Z

    move-result v4

    if-eqz v4, :cond_3

    iget-object v4, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTrace:Ljava/lang/String;

    if-nez v4, :cond_2

    goto :goto_1

    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTrace:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_1
    iput-object v3, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTrace:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTrace:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTrace:Ljava/lang/String;

    goto :goto_0

    :cond_3
    sget-object v4, Lcom/kwad/sdk/crash/report/g;->aBn:Ljava/util/regex/Pattern;

    invoke-virtual {v4, v3}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/regex/Matcher;->lookingAt()Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v4

    iput-object v4, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mName:Ljava/lang/String;

    const/4 v4, 0x2

    invoke-virtual {v3, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v4

    iput v4, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mTid:I

    const/4 v4, 0x3

    invoke-virtual {v3, v4}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    iput v3, p0, Lcom/kwad/sdk/crash/model/message/ThreadInfo;->mIndex:I

    goto :goto_0

    :cond_4
    iput-object v1, v0, Lcom/kwad/sdk/crash/model/message/MemoryInfo;->mNativeThreads:Ljava/util/List;

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/model/message/MemoryInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, p1, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :goto_2
    :try_start_2
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_4

    :catchall_0
    move-exception p0

    goto :goto_3

    :catch_0
    move-exception p0

    :try_start_3
    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_2

    :goto_3
    :try_start_4
    invoke-static {v2}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    :catch_1
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_4
    return-void
.end method


# virtual methods
.method protected final a(Ljava/io/File;Ljava/io/File;Ljava/io/File;Ljava/lang/String;)Lcom/kwad/sdk/crash/model/message/ExceptionMessage;
    .locals 3

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".jtrace"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/kwad/sdk/crash/report/g;->D(Ljava/io/File;)Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;

    move-result-object p2

    :try_start_0
    invoke-direct {p0, p2, p1}, Lcom/kwad/sdk/crash/report/g;->a(Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;Ljava/io/File;)V

    invoke-virtual {p0, p3, p2}, Lcom/kwad/sdk/crash/report/g;->b(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    invoke-static {v0, p2}, Lcom/kwad/sdk/crash/report/g;->a(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".ntrace"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0, p2}, Lcom/kwad/sdk/crash/report/g;->c(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    invoke-virtual {p2}, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;Z)V

    invoke-static {p3, p1}, Lcom/kwad/sdk/crash/utils/g;->d(Ljava/io/File;Ljava/io/File;)V

    invoke-virtual {p1, p3}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p3, "------ Native Crash Report Begin ------\n"

    invoke-direct {p1, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    new-instance p1, Ljava/io/File;

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p4, ".minfo"

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-direct {p1, p3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->V(Ljava/io/File;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p2, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mDumpsys:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p3, p2, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/kwad/sdk/crash/report/g;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p2, Lcom/kwad/sdk/crash/model/message/NativeExceptionMessage;->mErrorMessage:Ljava/lang/String;

    :cond_0
    return-object p2
.end method
