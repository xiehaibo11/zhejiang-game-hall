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

public class OnlineApiTYNativeAd extends CustomNativeAd {
    h a;
    Context b;
    View c;

    public OnlineApiTYNativeAd(Context context, h hVar) {
        this.b = context.getApplicationContext();
        this.a = hVar;
        hVar.a(new a() {
            @Override
            public final void onAdClosed() {
            }

            @Override
            public final void onShowFailed(e eVar) {
            }

            @Override
            public final void onAdShow() {
                OnlineApiTYNativeAd.this.notifyAdImpression();
            }

            @Override
            public final void onAdClick(int i) {
                d detail = OnlineApiTYNativeAd.this.getDetail();
                if (detail != null) {
                    detail.x(i);
                }
                OnlineApiTYNativeAd.this.notifyAdClicked();
            }

            @Override
            public final void onDeeplinkCallback(boolean z) {
                OnlineApiTYNativeAd.this.notifyDeeplinkCallback(z);
            }
        });
        setNetworkInfoMap(b.a(this.a.a()));
        setAdChoiceIconUrl(this.a.g());
        setTitle(this.a.b());
        setDescriptionText(this.a.c());
        setIconImageUrl(this.a.e());
        setMainImageUrl(this.a.f());
        setCallToActionText(this.a.d());
    }

    @Override
    public ViewGroup getCustomAdContainer() {
        if (this.a != null) {
            return new OwnNativeATView(this.b);
        }
        return null;
    }

    @Override
    public View getAdMediaView(Object... objArr) {
        if (this.c == null) {
            this.c = this.a.a(this.b, false, false, null);
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
