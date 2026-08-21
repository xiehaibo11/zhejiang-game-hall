package com.huawei.updatesdk.a.a.d;

public class e {
    private static java.lang.String a(java.lang.String r0) {
            if (r0 != 0) goto L4
            java.lang.String r0 = ""
        L4:
            return r0
    }

    public static java.lang.String a(java.util.List<java.lang.String> r1, java.lang.String r2) {
            r0 = 0
            java.lang.String r1 = a(r1, r2, r0, r0)
            return r1
    }

    public static java.lang.String a(java.util.List<java.lang.String> r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 == 0) goto L16
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L16
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r1 = r1.toArray(r0)
            java.lang.String[] r1 = (java.lang.String[]) r1
            java.lang.String r1 = a(r1, r2, r3, r4)
            goto L18
        L16:
            java.lang.String r1 = ""
        L18:
            return r1
    }

    public static java.lang.String a(java.lang.String[] r1, java.lang.String r2) {
            r0 = 0
            java.lang.String r1 = a(r1, r2, r0, r0)
            return r1
    }

    public static java.lang.String a(java.lang.String[] r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            if (r3 == 0) goto L3c
            int r0 = r3.length
            if (r0 == 0) goto L3c
            java.lang.String r4 = a(r4)
            java.lang.String r5 = a(r5)
            java.lang.String r6 = a(r6)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r1 = 0
            r1 = r3[r1]
            r0.append(r1)
            r0.append(r6)
            r1 = 1
        L23:
            int r2 = r3.length
            if (r1 >= r2) goto L37
            r0.append(r4)
            r0.append(r5)
            r2 = r3[r1]
            r0.append(r2)
            r0.append(r6)
            int r1 = r1 + 1
            goto L23
        L37:
            java.lang.String r3 = r0.toString()
            return r3
        L3c:
            java.lang.String r3 = ""
            return r3
    }
}
