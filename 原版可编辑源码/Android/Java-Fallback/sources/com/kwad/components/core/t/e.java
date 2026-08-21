package com.kwad.components.core.t;

public final class e {
    public static java.lang.String a(long r9, boolean r11) {
            java.lang.String r0 = " B"
            java.lang.String r1 = " KB"
            java.lang.String r2 = " MB"
            java.lang.String r3 = " GB"
            java.lang.String r4 = " TB"
            java.lang.String r5 = " PB"
            java.lang.String r6 = " EB"
            java.lang.String r7 = " ZB"
            java.lang.String r8 = " YB"
            java.lang.String[] r11 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8}
            r0 = 1
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r0 > 0) goto L2e
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r9)
            java.lang.String r9 = "B"
            r11.append(r9)
            java.lang.String r9 = r11.toString()
            return r9
        L2e:
            double r0 = (double) r9
            double r2 = java.lang.Math.log(r0)
            r4 = 4652218415073722368(0x4090000000000000, double:1024.0)
            double r6 = java.lang.Math.log(r4)
            double r2 = r2 / r6
            int r2 = (int) r2
            r6 = 1024(0x400, double:5.06E-321)
            int r9 = (r9 > r6 ? 1 : (r9 == r6 ? 0 : -1))
            if (r9 <= 0) goto L48
            double r9 = (double) r2
            double r9 = java.lang.Math.pow(r4, r9)
            double r0 = r0 / r9
            goto L49
        L48:
            double r0 = r0 / r4
        L49:
            java.util.Locale r9 = java.util.Locale.ENGLISH
            r10 = 2
            java.lang.Object[] r10 = new java.lang.Object[r10]
            r3 = 0
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r10[r3] = r0
            r0 = 1
            r11 = r11[r2]
            r10[r0] = r11
            java.lang.String r11 = "%.1f%s"
            java.lang.String r9 = java.lang.String.format(r9, r11, r10)
            return r9
    }
}
