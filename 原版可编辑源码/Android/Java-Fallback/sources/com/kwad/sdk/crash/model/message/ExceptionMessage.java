package com.kwad.sdk.crash.model.message;

public abstract class ExceptionMessage implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -5338556142957298914L;
    public java.lang.String mAbi;
    public java.lang.String mAppVersionBeforeLastUpload;
    public java.lang.String mBuildConfigInfo;
    public java.lang.String mCrashDetail;
    public int mCrashSource;
    public java.lang.String mCrashType;
    public long mCurrentTimeStamp;
    public java.lang.String mCustomMsg;
    public java.lang.String mDiskInfo;
    public java.lang.String mDumpsys;
    public java.lang.String mErrorMessage;
    public int mExceptionType;
    public java.lang.String mFdOverflow;
    public java.lang.String mGCInfo;
    public java.lang.String mIsAppOnForeground;
    public java.lang.String mJNIError;
    public java.lang.String mLockInfo;
    public java.lang.String mLogUUID;
    public java.lang.String mMemoryInfo;
    public java.lang.String mMonitorInfo;
    public int mPid;
    public java.lang.String mProcessName;
    public java.lang.String mSlowLooper;
    public java.lang.String mSlowOperation;
    public java.lang.String mTaskId;
    public java.lang.String mThreadName;
    public java.lang.String mThreadOverflow;
    public int mTid;
    public long mUsageTimeMills;
    public java.lang.String mVersionCode;
    public boolean mVersionConflict;
    public java.lang.String mVirtualApp;

    public ExceptionMessage() {
            r3 = this;
            r3.<init>()
            java.lang.String r0 = "Unknown"
            r3.mCrashDetail = r0
            r3.mMemoryInfo = r0
            r3.mDiskInfo = r0
            r3.mProcessName = r0
            r1 = 0
            r3.mExceptionType = r1
            java.lang.String r2 = r3.getTypeCommon()
            r3.mCrashType = r2
            r3.mThreadName = r0
            r3.mIsAppOnForeground = r0
            r3.mLogUUID = r0
            r3.mVirtualApp = r0
            r3.mCustomMsg = r0
            r3.mThreadOverflow = r0
            r3.mFdOverflow = r0
            r3.mTaskId = r0
            java.lang.String r2 = ""
            r3.mErrorMessage = r2
            r3.mVersionCode = r0
            r3.mVersionConflict = r1
            r3.mAppVersionBeforeLastUpload = r0
            r3.mJNIError = r2
            r3.mGCInfo = r2
            r3.mLockInfo = r2
            r3.mMonitorInfo = r2
            r3.mSlowLooper = r2
            r3.mSlowOperation = r2
            r3.mBuildConfigInfo = r2
            r3.mAbi = r0
            r3.mDumpsys = r2
            r3.mCrashSource = r1
            return
    }

    public static final java.lang.String getSdkCrashVersionName(java.lang.String r1, int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }

    public static final java.lang.String getSdkVersionNameSuffix(int r1) {
            r0 = 1
            if (r1 == r0) goto L1e
            r0 = 2
            if (r1 == r0) goto L1b
            r0 = 3
            if (r1 == r0) goto L18
            r0 = 4
            if (r1 == r0) goto L15
            r0 = 5
            if (r1 == r0) goto L12
            java.lang.String r1 = ""
            goto L20
        L12:
            java.lang.String r1 = "-car"
            goto L20
        L15:
            java.lang.String r1 = "-pct"
            goto L20
        L18:
            java.lang.String r1 = "-ec"
            goto L20
        L1b:
            java.lang.String r1 = "-ct"
            goto L20
        L1e:
            java.lang.String r1 = "-ad"
        L20:
            return r1
    }

    public java.lang.String getReportMsg() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UUID="
            r0.append(r1)
            java.lang.String r1 = r3.mLogUUID
            r0.append(r1)
            java.lang.String r1 = ",crashTime="
            r0.append(r1)
            long r1 = r3.mCurrentTimeStamp
            java.lang.String r1 = com.kwad.sdk.crash.utils.i.al(r1)
            r0.append(r1)
            java.lang.String r1 = ",customMsg="
            r0.append(r1)
            java.lang.String r1 = r3.mCustomMsg
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String getTypeCommon() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getTypePrefix()
            r0.append(r1)
            java.lang.String r1 = "COMMON"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String getTypeFdOOM() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getTypePrefix()
            r0.append(r1)
            java.lang.String r1 = "FD_OOM"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String getTypeHeapOOM() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getTypePrefix()
            r0.append(r1)
            java.lang.String r1 = "HEAP_OOM"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    protected abstract java.lang.String getTypePrefix();

    public final java.lang.String getTypeThreadOOM() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getTypePrefix()
            r0.append(r1)
            java.lang.String r1 = "THREAD_OOM"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mCrashDetail"
            java.lang.String r0 = r3.optString(r0)
            r2.mCrashDetail = r0
            java.lang.String r0 = "mMemoryInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mMemoryInfo = r0
            java.lang.String r0 = "mDiskInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mDiskInfo = r0
            java.lang.String r0 = "mProcessName"
            java.lang.String r0 = r3.optString(r0)
            r2.mProcessName = r0
            java.lang.String r0 = "mCrashType"
            java.lang.String r0 = r3.optString(r0)
            r2.mCrashType = r0
            java.lang.String r0 = "mThreadName"
            java.lang.String r0 = r3.optString(r0)
            r2.mThreadName = r0
            java.lang.String r0 = "mIsAppOnForeground"
            java.lang.String r0 = r3.optString(r0)
            r2.mIsAppOnForeground = r0
            java.lang.String r0 = "mLogUUID"
            java.lang.String r0 = r3.optString(r0)
            r2.mLogUUID = r0
            java.lang.String r0 = "mVirtualApp"
            java.lang.String r0 = r3.optString(r0)
            r2.mVirtualApp = r0
            java.lang.String r0 = "mCustomMsg"
            java.lang.String r0 = r3.optString(r0)
            r2.mCustomMsg = r0
            java.lang.String r0 = "mThreadOverflow"
            java.lang.String r0 = r3.optString(r0)
            r2.mThreadOverflow = r0
            java.lang.String r0 = "mFdOverflow"
            java.lang.String r0 = r3.optString(r0)
            r2.mFdOverflow = r0
            java.lang.String r0 = "mTaskId"
            java.lang.String r0 = r3.optString(r0)
            r2.mTaskId = r0
            java.lang.String r0 = "mErrorMessage"
            java.lang.String r0 = r3.optString(r0)
            r2.mErrorMessage = r0
            java.lang.String r0 = "mCurrentTimeStamp"
            long r0 = r3.optLong(r0)
            r2.mCurrentTimeStamp = r0
            java.lang.String r0 = "mUsageTimeMills"
            long r0 = r3.optLong(r0)
            r2.mUsageTimeMills = r0
            java.lang.String r0 = "mPid"
            int r0 = r3.optInt(r0)
            r2.mPid = r0
            java.lang.String r0 = "mTid"
            int r0 = r3.optInt(r0)
            r2.mTid = r0
            java.lang.String r0 = "mVersionCode"
            java.lang.String r0 = r3.optString(r0)
            r2.mVersionCode = r0
            java.lang.String r0 = "mVersionConflict"
            boolean r0 = r3.optBoolean(r0)
            r2.mVersionConflict = r0
            java.lang.String r0 = "mAppVersionBeforeLastUpload"
            java.lang.String r0 = r3.optString(r0)
            r2.mAppVersionBeforeLastUpload = r0
            java.lang.String r0 = "mJNIError"
            java.lang.String r0 = r3.optString(r0)
            r2.mJNIError = r0
            java.lang.String r0 = "mGCInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mGCInfo = r0
            java.lang.String r0 = "mLockInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mLockInfo = r0
            java.lang.String r0 = "mMonitorInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mMonitorInfo = r0
            java.lang.String r0 = "mSlowLooper"
            java.lang.String r0 = r3.optString(r0)
            r2.mSlowLooper = r0
            java.lang.String r0 = "mSlowOperation"
            java.lang.String r0 = r3.optString(r0)
            r2.mSlowOperation = r0
            java.lang.String r0 = "mBuildConfigInfo"
            java.lang.String r0 = r3.optString(r0)
            r2.mBuildConfigInfo = r0
            java.lang.String r0 = "mAbi"
            java.lang.String r0 = r3.optString(r0)
            r2.mAbi = r0
            java.lang.String r0 = "mDumpsys"
            java.lang.String r0 = r3.optString(r0)
            r2.mDumpsys = r0
            java.lang.String r0 = "mCrashSource"
            int r3 = r3.optInt(r0)
            r2.mCrashSource = r3
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = r4.mCrashDetail
            java.lang.String r2 = "mCrashDetail"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mMemoryInfo
            java.lang.String r2 = "mMemoryInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mDiskInfo
            java.lang.String r2 = "mDiskInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mProcessName
            java.lang.String r2 = "mProcessName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mCrashType
            java.lang.String r2 = "mCrashType"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mThreadName
            java.lang.String r2 = "mThreadName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mIsAppOnForeground
            java.lang.String r2 = "mIsAppOnForeground"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mLogUUID
            java.lang.String r2 = "mLogUUID"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mVirtualApp
            java.lang.String r2 = "mVirtualApp"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mCustomMsg
            java.lang.String r2 = "mCustomMsg"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mThreadOverflow
            java.lang.String r2 = "mThreadOverflow"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mFdOverflow
            java.lang.String r2 = "mFdOverflow"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mTaskId
            java.lang.String r2 = "mTaskId"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mErrorMessage
            java.lang.String r2 = "mErrorMessage"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            long r1 = r4.mCurrentTimeStamp
            java.lang.String r3 = "mCurrentTimeStamp"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            long r1 = r4.mUsageTimeMills
            java.lang.String r3 = "mUsageTimeMills"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            int r1 = r4.mPid
            java.lang.String r2 = "mPid"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r4.mTid
            java.lang.String r2 = "mTid"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mVersionCode
            java.lang.String r2 = "mVersionCode"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            boolean r1 = r4.mVersionConflict
            java.lang.String r2 = "mVersionConflict"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mAppVersionBeforeLastUpload
            java.lang.String r2 = "mAppVersionBeforeLastUpload"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mJNIError
            java.lang.String r2 = "mJNIError"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mGCInfo
            java.lang.String r2 = "mGCInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mLockInfo
            java.lang.String r2 = "mLockInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mMonitorInfo
            java.lang.String r2 = "mMonitorInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mSlowLooper
            java.lang.String r2 = "mSlowLooper"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mSlowOperation
            java.lang.String r2 = "mSlowOperation"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mBuildConfigInfo
            java.lang.String r2 = "mBuildConfigInfo"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mAbi
            java.lang.String r2 = "mAbi"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = r4.mDumpsys
            java.lang.String r2 = "mDumpsys"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r4.mCrashSource
            java.lang.String r2 = "mCrashSource"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }

    public java.lang.String toString() {
            r5 = this;
            java.lang.String r0 = ")\n"
            java.lang.String r1 = " ("
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "异常状态汇总:\nUUID: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r5.mLogUUID     // Catch: java.lang.Throwable -> L198
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = "\nCPU架构: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r5.mAbi     // Catch: java.lang.Throwable -> L198
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = "\n异常进程: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r5.mProcessName     // Catch: java.lang.Throwable -> L198
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
            int r3 = r5.mPid     // Catch: java.lang.Throwable -> L198
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = "异常线程: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = r5.mThreadName     // Catch: java.lang.Throwable -> L198
            r2.append(r3)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
            int r1 = r5.mTid     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "异常类型: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mCrashType     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n应用多开环境: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mVirtualApp     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\nTaskId: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mTaskId     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\nmTid: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            int r0 = r5.mTid     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n自定义信息: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mCustomMsg     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n前后台状态: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mIsAppOnForeground     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n异常发生时间: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            long r0 = r5.mCurrentTimeStamp     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = com.kwad.sdk.crash.utils.i.al(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n版本号: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mVersionCode     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n升级前版本号: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mAppVersionBeforeLastUpload     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n使用时长: "
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            long r0 = r5.mUsageTimeMills     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = com.kwad.sdk.crash.utils.j.am(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = "\n异常详情: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            boolean r0 = r5 instanceof com.kwad.sdk.crash.model.message.JavaExceptionMessage     // Catch: java.lang.Throwable -> L198
            java.lang.String r1 = "\n"
            if (r0 == 0) goto Ld2
            java.lang.String r0 = r5.mCrashDetail     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = "##"
            java.lang.String r4 = "\n\t"
            java.lang.String r0 = r0.replace(r3, r4)     // Catch: java.lang.Throwable -> L198
            java.lang.String r3 = "#"
            java.lang.String r0 = r0.replace(r3, r1)     // Catch: java.lang.Throwable -> L198
        Lce:
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            goto Ld5
        Ld2:
            java.lang.String r0 = r5.mCrashDetail     // Catch: java.lang.Throwable -> L198
            goto Lce
        Ld5:
            java.lang.String r0 = "\n磁盘详情: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mDiskInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mErrorMessage     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto Lf7
            java.lang.String r0 = "异常上报Debug: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mErrorMessage     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        Lf7:
            java.lang.String r0 = r5.mBuildConfigInfo     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L10c
            java.lang.String r0 = "BuildConfig信息: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mBuildConfigInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L10c:
            java.lang.String r0 = r5.mJNIError     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L121
            java.lang.String r0 = "JNI异常: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mJNIError     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L121:
            java.lang.String r0 = r5.mGCInfo     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L136
            java.lang.String r0 = "GC耗时: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mGCInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L136:
            java.lang.String r0 = r5.mLockInfo     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L14b
            java.lang.String r0 = "锁耗时(dvm_lock_sample): \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mLockInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L14b:
            java.lang.String r0 = r5.mMonitorInfo     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L160
            java.lang.String r0 = "锁耗时(monitor): \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mMonitorInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L160:
            java.lang.String r0 = r5.mSlowLooper     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L175
            java.lang.String r0 = "Looper耗时: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mSlowLooper     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L175:
            java.lang.String r0 = r5.mSlowOperation     // Catch: java.lang.Throwable -> L198
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L198
            if (r0 != 0) goto L18a
            java.lang.String r0 = "AMS调度耗时: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mSlowOperation     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
        L18a:
            java.lang.String r0 = "内存详情: \n"
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            java.lang.String r0 = r5.mMemoryInfo     // Catch: java.lang.Throwable -> L198
            r2.append(r0)     // Catch: java.lang.Throwable -> L198
            r2.append(r1)     // Catch: java.lang.Throwable -> L198
            goto L19c
        L198:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        L19c:
            r0 = 0
            java.lang.String r0 = r2.substring(r0)
            return r0
    }
}
