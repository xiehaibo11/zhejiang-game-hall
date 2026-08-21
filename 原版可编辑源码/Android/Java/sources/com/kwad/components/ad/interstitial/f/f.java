package com.kwad.components.ad.interstitial.f;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdProductInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bc;
import com.kwad.sdk.widget.KSFrameLayout;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsExtractor;

public final class f extends KSFrameLayout implements com.kwad.sdk.widget.c {
    private ImageView du;
    private TextView eo;
    private ImageView ew;
    private KSFrameLayout jR;
    private KSFrameLayout kK;
    private String lN;
    private View lO;
    private ImageView lP;
    private TextProgressBar lQ;
    private ViewGroup lR;
    private ViewGroup lS;
    private ImageView lT;
    private View lU;
    private View lV;
    private TextView lW;
    private ImageView lX;
    private TextView lY;
    private TextView lZ;
    private AdTemplate mAdTemplate;
    private KsLogoView mLogoView;
    private TextView ma;
    private TextProgressBar mb;
    private TextView mc;
    private g md;
    private final a me;
    private boolean mf;

    public static class a {
        private boolean mh = false;
        private boolean mi = false;
        private int mj = 0;
        private boolean mk = true;

        public final void E(int i) {
            this.mj = i;
        }

        public final int eB() {
            return this.mj;
        }

        public final boolean eC() {
            return this.mk;
        }

        public final void v(boolean z) {
            this.mh = z;
        }

        public final void w(boolean z) {
            this.mi = z;
        }

        public final void x(boolean z) {
            this.mk = z;
        }
    }

    public f(Context context, a aVar) {
        super(context);
        this.lN = "%s秒后进入试玩页";
        this.mf = false;
        this.me = aVar;
        l.inflate(context, aVar.eC() ? R.layout.ksad_interstitial_native_above : R.layout.ksad_interstitial_native, this);
        s(this.me.mh);
    }

    private void a(View view, int i, int i2) {
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.width = com.kwad.sdk.d.a.a.a(getContext(), i);
        layoutParams.height = com.kwad.sdk.d.a.a.a(getContext(), i2);
        view.setLayoutParams(layoutParams);
    }

    private void a(KSFrameLayout kSFrameLayout, boolean z) {
        kSFrameLayout.setClickable(true);
        new com.kwad.sdk.widget.f(kSFrameLayout, this);
        this.jR.setWidthBasedRatio(!z);
    }

    private void b(View view, boolean z) {
        g gVar;
        g gVar2;
        g gVar3 = this.md;
        if (gVar3 != null) {
            gVar3.p(z);
            this.md.a(this.kK);
        }
        if (view.equals(this)) {
            g gVar4 = this.md;
            if (gVar4 != null) {
                gVar4.dK();
                return;
            }
            return;
        }
        if (view.equals(this.lU)) {
            if (!(1 == this.me.eB()) || (gVar2 = this.md) == null) {
                return;
            }
            gVar2.dJ();
            return;
        }
        if (view.equals(this.mb)) {
            g gVar5 = this.md;
            if (gVar5 != null) {
                gVar5.dL();
                return;
            }
            return;
        }
        if (view.equals(this.lS)) {
            g gVar6 = this.md;
            if (gVar6 != null) {
                gVar6.dW();
                return;
            }
            return;
        }
        if (view.equals(this.lQ)) {
            g gVar7 = this.md;
            if (gVar7 != null) {
                gVar7.dM();
                return;
            }
            return;
        }
        if (view.equals(this.lV)) {
            g gVar8 = this.md;
            if (gVar8 != null) {
                gVar8.dP();
                return;
            }
            return;
        }
        if (view.equals(this.jR)) {
            g gVar9 = this.md;
            if (gVar9 != null) {
                gVar9.dN();
                return;
            }
            return;
        }
        if (view.equals(this.ew)) {
            g gVar10 = this.md;
            if (gVar10 != null) {
                gVar10.dO();
                return;
            }
            return;
        }
        if (view.equals(this.du)) {
            g gVar11 = this.md;
            if (gVar11 != null) {
                gVar11.dQ();
                return;
            }
            return;
        }
        if (view.equals(this.lY)) {
            g gVar12 = this.md;
            if (gVar12 != null) {
                gVar12.dR();
                return;
            }
            return;
        }
        if (view.equals(this.eo)) {
            g gVar13 = this.md;
            if (gVar13 != null) {
                gVar13.dS();
                return;
            }
            return;
        }
        if (view.equals(this.lX)) {
            g gVar14 = this.md;
            if (gVar14 != null) {
                gVar14.dT();
                return;
            }
            return;
        }
        if (view.equals(this.lZ)) {
            g gVar15 = this.md;
            if (gVar15 != null) {
                gVar15.dU();
                return;
            }
            return;
        }
        if (!view.equals(this.ma) || (gVar = this.md) == null) {
            return;
        }
        gVar.dV();
    }

