package com.tencent.bugly.crashreport.inner;

public class InnerApi {
    public InnerApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void postCocos2dxCrashAsync(int r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r0 = 0
            if (r9 == 0) goto L36
            if (r10 == 0) goto L36
            if (r11 != 0) goto L8
            goto L36
        L8:
            r1 = 5
            r2 = 1
            if (r8 == r1) goto L1d
            r1 = 6
            if (r8 == r1) goto L1d
            java.lang.Object[] r9 = new java.lang.Object[r2]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r9[r0] = r8
            java.lang.String r8 = "post cocos2d-x fail category illeagle: %d"
            com.tencent.bugly.proguard.al.e(r8, r9)
            return
        L1d:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r9
            r1[r2] = r10
            java.lang.String r0 = "post cocos2d-x crash %s %s"
            com.tencent.bugly.proguard.al.a(r0, r1)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r7 = 0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            com.tencent.bugly.proguard.au.a(r2, r3, r4, r5, r6, r7)
            return
        L36:
            java.lang.Object[] r8 = new java.lang.Object[r0]
            java.lang.String r9 = "post cocos2d-x fail args null"
            com.tencent.bugly.proguard.al.e(r9, r8)
            return
    }

    public static void postH5CrashAsync(java.lang.Thread r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.util.Map<java.lang.String, java.lang.String> r12) {
            r0 = 0
            if (r9 == 0) goto L20
            if (r10 == 0) goto L20
            if (r11 != 0) goto L8
            goto L20
        L8:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r9
            r0 = 1
            r1[r0] = r10
            java.lang.String r0 = "post h5 crash %s %s"
            com.tencent.bugly.proguard.al.a(r0, r1)
            r3 = 8
            r2 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            com.tencent.bugly.proguard.au.a(r2, r3, r4, r5, r6, r7)
            return
        L20:
            java.lang.Object[] r8 = new java.lang.Object[r0]
            java.lang.String r9 = "post h5 fail args null"
            com.tencent.bugly.proguard.al.e(r9, r8)
            return
    }

    public static void postU3dCrashAsync(java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r0 = 0
            if (r8 == 0) goto L7
            if (r9 == 0) goto L7
            if (r10 != 0) goto Le
        L7:
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "post u3d fail args null"
            com.tencent.bugly.proguard.al.e(r2, r1)
        Le:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r0] = r8
            r0 = 1
            r1[r0] = r9
            java.lang.String r0 = "post u3d crash %s %s"
            com.tencent.bugly.proguard.al.a(r0, r1)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            r3 = 4
            r7 = 0
            r4 = r8
            r5 = r9
            r6 = r10
            com.tencent.bugly.proguard.au.a(r2, r3, r4, r5, r6, r7)
            return
    }
}
