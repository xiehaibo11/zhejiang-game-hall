package com.mbridge.msdk.video.bt.module;

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
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose;
import com.iab.omid.library.mmadbridge.adsession.media.InteractionType;
import com.iab.omid.library.mmadbridge.adsession.media.MediaEvents;
import com.iab.omid.library.mmadbridge.adsession.media.Position;
import com.iab.omid.library.mmadbridge.adsession.media.VastProperties;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.dycreator.baseview.cusview.SoundImageView;
import com.mbridge.msdk.foundation.b.b;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.playercommon.DefaultVideoPlayerStatusListener;
import com.mbridge.msdk.playercommon.PlayerView;
import com.mbridge.msdk.video.bt.a.c;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.h.i;
import java.io.File;
import org.json.JSONObject;

public class MBridgeBTVideoView extends BTBaseView {
    private static boolean J;
    private AdEvents A;
    private MediaEvents B;
    private a C;
    private int D;
    private int E;
    private boolean F;
    private int G;
    private int H;
    private String I;
    private boolean K;
    private boolean L;
    private boolean M;
    private RelativeLayout N;
    private ProgressBar O;
    private PlayerView p;
    private SoundImageView q;
    private TextView r;
    private View s;
    private FeedBackButton t;
    private WebView u;
    private com.mbridge.msdk.videocommon.download.a v;
    private int w;
    private int x;
    private int y;
    private AdSession z;

    public void setCreateWebView(WebView webView) {
        this.u = webView;
    }

    public void setOrientation(int i) {
        this.H = i;
    }

    public MBridgeBTVideoView(Context context) {
        super(context);
        this.w = 0;
        this.x = 0;
        this.y = 0;
        this.D = 2;
        this.F = false;
        this.G = 2;
        this.H = 1;
        this.K = false;
        this.L = false;
        this.M = false;
    }

