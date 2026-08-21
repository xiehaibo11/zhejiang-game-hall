package com.kwad.components.ad.reward.m;

import android.view.View;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.ad.widget.KsAppTagsView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.widget.KSRatingBar;
import java.util.List;

public final class c extends com.kwad.sdk.core.download.a.a implements com.kwad.sdk.widget.c {
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.ad.i.a yA;
    private Runnable yB;
    private View yo;
    private View yp;
    private Button yq;
    private Button yr;
    private TextView ys;
    private ImageView yt;
    private TextView yu;
    private TextView yv;
    private KSRatingBar yw;
    private KsAppTagsView yx;
    private a yy;
    private volatile boolean yz = false;

    public interface a {
        void c(boolean z, int i);
    }

    static class b {
        private String appName;
        private String ql;
        private String qm;
        private float yD;
        private List<String> yE;
        private int yF = 15;
        private String yG;

        b() {
        }

        public static b A(AdTemplate adTemplate) {
            String str;
            if (adTemplate == null) {
                return null;
            }
            AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
            b bVar = new b();
            bVar.appName = com.kwad.sdk.core.response.b.d.s(adTemplate) ? com.kwad.sdk.core.response.b.a.ap(adInfoCg) : com.kwad.sdk.core.response.b.a.ao(adInfoCg);
            bVar.yD = com.kwad.sdk.core.response.b.a.au(adInfoCg);
            bVar.qm = com.kwad.sdk.core.response.b.a.an(adInfoCg);
            bVar.ql = com.kwad.sdk.core.response.b.d.s(adTemplate) ? com.kwad.sdk.core.response.b.a.ct(adInfoCg) : com.kwad.sdk.core.response.b.a.bQ(adInfoCg);
            if (com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(com.kwad.sdk.core.response.b.d.cg(adTemplate)))) {
                bVar.yF = com.kwad.components.ad.reward.a.b.gE();
                str = "安装并体验%s秒  可领取奖励";
            } else {
                bVar.yF = com.kwad.sdk.core.config.d.zC();
                str = "浏览详情页%s秒，领取奖励";
            }
            bVar.yG = str;
            bVar.yE = com.kwad.sdk.core.response.b.c.bX(adTemplate);
            return bVar;
        }

