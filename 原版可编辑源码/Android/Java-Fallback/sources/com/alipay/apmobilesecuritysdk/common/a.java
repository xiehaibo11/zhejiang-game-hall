package com.alipay.apmobilesecuritysdk.common;

public final class a {
    public static boolean a(android.content.Context r1) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = com.alipay.apmobilesecuritysdk.e.h.e(r1)
            r0.add(r1)
            boolean r1 = a(r0)
            r0 = 1
            if (r1 == 0) goto L14
            return r0
        L14:
            com.alipay.apmobilesecuritysdk.common.RushTimeUtil$1 r1 = new com.alipay.apmobilesecuritysdk.common.RushTimeUtil$1
            r1.<init>()
            boolean r1 = a(r1)
            if (r1 == 0) goto L20
            return r0
        L20:
            r1 = 0
            return r1
    }

    public static boolean a(java.util.List<java.lang.String> r8) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            r1 = 0
            r0.setLenient(r1)
            double r2 = java.lang.Math.random()
            r4 = 4627448617123184640(0x4038000000000000, double:24.0)
            double r2 = r2 * r4
            r4 = 4633641066610819072(0x404e000000000000, double:60.0)
            double r2 = r2 * r4
            double r2 = r2 * r4
            int r2 = (int) r2
            r3 = 1
            int r2 = r2 * 1
            java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.Exception -> L89
        L21:
            boolean r4 = r8.hasNext()     // Catch: java.lang.Exception -> L89
            if (r4 == 0) goto L89
            java.lang.Object r4 = r8.next()     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L89
            java.lang.String r5 = "&"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Exception -> L89
            if (r4 == 0) goto L21
            int r5 = r4.length     // Catch: java.lang.Exception -> L89
            r6 = 2
            if (r5 != r6) goto L21
            java.util.Date r5 = new java.util.Date     // Catch: java.lang.Exception -> L89
            r5.<init>()     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            r6.<init>()     // Catch: java.lang.Exception -> L89
            r7 = r4[r1]     // Catch: java.lang.Exception -> L89
            r6.append(r7)     // Catch: java.lang.Exception -> L89
            java.lang.String r7 = " 00:00:00"
            r6.append(r7)     // Catch: java.lang.Exception -> L89
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L89
            java.util.Date r6 = r0.parse(r6)     // Catch: java.lang.Exception -> L89
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L89
            r7.<init>()     // Catch: java.lang.Exception -> L89
            r4 = r4[r3]     // Catch: java.lang.Exception -> L89
            r7.append(r4)     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = " 23:59:59"
            r7.append(r4)     // Catch: java.lang.Exception -> L89
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Exception -> L89
            java.util.Date r4 = r0.parse(r4)     // Catch: java.lang.Exception -> L89
            java.util.Calendar r7 = java.util.Calendar.getInstance()     // Catch: java.lang.Exception -> L89
            r7.setTime(r4)     // Catch: java.lang.Exception -> L89
            r4 = 13
            r7.add(r4, r2)     // Catch: java.lang.Exception -> L89
            java.util.Date r4 = r7.getTime()     // Catch: java.lang.Exception -> L89
            boolean r6 = r5.after(r6)     // Catch: java.lang.Exception -> L89
            if (r6 == 0) goto L21
            boolean r4 = r5.before(r4)     // Catch: java.lang.Exception -> L89
            if (r4 == 0) goto L21
            return r3
        L89:
            return r1
    }
}
