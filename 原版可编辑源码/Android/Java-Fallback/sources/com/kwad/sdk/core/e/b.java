package com.kwad.sdk.core.e;

final class b implements com.kwad.sdk.core.e.a.b {
    b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void d(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto Lf
            java.lang.Boolean r0 = com.kwad.sdk.core.e.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Lf
            android.util.Log.d(r2, r3)
        Lf:
            return
    }

    @Override
    public final void e(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto L7
            android.util.Log.e(r2, r3)
        L7:
            return
    }

    @Override
    public final void i(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto L7
            android.util.Log.i(r2, r3)
        L7:
            return
    }

    @Override
    public final void printStackTraceOnly(java.lang.Throwable r2) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto L11
            java.lang.Boolean r0 = com.kwad.sdk.core.e.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L11
            if (r2 == 0) goto L11
            r2.printStackTrace()
        L11:
            return
    }

    @Override
    public final void v(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto Lf
            java.lang.Boolean r0 = com.kwad.sdk.core.e.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto Lf
            android.util.Log.v(r2, r3)
        Lf:
            return
    }

    @Override
    public final void v(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            android.util.Log.v(r1, r2)
            return
    }

    @Override
    public final void w(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.e.c.aoC
            if (r0 == 0) goto L7
            android.util.Log.w(r2, r3)
        L7:
            return
    }

    @Override
    public final void w(java.lang.String r1, java.lang.String r2, boolean r3) {
            r0 = this;
            if (r3 == 0) goto L5
            android.util.Log.w(r1, r2)
        L5:
            return
    }
}
