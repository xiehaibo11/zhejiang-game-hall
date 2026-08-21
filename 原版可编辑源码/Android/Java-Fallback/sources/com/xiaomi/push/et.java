package com.xiaomi.push;

public class et {
    private static java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> a;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> a;

    static {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            com.xiaomi.push.et.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.xiaomi.push.et.a = r0
            return
    }

    public static java.lang.String a() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> r1 = com.xiaomi.push.et.a
            monitor-enter(r1)
            r2 = 0
        L9:
            java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> r3 = com.xiaomi.push.et.a     // Catch: java.lang.Throwable -> L47
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L47
            if (r2 >= r3) goto L3c
            java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> r3 = com.xiaomi.push.et.a     // Catch: java.lang.Throwable -> L47
            java.lang.Object r3 = r3.elementAt(r2)     // Catch: java.lang.Throwable -> L47
            android.util.Pair r3 = (android.util.Pair) r3     // Catch: java.lang.Throwable -> L47
            java.lang.Object r4 = r3.first     // Catch: java.lang.Throwable -> L47
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L47
            r0.append(r4)     // Catch: java.lang.Throwable -> L47
            java.lang.String r4 = ":"
            r0.append(r4)     // Catch: java.lang.Throwable -> L47
            java.lang.Object r3 = r3.second     // Catch: java.lang.Throwable -> L47
            r0.append(r3)     // Catch: java.lang.Throwable -> L47
            java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> r3 = com.xiaomi.push.et.a     // Catch: java.lang.Throwable -> L47
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L47
            int r3 = r3 + (-1)
            if (r2 >= r3) goto L39
            java.lang.String r3 = ";"
            r0.append(r3)     // Catch: java.lang.Throwable -> L47
        L39:
            int r2 = r2 + 1
            goto L9
        L3c:
            java.util.Vector<android.util.Pair<java.lang.String, java.lang.Long>> r2 = com.xiaomi.push.et.a     // Catch: java.lang.Throwable -> L47
            r2.clear()     // Catch: java.lang.Throwable -> L47
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = r0.toString()
            return r0
        L47:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L47
            throw r0
    }
}
