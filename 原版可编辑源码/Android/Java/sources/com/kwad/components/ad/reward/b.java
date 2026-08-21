package com.kwad.components.ad.reward;

import android.os.Looper;
import com.kwad.components.core.playable.PlayableSource;
import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public final class b {
    private final Set<com.kwad.components.ad.reward.e.h> oo;

    static class a {
        private static final b os = new b(0);
    }

    private b() {
        this.oo = new HashSet();
    }

    b(byte b) {
        this();
    }

    private void b(PlayableSource playableSource, com.kwad.components.ad.reward.e.l lVar) {
        if (this.oo.size() == 0) {
            return;
        }
        Iterator<com.kwad.components.ad.reward.e.h> it = this.oo.iterator();
        while (it.hasNext()) {
            it.next().a(playableSource, lVar);
        }
    }

    private void c(PlayableSource playableSource) {
        if (this.oo.size() == 0) {
            return;
        }
        Iterator<com.kwad.components.ad.reward.e.h> it = this.oo.iterator();
        while (it.hasNext()) {
            it.next().bT();
        }
    }

    public static b fp() {
        return a.os;
    }

    private void fr() {
        if (this.oo.size() == 0) {
            return;
        }
        Iterator<com.kwad.components.ad.reward.e.h> it = this.oo.iterator();
        while (it.hasNext()) {
            it.next().bS();
        }
    }

    private static boolean isMainThread() {
        return Looper.getMainLooper() == Looper.myLooper();
    }

    public final void a(com.kwad.components.ad.reward.e.h hVar) {
        if (hVar != null) {
            this.oo.add(hVar);
        }
    }

    public final void a(PlayableSource playableSource) {
        c(playableSource, null);
    }

    public final void b(com.kwad.components.ad.reward.e.h hVar) {
        this.oo.remove(hVar);
    }

    public final void b(final PlayableSource playableSource) {
        if (isMainThread()) {
            c(playableSource);
        } else {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    b.this.c(playableSource);
                }
            });
        }
    }

    public final void c(final PlayableSource playableSource, final com.kwad.components.ad.reward.e.l lVar) {
        if (isMainThread()) {
            b(playableSource, lVar);
        } else {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    b.this.b(playableSource, lVar);
                }
            });
        }
    }

    public final void fq() {
        if (isMainThread()) {
            fr();
        } else {
            bj.runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    b.this.fq();
                }
            });
        }
    }
}
