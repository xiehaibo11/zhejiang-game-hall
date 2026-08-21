package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseATActivity;
import com.tkay.core.common.f.i;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class f extends c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5692a = f.class.getSimpleName();
    private com.tkay.basead.e.g k;

    public f(Context context, i iVar, String str, boolean z) {
        super(context, iVar, str, z);
    }

    public final void a(com.tkay.basead.e.g gVar) {
        this.k = gVar;
    }

    @Override // com.tkay.basead.f.a
    public final void a(Activity activity, Map<String, Object> map) {
        try {
            if (this.c == null) {
                if (this.k != null) {
                    this.k.onShowFailed(com.tkay.basead.c.f.a(com.tkay.basead.c.f.i, com.tkay.basead.c.f.B));
                    return;
                }
                return;
            }
            map.get(c.h);
            String string = map.get("extra_scenario").toString();
            int iIntValue = ((Integer) map.get(c.j)).intValue();
            final String str = this.d.b + this.e + System.currentTimeMillis();
            com.tkay.basead.e.b.a().a(str, new b.InterfaceC0396b() { // from class: com.tkay.basead.f.f.1
                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a() {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onAdShow();
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(com.tkay.basead.c.e eVar) {
                    String str2 = f.f5692a;
                    new StringBuilder("onVideoShowFailed.......").append(eVar.c());
                    if (f.this.k != null) {
                        f.this.k.onShowFailed(eVar);
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void b() {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onVideoAdPlayStart();
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void c() {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onVideoAdPlayEnd();
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void d() {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onRewarded();
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void e() {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onAdClosed();
                    }
                    com.tkay.basead.e.b.a().b(str);
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(int i) {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onAdClick(i);
                    }
                }

                @Override // com.tkay.basead.e.b.InterfaceC0396b
                public final void a(boolean z) {
                    String str2 = f.f5692a;
                    if (f.this.k != null) {
                        f.this.k.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
            aVar.c = this.g;
            aVar.d = str;
            aVar.f5983a = 1;
            aVar.h = this.d;
            aVar.e = iIntValue;
            aVar.b = string;
            BaseATActivity.a(activity, aVar);
        } catch (Exception e) {
            e.printStackTrace();
            com.tkay.basead.e.g gVar = this.k;
            if (gVar != null) {
                gVar.onShowFailed(com.tkay.basead.c.f.a("-9999", e.getMessage()));
            }
        }
    }
}
