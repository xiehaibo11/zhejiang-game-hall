.class public Lcom/kwad/sdk/api/loader/d;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Thread$UncaughtExceptionHandler;


# static fields
.field private static aih:Lcom/kwad/sdk/api/loader/d;


# instance fields
.field private DEBUG:Z

.field private aii:Ljava/lang/Thread$UncaughtExceptionHandler;

.field private aij:I

.field private final aik:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private ail:J

.field private mContext:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/api/loader/d;->DEBUG:Z

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/api/loader/d;->aik:Ljava/util/concurrent/atomic/AtomicBoolean;

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/d;->mContext:Landroid/content/Context;

    return-void
.end method

.method public static ax(Landroid/content/Context;)Lcom/kwad/sdk/api/loader/d;
    .locals 2

    sget-object v0, Lcom/kwad/sdk/api/loader/d;->aih:Lcom/kwad/sdk/api/loader/d;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/sdk/api/loader/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/api/loader/d;->aih:Lcom/kwad/sdk/api/loader/d;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/api/loader/d;

    invoke-direct {v1, p0}, Lcom/kwad/sdk/api/loader/d;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/kwad/sdk/api/loader/d;->aih:Lcom/kwad/sdk/api/loader/d;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/kwad/sdk/api/loader/d;->aih:Lcom/kwad/sdk/api/loader/d;

    return-object p0
.end method


# virtual methods
.method public final bP(I)V
    .locals 2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/api/loader/d;->ail:J

    iput p1, p0, Lcom/kwad/sdk/api/loader/d;->aij:I

    iget-boolean p1, p0, Lcom/kwad/sdk/api/loader/d;->DEBUG:Z

    if-eqz p1, :cond_0

    const-string p1, "test.chen"

    const-string v0, "startCheck:"

    invoke-static {p1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method public final cancel()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/sdk/api/loader/d;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "test.chen"

    const-string v1, "AutoRevertHandler cancel:"

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/loader/d;->aik:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    return-void
.end method

.method public final setDefaultUncaughtExceptionHandler(Ljava/lang/Thread$UncaughtExceptionHandler;)V
    .locals 0

    if-eq p1, p0, :cond_0

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/d;->aii:Ljava/lang/Thread$UncaughtExceptionHandler;

    :cond_0
    return-void
.end method

.method public uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V
    .locals 4

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/sdk/api/loader/d;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "test.chen"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "AutoRevertHandler uncaughtException, mStartCheckTime:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v2, p0, Lcom/kwad/sdk/api/loader/d;->ail:J

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ",mMaxDuration:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/kwad/sdk/api/loader/d;->aij:I

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",mIsCancel:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/sdk/api/loader/d;->aik:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/api/loader/d;->aik:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/api/loader/d;->ail:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/sdk/api/loader/d;->ail:J

    sub-long/2addr v0, v2

    iget v2, p0, Lcom/kwad/sdk/api/loader/d;->aij:I

    int-to-long v2, v2

    cmp-long v0, v0, v2

    if-gtz v0, :cond_2

    const-string v0, "filterStack"

    const/4 v1, 0x1

    new-array v2, v1, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p2, v2, v3

    invoke-static {v0, v2}, Lcom/kwad/sdk/api/c;->c(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    goto :goto_0

    :cond_1
    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/kwad/sdk/api/loader/d;->mContext:Landroid/content/Context;

    if-eqz v2, :cond_2

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/d;->mContext:Landroid/content/Context;

    sget-object v2, Lcom/kwad/sdk/api/loader/g;->air:Ljava/lang/String;

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/api/loader/t;->a(Landroid/content/Context;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/api/loader/d;->aii:Ljava/lang/Thread$UncaughtExceptionHandler;

    if-eqz v0, :cond_3

    invoke-interface {v0, p1, p2}, Ljava/lang/Thread$UncaughtExceptionHandler;->uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    return-void

    :catchall_0
    move-exception v0

    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    iget-object v0, p0, Lcom/kwad/sdk/api/loader/d;->aii:Ljava/lang/Thread$UncaughtExceptionHandler;

    if-eqz v0, :cond_3

    invoke-interface {v0, p1, p2}, Ljava/lang/Thread$UncaughtExceptionHandler;->uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    :cond_3
    return-void

    :catchall_1
    move-exception v0

    iget-object v1, p0, Lcom/kwad/sdk/api/loader/d;->aii:Ljava/lang/Thread$UncaughtExceptionHandler;

    if-eqz v1, :cond_4

    invoke-interface {v1, p1, p2}, Ljava/lang/Thread$UncaughtExceptionHandler;->uncaughtException(Ljava/lang/Thread;Ljava/lang/Throwable;)V

    :cond_4
    throw v0
.end method
