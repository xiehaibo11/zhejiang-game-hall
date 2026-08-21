package com.kwad.components.ad.interstitial.d;

import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsPriceView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public final class k extends com.kwad.components.ad.interstitial.d.b {
    private static int lg = 4;
    private c jf;
    private a le = new a();
    private b lf = new b();
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;

    static class a {
        private ImageView lh;
        private TextView li;
        private TextView lj;
        private KsPriceView lk;

        a() {
        }
    }

    static class b {
        private String appIconUrl;
        private String ll;
        private CharSequence lm;
        private String ln;
        private String lo;
        private String price;

        b() {
        }

        public final void a(CharSequence charSequence) {
            this.lm = charSequence;
        }

        public final String ed() {
            return this.ll;
        }

        public final CharSequence ee() {
            return this.lm;
        }

        public final String ef() {
            return this.ln;
        }

        public final String eg() {
            return this.lo;
        }

        public final String getAppIconUrl() {
            return this.appIconUrl;
        }

        public final String getPrice() {
            return this.price;
        }

        public final void t(String str) {
            this.appIconUrl = str;
        }

        public final void u(String str) {
            this.ll = str;
        }

        public final void v(String str) {
            this.ln = str;
        }

        public final void w(String str) {
            this.price = str;
        }

        public final void x(String str) {
            this.lo = str;
        }
    }

    private void a(a aVar, b bVar, AdInfo adInfo, AdTemplate adTemplate) {
        ImageView imageView = aVar.lh;
        if (TextUtils.isEmpty(bVar.getAppIconUrl())) {
            imageView.setVisibility(8);
        } else {
            imageView.setVisibility(0);
            if (com.kwad.sdk.core.response.b.a.bL(adInfo) == 2) {
                KSImageLoader.loadCircleIcon(imageView, bVar.getAppIconUrl(), getContext().getResources().getDrawable(R.drawable.ksad_default_app_icon));
            } else {
                imageView.setImageResource(R.drawable.ksad_default_app_icon);
                KSImageLoader.loadWithRadius(imageView, bVar.getAppIconUrl(), adTemplate, lg);
            }
        }
        aVar.li.setText(bVar.ed());
        if (com.kwad.components.ad.interstitial.a.b.cH() && com.kwad.sdk.core.response.b.a.bL(adInfo) == 3) {
            aVar.lk.d(bVar.getPrice(), bVar.ef(), true);
            aVar.lk.setVisibility(0);
            aVar.lj.setVisibility(8);
            ec();
        } else {
            aVar.lj.setText(bVar.ee());
        }
        this.jf.jg.g(bVar.eg(), 0);
    }

    private void d(AdInfo adInfo) {
        b bVar;
        String string;
        b bVar2;
        String string2;
        if (com.kwad.sdk.core.response.b.a.bL(adInfo) == 2) {
            this.lf.t(com.kwad.sdk.core.response.b.a.ct(adInfo));
            this.lf.u(com.kwad.sdk.core.response.b.a.bP(adInfo));
            CharSequence charSequenceE = com.kwad.sdk.core.response.b.a.e(adInfo, com.kwad.components.core.widget.e.Za);
            if (TextUtils.isEmpty(charSequenceE)) {
                charSequenceE = com.kwad.sdk.core.response.b.a.cs(adInfo);
            }
            this.lf.a(charSequenceE);
            if (com.kwad.sdk.core.response.b.a.cp(adInfo)) {
                this.lf.x(com.kwad.components.ad.d.b.V());
                return;
            } else {
                this.lf.x(com.kwad.components.ad.d.b.Y());
                return;
            }
        }
        if (com.kwad.components.ad.interstitial.a.b.cH() && com.kwad.sdk.core.response.b.a.bL(adInfo) == 3) {
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
            this.lf.t(adProductInfoCy.icon);
            this.lf.u(adProductInfoCy.name);
            this.lf.v(adProductInfoCy.originPrice);
            this.lf.w(adProductInfoCy.price);
            this.lf.x(com.kwad.components.ad.d.b.W());
            return;
        }
        if (com.kwad.sdk.core.response.b.a.ax(adInfo)) {
            this.lf.t(com.kwad.sdk.core.response.b.a.bQ(adInfo));
            if (!TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.ao(adInfo))) {
                bVar2 = this.lf;
                string2 = com.kwad.sdk.core.response.b.a.ao(adInfo);
            } else if (TextUtils.isEmpty(adInfo.advertiserInfo.adAuthorText)) {
                bVar2 = this.lf;
                string2 = getContext().getString(R.string.ksad_ad_default_username_normal);
            } else {
                bVar2 = this.lf;
                string2 = adInfo.advertiserInfo.adAuthorText;
            }
            bVar2.u(string2);
            this.lf.a(com.kwad.sdk.core.response.b.a.an(adInfo));
            this.lf.x(com.kwad.sdk.core.response.b.a.aw(adInfo));
            return;
        }
        this.lf.t(com.kwad.sdk.core.response.b.a.bQ(adInfo));
        if (!TextUtils.isEmpty(com.kwad.sdk.core.response.b.a.ap(adInfo))) {
            bVar = this.lf;
            string = com.kwad.sdk.core.response.b.a.ap(adInfo);
        } else if (TextUtils.isEmpty(adInfo.advertiserInfo.adAuthorText)) {
            bVar = this.lf;
            string = getContext().getString(R.string.ksad_ad_default_username_normal);
        } else {
            bVar = this.lf;
            string = adInfo.advertiserInfo.adAuthorText;
        }
        bVar.u(string);
        this.lf.a(com.kwad.sdk.core.response.b.a.an(adInfo));
        this.lf.x(com.kwad.sdk.core.response.b.a.aw(adInfo));
    }

    private void ec() {
        View viewFindViewById = this.jf.jg.findViewById(R.id.ksad_ad_desc_layout);
        View viewFindViewById2 = this.jf.jg.findViewById(R.id.ksad_space);
        LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) viewFindViewById.getLayoutParams();
        layoutParams.weight = 2.68f;
        viewFindViewById.setLayoutParams(layoutParams);
        viewFindViewById2.setVisibility(8);
    }

    @Override
    public final void ah() {
        super.ah();
        c cVar = (c) Gk();
        this.jf = cVar;
        this.mAdTemplate = cVar.mAdTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(this.jf.mAdTemplate);
        this.le.lh = (ImageView) this.jf.jg.findViewById(R.id.ksad_app_icon);
        this.le.li = (TextView) this.jf.jg.findViewById(R.id.ksad_app_title);
        this.le.lj = (TextView) this.jf.jg.findViewById(R.id.ksad_app_desc);
        this.le.lk = (KsPriceView) this.jf.jg.findViewById(R.id.ksad_product_price);
        d(this.mAdInfo);
        a(this.le, this.lf, this.mAdInfo, this.mAdTemplate);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
    }
}
