package com.tkay.basead.f;

import android.app.Activity;
import android.content.Context;
import com.tkay.basead.e.b;
import com.tkay.basead.ui.BaseATActivity;
import com.tkay.core.common.f.i;
import java.util.Map;

public class d extends c {
    public static final String a = d.class.getSimpleName();
    private com.tkay.basead.e.g k;

    public d(Context context, i iVar, String str, boolean z) {
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
                public final void d() {
                }

                @Override
                public final void a() {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onAdShow();
                    }
                }

                @Override
                public final void a(com.tkay.basead.c.e eVar) {
                    String str2 = d.a;
                    new StringBuilder("onVideoShowFailed.......").append(eVar.c());
                    if (d.this.k != null) {
                        d.this.k.onShowFailed(eVar);
                    }
                }

                @Override
                public final void b() {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onVideoAdPlayStart();
                    }
                }

                @Override
                public final void c() {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onVideoAdPlayEnd();
                    }
                }

                @Override
                public final void e() {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onAdClosed();
                    }
                    com.tkay.basead.e.b.a().b(str);
                }

                @Override
                public final void a(int i) {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onAdClick(i);
                    }
                }

                @Override
                public final void a(boolean z) {
                    String str2 = d.a;
                    if (d.this.k != null) {
                        d.this.k.onDeeplinkCallback(z);
                    }
                }
            });
            com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
            aVar.c = this.g;
            aVar.d = str;
            aVar.a = 3;
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
