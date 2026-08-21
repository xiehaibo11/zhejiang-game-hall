package com.kwad.framework.filedownloader.services;

import android.text.TextUtils;
import com.kwad.framework.filedownloader.f.c;

public final class b implements c.d {
    @Override
    public final int f(String str, String str2, boolean z) {
        return g(str, str2, z);
    }

    @Override
    public final int g(String str, String str2, boolean z) {
        if (TextUtils.isEmpty(str)) {
            return 0;
        }
        try {
            return z ? com.kwad.framework.filedownloader.f.f.bp(com.kwad.framework.filedownloader.f.f.b("%sp%s@dir", str, str2)).hashCode() : com.kwad.framework.filedownloader.f.f.bp(com.kwad.framework.filedownloader.f.f.b("%sp%s", str, str2)).hashCode();
        } catch (Throwable unused) {
            return str.hashCode();
        }
    }
}
