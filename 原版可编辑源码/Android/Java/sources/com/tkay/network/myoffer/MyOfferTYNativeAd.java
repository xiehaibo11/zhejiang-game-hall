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

public class MyOfferTYNativeAd extends CustomNativeAd {
    e a;
    Context b;
    View c;

    public MyOfferTYNativeAd(Context context, e eVar) {
        this.b = context.getApplicationContext();
        this.a = eVar;
        eVar.a(new a() {
            @Override
            public final void onAdClosed() {
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
            }

            @Override
            public final void onShowFailed(com.tkay.basead.c.e eVar2) {
            }

            @Override
            public final void onAdShow() {
                MyOfferTYNativeAd.this.notifyAdImpression();
            }

            @Override
            public final void onAdClick(int i) {
                d detail = MyOfferTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                MyOfferTYNativeAd.this.notifyAdClicked();
            }
        });
        setNetworkInfoMap(b.a(this.a.e()));
        setAdChoiceIconUrl(this.a.j());
        setTitle(this.a.b());
        setDescriptionText(this.a.f());
        setIconImageUrl(this.a.h());
        setMainImageUrl(this.a.i());
        setCallToActionText(this.a.g());
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        if (this.c == null) {
            this.c = e.k();
        }
        return this.c;
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        if (this.a != null) {
            List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
            if (clickViewList != null && clickViewList.size() > 0) {
                this.a.a(view, clickViewList);
            } else {
                this.a.a(view);
            }
        }
    }

    @Override
    public void clear(View view) {
        e eVar = this.a;
        if (eVar != null) {
            eVar.l();
        }
    }

    @Override
    public void destroy() {
        e eVar = this.a;
        if (eVar != null) {
            eVar.a((a) null);
            this.a.m();
        }
    }
}
