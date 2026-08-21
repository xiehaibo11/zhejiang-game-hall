package com.kwad.components.core.offline.init.a;

import com.kwad.components.offline.api.core.api.IOfflineCompoLogcat;

final class h implements IOfflineCompoLogcat {
    h() {
    }

    @Override
    public final void d(String str, String str2) {
        com.kwad.sdk.core.e.c.d(str, str2);
    }

    @Override
    public final void e(String str, String str2) {
        com.kwad.sdk.core.e.c.e(str, str2);
    }

    @Override
    public final void e(String str, String str2, Throwable th) {
        com.kwad.sdk.core.e.c.e(str, str2, th);
    }

    @Override
    public final void i(String str, String str2) {
        com.kwad.sdk.core.e.c.i(str, str2);
    }

    @Override
    public final boolean isLoggable() {
        return com.kwad.sdk.core.e.c.aoC;
    }

    @Override
    public final void printStackTrace(Throwable th) {
        com.kwad.sdk.core.e.c.printStackTrace(th);
    }

    @Override
    public final void printStackTraceOnly(Throwable th) {
        com.kwad.sdk.core.e.c.printStackTraceOnly(th);
    }

    @Override
    public final void v(String str, String str2) {
        com.kwad.sdk.core.e.c.v(str, str2);
    }

    @Override
    public final void v(String str, String str2, boolean z) {
        if (!z) {
            com.kwad.sdk.core.e.c.v(str, str2);
            return;
        }
        com.kwad.sdk.core.e.c.cW(str + " " + str2);
    }

    @Override
    public final void w(String str, String str2) {
        com.kwad.sdk.core.e.c.w(str, str2);
    }

    @Override
    public final void w(String str, String str2, boolean z) {
        if (z || com.kwad.components.core.a.ml.booleanValue()) {
            com.kwad.sdk.core.e.c.w(str, str2);
        }
    }
}
