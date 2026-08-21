package com.kwad.components.ad.k;

import android.app.Activity;
import android.os.Handler;
import android.os.Looper;
import android.os.SystemClock;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.DownloadListener;
import android.widget.FrameLayout;
import android.widget.ImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.b.d;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.core.webview.a.c;
import com.sigmob.sdk.archives.tar.e;

public final class a {
    private KsAdWebView GQ;
    private boolean GR;
    private boolean GS;
    protected AdBaseFrameLayout GT;
    private a GU;
    private b GY;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private FrameLayout cQ;
    private AdBaseFrameLayout dr;
    private c.a jX;
    private Activity mActivity;
    private AdTemplate mAdTemplate;
    private ImageView mBackIcon;
    private long mLastDown;
    private boolean GP = true;
    private Handler mHandler = new Handler(Looper.getMainLooper());
    private boolean GV = false;
    private boolean GW = false;
    private boolean GX = false;

    public interface a {
        void T(boolean z);
    }

    public interface b {
        void iA();
    }

    static boolean a(a aVar, boolean z) {
        aVar.GW = true;
        return true;
    }

    static boolean b(a aVar, boolean z) {
        aVar.GP = true;
        return true;
    }

    private boolean bv() {
        return this.GX ? !this.GP : (this.GP || this.GV || this.GW) ? false : true;
    }

    static boolean c(a aVar, boolean z) {
        aVar.GV = true;
        return true;
    }

    static boolean d(a aVar, boolean z) {
        aVar.GR = true;
        return true;
    }

