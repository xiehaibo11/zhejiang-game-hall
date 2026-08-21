package com.huawei.hms.aaid.utils;

public class BaseUtils {
    public BaseUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clearSubjectIds(android.content.Context r1) {
            com.huawei.hms.opendevice.i r1 = com.huawei.hms.opendevice.i.a(r1)
            java.lang.String r0 = "subjectId"
            r1.removeKey(r0)
            return
    }

    public static void delLocalToken(android.content.Context r0, java.lang.String r1) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.c(r1)
            return
    }

    public static void deleteAllTokenCache(android.content.Context r0) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.a()
            return
    }

    public static void deleteCacheData(android.content.Context r0, java.lang.String r1) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.removeKey(r1)
            return
    }

    public static java.lang.String getBaseUrl(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = com.huawei.hms.opendevice.e.a(r0, r1, r2, r3, r4)
            return r0
    }

    public static java.lang.String getCacheData(android.content.Context r0, java.lang.String r1, boolean r2) {
            if (r2 == 0) goto Lb
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            java.lang.String r0 = r0.a(r1)
            return r0
        Lb:
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            java.lang.String r0 = r0.getString(r1)
            return r0
    }

    public static java.lang.String getLocalToken(android.content.Context r0, java.lang.String r1) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            java.lang.String r0 = r0.b(r1)
            return r0
    }

    public static boolean getProxyInit(android.content.Context r1) {
            com.huawei.hms.opendevice.i r1 = com.huawei.hms.opendevice.i.a(r1)
            java.lang.String r0 = "_proxy_init"
            boolean r1 = r1.getBoolean(r0)
            return r1
    }

    public static java.lang.String[] getSubjectIds(android.content.Context r1) {
            com.huawei.hms.opendevice.i r1 = com.huawei.hms.opendevice.i.a(r1)
            java.lang.String r0 = "subjectId"
            java.lang.String r1 = r1.getString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L14
            r1 = 0
            java.lang.String[] r1 = new java.lang.String[r1]
            return r1
        L14:
            java.lang.String r0 = ","
            java.lang.String[] r1 = r1.split(r0)
            return r1
    }

    public static void initSecret(android.content.Context r0) {
            com.huawei.hms.opendevice.b.a(r0)
            return
    }

    public static boolean isMainProc(android.content.Context r6) {
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r6.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            java.util.List r0 = r0.getRunningAppProcesses()
            android.content.pm.ApplicationInfo r6 = r6.getApplicationInfo()
            java.lang.String r6 = r6.processName
            int r1 = android.os.Process.myPid()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "my.pid -> "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = ", mainProcessName -> "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "BaseUtils"
            com.huawei.hms.support.log.HMSLog.d(r3, r2)
            java.util.Iterator r0 = r0.iterator()
        L38:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L72
            java.lang.Object r2 = r0.next()
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "info.pid -> "
            r4.append(r5)
            int r5 = r2.pid
            r4.append(r5)
            java.lang.String r5 = ", info.processName -> "
            r4.append(r5)
            java.lang.String r5 = r2.processName
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.support.log.HMSLog.d(r3, r4)
            int r4 = r2.pid
            if (r4 != r1) goto L38
            java.lang.String r2 = r2.processName
            boolean r2 = r6.equals(r2)
            if (r2 == 0) goto L38
            r6 = 1
            return r6
        L72:
            r6 = 0
            return r6
    }

    public static void reportAaidToken(android.content.Context r0, java.lang.String r1) {
            com.huawei.hms.opendevice.n.a(r0, r1)
            return
    }

    public static boolean saveCacheData(android.content.Context r0, java.lang.String r1, java.lang.String r2, boolean r3) {
            if (r3 == 0) goto Lb
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            boolean r0 = r0.a(r1, r2)
            return r0
        Lb:
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            boolean r0 = r0.saveString(r1, r2)
            return r0
    }

    public static void saveProxyInit(android.content.Context r1, boolean r2) {
            com.huawei.hms.opendevice.i r1 = com.huawei.hms.opendevice.i.a(r1)
            java.lang.String r0 = "_proxy_init"
            r1.saveBoolean(r0, r2)
            return
    }

    public static void saveToken(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            com.huawei.hms.opendevice.i r0 = com.huawei.hms.opendevice.i.a(r0)
            r0.b(r1, r2)
            return
    }

    public static java.lang.String sendPostRequest(android.content.Context r0, java.lang.String r1, java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            java.lang.String r0 = com.huawei.hms.opendevice.d.a(r0, r1, r2, r3)
            return r0
    }
}
