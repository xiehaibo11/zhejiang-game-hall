package com.kwad.components.ad.fullscreen.c.a;

import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import com.kwad.components.core.video.l;
import com.kwad.components.core.webview.b.j;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.utils.bn;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.components.ad.reward.presenter.a implements bn.a {
    private TextView gv;
    private View gw;
    private bn gx;
    private boolean gy;
    private long gz;
    private AdInfo mAdInfo;
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() { // from class: com.kwad.components.ad.fullscreen.c.a.a.1
        @Override // com.kwad.components.core.webview.b.e.b
        public final void q(String str) {
            if (j.b("ksad-video-top-bar", a.this.qx.mAdTemplate).equals(str)) {
                a.this.bU();
            }
        }
    };
    private l mVideoPlayStateListener = new l() { // from class: com.kwad.components.ad.fullscreen.c.a.a.2
        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.g
        public final void onLivePlayEnd() {
            super.onLivePlayEnd();
            if (a.this.gy) {
                return;
            }
            a.this.gx.sendEmptyMessageDelayed(1, 500L);
        }

        @Override // com.kwad.components.core.video.l, com.kwad.components.core.video.h
        public final void onMediaPlayProgress(long j, long j2) {
            if (!a.this.qx.oV.jR()) {
                a.this.a(j, j2);
                a.this.gz = j2;
            } else if (j2 > 800) {
                a.this.gz = j2;
                if (a.this.gz > j) {
                    a.this.gv.setVisibility(8);
                    ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) a.this.gw.getLayoutParams();
                    marginLayoutParams.leftMargin = com.kwad.sdk.d.a.a.a(a.this.getContext(), 0.0f);
                    a.this.gw.setLayoutParams(marginLayoutParams);
                }
                a.this.a(j, j2);
                a.a(a.this, true);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void a(long j, long j2) {
        w(Math.max((int) (((j - j2) / 1000.0f) + 0.5f), 0));
    }

    static /* synthetic */ boolean a(a aVar, boolean z) {
        aVar.gy = true;
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void bU() {
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate);
        this.mAdInfo = adInfoCg;
        this.gv.setText(String.valueOf(com.kwad.sdk.core.response.b.a.G(adInfoCg)));
        this.gv.setVisibility(0);
        this.qx.oV.a(this.mVideoPlayStateListener);
    }

    private void w(int i) {
        this.gv.setText(String.valueOf(i));
    }

    @Override // com.kwad.sdk.utils.bn.a
    public final void a(Message message) {
        if (message.what == 1) {
            if (this.qx.gb() || this.qx.ga()) {
                this.gx.sendEmptyMessageDelayed(1, 500L);
                return;
            }
            long j = this.gz + 500;
            this.gz = j;
            if (j <= 30000) {
                a(30000L, j);
                this.gx.sendEmptyMessageDelayed(1, 500L);
            } else {
                this.gv.setVisibility(8);
                ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) this.gw.getLayoutParams();
                marginLayoutParams.leftMargin = com.kwad.sdk.d.a.a.a(getContext(), 0.0f);
                this.gw.setLayoutParams(marginLayoutParams);
            }
        }
    }

    @Override // com.kwad.components.ad.reward.presenter.a, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.gx = new bn(this);
        if (com.kwad.components.ad.reward.j.c(this.qx)) {
            com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
            return;
        }
        bU();
        if (this.qx.oV.jR()) {
            w(30);
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onCreate() {
        super.onCreate();
        this.gv = (TextView) findViewById(R.id.ksad_video_count_down);
        this.gw = findViewById(R.id.ksad_video_sound_switch);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
        this.qx.oV.b(this.mVideoPlayStateListener);
        this.gy = false;
        this.gx.removeCallbacksAndMessages(null);
    }
}
