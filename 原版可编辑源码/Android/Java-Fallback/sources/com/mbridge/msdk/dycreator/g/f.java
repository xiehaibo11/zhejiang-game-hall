package com.mbridge.msdk.dycreator.g;

public final class f extends com.mbridge.msdk.dycreator.g.a {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(java.lang.Object r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a
            if (r0 == 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a
            int r0 = r0.size()
            if (r0 <= 0) goto L3b
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Object> r0 = r3.a
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            if (r1 == 0) goto L16
            java.lang.Object r2 = r1.getValue()     // Catch: java.lang.Exception -> L36
            if (r2 == 0) goto L16
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L36
            com.mbridge.msdk.dycreator.g.e r1 = (com.mbridge.msdk.dycreator.g.e) r1     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L16
            r1.a(r4)     // Catch: java.lang.Exception -> L36
            goto L16
        L36:
            r1 = move-exception
            r1.printStackTrace()
            goto L16
        L3b:
            return
    }
}
