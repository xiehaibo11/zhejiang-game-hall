package com.kwad.sdk.core.e;

import android.util.Log;

final class b implements com.kwad.sdk.core.e.a.b {
    b() {
    }

    @Override
    public final void d(String str, String str2) {
        if (c.aoC && a.ml.booleanValue()) {
            Log.d(str, str2);
        }
    }

    @Override
    public final void e(String str, String str2) {
        if (c.aoC) {
            Log.e(str, str2);
        }
    }

    @Override
    public final void i(String str, String str2) {
        if (c.aoC) {
            Log.i(str, str2);
        }
    }

    @Override
    public final void printStackTraceOnly(Throwable th) {
        if (c.aoC && a.ml.booleanValue() && th != null) {
            th.printStackTrace();
        }
    }

    @Override
    public final void v(String str, String str2) {
        if (c.aoC && a.ml.booleanValue()) {
            Log.v(str, str2);
        }
    }

    @Override
    public final void v(String str, String str2, boolean z) {
        Log.v(str, str2);
    }

    @Override
    public final void w(String str, String str2) {
        if (c.aoC) {
            Log.w(str, str2);
        }
    }

    @Override
    public final void w(String str, String str2, boolean z) {
        if (z) {
            Log.w(str, str2);
        }
    }
}