        public final String jW() {
            return String.format(this.yG, Integer.valueOf(this.yF));
        }
    }

    public c(View view) {
        this.yo = view;
        initView();
        this.yA = new com.kwad.components.ad.i.a(view);
    }

    private void c(View view, boolean z) {
        int id = view.getId();
        if (id == R.id.ksad_reward_apk_info_install_container || id == R.id.ksad_reward_apk_info_install_action || id == R.id.ksad_reward_apk_info_install_start) {
            com.kwad.sdk.core.e.c.d("ApkInfoCardViewHelper", "onClick install");
            this.yz = true;
            a aVar = this.yy;
            if (aVar != null) {
                aVar.c(z, 1);
            }
        }
    }

    private void initView() {
        this.yq = (Button) this.yo.findViewById(R.id.ksad_reward_apk_info_install_action);
        this.yr = (Button) this.yo.findViewById(R.id.ksad_reward_apk_info_install_start);
        this.yp = this.yo.findViewById(R.id.ksad_reward_apk_info_install_container);
        this.yt = (ImageView) this.yo.findViewById(R.id.ksad_reward_apk_info_icon);
        this.ys = (TextView) this.yo.findViewById(R.id.ksad_reward_apk_info_name);
        this.yu = (TextView) this.yo.findViewById(R.id.ksad_reward_apk_info_desc);
        this.yw = (KSRatingBar) this.yo.findViewById(R.id.ksad_reward_apk_info_score);
        this.yx = (KsAppTagsView) this.yo.findViewById(R.id.ksad_reward_apk_info_tags);
    }

    @Override
    public final void a(View view) {
        c(view, true);
    }

    public final void a(a aVar) {
        this.yy = aVar;
    }

    public final void a(com.kwad.components.core.e.d.c cVar) {
        this.mApkDownloadHelper = cVar;
        if (cVar != null) {
            cVar.b(this);
        }
    }

    @Override
    public final void b(View view) {
        if (com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate)) {
            c(view, false);
        }
    }

    public final void c(AdTemplate adTemplate, boolean z) {
        this.mAdTemplate = adTemplate;
        b bVarA = b.A(adTemplate);
        if (bVarA == null) {
            return;
        }
        KSImageLoader.loadAppIcon(this.yt, bVarA.ql, adTemplate, 12);
        this.ys.setText(bVarA.appName);
        this.yu.setText(bVarA.qm);
        this.yw.setStar(bVarA.yD);
        if (com.kwad.sdk.core.response.b.d.f(adTemplate, com.kwad.components.ad.reward.a.b.k(com.kwad.sdk.core.response.b.d.cg(adTemplate)))) {
            this.yr.setText(com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)));
            this.yw.setVisibility(0);
        } else {
            this.yr.setText("查看详情");
            this.yw.setVisibility(8);
        }
        this.yq.setText(bVarA.jW());
        this.yq.setClickable(true);
        this.yr.setClickable(true);
        this.yp.setClickable(true);
        new com.kwad.sdk.widget.f(this.yq, this);
        new com.kwad.sdk.widget.f(this.yr, this);
        new com.kwad.sdk.widget.f(this.yp, this);
        List<String> list = bVarA.yE;
        if (z && list.size() == 0) {
            this.yu.setVisibility(8);
            TextView textView = (TextView) this.yo.findViewById(R.id.ksad_reward_apk_info_desc_2);
            this.yv = textView;
            textView.setVisibility(0);
            this.yv.setText(bVarA.qm);
        }
        if (list.size() == 0) {
            this.yx.setVisibility(8);
        }
        this.yx.setAppTags(list);
        if (this.yB == null) {
            this.yB = new Runnable() {
                @Override
                public final void run() {
                    com.kwad.sdk.core.e.c.d("ApkInfoCardViewHelper", hashCode() + " parentHeight: " + c.this.yp.getHeight());
                    if (c.this.yz) {
                        return;
                    }
                    c.this.yA.ia();
                }
            };
        }
        this.yp.postDelayed(this.yB, 1600L);
    }

    public final void i(String str, int i) {
        Button button = this.yr;
        if (button == null || str == null || i == 0) {
            return;
        }
        button.setText(str);
    }

    public final void jU() {
        Runnable runnable;
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.c(this);
        }
        com.kwad.components.ad.i.a aVar = this.yA;
        if (aVar != null) {
            aVar.jU();
        }
        View view = this.yp;
        if (view == null || (runnable = this.yB) == null) {
            return;
        }
        view.removeCallbacks(runnable);
        this.yB = null;
    }

    public final void jV() {
        this.yA.lO();
    }

    @Override
    public final void onDownloadFailed() {
        AdTemplate adTemplate = this.mAdTemplate;
        this.yr.setText(adTemplate != null ? com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即下载");
    }

    @Override
    public final void onDownloadFinished() {
        AdTemplate adTemplate = this.mAdTemplate;
        this.yr.setText(adTemplate == null ? "" : com.kwad.sdk.core.response.b.a.aM(adTemplate));
    }

    @Override
    public final void onDownloadStarted() {
    }

    @Override
    public final void onIdle() {
        AdTemplate adTemplate = this.mAdTemplate;
        this.yr.setText(adTemplate != null ? com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即下载");
    }

    @Override
    public final void onInstalled() {
        AdTemplate adTemplate = this.mAdTemplate;
        this.yr.setText(adTemplate != null ? com.kwad.sdk.core.response.b.a.U(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即打开");
    }

    @Override
    public final void onPaused(int i) {
        super.onPaused(i);
        if (i != 0) {
            this.yA.lO();
            this.yr.setText(com.kwad.sdk.core.response.b.a.cw(i));
        }
    }

    @Override
    public final void onProgressUpdate(int i) {
        if (i != 0) {
            this.yA.lO();
            this.yr.setText(com.kwad.sdk.core.response.b.a.cv(i));
        }
    }
}
