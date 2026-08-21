package com.mbridge.msdk.rover;

import android.content.Context;
import android.os.Looper;
import android.text.TextUtils;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.click.CommonJumpLoader;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.t;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: RoverDoing.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static String b = "0";
    private CampaignEx d;
    private Context e;
    private List<e> c = new ArrayList();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    d f3959a = new d() { // from class: com.mbridge.msdk.rover.c.1
        @Override // com.mbridge.msdk.rover.d
        public final void a(String str, int i, int i2, int i3, String str2, String str3) {
            c.a(c.this, str, i, i2, i3, str2, str3);
        }

        @Override // com.mbridge.msdk.rover.d
        public final void b(String str, int i, int i2, int i3, String str2, String str3) {
            c.a(c.this, str, i, i2, i3, str2, str3);
        }

        @Override // com.mbridge.msdk.rover.d
        public final void c(String str, int i, int i2, int i3, String str2, String str3) {
            c.a(c.this, str, i, i2, i3, str2, str3);
        }
    };
    private Map<String, String> f = new HashMap();

    public c(RoverCampaignUnit roverCampaignUnit, CampaignEx campaignEx, Context context) {
        CommonJumpLoader commonJumpLoader = new CommonJumpLoader(context, true);
        this.d = campaignEx;
        this.e = context;
        commonJumpLoader.a("2", b, campaignEx, new com.mbridge.msdk.click.e() { // from class: com.mbridge.msdk.rover.c.3
            @Override // com.mbridge.msdk.click.e
            public final void a(Object obj) {
            }

            @Override // com.mbridge.msdk.click.e
            public final void b(Object obj) {
                if (c.this.d == null || c.this.d.getRoverIsPost() != 1) {
                    return;
                }
                c.b(c.this);
            }

            @Override // com.mbridge.msdk.click.e
            public final void a(Object obj, String str) {
                if (c.this.d == null || c.this.d.getRoverIsPost() != 1) {
                    return;
                }
                c.b(c.this);
            }
        }, this.f3959a);
    }

    static /* synthetic */ void a(c cVar, String str, int i, int i2, int i3, String str2, String str3) {
        try {
            if (cVar.f == null) {
                cVar.f = new HashMap();
            }
            if (cVar.f.containsKey(str)) {
                return;
            }
            cVar.f.put(str, null);
            if (TextUtils.isEmpty(str) || !str.contains("data:*/*;charset=utf-8;base64")) {
                e eVar = new e();
                eVar.a(str);
                eVar.a(i);
                eVar.b(i2);
                eVar.c(i3);
                eVar.b(t.a(str2));
                eVar.c(str3 == null ? "" : t.a(str3));
                if (cVar.c != null) {
                    cVar.c.add(eVar);
                    return;
                }
                ArrayList arrayList = new ArrayList();
                cVar.c = arrayList;
                arrayList.add(eVar);
            }
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
                e.printStackTrace();
            }
        }
    }

    static /* synthetic */ void b(c cVar) {
        if (cVar.e != null) {
            com.mbridge.msdk.foundation.same.report.d dVar = new com.mbridge.msdk.foundation.same.report.d(cVar.e);
            f fVar = new f() { // from class: com.mbridge.msdk.rover.c.2
                @Override // com.mbridge.msdk.rover.f
                public final void a() {
                }

                @Override // com.mbridge.msdk.rover.f
                public final void a(String str) {
                }
            };
            if (Looper.myLooper() != Looper.getMainLooper()) {
                Looper.prepare();
            }
            dVar.a(cVar.d, cVar.c, fVar);
            if (Looper.myLooper() != Looper.getMainLooper()) {
                Looper.loop();
            }
        }
    }
}
