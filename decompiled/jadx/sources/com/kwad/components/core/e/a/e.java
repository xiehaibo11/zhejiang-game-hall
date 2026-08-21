package com.kwad.components.core.e.a;

import android.app.Activity;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.bj;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.Stack;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: loaded from: classes2.dex */
public final class e {
    private final List<b> IV;
    private final Stack<AdTemplate> IW;
    private final AtomicBoolean IX;
    private final Set<String> IY;
    private final String TAG;
    private final AtomicBoolean ol;

    static class a {
        private static final e Jc = new e(0);
    }

    private e() {
        this.TAG = "InstalledActivateManager";
        this.IV = new CopyOnWriteArrayList();
        this.IW = new Stack<>();
        this.ol = new AtomicBoolean();
        this.IX = new AtomicBoolean();
        this.IY = new HashSet();
    }

    /* synthetic */ e(byte b) {
        this();
    }

    private void M(final AdTemplate adTemplate) {
        if (!this.IX.get() && !this.ol.get()) {
            com.kwad.sdk.core.e.c.d("InstalledActivateManager", "showInstalledActivate");
            this.IX.set(true);
            bj.runOnUiThreadDelay(new Runnable() { // from class: com.kwad.components.core.e.a.e.1
                /* JADX INFO: Access modifiers changed from: private */
                public void mP() {
                    com.kwad.sdk.core.c.b.AU();
                    if (!com.kwad.sdk.core.c.b.isEnable()) {
                        e.this.IX.set(false);
                        return;
                    }
                    com.kwad.sdk.core.c.b.AU();
                    if (com.kwad.sdk.core.c.b.getCurrentActivity() != null) {
                        com.kwad.sdk.core.c.b.AU();
                        if (com.kwad.sdk.core.c.b.isAppOnForeground()) {
                            mQ();
                            return;
                        }
                    }
                    com.kwad.sdk.core.c.b.AU();
                    com.kwad.sdk.core.c.b.a(new com.kwad.sdk.core.c.d() { // from class: com.kwad.components.core.e.a.e.1.2
                        @Override // com.kwad.sdk.core.c.d, com.kwad.sdk.core.c.c
                        /* JADX INFO: renamed from: onActivityResumed */
                        public final void c(Activity activity) {
                            super.c(activity);
                            com.kwad.sdk.core.c.b.AU();
                            com.kwad.sdk.core.c.b.b((com.kwad.sdk.core.c.c) this);
                            com.kwad.sdk.core.e.c.d("InstalledActivateManager", "startShow onBackToForeground");
                            mQ();
                        }
                    });
                }

                /* JADX INFO: Access modifiers changed from: private */
                public void mQ() {
                    com.kwad.sdk.core.e.c.d("InstalledActivateManager", "startShow");
                    e.this.N(adTemplate);
                    e.this.IX.set(false);
                    e.this.IY.remove(com.kwad.sdk.core.response.b.a.aq(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
                }

                @Override // java.lang.Runnable
                public final void run() {
                    final com.kwad.components.ad.b.a.a aVar = (com.kwad.components.ad.b.a.a) com.kwad.sdk.components.c.f(com.kwad.components.ad.b.a.a.class);
                    if (aVar == null || !aVar.S()) {
                        mP();
                    } else {
                        aVar.a(new com.kwad.components.ad.b.a.c() { // from class: com.kwad.components.core.e.a.e.1.1
                            @Override // com.kwad.components.ad.b.a.c, com.kwad.components.ad.b.a.b
                            public final void U() {
                                aVar.b(this);
                                mP();
                                com.kwad.sdk.core.e.c.d("InstalledActivateManager", "startShow onPushAdClose");
                            }
                        });
                    }
                }
            }, com.kwad.sdk.core.response.b.b.bR(adTemplate));
        } else {
            com.kwad.sdk.core.e.c.d("InstalledActivateManager", "mLoadDisable: " + this.ol.get() + ", mLoadDisable: " + this.IX.get());
            this.IW.add(adTemplate);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void N(AdTemplate adTemplate) {
        if (a(adTemplate, new b() { // from class: com.kwad.components.core.e.a.e.2
            @Override // com.kwad.components.core.e.a.b
            public final void fh() {
                com.kwad.sdk.core.e.c.d("InstalledActivateManager", "onViewClose");
                e.this.en();
                e.this.mO();
            }

            @Override // com.kwad.components.core.e.a.b
            public final void mL() {
                com.kwad.sdk.core.e.c.d("InstalledActivateManager", "onViewShow");
                e.this.es();
            }
        })) {
            return;
        }
        mO();
    }

    private static boolean a(AdTemplate adTemplate, b bVar) {
        com.kwad.sdk.core.e.c.d("InstalledActivateManager", "showToActivityWindow");
        return new h().b(adTemplate, bVar);
    }

    public static e mN() {
        return a.Jc;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void mO() {
        if (this.IW.isEmpty()) {
            return;
        }
        M(this.IW.pop());
    }

    public final synchronized void L(AdTemplate adTemplate) {
        String strAq = com.kwad.sdk.core.response.b.a.aq(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        if (com.kwad.sdk.core.response.b.b.bQ(adTemplate) && !this.IY.contains(strAq)) {
            this.IY.add(strAq);
            M(adTemplate);
        }
    }

    public final void a(b bVar) {
        this.IV.add(bVar);
    }

    public final void b(b bVar) {
        this.IV.remove(bVar);
    }

    public final void en() {
        this.ol.set(false);
        Iterator<b> it = this.IV.iterator();
        while (it.hasNext()) {
            it.next().fh();
        }
    }

    public final void es() {
        this.ol.set(true);
        Iterator<b> it = this.IV.iterator();
        while (it.hasNext()) {
            it.next().mL();
        }
    }

    public final boolean isShowing() {
        return this.ol.get();
    }
}
