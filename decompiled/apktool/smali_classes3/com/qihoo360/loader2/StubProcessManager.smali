.class public Lcom/qihoo360/loader2/StubProcessManager;
.super Ljava/lang/Object;
.source "StubProcessManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;,
        Lcom/qihoo360/loader2/StubProcessManager$StubProcessState;
    }
.end annotation


# static fields
.field private static final CHECK:Ljava/lang/Runnable;

.field static final CHECK_STAGE1_DELAY:I = 0x4268

.field private static final CHECK_STAGE2_DELAY:I = 0x2af8

.field private static final CHECK_STAGE3_DELAY:I = 0xbb8

.field static final STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    const/4 v0, 0x2

    new-array v1, v0, [Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    .line 28
    sput-object v1, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    .line 32
    new-instance v1, Lcom/qihoo360/loader2/StubProcessManager$1;

    invoke-direct {v1}, Lcom/qihoo360/loader2/StubProcessManager$1;-><init>()V

    sput-object v1, Lcom/qihoo360/loader2/StubProcessManager;->CHECK:Ljava/lang/Runnable;

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_0

    .line 41
    new-instance v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    invoke-direct {v3, v2, v1}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;-><init>(II)V

    .line 42
    sget-object v4, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    aput-object v3, v4, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()V
    .locals 0

    .line 24
    invoke-static {}, Lcom/qihoo360/loader2/StubProcessManager;->doPluginProcessLoop()V

    return-void
.end method

.method static synthetic access$100(Ljava/util/List;I)I
    .locals 0

    .line 24
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->lookupPluginProcess(Ljava/util/List;I)I

    move-result p0

    return p0
.end method

.method static synthetic access$200(I)V
    .locals 0

    .line 24
    invoke-static {p0}, Lcom/qihoo360/loader2/StubProcessManager;->waitKilled(I)V

    return-void
.end method

.method static final allocProcess(Ljava/lang/String;)I
    .locals 12

    .line 52
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 53
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "alloc plugin process: plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 56
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/base/AMSUtils;->getRunningAppProcessesNoThrows(Landroid/content/Context;)Ljava/util/List;

    move-result-object v0

    const/high16 v1, -0x80000000

    if-eqz v0, :cond_8

    .line 58
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_3

    :cond_1
    const/4 v2, -0x1

    const/4 v3, 0x0

    .line 68
    sget-object v4, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v5, v4

    const/4 v6, 0x0

    :goto_0
    if-ge v6, v5, :cond_4

    aget-object v7, v4, v6

    .line 69
    monitor-enter v7

    .line 70
    :try_start_0
    invoke-virtual {v7, p0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->calculateMatchPriority(Ljava/lang/String;)I

    move-result v8

    if-le v8, v2, :cond_2

    .line 71
    invoke-virtual {v7, p0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->calculateMatchPriority(Ljava/lang/String;)I

    move-result v2

    :goto_1
    move-object v3, v7

    goto :goto_2

    .line 73
    :cond_2
    invoke-virtual {v7, p0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->calculateMatchPriority(Ljava/lang/String;)I

    move-result v8

    if-ne v8, v2, :cond_3

    .line 74
    iget-wide v8, v7, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    iget-wide v10, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    cmp-long v8, v8, v10

    if-gez v8, :cond_3

    goto :goto_1

    .line 78
    :cond_3
    :goto_2
    monitor-exit v7

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_4
    if-nez v3, :cond_5

    return v1

    .line 83
    :cond_5
    monitor-enter v3

    .line 85
    :try_start_1
    invoke-virtual {v3, p0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->calculateMatchPriority(Ljava/lang/String;)I

    move-result v1

    const v2, 0x7fffffff

    if-ne v1, v2, :cond_7

    iget v1, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_6

    iget v1, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_7

    .line 87
    :cond_6
    iget p0, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->index:I

    monitor-exit v3

    return p0

    .line 89
    :cond_7
    invoke-virtual {v3, p0, v0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->resetAllocate(Ljava/lang/String;Ljava/util/List;)V

    .line 90
    iget p0, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->index:I

    monitor-exit v3

    return p0

    :catchall_1
    move-exception p0

    .line 91
    monitor-exit v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    throw p0

    .line 59
    :cond_8
    :goto_3
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_9

    const-string v0, "ws001"

    const-string v2, "alloc plugin process: get running processes is empty"

    .line 60
    invoke-static {v0, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 61
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "get list exception p="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "ws001"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_9
    return v1
.end method

.method static final attachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 146
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 147
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reg activity: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " index="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " plugin="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " activity="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " container="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "ws001"

    invoke-static {p2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-ltz p1, :cond_3

    .line 150
    sget-object p0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length p2, p0

    if-lt p1, p2, :cond_1

    goto :goto_0

    .line 157
    :cond_1
    aget-object p0, p0, p1

    .line 158
    monitor-enter p0

    .line 159
    :try_start_0
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    const/4 p2, 0x1

    add-int/2addr p1, p2

    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    .line 160
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p3

    iput-wide p3, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 161
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "ws001"

    .line 162
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "activities="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p4, " services="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p4, " binders="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 164
    :cond_2
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 165
    invoke-static {}, Lcom/qihoo360/loader2/StubProcessManager;->cancelPluginProcessLoop()V

    return p2

    :catchall_0
    move-exception p1

    .line 164
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    .line 151
    :cond_3
    :goto_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    .line 152
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "reg activity: invalid index="

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/4 p0, 0x0

    return p0
.end method

.method static final attachBinder(ILandroid/os/IBinder;)V
    .locals 4

    .line 268
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 269
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reg binder: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " binder="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 271
    :cond_0
    sget-object p1, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_3

    aget-object v2, p1, v1

    .line 272
    iget v3, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    if-ne v3, p0, :cond_2

    .line 273
    monitor-enter v2

    .line 274
    :try_start_0
    iget p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    add-int/lit8 p0, p0, 0x1

    iput p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    .line 275
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    iput-wide p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 276
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    const-string p0, "ws001"

    .line 277
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "activities="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " services="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " binders="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 279
    :cond_1
    monitor-exit v2

    goto :goto_1

    :catchall_0
    move-exception p0

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 284
    :cond_3
    :goto_1
    invoke-static {}, Lcom/qihoo360/loader2/StubProcessManager;->cancelPluginProcessLoop()V

    return-void
.end method

.method static final attachService(IILjava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 211
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 212
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "reg service: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " index="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " plugin="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " service="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "ws001"

    invoke-static {p2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-ltz p1, :cond_3

    .line 215
    sget-object p0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length p2, p0

    if-lt p1, p2, :cond_1

    goto :goto_0

    .line 222
    :cond_1
    aget-object p0, p0, p1

    .line 223
    monitor-enter p0

    .line 224
    :try_start_0
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    const/4 p2, 0x1

    add-int/2addr p1, p2

    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    .line 225
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 226
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "ws001"

    .line 227
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "activities="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " services="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " binders="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 229
    :cond_2
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 230
    invoke-static {}, Lcom/qihoo360/loader2/StubProcessManager;->cancelPluginProcessLoop()V

    return p2

    :catchall_0
    move-exception p1

    .line 229
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    .line 216
    :cond_3
    :goto_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    .line 217
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "reg service: invalid index="

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/4 p0, 0x0

    return p0
.end method

.method static final attachStubProcess(IILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 329
    sget-object v0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    aget-object p1, v0, p1

    .line 330
    monitor-enter p1

    .line 331
    :try_start_0
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 332
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    const-string v0, "ws001"

    const-string v1, "attach process: allocate now"

    .line 333
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 335
    :cond_0
    invoke-virtual {p1, p4}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->allocate(Ljava/lang/String;)V

    .line 337
    :cond_1
    iget p4, p1, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    const/4 v0, 0x1

    if-eq p4, v0, :cond_3

    .line 338
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    const-string p0, "ws001"

    .line 339
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "attach process: state not allocated: state="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p3, p1, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p0, 0x0

    .line 341
    monitor-exit p1

    return-object p0

    .line 344
    :cond_3
    invoke-virtual {p1, p0}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->setRunning(I)V

    .line 345
    invoke-virtual {p1, p2, p3}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->setClient(Landroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;)V

    .line 346
    iget-object p0, p1, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->plugin:Ljava/lang/String;

    monitor-exit p1

    return-object p0

    :catchall_0
    move-exception p0

    .line 347
    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static final cancelPluginProcessLoop()V
    .locals 0

    return-void
.end method

.method static final detachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 179
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 180
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unreg activity: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " index="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " plugin="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " activity="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " container="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "ws001"

    invoke-static {p2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-ltz p1, :cond_3

    .line 183
    sget-object p0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length p2, p0

    if-lt p1, p2, :cond_1

    goto :goto_0

    .line 190
    :cond_1
    aget-object p0, p0, p1

    .line 191
    monitor-enter p0

    .line 192
    :try_start_0
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    const/4 p2, 0x1

    sub-int/2addr p1, p2

    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    .line 193
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p3

    iput-wide p3, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 194
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "ws001"

    .line 195
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "activities="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p4, " services="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p4, " binders="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p4, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 197
    :cond_2
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 p0, 0x2af8

    .line 198
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->schedulePluginProcessLoop(J)V

    return p2

    :catchall_0
    move-exception p1

    .line 197
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    .line 184
    :cond_3
    :goto_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    .line 185
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "unreg activity: invalid index="

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/4 p0, 0x0

    return p0
.end method

.method static final detachBinder(ILandroid/os/IBinder;)V
    .locals 4

    .line 288
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 289
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unreg binder: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " binder="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 291
    :cond_0
    sget-object p1, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_3

    aget-object v2, p1, v1

    .line 292
    iget v3, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    if-ne v3, p0, :cond_2

    .line 293
    monitor-enter v2

    .line 294
    :try_start_0
    iget p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    add-int/lit8 p0, p0, -0x1

    iput p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    .line 295
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p0

    iput-wide p0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 296
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    const-string p0, "ws001"

    .line 297
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "activities="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " services="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " binders="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, v2, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 299
    :cond_1
    monitor-exit v2

    goto :goto_1

    :catchall_0
    move-exception p0

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    :goto_1
    const-wide/16 p0, 0x2af8

    .line 304
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->schedulePluginProcessLoop(J)V

    return-void
.end method

.method static final detachService(IILjava/lang/String;Ljava/lang/String;)Z
    .locals 2

    .line 243
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 244
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "unreg service: pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " index="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, " plugin="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " service="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p2, "ws001"

    invoke-static {p2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-ltz p1, :cond_3

    .line 247
    sget-object p0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length p2, p0

    if-lt p1, p2, :cond_1

    goto :goto_0

    .line 254
    :cond_1
    aget-object p0, p0, p1

    .line 255
    monitor-enter p0

    .line 256
    :try_start_0
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    const/4 p2, 0x1

    sub-int/2addr p1, p2

    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    .line 257
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 258
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    const-string p1, "ws001"

    .line 259
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "activities="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " services="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " binders="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {p1, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 261
    :cond_2
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-wide/16 p0, 0x2af8

    .line 262
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager;->schedulePluginProcessLoop(J)V

    return p2

    :catchall_0
    move-exception p1

    .line 261
    :try_start_1
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1

    .line 248
    :cond_3
    :goto_0
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_4

    .line 249
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "unreg service: invalid index="

    invoke-virtual {p0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "ws001"

    invoke-static {p1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    const/4 p0, 0x0

    return p0
.end method

.method private static final doPluginProcessLoop()V
    .locals 0

    return-void
.end method

.method static final dump(Ljava/io/PrintWriter;)V
    .locals 4

    .line 407
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "--- STUB_PROCESSES.length = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v1, v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " ---"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 408
    sget-object v0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 409
    monitor-enter v3

    .line 410
    :try_start_0
    invoke-virtual {p0, v3}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    .line 411
    monitor-exit v3

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_0
    return-void
.end method

.method private static final lookupPluginProcess(Ljava/util/List;I)I
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/app/ActivityManager$RunningAppProcessInfo;",
            ">;I)I"
        }
    .end annotation

    .line 95
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 96
    iget v1, v0, Landroid/app/ActivityManager$RunningAppProcessInfo;->uid:I

    sget v2, Lcom/qihoo360/loader2/PluginManager;->sUid:I

    if-eq v1, v2, :cond_1

    goto :goto_0

    .line 99
    :cond_1
    iget-object v1, v0, Landroid/app/ActivityManager$RunningAppProcessInfo;->processName:Ljava/lang/String;

    invoke-static {v1}, Lcom/qihoo360/loader2/PluginManager;->evalPluginProcess(Ljava/lang/String;)I

    move-result v1

    if-ne v1, p1, :cond_0

    .line 101
    iget p0, v0, Landroid/app/ActivityManager$RunningAppProcessInfo;->pid:I

    return p0

    :cond_2
    const/4 p0, -0x1

    return p0
.end method

.method static final schedulePluginProcessLoop(J)V
    .locals 0

    return-void
.end method

.method static final setProcessStop(Landroid/os/IBinder;)V
    .locals 5

    .line 351
    sget-object v0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 352
    monitor-enter v3

    .line 353
    :try_start_0
    iget-object v4, v3, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binder:Landroid/os/IBinder;

    if-ne v4, p0, :cond_0

    .line 354
    invoke-virtual {v3}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->setStoped()V

    .line 355
    monitor-exit v3

    goto :goto_1

    .line 357
    :cond_0
    monitor-exit v3

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_1
    return-void
.end method

.method static final sumBinders(I)I
    .locals 2

    if-ltz p0, :cond_0

    .line 308
    sget-object v0, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    array-length v1, v0

    if-ge p0, v1, :cond_0

    .line 309
    aget-object v0, v0, p0

    .line 310
    monitor-enter v0

    .line 311
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/StubProcessManager;->STUB_PROCESSES:[Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;

    aget-object p0, v1, p0

    iget p0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    monitor-exit v0

    return p0

    :catchall_0
    move-exception p0

    .line 312
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_0
    const/4 p0, -0x1

    return p0
.end method

.method private static final waitKilled(I)V
    .locals 5

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    const/16 v2, 0xa

    if-ge v1, v2, :cond_4

    const-wide/16 v2, 0x64

    .line 110
    :try_start_0
    invoke-static {v2, v3, v0}, Ljava/lang/Thread;->sleep(JI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 115
    :catchall_0
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/qihoo360/replugin/base/AMSUtils;->getRunningAppProcessesNoThrows(Landroid/content/Context;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_3

    .line 116
    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_2

    .line 120
    :cond_0
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    move v3, v0

    :cond_1
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/app/ActivityManager$RunningAppProcessInfo;

    .line 121
    iget v4, v4, Landroid/app/ActivityManager$RunningAppProcessInfo;->pid:I

    if-ne v4, p0, :cond_1

    const/4 v3, 0x1

    goto :goto_1

    :cond_2
    if-nez v3, :cond_3

    return-void

    :cond_3
    :goto_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    return-void
.end method
