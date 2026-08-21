package com.tkay.network.onlineapi;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.c.e;
import com.tkay.basead.d.h;
import com.tkay.basead.e.a;
import com.tkay.basead.ui.OwnNativeATView;
import com.tkay.core.common.f.d;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class OnlineApiTYNativeAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    h f7671a;
    Context b;
    View c;

    public OnlineApiTYNativeAd(Context context, h hVar) {
        this.b = context.getApplicationContext();
        this.f7671a = hVar;
        hVar.a(new a() { // from class: com.tkay.network.onlineapi.OnlineApiTYNativeAd.1
            @Override // com.tkay.basead.e.a
            public final void onAdClosed() {
            }

            @Override // com.tkay.basead.e.a
            public final void onShowFailed(e eVar) {
            }

            @Override // com.tkay.basead.e.a
            public final void onAdShow() {
                OnlineApiTYNativeAd.this.notifyAdImpression();
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClick(int i) {
                d detail = OnlineApiTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                OnlineApiTYNativeAd.this.notifyAdClicked();
            }

            @Override // com.tkay.basead.e.a
            public final void onDeeplinkCallback(boolean z) {
                OnlineApiTYNativeAd.this.notifyDeeplinkCallback(z);
            }
        });
        setNetworkInfoMap(b.a(this.f7671a.a()));
        setAdChoiceIconUrl(this.f7671a.g());
        setTitle(this.f7671a.b());
        setDescriptionText(this.f7671a.c());
        setIconImageUrl(this.f7671a.e());
        setMainImageUrl(this.f7671a.f());
        setCallToActionText(this.f7671a.d());
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public ViewGroup getCustomAdContainer() {
        if (this.f7671a != null) {
            return new OwnNativeATView(this.b);
        }
        return null;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        if (this.c == null) {
            this.c = this.f7671a.a(this.b, false, false, null);
        }
        return this.c;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        if (this.f7671a != null) {
            List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
            if (clickViewList != null && clickViewList.size() > 0) {
                this.f7671a.a(view, clickViewList);
            } else {
                this.f7671a.a(view);
            }
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
        h hVar = this.f7671a;
        if (hVar != null) {
            hVar.i();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        h hVar = this.f7671a;
        if (hVar != null) {
            hVar.a((a) null);
            this.f7671a.j();
        }
    }
}
