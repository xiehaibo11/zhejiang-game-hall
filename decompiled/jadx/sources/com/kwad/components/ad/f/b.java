package com.kwad.components.ad.f;

import android.content.Context;
import android.graphics.Rect;
import android.view.View;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import java.lang.ref.WeakReference;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private com.kwad.sdk.core.g.d dO;
    private CopyOnWriteArrayList<C0097b> mm = new CopyOnWriteArrayList<>();
    private int mn;

    static final class a {
        private static final b mq = new b();
    }

    /* JADX INFO: renamed from: com.kwad.components.ad.f.b$b, reason: collision with other inner class name */
    public static class C0097b {
        private final c mr;
        private final WeakReference<View> ms;

        public C0097b(c cVar, View view) {
            this.ms = new WeakReference<>(view);
            this.mr = cVar;
        }
    }

    public interface c {
        void f(double d);
    }

    private void a(float f, Context context) {
        this.dO = new com.kwad.sdk.core.g.d(f);
        this.mm = new CopyOnWriteArrayList<>();
        this.dO.a(new com.kwad.sdk.core.g.b() { // from class: com.kwad.components.ad.f.b.1
            @Override // com.kwad.sdk.core.g.b
            public final void a(double d) {
                if (b.this.mm != null) {
                    b.this.e(d);
                    bj.a(new Runnable() { // from class: com.kwad.components.ad.f.b.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("KSNativeAdShakeManager", "onShakeEvent openGate2");
                            b.this.dO.CG();
                        }
                    }, null, 500L);
                }
            }

            @Override // com.kwad.sdk.core.g.b
            public final void aT() {
            }
        });
        this.dO.e(f);
        this.dO.bg(context);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e(double d) {
        CopyOnWriteArrayList<C0097b> copyOnWriteArrayList = this.mm;
        int iZH = (int) (com.kwad.sdk.core.config.d.zH() * 100.0f);
        if (copyOnWriteArrayList.isEmpty()) {
            return;
        }
        int i = Integer.MAX_VALUE;
        C0097b c0097b = null;
        C0097b c0097b2 = null;
        for (C0097b c0097b3 : copyOnWriteArrayList) {
            WeakReference weakReference = c0097b3.ms;
            if (weakReference != null) {
                Rect rect = new Rect();
                if (((View) weakReference.get()).getGlobalVisibleRect(rect) && bm.o((View) weakReference.get(), iZH)) {
                    int i2 = this.mn / 2;
                    int iMin = Math.min(Math.abs(rect.top - i2), Math.abs(rect.bottom - i2));
                    if (iMin < i) {
                        c0097b = c0097b3;
                        i = iMin;
                    } else if (iMin == i) {
                        c0097b2 = c0097b3;
                    }
                }
            }
        }
        if (c0097b != null) {
            if (c0097b2 != null) {
                Rect rect2 = new Rect();
                ((View) c0097b.ms.get()).getGlobalVisibleRect(rect2);
                Rect rect3 = new Rect();
                ((View) c0097b2.ms.get()).getGlobalVisibleRect(rect2);
                if (rect2.top < rect3.top) {
                    c0097b = c0097b2;
                }
            }
            c0097b.mr.f(d);
        }
    }

    public static b eD() {
        return a.mq;
    }

    public final void a(float f, View view, c cVar) {
        if (view == null || view.getContext() == null) {
            return;
        }
        if (this.dO == null) {
            this.mn = com.kwad.sdk.d.a.a.aG(view.getContext());
            a(f, view.getContext());
        }
        this.mm.add(new C0097b(cVar, view));
    }

    public final void a(c cVar) {
        for (C0097b c0097b : this.mm) {
            if (c0097b.mr == cVar) {
                this.mm.remove(c0097b);
            }
        }
        com.kwad.sdk.core.e.c.d("KSNativeAdShakeManager", "sShakeItems size " + this.mm.size());
    }
}
