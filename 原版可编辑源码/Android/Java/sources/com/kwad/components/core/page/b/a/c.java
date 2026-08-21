package com.kwad.components.core.page.b.a;

import android.app.Activity;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.bj;

public final class c extends a {
    private LinearLayout Nd;
    private TextView Ne;
    private TextView Nf;
    private TextView Ng;
    private TextView Nh;
    private int Ni;
    private boolean counterPaused = false;
    private boolean Nj = false;
    private Runnable Nk = new Runnable() {
        @Override
        public final void run() {
            if (c.this.counterPaused) {
                bj.runOnUiThreadDelay(this, 500L);
                return;
            }
            if (c.this.Ni <= 0) {
                c.this.Ne.setText("任务已完成");
                c.this.Nf.setVisibility(8);
                c.this.Ng.setVisibility(8);
                c.this.Nh.setVisibility(8);
                com.kwad.components.ad.b.g gVar = (com.kwad.components.ad.b.g) com.kwad.sdk.components.c.f(com.kwad.components.ad.b.g.class);
                if (gVar != null && !c.this.Nj) {
                    gVar.notifyRewardVerify();
                }
            } else {
                c.this.oM();
                bj.runOnUiThreadDelay(this, 1000L);
            }
            c.i(c.this);
        }
    };
    private final com.kwad.sdk.core.c.c xj = new com.kwad.sdk.core.c.d() {
        @Override
        public final void b(Activity activity) {
            super.b(activity);
            c.this.counterPaused = true;
        }

        @Override
        public final void c(Activity activity) {
            super.c(activity);
            c.this.counterPaused = false;
        }
    };

    static int i(c cVar) {
        int i = cVar.Ni;
        cVar.Ni = i - 1;
        return i;
    }

    private void oL() {
        this.Nd.setVisibility(0);
        if (!this.MW.mAdTemplate.mRewardVerifyCalled) {
            oM();
            bj.runOnUiThreadDelay(this.Nk, 1000L);
        } else {
            this.Ne.setText("任务已完成");
            this.Nf.setVisibility(8);
            this.Ng.setVisibility(8);
            this.Nh.setVisibility(8);
        }
    }

    private void oM() {
        this.Nf.setText(oN());
        this.Nh.setText(oO());
    }

    private String oN() {
        int i = this.Ni / 60;
        StringBuilder sb = i >= 10 ? new StringBuilder() : new StringBuilder("0");
        sb.append(i);
        return sb.toString();
    }

    private String oO() {
        int i = this.Ni % 60;
        StringBuilder sb = i >= 10 ? new StringBuilder() : new StringBuilder("0");
        sb.append(i);
        return sb.toString();
    }

    @Override
    public final void ah() {
        super.ah();
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.a(this.xj);
        this.Ni = com.kwad.sdk.core.config.d.zC();
        oL();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.Nd = (LinearLayout) findViewById(R.id.ksad_reward_land_page_open_tip);
        this.Ne = (TextView) findViewById(R.id.ksad_reward_land_page_open_desc);
        this.Nf = (TextView) findViewById(R.id.ksad_reward_land_page_open_minute);
        this.Ng = (TextView) findViewById(R.id.ksad_reward_land_page_open_colon);
        this.Nh = (TextView) findViewById(R.id.ksad_reward_land_page_open_second);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.sdk.core.c.b.AU();
        com.kwad.sdk.core.c.b.b(this.xj);
        bj.b(this.Nk);
    }
}
