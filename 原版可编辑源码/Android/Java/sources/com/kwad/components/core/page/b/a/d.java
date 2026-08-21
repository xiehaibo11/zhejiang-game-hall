package com.kwad.components.core.page.b.a;

import android.view.View;
import android.widget.TextView;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.bj;

public final class d extends a {
    private View Nm;
    private TextView Nn;
    private int No;
    private Runnable Np = new Runnable() {
        @Override
        public final void run() {
            if (com.kwad.components.core.r.a.pS().pV()) {
                bj.runOnUiThreadDelay(this, 500L);
                return;
            }
            if (d.this.No <= 0) {
                d.this.Nn.setText("已获得权益");
                bj.runOnUiThreadDelay(new Runnable() {
                    @Override
                    public final void run() {
                        d.this.Nm.setVisibility(8);
                    }
                }, 500L);
                com.kwad.components.core.r.a.pS().aG(true);
            } else {
                d.this.Nn.setText(String.format("倒计时%d秒", Integer.valueOf(d.this.No)));
                d.c(d.this);
                com.kwad.components.core.r.a.pS().aG(d.this.No);
                bj.runOnUiThreadDelay(this, 1000L);
            }
        }
    };

    static int c(d dVar) {
        int i = dVar.No;
        dVar.No = i - 1;
        return i;
    }

    private void oP() {
        TextView textView;
        if (this.Nm == null || (textView = this.Nn) == null) {
            return;
        }
        textView.setText(String.format("倒计时%d秒", Integer.valueOf(this.No)));
        this.Nm.setVisibility(0);
        bj.runOnUiThreadDelay(this.Np, 1000L);
    }

    @Override
    public final void ah() {
        super.ah();
        this.No = com.kwad.sdk.core.response.b.a.aE(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate));
        com.kwad.components.core.r.a.pS().aG(this.No);
        oP();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.Nm = findViewById(R.id.ksad_web_reward_task_layout);
        this.Nn = (TextView) findViewById(R.id.ksad_web_reward_task_text);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        bj.b(this.Np);
    }
}
