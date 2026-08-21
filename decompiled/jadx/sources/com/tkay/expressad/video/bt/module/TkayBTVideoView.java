package com.tkay.expressad.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.webkit.WebView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.f.b;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener;
import com.tkay.expressad.playercommon.PlayerView;
import com.tkay.expressad.video.widget.SoundImageView;
import com.tkay.expressad.widget.FeedBackButton;
import java.io.File;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TkayBTVideoView extends BTBaseView {
    private static boolean H = false;
    private static final String N = "2";
    private static final String p = "tkay_reward_videoview_item";
    private a A;
    private int B;
    private int C;
    private boolean D;
    private int E;
    private int F;
    private String G;
    private boolean I;
    private boolean J;
    private boolean K;
    private RelativeLayout L;
    private ProgressBar M;
    private PlayerView q;
    private SoundImageView r;
    private TextView s;
    private View t;
    private FeedBackButton u;
    private WebView v;
    private com.tkay.expressad.videocommon.b.a w;
    private int x;
    private int y;
    private int z;

    public void setCreateWebView(WebView webView) {
        this.v = webView;
    }

    public void setOrientation(int i) {
        this.F = i;
    }

    public TkayBTVideoView(Context context) {
        super(context);
        this.x = 0;
        this.y = 0;
        this.z = 0;
        this.B = 2;
        this.D = false;
        this.E = 2;
        this.F = 1;
        this.I = false;
        this.J = false;
        this.K = false;
    }

    public TkayBTVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.x = 0;
        this.y = 0;
        this.z = 0;
        this.B = 2;
        this.D = false;
        this.E = 2;
        this.F = 1;
        this.I = false;
        this.J = false;
        this.K = false;
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void setCampaign(c cVar) {
        super.setCampaign(cVar);
        if (cVar != null && cVar.i() > 0) {
            this.s.setBackgroundResource(i.a(m.a().f(), "tkay_reward_video_time_count_num_bg", i.c));
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, t.b(m.a().f(), 30.0f));
            int iB = t.b(m.a().f(), 5.0f);
            layoutParams.setMargins(iB, 0, 0, 0);
            this.s.setPadding(iB, 0, iB, 0);
            this.s.setLayoutParams(layoutParams);
            return;
        }
        this.s.setBackgroundResource(i.a(m.a().f(), "tkay_reward_shape_progress", i.c));
        this.s.setWidth(t.b(m.a().f(), 30.0f));
    }

    public void soundOperate(int i, int i2, String str) {
        if (this.h) {
            this.B = i;
            if (i == 1) {
                this.r.setSoundStatus(false);
                this.q.closeSound();
            } else if (i == 2) {
                this.r.setSoundStatus(true);
                this.q.openSound();
            }
            if (i2 == 1) {
                this.r.setVisibility(8);
            } else if (i2 == 2) {
                this.r.setVisibility(0);
            }
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void init(Context context) {
        int iFindLayout = findLayout(p);
        if (iFindLayout > 0) {
            this.f.inflate(iFindLayout, this);
            this.h = b();
            a();
        }
        H = false;
    }

    public void onResume() {
        PlayerView playerView = this.q;
        if (playerView != null) {
            playerView.setDesk(true);
            this.q.setIsCovered(false);
            if (this.J) {
                this.q.onResume();
            }
        }
    }

    public void onPause() {
        PlayerView playerView = this.q;
        if (playerView != null) {
            boolean zIsPlayIng = playerView.isPlayIng();
            this.J = zIsPlayIng;
            this.q.setIsBTVideoPlaying(zIsPlayIng);
            this.q.onPause();
        }
    }

    public void onStop() {
        PlayerView playerView = this.q;
        if (playerView != null) {
            playerView.setIsCovered(true);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        if (!this.K) {
            com.tkay.expressad.video.bt.a.c.a();
            this.E = com.tkay.expressad.video.bt.a.c.e(this.c);
        }
        View view = this.t;
        if (view != null) {
            view.setVisibility(this.y == 0 ? 8 : 0);
        }
        SoundImageView soundImageView = this.r;
        if (soundImageView != null) {
            soundImageView.setVisibility(this.z == 0 ? 8 : 0);
        }
        TextView textView = this.s;
        if (textView != null) {
            textView.setVisibility(this.x != 0 ? 0 : 8);
            if (this.s.getVisibility() == 0 && b.a().b()) {
                this.b.l(this.c);
                b.a().a(this.c + "_1", this.b);
                b.a().a(this.c + "_1", this.u);
            }
        }
    }

    public boolean playMute() {
        try {
            if (this.q != null && this.v != null) {
                this.q.closeSound();
                this.r.setSoundStatus(false);
                this.B = 1;
                a(this.v, "onPlayerMute", this.d);
                return true;
            }
        } catch (Exception e) {
            e.getMessage();
        }
        return false;
    }

    public int getMute() {
        return this.B;
    }

    public boolean playUnMute() {
        try {
            if (this.q == null || this.v == null) {
                return false;
            }
            this.q.openSound();
            this.r.setSoundStatus(true);
            this.B = 2;
            a(this.v, "onUnmute", this.d);
            return true;
        } catch (Exception e) {
            e.getMessage();
            return false;
        }
    }

    public void play() {
        try {
            if (!this.K) {
                if (this.E == 1) {
                    playMute();
                } else {
                    playUnMute();
                }
                if (!this.q.playVideo() && this.A != null) {
                    this.A.onPlayError("play video failed");
                }
                this.K = true;
                if (this.v != null) {
                    a(this.v, "onPlayerPlay", this.d);
                    return;
                }
                return;
            }
            if (this.D) {
                this.q.playVideo(0);
                this.D = false;
            } else {
                this.q.start(false);
            }
            if (this.v != null) {
                a(this.v, "onPlayerPlay", this.d);
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void resume() {
        try {
            if (this.q != null) {
                if (this.D) {
                    this.q.playVideo(0);
                    this.D = false;
                } else {
                    this.q.onResume();
                }
                if (this.v != null) {
                    a(this.v, "onPlayerResume", this.d);
                }
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void pause() {
        try {
            if (this.q != null) {
                this.q.pause();
                if (this.v != null) {
                    a(this.v, "onPlayerPause", this.d);
                }
            }
        } catch (Exception e) {
            e.getMessage();
        }
    }

    public void stop() {
        try {
            if (this.q != null) {
                this.q.pause();
                this.q.stop();
                try {
                    this.q.prepare();
                    this.q.justSeekTo(0);
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (this.v != null) {
                    a(this.v, "onPlayerStop", this.d);
                }
            }
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    public void onDestory() {
        try {
            if (this.q != null) {
                this.q.setOnClickListener(null);
                this.q.release();
                this.q = null;
            }
            if (this.r != null) {
                this.r.setOnClickListener(null);
            }
            if (this.t != null) {
                this.t.setOnClickListener(null);
            }
            if (this.v != null) {
                this.v = null;
            }
            setOnClickListener(null);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private boolean b() {
        try {
            this.q = (PlayerView) findViewById(findID("tkay_vfpv"));
            this.r = (SoundImageView) findViewById(findID("tkay_sound_switch"));
            this.s = (TextView) findViewById(findID("tkay_tv_count"));
            this.t = findViewById(findID("tkay_rl_playing_close"));
            this.L = (RelativeLayout) findViewById(findID("tkay_top_control"));
            this.M = (ProgressBar) findViewById(findID("tkay_video_progress_bar"));
            this.q.setIsBTVideo(true);
            this.u = (FeedBackButton) findViewById(findID("tkay_native_endcard_feed_btn"));
            return isNotNULL(this.q, this.r, this.s, this.t);
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }

    private void c() {
        String str;
        if (this.b.w() == 94 || this.b.w() == 287) {
            str = this.b.Z() + this.b.aZ() + this.b.S();
        } else {
            str = this.b.aZ() + this.b.S() + this.b.B();
        }
        com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.c, str);
        if (aVarA != null) {
            this.w = aVarA;
        }
    }

    private String d() {
        String strS = "";
        try {
            strS = this.b.S();
            if (this.w == null || this.w.k() != 5) {
                return strS;
            }
            String strE = this.w.e();
            return !w.a(strE) ? new File(strE).exists() ? strE : strS : strS;
        } catch (Throwable th) {
            th.getMessage();
            return strS;
        }
    }

    private static int e() {
        try {
            com.tkay.expressad.videocommon.e.a aVarB = com.tkay.expressad.videocommon.e.c.a().b();
            if (aVarB == null) {
                com.tkay.expressad.videocommon.e.c.a();
                com.tkay.expressad.videocommon.e.c.c();
            }
            if (aVarB != null) {
                return (int) aVarB.g();
            }
            return 5;
        } catch (Throwable th) {
            th.printStackTrace();
            return 5;
        }
    }

    @Override // com.tkay.expressad.video.bt.module.BTBaseView
    protected final void a() {
        super.a();
        if (this.h) {
            this.r.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTVideoView.1
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    boolean zIsSilent = TkayBTVideoView.this.q.isSilent();
                    if (TkayBTVideoView.this.v != null) {
                        try {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("code", BTBaseView.n);
                            jSONObject.put("id", TkayBTVideoView.this.d);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("mute", TkayBTVideoView.this.B);
                            jSONObject.put("data", jSONObject2);
                            j.a();
                            j.a(TkayBTVideoView.this.v, "onPlayerMuteBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                            StringBuilder sb = new StringBuilder("onPlayerMuteBtnClicked isMute = ");
                            sb.append(zIsSilent);
                            sb.append(" mute = ");
                            sb.append(TkayBTVideoView.this.B);
                        } catch (Exception e) {
                            com.tkay.expressad.video.bt.a.c.a();
                            com.tkay.expressad.video.bt.a.c.a(TkayBTVideoView.this.v, e.getMessage());
                        }
                    }
                }
            });
            this.t.setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTVideoView.2
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (TkayBTVideoView.this.v != null) {
                        BTBaseView.a(TkayBTVideoView.this.v, "onPlayerCloseBtnClicked", TkayBTVideoView.this.d);
                    }
                }
            });
            setOnClickListener(new View.OnClickListener() { // from class: com.tkay.expressad.video.bt.module.TkayBTVideoView.3
                @Override // android.view.View.OnClickListener
                public final void onClick(View view) {
                    if (TkayBTVideoView.this.v != null) {
                        try {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("code", BTBaseView.n);
                            jSONObject.put("id", TkayBTVideoView.this.d);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("x", String.valueOf(view.getX()));
                            jSONObject2.put("y", String.valueOf(view.getY()));
                            jSONObject.put("data", jSONObject2);
                            j.a();
                            j.a(TkayBTVideoView.this.v, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                        } catch (Exception unused) {
                            com.tkay.expressad.video.bt.a.c.a();
                            com.tkay.expressad.video.bt.a.c.a(TkayBTVideoView.this.v, "onClicked", TkayBTVideoView.this.d);
                        }
                    }
                }
            });
        }
    }

    private static final class a extends DefaultVideoPlayerStatusListener {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private TkayBTVideoView f7203a;
        private WebView b;
        private String c;
        private String d;
        private int e;
        private int f;
        private boolean g;
        private int k;
        private int l;
        private boolean h = false;
        private boolean i = false;
        private boolean j = false;
        private boolean m = false;

        private int a() {
            return this.e;
        }

        public a(TkayBTVideoView tkayBTVideoView, WebView webView) {
            this.f7203a = tkayBTVideoView;
            this.b = webView;
            this.c = tkayBTVideoView.d;
            this.d = tkayBTVideoView.c;
        }

        public final void a(int i, int i2) {
            this.k = i;
            this.l = i2;
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onPlayStarted(int i) {
            super.onPlayStarted(i);
            if (!this.g) {
                this.f7203a.M.setMax(i);
                WebView webView = this.b;
                if (webView != null) {
                    BTBaseView.a(webView, "onPlayerPlay", this.c);
                }
                this.g = true;
            }
            boolean unused = TkayBTVideoView.H = false;
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onPlayCompleted() {
            super.onPlayCompleted();
            if (this.f7203a.b == null || this.f7203a.b.i() <= 0) {
                this.f7203a.s.setText("0");
            } else {
                this.f7203a.s.setText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
            }
            this.f7203a.q.setClickable(false);
            WebView webView = this.b;
            if (webView != null) {
                BTBaseView.a(webView, "onPlayerFinish", this.c);
            }
            this.e = this.f;
            boolean unused = TkayBTVideoView.H = true;
            this.f7203a.stop();
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onPlayError(String str) {
            super.onPlayError(str);
            if (this.b != null) {
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("code", BTBaseView.o);
                    jSONObject.put("id", this.c);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("error", str);
                    jSONObject2.put("id", this.c);
                    jSONObject.put("data", jSONObject2);
                    j.a();
                    j.a(this.b, "onPlayerFailed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.b, e.getMessage());
                }
            }
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onPlayProgress(int i, int i2) {
            int i3;
            String str;
            String strValueOf;
            super.onPlayProgress(i, i2);
            if (this.f7203a.h) {
                int i4 = 0;
                if (this.f7203a.b != null) {
                    i4 = this.f7203a.b.i();
                    b.a().a(this.f7203a.b.K() + "_1", i);
                }
                if (i4 > i2) {
                    i4 = i2;
                }
                int i5 = i4 <= 0 ? i2 - i : i4 - i;
                if (i5 <= 0) {
                    strValueOf = i4 <= 0 ? "0" : (String) this.f7203a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_complete", i.g));
                } else if (i4 <= 0) {
                    strValueOf = String.valueOf(i5);
                } else {
                    strValueOf = i5 + ((String) this.f7203a.getContext().getResources().getText(i.a(m.a().f(), "tkay_reward_video_view_reward_time_left", i.g)));
                }
                this.f7203a.s.setText(strValueOf);
            }
            this.f = i2;
            this.e = i;
            this.f7203a.M.setMax(this.f);
            this.f7203a.M.setProgress(this.e);
            if (this.b != null) {
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("code", BTBaseView.n);
                    jSONObject.put("id", this.c);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("id", this.c);
                    jSONObject2.put(NotificationCompat.CATEGORY_PROGRESS, TkayBTVideoView.b(i, i2));
                    jSONObject2.put("time", String.valueOf(i));
                    jSONObject2.put(r.ag, String.valueOf(i2));
                    jSONObject.put("data", jSONObject2);
                    j.a();
                    j.a(this.b, "onPlayerProgressChanged", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    com.tkay.expressad.video.bt.a.c.a();
                    com.tkay.expressad.video.bt.a.c.a(this.b, e.getMessage());
                }
            }
            try {
                if (this.k == 100 || this.m || this.k == 0 || this.l < 0 || i < (i3 = (i2 * this.l) / 100)) {
                    return;
                }
                if (this.f7203a.b.w() == 94 || this.f7203a.b.w() == 287) {
                    str = this.f7203a.b.Z() + this.f7203a.b.aZ() + this.f7203a.b.S();
                } else {
                    str = this.f7203a.b.aZ() + this.f7203a.b.S() + this.f7203a.b.B();
                }
                com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.d, str);
                if (aVarA != null) {
                    aVarA.i();
                    this.m = true;
                    StringBuilder sb = new StringBuilder("CDRate is : ");
                    sb.append(i3);
                    sb.append(" and start download !");
                }
            } catch (Exception e2) {
                e2.getMessage();
            }
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onBufferingStart(String str) {
            try {
                super.onBufferingStart(str);
                if ((str.equals("mediaplayer prepare timeout") || str.equals("play buffering tiemout")) && this.b != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("code", BTBaseView.n);
                        jSONObject.put("id", this.c);
                        jSONObject.put("data", new JSONObject());
                        j.a();
                        j.a(this.b, "onPlayerTimeout", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        com.tkay.expressad.video.bt.a.c.a();
                        com.tkay.expressad.video.bt.a.c.a(this.b, e.getMessage());
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onBufferingEnd() {
            try {
                super.onBufferingEnd();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onPlaySetDataSourceError(String str) {
            super.onPlaySetDataSourceError(str);
        }

        @Override // com.tkay.expressad.playercommon.DefaultVideoPlayerStatusListener, com.tkay.expressad.playercommon.VideoPlayerStatusListener
        public final void onVideoDownloadResume() {
            String str;
            if (this.f7203a.b.w() == 94 || this.f7203a.b.w() == 287) {
                str = this.f7203a.b.Z() + this.f7203a.b.aZ() + this.f7203a.b.S();
            } else {
                str = this.f7203a.b.aZ() + this.f7203a.b.S() + this.f7203a.b.B();
            }
            com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.d, str);
            if (aVarA != null) {
                aVarA.i();
                this.m = true;
            }
        }

        private void b() {
            this.f7203a = null;
            this.b = null;
            boolean unused = TkayBTVideoView.H = false;
        }
    }

    public void setSoundImageViewVisble(int i) {
        this.r.setVisibility(i == 0 ? 4 : 0);
    }

    public void setCountDownTextViewVisable(int i) {
        this.s.setVisibility(i == 0 ? 4 : 0);
    }

    public void setCloseViewVisable(int i) {
        this.t.setVisibility(i == 0 ? 4 : 0);
    }

    public void setShowClose(int i) {
        this.y = i;
    }

    public void setProgressBarState(int i) {
        ProgressBar progressBar = this.M;
        if (progressBar != null) {
            progressBar.setVisibility(i == 0 ? 8 : 0);
        }
    }

    public void setShowMute(int i) {
        this.z = i;
    }

    public void setShowTime(int i) {
        this.x = i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String b(int i, int i2) {
        if (i2 != 0) {
            double d = i / i2;
            try {
                StringBuilder sb = new StringBuilder();
                sb.append(t.a(Double.valueOf(d)));
                return sb.toString();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return String.valueOf(i2);
    }

    public void setVolume(float f, float f2) {
        PlayerView playerView = this.q;
        if (playerView != null) {
            playerView.setVolume(f, f2);
        }
    }

    public void setPlaybackParams(float f) {
        PlayerView playerView = this.q;
        if (playerView != null) {
            playerView.setPlaybackParams(f);
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        if (i <= 0) {
            i = this.L.getPaddingLeft();
        }
        if (i2 <= 0) {
            i2 = this.L.getPaddingRight();
        }
        if (i3 <= 0) {
            i3 = this.L.getPaddingTop();
        }
        if (i4 <= 0) {
            i4 = this.L.getPaddingBottom();
        }
        new StringBuilder("NOTCH BTVideoView ").append(String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        this.L.setPadding(i, i3, i2, i4);
    }

    private int a(c cVar) {
        if (cVar != null) {
            if (cVar.ao() != -1) {
                return cVar.ao();
            }
            return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.c, false).v();
        }
        return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.c, false).v();
    }

    private int f() {
        return com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.c, false).x();
    }

    public void preLoadData() {
        String str;
        int iV;
        if (this.b.w() == 94 || this.b.w() == 287) {
            str = this.b.Z() + this.b.aZ() + this.b.S();
        } else {
            str = this.b.aZ() + this.b.S() + this.b.B();
        }
        com.tkay.expressad.videocommon.b.a aVarA = com.tkay.expressad.videocommon.b.c.a().a(this.c, str);
        if (aVarA != null) {
            this.w = aVarA;
        }
        this.C = e();
        this.G = d();
        if (this.h && !TextUtils.isEmpty(this.G) && this.b != null) {
            a aVar = new a(this, this.v);
            this.A = aVar;
            c cVar = this.b;
            if (cVar != null && cVar.ao() != -1) {
                iV = cVar.ao();
            } else {
                iV = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.c, false).v();
            }
            aVar.a(iV, com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.c, false).x());
            this.q.setDesk(false);
            this.q.initBufferIngParam(this.C);
            this.q.initVFPData(this.G, this.b.S(), this.b.ao(), this.A);
            soundOperate(this.B, -1, null);
        }
        H = false;
    }
}
