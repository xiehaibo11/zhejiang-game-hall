package com.kwad.sdk.core.video.a;

import android.content.Context;
import com.kwad.sdk.core.report.i;
import com.kwad.sdk.core.report.r;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.am;
import java.util.concurrent.atomic.AtomicBoolean;

public final class e {
    private static boolean RT = false;
    private static AtomicBoolean avS = null;
    private static int avT = -1;
    private static int avV;
    private static final AtomicBoolean Zs = new AtomicBoolean(false);
    private static final AtomicBoolean avU = new AtomicBoolean(false);

    public static int Ds() {
        return avV;
    }

    private static boolean Dt() {
        AtomicBoolean atomicBoolean = avS;
        if (atomicBoolean != null) {
            return atomicBoolean.get();
        }
        AtomicBoolean atomicBoolean2 = new AtomicBoolean(true);
        avS = atomicBoolean2;
        return atomicBoolean2.get();
    }

    public static c a(Context context, boolean z, boolean z2, boolean z3) {
        c bVar;
        boolean z4;
        try {
            if (yG() && z2 && Dt()) {
                com.kwad.sdk.core.e.c.i("MediaPlayerImpl", "constructPlayer KwaiMediaPlayer");
                bVar = new d();
                avV = 2;
                ((d) bVar).bf(z);
            } else {
                com.kwad.sdk.core.e.c.i("MediaPlayerImpl", "constructPlayer AndroidMediaPlayer");
                bVar = new b();
                avV = 1;
            }
            z4 = false;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.e("MediaPlayerImpl", "constructPlayer exception, using AndroidMediaPlayer", th);
            if (!RT) {
                RT = true;
                com.kwad.sdk.service.c.gatherException(th);
            }
            bVar = new b();
            avV = 1;
            z4 = true;
        }
        int iA = am.a(yG(), ServiceProvider.get(com.kwad.sdk.service.a.e.class) != null && ((com.kwad.sdk.service.a.e) ServiceProvider.get(com.kwad.sdk.service.a.e.class)).getIsExternal(), z2, Dt(), z4, z3, bVar.getMediaPlayerType());
        com.kwad.sdk.core.e.c.cW("player v=" + Integer.toBinaryString(iA));
        if (avT != iA) {
            avT = iA;
            cy(iA);
        }
        return bVar;
    }

    private static void cy(int i) {
        r rVar = new r(10212L);
        rVar.arX = i;
        i.a(rVar);
    }

    private static boolean yG() {
        return avU.get() || com.kwad.framework.a.a.HN.booleanValue();
    }
}