    private void d(View view, int i) {
        com.kwad.sdk.d.a.a.b(view, 0, com.kwad.sdk.d.a.a.a(getContext(), i), 0, 0);
    }

    private void ev() {
        a(this.lX, 40, 40);
        a(this.mb, TsExtractor.TS_STREAM_TYPE_HDMV_DTS, 30);
        this.lZ.setTextSize(14.0f);
        d(this.mb, 11);
        d(this.lZ, 7);
        d(this.ma, 7);
    }

    private void s(boolean z) {
        setClickable(true);
        this.kK = (KSFrameLayout) findViewById(R.id.ksad_interstitial_native_container);
        this.jR = (KSFrameLayout) findViewById(R.id.ksad_interstitial_native_video_container);
        this.lO = findViewById(R.id.ksad_interstitial_full_bg);
        this.lP = (ImageView) findViewById(R.id.ksad_interstitial_tail_frame);
        this.ew = (ImageView) findViewById(R.id.ksad_video_first_frame_container);
        this.mLogoView = (KsLogoView) findViewById(R.id.ksad_ad_interstitial_logo);
        this.lR = (ViewGroup) findViewById(R.id.ksad_interstitial_playing);
        this.lS = (ViewGroup) findViewById(R.id.ksad_interstitial_play_end);
        this.lQ = (TextProgressBar) findViewById(R.id.ksad_interstitial_download_btn);
        this.lU = findViewById(R.id.ksad_interstitial_close_outer);
        TextProgressBar textProgressBar = this.lQ;
        if (textProgressBar != null) {
            textProgressBar.setTextDimen(com.kwad.sdk.d.a.a.a(getContext(), 10.0f));
            this.lQ.setTextColor(-1);
        }
        this.lT = (ImageView) findViewById(R.id.ksad_interstitial_mute);
        this.lW = (TextView) findViewById(R.id.ksad_interstitial_count_down);
        this.lX = (ImageView) findViewById(R.id.ksad_interstitial_logo);
        this.lZ = (TextView) findViewById(R.id.ksad_interstitial_name);
        this.ma = (TextView) findViewById(R.id.ksad_interstitial_desc);
        this.mb = (TextProgressBar) findViewById(R.id.ksad_app_download_btn);
        this.lV = findViewById(R.id.ksad_ad_download_container);
        this.du = (ImageView) findViewById(R.id.ksad_app_icon);
        this.lY = (TextView) findViewById(R.id.ksad_app_title);
        this.eo = (TextView) findViewById(R.id.ksad_app_desc);
        new com.kwad.sdk.widget.f(this, this);
        new com.kwad.sdk.widget.f(this.ew, this);
        new com.kwad.sdk.widget.f(this.lQ, this);
        new com.kwad.sdk.widget.f(this.mb, this);
        new com.kwad.sdk.widget.f(this.lU, this);
        new com.kwad.sdk.widget.f(this.lS, this);
        new com.kwad.sdk.widget.f(this.lW, this);
        new com.kwad.sdk.widget.f(this.lV, this);
        new com.kwad.sdk.widget.f(this.du, this);
        new com.kwad.sdk.widget.f(this.lY, this);
        new com.kwad.sdk.widget.f(this.eo, this);
        new com.kwad.sdk.widget.f(this.lX, this);
        new com.kwad.sdk.widget.f(this.lZ, this);
        new com.kwad.sdk.widget.f(this.ma, this);
        this.lT.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                f.this.lT.setSelected(!f.this.lT.isSelected());
                if (f.this.md != null) {
                    f.this.md.o(f.this.lT.isSelected());
                }
            }
        });
        this.mc = (TextView) findViewById(R.id.ksad_interstitial_playable_timer);
        a(this.jR, z);
        if (ai.IO()) {
            return;
        }
        ev();
    }

    public final void a(float f, com.kwad.sdk.core.video.videoview.a aVar) {
        this.jR.setRatio(f);
        this.jR.addView(aVar);
        FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) aVar.getLayoutParams();
        layoutParams.topMargin = 0;
        layoutParams.width = -1;
        layoutParams.height = -1;
        layoutParams.gravity = 17;
        aVar.setLayoutParams(layoutParams);
    }

    @Override
    public final void a(View view) {
        b(view, true);
    }

    public final void a(AdTemplate adTemplate, AdInfo adInfo) {
        TextView textView;
        String strBO;
        TextProgressBar textProgressBar;
        String strAw;
        this.lX.setImageResource(R.drawable.ksad_default_app_icon);
        if (com.kwad.sdk.core.response.b.a.bM(adInfo) == 2) {
            KSImageLoader.loadCircleIcon(this.lX, com.kwad.sdk.core.response.b.a.ct(adInfo), getContext().getResources().getDrawable(R.drawable.ksad_default_app_icon));
            this.lZ.setText(com.kwad.sdk.core.response.b.a.bP(adInfo));
            this.ma.setText(com.kwad.sdk.core.response.b.a.an(adInfo));
            if (com.kwad.sdk.core.response.b.a.cp(adInfo)) {
                textProgressBar = this.mb;
                strAw = com.kwad.components.ad.d.b.V();
            } else {
                textProgressBar = this.mb;
                strAw = com.kwad.components.ad.d.b.Y();
            }
        } else if (com.kwad.components.ad.interstitial.a.b.cH() && com.kwad.sdk.core.response.b.a.bM(adInfo) == 3) {
            AdProductInfo adProductInfoCy = com.kwad.sdk.core.response.b.a.cy(adInfo);
            KSImageLoader.loadWithRadius(this.lX, adProductInfoCy.icon, adTemplate, 4);
            this.lZ.setText(adProductInfoCy.name);
            this.ma.setVisibility(8);
            textProgressBar = this.mb;
            strAw = com.kwad.components.ad.d.b.W();
        } else {
            if (com.kwad.sdk.core.response.b.a.ax(adInfo)) {
                KSImageLoader.loadWithRadius(this.lX, com.kwad.sdk.core.response.b.a.bQ(adInfo), adTemplate, 4);
                textView = this.lZ;
                strBO = com.kwad.sdk.core.response.b.a.ao(adInfo);
            } else {
                KSImageLoader.loadWithRadius(this.lX, com.kwad.sdk.core.response.b.d.cl(adTemplate), adTemplate, 4);
                textView = this.lZ;
                strBO = com.kwad.sdk.core.response.b.a.bO(adInfo);
            }
            textView.setText(strBO);
            this.ma.setText(com.kwad.sdk.core.response.b.a.an(adInfo));
            textProgressBar = this.mb;
            strAw = com.kwad.sdk.core.response.b.a.aw(adInfo);
        }
        textProgressBar.e(strAw, 0);
    }

    public final void a(String str, AdTemplate adTemplate) {
        if (bc.isNullString(str)) {
            return;
        }
        this.ew.setImageDrawable(null);
        KSImageLoader.loadImage(this.ew, str, adTemplate);
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }

    public final void b(boolean z, int i) {
        TextView textView = this.mc;
        if (textView == null) {
            return;
        }
        textView.setVisibility(0);
        if (i >= 0) {
            this.mc.setText(String.format(this.lN, String.valueOf(i)));
        }
    }

    public final void b(boolean z, boolean z2) {
        if (this.ew != null) {
            this.ew.setVisibility(z ? 0 : 8);
            this.ew.setClickable(z2);
        }
    }

    public final boolean eA() {
        ViewGroup viewGroup = this.lS;
        return viewGroup != null && viewGroup.getVisibility() == 0;
    }

    public final void ew() {
        TextView textView = this.lW;
        if (textView != null) {
            textView.setVisibility(8);
            this.mf = true;
        }
    }

    public final void ex() {
        View view = this.lU;
        if (view != null) {
            view.setVisibility(8);
        }
    }

    public final void ey() {
        t(false);
        this.lS.setVisibility(0);
        this.lP.setVisibility(0);
    }

    public final void ez() {
        this.lS.setVisibility(8);
        this.lP.setVisibility(8);
        t(true);
    }

    public final void f(int i, int i2) {
        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) getLayoutParams();
        marginLayoutParams.width = i;
        marginLayoutParams.height = i2;
        setLayoutParams(marginLayoutParams);
    }

    public final void g(String str, int i) {
        TextProgressBar textProgressBar = this.lQ;
        if (textProgressBar != null) {
            textProgressBar.e(str, 0);
        }
        TextProgressBar textProgressBar2 = this.mb;
        if (textProgressBar2 != null) {
            textProgressBar2.e(str, 0);
        }
    }

    public final View getBlurBgView() {
        return this.lO;
    }

    public final ImageView getTailFrameView() {
        return this.lP;
    }

    public final void l(AdTemplate adTemplate) {
        this.mLogoView.aa(adTemplate);
    }

    public final void setAdTemplate(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }

    public final void setViewListener(g gVar) {
        this.md = gVar;
    }

    public final void t(boolean z) {
        if (this.lR != null) {
            this.lR.setVisibility(z ? 0 : 8);
        }
    }

    public final void u(boolean z) {
        ImageView imageView = this.lT;
        if (imageView != null) {
            imageView.setSelected(z);
        }
    }

    public final void y(String str) {
        TextView textView = this.lW;
        if (textView == null) {
            return;
        }
        if (str != null) {
            textView.setText(str);
        }
        if (!this.me.mi || this.mf || this.lW.getVisibility() == 0) {
            return;
        }
        this.lW.setVisibility(0);
    }
}
