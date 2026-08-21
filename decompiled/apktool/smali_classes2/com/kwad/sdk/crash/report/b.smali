.class public final Lcom/kwad/sdk/crash/report/b;
.super Lcom/kwad/sdk/crash/report/d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/d;-><init>()V

    return-void
.end method

.method private B(Ljava/io/File;)Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;
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

    iget-object v3, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    const/4 v1, 0x0

    :goto_0
    new-instance v2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;

    invoke-direct {v2}, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;-><init>()V

    if-eqz v1, :cond_0

    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->parseJson(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    :cond_0
    :goto_1
    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->S(Ljava/io/File;)Z

    return-object v2
.end method

.method private a(Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Ljava/io/File;)V
    .locals 9

    const-string v0, "\n"

    invoke-virtual {p2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/g;->eR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mLogUUID:Ljava/lang/String;

    iget-object v1, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mLogUUID:Ljava/lang/String;

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/g;->getIndex(Ljava/lang/String;)I

    move-result v1

    iput v1, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mIndex:I

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v3, 0x0

    const/4 v4, 0x1

    const/4 v5, 0x0

    :try_start_0
    new-instance v6, Ljava/io/BufferedReader;

    new-instance v7, Ljava/io/FileReader;

    invoke-direct {v7, p2}, Ljava/io/FileReader;-><init>(Ljava/io/File;)V

    invoke-direct {v6, v7}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_3
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    move p2, v3

    :cond_0
    :goto_0
    :try_start_1
    invoke-virtual {v6}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_3

    const/16 v7, 0xa

    if-nez p2, :cond_1

    const-string v8, "\"main\" prio"

    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_1

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string p2, "\\s+"

    invoke-virtual {v5, p2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p2

    array-length v5, p2

    sub-int/2addr v5, v4

    aget-object p2, p2, v5

    iput-object p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mThreadStatus:Ljava/lang/String;

    move p2, v4

    goto :goto_0

    :cond_1
    if-eqz p2, :cond_0

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v8

    if-eqz v8, :cond_3

    const-string v8, "  |"

    invoke-virtual {v5, v8}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_2
    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v7}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/io/FileNotFoundException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_3
    invoke-static {v6}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    goto :goto_5

    :catchall_0
    move-exception p1

    move-object v5, v6

    goto/16 :goto_7

    :catch_0
    move-exception p2

    move-object v5, v6

    goto :goto_1

    :catch_1
    move-exception p2

    move-object v5, v6

    goto :goto_3

    :catchall_1
    move-exception p1

    goto/16 :goto_7

    :catch_2
    move-exception p2

    :goto_1
    :try_start_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :goto_2
    iput-object p2, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    goto :goto_4

    :catch_3
    move-exception p2

    :goto_3
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v7, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :goto_4
    invoke-static {v5}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    :goto_5
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    if-le p2, v4, :cond_4

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    sub-int/2addr p2, v4

    invoke-virtual {v1, v3, p2}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashDetail:Ljava/lang/String;

    :cond_4
    iget-object p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashDetail:Ljava/lang/String;

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_5

    iput v3, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashSource:I

    goto :goto_6

    :cond_5
    iget-object p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashDetail:Ljava/lang/String;

    invoke-static {p2}, Lcom/kwad/sdk/crash/report/b;->eM(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_6

    iput v4, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashSource:I

    goto :goto_6

    :cond_6
    const/4 p2, 0x2

    iput p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashSource:I

    :goto_6
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, " message.mCrashSource="

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashSource:I

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "message.mCrashDetail = "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mCrashDetail:Ljava/lang/String;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "AnrReporter"

    invoke-static {v0, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    if-le p2, v4, :cond_7

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result p2

    sub-int/2addr p2, v4

    invoke-virtual {v2, v3, p2}, Ljava/lang/StringBuilder;->substring(II)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mThreadDetail:Ljava/lang/String;

    :cond_7
    return-void

    :goto_7
    invoke-static {v5}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw p1
.end method

.method private eL(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".anr"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    const-string v1, ""

    if-eqz p1, :cond_0

    :try_start_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->V(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/q;->S(Ljava/io/File;)Z

    :cond_0
    return-object v1
.end method

.method private static eM(Ljava/lang/String;)Z
    .locals 6

    invoke-static {}, Lcom/kwad/sdk/crash/e;->EC()Lcom/kwad/sdk/crash/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/e;->ED()[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_1

    aget-object v4, v0, v3

    invoke-virtual {p0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_0

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v0, " tag="

    invoke-direct {p0, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AnrReporter"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return v2
.end method


# virtual methods
.method protected final a(Ljava/io/File;Ljava/io/File;Ljava/io/File;Ljava/lang/String;)Lcom/kwad/sdk/crash/model/message/ExceptionMessage;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "AnrReporter parseExceptionInfo basePath="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AnrReporter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {p0, p2}, Lcom/kwad/sdk/crash/report/b;->B(Ljava/io/File;)Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;

    move-result-object p2

    :try_start_0
    invoke-direct {p0, p4}, Lcom/kwad/sdk/crash/report/b;->eL(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mReason:Ljava/lang/String;

    invoke-direct {p0, p2, p1}, Lcom/kwad/sdk/crash/report/b;->a(Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;Ljava/io/File;)V

    invoke-virtual {p0, p3, p2}, Lcom/kwad/sdk/crash/report/b;->b(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    invoke-virtual {p2}, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;Z)V

    invoke-static {p3, p1}, Lcom/kwad/sdk/crash/utils/g;->d(Ljava/io/File;Ljava/io/File;)V

    invoke-virtual {p1, p3}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p3, "------ ANR Report Begin ------\n"

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

    iput-object p1, p2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mDumpsys:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p3, p2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/kwad/sdk/crash/report/b;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p2, Lcom/kwad/sdk/crash/model/message/AnrExceptionMessage;->mErrorMessage:Ljava/lang/String;

    :cond_0
    return-object p2
.end method
