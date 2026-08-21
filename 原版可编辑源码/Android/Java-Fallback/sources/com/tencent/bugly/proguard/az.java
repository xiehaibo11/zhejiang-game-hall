package com.tencent.bugly.proguard;

public final class az {
    public static android.app.ActivityManager.ProcessErrorStateInfo a(android.app.ActivityManager r9, long r10) {
            r0 = 0
            r1 = 0
            if (r9 != 0) goto Lc
            java.lang.Object[] r9 = new java.lang.Object[r1]
            java.lang.String r10 = "get anr state, ActivityManager is null"
            com.tencent.bugly.proguard.al.c(r10, r9)
            return r0
        Lc:
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]
            java.lang.Long r4 = java.lang.Long.valueOf(r10)
            r3[r1] = r4
            java.lang.String r4 = "get anr state, timeout:%d"
            com.tencent.bugly.proguard.al.c(r4, r3)
            r3 = 500(0x1f4, double:2.47E-321)
            long r10 = r10 / r3
            r5 = 0
        L1e:
            java.util.List r6 = r9.getProcessesInErrorState()
            android.app.ActivityManager$ProcessErrorStateInfo r6 = a(r6)
            if (r6 != 0) goto L30
            java.lang.Object[] r6 = new java.lang.Object[r1]
            java.lang.String r7 = "found proc state is null"
            com.tencent.bugly.proguard.al.c(r7, r6)
            goto L4d
        L30:
            int r7 = r6.condition
            r8 = 2
            if (r7 != r8) goto L41
            java.lang.Object[] r9 = new java.lang.Object[r2]
            java.lang.String r10 = r6.processName
            r9[r1] = r10
            java.lang.String r10 = "found proc state is anr! proc:%s"
            com.tencent.bugly.proguard.al.c(r10, r9)
            return r6
        L41:
            int r6 = r6.condition
            if (r6 != r2) goto L4d
            java.lang.Object[] r9 = new java.lang.Object[r1]
            java.lang.String r10 = "found proc state is crashed!"
            com.tencent.bugly.proguard.al.c(r10, r9)
            return r0
        L4d:
            int r6 = r5 + 1
            long r7 = (long) r5
            int r5 = (r7 > r10 ? 1 : (r7 == r10 ? 0 : -1))
            if (r5 >= 0) goto L66
            java.lang.Object[] r5 = new java.lang.Object[r2]
            java.lang.Integer r7 = java.lang.Integer.valueOf(r6)
            r5[r1] = r7
            java.lang.String r7 = "try the %s times:"
            com.tencent.bugly.proguard.al.c(r7, r5)
            com.tencent.bugly.proguard.ap.b(r3)
            r5 = r6
            goto L1e
        L66:
            java.lang.String r9 = "Find process anr, but unable to get anr message."
            android.app.ActivityManager$ProcessErrorStateInfo r9 = a(r9)
            return r9
    }

    private static android.app.ActivityManager.ProcessErrorStateInfo a(java.lang.String r2) {
            android.app.ActivityManager$ProcessErrorStateInfo r0 = new android.app.ActivityManager$ProcessErrorStateInfo
            r0.<init>()
            int r1 = android.os.Process.myPid()
            r0.pid = r1
            int r1 = android.os.Process.myPid()
            java.lang.String r1 = com.tencent.bugly.proguard.z.a(r1)
            r0.processName = r1
            r0.shortMsg = r2
            return r0
    }

    private static android.app.ActivityManager.ProcessErrorStateInfo a(java.util.List<android.app.ActivityManager.ProcessErrorStateInfo> r5) {
            r0 = 0
            r1 = 0
            if (r5 == 0) goto L3c
            boolean r2 = r5.isEmpty()
            if (r2 == 0) goto Lb
            goto L3c
        Lb:
            int r2 = android.os.Process.myPid()
            java.util.Iterator r5 = r5.iterator()
        L13:
            boolean r3 = r5.hasNext()
            if (r3 == 0) goto L34
            java.lang.Object r3 = r5.next()
            android.app.ActivityManager$ProcessErrorStateInfo r3 = (android.app.ActivityManager.ProcessErrorStateInfo) r3
            int r4 = r3.pid
            if (r4 != r2) goto L13
            java.lang.String r5 = r3.longMsg
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L2c
            return r0
        L2c:
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r0 = "found current proc in the error state"
            com.tencent.bugly.proguard.al.c(r0, r5)
            return r3
        L34:
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r1 = "current proc not in the error state"
            com.tencent.bugly.proguard.al.c(r1, r5)
            return r0
        L3c:
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.String r1 = "error state info list is null"
            com.tencent.bugly.proguard.al.c(r1, r5)
            return r0
    }
}
