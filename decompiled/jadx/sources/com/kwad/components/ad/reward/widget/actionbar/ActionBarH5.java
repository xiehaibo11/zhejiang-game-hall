package com.kwad.components.ad.reward.widget.actionbar;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.widget.c;
import com.kwad.sdk.widget.f;

/* JADX INFO: loaded from: classes2.dex */
public class ActionBarH5 extends FrameLayout implements c {
    private TextView Bk;
    private a Bl;
    private View Bm;
    private TextView dC;
    private AdTemplate mAdTemplate;

    public interface a {
        void P(boolean z);
    }

    public ActionBarH5(Context context) {
        super(context);
        D(context);
    }

    public ActionBarH5(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        D(context);
    }

    public ActionBarH5(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        D(context);
    }

    private void D(Context context) {
        l.inflate(context, R.layout.ksad_video_actionbar_h5, this);
        this.Bk = (TextView) findViewById(R.id.ksad_h5_ad_desc);
        this.dC = (TextView) findViewById(R.id.ksad_h5_open_btn);
        this.Bm = findViewById(R.id.ksad_download_bar_cover);
    }

    private void b(View view, final boolean z) {
        com.kwad.components.core.e.d.a.a(new a.C0150a(view.getContext()).P(this.mAdTemplate).ao(view == this.Bm ? 1 : 2).a(new a.b() { // from class: com.kwad.components.ad.reward.widget.actionbar.ActionBarH5.1
            @Override // com.kwad.components.core.e.d.a.b
            public final void onAdClicked() {
                if (ActionBarH5.this.Bl != null) {
                    ActionBarH5.this.Bl.P(z);
                }
            }
        }));
    }

    @Override // com.kwad.sdk.widget.c
    public final void a(View view) {
        b(view, true);
    }

    public final void a(AdTemplate adTemplate, a aVar) {
        this.mAdTemplate = adTemplate;
        this.Bl = aVar;
        AdInfo adInfoCg = d.cg(adTemplate);
        this.Bk.setText(com.kwad.sdk.core.response.b.a.an(adInfoCg));
        this.dC.setText(com.kwad.sdk.core.response.b.a.aw(adInfoCg));
        setClickable(true);
        this.Bm.setClickable(true);
        new f(this.Bm, this);
        new f(this, this);
    }

    @Override // com.kwad.sdk.widget.c
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }
}
