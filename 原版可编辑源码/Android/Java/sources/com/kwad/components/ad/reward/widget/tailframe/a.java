package com.kwad.components.ad.reward.widget.tailframe;

import android.content.Context;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.reward.j;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.page.widget.TextProgressBar;
import com.kwad.components.core.widget.KsLogoView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.widget.c;
import com.kwad.sdk.widget.f;
import org.json.JSONObject;

public abstract class a implements c {
    protected View Bo;
    protected ImageView Bp;
    private com.kwad.components.ad.widget.tailframe.appbar.a Bq;
    private TailFrameBarH5View Br;
    private b Bs;
    private TextProgressBar Bt;
    private View Bu;
    private int Bv;
    private TextView dC;
    protected AdInfo mAdInfo;
    protected AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    protected KsLogoView mLogoView;
    private JSONObject mReportExtData;
    private j qx;

    public a(int i) {
        this.Bv = i;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:0x002d, code lost:
    
        r1 = 1;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void b(View view, final boolean z) {
        if (d.s(this.mAdTemplate)) {
            this.qx.a(1, this.Bo.getContext(), z ? 1 : 153, view == this.Bu ? 1 : 2);
        } else {
            if (com.kwad.sdk.core.response.b.a.ax(this.mAdInfo)) {
            }
            com.kwad.components.core.e.d.a.a(new a.a(view.getContext()).P(this.mAdTemplate).b(this.mApkDownloadHelper).an(i == 1 ? 1 : 0).am(1).am(view == this.Bt).ao(i).a(new a.b() {
                @Override
                public final void onAdClicked() {
                    if (a.this.Bs != null) {
                        a.this.Bs.P(z);
                    }
                }
            }));
        }
    }

    private void bindDownloadListener() {
        this.mApkDownloadHelper = new com.kwad.components.core.e.d.c(this.mAdTemplate, this.mReportExtData, new com.kwad.sdk.core.download.a.a() {
            @Override
            public final void onDownloadFailed() {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.aw(a.this.mAdInfo), 0);
            }

            @Override
            public final void onDownloadFinished() {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.aM(a.this.mAdTemplate), 0);
            }

            @Override
            public final void onIdle() {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.aw(a.this.mAdInfo), 0);
            }

            @Override
            public final void onInstalled() {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.U(a.this.mAdInfo), 0);
            }

            @Override
            public final void onPaused(int i) {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.cw(i), i);
            }

            @Override
            public final void onProgressUpdate(int i) {
                a.this.Bq.z(a.this.mAdInfo);
                a.this.Bt.e(com.kwad.sdk.core.response.b.a.cv(i), i);
            }
        });
    }

    private void km() {
        this.Bo.setOnClickListener(null);
        this.mApkDownloadHelper = null;
    }

    private void ko() {
        if (!com.kwad.sdk.core.response.b.a.ax(this.mAdInfo) && !d.s(this.mAdTemplate)) {
            this.Br.b(this.mAdTemplate);
            TextView h5OpenBtn = this.Br.getH5OpenBtn();
            this.dC = h5OpenBtn;
            h5OpenBtn.setClickable(true);
            this.Br.setVisibility(0);
            new f(this.dC, this);
            return;
        }
        this.Bq.b(this.mAdTemplate);
        this.Bq.setVisibility(0);
        this.Bt = this.Bq.getTextProgressBar();
        if (!d.s(this.mAdTemplate)) {
            this.Bt.setClickable(true);
            new f(this.Bt, this);
            bindDownloadListener();
        } else {
            View btnInstallContainer = this.Bq.getBtnInstallContainer();
            this.Bu = btnInstallContainer;
            btnInstallContainer.setClickable(true);
            new f(this.Bu, this);
        }
    }

    public void D(Context context) {
        View viewA = l.a(context, this.Bv, null, false);
        this.Bo = viewA;
        this.Bp = (ImageView) viewA.findViewById(R.id.ksad_video_thumb_img);
        this.mLogoView = (KsLogoView) this.Bo.findViewById(R.id.ksad_video_tf_logo);
        this.Bq = (com.kwad.components.ad.widget.tailframe.appbar.a) this.Bo.findViewById(R.id.ksad_video_app_tail_frame);
        this.Br = (TailFrameBarH5View) this.Bo.findViewById(R.id.ksad_video_h5_tail_frame);
    }

    @Override
    public final void a(View view) {
        b(view, true);
    }

    public void a(AdTemplate adTemplate, JSONObject jSONObject, b bVar) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = d.cg(adTemplate);
        this.mReportExtData = jSONObject;
        this.Bs = bVar;
        this.mLogoView.aa(this.mAdTemplate);
        ko();
        this.Bo.setClickable(true);
        new f(this.Bo, this);
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            b(view, false);
        }
    }

    public final void d(boolean z, boolean z2) {
        this.Br.e(z, z2);
    }

    public final void destroy() {
        com.kwad.components.ad.widget.tailframe.appbar.a aVar = this.Bq;
        if (aVar != null) {
            aVar.kq();
            this.Bq.setVisibility(8);
        }
        TailFrameBarH5View tailFrameBarH5View = this.Br;
        if (tailFrameBarH5View != null) {
            tailFrameBarH5View.kq();
            this.Br.setVisibility(8);
        }
        km();
    }

    public final void jV() {
        com.kwad.components.ad.widget.tailframe.appbar.a aVar = this.Bq;
        if (aVar != null) {
            aVar.kq();
        }
        TailFrameBarH5View tailFrameBarH5View = this.Br;
        if (tailFrameBarH5View != null) {
            tailFrameBarH5View.kq();
        }
    }

    public final View kn() {
        return this.Bo;
    }

    public final void setCallerContext(j jVar) {
        this.qx = jVar;
    }
}
