package com.tkay.basead.ui;

import android.content.Context;
import android.view.MotionEvent;
import android.view.View;
import android.widget.RelativeLayout;
import com.tkay.basead.a.a;
import com.tkay.basead.a.c;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.r;
import com.tkay.core.common.f.z;
import com.tkay.core.common.l.a.c;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

/* JADX INFO: loaded from: classes3.dex */
public abstract class BaseATView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private com.tkay.basead.a.a f5727a;
    String b;
    i c;
    h d;
    c e;
    com.tkay.basead.a.c f;
    volatile boolean g;
    boolean h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
    String q;
    List<View> r;
    View s;

    protected abstract void a();

    protected abstract void a(int i);

    protected abstract void a(boolean z);

    protected void d() {
    }

    protected abstract void e();

    protected void f() {
    }

    protected void g() {
    }

    public BaseATView(Context context, i iVar, h hVar, String str) {
        super(context);
        this.b = "BaseATView";
        this.c = iVar;
        this.d = hVar;
        this.q = str;
        this.r = new ArrayList();
        if (!this.d.L() && this.c.m.F() != 1) {
            this.f5727a = new com.tkay.basead.a.a(this, this.c, new a.InterfaceC0383a() { // from class: com.tkay.basead.ui.BaseATView.1
                /* JADX WARN: Type inference fix 'apply assigned field type' failed
                java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
                	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
                	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
                	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
                	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
                	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
                	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
                	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
                 */
                @Override // com.tkay.basead.a.a.InterfaceC0383a
                public final void a(int i) {
                    if (BaseATView.this.s != null) {
                        BaseATView baseATView = BaseATView.this;
                        baseATView.a(baseATView.s);
                    } else {
                        BaseATView baseATView2 = BaseATView.this;
                        baseATView2.a(baseATView2);
                    }
                    BaseATView.this.b(i);
                }
            });
        }
        d();
        a();
        setFocusable(true);
        setClickable(true);
    }

    public BaseATView(Context context, i iVar, h hVar) {
        this(context, iVar, hVar, "");
    }

    public BaseATView(Context context) {
        super(context);
        this.b = "BaseATView";
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public synchronized void h() {
        b();
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public void b(final int i) {
        b();
        k();
        if (this.f == null) {
            this.f = new com.tkay.basead.a.c(getContext(), this.c, this.d);
        }
        if (this.f.a()) {
            return;
        }
        this.f.a(new c.b() { // from class: com.tkay.basead.ui.BaseATView.2
            @Override // com.tkay.basead.a.c.b
            public final void a() {
                BaseATView.this.a(i);
                BaseATView baseATView = BaseATView.this;
                if ((baseATView.d instanceof z) && baseATView.c.f == 67) {
                    if (((z) baseATView.d).a(true, false)) {
                        com.tkay.core.common.d.c.a(baseATView.getContext()).a(baseATView.d.p(), 1, 0);
                    }
                    if (((z) baseATView.d).a(false, false)) {
                        com.tkay.core.common.d.b.a(baseATView.getContext()).a(baseATView.d.q(), 1, 0);
                    }
                }
            }

            @Override // com.tkay.basead.a.c.b
            public final void b() {
                BaseATView.this.f();
            }

            @Override // com.tkay.basead.a.c.b
            public final void c() {
                BaseATView.this.g();
            }

            @Override // com.tkay.basead.a.c.b
            public final void a(boolean z) {
                BaseATView.this.a(z);
            }
        });
        com.tkay.basead.c.i iVarI = i();
        iVarI.g = j();
        this.f.a(iVarI);
    }

    protected final void a(final int i, final Runnable runnable) {
        if (i > 0) {
            getContext();
            this.e = new com.tkay.core.common.l.a.c(i);
        } else {
            getContext();
            this.e = new com.tkay.core.common.l.a.c();
        }
        this.e.a(this, new com.tkay.core.common.l.a.a() { // from class: com.tkay.basead.ui.BaseATView.3
            @Override // com.tkay.core.common.l.a.a, com.tkay.core.common.l.a.b
            public final void recordImpression(View view) {
                Runnable runnable2 = runnable;
                if (runnable2 != null) {
                    runnable2.run();
                }
            }

            @Override // com.tkay.core.common.l.a.a, com.tkay.core.common.l.a.b
            public final int getImpressionMinTimeViewed() {
                int i2 = i;
                if (i2 > 0) {
                    return i2;
                }
                return 50;
            }
        });
    }

    private void b() {
        if (this.g) {
            return;
        }
        this.g = true;
        h hVar = this.d;
        if (hVar instanceof r) {
            com.tkay.basead.f.a.b.a(getContext()).a((r) this.d);
        } else if (hVar instanceof z) {
            com.tkay.basead.d.c.c.a().a(getContext(), com.tkay.basead.d.c.c.a(this.c.b, this.c.c), this.d, this.c.m);
        }
        if ((this.d instanceof z) && this.c.f == 67) {
            if (((z) this.d).a(true, true)) {
                com.tkay.core.common.d.c.a(getContext()).a(this.d.p(), 0, 1);
            }
            if (((z) this.d).a(false, true)) {
                com.tkay.core.common.d.b.a(getContext()).a(this.d.q(), 0, 1);
            }
        }
        e();
        o();
    }

    private void c() {
        if ((this.d instanceof z) && this.c.f == 67) {
            if (((z) this.d).a(true, false)) {
                com.tkay.core.common.d.c.a(getContext()).a(this.d.p(), 1, 0);
            }
            if (((z) this.d).a(false, false)) {
                com.tkay.core.common.d.b.a(getContext()).a(this.d.q(), 1, 0);
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        k();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    protected void destroy() {
        k();
        com.tkay.basead.a.c cVar = this.f;
        if (cVar != null) {
            cVar.d();
        }
        com.tkay.core.common.l.a.c cVar2 = this.e;
        if (cVar2 != null) {
            cVar2.b();
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.i = (int) motionEvent.getRawX();
            this.j = (int) motionEvent.getRawY();
            this.m = (int) motionEvent.getX();
            this.n = (int) motionEvent.getY();
        } else if (action == 1 || action == 3) {
            this.k = (int) motionEvent.getRawX();
            this.l = (int) motionEvent.getRawY();
            this.o = (int) motionEvent.getX();
            this.p = (int) motionEvent.getY();
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    protected com.tkay.basead.c.i i() {
        com.tkay.basead.c.i iVar = new com.tkay.basead.c.i(this.c.d, "");
        iVar.e = getWidth();
        iVar.f = getHeight();
        return iVar;
    }

    protected final com.tkay.basead.c.a j() {
        com.tkay.basead.c.a aVar = new com.tkay.basead.c.a();
        aVar.f5608a = this.i;
        aVar.b = this.j;
        aVar.c = this.k;
        aVar.d = this.l;
        aVar.e = this.m;
        aVar.f = this.n;
        aVar.g = this.o;
        aVar.h = this.p;
        return aVar;
    }

    private void o() {
        com.tkay.basead.a.a aVar = this.f5727a;
        if (aVar != null) {
            aVar.a();
        }
    }

    protected final void k() {
        com.tkay.basead.a.a aVar = this.f5727a;
        if (aVar != null) {
            aVar.b();
            this.f5727a = null;
        }
    }

    protected final void l() {
        com.tkay.basead.a.a aVar = this.f5727a;
        if (aVar != null) {
            aVar.c();
        }
    }

    private void b(View view) {
        this.s = view;
    }

    protected final void a(View view) {
        int[] iArr = new int[2];
        view.getLocationInWindow(iArr);
        int i = iArr[0];
        int i2 = iArr[1];
        int width = view.getWidth();
        int height = view.getHeight();
        int iC = c(width);
        int iC2 = c(height);
        int i3 = i + iC;
        this.i = i3;
        this.j = i2 + iC2;
        this.m = iC;
        this.n = iC2;
        this.k = i3 + ((int) (Math.random() * 15.0d));
        int iRandom = iC + i2 + ((int) (Math.random() * 15.0d));
        this.l = iRandom;
        this.o = this.k - i;
        this.p = iRandom - i2;
    }

    private static int c(int i) {
        Random random = new Random();
        if (i <= 0) {
            return 0;
        }
        double d = i;
        int i2 = (int) (0.1d * d);
        return random.nextInt((((int) (d * 0.9d)) - i2) + 1) + i2;
    }

    protected boolean m() {
        i iVar;
        return com.tkay.expressad.shake.a.a().b() && (iVar = this.c) != null && iVar.m != null && this.c.m.M() == 1;
    }

    protected float a(a aVar, int i) {
        float f;
        float f2 = 1.0f;
        if (aVar != null) {
            if (i == 2) {
                f = 1.5f;
            } else if (i != 3) {
                if (i == 4) {
                    f = 0.5f;
                }
                aVar.setClickAreaScaleFactor(f2);
            } else {
                f = 0.75f;
            }
            f2 = f;
            aVar.setClickAreaScaleFactor(f2);
        }
        return f2;
    }

    protected final boolean n() {
        h hVar = this.d;
        return hVar != null && hVar.g();
    }
}
