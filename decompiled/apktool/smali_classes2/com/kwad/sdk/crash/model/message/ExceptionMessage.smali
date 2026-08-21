.class public abstract Lcom/kwad/sdk/crash/model/message/ExceptionMessage;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;
.implements Ljava/io/Serializable;


# static fields
.field private static final serialVersionUID:J = -0x4a165c86f27304e2L


# instance fields
.field public mAbi:Ljava/lang/String;

.field public mAppVersionBeforeLastUpload:Ljava/lang/String;

.field public mBuildConfigInfo:Ljava/lang/String;

.field public mCrashDetail:Ljava/lang/String;

.field public mCrashSource:I

.field public mCrashType:Ljava/lang/String;

.field public mCurrentTimeStamp:J

.field public mCustomMsg:Ljava/lang/String;

.field public mDiskInfo:Ljava/lang/String;

.field public mDumpsys:Ljava/lang/String;

.field public mErrorMessage:Ljava/lang/String;

.field public mExceptionType:I

.field public mFdOverflow:Ljava/lang/String;

.field public mGCInfo:Ljava/lang/String;

.field public mIsAppOnForeground:Ljava/lang/String;

.field public mJNIError:Ljava/lang/String;

.field public mLockInfo:Ljava/lang/String;

.field public mLogUUID:Ljava/lang/String;

.field public mMemoryInfo:Ljava/lang/String;

.field public mMonitorInfo:Ljava/lang/String;

.field public mPid:I

.field public mProcessName:Ljava/lang/String;

.field public mSlowLooper:Ljava/lang/String;

.field public mSlowOperation:Ljava/lang/String;

.field public mTaskId:Ljava/lang/String;

.field public mThreadName:Ljava/lang/String;

.field public mThreadOverflow:Ljava/lang/String;

.field public mTid:I

.field public mUsageTimeMills:J

.field public mVersionCode:Ljava/lang/String;

.field public mVersionConflict:Z

.field public mVirtualApp:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "Unknown"

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDiskInfo:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mProcessName:Ljava/lang/String;

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mExceptionType:I

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getTypeCommon()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashType:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadName:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mIsAppOnForeground:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLogUUID:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVirtualApp:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCustomMsg:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadOverflow:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mFdOverflow:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTaskId:Ljava/lang/String;

    const-string v2, ""

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionCode:Ljava/lang/String;

    iput-boolean v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionConflict:Z

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAppVersionBeforeLastUpload:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mJNIError:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mGCInfo:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLockInfo:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMonitorInfo:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowLooper:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowOperation:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mBuildConfigInfo:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAbi:Ljava/lang/String;

    iput-object v2, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDumpsys:Ljava/lang/String;

    iput v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashSource:I

    return-void
.end method

