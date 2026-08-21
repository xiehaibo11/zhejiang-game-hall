package com.vivo.push.d;

final class g extends com.vivo.push.d.z {
    g(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r2) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "delete push info "
            r2.<init>(r0)
            android.content.Context r0 = r1.a
            java.lang.String r0 = r0.getPackageName()
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "OnClearCacheTask"
            com.vivo.push.util.p.d(r0, r2)
            android.content.Context r2 = r1.a
            com.vivo.push.util.y r2 = com.vivo.push.util.y.b(r2)
            r2.a()
            return
    }
}
