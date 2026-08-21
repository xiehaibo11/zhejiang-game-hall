package com.tkay.basead.d;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.tkay.basead.a.a;
import com.tkay.basead.a.c;
import com.tkay.basead.ui.BaseMediaATView;
import com.tkay.basead.ui.MediaATView;
import com.tkay.basead.ui.MraidMediaView;
import com.tkay.basead.ui.OwnNativeATView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.y;
import com.tkay.core.common.f.z;
import com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup;
import java.util.List;
import java.util.Random;

/* JADX INFO: loaded from: classes3.dex */
public class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f5664a;
    com.tkay.basead.e.a b;
    com.tkay.core.common.l.a.c c;
    com.tkay.basead.a.c d;
    View e;
    volatile boolean f;
    z g;
    com.tkay.core.common.f.i h;
    boolean i;
    String j;
    com.tkay.expressad.advanced.d.c k;
    BaseMediaATView l;
    int n;
    int o;
    com.tkay.basead.a.a p;
    OwnNativeATView q;
    private final String r = getClass().getSimpleName();
    View.OnClickListener m = new View.OnClickListener() { // from class: com.tkay.basead.d.h.1
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            h.this.a(view, 1);
        }
    };

    final void a(View view, final int i) {
        com.tkay.basead.c.a adClickRecord;
        if (this.q != null) {
            n();
            o();
            if (this.d == null) {
                this.d = new com.tkay.basead.a.c(m.a().f(), this.h, this.g);
            }
            if (this.d.a()) {
                return;
            }
            this.d.a(new c.b() { // from class: com.tkay.basead.d.h.2
                @Override // com.tkay.basead.a.c.b
                public final void c() {
                }

                @Override // com.tkay.basead.a.c.b
                public final void a() {
                    if (h.this.b != null) {
                        h.this.b.onAdClick(i);
                    }
                }

                @Override // com.tkay.basead.a.c.b
                public final void b() {
                    if (h.this.l != null) {
                        h.this.l.notifyClick();
                    }
                }

                @Override // com.tkay.basead.a.c.b
                public final void a(boolean z) {
                    if (h.this.b != null) {
                        h.this.b.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i(this.h.d, "");
            iVar.f = this.q.getHeight();
            iVar.e = this.q.getWidth();
            if (i != 2) {
                adClickRecord = this.q.getAdClickRecord();
            } else if (view == null) {
                adClickRecord = null;
            } else {
                int[] iArr = new int[2];
                view.getLocationInWindow(iArr);
                int i2 = iArr[0];
                int i3 = iArr[1];
                int width = view.getWidth();
                int height = view.getHeight();
                int iA = a(width);
                int iA2 = a(height);
                com.tkay.basead.c.a aVar = new com.tkay.basead.c.a();
                aVar.f5608a = i2 + iA;
                aVar.b = i3 + iA2;
                aVar.e = iA;
                aVar.f = iA2;
                aVar.c = aVar.f5608a + ((int) (Math.random() * 15.0d));
                aVar.d = aVar.b + ((int) (Math.random() * 15.0d));
                aVar.g = aVar.c - i2;
                aVar.h = aVar.d - i3;
                adClickRecord = aVar;
            }
            iVar.g = adClickRecord;
            this.d.a(iVar);
        }
    }

    private static com.tkay.basead.c.a c(View view) {
        if (view == null) {
            return null;
        }
        int[] iArr = new int[2];
        view.getLocationInWindow(iArr);
        int i = iArr[0];
        int i2 = iArr[1];
        int width = view.getWidth();
        int height = view.getHeight();
        int iA = a(width);
        int iA2 = a(height);
        com.tkay.basead.c.a aVar = new com.tkay.basead.c.a();
        aVar.f5608a = i + iA;
        aVar.b = i2 + iA2;
        aVar.e = iA;
        aVar.f = iA2;
        aVar.c = aVar.f5608a + ((int) (Math.random() * 15.0d));
        aVar.d = aVar.b + ((int) (Math.random() * 15.0d));
        aVar.g = aVar.c - i;
        aVar.h = aVar.d - i2;
        return aVar;
    }

    private static int a(int i) {
        Random random = new Random();
        if (i <= 0) {
            return 0;
        }
        double d = i;
        int i2 = (int) (0.1d * d);
        return random.nextInt((((int) (d * 0.9d)) - i2) + 1) + i2;
    }

    public h(Context context, z zVar, com.tkay.core.common.f.i iVar, com.tkay.core.common.a.g gVar) {
        this.f5664a = context.getApplicationContext();
        this.g = zVar;
        this.h = iVar;
        if (gVar instanceof com.tkay.expressad.advanced.d.c) {
            com.tkay.expressad.advanced.d.c cVar = (com.tkay.expressad.advanced.d.c) gVar;
            this.k = cVar;
            cVar.a(new com.tkay.expressad.out.i() { // from class: com.tkay.basead.d.h.3
                @Override // com.tkay.expressad.out.i
                public final void a() {
                }

                @Override // com.tkay.expressad.out.i
                public final void a(String str) {
                }

                @Override // com.tkay.expressad.out.i
                public final void c() {
                }

                @Override // com.tkay.expressad.out.i
                public final void d() {
                }

                @Override // com.tkay.expressad.out.i
                public final void e() {
                }

                @Override // com.tkay.expressad.out.i
                public final void b() {
                    if (h.this.b != null) {
                        h.this.b.onAdShow();
                    }
                }

                @Override // com.tkay.expressad.out.i
                public final void a(com.tkay.expressad.foundation.d.c cVar2) {
                    Context contextF = m.a().f();
                    if (h.this.d == null) {
                        h hVar = h.this;
                        hVar.d = new com.tkay.basead.a.c(contextF, hVar.h, h.this.g);
                        h.this.d.a(new c.b() { // from class: com.tkay.basead.d.h.3.1
                            @Override // com.tkay.basead.a.c.b
                            public final void b() {
                            }

                            @Override // com.tkay.basead.a.c.b
                            public final void c() {
                            }

                            @Override // com.tkay.basead.a.c.b
                            public final void a() {
                                if (h.this.b != null) {
                                    h.this.b.onAdClick(1);
                                }
                            }

                            @Override // com.tkay.basead.a.c.b
                            public final void a(boolean z) {
                                if (h.this.b != null) {
                                    h.this.b.onDeeplinkCallback(z);
                                }
                            }
                        });
                    }
                    com.tkay.basead.d.a.b.a(h.this.d.b(), cVar2);
                    ATOutNativeAdvancedViewGroup aTOutNativeAdvancedViewGroupC = h.this.k != null ? h.this.k.c() : null;
                    com.tkay.basead.c.i iVar2 = new com.tkay.basead.c.i(h.this.h.d, "");
                    if (aTOutNativeAdvancedViewGroupC != null) {
                        iVar2.f = aTOutNativeAdvancedViewGroupC.getHeight();
                        iVar2.e = aTOutNativeAdvancedViewGroupC.getWidth();
                    }
                    iVar2.g = new com.tkay.basead.c.a();
                    h.this.d.a(iVar2);
                }

                @Override // com.tkay.expressad.out.i
                public final void f() {
                    if (h.this.b != null) {
                        h.this.b.onAdClosed();
                    }
                }
            });
        }
    }

    private void m() {
        com.tkay.basead.a.a aVar = this.p;
        if (aVar != null) {
            aVar.a();
        }
    }

    private void n() {
        com.tkay.basead.a.a aVar = this.p;
        if (aVar != null) {
            aVar.b();
            this.p = null;
        }
    }

    public final void a(int i, int i2) {
        this.n = i;
        this.o = i2;
        com.tkay.expressad.advanced.d.c cVar = this.k;
        if (cVar != null) {
            cVar.a(i2, i);
        }
    }

    public final com.tkay.core.common.f.h a() {
        return this.g;
    }

    public final String b() {
        z zVar = this.g;
        return zVar != null ? zVar.r() : "";
    }

    public final String c() {
        z zVar = this.g;
        return zVar != null ? zVar.s() : "";
    }

    public final String d() {
        z zVar = this.g;
        return zVar != null ? zVar.w() : "";
    }

    public final String e() {
        z zVar = this.g;
        return zVar != null ? zVar.t() : "";
    }

    public final String f() {
        z zVar = this.g;
        return zVar != null ? zVar.u() : "";
    }

    public final String g() {
        z zVar = this.g;
        return zVar != null ? zVar.v() : "";
    }

    public final View a(Context context, boolean z, boolean z2, BaseMediaATView.a aVar) {
        z zVar = this.g;
        if (zVar != null && zVar.g() && z) {
            return b(context, true, z2, aVar);
        }
        com.tkay.expressad.advanced.d.c cVar = this.k;
        if (cVar != null) {
            cVar.a(z2 ? 1 : 0);
            return this.k.c();
        }
        z zVar2 = this.g;
        if (zVar2 != null && !TextUtils.isEmpty(zVar2.u()) && z && (this.g instanceof com.tkay.core.common.f.f)) {
            return b(context, false, z2, aVar);
        }
        return null;
    }

    private View b(Context context, boolean z, boolean z2, BaseMediaATView.a aVar) {
        a aVar2 = new a(aVar);
        OwnNativeATView ownNativeATView = new OwnNativeATView(this.f5664a);
        if (z) {
            this.q = ownNativeATView;
            MraidMediaView mraidMediaView = new MraidMediaView(context, this.g, this.h, z2, aVar2);
            this.l = mraidMediaView;
            mraidMediaView.setMraidWebViewListener(new MraidMediaView.a() { // from class: com.tkay.basead.d.h.4
                @Override // com.tkay.basead.ui.MraidMediaView.a
                public final void a(String str) {
                    if (h.this.g != null) {
                        h.this.g.v(str);
                    }
                    h hVar = h.this;
                    hVar.a(hVar.l, 1);
                }

                @Override // com.tkay.basead.ui.MraidMediaView.a
                public final void a() {
                    if (h.this.q != null) {
                        h hVar = h.this;
                        hVar.b(hVar.q);
                    }
                }
            });
        } else {
            this.l = new MediaATView(context, this.g, this.h, z2, aVar2);
        }
        this.l.init(this.n, this.o);
        ownNativeATView.addView(this.l, new FrameLayout.LayoutParams(this.l.getMediaViewWidth(), this.l.getMediaViewHeight()));
        if (z) {
            q();
        } else {
            a(ownNativeATView, this.l.getClickViews());
        }
        return ownNativeATView;
    }

    public final boolean h() {
        return this.k != null;
    }

    public final void a(com.tkay.basead.e.a aVar) {
        this.b = aVar;
    }

    public final void a(boolean z) {
        this.i = z;
        com.tkay.expressad.advanced.d.c cVar = this.k;
        if (cVar != null) {
            cVar.b(z ? 1 : 2);
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public final void a(String str) {
        this.j = str;
        if (this.k != null) {
            if (!TextUtils.isEmpty(str)) {
                String str2 = this.j;
                byte b = -1;
                switch (str2.hashCode()) {
                    case 49:
                        if (str2.equals("1")) {
                            b = 0;
                        }
                        break;
                    case 50:
                        if (str2.equals("2")) {
                            b = 1;
                        }
                        break;
                    case 51:
                        if (str2.equals("3")) {
                            b = 2;
                        }
                        break;
                }
                if (b == 0) {
                    this.k.c(3);
                    return;
                } else if (b == 1) {
                    this.k.c(1);
                    return;
                } else {
                    if (b != 2) {
                        return;
                    }
                    this.k.c(2);
                    return;
                }
            }
            this.k.c(3);
        }
    }

    public final void a(View view, List<View> list) {
        if (d(view)) {
            z zVar = this.g;
            if (zVar != null && !zVar.g()) {
                b(view);
            }
            if (list != null) {
                for (View view2 : list) {
                    if (view2 != null) {
                        view2.setOnClickListener(this.m);
                    }
                }
                return;
            }
            view.setOnClickListener(this.m);
        }
    }

    public final void a(View view) {
        if (d(view)) {
            z zVar = this.g;
            if (zVar != null && !zVar.g()) {
                b(view);
            }
            a(view, this.m);
        }
    }

    private boolean d(View view) {
        OwnNativeATView[] ownNativeATViewArr = new OwnNativeATView[1];
        a(ownNativeATViewArr, view);
        if (ownNativeATViewArr[0] == null) {
            Log.i("tkay", "Register View don't contain OwnNativeAdView.");
            return false;
        }
        if (ownNativeATViewArr[0].getChildCount() == 0) {
            Log.i("tkay", "OwnNativeAdView View don't contain any child views.");
            return false;
        }
        this.q = ownNativeATViewArr[0];
        q();
        return true;
    }

    private void a(OwnNativeATView[] ownNativeATViewArr, View view) {
        if (view instanceof ViewGroup) {
            if (view instanceof OwnNativeATView) {
                ownNativeATViewArr[0] = (OwnNativeATView) view;
            }
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(ownNativeATViewArr, viewGroup.getChildAt(i));
            }
        }
    }

    private void a(View view, View.OnClickListener onClickListener) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(viewGroup.getChildAt(i), onClickListener);
            }
            return;
        }
        view.setOnClickListener(onClickListener);
    }

    public final void i() {
        com.tkay.core.common.l.a.c cVar = this.c;
        if (cVar != null) {
            cVar.a();
        }
    }

    public final void b(View view) {
        this.e = view;
        com.tkay.core.common.l.a.a aVar = new com.tkay.core.common.l.a.a() { // from class: com.tkay.basead.d.h.5
            @Override // com.tkay.core.common.l.a.a, com.tkay.core.common.l.a.b
            public final void recordImpression(View view2) {
                h.this.o();
            }
        };
        if (this.c == null) {
            view.getContext();
            this.c = new com.tkay.core.common.l.a.c(this.h.m.R() <= 0 ? 100 : this.h.m.R());
        }
        this.c.a(view, aVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void o() {
        if (this.f) {
            return;
        }
        this.f = true;
        if (this.i && this.g.g()) {
            BaseMediaATView baseMediaATView = this.l;
            if (baseMediaATView instanceof MraidMediaView) {
                ((MraidMediaView) baseMediaATView).fireAudioVolumeChange(this.i);
            }
        }
        if (this.g instanceof y) {
            com.tkay.basead.d.c.c.a().a(this.f5664a, com.tkay.basead.d.c.c.a(this.h.b, this.h.c), this.g, this.h.m);
        }
        com.tkay.expressad.advanced.d.c cVar = this.k;
        View viewC = cVar != null ? cVar.c() : this.q;
        if (this.g.g()) {
            viewC = this.l;
        }
        if (viewC != null) {
            com.tkay.basead.c.i iVar = new com.tkay.basead.c.i(this.h.d, "");
            iVar.f = viewC.getHeight();
            iVar.e = viewC.getWidth();
            com.tkay.basead.a.b.a(8, this.g, iVar);
            com.tkay.basead.e.a aVar = this.b;
            if (aVar != null) {
                aVar.onAdShow();
            }
        }
        m();
    }

    private View p() {
        View monitorClickView;
        BaseMediaATView baseMediaATView = this.l;
        if (baseMediaATView != null && (monitorClickView = baseMediaATView.getMonitorClickView()) != null) {
            return monitorClickView;
        }
        View[] viewArr = new View[1];
        a(this.q, viewArr);
        if (viewArr[0] != null) {
            return viewArr[0];
        }
        return this.q;
    }

    private void a(View view, View[] viewArr) {
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int i = 0; i < viewGroup.getChildCount(); i++) {
                a(viewGroup.getChildAt(i), viewArr);
            }
            return;
        }
        if (((view instanceof Button) || (view instanceof TextView)) && TextUtils.equals(((TextView) view).getText().toString(), this.g.w())) {
            viewArr[0] = view;
        }
    }

    public final void j() {
        i();
        n();
        this.e = null;
        this.q = null;
        this.b = null;
        try {
            if (this.k != null) {
                this.k.e();
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        com.tkay.basead.a.c cVar = this.d;
        if (cVar != null) {
            cVar.d();
            this.d = null;
        }
        com.tkay.core.common.l.a.c cVar2 = this.c;
        if (cVar2 != null) {
            cVar2.b();
            this.c = null;
        }
        BaseMediaATView baseMediaATView = this.l;
        if (baseMediaATView != null) {
            baseMediaATView.destroy();
        }
    }

    public final boolean a(boolean z, boolean z2) {
        if (this.g.n() != 67) {
            return false;
        }
        return this.g.a(z, z2);
    }

    public final void k() {
        com.tkay.expressad.advanced.d.c cVar = this.k;
        if (cVar != null) {
            cVar.d(3);
        }
    }

    public final void l() {
        com.tkay.expressad.advanced.d.c cVar = this.k;
        if (cVar != null) {
            cVar.e(3);
        }
    }

    private void q() {
        com.tkay.core.common.f.i iVar = this.h;
        if (iVar == null || iVar.m == null || this.h.m.F() != 2) {
            return;
        }
        final View viewP = p();
        this.p = new com.tkay.basead.a.a(viewP, this.h, new a.InterfaceC0383a() { // from class: com.tkay.basead.d.h.6
            @Override // com.tkay.basead.a.a.InterfaceC0383a
            public final void a(int i) {
                h.this.a(viewP, 2);
            }
        });
    }

    private static class a implements BaseMediaATView.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final BaseMediaATView.a f5672a;

        public a(BaseMediaATView.a aVar) {
            this.f5672a = aVar;
        }

        @Override // com.tkay.basead.ui.BaseMediaATView.a
        public final void onClickCloseView() {
            BaseMediaATView.a aVar = this.f5672a;
            if (aVar != null) {
                aVar.onClickCloseView();
            }
        }
    }
}
