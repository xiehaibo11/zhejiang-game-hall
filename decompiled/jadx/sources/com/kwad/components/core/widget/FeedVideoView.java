package com.kwad.components.core.widget;

import android.app.Activity;
import android.content.Context;
import android.content.res.Resources;
import android.os.SystemClock;
import android.support.v4.view.NestedScrollingChild;
import android.support.v4.view.NestedScrollingChildHelper;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.TextView;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.t.n;
import com.kwad.components.core.video.a;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.contentalliance.a.a.b;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache;
import com.kwad.sdk.core.view.ScaleAnimSeekBar;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.bh;
import com.kwad.sdk.widget.RatioFrameLayout;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class FeedVideoView extends b<AdTemplate> implements NestedScrollingChild {
    private NestedScrollingChildHelper Of;
    private com.kwad.components.core.video.e Ox;
    private ViewGroup YA;
    private int YB;
    private boolean YC;
    private boolean YD;
    private long YE;
    private boolean YF;
    private KsAdVideoPlayConfig YG;
    private a YH;
    private View YI;
    private boolean YJ;
    private Runnable YK;
    private n YL;
    private RatioFrameLayout Yl;
    private TextView Ym;
    private TextView Yn;
    private TextView Yo;
    private View Yp;
    private KSCornerImageView Yq;
    private TextView Yr;
    private ScaleAnimSeekBar Ys;
    private ImageView Yt;
    private ImageView Yu;
    private ImageView Yv;
    private ViewGroup Yw;
    private ViewGroup Yx;
    private TextView Yy;
    private ViewGroup Yz;
    private View.OnClickListener bK;

    /* JADX INFO: renamed from: cn, reason: collision with root package name */
    private KsAppDownloadListener f2820cn;
    private List<Integer> cr;
    private TextView ek;
    private ImageView ew;
    private com.kwad.sdk.core.video.videoview.a ex;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public interface a {
        void oG();

        void oH();
    }

    public FeedVideoView(Context context) {
        super(context);
        this.YB = 100;
        Runnable runnable = new Runnable() { // from class: com.kwad.components.core.widget.FeedVideoView.5
            @Override // java.lang.Runnable
            public final void run() {
                FeedVideoView.this.Yw.setVisibility(8);
                FeedVideoView.this.Yv.setVisibility(8);
                if (FeedVideoView.this.Ox != null) {
                    FeedVideoView.this.Ox.aK(true);
                }
            }
        };
        this.YK = runnable;
        this.YL = new n(runnable);
    }

    public FeedVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.YB = 100;
        Runnable runnable = new Runnable() { // from class: com.kwad.components.core.widget.FeedVideoView.5
            @Override // java.lang.Runnable
            public final void run() {
                FeedVideoView.this.Yw.setVisibility(8);
                FeedVideoView.this.Yv.setVisibility(8);
                if (FeedVideoView.this.Ox != null) {
                    FeedVideoView.this.Ox.aK(true);
                }
            }
        };
        this.YK = runnable;
        this.YL = new n(runnable);
    }

    public FeedVideoView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.YB = 100;
        Runnable runnable = new Runnable() { // from class: com.kwad.components.core.widget.FeedVideoView.5
            @Override // java.lang.Runnable
            public final void run() {
                FeedVideoView.this.Yw.setVisibility(8);
                FeedVideoView.this.Yv.setVisibility(8);
                if (FeedVideoView.this.Ox != null) {
                    FeedVideoView.this.Ox.aK(true);
                }
            }
        };
        this.YK = runnable;
        this.YL = new n(runnable);
    }

    private void a(com.kwad.components.core.video.a aVar, final com.kwad.sdk.core.video.videoview.a aVar2) {
        this.Yz.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.6
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (FeedVideoView.this.Yw.getVisibility() != 8) {
                    if (FeedVideoView.this.getHandler() != null) {
                        FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YK);
                        if (FeedVideoView.this.YF) {
                            return;
                        }
                        FeedVideoView.this.getHandler().postDelayed(FeedVideoView.this.YL, 1000L);
                        return;
                    }
                    return;
                }
                if (!FeedVideoView.this.ex.isCompleted()) {
                    FeedVideoView.this.Yw.setVisibility(0);
                    FeedVideoView.this.Yv.setVisibility(0);
                    if (FeedVideoView.this.Ox != null) {
                        FeedVideoView.this.Ox.aK(false);
                    }
                    if (FeedVideoView.this.getHandler() != null) {
                        FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YK);
                        FeedVideoView.this.getHandler().postDelayed(FeedVideoView.this.YL, 5000L);
                        return;
                    }
                    return;
                }
                if (FeedVideoView.this.YB != 101) {
                    if (FeedVideoView.this.bK != null) {
                        FeedVideoView.this.bK.onClick(view);
                        return;
                    }
                    return;
                }
                FeedVideoView.this.Yw.setVisibility(0);
                FeedVideoView.this.Yv.setVisibility(8);
                if (FeedVideoView.this.Ox != null) {
                    FeedVideoView.this.Ox.aK(false);
                }
                if (FeedVideoView.this.getHandler() != null) {
                    FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YK);
                    FeedVideoView.this.getHandler().postDelayed(FeedVideoView.this.YL, 5000L);
                }
            }
        });
        aVar.setVideoPlayCallback(new a.c() { // from class: com.kwad.components.core.widget.FeedVideoView.7
            private boolean cs = false;

            @Override // com.kwad.components.core.video.a.c
            public final void bj() {
                if (!FeedVideoView.this.YJ) {
                    FeedVideoView.a(FeedVideoView.this, true);
                    if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) != 0) {
                        FeedVideoView.this.ex.setVideoSoundEnable(!com.kwad.sdk.core.response.b.a.ah(FeedVideoView.this.mAdInfo));
                    }
                    if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) != 0) {
                        FeedVideoView.this.ex.setLooping(com.kwad.sdk.core.response.b.a.ag(FeedVideoView.this.mAdInfo));
                    }
                }
                if (this.cs) {
                    return;
                }
                this.cs = true;
                com.kwad.components.core.o.a.pA().a(FeedVideoView.this.mAdTemplate, System.currentTimeMillis(), 1);
            }

            @Override // com.kwad.components.core.video.a.c
            public final void bk() {
                com.kwad.sdk.core.report.a.aA(FeedVideoView.this.mAdTemplate);
                FeedVideoView.this.Yw.setVisibility(8);
                FeedVideoView.this.Yv.setVisibility(8);
                FeedVideoView.this.Ys.setProgress(100);
                FeedVideoView.this.Yn.setText(bh.V(aVar2.getDuration()));
            }

            @Override // com.kwad.components.core.video.a.c
            public final void d(long j) {
                FeedVideoView.this.c(j);
                float duration = (j * 100.0f) / aVar2.getDuration();
                if (!FeedVideoView.this.YF) {
                    FeedVideoView.this.Ys.setProgress((int) duration);
                    FeedVideoView.this.Yn.setText(bh.V(j));
                }
                FeedVideoView.this.Ym.setText(bh.V(aVar2.getDuration()));
            }

            @Override // com.kwad.components.core.video.a.c
            public final void onVideoPlayStart() {
                if (!FeedVideoView.this.YJ) {
                    FeedVideoView.a(FeedVideoView.this, true);
                    if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) != 0) {
                        FeedVideoView.this.ex.setVideoSoundEnable(true ^ com.kwad.sdk.core.response.b.a.ah(FeedVideoView.this.mAdInfo));
                    }
                    if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) != 0) {
                        FeedVideoView.this.ex.setLooping(com.kwad.sdk.core.response.b.a.ag(FeedVideoView.this.mAdInfo));
                    }
                }
                com.kwad.sdk.core.report.a.j(FeedVideoView.this.mAdTemplate);
                FeedVideoView.this.Ym.setText(bh.V(aVar2.getDuration()));
            }
        });
        this.Ox.setAdClickListener(new a.InterfaceC0165a() { // from class: com.kwad.components.core.widget.FeedVideoView.8
            @Override // com.kwad.components.core.video.a.InterfaceC0165a
            public final void a(int i, ac.a aVar3) {
                int i2 = 171;
                int i3 = 2;
                boolean z = false;
                if (i != 1) {
                    if (i != 2) {
                        if (i == 3) {
                            i2 = com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) != 0 ? 50 : 83;
                            i3 = 1;
                            z = true;
                        } else if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) == 0) {
                            i2 = 108;
                        }
                    } else if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) == 0) {
                        i2 = 82;
                    }
                } else if (com.kwad.sdk.core.response.b.a.af(FeedVideoView.this.mAdInfo) == 0) {
                    i2 = 13;
                }
                z.b bVar = new z.b();
                bVar.jI = aVar3;
                bVar.jG = i2;
                com.kwad.components.core.e.d.a.a(new a.C0150a(FeedVideoView.this.getContext()).P(FeedVideoView.this.mAdTemplate).ar(true).b(FeedVideoView.this.mApkDownloadHelper).ao(i3).am(z).ao(true).a(bVar).a(new a.b() { // from class: com.kwad.components.core.widget.FeedVideoView.8.1
                    @Override // com.kwad.components.core.e.d.a.b
                    public final void onAdClicked() {
                        FeedVideoView.this.eb();
                    }
                }));
            }
        });
        this.Ys.setOnSeekBarChangeListener(new ScaleAnimSeekBar.a() { // from class: com.kwad.components.core.widget.FeedVideoView.9
            @Override // com.kwad.sdk.core.view.ScaleAnimSeekBar.a
            public final void a(ScaleAnimSeekBar scaleAnimSeekBar) {
                FeedVideoView.this.Ys.bg(false);
                aVar2.seekTo((int) ((aVar2.getDuration() * ((long) scaleAnimSeekBar.getProgress())) / ((long) scaleAnimSeekBar.getMaxProgress())));
                if (FeedVideoView.this.getHandler() != null) {
                    FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YL);
                    FeedVideoView.this.getHandler().postDelayed(FeedVideoView.this.YL, 5000L);
                }
                FeedVideoView.this.YF = false;
            }

            @Override // com.kwad.sdk.core.view.ScaleAnimSeekBar.a
            public final void a(ScaleAnimSeekBar scaleAnimSeekBar, boolean z) {
                if (z) {
                    FeedVideoView.this.Ys.bg(true);
                    FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YL);
                    FeedVideoView.this.YF = true;
                    FeedVideoView.this.Yn.setText(bh.V((int) ((aVar2.getDuration() * ((long) scaleAnimSeekBar.getProgress())) / ((long) scaleAnimSeekBar.getMaxProgress()))));
                }
            }

            @Override // com.kwad.sdk.core.view.ScaleAnimSeekBar.a
            public final void st() {
                FeedVideoView.this.Ys.bg(true);
                FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YL);
                FeedVideoView.this.YF = true;
            }
        });
        this.Yt.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.10
            /* JADX WARN: Removed duplicated region for block: B:14:0x0093  */
            /* JADX WARN: Removed duplicated region for block: B:16:? A[RETURN, SYNTHETIC] */
            @Override // android.view.View.OnClickListener
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public final void onClick(android.view.View r4) {
                /*
                    r3 = this;
                    com.kwad.sdk.core.video.videoview.a r4 = r2
                    boolean r4 = r4.isPaused()
                    if (r4 != 0) goto L58
                    com.kwad.sdk.core.video.videoview.a r4 = r2
                    boolean r4 = r4.isIdle()
                    if (r4 == 0) goto L11
                    goto L58
                L11:
                    com.kwad.sdk.core.video.videoview.a r4 = r2
                    boolean r4 = r4.isPlaying()
                    if (r4 == 0) goto L8b
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    com.kwad.components.core.video.e r4 = com.kwad.components.core.widget.FeedVideoView.e(r4)
                    r4.qU()
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.widget.ImageView r4 = com.kwad.components.core.widget.FeedVideoView.d(r4)
                    r0 = 0
                    r4.setVisibility(r0)
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.widget.ImageView r4 = com.kwad.components.core.widget.FeedVideoView.d(r4)
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    android.content.Context r0 = r0.getContext()
                    android.content.res.Resources r0 = r0.getResources()
                    int r1 = com.kwad.sdk.R.drawable.ksad_video_play_176
                    android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
                    r4.setImageDrawable(r0)
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.widget.ImageView r4 = com.kwad.components.core.widget.FeedVideoView.p(r4)
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    android.content.Context r0 = r0.getContext()
                    android.content.res.Resources r0 = r0.getResources()
                    int r1 = com.kwad.sdk.R.drawable.ksad_video_player_play_btn
                    goto L84
                L58:
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    com.kwad.components.core.video.e r4 = com.kwad.components.core.widget.FeedVideoView.e(r4)
                    r4.qV()
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.widget.ImageView r4 = com.kwad.components.core.widget.FeedVideoView.p(r4)
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    android.content.res.Resources r0 = r0.getResources()
                    int r1 = com.kwad.sdk.R.drawable.ksad_video_player_pause_btn
                    android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
                    r4.setImageDrawable(r0)
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.widget.ImageView r4 = com.kwad.components.core.widget.FeedVideoView.d(r4)
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    android.content.res.Resources r0 = r0.getResources()
                    int r1 = com.kwad.sdk.R.drawable.ksad_video_player_pause_center
                L84:
                    android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
                    r4.setImageDrawable(r0)
                L8b:
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.os.Handler r4 = r4.getHandler()
                    if (r4 == 0) goto Lb3
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.os.Handler r4 = r4.getHandler()
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    com.kwad.components.core.t.n r0 = com.kwad.components.core.widget.FeedVideoView.h(r0)
                    r4.removeCallbacks(r0)
                    com.kwad.components.core.widget.FeedVideoView r4 = com.kwad.components.core.widget.FeedVideoView.this
                    android.os.Handler r4 = r4.getHandler()
                    com.kwad.components.core.widget.FeedVideoView r0 = com.kwad.components.core.widget.FeedVideoView.this
                    com.kwad.components.core.t.n r0 = com.kwad.components.core.widget.FeedVideoView.h(r0)
                    r1 = 5000(0x1388, double:2.4703E-320)
                    r4.postDelayed(r0, r1)
                Lb3:
                    return
                */
                throw new UnsupportedOperationException("Method not decompiled: com.kwad.components.core.widget.FeedVideoView.AnonymousClass10.onClick(android.view.View):void");
            }
        });
        this.Yv.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.11
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (FeedVideoView.this.ex.isPaused() || FeedVideoView.this.ex.isIdle()) {
                    FeedVideoView.this.ps();
                } else if (FeedVideoView.this.ex.isPlaying()) {
                    FeedVideoView.this.qA();
                }
                if (FeedVideoView.this.getHandler() != null) {
                    FeedVideoView.this.getHandler().removeCallbacks(FeedVideoView.this.YL);
                    FeedVideoView.this.getHandler().postDelayed(FeedVideoView.this.YL, 5000L);
                }
            }
        });
        this.Yx.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.2
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                FeedVideoView.this.sr();
            }
        });
        this.Yu.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.3
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (FeedVideoView.this.YB == 100) {
                    FeedVideoView.this.sq();
                } else if (FeedVideoView.this.YB == 101) {
                    FeedVideoView.this.sr();
                }
            }
        });
    }

    static /* synthetic */ boolean a(FeedVideoView feedVideoView, boolean z) {
        feedVideoView.YJ = true;
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(long j) {
        int iCeil = (int) Math.ceil(j / 1000.0f);
        List<Integer> list = this.cr;
        if (list == null || list.isEmpty()) {
            return;
        }
        Iterator<Integer> it = this.cr.iterator();
        while (it.hasNext()) {
            if (iCeil >= it.next().intValue()) {
                com.kwad.sdk.core.report.a.a((AdTemplate) this.mAdTemplate, iCeil, (JSONObject) null);
                it.remove();
                return;
            }
        }
    }

    private KsAppDownloadListener getAppDownloadListener() {
        if (this.f2820cn == null) {
            this.f2820cn = new com.kwad.sdk.core.download.a.a() { // from class: com.kwad.components.core.widget.FeedVideoView.1
                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onDownloadFailed() {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.aw(FeedVideoView.this.mAdInfo));
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onDownloadFinished() {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.aM(FeedVideoView.this.mAdTemplate));
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onIdle() {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.aw(FeedVideoView.this.mAdInfo));
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onInstalled() {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.U(FeedVideoView.this.mAdInfo));
                }

                @Override // com.kwad.sdk.core.download.a.a
                public final void onPaused(int i) {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.cw(i));
                }

                @Override // com.kwad.sdk.api.KsAppDownloadListener
                public final void onProgressUpdate(int i) {
                    FeedVideoView.this.Yo.setText(com.kwad.sdk.core.response.b.a.cv(i));
                }
            };
        }
        return this.f2820cn;
    }

    private boolean sp() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long j = jElapsedRealtime - this.YE;
        if (j > 888) {
            this.YE = jElapsedRealtime;
        }
        return j > 888;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sq() {
        a aVar = this.YH;
        if (aVar != null) {
            aVar.oG();
        }
        if ((this.YB == 100) && sp()) {
            this.Yx.setVisibility(0);
            this.Yy.setText(this.mAdInfo.adBaseInfo.adDescription);
            boolean z = com.kwad.sdk.core.response.b.a.L(this.mAdInfo) > com.kwad.sdk.core.response.b.a.K(this.mAdInfo);
            this.YC = ai.ck(getContext());
            getContext();
            this.YD = ai.IN();
            Context context = getContext();
            if (z) {
                ai.cn(context);
            } else {
                ai.cm(context);
            }
            ViewGroup viewGroup = (ViewGroup) this.Yz.getParent();
            this.YA = viewGroup;
            if (viewGroup != null) {
                viewGroup.removeView(this.Yz);
                View view = new View(this.Yz.getContext());
                this.YI = view;
                view.setLayoutParams(new ViewGroup.LayoutParams(this.Yz.getWidth(), this.Yz.getHeight()));
                viewGroup.addView(this.YI);
            }
            ai.b(getContext(), false);
            Activity activityDr = l.dr(getContext());
            if (activityDr != null) {
                ViewGroup viewGroup2 = (ViewGroup) activityDr.getWindow().getDecorView();
                this.Yz.setLayoutParams(new ViewGroup.LayoutParams(viewGroup2.getWidth(), viewGroup2.getHeight()));
                if (z && viewGroup2.getWidth() != 0) {
                    this.Yl.setRatio(viewGroup2.getHeight() / viewGroup2.getWidth());
                }
                viewGroup2.addView(this.Yz, new FrameLayout.LayoutParams(-1, -1));
                setUIWithStateAndMode(101);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sr() {
        if ((this.YB == 101) & sp()) {
            this.Yx.setVisibility(8);
            if (this.YC) {
                ai.ck(getContext());
            } else {
                ai.cl(getContext());
            }
            if (this.YD) {
                ai.cn(getContext());
            } else {
                ai.cm(getContext());
            }
            ai.b(getContext(), true);
            ViewGroup viewGroup = (ViewGroup) this.Yz.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(this.Yz);
            }
            this.Yz.setLayoutParams(new ViewGroup.LayoutParams(this.YA.getWidth(), this.YA.getHeight()));
            this.Yl.setRatio(0.5600000023841858d);
            View view = this.YI;
            if (view != null) {
                this.YA.removeView(view);
                this.YI = null;
            }
            this.YA.addView(this.Yz, new FrameLayout.LayoutParams(-1, -2));
            this.Yz.requestLayout();
            setUIWithStateAndMode(100);
        }
        a aVar = this.YH;
        if (aVar != null) {
            aVar.oH();
        }
    }

    public final void a(KsAdVideoPlayConfig ksAdVideoPlayConfig, com.kwad.components.core.e.d.c cVar) {
        this.mApkDownloadHelper = cVar;
        this.YJ = false;
        com.kwad.sdk.core.response.model.b bVarBi = com.kwad.sdk.core.response.b.a.bi(this.mAdInfo);
        this.YG = ksAdVideoPlayConfig;
        String url = bVarBi.getUrl();
        if (TextUtils.isEmpty(url)) {
            this.ew.setVisibility(8);
        } else {
            this.ew.setImageDrawable(null);
            KSImageLoader.loadImage(this.ew, url, this.mAdTemplate);
            this.ew.setVisibility(0);
        }
        this.cr = com.kwad.sdk.core.response.b.a.bd(this.mAdInfo);
        String strF = com.kwad.sdk.core.response.b.a.F(this.mAdInfo);
        if (TextUtils.isEmpty(strF)) {
            return;
        }
        this.ex = AdVideoPlayerViewCache.getInstance().dJ(strF);
        if (com.kwad.sdk.core.response.b.a.ai(this.mAdInfo)) {
            this.ek.setVisibility(8);
            View view = this.Yp;
            if (view != null) {
                view.setVisibility(0);
                this.Yo.setText(com.kwad.sdk.core.response.b.a.aw(this.mAdInfo));
                this.Yr.setText(com.kwad.sdk.core.response.b.a.bO(this.mAdInfo));
                KSImageLoader.loadAppIcon(this.Yq, com.kwad.sdk.core.response.b.a.bQ(this.mAdInfo), this.mAdTemplate, 4);
                com.kwad.components.core.e.d.c cVar2 = this.mApkDownloadHelper;
                if (cVar2 != null) {
                    cVar2.b(getAppDownloadListener());
                }
                this.Yo.setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.core.widget.FeedVideoView.4
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view2) {
                        if (FeedVideoView.this.bK != null) {
                            FeedVideoView.this.bK.onClick(view2);
                        }
                    }
                });
            }
        } else {
            View view2 = this.Yp;
            if (view2 != null) {
                view2.setVisibility(8);
            }
            this.ek.setVisibility(0);
        }
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar == null) {
            this.ex = new com.kwad.sdk.core.video.videoview.a(getContext());
            com.kwad.sdk.core.response.b.a.T(this.mAdInfo);
            this.ex.a(new b.a(this.mAdTemplate).a(this.mAdTemplate.mVideoPlayerStatus).cn(com.kwad.sdk.core.response.b.d.ci(this.mAdTemplate)).co(com.kwad.sdk.core.response.b.f.b(com.kwad.sdk.core.response.b.d.ch(this.mAdTemplate))).b(new com.kwad.sdk.contentalliance.a.a.a(this.mAdTemplate, System.currentTimeMillis())).yS(), null);
            com.kwad.components.core.video.e eVar = new com.kwad.components.core.video.e(this.mContext, this.mAdTemplate, this.ex, ksAdVideoPlayConfig);
            this.Ox = eVar;
            eVar.setDataFlowAutoStart(ksAdVideoPlayConfig.isDataFlowAutoStart());
            this.ex.setController(this.Ox);
            this.Ox.setAutoRelease(false);
            if (com.kwad.sdk.core.config.d.yY() == 2) {
                AdVideoPlayerViewCache.getInstance().a(strF, this.ex);
            }
        } else {
            if (aVar.getTag() != null) {
                try {
                    this.cr = (List) this.ex.getTag();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            com.kwad.components.core.video.e eVar2 = (com.kwad.components.core.video.e) this.ex.getController();
            this.Ox = eVar2;
            eVar2.setAutoRelease(false);
            this.Ox.getAdTemplate().mAdWebVideoPageShowing = true;
        }
        this.ex.setVideoSoundEnable(ksAdVideoPlayConfig.isVideoSoundEnable());
        if (this.ex.getParent() != null) {
            ((ViewGroup) this.ex.getParent()).removeView(this.ex);
            this.Ox.qS();
        }
        if (this.Yl.getTag() != null) {
            RatioFrameLayout ratioFrameLayout = this.Yl;
            ratioFrameLayout.removeView((View) ratioFrameLayout.getTag());
            this.Yl.setTag(null);
        }
        this.Yl.addView(this.ex);
        this.Yl.setTag(this.ex);
        this.Yw.setVisibility(8);
        this.Yv.setVisibility(8);
        if (this.mAdInfo.adConversionInfo.h5Type == 1) {
            this.ek.setVisibility(8);
        } else {
            this.ek.setVisibility(0);
            this.ek.setText(this.mAdInfo.adBaseInfo.adDescription);
        }
        a(this.Ox, this.ex);
    }

    @Override // com.kwad.components.core.widget.b, com.kwad.sdk.core.h.c
    public final void aK() {
        super.aK();
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar == null || aVar.isPlaying()) {
            return;
        }
        ps();
        if (getHandler() != null) {
            getHandler().removeCallbacks(this.YL);
            getHandler().postDelayed(this.YL, 5000L);
        }
    }

    @Override // com.kwad.components.core.widget.b, com.kwad.sdk.core.h.c
    public final void aL() {
        super.aL();
        if (this.ex != null) {
            qA();
            if (getHandler() != null) {
                getHandler().removeCallbacks(this.YL);
                getHandler().postDelayed(this.YL, 5000L);
            }
        }
    }

    @Override // com.kwad.components.core.widget.b
    public final void b(AdTemplate adTemplate) {
        super.b(adTemplate);
    }

    @Override // com.kwad.components.core.widget.b
    protected final void ba() {
        this.Of = new NestedScrollingChildHelper(this);
        RatioFrameLayout ratioFrameLayout = (RatioFrameLayout) findViewById(R.id.ksad_video_container);
        this.Yl = ratioFrameLayout;
        ratioFrameLayout.setRatio(0.5600000023841858d);
        this.ew = (ImageView) findViewById(R.id.ksad_video_first_frame_container);
        this.ek = (TextView) findViewById(R.id.ksad_video_text_below);
        ScaleAnimSeekBar scaleAnimSeekBar = (ScaleAnimSeekBar) findViewById(R.id.ksad_web_video_seek_bar);
        this.Ys = scaleAnimSeekBar;
        scaleAnimSeekBar.setMaxProgress(100);
        this.Ys.setMinProgress(0);
        this.Yo = (TextView) findViewById(R.id.ksad_video_text_below_action_bar);
        this.Yp = findViewById(R.id.ksad_video_text_below_action_icon_layout);
        this.Yr = (TextView) findViewById(R.id.ksad_video_text_below_action_title);
        this.Yq = (KSCornerImageView) findViewById(R.id.ksad_video_text_below_action_icon);
        this.Ym = (TextView) findViewById(R.id.ksad_video_control_play_total);
        this.Yn = (TextView) findViewById(R.id.ksad_video_control_play_duration);
        this.Yt = (ImageView) findViewById(R.id.ksad_video_control_play_button);
        this.Yv = (ImageView) findViewById(R.id.ksad_video_control_play_status);
        this.Yu = (ImageView) findViewById(R.id.ksad_video_control_fullscreen);
        this.Yw = (ViewGroup) findViewById(R.id.ksad_video_control_container);
        this.Yz = (ViewGroup) findViewById(R.id.ksad_feed_video_container);
        this.Yx = (ViewGroup) findViewById(R.id.ksad_video_control_fullscreen_container);
        this.Yy = (TextView) findViewById(R.id.ksad_video_control_fullscreen_title);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedFling(float f, float f2, boolean z) {
        return this.Of.dispatchNestedFling(f, f2, z);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedPreFling(float f, float f2) {
        return this.Of.dispatchNestedPreFling(f, f2);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedPreScroll(int i, int i2, int[] iArr, int[] iArr2) {
        return this.Of.dispatchNestedPreScroll(i, i2, iArr, iArr2);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean dispatchNestedScroll(int i, int i2, int i3, int i4, int[] iArr) {
        return this.Of.dispatchNestedScroll(i, i2, i3, i4, iArr);
    }

    @Override // com.kwad.components.core.widget.b
    protected int getLayoutId() {
        return R.layout.ksad_feed_video;
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean hasNestedScrollingParent() {
        return this.Of.hasNestedScrollingParent();
    }

    public final boolean isComplete() {
        com.kwad.sdk.core.video.videoview.a aVar = this.ex;
        if (aVar != null) {
            return aVar.isCompleted();
        }
        return true;
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean isNestedScrollingEnabled() {
        return this.Of.isNestedScrollingEnabled();
    }

    public final void po() {
        this.Ox.qS();
    }

    public final void ps() {
        this.Ox.qV();
        this.Ox.setVisibility(0);
        this.Ox.setAlpha(1.0f);
        this.Yt.setImageDrawable(getContext().getResources().getDrawable(R.drawable.ksad_video_player_pause_btn));
        this.Yv.setImageDrawable(getContext().getResources().getDrawable(R.drawable.ksad_video_player_pause_center));
    }

    public final void qA() {
        this.Ox.qU();
        this.Yv.setVisibility(0);
        this.Yv.setImageDrawable(getContext().getResources().getDrawable(R.drawable.ksad_video_play_176));
        this.Yt.setImageDrawable(getContext().getResources().getDrawable(R.drawable.ksad_video_player_play_btn));
    }

    public final void release() {
        com.kwad.components.core.video.e eVar = this.Ox;
        if (eVar != null) {
            eVar.release();
        }
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public void setNestedScrollingEnabled(boolean z) {
        this.Of.setNestedScrollingEnabled(z);
    }

    public void setOnEndBtnClickListener(View.OnClickListener onClickListener) {
        this.bK = onClickListener;
    }

    protected void setUIWithStateAndMode(int i) {
        ImageView imageView;
        Resources resources;
        int i2;
        if (i == 101) {
            imageView = this.Yu;
            resources = getContext().getResources();
            i2 = R.drawable.ksad_video_player_exit_fullscreen_btn;
        } else {
            imageView = this.Yu;
            resources = getContext().getResources();
            i2 = R.drawable.ksad_video_player_fullscreen_btn;
        }
        imageView.setImageDrawable(resources.getDrawable(i2));
        this.YB = i;
    }

    public void setWindowFullScreenListener(a aVar) {
        this.YH = aVar;
    }

    public final boolean ss() {
        if (this.YB != 101) {
            return false;
        }
        sr();
        return true;
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public boolean startNestedScroll(int i) {
        return this.Of.startNestedScroll(i);
    }

    @Override // android.view.View, android.support.v4.view.NestedScrollingChild
    public void stopNestedScroll() {
        this.Of.stopNestedScroll();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout, com.kwad.sdk.widget.i
    public final void z(View view) {
        super.z(view);
    }
}
