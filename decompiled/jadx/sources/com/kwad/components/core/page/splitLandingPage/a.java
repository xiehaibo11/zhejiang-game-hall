package com.kwad.components.core.page.splitLandingPage;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.AnimatorSet;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.components.core.e.d.c;
import com.kwad.components.core.n.e;
import com.kwad.components.core.page.b.b;
import com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView;
import com.kwad.components.core.page.splitLandingPage.view.a;
import com.kwad.components.core.t.m;
import com.kwad.components.core.widget.FeedVideoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.config.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.mvp.Presenter;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends e {
    private FeedVideoView Mt;
    private LinearLayout Mu;
    private SplitScrollWebView Om;
    private Presenter On;
    private com.kwad.components.core.page.splitLandingPage.view.a Oo;
    private com.kwad.components.core.page.b.a Op;
    private boolean Oq;
    private AdTemplate mAdTemplate;
    private c mApkDownloadHelper;

    public static a T(AdTemplate adTemplate) {
        a aVar = new a();
        Bundle bundle = new Bundle();
        bundle.putString("key_photo", adTemplate.toJson().toString());
        bundle.putBoolean("key_report", adTemplate.mPvReported);
        aVar.setArguments(bundle);
        return aVar;
    }

    static /* synthetic */ boolean a(a aVar, boolean z) {
        aVar.Oq = false;
        return false;
    }

    private void initView() {
        com.kwad.components.core.page.recycle.e eVar = new com.kwad.components.core.page.recycle.e(this.mAdTemplate, this.mApkDownloadHelper, null);
        this.On.k(eVar);
        com.kwad.components.core.page.splitLandingPage.view.a aVar = new com.kwad.components.core.page.splitLandingPage.view.a(this.mContext, new com.kwad.components.core.page.splitLandingPage.a.a(eVar.adTemplate, eVar.JG));
        this.Oo = aVar;
        aVar.a(new a.InterfaceC0162a() { // from class: com.kwad.components.core.page.splitLandingPage.a.3
            @Override // com.kwad.components.core.page.splitLandingPage.view.a.InterfaceC0162a
            public final boolean pp() {
                return a.this.pm();
            }
        });
        this.Mt.post(new Runnable() { // from class: com.kwad.components.core.page.splitLandingPage.a.4
            @Override // java.lang.Runnable
            public final void run() {
                a.this.Om.setTranslationY(a.this.Om.getTranslationY() + a.this.Mt.getHeight());
            }
        });
        this.Om.setSplitScrollWebViewListener(new SplitScrollWebView.a() { // from class: com.kwad.components.core.page.splitLandingPage.a.5
            @Override // com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView.a
            public final void d(float f) {
                a.this.Om.setTranslationY(a.this.Om.getTranslationY() - f);
            }

            @Override // com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView.a
            public final boolean pq() {
                if (!a.this.Oo.pr() && d.yY() == 2) {
                    return false;
                }
                AnimatorSet animatorSet = new AnimatorSet();
                Animator animatorA = m.a(a.this.Om, (Interpolator) null, a.this.Om.getTranslationY(), 0.0f);
                if (d.yY() == 2) {
                    if (a.this.Mt.isComplete()) {
                        animatorSet.playTogether(animatorA);
                    } else {
                        animatorSet.playSequentially(animatorA, a.this.Oo.aC(true));
                    }
                } else if (d.yY() == 1) {
                    animatorSet.playTogether(animatorA);
                }
                animatorSet.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.core.page.splitLandingPage.a.5.1
                    @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
                    public final void onAnimationEnd(Animator animator) {
                        super.onAnimationEnd(animator);
                        a.this.Mt.po();
                        if (d.yY() != 2 || a.this.Mt.isComplete()) {
                            return;
                        }
                        a.this.Oo.ps();
                    }
                });
                animatorSet.start();
                return true;
            }
        });
    }

    private void j(ViewGroup viewGroup) {
        Presenter presenter = new Presenter();
        this.On = presenter;
        presenter.F(viewGroup);
        b bVar = new b();
        bVar.F(this.Om);
        com.kwad.components.core.page.b.a aVar = new com.kwad.components.core.page.b.a();
        this.Op = aVar;
        aVar.F(this.Mt);
        this.On.a(bVar);
        this.On.a(this.Op);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean pm() {
        SplitScrollWebView splitScrollWebView = this.Om;
        if (splitScrollWebView == null || splitScrollWebView.getTranslationY() != 0.0f || this.Oq) {
            return false;
        }
        this.Om.setDisableAnimation(false);
        this.Oq = true;
        SplitScrollWebView splitScrollWebView2 = this.Om;
        Animator animatorA = m.a((View) splitScrollWebView2, (Interpolator) null, 0.0f, splitScrollWebView2.getTranslationY() + this.Mt.getHeight());
        AnimatorSet animatorSet = new AnimatorSet();
        if (d.yY() == 2 && this.Oo.isVisible()) {
            this.Oo.po();
            animatorSet.playSequentially(this.Oo.aC(false), animatorA);
        } else {
            animatorSet.play(animatorA);
        }
        animatorSet.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.core.page.splitLandingPage.a.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                super.onAnimationEnd(animator);
                a.this.pn();
                a.this.Mt.ps();
                a.a(a.this, false);
            }
        });
        animatorSet.start();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void pn() {
        this.Op.lI();
        this.Op.F(this.Mt);
        this.Op.k(new com.kwad.components.core.page.recycle.e(this.mAdTemplate, this.mApkDownloadHelper, null));
    }

    private void v(View view) {
        this.Mu = (LinearLayout) view.findViewById(R.id.ksad_web_tip_bar);
        TextView textView = (TextView) view.findViewById(R.id.ksad_web_tip_bar_textview);
        ((ImageView) view.findViewById(R.id.ksad_web_tip_close_btn)).setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.splitLandingPage.a.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view2) {
                a.this.Mu.setVisibility(8);
            }
        });
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        boolean zBn = com.kwad.sdk.core.response.b.a.bn(adInfoCg);
        String strBj = com.kwad.sdk.core.response.b.a.bj(adInfoCg);
        if (!zBn) {
            this.Mu.setVisibility(8);
            return;
        }
        this.Mu.setVisibility(0);
        textView.setText(strBj);
        textView.setSelected(true);
    }

    @Override // com.kwad.components.core.n.e, com.kwad.sdk.l.a.b
    public final boolean bP() {
        SplitScrollWebView splitScrollWebView = this.Om;
        if (splitScrollWebView != null && splitScrollWebView.canGoBack()) {
            this.Om.goBack();
            return true;
        }
        if (pm()) {
            return true;
        }
        FeedVideoView feedVideoView = this.Mt;
        if (feedVideoView != null) {
            return feedVideoView.ss();
        }
        return false;
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        String string = getArguments().getString("key_photo");
        AdTemplate adTemplate = new AdTemplate();
        if (string != null) {
            try {
                adTemplate.parseJson(new JSONObject(string));
            } catch (JSONException e) {
                com.kwad.sdk.core.e.c.printStackTrace(e);
            }
        }
        this.mAdTemplate = adTemplate;
        adTemplate.mPvReported = getArguments().getBoolean("key_report", false);
        this.mAdTemplate.mAdWebVideoPageShowing = true;
    }

    @Override // com.kwad.components.core.n.e, com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public final void onDestroy() {
        super.onDestroy();
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate != null) {
            adTemplate.mAdWebVideoPageShowing = false;
        }
    }

    @Override // com.kwad.sdk.api.core.fragment.KsFragment, com.kwad.sdk.api.core.fragment.AbstractIFragmentLifecycle, com.kwad.sdk.api.core.fragment.IFragmentLifecycle
    public final void onViewCreated(View view, Bundle bundle) {
        super.onViewCreated(view, bundle);
        this.Mt = (FeedVideoView) findViewById(R.id.ksad_split_land_ad_feed_video);
        this.Om = (SplitScrollWebView) findViewById(R.id.ksad_video_webView);
        v(view);
        j(this.lJ);
        initView();
    }

    @Override // com.kwad.components.core.n.e
    public final int ov() {
        return R.layout.ksad_split_land_page;
    }

    public final void po() {
        this.Mt.po();
    }

    public final void setApkDownloadHelper(c cVar) {
        this.mApkDownloadHelper = cVar;
    }
}