.method public static final getSdkCrashVersionName(Ljava/lang/String;I)Ljava/lang/String;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "-"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static final getSdkVersionNameSuffix(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    if-eq p0, v0, :cond_4

    const/4 v0, 0x2

    if-eq p0, v0, :cond_3

    const/4 v0, 0x3

    if-eq p0, v0, :cond_2

    const/4 v0, 0x4

    if-eq p0, v0, :cond_1

    const/4 v0, 0x5

    if-eq p0, v0, :cond_0

    const-string p0, ""

    goto :goto_0

    :cond_0
    const-string p0, "-car"

    goto :goto_0

    :cond_1
    const-string p0, "-pct"

    goto :goto_0

    :cond_2
    const-string p0, "-ec"

    goto :goto_0

    :cond_3
    const-string p0, "-ct"

    goto :goto_0

    :cond_4
    const-string p0, "-ad"

    :goto_0
    return-object p0
.end method


# virtual methods
.method public getReportMsg()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "UUID="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLogUUID:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",crashTime="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCurrentTimeStamp:J

    invoke-static {v1, v2}, Lcom/kwad/sdk/crash/utils/i;->al(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",customMsg="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCustomMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTypeCommon()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getTypePrefix()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "COMMON"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTypeFdOOM()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getTypePrefix()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "FD_OOM"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTypeHeapOOM()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getTypePrefix()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "HEAP_OOM"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method protected abstract getTypePrefix()Ljava/lang/String;
.end method

.method public final getTypeThreadOOM()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->getTypePrefix()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "THREAD_OOM"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "mCrashDetail"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    const-string v0, "mMemoryInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;

    const-string v0, "mDiskInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDiskInfo:Ljava/lang/String;

    const-string v0, "mProcessName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mProcessName:Ljava/lang/String;

    const-string v0, "mCrashType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashType:Ljava/lang/String;

    const-string v0, "mThreadName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadName:Ljava/lang/String;

    const-string v0, "mIsAppOnForeground"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mIsAppOnForeground:Ljava/lang/String;

    const-string v0, "mLogUUID"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLogUUID:Ljava/lang/String;

    const-string v0, "mVirtualApp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVirtualApp:Ljava/lang/String;

    const-string v0, "mCustomMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCustomMsg:Ljava/lang/String;

    const-string v0, "mThreadOverflow"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadOverflow:Ljava/lang/String;

    const-string v0, "mFdOverflow"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mFdOverflow:Ljava/lang/String;

    const-string v0, "mTaskId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTaskId:Ljava/lang/String;

    const-string v0, "mErrorMessage"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    const-string v0, "mCurrentTimeStamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCurrentTimeStamp:J

    const-string v0, "mUsageTimeMills"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mUsageTimeMills:J

    const-string v0, "mPid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mPid:I

    const-string v0, "mTid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTid:I

    const-string v0, "mVersionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionCode:Ljava/lang/String;

    const-string v0, "mVersionConflict"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionConflict:Z

    const-string v0, "mAppVersionBeforeLastUpload"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAppVersionBeforeLastUpload:Ljava/lang/String;

    const-string v0, "mJNIError"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mJNIError:Ljava/lang/String;

    const-string v0, "mGCInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mGCInfo:Ljava/lang/String;

    const-string v0, "mLockInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLockInfo:Ljava/lang/String;

    const-string v0, "mMonitorInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMonitorInfo:Ljava/lang/String;

    const-string v0, "mSlowLooper"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowLooper:Ljava/lang/String;

    const-string v0, "mSlowOperation"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowOperation:Ljava/lang/String;

    const-string v0, "mBuildConfigInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mBuildConfigInfo:Ljava/lang/String;

    const-string v0, "mAbi"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAbi:Ljava/lang/String;

    const-string v0, "mDumpsys"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDumpsys:Ljava/lang/String;

    const-string v0, "mCrashSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashSource:I

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    const-string v2, "mCrashDetail"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;

    const-string v2, "mMemoryInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDiskInfo:Ljava/lang/String;

    const-string v2, "mDiskInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mProcessName:Ljava/lang/String;

    const-string v2, "mProcessName"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashType:Ljava/lang/String;

    const-string v2, "mCrashType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadName:Ljava/lang/String;

    const-string v2, "mThreadName"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mIsAppOnForeground:Ljava/lang/String;

    const-string v2, "mIsAppOnForeground"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLogUUID:Ljava/lang/String;

    const-string v2, "mLogUUID"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVirtualApp:Ljava/lang/String;

    const-string v2, "mVirtualApp"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCustomMsg:Ljava/lang/String;

    const-string v2, "mCustomMsg"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadOverflow:Ljava/lang/String;

    const-string v2, "mThreadOverflow"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mFdOverflow:Ljava/lang/String;

    const-string v2, "mFdOverflow"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTaskId:Ljava/lang/String;

    const-string v2, "mTaskId"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    const-string v2, "mErrorMessage"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCurrentTimeStamp:J

    const-string v3, "mCurrentTimeStamp"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mUsageTimeMills:J

    const-string v3, "mUsageTimeMills"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mPid:I

    const-string v2, "mPid"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTid:I

    const-string v2, "mTid"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionCode:Ljava/lang/String;

    const-string v2, "mVersionCode"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionConflict:Z

    const-string v2, "mVersionConflict"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAppVersionBeforeLastUpload:Ljava/lang/String;

    const-string v2, "mAppVersionBeforeLastUpload"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mJNIError:Ljava/lang/String;

    const-string v2, "mJNIError"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mGCInfo:Ljava/lang/String;

    const-string v2, "mGCInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLockInfo:Ljava/lang/String;

    const-string v2, "mLockInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMonitorInfo:Ljava/lang/String;

    const-string v2, "mMonitorInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowLooper:Ljava/lang/String;

    const-string v2, "mSlowLooper"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowOperation:Ljava/lang/String;

    const-string v2, "mSlowOperation"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mBuildConfigInfo:Ljava/lang/String;

    const-string v2, "mBuildConfigInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAbi:Ljava/lang/String;

    const-string v2, "mAbi"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDumpsys:Ljava/lang/String;

    const-string v2, "mDumpsys"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashSource:I

    const-string v2, "mCrashSource"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 5

    const-string v0, ")\n"

    const-string v1, " ("

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    :try_start_0
    const-string v3, "\u5f02\u5e38\u72b6\u6001\u6c47\u603b:\nUUID: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLogUUID:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\nCPU\u67b6\u6784: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAbi:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\n\u5f02\u5e38\u8fdb\u7a0b: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mProcessName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v3, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mPid:I

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "\u5f02\u5e38\u7ebf\u7a0b: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mThreadName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTid:I

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\u5f02\u5e38\u7c7b\u578b: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashType:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u5e94\u7528\u591a\u5f00\u73af\u5883: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVirtualApp:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\nTaskId: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTaskId:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\nmTid: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mTid:I

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, "\n\u81ea\u5b9a\u4e49\u4fe1\u606f: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCustomMsg:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u524d\u540e\u53f0\u72b6\u6001: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mIsAppOnForeground:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u5f02\u5e38\u53d1\u751f\u65f6\u95f4: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCurrentTimeStamp:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/crash/utils/i;->al(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u7248\u672c\u53f7: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mVersionCode:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u5347\u7ea7\u524d\u7248\u672c\u53f7: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mAppVersionBeforeLastUpload:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u4f7f\u7528\u65f6\u957f: "

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mUsageTimeMills:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/crash/utils/j;->am(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\n\u5f02\u5e38\u8be6\u60c5: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    instance-of v0, p0, Lcom/kwad/sdk/crash/model/message/JavaExceptionMessage;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "\n"

    if-eqz v0, :cond_0

    :try_start_1
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    const-string v3, "##"

    const-string v4, "\n\t"

    invoke-virtual {v0, v3, v4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v3, "#"

    invoke-virtual {v0, v3, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mCrashDetail:Ljava/lang/String;

    goto :goto_0

    :goto_1
    const-string v0, "\n\u78c1\u76d8\u8be6\u60c5: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mDiskInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "\u5f02\u5e38\u4e0a\u62a5Debug: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mErrorMessage:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mBuildConfigInfo:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "BuildConfig\u4fe1\u606f: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mBuildConfigInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mJNIError:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "JNI\u5f02\u5e38: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mJNIError:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mGCInfo:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "GC\u8017\u65f6: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mGCInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLockInfo:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    const-string v0, "\u9501\u8017\u65f6(dvm_lock_sample): \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mLockInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMonitorInfo:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    const-string v0, "\u9501\u8017\u65f6(monitor): \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMonitorInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowLooper:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    const-string v0, "Looper\u8017\u65f6: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowLooper:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowOperation:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    const-string v0, "AMS\u8c03\u5ea6\u8017\u65f6: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mSlowOperation:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    const-string v0, "\u5185\u5b58\u8be6\u60c5: \n"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/kwad/sdk/crash/model/message/ExceptionMessage;->mMemoryInfo:Ljava/lang/String;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :goto_2
    const/4 v0, 0x0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->substring(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