    public MBridgeBTVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.w = 0;
        this.x = 0;
        this.y = 0;
        this.D = 2;
        this.F = false;
        this.G = 2;
        this.H = 1;
        this.K = false;
        this.L = false;
        this.M = false;
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override
    public void setCampaign(CampaignEx campaignEx) {
        super.setCampaign(campaignEx);
        if (campaignEx != null && campaignEx.getVideoCompleteTime() > 0) {
            this.r.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_time_count_num_bg", i.c));
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 30.0f));
            int iB = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 5.0f);
            layoutParams.setMargins(iB, 0, 0, 0);
            this.r.setPadding(iB, 0, iB, 0);
            this.r.setLayoutParams(layoutParams);
            return;
        }
        this.r.setBackgroundResource(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_shape_progress", i.c));
        this.r.setWidth(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 30.0f));
    }

    public void soundOperate(int i, int i2, String str) {
        if (this.h) {
            this.D = i;
            if (i == 1) {
                this.q.setSoundStatus(false);
                this.p.closeSound();
            } else if (i == 2) {
                this.q.setSoundStatus(true);
                this.p.openSound();
            }
            if (i2 == 1) {
                this.q.setVisibility(8);
            } else if (i2 == 2) {
                this.q.setVisibility(0);
            }
        }
    }

    @Override
    public void init(Context context) {
        int iFindLayout = findLayout("mbridge_reward_videoview_item");
        if (iFindLayout > 0) {
            this.f.inflate(iFindLayout, this);
            this.h = b();
            if (!this.h) {
                z.d("BTBaseView", "MBridgeVideoView init fail");
            }
            a();
        }
        J = false;
    }

    public void onResume() {
        PlayerView playerView = this.p;
        if (playerView != null) {
            playerView.setDesk(true);
            this.p.setIsCovered(false);
            if (this.L) {
                this.p.start(true);
            }
        }
    }

    public void onPause() {
        PlayerView playerView = this.p;
        if (playerView != null) {
            boolean zIsPlayIng = playerView.isPlayIng();
            this.L = zIsPlayIng;
            this.p.setIsBTVideoPlaying(zIsPlayIng);
            this.p.onPause();
        }
    }

    public void onStop() {
        PlayerView playerView = this.p;
        if (playerView != null) {
            playerView.setIsCovered(true);
        }
    }

    @Override
    protected void onAttachedToWindow() {
        View rootView;
        super.onAttachedToWindow();
        if (!this.M) {
            this.G = c.a().f(this.c);
        }
        View view = this.s;
        if (view != null) {
            view.setVisibility(this.x == 0 ? 8 : 0);
        }
        SoundImageView soundImageView = this.q;
        if (soundImageView != null) {
            soundImageView.setVisibility(this.y == 0 ? 8 : 0);
        }
        TextView textView = this.r;
        if (textView != null) {
            textView.setVisibility(this.w != 0 ? 0 : 8);
            if (this.r.getVisibility() == 0 && b.a().b()) {
                this.b.setCampaignUnitId(this.c);
                b.a().a(this.c + "_1", this.b);
                b.a().a(this.c + "_1", this.t);
            }
        }
        if (this.z == null || (rootView = getRootView()) == null) {
            return;
        }
        this.z.removeFriendlyObstruction(rootView);
    }

    public boolean playMute() {
        try {
            if (this.p != null && this.u != null) {
                this.p.closeSound();
                this.q.setSoundStatus(false);
                this.D = 1;
                try {
                    if (this.B != null) {
                        this.B.volumeChange(0.0f);
                    }
                } catch (IllegalArgumentException e) {
                    z.a("OMSDK", e.getMessage());
                }
                a(this.u, "onPlayerMute", this.d);
                return true;
            }
        } catch (Exception e2) {
            z.d("BTBaseView", e2.getMessage());
        }
        return false;
    }

    public int getMute() {
        return this.D;
    }

    public boolean playUnMute() {
        try {
            if (this.p == null || this.u == null) {
                return false;
            }
            this.p.openSound();
            this.q.setSoundStatus(true);
            this.D = 2;
            try {
                if (this.B != null) {
                    this.B.volumeChange(1.0f);
                }
            } catch (IllegalArgumentException e) {
                z.a("OMSDK", e.getMessage());
            }
            a(this.u, "onUnmute", this.d);
            return true;
        } catch (Exception e2) {
            z.d("BTBaseView", e2.getMessage());
            return false;
        }
    }

    public void play() {
        try {
            if (!this.M) {
                String strC = c();
                this.I = strC;
                this.p.initVFPData(strC, this.b.getVideoUrlEncode(), this.C);
                if (this.G == 1) {
                    playMute();
                } else {
                    playUnMute();
                }
                try {
                    if (this.A != null) {
                        this.A.impressionOccurred();
                    }
                    if (this.B != null) {
                        float duration = this.p.getDuration();
                        if (duration == 0.0f && this.b != null) {
                            duration = this.b.getVideoLength();
                        }
                        this.B.start(duration, getMute() == 2 ? 1.0f : 0.0f);
                        z.a("omsdk", "play: videoEvents.start()");
                    }
                } catch (IllegalArgumentException e) {
                    z.a("BTBaseView", e.getMessage());
                }
                if (!this.p.playVideo()) {
                    z.d("MediaPlayer", "播放失败");
                    if (this.C != null) {
                        this.C.onPlayError("play video failed");
                    }
                }
                this.M = true;
                return;
            }
            if (this.F) {
                this.p.playVideo(0);
                this.F = false;
            } else {
                this.p.start(false);
            }
            try {
                if (this.B != null) {
                    this.B.resume();
                    z.a("omsdk", "play:  videoEvents.resume()");
                }
            } catch (IllegalArgumentException e2) {
                z.a("BTBaseView", e2.getMessage());
            }
            if (this.u != null) {
                a(this.u, "onPlayerPlay", this.d);
                return;
            }
            return;
        } catch (Exception e3) {
            z.c("BTBaseView", e3.getMessage(), e3);
        }
        z.c("BTBaseView", e3.getMessage(), e3);
    }

    public void resume() {
        try {
            if (this.p != null) {
                if (this.F) {
                    this.p.playVideo(0);
                    this.F = false;
                } else {
                    this.p.onResume();
                }
                try {
                    if (this.B != null) {
                        this.B.resume();
                        z.a("omsdk", "play:  videoEvents.resume()");
                    }
                } catch (IllegalArgumentException e) {
                    z.a("BTBaseView", e.getMessage());
                }
                if (this.u != null) {
                    a(this.u, "onPlayerResume", this.d);
                }
            }
        } catch (Exception e2) {
            z.d("BTBaseView", e2.getMessage());
        }
    }

    public void pause() {
        try {
            if (this.p != null) {
                this.p.pause();
                if (this.B != null) {
                    this.B.pause();
                    z.a("omsdk", "play:  videoEvents.pause()");
                }
                if (this.u != null) {
                    a(this.u, "onPlayerPause", this.d);
                }
            }
        } catch (Exception e) {
            z.c("BTBaseView", e.getMessage(), e);
        }
    }

    public void stop() {
        try {
            if (this.p != null) {
                this.p.pause();
                this.p.stop();
                this.F = true;
                if (this.u != null) {
                    a(this.u, "onPlayerStop", this.d);
                }
            }
        } catch (Exception e) {
            z.c("BTBaseView", e.getMessage(), e);
        }
    }

    @Override
    public void onDestory() {
        try {
            if (this.p != null) {
                this.p.setOnClickListener(null);
                this.p.release();
                this.p = null;
            }
            if (this.q != null) {
                this.q.setOnClickListener(null);
            }
            if (this.s != null) {
                this.s.setOnClickListener(null);
            }
            if (this.u != null) {
                this.u = null;
            }
            if (this.z != null) {
                this.z = null;
            }
            if (this.B != null) {
                this.B = null;
            }
            setOnClickListener(null);
        } catch (Throwable th) {
            z.a("BTBaseView", th.getMessage());
        }
    }

    private boolean b() {
        try {
            this.p = (PlayerView) findViewById(findID("mbridge_vfpv"));
            this.q = (SoundImageView) findViewById(findID("mbridge_sound_switch"));
            this.r = (TextView) findViewById(findID("mbridge_tv_count"));
            this.s = findViewById(findID("mbridge_rl_playing_close"));
            this.N = (RelativeLayout) findViewById(findID("mbridge_top_control"));
            this.O = (ProgressBar) findViewById(findID("mbridge_video_progress_bar"));
            this.p.setIsBTVideo(true);
            this.t = (FeedBackButton) findViewById(findID("mbridge_native_endcard_feed_btn"));
            return isNotNULL(this.p, this.q, this.r, this.s);
        } catch (Throwable th) {
            z.c("BTBaseView", th.getMessage(), th);
            return false;
        }
    }

    private String c() {
        String videoUrlEncode = "";
        try {
            videoUrlEncode = this.b.getVideoUrlEncode();
            if (this.v == null) {
                return videoUrlEncode;
            }
            String strD = this.v.d();
            return !ai.a(strD) ? new File(strD).exists() ? strD : videoUrlEncode : videoUrlEncode;
        } catch (Throwable th) {
            z.c("BTBaseView", th.getMessage(), th);
            return videoUrlEncode;
        }
    }

    private int d() {
        try {
            com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
            if (aVarB == null) {
                com.mbridge.msdk.videocommon.d.b.a().c();
            }
            iG = aVarB != null ? (int) aVarB.g() : 5;
            z.b("BTBaseView", "MBridgeBaseView buffetTimeout:" + iG);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return iG;
    }

    @Override
    protected final void a() {
        super.a();
        if (this.h) {
            this.q.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    boolean zIsSilent = MBridgeBTVideoView.this.p.isSilent();
                    if (MBridgeBTVideoView.this.u != null) {
                        try {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("code", BTBaseView.n);
                            jSONObject.put("id", MBridgeBTVideoView.this.d);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("mute", MBridgeBTVideoView.this.D);
                            jSONObject.put("data", jSONObject2);
                            h.a().a(MBridgeBTVideoView.this.u, "onPlayerMuteBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                            z.a("OperateViews", "onPlayerMuteBtnClicked isMute = " + zIsSilent + " mute = " + MBridgeBTVideoView.this.D);
                        } catch (Exception e) {
                            c.a().a(MBridgeBTVideoView.this.u, e.getMessage());
                        }
                    }
                }
            });
            this.s.setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (MBridgeBTVideoView.this.u != null) {
                        BTBaseView.a(MBridgeBTVideoView.this.u, "onPlayerCloseBtnClicked", MBridgeBTVideoView.this.d);
                    }
                }
            });
            setOnClickListener(new View.OnClickListener() {
                @Override
                public final void onClick(View view) {
                    if (MBridgeBTVideoView.this.B != null) {
                        MBridgeBTVideoView.this.B.adUserInteraction(InteractionType.CLICK);
                    }
                    if (MBridgeBTVideoView.this.u != null) {
                        try {
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("code", BTBaseView.n);
                            jSONObject.put("id", MBridgeBTVideoView.this.d);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("x", String.valueOf(view.getX()));
                            jSONObject2.put("y", String.valueOf(view.getY()));
                            jSONObject.put("data", jSONObject2);
                            h.a().a(MBridgeBTVideoView.this.u, "onClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                        } catch (Exception unused) {
                            c.a().a(MBridgeBTVideoView.this.u, "onClicked", MBridgeBTVideoView.this.d);
                        }
                    }
                }
            });
        }
    }

    private static final class a extends DefaultVideoPlayerStatusListener {
        private MBridgeBTVideoView a;
        private WebView b;
        private MediaEvents c;
        private String d;
        private String e;
        private int f;
        private int g;
        private boolean h;
        private int l;
        private int m;
        private boolean i = false;
        private boolean j = false;
        private boolean k = false;
        private boolean n = false;

        public a(MBridgeBTVideoView mBridgeBTVideoView, WebView webView, MediaEvents mediaEvents) {
            this.a = mBridgeBTVideoView;
            this.b = webView;
            this.c = mediaEvents;
            if (mBridgeBTVideoView != null) {
                this.d = mBridgeBTVideoView.d;
                this.e = mBridgeBTVideoView.c;
            }
        }

        public final void a(int i, int i2) {
            int i3;
            MBridgeBTVideoView mBridgeBTVideoView;
            String str;
            this.l = i;
            this.m = i2;
            if (!ab.a().a("h_c_r_w_p_c", false) || (i3 = this.l) == 100 || this.m != 0 || this.n || i3 == 0 || (mBridgeBTVideoView = this.a) == null || mBridgeBTVideoView.b == null) {
                return;
            }
            try {
                if (this.a.b.getAdType() == 94 || this.a.b.getAdType() == 287) {
                    str = this.a.b.getRequestId() + this.a.b.getId() + this.a.b.getVideoUrlEncode();
                } else {
                    str = this.a.b.getId() + this.a.b.getVideoUrlEncode() + this.a.b.getBidToken();
                }
                com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.e, str);
                if (aVarA != null) {
                    aVarA.j();
                    this.n = true;
                    if (MBridgeConstans.DEBUG) {
                        z.d("DefaultVideoPlayerStatusListener", "CDRate is : 0  and start download when player create!");
                    }
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d("DefaultVideoPlayerStatusListener", e.getMessage());
                }
            }
        }

        @Override
        public final void onPlayStarted(int i) {
            super.onPlayStarted(i);
            if (!this.h) {
                this.a.O.setMax(i);
                WebView webView = this.b;
                if (webView != null) {
                    BTBaseView.a(webView, "onPlayerPlay", this.d);
                }
                this.h = true;
            }
            boolean unused = MBridgeBTVideoView.J = false;
        }

        @Override
        public final void onPlayCompleted() {
            super.onPlayCompleted();
            if (this.a.b == null || this.a.b.getVideoCompleteTime() <= 0) {
                this.a.r.setText("0");
            } else {
                this.a.r.setText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_complete", i.g));
            }
            this.a.p.setClickable(false);
            WebView webView = this.b;
            if (webView != null) {
                BTBaseView.a(webView, "onPlayerFinish", this.d);
            }
            MediaEvents mediaEvents = this.c;
            if (mediaEvents != null) {
                mediaEvents.complete();
                z.a("omsdk", "play:  videoEvents.complete()");
            }
            this.f = this.g;
            boolean unused = MBridgeBTVideoView.J = true;
            this.a.stop();
        }

        @Override
        public final void onPlayError(String str) {
            super.onPlayError(str);
            if (this.b != null) {
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("code", BTBaseView.o);
                    jSONObject.put("id", this.d);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("error", str);
                    jSONObject2.put("id", this.d);
                    jSONObject.put("data", jSONObject2);
                    h.a().a(this.b, "onPlayerFailed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    c.a().a(this.b, e.getMessage());
                }
            }
        }

        @Override
        public final void onPlayProgress(int i, int i2) {
            int i3;
            String str;
            StringBuilder sb;
            String str2;
            String string;
            super.onPlayProgress(i, i2);
            if (this.a.h) {
                int videoCompleteTime = 0;
                if (this.a.b != null) {
                    videoCompleteTime = this.a.b.getVideoCompleteTime();
                    b.a().b(this.a.b.getCampaignUnitId() + "_1", i);
                }
                if (videoCompleteTime > i2) {
                    videoCompleteTime = i2;
                }
                int i4 = videoCompleteTime <= 0 ? i2 - i : videoCompleteTime - i;
                if (i4 <= 0) {
                    string = videoCompleteTime <= 0 ? "0" : (String) this.a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_complete", i.g));
                } else {
                    if (videoCompleteTime <= 0) {
                        sb = new StringBuilder();
                        sb.append(i4);
                        str2 = "";
                    } else {
                        sb = new StringBuilder();
                        sb.append(i4);
                        str2 = (String) this.a.getContext().getResources().getText(s.a(com.mbridge.msdk.foundation.controller.a.f().j(), "mbridge_reward_video_view_reward_time_left", i.g));
                    }
                    sb.append(str2);
                    string = sb.toString();
                }
                this.a.r.setText(string);
            }
            this.g = i2;
            this.f = i;
            this.a.O.setMax(this.g);
            this.a.O.setProgress(this.f);
            if (this.b != null) {
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("code", BTBaseView.n);
                    jSONObject.put("id", this.d);
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("id", this.d);
                    jSONObject2.put(NotificationCompat.CATEGORY_PROGRESS, MBridgeBTVideoView.b(i, i2));
                    jSONObject2.put("time", String.valueOf(i));
                    jSONObject2.put(r.ag, String.valueOf(i2));
                    jSONObject.put("data", jSONObject2);
                    h.a().a(this.b, "onPlayerProgressChanged", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Exception e) {
                    c.a().a(this.b, e.getMessage());
                }
            }
            MediaEvents mediaEvents = this.c;
            if (mediaEvents != null) {
                int i5 = (i * 100) / i2;
                int i6 = ((i + 1) * 100) / i2;
                if (i5 <= 25 && 25 < i6 && !this.i) {
                    this.i = true;
                    mediaEvents.firstQuartile();
                    z.a("omsdk", "play:  videoEvents.firstQuartile()");
                } else if (i5 <= 50 && 50 < i6 && !this.j) {
                    this.j = true;
                    this.c.midpoint();
                    z.a("omsdk", "play:  videoEvents.midpoint()");
                } else if (i5 <= 75 && 75 < i6 && !this.k) {
                    this.k = true;
                    this.c.thirdQuartile();
                    z.a("omsdk", "play:  videoEvents.thirdQuartile()");
                }
            }
            try {
                if (this.l == 100 || this.n || this.l == 0 || this.m < 0 || i < (i3 = (i2 * this.m) / 100)) {
                    return;
                }
                if (this.a.b.getAdType() == 94 || this.a.b.getAdType() == 287) {
                    str = this.a.b.getRequestId() + this.a.b.getId() + this.a.b.getVideoUrlEncode();
                } else {
                    str = this.a.b.getId() + this.a.b.getVideoUrlEncode() + this.a.b.getBidToken();
                }
                com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.e, str);
                if (aVarA != null) {
                    aVarA.j();
                    this.n = true;
                    z.d("DefaultVideoPlayerStatusListener", "CDRate is : " + i3 + " and start download !");
                }
            } catch (Exception e2) {
                z.d("DefaultVideoPlayerStatusListener", e2.getMessage());
            }
        }

        @Override
        public final void onBufferingStart(String str) {
            try {
                super.onBufferingStart(str);
                if (this.c != null) {
                    this.c.bufferStart();
                }
                if ((str.equals("mediaplayer prepare timeout") || str.equals("play buffering tiemout")) && this.b != null) {
                    try {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put("code", BTBaseView.n);
                        jSONObject.put("id", this.d);
                        jSONObject.put("data", new JSONObject());
                        h.a().a(this.b, "onPlayerTimeout", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    } catch (Exception e) {
                        c.a().a(this.b, e.getMessage());
                    }
                }
            } catch (Exception e2) {
                e2.printStackTrace();
            }
        }

        @Override
        public final void onBufferingEnd() {
            try {
                super.onBufferingEnd();
                if (this.c != null) {
                    this.c.bufferFinish();
                    z.a("omsdk", "play:  videoEvents.bufferFinish()");
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }

        @Override
        public final void onPlaySetDataSourceError(String str) {
            super.onPlaySetDataSourceError(str);
        }
    }

    public void setSoundImageViewVisble(int i) {
        this.q.setVisibility(i == 0 ? 4 : 0);
    }

    public void setCountDownTextViewVisable(int i) {
        this.r.setVisibility(i == 0 ? 4 : 0);
    }

    public void setCloseViewVisable(int i) {
        this.s.setVisibility(i == 0 ? 4 : 0);
    }

    public void setShowClose(int i) {
        this.x = i;
    }

    public void setProgressBarState(int i) {
        ProgressBar progressBar = this.O;
        if (progressBar != null) {
            progressBar.setVisibility(i == 0 ? 8 : 0);
        }
    }

    public void setShowMute(int i) {
        this.y = i;
    }

    public void setShowTime(int i) {
        this.w = i;
    }

    private static String b(int i, int i2) {
        if (i2 != 0) {
            try {
                return ae.a(Double.valueOf(i / i2)) + "";
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
        return i2 + "";
    }

    public void setVolume(float f, float f2) {
        PlayerView playerView = this.p;
        if (playerView != null) {
            playerView.setVolume(f, f2);
        }
    }

    public void setPlaybackParams(float f) {
        PlayerView playerView = this.p;
        if (playerView != null) {
            playerView.setPlaybackParams(f);
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        if (i <= 0) {
            i = this.N.getPaddingLeft();
        }
        if (i2 <= 0) {
            i2 = this.N.getPaddingRight();
        }
        if (i3 <= 0) {
            i3 = this.N.getPaddingTop();
        }
        if (i4 <= 0) {
            i4 = this.N.getPaddingBottom();
        }
        z.d("BTBaseView", "NOTCH BTVideoView " + String.format("%1s-%2s-%3s-%4s", Integer.valueOf(i), Integer.valueOf(i2), Integer.valueOf(i3), Integer.valueOf(i4)));
        this.N.setPadding(i, i3, i2, i4);
    }

    public void preLoadData() {
        String str;
        int iR;
        if (this.b.getAdType() == 94 || this.b.getAdType() == 287) {
            str = this.b.getRequestId() + this.b.getId() + this.b.getVideoUrlEncode();
        } else {
            str = this.b.getId() + this.b.getVideoUrlEncode() + this.b.getBidToken();
        }
        com.mbridge.msdk.videocommon.download.a aVarA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.c, str);
        if (aVarA != null) {
            this.v = aVarA;
        }
        this.E = d();
        try {
            if (this.b != null && this.b.isActiveOm()) {
                this.z = com.mbridge.msdk.a.b.a(getContext(), false, this.b.getOmid(), this.b.getRequestId(), this.b.getId(), this.c, "", this.b.getRequestIdNotice());
            }
            if (this.z != null) {
                if (this.p != null) {
                    this.z.registerAdView(this.p);
                }
                if (this.q != null) {
                    this.z.addFriendlyObstruction(this.q, FriendlyObstructionPurpose.OTHER, null);
                }
                if (this.r != null) {
                    this.z.addFriendlyObstruction(this.r, FriendlyObstructionPurpose.OTHER, null);
                }
                if (this.s != null) {
                    this.z.addFriendlyObstruction(this.s, FriendlyObstructionPurpose.CLOSE_AD, null);
                }
                this.A = AdEvents.createAdEvents(this.z);
                this.B = MediaEvents.createMediaEvents(this.z);
                this.z.start();
                this.A.loaded(VastProperties.createVastPropertiesForNonSkippableMedia(true, Position.STANDALONE));
            }
        } catch (Throwable th) {
            z.a("BTBaseView", th.getMessage());
        }
        this.I = c();
        if (this.h && !TextUtils.isEmpty(this.I) && this.b != null) {
            AdSession adSession = this.z;
            if (adSession != null) {
                adSession.registerAdView(this.p);
                this.z.addFriendlyObstruction(this.q, FriendlyObstructionPurpose.OTHER, null);
                this.z.addFriendlyObstruction(this.r, FriendlyObstructionPurpose.OTHER, null);
                this.z.addFriendlyObstruction(this.s, FriendlyObstructionPurpose.CLOSE_AD, null);
                z.a("OMSDK", "RV registerView");
            }
            a aVar = new a(this, this.u, this.B);
            this.C = aVar;
            CampaignEx campaignEx = this.b;
            if (campaignEx != null && campaignEx.getReady_rate() != -1) {
                iR = campaignEx.getReady_rate();
            } else {
                iR = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.c, false).r();
            }
            aVar.a(iR, com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.c, false).s());
            this.p.setDesk(false);
            this.p.initBufferIngParam(this.E);
            soundOperate(this.D, -1, null);
        }
        J = false;
    }
}
