.class public Lcom/tencent/bugly/BuglyStrategy;
.super Ljava/lang/Object;
.source "BUGLY"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/bugly/BuglyStrategy$a;
    }
.end annotation


# instance fields
.field protected a:I

.field protected b:Z

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:J

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:Ljava/lang/String;

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Z

.field private n:Z

.field private o:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field

.field private p:Z

.field private q:Z

.field private r:Z

.field private s:Z

.field private t:Z

.field private u:Lcom/tencent/bugly/BuglyStrategy$a;

.field private v:Z


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 21
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->j:Z

    .line 22
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->k:Z

    .line 23
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->l:Z

    const/4 v1, 0x0

    .line 24
    iput-boolean v1, p0, Lcom/tencent/bugly/BuglyStrategy;->m:Z

    .line 25
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->n:Z

    const/4 v2, 0x0

    .line 26
    iput-object v2, p0, Lcom/tencent/bugly/BuglyStrategy;->o:Ljava/lang/Class;

    .line 27
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->p:Z

    .line 28
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->q:Z

    .line 29
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->r:Z

    .line 30
    iput-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->s:Z

    .line 31
    iput-boolean v1, p0, Lcom/tencent/bugly/BuglyStrategy;->t:Z

    const/16 v0, 0x1f

    .line 37
    iput v0, p0, Lcom/tencent/bugly/BuglyStrategy;->a:I

    .line 38
    iput-boolean v1, p0, Lcom/tencent/bugly/BuglyStrategy;->b:Z

    .line 39
    iput-boolean v1, p0, Lcom/tencent/bugly/BuglyStrategy;->v:Z

    return-void
.end method


# virtual methods
.method public declared-synchronized getAppChannel()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 134
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->d:Ljava/lang/String;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->s:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->d:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getAppPackageName()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 154
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->e:Ljava/lang/String;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->e:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getAppReportDelay()J
    .locals 2

    monitor-enter p0

    .line 170
    :try_start_0
    iget-wide v0, p0, Lcom/tencent/bugly/BuglyStrategy;->f:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-wide v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getAppVersion()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 94
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->c:Ljava/lang/String;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/tencent/bugly/proguard/aa;->b()Lcom/tencent/bugly/proguard/aa;

    move-result-object v0

    iget-object v0, v0, Lcom/tencent/bugly/proguard/aa;->o:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->c:Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getCallBackType()I
    .locals 1

    monitor-enter p0

    .line 372
    :try_start_0
    iget v0, p0, Lcom/tencent/bugly/BuglyStrategy;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getCloseErrorCallback()Z
    .locals 1

    monitor-enter p0

    .line 389
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getCrashHandleCallback()Lcom/tencent/bugly/BuglyStrategy$a;
    .locals 1

    monitor-enter p0

    .line 341
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->u:Lcom/tencent/bugly/BuglyStrategy$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getDeviceID()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 210
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->h:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getDeviceModel()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 230
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->i:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getLibBuglySOFilePath()Ljava/lang/String;
    .locals 1

    monitor-enter p0

    .line 190
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->g:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized getUserInfoActivity()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    monitor-enter p0

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/tencent/bugly/BuglyStrategy;->o:Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized isBuglyLogUpload()Z
    .locals 1

    monitor-enter p0

    .line 73
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->p:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized isEnableANRCrashMonitor()Z
    .locals 1

    monitor-enter p0

    .line 324
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->k:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized isEnableCatchAnrTrace()Z
    .locals 1

    monitor-enter p0

    .line 290
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->l:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized isEnableNativeCrashMonitor()Z
    .locals 1

    monitor-enter p0

    .line 250
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->j:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public isEnableRecordAnrMainStack()Z
    .locals 1

    .line 315
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->m:Z

    return v0
.end method

.method public declared-synchronized isEnableUserInfo()Z
    .locals 1

    monitor-enter p0

    .line 281
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->n:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public isMerged()Z
    .locals 1

    .line 398
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->v:Z

    return v0
.end method

.method public isReplaceOldChannel()Z
    .locals 1

    .line 81
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->q:Z

    return v0
.end method

.method public declared-synchronized isUploadProcess()Z
    .locals 1

    monitor-enter p0

    .line 69
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->r:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized isUploadSpotCrash()Z
    .locals 1

    monitor-enter p0

    .line 425
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->s:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized recordUserInfoOnceADay()Z
    .locals 1

    monitor-enter p0

    .line 77
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/BuglyStrategy;->t:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized setAppChannel(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 144
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 145
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setAppPackageName(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 164
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->e:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 165
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setAppReportDelay(J)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 180
    :try_start_0
    iput-wide p1, p0, Lcom/tencent/bugly/BuglyStrategy;->f:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 181
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setAppVersion(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 104
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 105
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setBuglyLogUpload(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 48
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->p:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 49
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setCallBackType(I)V
    .locals 0

    monitor-enter p0

    .line 364
    :try_start_0
    iput p1, p0, Lcom/tencent/bugly/BuglyStrategy;->a:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 365
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setCloseErrorCallback(Z)V
    .locals 0

    monitor-enter p0

    .line 381
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 382
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setCrashHandleCallback(Lcom/tencent/bugly/BuglyStrategy$a;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 351
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->u:Lcom/tencent/bugly/BuglyStrategy$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 352
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setDeviceID(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 220
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->h:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 221
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setDeviceModel(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 240
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->i:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 241
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setEnableANRCrashMonitor(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 331
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->k:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 332
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setEnableCatchAnrTrace(Z)V
    .locals 0

    .line 297
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->l:Z

    return-void
.end method

.method public declared-synchronized setEnableNativeCrashMonitor(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 260
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->j:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 261
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setEnableRecordAnrMainStack(Z)V
    .locals 0

    .line 306
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->m:Z

    return-void
.end method

.method public declared-synchronized setEnableUserInfo(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 271
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->n:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 272
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setLibBuglySOFilePath(Ljava/lang/String;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 200
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->g:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 201
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setMerged(Z)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 409
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->v:Z

    return-void
.end method

.method public declared-synchronized setRecordUserInfoOnceADay(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 59
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->t:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 60
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public setReplaceOldChannel(Z)V
    .locals 0

    .line 85
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->q:Z

    return-void
.end method

.method public declared-synchronized setUploadProcess(Z)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0

    monitor-enter p0

    .line 64
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->r:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 65
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setUploadSpotCrash(Z)V
    .locals 0

    monitor-enter p0

    .line 418
    :try_start_0
    iput-boolean p1, p0, Lcom/tencent/bugly/BuglyStrategy;->s:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 419
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized setUserInfoActivity(Ljava/lang/Class;)Lcom/tencent/bugly/BuglyStrategy;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;)",
            "Lcom/tencent/bugly/BuglyStrategy;"
        }
    .end annotation

    monitor-enter p0

    .line 115
    :try_start_0
    iput-object p1, p0, Lcom/tencent/bugly/BuglyStrategy;->o:Ljava/lang/Class;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 116
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method
