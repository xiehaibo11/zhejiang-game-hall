package com.kwad.components.ad.f;

import android.content.Context;
import android.graphics.Rect;
import android.view.View;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.bm;
import java.lang.ref.WeakReference;
import java.util.concurrent.CopyOnWriteArrayList;

public final class b {
    private com.kwad.sdk.core.g.d dO;
    private CopyOnWriteArrayList<b> mm = new CopyOnWriteArrayList<>();
    private int mn;

    static final class a {
        private static final b mq = new b();
    }

    public static class b {
        private final c mr;
        private final WeakReference<View> ms;

        public b(c cVar, View view) {
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
        this.dO.a(new com.kwad.sdk.core.g.b() {
            @Override
            public final void a(double d) {
                if (b.this.mm != null) {
                    b.this.e(d);
                    bj.a(new Runnable() {
                        @Override
                        public final void run() {
                            com.kwad.sdk.core.e.c.d("KSNativeAdShakeManager", "onShakeEvent openGate2");
                            b.this.dO.CG();
                        }
                    }, null, 500L);
                }
            }

            @Override
            public final void aT() {
            }
        });
        this.dO.e(f);
        this.dO.bg(context);
    }

    private void e(double d) {
        CopyOnWriteArrayList<b> copyOnWriteArrayList = this.mm;
        int iZH = (int) (com.kwad.sdk.core.config.d.zH() * 100.0f);
        if (copyOnWriteArrayList.isEmpty()) {
            return;
        }
        int i = Integer.MAX_VALUE;
        b bVar = null;
        b bVar2 = null;
        for (b bVar3 : copyOnWriteArrayList) {
            WeakReference weakReference = bVar3.ms;
            if (weakReference != null) {
                Rect rect = new Rect();
                if (((View) weakReference.get()).getGlobalVisibleRect(rect) && bm.o((View) weakReference.get(), iZH)) {
                    int i2 = this.mn / 2;
                    int iMin = Math.min(Math.abs(rect.top - i2), Math.abs(rect.bottom - i2));
                    if (iMin < i) {
                        bVar = bVar3;
                        i = iMin;
                    } else if (iMin == i) {
                        bVar2 = bVar3;
                    }
                }
            }
        }
        if (bVar != null) {
            if (bVar2 != null) {
                Rect rect2 = new Rect();
                ((View) bVar.ms.get()).getGlobalVisibleRect(rect2);
                Rect rect3 = new Rect();
                ((View) bVar2.ms.get()).getGlobalVisibleRect(rect2);
                if (rect2.top < rect3.top) {
                    bVar = bVar2;
                }
            }
            bVar.mr.f(d);
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
        this.mm.add(new b(cVar, view));
    }

    public final void a(c cVar) {
        for (b bVar : this.mm) {
            if (bVar.mr == cVar) {
                this.mm.remove(bVar);
            }
        }
        com.kwad.sdk.core.e.c.d("KSNativeAdShakeManager", "sShakeItems size " + this.mm.size());
    }
}
