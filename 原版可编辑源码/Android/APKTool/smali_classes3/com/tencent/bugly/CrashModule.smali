.class public Lcom/tencent/bugly/CrashModule;
.super Lcom/tencent/bugly/proguard/o;
.source "BUGLY"


# static fields
.field public static final MODULE_ID:I = 0x3ec

.field private static c:I

.field private static e:Lcom/tencent/bugly/CrashModule;


# instance fields
.field private a:J

.field private b:Lcom/tencent/bugly/BuglyStrategy$a;

.field private d:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 30
    new-instance v0, Lcom/tencent/bugly/CrashModule;

    invoke-direct {v0}, Lcom/tencent/bugly/CrashModule;-><init>()V

    sput-object v0, Lcom/tencent/bugly/CrashModule;->e:Lcom/tencent/bugly/CrashModule;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 22
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/o;-><init>()V

    const/4 v0, 0x0

    .line 28
    iput-boolean v0, p0, Lcom/tencent/bugly/CrashModule;->d:Z

    return-void
.end method

.method private declared-synchronized a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V
    .locals 6

    monitor-enter p0

    if-nez p2, :cond_0

    .line 111
    monitor-exit p0

    return-void

    .line 114
    :cond_0
    :try_start_0
    invoke-virtual {p2}, Lcom/tencent/bugly/BuglyStrategy;->getLibBuglySOFilePath()Ljava/lang/String;

    move-result-object v0

    .line 115
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_1

    .line 116
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object p1

    iput-object v0, p1, Lcom/tencent/bugly/proguard/aa;->t:Ljava/lang/String;

    const-string p1, "setted libBugly.so file path :%s"

    .line 117
    new-array v1, v2, [Ljava/lang/Object;

    aput-object v0, v1, v3

    invoke-static {p1, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 120
    :cond_1
    invoke-virtual {p2}, Lcom/tencent/bugly/BuglyStrategy;->getCrashHandleCallback()Lcom/tencent/bugly/BuglyStrategy$a;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 121
    invoke-virtual {p2}, Lcom/tencent/bugly/BuglyStrategy;->getCrashHandleCallback()Lcom/tencent/bugly/BuglyStrategy$a;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/CrashModule;->b:Lcom/tencent/bugly/BuglyStrategy$a;

    const-string p1, "setted CrashHanldeCallback"

    .line 122
    new-array v0, v3, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 125
    :cond_2
    invoke-virtual {p2}, Lcom/tencent/bugly/BuglyStrategy;->getAppReportDelay()J

    move-result-wide v0

    const-wide/16 v4, 0x0

    cmp-long p1, v0, v4

    if-lez p1, :cond_3

    .line 126
    invoke-virtual {p2}, Lcom/tencent/bugly/BuglyStrategy;->getAppReportDelay()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/tencent/bugly/CrashModule;->a:J

    const-string p1, "setted delay: %d"

    .line 127
    new-array p2, v2, [Ljava/lang/Object;

    iget-wide v0, p0, Lcom/tencent/bugly/CrashModule;->a:J

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, p2, v3

    invoke-static {p1, p2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 129
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public static getInstance()Lcom/tencent/bugly/CrashModule;
    .locals 2

    .line 33
    sget-object v0, Lcom/tencent/bugly/CrashModule;->e:Lcom/tencent/bugly/CrashModule;

    const/16 v1, 0x3ec

    iput v1, v0, Lcom/tencent/bugly/CrashModule;->id:I

    return-object v0
.end method


# virtual methods
.method public getTables()[Ljava/lang/String;
    .locals 1

    const-string v0, "t_cr"

    .line 146
    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public declared-synchronized hasInitialized()Z
    .locals 1

    monitor-enter p0

    .line 38
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/CrashModule;->d:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized init(Landroid/content/Context;ZLcom/tencent/bugly/BuglyStrategy;)V
    .locals 4

    monitor-enter p0

    if-eqz p1, :cond_a

    .line 48
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/CrashModule;->d:Z

    if-eqz v0, :cond_0

    goto/16 :goto_6

    :cond_0
    const-string v0, "Initializing crash module."

    const/4 v1, 0x0

    .line 51
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 52
    invoke-static {}, Lcom/tencent/bugly/proguard/u;->a()Lcom/tencent/bugly/proguard/u;

    move-result-object v0

    sget v2, Lcom/tencent/bugly/CrashModule;->c:I

    const/4 v3, 0x1

    add-int/2addr v2, v3

    sput v2, Lcom/tencent/bugly/CrashModule;->c:I

    invoke-virtual {v0, v2}, Lcom/tencent/bugly/proguard/u;->a(I)V

    .line 53
    iput-boolean v3, p0, Lcom/tencent/bugly/CrashModule;->d:Z

    .line 54
    invoke-static {p1}, Lcom/tencent/bugly/crashreport/CrashReport;->setContext(Landroid/content/Context;)V

    .line 55
    invoke-direct {p0, p1, p3}, Lcom/tencent/bugly/CrashModule;->a(Landroid/content/Context;Lcom/tencent/bugly/BuglyStrategy;)V

    .line 56
    iget-object v0, p0, Lcom/tencent/bugly/CrashModule;->b:Lcom/tencent/bugly/BuglyStrategy$a;

    invoke-static {p1, p2, v0}, Lcom/tencent/bugly/proguard/at;->a(Landroid/content/Context;ZLcom/tencent/bugly/BuglyStrategy$a;)Lcom/tencent/bugly/proguard/at;

    move-result-object p2

    .line 1236
    iget-object v0, p2, Lcom/tencent/bugly/proguard/at;->t:Lcom/tencent/bugly/proguard/av;

    invoke-virtual {v0}, Lcom/tencent/bugly/proguard/av;->a()V

    if-eqz p3, :cond_2

    .line 60
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getCallBackType()I

    move-result v0

    .line 1452
    iput v0, p2, Lcom/tencent/bugly/proguard/at;->B:I

    .line 61
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getCloseErrorCallback()Z

    move-result v0

    .line 1469
    iput-boolean v0, p2, Lcom/tencent/bugly/proguard/at;->C:Z

    .line 62
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isUploadSpotCrash()Z

    move-result v0

    sput-boolean v0, Lcom/tencent/bugly/proguard/at;->o:Z

    .line 63
    invoke-static {p1}, Lcom/tencent/bugly/proguard/aa;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    .line 64
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isEnableRecordAnrMainStack()Z

    move-result v2

    .line 2389
    iput-boolean v2, v0, Lcom/tencent/bugly/proguard/aa;->S:Z

    .line 65
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isEnableCatchAnrTrace()Z

    move-result v0

    if-nez v0, :cond_1

    .line 3292
    iget-object v0, p2, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->disableCatchAnrTrace()V

    goto :goto_0

    .line 4285
    :cond_1
    iget-object v0, p2, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->enableCatchAnrTrace()V

    goto :goto_0

    .line 5285
    :cond_2
    iget-object v0, p2, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->enableCatchAnrTrace()V

    .line 5432
    :goto_0
    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->d:Ljava/lang/String;

    iget-object v2, p2, Lcom/tencent/bugly/proguard/at;->c:Landroid/content/Context;

    invoke-static {v2}, Lcom/tencent/bugly/proguard/z;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 5433
    iget-object v0, p2, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {v0}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->removeEmptyNativeRecordFiles()V

    :cond_3
    if-eqz p3, :cond_5

    .line 76
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isEnableNativeCrashMonitor()Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_1

    :cond_4
    const-string v0, "[crash] Closed native crash monitor!"

    .line 79
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 80
    invoke-virtual {p2}, Lcom/tencent/bugly/proguard/at;->d()V

    goto :goto_2

    .line 77
    :cond_5
    :goto_1
    invoke-virtual {p2}, Lcom/tencent/bugly/proguard/at;->e()V

    :goto_2
    if-eqz p3, :cond_7

    .line 82
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isEnableANRCrashMonitor()Z

    move-result v0

    if-eqz v0, :cond_6

    goto :goto_3

    :cond_6
    const-string v0, "[crash] Closed ANR monitor!"

    .line 85
    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/tencent/bugly/proguard/al;->a(Ljava/lang/String;[Ljava/lang/Object;)Z

    .line 86
    invoke-virtual {p2}, Lcom/tencent/bugly/proguard/at;->g()V

    goto :goto_4

    .line 83
    :cond_7
    :goto_3
    invoke-virtual {p2}, Lcom/tencent/bugly/proguard/at;->f()V

    :goto_4
    if-eqz p3, :cond_8

    .line 89
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->isMerged()Z

    move-result v0

    sput-boolean v0, Lcom/tencent/bugly/proguard/at;->e:Z

    :cond_8
    if-eqz p3, :cond_9

    .line 91
    invoke-virtual {p3}, Lcom/tencent/bugly/BuglyStrategy;->getAppReportDelay()J

    move-result-wide v0

    goto :goto_5

    :cond_9
    const-wide/16 v0, 0x0

    .line 93
    :goto_5
    invoke-virtual {p2, v0, v1}, Lcom/tencent/bugly/proguard/at;->a(J)V

    .line 6424
    iget-object p2, p2, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {p2}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->checkUploadRecordCrash()V

    .line 98
    invoke-static {p1}, Lcom/tencent/bugly/proguard/au;->a(Landroid/content/Context;)Lcom/tencent/bugly/proguard/au;

    .line 101
    invoke-static {}, Lcom/tencent/bugly/proguard/aq;->a()Lcom/tencent/bugly/proguard/aq;

    move-result-object p2

    const-string p3, "android.net.conn.CONNECTIVITY_CHANGE"

    .line 102
    invoke-virtual {p2, p3}, Lcom/tencent/bugly/proguard/aq;->a(Ljava/lang/String;)V

    .line 103
    invoke-virtual {p2, p1}, Lcom/tencent/bugly/proguard/aq;->a(Landroid/content/Context;)V

    .line 105
    invoke-static {}, Lcom/tencent/bugly/proguard/u;->a()Lcom/tencent/bugly/proguard/u;

    move-result-object p1

    sget p2, Lcom/tencent/bugly/CrashModule;->c:I

    sub-int/2addr p2, v3

    sput p2, Lcom/tencent/bugly/CrashModule;->c:I

    invoke-virtual {p1, p2}, Lcom/tencent/bugly/proguard/u;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 107
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    .line 49
    :cond_a
    :goto_6
    monitor-exit p0

    return-void
.end method

.method public onServerStrategyChanged(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    .line 136
    :cond_0
    invoke-static {}, Lcom/tencent/bugly/proguard/at;->a()Lcom/tencent/bugly/proguard/at;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 7171
    iget-object v1, v0, Lcom/tencent/bugly/proguard/at;->t:Lcom/tencent/bugly/proguard/av;

    invoke-virtual {v1, p1}, Lcom/tencent/bugly/proguard/av;->a(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V

    .line 7172
    iget-object v1, v0, Lcom/tencent/bugly/proguard/at;->u:Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;

    invoke-virtual {v1, p1}, Lcom/tencent/bugly/crashreport/crash/jni/NativeCrashHandler;->onStrategyChanged(Lcom/tencent/bugly/crashreport/common/strategy/StrategyBean;)V

    .line 7173
    iget-object p1, v0, Lcom/tencent/bugly/proguard/at;->x:Lcom/tencent/bugly/proguard/ay;

    invoke-virtual {p1}, Lcom/tencent/bugly/proguard/ay;->b()V

    :cond_1
    return-void
.end method
