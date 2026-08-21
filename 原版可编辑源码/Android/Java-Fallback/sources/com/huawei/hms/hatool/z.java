package com.huawei.hms.hatool;

public class z {
    public boolean a;
    public int b;

    public z() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r0 = 4
            r1.b = r0
            return
    }

    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HiAnalyticsSDK_2.2.0.310"
            r0.append(r1)
            java.lang.String r1 = com.huawei.hms.hatool.i1.a()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void a(int r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto L34
            java.lang.String r1 = java.lang.System.lineSeparator()
            r0.append(r1)
            java.lang.String r1 = "======================================= "
            r0.append(r1)
            java.lang.String r1 = java.lang.System.lineSeparator()
            r0.append(r1)
            java.lang.String r1 = a()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r1 = java.lang.System.lineSeparator()
            r0.append(r1)
            java.lang.String r1 = "======================================="
            goto L42
        L34:
            java.lang.String r1 = "===================="
            r0.append(r1)
            java.lang.String r1 = a()
            r0.append(r1)
            java.lang.String r1 = "==================="
        L42:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HiAnalyticsSDK"
            android.util.Log.i(r1, r0)
            r3.b = r4
            r4 = 1
            r3.a = r4
            return
    }

    public void a(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r0 = 3
            if (r2 == r0) goto L15
            r0 = 5
            if (r2 == r0) goto L11
            r0 = 6
            if (r2 == r0) goto Ld
            android.util.Log.i(r3, r4)
            goto L18
        Ld:
            android.util.Log.e(r3, r4)
            goto L18
        L11:
            android.util.Log.w(r3, r4)
            goto L18
        L15:
            android.util.Log.d(r3, r4)
        L18:
            return
    }

    public void b(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = "=> "
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r4 = "HiAnalyticsSDK"
            r1.a(r2, r4, r3)
            return
    }

    public boolean b(int r2) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto La
            int r0 = r1.b
            if (r2 < r0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }
}
