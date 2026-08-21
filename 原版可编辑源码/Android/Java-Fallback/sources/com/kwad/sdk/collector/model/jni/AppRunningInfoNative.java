package com.kwad.sdk.collector.model.jni;

public class AppRunningInfoNative extends com.kwad.sdk.collector.model.jni.NativeObject implements com.kwad.sdk.collector.model.b<com.kwad.sdk.collector.model.jni.AppRunningInfoNative> {
    private static java.text.SimpleDateFormat ajN;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd:HH:mm:ss"
            r0.<init>(r1)
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative.ajN = r0
            return
    }

    public AppRunningInfoNative(long r1) {
            r0 = this;
            r0.<init>()
            r0.mPtr = r1
            return
    }

    public AppRunningInfoNative(long r1, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            long r1 = com.kwad.sdk.collector.AppStatusNative.nativeCreateAppRunningInfo(r1, r3, r4)
            r0.mPtr = r1
            return
    }

    private static java.lang.String V(long r2) {
            java.text.SimpleDateFormat r0 = com.kwad.sdk.collector.model.jni.AppRunningInfoNative.ajN
            java.util.Date r1 = new java.util.Date
            r1.<init>(r2)
            java.lang.String r2 = r0.format(r1)
            return r2
    }

    private int a(com.kwad.sdk.collector.model.jni.AppRunningInfoNative r6) {
            r5 = this;
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            long r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r5)
            long r3 = com.kwad.sdk.collector.model.c.c(r6)
            long r1 = r1 - r3
            r3 = 0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 != 0) goto L15
            r0 = 0
            goto L19
        L15:
            if (r6 <= 0) goto L18
            goto L19
        L18:
            r0 = -1
        L19:
            return r0
    }

    private com.kwad.sdk.collector.model.jni.AppRunningInfoNative yM() {
            r5 = this;
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0 = new com.kwad.sdk.collector.model.jni.AppRunningInfoNative
            long r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetGranularity(r5)
            java.lang.String r3 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r5)
            java.lang.String r4 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r5)
            r0.<init>(r1, r3, r4)
            long r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r5)
            com.kwad.sdk.collector.model.c.a(r0, r1)
            return r0
    }

    protected java.lang.Object clone() {
            r1 = this;
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r0 = r1.yM()
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r1 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r1
            int r1 = r0.a(r1)
            return r1
    }

    @Override
    public void destroy() {
            r4 = this;
            long r0 = r4.mPtr
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            long r0 = r4.mPtr
            com.kwad.sdk.collector.AppStatusNative.nativeDeleteAppRunningInfo(r0)
            r4.mPtr = r2
        Lf:
            return
    }

    public boolean equals(java.lang.Object r10) {
            r9 = this;
            if (r9 != r10) goto L4
            r10 = 1
            return r10
        L4:
            r0 = 0
            if (r10 == 0) goto L54
            java.lang.Class r1 = r9.getClass()
            java.lang.Class r2 = r10.getClass()
            if (r1 == r2) goto L12
            goto L54
        L12:
            com.kwad.sdk.collector.model.jni.AppRunningInfoNative r10 = (com.kwad.sdk.collector.model.jni.AppRunningInfoNative) r10
            long r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetGranularity(r9)
            long r3 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetGranularity(r10)
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L21
            return r0
        L21:
            long r3 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r9)
            java.lang.String r5 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r9)
            java.lang.String r6 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r9)
            r7 = 0
            int r7 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r7 != 0) goto L35
            r1 = 1
        L35:
            long r3 = r3 / r1
            long r7 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r10)
            long r7 = r7 / r1
            int r1 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r1 == 0) goto L40
            return r0
        L40:
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r10)
            boolean r1 = r5.equals(r1)
            if (r1 != 0) goto L4b
            return r0
        L4b:
            java.lang.String r10 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r10)
            boolean r10 = r6.equals(r10)
            return r10
        L54:
            return r0
    }

    public int hashCode() {
            r6 = this;
            long r0 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetGranularity(r6)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto Lc
            r0 = 1
        Lc:
            long r2 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r6)
            long r2 = r2 / r0
            java.lang.String r0 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r6)
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r6)
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 31
            r1 = 32
            long r4 = r2 >>> r1
            long r1 = r2 ^ r4
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r1) {
            r0 = this;
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetName(r4)
            java.lang.String r2 = "name"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetPackageName(r4)
            java.lang.String r2 = "packageName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            long r1 = com.kwad.sdk.collector.AppStatusNative.appRunningInfoGetLastRunningTime(r4)
            java.lang.String r3 = "lastRunningTime"
            com.kwad.sdk.utils.t.putValue(r0, r3, r1)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AppRunningInfo{packageName='"
            r0.<init>(r1)
            java.lang.String r1 = com.kwad.sdk.collector.model.c.b(r3)
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", lastRunningTime="
            r0.append(r1)
            long r1 = com.kwad.sdk.collector.model.c.c(r3)
            java.lang.String r1 = V(r1)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
