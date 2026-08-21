package com.kwad.components.ad.reward;

import android.os.Looper;
import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private final Set<com.kwad.components.ad.reward.e.j> ot;

    static class a {
        private static final c ov = new c(0);
    }

    private c() {
        this.ot = new HashSet();
    }

    /* synthetic */ c(byte b) {
        this();
    }

    public static c ft() {
        return a.ov;
    }

    private void fu() {
        if (this.ot.size() == 0) {
            return;
        }
        Iterator<com.kwad.components.ad.reward.e.j> it = this.ot.iterator();
        while (it.hasNext()) {
            it.next().onRewardVerify();
        }
    }

    private static boolean isMainThread() {
        return Looper.getMainLooper() == Looper.myLooper();
    }

    public final void a(com.kwad.components.ad.reward.e.j jVar) {
        if (jVar != null) {
            this.ot.add(jVar);
        }
    }

    public final void b(com.kwad.components.ad.reward.e.j jVar) {
        this.ot.remove(jVar);
    }

    public final void notifyRewardVerify() {
        if (isMainThread()) {
            fu();
        } else {
            bj.runOnUiThread(new Runnable() { // from class: com.kwad.components.ad.reward.c.1
                @Override // java.lang.Runnable
                public final void run() {
                    c.this.notifyRewardVerify();
                }
            });
        }
    }
}
