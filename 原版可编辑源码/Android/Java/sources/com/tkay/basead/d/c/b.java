package com.tkay.basead.d.c;

import android.text.TextUtils;
import com.tkay.core.common.f.h;
import com.tkay.expressad.foundation.h.j;

public final class b {
    public static void a(h hVar) {
        String strF = hVar.f();
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        hVar.d(j.b(strF));
    }
}
