package com.huawei.updatesdk.b.h;

public class d {
    public static int a(long r2, long r4) {
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 > 0) goto L8
            r2 = 0
            return r2
        L8:
            double r2 = (double) r2
            double r4 = (double) r4
            double r2 = r2 / r4
            r4 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r2 = r2 * r4
            long r2 = java.lang.Math.round(r2)
            int r2 = (int) r2
            r3 = 100
            int r2 = java.lang.Math.min(r2, r3)
            return r2
    }

    public static java.lang.String a(int r5) {
            java.text.NumberFormat r0 = java.text.NumberFormat.getPercentInstance()
            double r1 = (double) r5
            r3 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r1 = r1 / r3
            r5 = 0
            r0.setMinimumFractionDigits(r5)
            java.lang.String r5 = r0.format(r1)
            return r5
    }

    public static java.lang.String a(android.content.Context r6, long r7) {
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = 0
            r2 = 1
            java.lang.String r3 = "upsdk_storage_utils"
            if (r0 != 0) goto L19
            int r7 = com.huawei.updatesdk.b.h.c.c(r6, r3)
            java.lang.Object[] r8 = new java.lang.Object[r2]
            java.lang.String r0 = "0"
            r8[r1] = r0
            java.lang.String r6 = r6.getString(r7, r8)
            return r6
        L19:
            r0 = 0
            r4 = 104857(0x19999, double:5.1806E-319)
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r4 <= 0) goto L29
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r4 = "###.#"
            r0.<init>(r4)
            goto L36
        L29:
            r4 = 10485(0x28f5, double:5.1803E-320)
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r4 <= 0) goto L36
            java.text.DecimalFormat r0 = new java.text.DecimalFormat
            java.lang.String r4 = "###.##"
            r0.<init>(r4)
        L36:
            if (r0 == 0) goto L4d
            double r7 = (double) r7
            r4 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r7 = r7 / r4
            int r3 = com.huawei.updatesdk.b.h.c.c(r6, r3)
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r7 = r0.format(r7)
            r2[r1] = r7
            java.lang.String r6 = r6.getString(r3, r2)
            goto L5b
        L4d:
            int r7 = com.huawei.updatesdk.b.h.c.c(r6, r3)
            java.lang.Object[] r8 = new java.lang.Object[r2]
            java.lang.String r0 = "0.01"
            r8[r1] = r0
            java.lang.String r6 = r6.getString(r7, r8)
        L5b:
            return r6
    }

    public static boolean a(java.util.List r0) {
            if (r0 == 0) goto Lb
            int r0 = r0.size()
            if (r0 > 0) goto L9
            goto Lb
        L9:
            r0 = 0
            goto Lc
        Lb:
            r0 = 1
        Lc:
            return r0
    }
}
