package com.tkay.banner.a;

import android.content.Context;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.banner.unitgroup.api.CustomBannerEventListener;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import java.lang.ref.WeakReference;

public final class b implements CustomBannerEventListener {
    WeakReference<e> a;
    CustomBannerAdapter b;
    boolean c;

    public b(e eVar, CustomBannerAdapter customBannerAdapter, boolean z) {
        this.c = false;
        this.a = new WeakReference<>(eVar);
        this.b = customBannerAdapter;
        this.c = z;
    }

    @Override
    public final void onBannerAdClose() {
        if (this.b != null) {
            e eVar = this.a.get();
            if (eVar != null) {
                eVar.onBannerClose(this.b);
            }
            com.tkay.core.common.f.d trackingInfo = this.b.getTrackingInfo();
            g.a(trackingInfo, f.i.e, f.i.l, "");
            if (trackingInfo != null) {
                com.tkay.core.common.k.c.a(trackingInfo, false);
            }
        }
    }

    @Override
    public final void onBannerAdShow() {
        if (this.b != null) {
            e eVar = this.a.get();
            if (eVar != null) {
                eVar.onBannerShow(this.b, this.c);
            }
            com.tkay.core.common.f.d trackingInfo = this.b.getTrackingInfo();
            g.a(trackingInfo, f.i.c, f.i.l, "");
            com.tkay.core.common.k.a.a(m.a().f()).a(4, trackingInfo, this.b.getUnitGroupInfo());
        }
    }

    @Override
    public final void onBannerAdClicked() {
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customBannerAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(6, trackingInfo);
            g.a(trackingInfo, f.i.d, f.i.l, "");
            e eVar = this.a.get();
            if (eVar != null) {
                eVar.onBannerClicked(this.b);
            }
        }
    }

    @Override
    public final void onDeeplinkCallback(boolean z) {
        e eVar = this.a.get();
        if (eVar != null) {
            eVar.onDeeplinkCallback(this.b, z);
        }
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            g.a(customBannerAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        e eVar = this.a.get();
        if (eVar != null) {
            eVar.onDownloadConfirm(context, this.b, tYNetworkConfirmInfo);
        }
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            g.a(customBannerAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
    }
}
