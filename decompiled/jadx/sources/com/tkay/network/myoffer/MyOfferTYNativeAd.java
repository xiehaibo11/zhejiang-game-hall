package com.tkay.network.myoffer;

import android.content.Context;
import android.view.View;
import com.tkay.basead.b;
import com.tkay.basead.e.a;
import com.tkay.basead.f.e;
import com.tkay.core.common.f.d;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class MyOfferTYNativeAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    e f7655a;
    Context b;
    View c;

    public MyOfferTYNativeAd(Context context, e eVar) {
        this.b = context.getApplicationContext();
        this.f7655a = eVar;
        eVar.a(new a() { // from class: com.tkay.network.myoffer.MyOfferTYNativeAd.1
            @Override // com.tkay.basead.e.a
            public final void onAdClosed() {
            }

            @Override // com.tkay.basead.e.a
            public final void onDeeplinkCallback(boolean z) {
            }

            @Override // com.tkay.basead.e.a
            public final void onShowFailed(com.tkay.basead.c.e eVar2) {
            }

            @Override // com.tkay.basead.e.a
            public final void onAdShow() {
                MyOfferTYNativeAd.this.notifyAdImpression();
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClick(int i) {
                d detail = MyOfferTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                MyOfferTYNativeAd.this.notifyAdClicked();
            }
        });
        setNetworkInfoMap(b.a(this.f7655a.e()));
        setAdChoiceIconUrl(this.f7655a.j());
        setTitle(this.f7655a.b());
        setDescriptionText(this.f7655a.f());
        setIconImageUrl(this.f7655a.h());
        setMainImageUrl(this.f7655a.i());
        setCallToActionText(this.f7655a.g());
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        if (this.c == null) {
            this.c = e.k();
        }
        return this.c;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        if (this.f7655a != null) {
            List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
            if (clickViewList != null && clickViewList.size() > 0) {
                this.f7655a.a(view, clickViewList);
            } else {
                this.f7655a.a(view);
            }
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
        e eVar = this.f7655a;
        if (eVar != null) {
            eVar.l();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        e eVar = this.f7655a;
        if (eVar != null) {
            eVar.a((a) null);
            this.f7655a.m();
        }
    }
}
