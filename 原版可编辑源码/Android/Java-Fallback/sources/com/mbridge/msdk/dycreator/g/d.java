package com.mbridge.msdk.dycreator.g;

public final class d extends com.mbridge.msdk.dycreator.g.a {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(java.lang.Object r4) {
            r3 = this;
            monitor-enter(r3)     // Catch: java.lang.Exception -> L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a     // Catch: java.lang.Throwable -> L3b
            if (r0 == 0) goto L39
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a     // Catch: java.lang.Throwable -> L3b
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L3b
            if (r0 <= 0) goto L39
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a     // Catch: java.lang.Throwable -> L3b
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3b
        L17:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L39
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3b
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L17
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Throwable -> L3b
            boolean r2 = r2 instanceof com.mbridge.msdk.dycreator.g.i     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L17
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L3b
            com.mbridge.msdk.dycreator.g.i r1 = (com.mbridge.msdk.dycreator.g.i) r1     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L17
            r1.a(r4)     // Catch: java.lang.Throwable -> L3b
            goto L17
        L39:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3b
            goto L42
        L3b:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L3b
            throw r4     // Catch: java.lang.Exception -> L3e
        L3e:
            r4 = move-exception
            r4.printStackTrace()
        L42:
            return
    }
}
