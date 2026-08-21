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

public class AdxTYNativeAd extends CustomNativeAd {
    h a;
    Context b;
    boolean c;
    boolean d;
    View e;

    public AdxTYNativeAd(final Context context, h hVar, boolean z, boolean z2) {
        this.b = context.getApplicationContext();
        this.a = hVar;
        setNetworkInfoMap(b.a(hVar.a()));
        h hVar2 = this.a;
        hVar2.a(new e(hVar2.a()) {
            @Override
            public final void onShowFailed(com.tkay.basead.c.e eVar) {
            }

            @Override
            public final void onAdShow() {
                super.onAdShow();
                AdxTYNativeAd.this.notifyAdImpression();
                if (AdxTYNativeAd.this.a.a().n() == 67) {
                    if (AdxTYNativeAd.this.a.a(true, true)) {
                        c.a(context).a(AdxTYNativeAd.this.a.a().p(), 0, 1);
                    }
                    if (AdxTYNativeAd.this.a.a(false, true)) {
                        com.tkay.core.common.d.b.a(context).a(AdxTYNativeAd.this.a.a().p(), 0, 1);
                    }
                }
            }

            @Override
            public final void onAdClosed() {
                AdxTYNativeAd.this.notifyAdDislikeClick();
            }

            @Override
            public final void onAdClick(int i) {
                d detail = AdxTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                AdxTYNativeAd.this.notifyAdClicked();
                if (AdxTYNativeAd.this.a.a().n() == 67) {
                    if (AdxTYNativeAd.this.a.a(true, false)) {
                        c.a(context).a(AdxTYNativeAd.this.a.a().p(), 1, 0);
                    }
                    if (AdxTYNativeAd.this.a.a(false, false)) {
                        com.tkay.core.common.d.b.a(context).a(AdxTYNativeAd.this.a.a().p(), 1, 0);
                    }
                }
            }

            @Override
            public final void onDeeplinkCallback(boolean z3) {
                AdxTYNativeAd.this.notifyDeeplinkCallback(z3);
            }
        });
        this.c = z;
        this.d = z2;
        if (z || this.a.h()) {
            return;
        }
        setAdChoiceIconUrl(this.a.g());
        setTitle(this.a.b());
        setDescriptionText(this.a.c());
        setIconImageUrl(this.a.e());
        setMainImageUrl(this.a.f());
        setCallToActionText(this.a.d());
    }

    @Override
    public boolean isNativeExpress() {
        return this.c || this.a.h();
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        if (this.e == null) {
            this.e = this.a.a(this.b, this.c, this.d, new BaseMediaATView.a() {
                @Override
                public final void onClickCloseView() {
                    AdxTYNativeAd.this.notifyAdDislikeClick();
                }
            });
        }
        return this.e;
    }

    @Override
    public ViewGroup getCustomAdContainer() {
        if (this.a == null || this.c) {
            return null;
        }
        return new OwnNativeATView(this.b);
    }

    @Override
    public void prepare(View view, TYNativePrepareInfo tYNativePrepareInfo) {
        this.a.k();
        if (this.c || this.a == null) {
            return;
        }
        List<View> clickViewList = tYNativePrepareInfo.getClickViewList();
        if (clickViewList != null && clickViewList.size() > 0) {
            this.a.a(view, clickViewList);
        } else {
            this.a.a(view);
        }
    }

    @Override
    public void onResume() {
        h hVar = this.a;
        if (hVar != null) {
            hVar.k();
        }
    }

    @Override
    public void onPause() {
        h hVar = this.a;
        if (hVar != null) {
            hVar.l();
        }
    }

    @Override
    public void clear(View view) {
        h hVar = this.a;
        if (hVar != null) {
            hVar.i();
        }
    }

    @Override
    public void destroy() {
        h hVar = this.a;
        if (hVar != null) {
            hVar.a((a) null);
            this.a.j();
        }
    }
}
