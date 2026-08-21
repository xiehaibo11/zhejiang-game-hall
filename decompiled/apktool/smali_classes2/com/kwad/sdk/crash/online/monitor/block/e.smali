.class public final Lcom/kwad/sdk/crash/online/monitor/block/e;
.super Ljava/lang/Object;


# direct methods
.method private static BQ()Z
    .locals 6

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/e;->Fa()I

    move-result v0

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    :cond_0
    invoke-static {v1}, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->bw(Landroid/content/Context;)Lcom/kwad/sdk/crash/online/monitor/block/report/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/crash/online/monitor/block/report/a;->size()J

    move-result-wide v3

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v5, "size:"

    invoke-direct {v1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v5, " limit:"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v5, "perfMonitor.Reporter"

    invoke-static {v5, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    int-to-long v0, v0

    cmp-long v0, v3, v0

    if-ltz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v2
.end method

.method private static Fa()I
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/d;->EY()Lcom/kwad/sdk/crash/online/monitor/a/a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aBa:I

    goto :goto_0

    :cond_0
    const/16 v0, 0x14

    :goto_0
    return v0
.end method

.method static synthetic Fb()Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/e;->BQ()Z

    move-result v0

    return v0
.end method

.method public static a(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;Z)V
    .locals 0

    :try_start_0
    invoke-static/range {p0 .. p6}, Lcom/kwad/sdk/crash/online/monitor/block/e;->b(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x0

    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/online/monitor/block/e;->h(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static b(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 9

    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, ""

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    :try_start_1
    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/b;->eC(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eH(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-eqz v0, :cond_1

    return-object v1

    :cond_1
    const-wide/16 v0, 0x0

    cmp-long v0, p3, v0

    if-nez v0, :cond_2

    const-wide/16 p3, 0x7d0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "perfMonitor.Reporter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    move-object v2, p0

    move-wide v5, p3

    move-wide v3, p1

    move-object v7, p5

    move-object v8, p6

    invoke-static/range {v2 .. v8}, Lcom/kwad/sdk/crash/online/monitor/block/e;->c(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static c(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;-><init>()V

    iput-wide p3, v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockDuration:J

    iput-object p5, v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->currentActivity:Ljava/lang/String;

    iput-object p6, v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->processName:Ljava/lang/String;

    new-instance p5, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;

    invoke-direct {p5}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;-><init>()V

    iput-object p0, p5, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAE:Ljava/lang/String;

    const-wide/16 v1, 0x0

    cmp-long p0, p1, v1

    if-nez p0, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    :cond_0
    iput-wide p1, p5, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->aAC:J

    iget-wide p0, v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->blockLoopInterval:J

    div-long/2addr p3, p0

    long-to-int p0, p3

    iput p0, p5, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent$a;->repeatCount:I

    iget-object p0, v0, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->stackTraceSample:Ljava/util/List;

    invoke-interface {p0, p5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object v0
.end method

.method private static eE(Ljava/lang/String;)Ljava/lang/String;
    .locals 7

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/b;->eC(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eF(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const-wide/16 v1, 0x0

    const-wide/16 v3, 0x7d0

    const-string v5, ""

    const-string v6, ""

    invoke-static/range {v0 .. v6}, Lcom/kwad/sdk/crash/online/monitor/block/e;->c(Ljava/lang/String;JJLjava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/online/monitor/block/BlockEvent;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static eF(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "\n"

    const-string v1, "at "

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, ""

    if-eqz v2, :cond_0

    return-object v3

    :cond_0
    :try_start_0
    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {p0, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {p0, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    :cond_1
    invoke-virtual {p0, v1, v3}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eG(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "\\)"

    const-string v2, "\\)\n"

    invoke-virtual {p0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "\n\tat "

    if-eqz v1, :cond_2

    :try_start_1
    invoke-virtual {p0, v0, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "\n\tat _"

    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    move-exception v0

    invoke-static {v0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "perfMonitor.Reporter"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object p0
.end method

.method private static eG(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, ""

    if-eqz p0, :cond_0

    const-string v1, "\\s*|\t|\r|\n"

    invoke-static {v1}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v1

    invoke-virtual {v1, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p0

    invoke-virtual {p0, v0}, Ljava/util/regex/Matcher;->replaceAll(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_0
    return-object v0
.end method

.method private static eH(Ljava/lang/String;)Ljava/lang/String;
    .locals 6

    const-string v0, "perfMonitor.Reporter"

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_0

    return-object v2

    :cond_0
    :try_start_0
    const-string v1, " \n"

    invoke-virtual {p0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "oldVersion:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "at "

    const-string v4, "\n"

    if-eqz v1, :cond_2

    :try_start_1
    invoke-virtual {p0, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p0, v3}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    :cond_1
    const-string v1, ":"

    const-string v5, "\\."

    invoke-virtual {p0, v1, v5}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    :cond_2
    invoke-virtual {p0, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, " "

    invoke-virtual {p0, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v2, "\n\tat "

    if-eqz v1, :cond_3

    :try_start_2
    invoke-virtual {p0, v4, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "\n\tat _"

    invoke-virtual {p0, v1, v4}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    return-object p0

    :catch_0
    move-exception v1

    invoke-static {v1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method public static eI(Ljava/lang/String;)V
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "reportPrinterName:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "perfMonitor.Reporter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/d;->EZ()Z

    move-result v0

    if-eqz v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/crash/online/monitor/block/c;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/online/monitor/block/c;-><init>()V

    iput-object p0, v0, Lcom/kwad/sdk/crash/online/monitor/block/c;->aAL:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/a;->EX()Z

    move-result p0

    iput-boolean p0, v0, Lcom/kwad/sdk/crash/online/monitor/block/c;->aAN:Z

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/online/monitor/block/c;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->x(Lorg/json/JSONObject;)V

    :cond_1
    return-void
.end method

.method public static eJ(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/crash/online/monitor/block/c;

    invoke-direct {v0}, Lcom/kwad/sdk/crash/online/monitor/block/c;-><init>()V

    iput-object p0, v0, Lcom/kwad/sdk/crash/online/monitor/block/c;->errorMsg:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/a;->EX()Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/crash/online/monitor/block/c;->aAN:Z

    invoke-virtual {v0}, Lcom/kwad/sdk/crash/online/monitor/block/c;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->x(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v0, "perfMonitor.Reporter"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static g(Ljava/lang/String;Z)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eE(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x0

    invoke-static {p0, p1}, Lcom/kwad/sdk/crash/online/monitor/block/e;->h(Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static h(Ljava/lang/String;Z)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/crash/online/monitor/block/e$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/crash/online/monitor/block/e$1;-><init>(Ljava/lang/String;Z)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method static synthetic xS()I
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/crash/online/monitor/block/e;->Fa()I

    move-result v0

    return v0
.end method
