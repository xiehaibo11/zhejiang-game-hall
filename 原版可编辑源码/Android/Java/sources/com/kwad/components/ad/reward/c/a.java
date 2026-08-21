package com.kwad.components.ad.reward.c;

import android.content.Context;
import com.kwad.components.ad.reward.KSRewardVideoActivityProxy;
import com.kwad.components.ad.reward.j;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.v;
import java.lang.ref.WeakReference;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public class a {
    private static volatile a ro;
    private j qx;
    private b rp;
    private volatile boolean rq = false;
    private volatile boolean rr = false;
    private List<WeakReference<com.kwad.components.core.webview.jshandler.e>> rs = new CopyOnWriteArrayList();

    private a() {
    }

    public static a gW() {
        if (ro == null) {
            synchronized (a.class) {
                if (ro == null) {
                    ro = new a();
                }
            }
        }
        return ro;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0010  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized boolean gY() {
        boolean z;
        if (this.rp != null) {
            z = this.rp.rw == b.rt;
        }
        return z;
    }

    public final void O(Context context) {
        boolean zGY = gY();
        com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "checkStatusAndToast isCurrentHadExtra: " + zGY + ", hadToast: " + this.rr);
        if (this.rr || !zGY) {
            return;
        }
        this.rr = true;
        v.L(context, "恭喜获得第2份奖励");
    }

    public final void a(com.kwad.components.core.webview.jshandler.e eVar) {
        com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "addGetNativeHandler: " + eVar);
        if (eVar != null) {
            this.rs.add(new WeakReference<>(eVar));
        }
    }

    public final synchronized void a(AdTemplate adTemplate, b bVar) {
        if (adTemplate == null) {
            return;
        }
        com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "updateExtraReward: " + bVar.toJson().toString());
        this.rp = bVar;
        if (bVar.rw == b.rt && !this.rq) {
            this.rq = true;
            c.a(this.rp, KSRewardVideoActivityProxy.a.A(adTemplate.getUniqueId()));
            com.kwad.sdk.core.report.a.aH(adTemplate);
        }
        for (WeakReference<com.kwad.components.core.webview.jshandler.e> weakReference : this.rs) {
            if (weakReference.get() == null) {
                this.rs.remove(weakReference);
            } else {
                b bVarGX = gX();
                com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "GetNativeDataHandler callback: " + bVarGX.toJson().toString());
                weakReference.get().a(bVarGX);
            }
        }
    }

    public final synchronized void d(AdTemplate adTemplate, int i) {
        com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "updateExtraReward: " + i);
        if (this.qx != null && this.qx.gc() && i == b.STATUS_NONE) {
            com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "updateExtraReward: cant update to status 2");
            return;
        }
        b bVarGX = gW().gX();
        bVarGX.L(i);
        gW().a(adTemplate, bVarGX);
    }

    public final synchronized b gX() {
        if (this.rp == null) {
            b bVarHa = c.ha();
            this.rp = bVarHa;
            bVarHa.rw = 0;
        }
        com.kwad.sdk.core.e.c.d("CurrentExtraRewardHolder", "getCurrentExtraReward: " + this.rp.rw);
        return this.rp;
    }

    public final synchronized void reset() {
        this.rp = null;
        this.rr = false;
        this.rq = false;
        this.qx = null;
    }

    public final void setCallerContext(j jVar) {
        this.qx = jVar;
    }
}
