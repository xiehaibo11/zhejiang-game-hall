package com.kwad.components.offline.obiwan;

import com.kwad.components.offline.api.obiwan.IObiwanLogcat;

public final class b implements com.kwad.sdk.core.e.a.b {
    private final IObiwanLogcat Zx;

    public b(IObiwanLogcat iObiwanLogcat) {
        this.Zx = iObiwanLogcat;
    }

    @Override
    public final void d(String str, String str2) {
        this.Zx.d(str, str2);
    }

    @Override
    public final void e(String str, String str2) {
        this.Zx.e(str, str2);
    }

    @Override
    public final void i(String str, String str2) {
        this.Zx.i(str, str2);
    }

    @Override
    public final void printStackTraceOnly(Throwable th) {
        this.Zx.printStackTraceOnly(th);
    }

    @Override
    public final void v(String str, String str2) {
        this.Zx.v(str, str2);
    }

    @Override
    public final void v(String str, String str2, boolean z) {
        this.Zx.v(str, str2, true);
    }

    @Override
    public final void w(String str, String str2) {
        this.Zx.w(str, str2);
    }

    @Override
    public final void w(String str, String str2, boolean z) {
        this.Zx.w(str, str2, z);
    }
}
