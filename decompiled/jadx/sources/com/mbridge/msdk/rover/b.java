package com.mbridge.msdk.rover;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.z;
import java.util.ArrayList;

/* JADX INFO: compiled from: RoverController.java */
/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static b d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Context f3956a;
    long b = 259200000;
    private Handler c = new Handler() { // from class: com.mbridge.msdk.rover.b.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            b.a(b.this);
        }
    };

    private b() {
    }

    public final void a(Context context) {
        this.f3956a = context;
    }

    public static b a() {
        if (d == null) {
            synchronized (b.class) {
                if (d == null) {
                    d = new b();
                }
            }
        }
        return d;
    }

    public final void b() {
        if (this.f3956a == null) {
            z.d("RoverController", "Context is null");
            return;
        }
        if (c()) {
            Object objB = ag.b(this.f3956a, a.d, 0L);
            long jLongValue = objB instanceof Long ? ((Long) objB).longValue() : 1L;
            long jCurrentTimeMillis = System.currentTimeMillis();
            int iS = a.c;
            com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
            if (aVarB != null && aVarB.S() > 0) {
                iS = (int) aVarB.S();
            }
            if (jCurrentTimeMillis - jLongValue > ((long) iS) && jLongValue != 1) {
                this.c.sendEmptyMessageDelayed(0, 30000L);
            }
        }
    }

    private boolean c() {
        Context context = this.f3956a;
        if (context != null) {
            try {
                long j = context.getPackageManager().getPackageInfo(this.f3956a.getPackageName(), 0).lastUpdateTime;
                long jCurrentTimeMillis = System.currentTimeMillis();
                z = jCurrentTimeMillis - j > this.b;
                z.a("", "currentTime=" + jCurrentTimeMillis + ",lastUpdateTime:" + j);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return z;
    }

    static /* synthetic */ void a(b bVar) {
        ag.a(bVar.f3956a, a.d, Long.valueOf(System.currentTimeMillis()));
        new g(bVar.f3956a).get(1, com.mbridge.msdk.foundation.same.net.f.d.a().A, new com.mbridge.msdk.foundation.same.net.g.d(), new h() { // from class: com.mbridge.msdk.rover.b.2
            @Override // com.mbridge.msdk.rover.h
            public final void a(RoverCampaignUnit roverCampaignUnit) {
                ArrayList<CampaignEx> arrayList = roverCampaignUnit.ads;
                if (arrayList == null || arrayList.size() <= 0) {
                    return;
                }
                for (CampaignEx campaignEx : arrayList) {
                    if (campaignEx != null) {
                        new c(roverCampaignUnit, campaignEx, b.this.f3956a);
                    }
                }
            }
        });
    }
}
