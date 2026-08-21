package com.kwad.sdk.core.videocache.c;

import android.content.Context;
import com.kwad.sdk.core.videocache.f;

public final class a {
    private static f axa;

    public static f bj(Context context) {
        f fVar = axa;
        if (fVar != null) {
            return fVar;
        }
        f fVarBk = bk(context);
        axa = fVarBk;
        return fVarBk;
    }

    private static f bk(Context context) {
        return new f.a(context).ah(104857600L).DE();
    }
}
