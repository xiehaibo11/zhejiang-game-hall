package com.kwad.components.ad.splashscreen.c.a;

import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.widget.CloseCountDownView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import org.json.JSONObject;

public final class c extends com.kwad.components.ad.splashscreen.c.e implements View.OnClickListener, com.kwad.sdk.widget.c {
    private CloseCountDownView Ej;
    private ViewGroup Ek;
    private ViewGroup El;
    private ImageView Em;
    private TextView En;
    private TextView Eo;
    private CloseCountDownView.a Ep = new CloseCountDownView.a() {
        @Override
        public final void dJ() {
            z.a aVar = new z.a();
            if (c.this.CM.mTimerHelper != null) {
                aVar.duration = c.this.CM.mTimerHelper.getTime();
            }
            com.kwad.sdk.core.report.a.b(c.this.CM.mAdTemplate, new j().ch(1).a(aVar).cm(6), (JSONObject) null);
            c.this.CM.kI();
        }

        @Override
        public final void kV() {
            z.a aVar = new z.a();
            if (c.this.CM.mTimerHelper != null) {
                aVar.duration = c.this.CM.mTimerHelper.getTime();
            }
            com.kwad.sdk.core.report.a.b(c.this.CM.mAdTemplate, new j().ch(14).a(aVar).cm(6), (JSONObject) null);
            c.this.CM.kM();
        }
    };

    private void s(View view) {
        if (view == this.Ek) {
            this.CM.c(2, view.getContext(), 104, 2);
            return;
        }
        if (view == this.El) {
            this.CM.c(2, view.getContext(), 26, 1);
            return;
        }
        if (view == this.Em) {
            this.CM.c(2, view.getContext(), 15, 2);
        } else if (view == this.En) {
            this.CM.c(2, view.getContext(), 16, 2);
        } else if (view == this.Eo) {
            this.CM.c(2, view.getContext(), 17, 2);
        }
    }

    @Override
    public final void a(View view) {
        s(view);
    }

    @Override
    public final void ah() {
        super.ah();
        this.Ej.setOnViewClickListener(this.Ep);
        this.El.setOnClickListener(this);
        new com.kwad.sdk.widget.f(this.El.getContext(), this.El, this);
        if (com.kwad.sdk.core.response.b.b.cL(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            this.Ek.setOnClickListener(this);
            this.Em.setOnClickListener(this);
            this.En.setOnClickListener(this);
            this.Eo.setOnClickListener(this);
            new com.kwad.sdk.widget.f(this.El.getContext(), this.Ek, this);
            new com.kwad.sdk.widget.f(this.El.getContext(), this.Em, this);
            new com.kwad.sdk.widget.f(this.El.getContext(), this.En, this);
            new com.kwad.sdk.widget.f(this.El.getContext(), this.Eo, this);
        }
    }

    @Override
    public final void b(View view) {
    }

    @Override
    public final void onClick(View view) {
        s(view);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.Ej = (CloseCountDownView) findViewById(R.id.ksad_ad_endcard_close_root);
        this.Ek = (ViewGroup) findViewById(R.id.ksad_splash_end_card_giftbox_view);
        this.El = (ViewGroup) findViewById(R.id.ksad_splash_endcard_actionbar);
        this.Em = (ImageView) findViewById(R.id.ksad_ad_endcard_icon);
        this.En = (TextView) findViewById(R.id.ksad_ad_endcard_appname);
        this.Eo = (TextView) findViewById(R.id.ksad_ad_endcard_appdesc);
    }
}
