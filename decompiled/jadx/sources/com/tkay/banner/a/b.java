package com.tkay.banner.a;

import android.content.Context;
import com.tkay.banner.unitgroup.api.CustomBannerAdapter;
import com.tkay.banner.unitgroup.api.CustomBannerEventListener;
import com.tkay.core.api.TYNetworkConfirmInfo;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.g;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements CustomBannerEventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WeakReference<e> f5553a;
    CustomBannerAdapter b;
    boolean c;

    public b(e eVar, CustomBannerAdapter customBannerAdapter, boolean z) {
        this.c = false;
        this.f5553a = new WeakReference<>(eVar);
        this.b = customBannerAdapter;
        this.c = z;
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerEventListener
    public final void onBannerAdClose() {
        if (this.b != null) {
            e eVar = this.f5553a.get();
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

    @Override // com.tkay.banner.unitgroup.api.CustomBannerEventListener
    public final void onBannerAdShow() {
        if (this.b != null) {
            e eVar = this.f5553a.get();
            if (eVar != null) {
                eVar.onBannerShow(this.b, this.c);
            }
            com.tkay.core.common.f.d trackingInfo = this.b.getTrackingInfo();
            g.a(trackingInfo, f.i.c, f.i.l, "");
            com.tkay.core.common.k.a.a(m.a().f()).a(4, trackingInfo, this.b.getUnitGroupInfo());
        }
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerEventListener
    public final void onBannerAdClicked() {
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            com.tkay.core.common.f.d trackingInfo = customBannerAdapter.getTrackingInfo();
            com.tkay.core.common.k.a.a(m.a().f()).a(6, trackingInfo);
            g.a(trackingInfo, f.i.d, f.i.l, "");
            e eVar = this.f5553a.get();
            if (eVar != null) {
                eVar.onBannerClicked(this.b);
            }
        }
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerEventListener
    public final void onDeeplinkCallback(boolean z) {
        e eVar = this.f5553a.get();
        if (eVar != null) {
            eVar.onDeeplinkCallback(this.b, z);
        }
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            g.a(customBannerAdapter.getTrackingInfo(), f.i.i, z ? f.i.l : f.i.m, "");
        }
    }

    @Override // com.tkay.banner.unitgroup.api.CustomBannerEventListener
    public final void onDownloadConfirm(Context context, TYNetworkConfirmInfo tYNetworkConfirmInfo) {
        e eVar = this.f5553a.get();
        if (eVar != null) {
            eVar.onDownloadConfirm(context, this.b, tYNetworkConfirmInfo);
        }
        CustomBannerAdapter customBannerAdapter = this.b;
        if (customBannerAdapter != null) {
            g.a(customBannerAdapter.getTrackingInfo(), f.i.j, f.i.l, "");
        }
    }
}
