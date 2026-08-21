package com.tkay.basead.d;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.d.b;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseATActivity;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class f extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5656a = f.class.getSimpleName();

    public f(Context context, b.a aVar, com.tkay.core.common.f.i iVar) {
        super(context, aVar, iVar);
    }

    public final void a(Activity activity, Map<String, Object> map) {
        try {
            if (!c()) {
                if (this.h != null) {
                    this.h.onShowFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.x));
                }
                this.e = null;
                return;
            }
            final String string = map.get("extra_scenario").toString();
            int iIntValue = ((Integer) map.get(com.tkay.basead.f.c.j)).intValue();
            final String strA = a(this.e);
            if (this.f instanceof com.tkay.expressad.reward.b.a) {
                ((com.tkay.expressad.reward.b.a) this.f).a(new com.tkay.expressad.videocommon.d.a() { // from class: com.tkay.basead.d.f.1
                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void a() {
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void a(String str) {
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void b() {
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void e() {
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void f() {
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void c() {
                        if (f.this.h != null) {
                            f.this.h.onAdShow();
                        }
                        if (f.this.h != null && (f.this.h instanceof com.tkay.basead.e.g)) {
                            ((com.tkay.basead.e.g) f.this.h).onVideoAdPlayStart();
                        }
                        f.this.e = null;
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void a(boolean z, String str, float f) {
                        if ((z || (f.this.c.m != null && f.this.c.m.f() == 1)) && f.this.h != null && (f.this.h instanceof com.tkay.basead.e.g)) {
                            ((com.tkay.basead.e.g) f.this.h).onRewarded();
                        }
                        if (f.this.h != null) {
                            f.this.h.onAdClosed();
                        }
                        f.this.d();
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void b(String str) {
                        if (f.this.h != null) {
                            f.this.h.onShowFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.k, str));
                        }
                        f.this.e = null;
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void a(final com.tkay.expressad.foundation.d.c cVar) {
                        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.basead.d.f.1.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                f.this.a(cVar, string);
                            }
                        });
                    }

                    @Override // com.tkay.expressad.videocommon.d.a
                    public final void d() {
                        if (f.this.h == null || !(f.this.h instanceof com.tkay.basead.e.g)) {
                            return;
                        }
                        ((com.tkay.basead.e.g) f.this.h).onVideoAdPlayEnd();
                    }
                });
                ((com.tkay.expressad.reward.b.a) this.f).a(activity, "", "", "", this.c);
                return;
            }
            com.tkay.basead.e.b.a().a(strA, new b.InterfaceC0396b() { // from class: com.tkay.basead.d.f.2
                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a() {
                    if (f.this.h != null) {
                        f.this.h.onAdShow();
                    }
                    f.this.e = null;
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(com.tkay.basead.c.e eVar) {
                    if (f.this.h != null) {
                        f.this.h.onShowFailed(eVar);
                    }
                    f.this.e = null;
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void b() {
                    if (f.this.h == null || !(f.this.h instanceof com.tkay.basead.e.g)) {
                        return;
                    }
                    ((com.tkay.basead.e.g) f.this.h).onVideoAdPlayStart();
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void c() {
                    if (f.this.h == null || !(f.this.h instanceof com.tkay.basead.e.g)) {
                        return;
                    }
                    ((com.tkay.basead.e.g) f.this.h).onVideoAdPlayEnd();
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void d() {
                    if (f.this.h == null || !(f.this.h instanceof com.tkay.basead.e.g)) {
                        return;
                    }
                    ((com.tkay.basead.e.g) f.this.h).onRewarded();
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void e() {
                    String str = f.f5656a;
                    if (f.this.h != null) {
                        f.this.h.onAdClosed();
                    }
                    com.tkay.basead.e.b.a().b(strA);
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(int i) {
                    String str = f.f5656a;
                    if (f.this.h != null) {
                        f.this.h.onAdClick(i);
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(boolean z) {
                    String str = f.f5656a;
                    if (f.this.h != null) {
                        f.this.h.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
            aVar.c = this.e;
            aVar.d = strA;
            aVar.f5983a = 1;
            aVar.h = this.c;
            aVar.e = iIntValue;
            aVar.b = string;
            BaseATActivity.a(activity, aVar);
        } catch (Exception e) {
            e.printStackTrace();
            if (this.h != null) {
                this.h.onShowFailed(com.tkay.basead.c.f.a("-9999", e.getMessage()));
            }
            this.e = null;
        }
    }

    @Override // com.tkay.basead.d.b
    public final void b() {
        super.b();
        this.h = null;
    }
}
