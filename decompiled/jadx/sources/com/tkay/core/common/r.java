package com.tkay.core.common;

import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.sigmob.sdk.base.mta.PointCategory;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6285a = r.class.getSimpleName();
    private static volatile r b;
    private Context c;

    private r(Context context) {
        this.c = context.getApplicationContext();
    }

    public static r a(Context context) {
        if (b == null) {
            synchronized (r.class) {
                if (b == null) {
                    b = new r(context);
                }
            }
        }
        return b;
    }

    public final void a(final int i, final com.tkay.core.common.f.e eVar, final com.tkay.core.c.a aVar) {
        try {
            com.tkay.core.common.b.m.a();
            com.tkay.core.common.b.m.b(new Runnable() { // from class: com.tkay.core.common.r.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        if (com.tkay.core.c.e.a(com.tkay.core.common.b.m.a().f()).a(eVar.b.W()) == null) {
                            return;
                        }
                        String strX = ((com.tkay.core.common.f.d) eVar.b).x();
                        if (TextUtils.isEmpty(strX)) {
                            return;
                        }
                        String str = null;
                        int i2 = i;
                        if (i2 == 4) {
                            z = ((com.tkay.core.common.f.d) eVar.b).t() == 1;
                            str = aVar.M().get(PointCategory.SHOW);
                        } else if (i2 == 6) {
                            z = ((com.tkay.core.common.f.d) eVar.b).u() == 1;
                            str = aVar.M().get("click");
                        } else {
                            switch (i2) {
                                case 18:
                                case 19:
                                case 20:
                                    z = ((com.tkay.core.common.f.d) eVar.b).b() == 1;
                                    str = aVar.M().get("dl");
                                    break;
                            }
                        }
                        if (!z || TextUtils.isEmpty(str)) {
                            return;
                        }
                        JSONObject jSONObjectA = com.tkay.core.common.l.m.a();
                        String str2 = r.f6285a;
                        new StringBuilder("common -> ").append(jSONObjectA.toString());
                        String str3 = r.f6285a;
                        new StringBuilder("data -> ").append(eVar.a().toString());
                        r.a(r.this, i, str, jSONObjectA.toString(), eVar.a().toString(), strX, (com.tkay.core.common.f.d) eVar.b);
                    } catch (Throwable unused) {
                    }
                }
            });
        } catch (Throwable unused) {
        }
    }

    public final void a(final com.tkay.core.c.a aVar) {
        com.tkay.core.common.b.m.a();
        com.tkay.core.common.b.m.d(new Runnable() { // from class: com.tkay.core.common.r.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    if (r.this.c == null) {
                        return;
                    }
                    String packageName = r.this.c.getPackageName();
                    String str = "";
                    for (int i = 0; i < 2; i++) {
                        str = str + packageName;
                    }
                    String strC = com.tkay.core.common.l.f.c(str);
                    Intent intent = new Intent(strC);
                    intent.putExtra(strC, aVar.H());
                    intent.putExtra("data", com.tkay.core.common.l.m.a().toString());
                    intent.putExtra("denied", com.tkay.core.common.b.m.a().e());
                    intent.setPackage(packageName);
                    com.tkay.core.common.b.j.a(r.this.c).a(intent);
                } catch (Throwable unused) {
                }
            }
        });
    }

    private void a(int i, String str, String str2, String str3, String str4, com.tkay.core.common.f.d dVar) {
        if (this.c == null) {
            return;
        }
        try {
            Intent intent = new Intent(str);
            intent.putExtra("common", str2);
            intent.putExtra("data", str3);
            intent.putExtra("adsourceId", str4);
            intent.putExtra("networkType", String.valueOf(dVar.H()));
            intent.putExtra("format", dVar.Y());
            intent.putExtra("showid", dVar.l());
            intent.putExtra("tktype", i);
            intent.setPackage(this.c.getPackageName());
            com.tkay.core.common.b.j.a(this.c).a(intent);
        } catch (Throwable unused) {
        }
    }

    static /* synthetic */ void a(r rVar, int i, String str, String str2, String str3, String str4, com.tkay.core.common.f.d dVar) {
        if (rVar.c != null) {
            try {
                Intent intent = new Intent(str);
                intent.putExtra("common", str2);
                intent.putExtra("data", str3);
                intent.putExtra("adsourceId", str4);
                intent.putExtra("networkType", String.valueOf(dVar.H()));
                intent.putExtra("format", dVar.Y());
                intent.putExtra("showid", dVar.l());
                intent.putExtra("tktype", i);
                intent.setPackage(rVar.c.getPackageName());
                com.tkay.core.common.b.j.a(rVar.c).a(intent);
            } catch (Throwable unused) {
            }
        }
    }
}
