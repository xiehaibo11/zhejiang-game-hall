package com.kwad.sdk.commercial.model;

public class SDKInitMsg extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
    private static final int CHILD_PROCESS = 2;
    private static final int DYNAMIC_DISABLE = 2;
    private static final int DYNAMIC_ENABLE = 1;
    public static final int FAIL = 2;
    public static final int FINISH = 1;
    private static final int MAIN_PROCESS = 1;
    private static final int MAIN_THREAD = 1;
    public static final int START = 0;
    private static final int WORK_THREAD = 2;
    private static final long serialVersionUID = 368743526206619387L;
    public java.lang.String errorReason;
    public int initCount;
    public int initProcess;
    public int initStatus;
    public int initThread;
    public int intBuildNumber;
    public int intDynamicSDK;
    public long launchIntervalTime;
    public long totalDurationTime;

    public SDKInitMsg() {
            r4 = this;
            r4.<init>()
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.HD()
            boolean r0 = com.kwad.sdk.utils.ap.isInMainProcess(r0)
            r1 = 1
            r2 = 2
            if (r0 == 0) goto L11
            r0 = r1
            goto L12
        L11:
            r0 = r2
        L12:
            r4.initProcess = r0
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r3 = android.os.Looper.myLooper()
            if (r0 != r3) goto L20
            r0 = r1
            goto L21
        L20:
            r0 = r2
        L21:
            r4.initThread = r0
            java.lang.Boolean r0 = com.kwad.framework.a.a.aae
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2c
            goto L2d
        L2c:
            r1 = r2
        L2d:
            r4.intDynamicSDK = r1
            r0 = 471(0x1d7, float:6.6E-43)
            r4.intBuildNumber = r0
            return
    }

    public com.kwad.sdk.commercial.model.SDKInitMsg setErrorReason(java.lang.String r1) {
            r0 = this;
            r0.errorReason = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.SDKInitMsg setInitCount(int r1) {
            r0 = this;
            r0.initCount = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.SDKInitMsg setInitStatus(int r1) {
            r0 = this;
            r0.initStatus = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.SDKInitMsg setLaunchIntervalTime(long r1) {
            r0 = this;
            r0.launchIntervalTime = r1
            return r0
    }

    public com.kwad.sdk.commercial.model.SDKInitMsg setTotalDurationTime(long r1) {
            r0 = this;
            r0.totalDurationTime = r1
            return r0
    }
}
