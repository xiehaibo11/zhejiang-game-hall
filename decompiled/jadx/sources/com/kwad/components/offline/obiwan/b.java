package com.kwad.components.offline.obiwan;

import com.kwad.components.offline.api.obiwan.IObiwanLogcat;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.sdk.core.e.a.b {
    private final IObiwanLogcat Zx;

    public b(IObiwanLogcat iObiwanLogcat) {
        this.Zx = iObiwanLogcat;
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void d(String str, String str2) {
        this.Zx.d(str, str2);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void e(String str, String str2) {
        this.Zx.e(str, str2);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void i(String str, String str2) {
        this.Zx.i(str, str2);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void printStackTraceOnly(Throwable th) {
        this.Zx.printStackTraceOnly(th);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void v(String str, String str2) {
        this.Zx.v(str, str2);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void v(String str, String str2, boolean z) {
        this.Zx.v(str, str2, true);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void w(String str, String str2) {
        this.Zx.w(str, str2);
    }

    @Override // com.kwad.sdk.core.e.a.b
    public final void w(String str, String str2, boolean z) {
        this.Zx.w(str, str2, z);
    }
}
