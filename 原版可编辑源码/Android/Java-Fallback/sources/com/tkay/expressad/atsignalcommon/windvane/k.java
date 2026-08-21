package com.tkay.expressad.atsignalcommon.windvane;

public final class k {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tkay.expressad.atsignalcommon.windvane.b a(java.lang.Object r1) {
            com.tkay.expressad.atsignalcommon.windvane.a r1 = (com.tkay.expressad.atsignalcommon.windvane.a) r1     // Catch: java.lang.Exception -> L1e
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r1.a     // Catch: java.lang.Exception -> L1e
            com.tkay.expressad.atsignalcommon.windvane.d r1 = r1.getSignalCommunication()     // Catch: java.lang.Exception -> L1e
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L1e
            java.lang.String r0 = "wv_hybird:"
            boolean r1 = r0.equals(r1)     // Catch: java.lang.Exception -> L1e
            if (r1 == 0) goto L19
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L1e
            return r1
        L19:
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L1e
            return r1
        L1e:
            r1 = move-exception
            r1.printStackTrace()
            com.tkay.expressad.atsignalcommon.windvane.j r1 = com.tkay.expressad.atsignalcommon.windvane.j.a()
            return r1
    }
}
