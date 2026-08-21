package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseATActivity;
import com.tkay.core.common.f.i;
import java.util.Map;

public class f extends c {
    public static final String a = f.class.getSimpleName();
    private com.tkay.basead.e.g k;

    public f(Context context, i iVar, String str, boolean z) {
        super(context, iVar, str, z);
    }

    public final void a(com.tkay.basead.e.g gVar) {
        this.k = gVar;
    }

    @Override
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
            com.tkay.basead.e.b.a().a(str, new b.b() {
                @Override
                public final void a() {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onAdShow();
                    }
                }

                @Override
                public final void a(com.tkay.basead.c.e eVar) {
                    String str2 = f.a;
                    new StringBuilder("onVideoShowFailed.......").append(eVar.c());
                    if (f.this.k != null) {
                        f.this.k.onShowFailed(eVar);
                    }
                }

                @Override
                public final void b() {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onVideoAdPlayStart();
                    }
                }

                @Override
                public final void c() {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onVideoAdPlayEnd();
                    }
                }

                @Override
                public final void d() {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onRewarded();
                    }
                }

                @Override
                public final void e() {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onAdClosed();
                    }
                    com.tkay.basead.e.b.a().b(str);
                }

                @Override
                public final void a(int i) {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onAdClick(i);
                    }
                }

                @Override
                public final void a(boolean z) {
                    String str2 = f.a;
                    if (f.this.k != null) {
                        f.this.k.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
            aVar.c = this.g;
            aVar.d = str;
            aVar.a = 1;
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
