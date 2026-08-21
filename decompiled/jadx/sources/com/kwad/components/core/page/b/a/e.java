package com.kwad.components.core.page.b.a;

import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.webview.KsAdWebView;

/* JADX INFO: loaded from: classes2.dex */
public final class e extends a {
    private LinearLayout Mu;
    private TextView Mv;
    private ImageView Mw;

    private void oQ() {
        this.Mu = (LinearLayout) findViewById(R.id.ksad_web_tip_bar);
        if (!TextUtils.isEmpty(this.MW.mPageTitle)) {
            this.Mu.setVisibility(8);
            return;
        }
        this.Mv = (TextView) findViewById(R.id.ksad_web_tip_bar_textview);
        ImageView imageView = (ImageView) findViewById(R.id.ksad_web_tip_close_btn);
        this.Mw = imageView;
        imageView.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.b.a.e.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                e.this.Mu.setVisibility(8);
            }
        });
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate);
        boolean zBn = com.kwad.sdk.core.response.b.a.bn(adInfoCg);
        String strBj = com.kwad.sdk.core.response.b.a.bj(adInfoCg);
        if (zBn) {
            this.Mu.setVisibility(0);
            this.Mv.setText(strBj);
            this.Mv.setSelected(true);
        } else {
            this.Mu.setVisibility(8);
        }
        this.MW.a(oR());
    }

    private KsAdWebView.c oR() {
        return new KsAdWebView.c() { // from class: com.kwad.components.core.page.b.a.e.2
            @Override // com.kwad.sdk.core.webview.KsAdWebView.c
            public final void oS() {
                if (e.this.MW.oy() && e.this.Mu.getVisibility() == 0) {
                    e.this.Mu.setVisibility(8);
                }
            }
        };
    }

    @Override // com.kwad.components.core.page.b.a.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        oQ();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
    }
}
