package com.vivo.push.b;

public final class x extends com.vivo.push.o {
    private java.util.HashMap<java.lang.String, java.lang.String> a;
    private long b;

    public x() {
            r1 = this;
            r0 = 2012(0x7dc, float:2.82E-42)
            r1.<init>(r0)
            return
    }

    public x(long r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    public final void a(java.util.HashMap<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final void c(com.vivo.push.a r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r3.a
            java.lang.String r1 = "ReporterCommand.EXTRA_PARAMS"
            r4.a(r1, r0)
            long r0 = r3.b
            java.lang.String r2 = "ReporterCommand.EXTRA_REPORTER_TYPE"
            r4.a(r2, r0)
            return
    }

    public final void d() {
            r4 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r4.a
            java.lang.String r1 = "ReporterCommand"
            if (r0 != 0) goto Lc
            java.lang.String r0 = "reportParams is empty"
        L8:
            com.vivo.push.util.p.d(r1, r0)
            return
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "report message reportType:"
            r0.<init>(r2)
            long r2 = r4.b
            r0.append(r2)
            java.lang.String r2 = ",msgId:"
            r0.append(r2)
            java.util.HashMap<java.lang.String, java.lang.String> r2 = r4.a
            java.lang.String r3 = "messageID"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L2e
            goto L38
        L2e:
            java.util.HashMap<java.lang.String, java.lang.String> r2 = r4.a
            java.lang.String r3 = "message_id"
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
        L38:
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            goto L8
    }

    @Override
    public final void d(com.vivo.push.a r4) {
            r3 = this;
            java.lang.String r0 = "ReporterCommand.EXTRA_PARAMS"
            java.io.Serializable r0 = r4.d(r0)
            java.util.HashMap r0 = (java.util.HashMap) r0
            r3.a = r0
            long r0 = r3.b
            java.lang.String r2 = "ReporterCommand.EXTRA_REPORTER_TYPE"
            long r0 = r4.b(r2, r0)
            r3.b = r0
            return
    }

    @Override
    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ReporterCommand（"
            r0.<init>(r1)
            long r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
