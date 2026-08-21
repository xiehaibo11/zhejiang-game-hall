package com.tkay.network.adx;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import com.tkay.basead.b;
import com.tkay.basead.d.h;
import com.tkay.basead.e.a;
import com.tkay.basead.e.e;
import com.tkay.basead.ui.BaseMediaATView;
import com.tkay.basead.ui.OwnNativeATView;
import com.tkay.core.common.d.c;
import com.tkay.core.common.f.d;
import com.tkay.nativead.api.TYNativePrepareInfo;
import com.tkay.nativead.unitgroup.api.CustomNativeAd;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class AdxTYNativeAd extends CustomNativeAd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    h f7533a;
    Context b;
    boolean c;
    boolean d;
    View e;

    public AdxTYNativeAd(final Context context, h hVar, boolean z, boolean z2) {
        this.b = context.getApplicationContext();
        this.f7533a = hVar;
        setNetworkInfoMap(b.a(hVar.a()));
        h hVar2 = this.f7533a;
        hVar2.a(new e(hVar2.a()) { // from class: com.tkay.network.adx.AdxTYNativeAd.1
            @Override // com.tkay.basead.e.a
            public final void onShowFailed(com.tkay.basead.c.e eVar) {
            }

            @Override // com.tkay.basead.e.e, com.tkay.basead.e.a
            public final void onAdShow() {
                super.onAdShow();
                AdxTYNativeAd.this.notifyAdImpression();
                if (AdxTYNativeAd.this.f7533a.a().n() == 67) {
                    if (AdxTYNativeAd.this.f7533a.a(true, true)) {
                        c.a(context).a(AdxTYNativeAd.this.f7533a.a().p(), 0, 1);
                    }
                    if (AdxTYNativeAd.this.f7533a.a(false, true)) {
                        com.tkay.core.common.d.b.a(context).a(AdxTYNativeAd.this.f7533a.a().p(), 0, 1);
                    }
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClosed() {
                AdxTYNativeAd.this.notifyAdDislikeClick();
            }

            @Override // com.tkay.basead.e.a
            public final void onAdClick(int i) {
                d detail = AdxTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                AdxTYNativeAd.this.notifyAdClicked();
                if (AdxTYNativeAd.this.f7533a.a().n() == 67) {
                    if (AdxTYNativeAd.this.f7533a.a(true, false)) {
                        c.a(context).a(AdxTYNativeAd.this.f7533a.a().p(), 1, 0);
                    }
                    if (AdxTYNativeAd.this.f7533a.a(false, false)) {
                        com.tkay.core.common.d.b.a(context).a(AdxTYNativeAd.this.f7533a.a().p(), 1, 0);
                    }
                }
            }

            @Override // com.tkay.basead.e.a
            public final void onDeeplinkCallback(boolean z3) {
                AdxTYNativeAd.this.notifyDeeplinkCallback(z3);
            }
        });
        this.c = z;
        this.d = z2;
        if (z || this.f7533a.h()) {
            return;
        }
        setAdChoiceIconUrl(this.f7533a.g());
        setTitle(this.f7533a.b());
        setDescriptionText(this.f7533a.c());
        setIconImageUrl(this.f7533a.e());
        setMainImageUrl(this.f7533a.f());
        setCallToActionText(this.f7533a.d());
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public boolean isNativeExpress() {
        return this.c || this.f7533a.h();
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a, com.tkay.core.api.IATThirdPartyMaterial
    public View getAdMediaView(Object... objArr) {
        if (this.e == null) {
            this.e = this.f7533a.a(this.b, this.c, this.d, new BaseMediaATView.a() { // from class: com.tkay.network.adx.AdxTYNativeAd.2
                @Override // com.tkay.basead.ui.BaseMediaATView.a
                public final void onClickCloseView() {
                    AdxTYNativeAd.this.notifyAdDislikeClick();
                }
            });
        }
        return this.e;
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public ViewGroup getCustomAdContainer() {
        if (this.f7533a == null || this.c) {
            return null;
        }
        return new OwnNativeATView(this.b);
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        this.f7533a.k();
        if (this.c || this.f7533a == null) {
            return;
        }
        List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
        if (clickViewList != null && clickViewList.size() > 0) {
            this.f7533a.a(view, clickViewList);
        } else {
            this.f7533a.a(view);
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void onResume() {
        h hVar = this.f7533a;
        if (hVar != null) {
            hVar.k();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void onPause() {
        h hVar = this.f7533a;
        if (hVar != null) {
            hVar.l();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.nativead.unitgroup.a
    public void clear(View view) {
        h hVar = this.f7533a;
        if (hVar != null) {
            hVar.i();
        }
    }

    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.BaseAd
    public void destroy() {
        h hVar = this.f7533a;
        if (hVar != null) {
            hVar.a((a) null);
            this.f7533a.j();
        }
    }
}