    private void fA() {
        this.cQ.removeAllViews();
        this.cQ.setVisibility(4);
        this.GT = (AdBaseFrameLayout) ((ViewGroup) com.kwad.sdk.d.a.a.a((ViewGroup) this.cQ, R.layout.ksad_ad_landingpage_layout, true)).findViewById(R.id.ksad_web_card_frame);
        KsAdWebView ksAdWebView = (KsAdWebView) this.cQ.findViewById(R.id.ksad_web_card_webView);
        this.GQ = ksAdWebView;
        ksAdWebView.setBackgroundColor(-1);
        z.b bVar = new z.b();
        bVar.ati = 1;
        c.a aVarB = this.GQ.getClientConfig().bk(false).bm(true).bl(false).b(bVar).cy(this.mAdTemplate).a(lT()).b(getWebListener());
        this.jX = aVarB;
        this.GQ.setClientConfig(aVarB);
        this.GQ.setDownloadListener(new DownloadListener() {
            @Override
            public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
                a.a(a.this, true);
                if (a.this.GU != null) {
                    a.this.GU.T(a.this.bv());
                }
            }
        });
        ImageView imageView = (ImageView) this.GT.findViewById(R.id.ksad_end_close_btn);
        this.mBackIcon = imageView;
        imageView.setVisibility(8);
        this.mBackIcon.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (a.this.GY != null) {
                    a.this.GY.iA();
                }
            }
        });
    }

    private KsAdWebView.d getWebListener() {
        return new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                if (a.this.GU != null) {
                    a.this.GU.T(a.this.bv());
                }
            }

            @Override
            public final void onPageStart() {
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                a.b(a.this, true);
                if (a.this.GU != null) {
                    a.this.GU.T(a.this.bv());
                }
            }
        };
    }

    private KsAdWebView.b lT() {
        return new KsAdWebView.b() {
            @Override
            public final void onFailed() {
                a.c(a.this, true);
                if (a.this.GU != null) {
                    a.this.GU.T(a.this.bv());
                }
            }

            @Override
            public final void onSuccess() {
                a.c(a.this, true);
                if (a.this.GU != null) {
                    a.this.GU.T(a.this.bv());
                }
            }
        };
    }

    private boolean lU() {
        if (!bv()) {
            FrameLayout frameLayout = this.cQ;
            if (frameLayout != null) {
                frameLayout.setVisibility(8);
            }
            return false;
        }
        FrameLayout frameLayout2 = this.cQ;
        if (frameLayout2 == null) {
            return true;
        }
        frameLayout2.setVisibility(0);
        return true;
    }

    private static String o(AdTemplate adTemplate) {
        return com.kwad.sdk.core.response.b.a.aK(d.cg(adTemplate));
    }

    public final void a(FrameLayout frameLayout, AdBaseFrameLayout adBaseFrameLayout, AdTemplate adTemplate) {
        this.cQ = frameLayout;
        this.dr = adBaseFrameLayout;
        this.mAdTemplate = adTemplate;
        fA();
        this.GP = false;
    }

    public final void a(a aVar) {
        this.GU = aVar;
    }

    public final void a(b bVar) {
        this.GY = bVar;
    }

    public final void a(com.kwad.sdk.core.webview.d.a.a aVar) {
        this.cH = aVar;
    }

    public final a ah(boolean z) {
        this.GS = z;
        return this;
    }

    public final boolean ap() {
        boolean zLU = lU();
        this.GX = true;
        if (zLU && this.mActivity != null) {
            if (this.GQ.getClientConfig() != null) {
                this.GQ.getClientConfig().bk(true);
                this.GQ.getClientConfig().bl(true);
            }
            this.GT.a(new View.OnTouchListener() {
                @Override
                public final boolean onTouch(View view, MotionEvent motionEvent) {
                    if (motionEvent.getX() > a.this.mBackIcon.getX() && motionEvent.getX() - a.this.mBackIcon.getX() < a.this.mBackIcon.getWidth() && motionEvent.getY() > a.this.mBackIcon.getY() && motionEvent.getY() - a.this.mBackIcon.getY() < a.this.mBackIcon.getHeight()) {
                        com.kwad.sdk.core.e.c.d("LandingPageWebCard", "onClick backIcon");
                        return false;
                    }
                    if (motionEvent.getAction() == 0) {
                        a.this.mLastDown = SystemClock.elapsedRealtime();
                    } else if (motionEvent.getAction() == 1) {
                        long jElapsedRealtime = SystemClock.elapsedRealtime() - a.this.mLastDown;
                        if (a.this.mLastDown > 0 && jElapsedRealtime > 30 && jElapsedRealtime < 500) {
                            com.kwad.sdk.core.report.a.a(a.this.mAdTemplate, e.v, a.this.dr.getTouchCoords());
                            if (!a.this.GR) {
                                a.d(a.this, true);
                                if (a.this.cH != null) {
                                    com.kwad.sdk.core.webview.d.b.a aVar = new com.kwad.sdk.core.webview.d.b.a();
                                    aVar.UZ = 3;
                                    a.this.cH.a(aVar);
                                }
                            }
                        }
                        a.this.mLastDown = 0L;
                    }
                    return false;
                }
            });
            long jAe = com.kwad.sdk.core.response.b.a.ae(d.cg(this.mAdTemplate));
            if (jAe == 0 || !this.GS) {
                this.mBackIcon.setVisibility(0);
            } else {
                this.mHandler.postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        if (a.this.mActivity == null || a.this.mActivity.isFinishing()) {
                            return;
                        }
                        a.this.mBackIcon.setVisibility(0);
                        a.this.mBackIcon.setAlpha(0.0f);
                        a.this.mBackIcon.animate().alpha(1.0f).setDuration(500L).start();
                    }
                }, jAe);
            }
            KsAdWebView ksAdWebView = this.GQ;
            if (ksAdWebView != null) {
                ksAdWebView.onActivityCreate();
            }
        }
        return zLU;
    }

    public final void aw() {
        this.cQ.setVisibility(4);
        String strO = o(this.mAdTemplate);
        if (TextUtils.isEmpty(strO)) {
            return;
        }
        this.GQ.loadUrl(strO);
    }

    public final void setActivity(Activity activity) {
        this.mActivity = activity;
    }
}
