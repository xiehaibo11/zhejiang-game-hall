.class public final Lcom/kwad/sdk/crash/online/monitor/block/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile aAA:Z

.field private static volatile aAB:Z

.field private static volatile aAw:Z

.field private static aAx:Ljava/lang/String;

.field private static aAy:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static aAz:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public static EW()Z
    .locals 5

    sget-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAw:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    const/4 v2, 0x1

    :try_start_0
    const-string v3, "mLogging"

    invoke-static {v0, v3}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/util/Printer;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_1

    return v1

    :cond_1
    return v2

    :catch_0
    move-exception v0

    const-string v3, "perfMonitor.MonitorDetector"

    const-string v4, "hasBlockMonitor "

    invoke-static {v3, v4, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    sput-boolean v2, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAw:Z

    return v1
.end method

.method public static EX()Z
    .locals 5

    sget-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAB:Z

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAA:Z

    return v0

    :cond_0
    const/4 v0, 0x1

    :try_start_0
    new-instance v1, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AL()Lcom/kwad/sdk/core/a/c$a;

    move-result-object v2

    const-string v3, "Y29tLnRlbmNlbnQubWF0cml4Lk1hdHJpeA=="

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/a/c$a;->decode(Ljava/lang/String;)[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljava/lang/String;-><init>([B)V

    const-string v2, "perfMonitor.MonitorDetector"

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "hasMatrix after:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_1

    return v0

    :catch_0
    :cond_1
    const/4 v1, 0x0

    sput-boolean v1, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAA:Z

    sput-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAB:Z

    sget-boolean v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAA:Z

    return v0
.end method

.method public static a(Lcom/kwad/sdk/crash/online/monitor/a/a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAV:Ljava/util/List;

    sput-object v0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAy:Ljava/util/List;

    iget-object p0, p0, Lcom/kwad/sdk/crash/online/monitor/a/a;->aAW:Ljava/util/List;

    sput-object p0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAz:Ljava/util/List;

    return-void
.end method

.method private static a(Ljava/util/List;Z)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;Z)Z"
        }
    .end annotation

    const-string v0, "perfMonitor.MonitorDetector"

    sget-boolean v1, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAw:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    :cond_0
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    const/4 v3, 0x1

    :try_start_0
    const-string v4, "mLogging"

    invoke-static {v1, v4}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/util/Printer;

    if-eqz v1, :cond_3

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v4

    sput-object v4, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAx:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "originPrinter name:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_1

    sget-object p1, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAx:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/online/monitor/block/e;->eI(Ljava/lang/String;)V

    :cond_1
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_2
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    new-instance v4, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/core/a/c;->AL()Lcom/kwad/sdk/core/a/c$a;

    move-result-object v5

    invoke-virtual {v5, p1}, Lcom/kwad/sdk/core/a/c$a;->decode(Ljava/lang/String;)[B

    move-result-object p1

    invoke-direct {v4, p1}, Ljava/lang/String;-><init>([B)V

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v5, "printer after:"

    invoke-direct {p1, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p0, "printer monitor"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v3

    :cond_3
    const-string p0, "printer not hook"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string p1, "hasBlockMonitor "

    invoke-static {v0, p1, p0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    sput-boolean v3, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAw:Z

    :cond_4
    :goto_0
    return v2
.end method

.method public static bq(Z)Z
    .locals 1

    sget-object p0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAy:Ljava/util/List;

    const/4 v0, 0x1

    if-eqz p0, :cond_1

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    sget-object p0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAy:Ljava/util/List;

    invoke-static {p0, v0}, Lcom/kwad/sdk/crash/online/monitor/block/a;->a(Ljava/util/List;Z)Z

    move-result p0

    return p0

    :cond_1
    :goto_0
    const-string p0, "Y29tLnRlbmNlbnQubWF0cml4LnRyYWNlLmNvcmUuTG9vcGVyTW9uaXRvcg=="

    invoke-static {p0, v0}, Lcom/kwad/sdk/crash/online/monitor/block/a;->f(Ljava/lang/String;Z)Z

    move-result p0

    return p0
.end method

.method public static br(Z)Z
    .locals 1

    sget-object p0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAz:Ljava/util/List;

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_0

    sget-object p0, Lcom/kwad/sdk/crash/online/monitor/block/a;->aAz:Ljava/util/List;

    invoke-static {p0, v0}, Lcom/kwad/sdk/crash/online/monitor/block/a;->a(Ljava/util/List;Z)Z

    move-result p0

    return p0

    :cond_0
    return v0
.end method

.method private static f(Ljava/lang/String;Z)Z
    .locals 1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {v0, p1}, Lcom/kwad/sdk/crash/online/monitor/block/a;->a(Ljava/util/List;Z)Z

    move-result p0

    return p0
.end method
