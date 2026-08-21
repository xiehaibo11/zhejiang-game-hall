package com.xiaomi.push.service;

public class m {
    private static final java.util.Map<java.lang.String, java.lang.Long> a = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.service.m.a = r0
            return
    }

    private static void a() {
            long r0 = android.os.SystemClock.elapsedRealtime()
            java.util.ArrayList r2 = new java.util.ArrayList
            java.util.Map<java.lang.String, java.lang.Long> r3 = com.xiaomi.push.service.m.a
            int r3 = r3.size()
            r2.<init>(r3)
            java.util.Map<java.lang.String, java.lang.Long> r3 = com.xiaomi.push.service.m.a
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L19:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L40
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.Object r5 = r4.getValue()
            java.lang.Long r5 = (java.lang.Long) r5
            long r5 = r5.longValue()
            long r5 = r0 - r5
            r7 = 60000(0xea60, double:2.9644E-319)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto L19
            java.lang.Object r4 = r4.getKey()
            r2.add(r4)
            goto L19
        L40:
            java.util.Iterator r0 = r2.iterator()
        L44:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L56
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.push.service.m.a
            r2.remove(r1)
            goto L44
        L56:
            return
    }

    public static boolean a(byte[] r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L57
            int r1 = r5.length
            if (r1 <= 0) goto L57
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L57
            java.lang.String r5 = com.xiaomi.push.bp.a(r5)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L57
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.xiaomi.push.service.m.a
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.push.service.m.a     // Catch: java.lang.Throwable -> L54
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r3.<init>()     // Catch: java.lang.Throwable -> L54
            r3.append(r5)     // Catch: java.lang.Throwable -> L54
            r3.append(r6)     // Catch: java.lang.Throwable -> L54
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L54
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L33
            r5 = 1
            r0 = r5
            goto L4f
        L33:
            java.util.Map<java.lang.String, java.lang.Long> r2 = com.xiaomi.push.service.m.a     // Catch: java.lang.Throwable -> L54
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r3.<init>()     // Catch: java.lang.Throwable -> L54
            r3.append(r5)     // Catch: java.lang.Throwable -> L54
            r3.append(r6)     // Catch: java.lang.Throwable -> L54
            java.lang.String r5 = r3.toString()     // Catch: java.lang.Throwable -> L54
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L54
            java.lang.Long r6 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L54
            r2.put(r5, r6)     // Catch: java.lang.Throwable -> L54
        L4f:
            a()     // Catch: java.lang.Throwable -> L54
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L54
            goto L57
        L54:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L54
            throw r5
        L57:
            return r0
    }
}
