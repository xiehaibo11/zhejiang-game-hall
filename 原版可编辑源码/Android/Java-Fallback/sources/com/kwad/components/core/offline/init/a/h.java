package com.kwad.components.core.offline.init.a;

final class h implements com.kwad.components.offline.api.core.api.IOfflineCompoLogcat {
    h() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void d(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.e.c.d(r1, r2)
            return
    }

    @Override
    public final void e(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.e.c.e(r1, r2)
            return
    }

    @Override
    public final void e(java.lang.String r1, java.lang.String r2, java.lang.Throwable r3) {
            r0 = this;
            com.kwad.sdk.core.e.c.e(r1, r2, r3)
            return
    }

    @Override
    public final void i(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.e.c.i(r1, r2)
            return
    }

    @Override
    public final boolean isLoggable() {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            return r0
    }

    @Override
    public final void printStackTrace(java.lang.Throwable r1) {
            r0 = this;
            com.kwad.sdk.core.e.c.printStackTrace(r1)
            return
    }

    @Override
    public final void printStackTraceOnly(java.lang.Throwable r1) {
            r0 = this;
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            return
    }

    @Override
    public final void v(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.e.c.v(r1, r2)
            return
    }

    @Override
    public final void v(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            if (r3 == 0) goto L1a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            java.lang.String r1 = " "
            r3.append(r1)
            r3.append(r2)
            java.lang.String r1 = r3.toString()
            com.kwad.sdk.core.e.c.cW(r1)
            return
        L1a:
            com.kwad.sdk.core.e.c.v(r1, r2)
            return
    }

    @Override
    public final void w(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.e.c.w(r1, r2)
            return
    }

    @Override
    public final void w(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            if (r3 != 0) goto La
            java.lang.Boolean r3 = com.kwad.components.core.a.ml
            boolean r3 = r3.booleanValue()
            if (r3 == 0) goto Ld
        La:
            com.kwad.sdk.core.e.c.w(r1, r2)
        Ld:
            return
    }
}
