package com.tkay.basead.ui;

import android.content.Context;
import android.text.TextUtils;
import android.widget.FrameLayout;
import com.tkay.basead.a.b.c;
import com.tkay.basead.c.e;
import com.tkay.basead.mraid.MraidWebView;
import com.tkay.basead.mraid.d;
import com.tkay.basead.ui.ClickToReLoadView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import com.tkay.core.common.l.u;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;

/* JADX INFO: loaded from: classes3.dex */
public class MraidContainerView extends FrameLayout {
    private static final String h = MraidContainerView.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected h f5794a;
    protected j b;
    protected i c;
    protected b d;
    protected ClickToReLoadView e;
    protected MraidWebView f;
    protected a g;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;

    public interface a {
        void a();

        void a(String str);

        void b();
    }

    static /* synthetic */ boolean a(MraidContainerView mraidContainerView) {
        mraidContainerView.k = false;
        return false;
    }

    public MraidContainerView(Context context) {
        super(context);
    }

    public MraidContainerView(Context context, h hVar, i iVar, a aVar) {
        super(context);
        this.f5794a = hVar;
        this.b = iVar.m;
        this.c = iVar;
        this.g = aVar;
        setBackgroundColor(getResources().getColor(com.tkay.core.common.l.h.a(context, "color_99000000", "color")));
    }

    public void init() {
        if (this.b.V()) {
            b();
            return;
        }
        b bVar = new b(this);
        this.d = bVar;
        bVar.a();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        MraidWebView mraidWebViewB = c.b(c.a(this.c, this.f5794a));
        this.f = mraidWebViewB;
        if (mraidWebViewB != null) {
            this.l = true;
            if (this.j) {
                mraidWebViewB.setNeedRegisterVolumeChangeReceiver(true);
            }
            this.f.prepare(getContext(), new com.tkay.basead.mraid.b() { // from class: com.tkay.basead.ui.MraidContainerView.1
                @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
                public final void close() {
                }

                @Override // com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge
                public final void open(String str) {
                    if (MraidContainerView.this.g != null) {
                        MraidContainerView.this.g.a(str);
                    }
                }

                @Override // com.tkay.basead.mraid.b
                public final void a() {
                    if (MraidContainerView.this.g != null) {
                        MraidContainerView.this.g.b();
                    }
                }
            });
            addView(this.f, new FrameLayout.LayoutParams(-1, -1));
            a aVar = this.g;
            if (aVar != null) {
                aVar.a();
            }
        }
    }

    public void loadMraidWebView() {
        if (this.k || this.l) {
            return;
        }
        this.k = true;
        ClickToReLoadView clickToReLoadView = this.e;
        if (clickToReLoadView != null) {
            removeView(clickToReLoadView);
        }
        b bVar = this.d;
        if (bVar != null) {
            bVar.b();
        }
        final String strA = d.a(this.c, this.f5794a);
        if (TextUtils.isEmpty(strA)) {
            this.k = false;
            c();
            f();
        } else {
            final String strA2 = c.a(this.c, this.f5794a);
            m.a().a(new Runnable() { // from class: com.tkay.basead.ui.MraidContainerView.2
                @Override // java.lang.Runnable
                public final void run() {
                    MraidContainerView.this.f = new MraidWebView(m.a().f());
                    d.a(strA2, strA, MraidContainerView.this.f, new d.a() { // from class: com.tkay.basead.ui.MraidContainerView.2.1
                        @Override // com.tkay.basead.mraid.d.a
                        public final void a() {
                            String unused = MraidContainerView.h;
                            MraidContainerView.a(MraidContainerView.this);
                            MraidContainerView.this.b();
                            MraidContainerView.this.f();
                        }

                        @Override // com.tkay.basead.mraid.d.a
                        public final void a(e eVar) {
                            MraidContainerView.a(MraidContainerView.this);
                            String unused = MraidContainerView.h;
                            new StringBuilder("onFailed: ").append(eVar.c());
                            MraidContainerView.this.c();
                            MraidContainerView.this.f();
                        }
                    });
                }
            });
        }
    }

    public void fireMraidIsViewable(boolean z) {
        try {
            if (!this.l || this.f == null) {
                return;
            }
            if (z) {
                com.tkay.expressad.mbbanner.a.a.a.a(this.f, true);
            } else {
                com.tkay.expressad.mbbanner.a.a.a.a(this.f, false);
            }
        } catch (Throwable unused) {
        }
    }

    public void setNeedRegisterVolumeChangeReceiver(boolean z) {
        this.j = z;
    }

    public void fireAudioVolumeChange(boolean z) {
        try {
            if (!this.l || this.f == null) {
                return;
            }
            if (z) {
                CallMraidJS.getInstance().fireAudioVolumeChange(this.f, 0.0d);
            } else {
                CallMraidJS.getInstance().fireAudioVolumeChange(this.f, 1.0d);
            }
        } catch (Exception unused) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        if (this.e == null) {
            ClickToReLoadView clickToReLoadView = new ClickToReLoadView(getContext());
            this.e = clickToReLoadView;
            clickToReLoadView.setListener(new ClickToReLoadView.a() { // from class: com.tkay.basead.ui.MraidContainerView.3
                @Override // com.tkay.basead.ui.ClickToReLoadView.a
                public final void a() {
                    MraidContainerView.this.loadMraidWebView();
                }
            });
        }
        addView(this.e, new FrameLayout.LayoutParams(-1, -1));
    }

    private void d() {
        ClickToReLoadView clickToReLoadView = this.e;
        if (clickToReLoadView != null) {
            removeView(clickToReLoadView);
        }
    }

    private void e() {
        b bVar = this.d;
        if (bVar != null) {
            bVar.b();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        b bVar = this.d;
        if (bVar != null) {
            bVar.c();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.i = true;
        g();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        this.i = false;
    }

    @Override // android.view.View
    public void setVisibility(int i) {
        super.setVisibility(i);
        if (this.i) {
            g();
        }
    }

    private void g() {
        if (this.b.V()) {
            return;
        }
        loadMraidWebView();
    }

    public void release() {
        try {
            if (this.l && this.f != null) {
                u.a(this.f);
                this.f.release();
                com.tkay.core.common.res.d.a(m.a().f()).a(this.c, this.f5794a);
            }
            u.a(this);
        } catch (Throwable unused) {
        }
    }
}
