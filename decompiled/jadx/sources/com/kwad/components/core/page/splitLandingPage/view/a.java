package com.kwad.components.core.page.splitLandingPage.view;

import android.animation.Animator;
import android.animation.AnimatorSet;
import android.content.Context;
import android.graphics.Rect;
import android.os.SystemClock;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.LayoutInflater;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.components.core.t.m;
import com.kwad.components.core.video.a;
import com.kwad.components.core.video.e;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.b.f;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache;
import com.kwad.sdk.m.l;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private ImageView Ib;
    private WindowManager Ot;
    private com.kwad.components.core.page.splitLandingPage.a.a Ou;
    private FrameLayout Ov;
    private FrameLayout Ow;
    private e Ox;
    private final WindowManager.LayoutParams Oy = new WindowManager.LayoutParams();
    private InterfaceC0162a Oz;
    private ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private Context mContext;
    private ViewGroup yV;

    /* JADX INFO: renamed from: com.kwad.components.core.page.splitLandingPage.view.a$a, reason: collision with other inner class name */
    public interface InterfaceC0162a {
        boolean pp();
    }

    public a(Context context, com.kwad.components.core.page.splitLandingPage.a.a aVar) {
        if (context == null) {
            return;
        }
        Context contextWrapContextIfNeed = l.wrapContextIfNeed(context);
        this.mContext = contextWrapContextIfNeed;
        this.Ou = aVar;
        WindowManager windowManager = (WindowManager) contextWrapContextIfNeed.getSystemService("window");
        this.Ot = windowManager;
        if (windowManager == null) {
            return;
        }
        ViewGroup viewGroup = (ViewGroup) LayoutInflater.from(this.mContext).inflate(R.layout.ksad_split_mini_video, (ViewGroup) null);
        this.yV = viewGroup;
        this.Ov = (FrameLayout) viewGroup.findViewById(R.id.ksad_split_texture);
        this.Ow = (FrameLayout) this.yV.findViewById(R.id.ksad_video_container);
        this.ew = (ImageView) this.yV.findViewById(R.id.ksad_video_first_frame_container);
        this.Ib = (ImageView) this.yV.findViewById(R.id.ksad_split_mini_close_btn);
        this.Ov.setOnTouchListener(new View.OnTouchListener() { // from class: com.kwad.components.core.page.splitLandingPage.view.a.1
            float OA = 0.0f;
            float OB = 0.0f;
            float top = 0.0f;
            float left = 0.0f;
            long OC = 0;

            @Override // android.view.View.OnTouchListener
            public final boolean onTouch(View view, MotionEvent motionEvent) {
                if (a.this.Oy == null) {
                    return false;
                }
                if (motionEvent.getActionMasked() == 0) {
                    this.OA = motionEvent.getRawX();
                    this.OB = motionEvent.getRawY();
                    this.left = a.this.Oy.x;
                    this.top = a.this.Oy.y;
                    this.OC = SystemClock.elapsedRealtime();
                    System.out.println(" actionDownX " + this.OA + " actionDownX " + this.OA);
                } else {
                    if (motionEvent.getActionMasked() == 2) {
                        float rawX = motionEvent.getRawX() - this.OA;
                        float rawY = motionEvent.getRawY() - this.OB;
                        if (Math.sqrt((rawX * rawX) + (rawY * rawY)) > 15.0d) {
                            a.this.Oy.x = (int) (this.left + rawX);
                            a.this.Oy.y = (int) (this.top + rawY);
                            if (a.this.Ot != null) {
                                try {
                                    a.this.Ot.updateViewLayout(a.this.yV, a.this.Oy);
                                } catch (Exception e) {
                                    com.kwad.components.core.d.a.b(e);
                                    c.printStackTraceOnly(e);
                                }
                            }
                        }
                        return true;
                    }
                    if (motionEvent.getActionMasked() == 1) {
                        float rawX2 = motionEvent.getRawX() - this.OA;
                        float rawY2 = motionEvent.getRawY() - this.OB;
                        float fElapsedRealtime = SystemClock.elapsedRealtime() - this.OC;
                        if (Math.sqrt((rawX2 * rawX2) + (rawY2 * rawY2)) < 15.0d && fElapsedRealtime > 30.0f && fElapsedRealtime < 300.0f && a.this.Oz != null && a.this.Ou != null && com.kwad.sdk.core.response.b.a.ax(d.cg(a.this.Ou.getAdTemplate()))) {
                            a.this.Oz.pp();
                        }
                    }
                }
                return true;
            }
        });
    }

    private void b(KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        AdTemplate adTemplate = this.Ou.getAdTemplate();
        AdInfo adInfoCg = d.cg(adTemplate);
        String url = com.kwad.sdk.core.response.b.a.bi(adInfoCg).getUrl();
        if (TextUtils.isEmpty(url)) {
            this.ew.setVisibility(8);
        } else {
            this.ew.setImageDrawable(null);
            KSImageLoader.loadImage(this.ew, url, adTemplate);
            this.ew.setVisibility(0);
        }
        String strF = com.kwad.sdk.core.response.b.a.F(adInfoCg);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        com.kwad.sdk.core.video.videoview.a aVarDJ = AdVideoPlayerViewCache.getInstance().dJ(strF);
        this.ex = aVarDJ;
        if (aVarDJ == null) {
            this.ex = new com.kwad.sdk.core.video.videoview.a(this.mContext);
            com.kwad.sdk.core.response.b.a.T(adInfoCg);
            this.ex.a(new b.a(adTemplate).a(adTemplate.mVideoPlayerStatus).cn(d.ci(adTemplate)).co(f.b(d.ch(adTemplate))).b(new com.kwad.sdk.contentalliance.a.a.a(adTemplate, System.currentTimeMillis())).yS(), null);
            this.ex.setVideoSoundEnable(ksAdVideoPlayConfig.isVideoSoundEnable());
            e eVar = new e(this.mContext, adTemplate, this.ex, ksAdVideoPlayConfig);
            this.Ox = eVar;
            eVar.setDataFlowAutoStart(ksAdVideoPlayConfig.isDataFlowAutoStart());
            this.ex.setController(this.Ox);
            this.Ox.setAutoRelease(false);
        } else {
            e eVar2 = (e) aVarDJ.getController();
            this.Ox = eVar2;
            eVar2.setAutoRelease(false);
            this.Ox.getAdTemplate().mAdWebVideoPageShowing = true;
        }
        this.ex.setVideoSoundEnable(ksAdVideoPlayConfig.isVideoSoundEnable());
        if (this.ex.getParent() != null) {
            ((ViewGroup) this.ex.getParent()).removeView(this.ex);
        }
        if (this.Ow.getTag() != null) {
            FrameLayout frameLayout = this.Ow;
            frameLayout.removeView((View) frameLayout.getTag());
            this.Ow.setTag(null);
        }
        this.Ow.addView(this.ex);
        this.Ow.setTag(this.ex);
        this.Ox.setAlpha(0.01f);
        this.Ox.setVideoPlayCallback(new a.c() { // from class: com.kwad.components.core.page.splitLandingPage.view.a.3
            @Override // com.kwad.components.core.video.a.c
            public final void bj() {
            }

            @Override // com.kwad.components.core.video.a.c
            public final void bk() {
                a.this.po();
                a.this.aC(false).start();
            }

            @Override // com.kwad.components.core.video.a.c
            public final void d(long j) {
            }

            @Override // com.kwad.components.core.video.a.c
            public final void onVideoPlayStart() {
            }
        });
    }

    public final void a(InterfaceC0162a interfaceC0162a) {
        this.Oz = interfaceC0162a;
    }

    public final Animator aC(boolean z) {
        AnimatorSet animatorSet = new AnimatorSet();
        animatorSet.playTogether(m.h(this.yV, z), m.h(this.ew, z));
        return animatorSet;
    }

    public final boolean isVisible() {
        return this.yV.getAlpha() > 0.0f;
    }

    public final void po() {
        this.Ox.ab();
    }

    public final boolean pr() {
        int i;
        int iA;
        if (this.Ou == null || this.Ot == null) {
            return false;
        }
        b(new KsAdVideoPlayConfig.Builder().videoSoundEnable(this.Ou.getAdTemplate().mIsAudioEnable).build());
        AdInfo adInfoCg = d.cg(this.Ou.getAdTemplate());
        int iL = com.kwad.sdk.core.response.b.a.L(adInfoCg);
        int iK = com.kwad.sdk.core.response.b.a.K(adInfoCg);
        Rect rect = new Rect();
        DisplayMetrics displayMetrics = this.mContext.getResources().getDisplayMetrics();
        if (iL > iK) {
            rect.right = displayMetrics.widthPixels;
            rect.left = rect.right - com.kwad.sdk.d.a.a.a(this.mContext, 86.0f);
            rect.bottom = displayMetrics.heightPixels - com.kwad.sdk.d.a.a.a(this.mContext, 252.0f);
            i = rect.bottom;
            iA = com.kwad.sdk.d.a.a.a(this.mContext, 154.0f);
        } else {
            rect.right = displayMetrics.widthPixels;
            rect.left = rect.right - com.kwad.sdk.d.a.a.a(this.mContext, 154.0f);
            rect.bottom = displayMetrics.heightPixels - com.kwad.sdk.d.a.a.a(this.mContext, 252.0f);
            i = rect.bottom;
            iA = com.kwad.sdk.d.a.a.a(this.mContext, 86.0f);
        }
        rect.top = i - iA;
        rect.left -= com.kwad.sdk.d.a.a.a(this.mContext, 12.0f);
        rect.right -= com.kwad.sdk.d.a.a.a(this.mContext, 12.0f);
        this.Oy.type = 1003;
        this.Oy.flags = 8;
        this.Oy.gravity = 51;
        this.Oy.format = 1;
        this.Oy.width = displayMetrics.widthPixels;
        this.Oy.height = displayMetrics.heightPixels;
        this.Oy.x = rect.left;
        this.Oy.y = rect.top;
        this.Oy.width = (rect.right - rect.left) + com.kwad.sdk.d.a.a.a(this.mContext, 12.0f);
        this.Oy.height = (rect.bottom - rect.top) + com.kwad.sdk.d.a.a.a(this.mContext, 12.0f);
        this.yV.setPivotX((rect.left * displayMetrics.widthPixels) / ((rect.left + displayMetrics.widthPixels) - rect.right));
        this.yV.setPivotY((rect.top * displayMetrics.heightPixels) / ((rect.top + displayMetrics.heightPixels) - rect.bottom));
        this.yV.setAlpha(0.0f);
        if (this.Ot != null) {
            try {
                if (this.yV.getWindowToken() == null) {
                    this.Ot.addView(this.yV, this.Oy);
                }
            } catch (Exception e) {
                com.kwad.components.core.d.a.b(e);
                c.printStackTraceOnly(e);
            }
        }
        this.Ib.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.page.splitLandingPage.view.a.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                a.this.po();
                a.this.aC(false).start();
            }
        });
        return true;
    }

    public final void ps() {
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar == null || aVar.isPlaying()) {
            return;
        }
        this.Ox.qV();
    }
}
