.class public final Lcom/kwad/sdk/crash/report/f;
.super Lcom/kwad/sdk/crash/report/d;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/crash/report/d;-><init>()V

    return-void
.end method


# virtual methods
.method protected final a(Ljava/io/File;Ljava/io/File;Ljava/io/File;Ljava/lang/String;)Lcom/kwad/sdk/crash/model/message/ExceptionMessage;
    .locals 6

    const-string p2, "\n"

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1}, Lcom/kwad/sdk/utils/q;->V(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    move-object v1, v0

    :goto_0
    if-eqz v1, :cond_0

    :try_start_1
    new-instance v2, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;

    invoke-direct {v2}, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;-><init>()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    :try_start_2
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->parseJson(Lorg/json/JSONObject;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    goto :goto_1

    :catch_2
    move-exception v2

    move-object v5, v2

    move-object v2, v0

    move-object v0, v5

    :goto_1
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    :goto_2
    move-object v0, v2

    :cond_0
    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;-><init>()V

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->mCrashDetail:Ljava/lang/String;

    :cond_1
    :try_start_3
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/g;->eR(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->mLogUUID:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "------ Java Crash Report Begin ------\n"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/io/File;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".jtrace"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v1, v0}, Lcom/kwad/sdk/crash/report/f;->a(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    invoke-virtual {p0, p3, v0}, Lcom/kwad/sdk/crash/report/f;->b(Ljava/io/File;Lcom/kwad/sdk/crash/model/message/ExceptionMessage;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/kwad/sdk/crash/utils/g;->a(Ljava/io/File;Ljava/lang/CharSequence;)V

    invoke-static {p3, p1}, Lcom/kwad/sdk/crash/utils/g;->d(Ljava/io/File;Ljava/io/File;)V

    invoke-virtual {p1, p3}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

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

    iput-object p1, v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->mDumpsys:Ljava/lang/String;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception p1

    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p4, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_3
    iget-object p1, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p2, v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/kwad/sdk/crash/report/f;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;->mErrorMessage:Ljava/lang/String;

    :cond_2
    return-object v0
.end method
