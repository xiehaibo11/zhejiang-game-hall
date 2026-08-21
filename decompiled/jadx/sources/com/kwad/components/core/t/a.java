package com.kwad.components.core.t;

import android.content.Context;
import com.kwad.components.offline.api.core.api.OfflineOnAudioConflictListener;
import com.kwad.sdk.utils.h;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class a {
    private static volatile a Rg;
    private com.kwad.sdk.utils.h Rc;
    private List<WeakReference<OfflineOnAudioConflictListener>> Rd = new ArrayList();
    private boolean Re = false;
    private boolean Rf = false;

    private a(Context context) {
        init(context);
    }

    static /* synthetic */ boolean a(a aVar, boolean z) {
        aVar.Rf = true;
        return true;
    }

    public static a al(Context context) {
        if (Rg == null) {
            synchronized (a.class) {
                if (Rg == null) {
                    Rg = new a(context.getApplicationContext());
                }
            }
        }
        return Rg;
    }

    private void init(Context context) {
        this.Re = false;
        com.kwad.sdk.utils.h hVar = new com.kwad.sdk.utils.h(context);
        this.Rc = hVar;
        hVar.c(new h.a() { // from class: com.kwad.components.core.t.a.1
            @Override // com.kwad.sdk.utils.h.a
            public final void onAudioBeOccupied() {
                OfflineOnAudioConflictListener offlineOnAudioConflictListener;
                Iterator it = a.this.Rd.iterator();
                while (it.hasNext()) {
                    WeakReference weakReference = (WeakReference) it.next();
                    if (weakReference == null || (offlineOnAudioConflictListener = (OfflineOnAudioConflictListener) weakReference.get()) == null) {
                        it.remove();
                    } else {
                        offlineOnAudioConflictListener.onAudioBeOccupied();
                    }
                }
                a.a(a.this, true);
            }

            @Override // com.kwad.sdk.utils.h.a
            public final void onAudioBeReleased() {
                OfflineOnAudioConflictListener offlineOnAudioConflictListener;
                Iterator it = a.this.Rd.iterator();
                while (it.hasNext()) {
                    WeakReference weakReference = (WeakReference) it.next();
                    if (weakReference == null || (offlineOnAudioConflictListener = (OfflineOnAudioConflictListener) weakReference.get()) == null) {
                        it.remove();
                    } else {
                        offlineOnAudioConflictListener.onAudioBeReleased();
                    }
                }
            }
        });
    }

    public final void a(OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        this.Rd.add(new WeakReference<>(offlineOnAudioConflictListener));
    }

    public final boolean aJ(boolean z) {
        if (this.Rc == null) {
            return false;
        }
        if (!z && this.Re) {
            return false;
        }
        this.Re = true;
        this.Rf = false;
        return this.Rc.HT();
    }

    public final void b(OfflineOnAudioConflictListener offlineOnAudioConflictListener) {
        Iterator<WeakReference<OfflineOnAudioConflictListener>> it = this.Rd.iterator();
        while (it.hasNext()) {
            WeakReference<OfflineOnAudioConflictListener> next = it.next();
            if (next == null || next.get() == offlineOnAudioConflictListener) {
                it.remove();
            }
        }
    }

    public final boolean qh() {
        return this.Rf;
    }

    public final boolean qi() {
        return this.Re;
    }
}
