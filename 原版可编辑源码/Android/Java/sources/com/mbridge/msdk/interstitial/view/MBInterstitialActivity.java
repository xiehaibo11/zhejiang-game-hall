package com.mbridge.msdk.interstitial.view;

import android.content.Intent;
import android.graphics.Bitmap;
import android.graphics.drawable.ColorDrawable;
import android.net.http.SslError;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.util.DisplayMetrics;
import android.view.View;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.ProgressBar;
import android.widget.RelativeLayout;
import com.mbridge.msdk.activity.MBBaseActivity;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.same.report.c;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.interstitial.c.a;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.mbjscommon.mraid.b;
import com.mbridge.msdk.mbjscommon.mraid.d;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.NativeListener;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.i;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

public class MBInterstitialActivity extends MBBaseActivity implements b {
    public static final String INTENT_CAMAPIGN = "campaign";
    public static final String INTENT_UNIT_ID = "unitId";
    public static final long WATI_JS_INVOKE = 2000;
    public static final long WEB_LOAD_TIME = 15000;
    private CampaignEx e;
    private WindVaneWebView f;
    private ImageView g;
    private a.c h;
    private boolean i;
    private d j;
    private long k;
    private boolean l;
    private boolean m;
    public ProgressBar mProgressBar;
    public String mUnitid;
    private com.mbridge.msdk.click.b o;
    private boolean c = false;
    private boolean d = false;
    public boolean mIsMBPage = false;
    private Handler n = new Handler() {
        @Override
        public final void handleMessage(Message message) {
        }
    };
    Runnable a = new Runnable() {
        @Override
        public final void run() {
            z.d("MBInterstitialActivity", "load page timeOut");
            if (!MBInterstitialActivity.this.d) {
                MBInterstitialActivity.this.c = true;
                if (MBInterstitialActivity.this.h != null) {
                    MBInterstitialActivity.this.h.a("load page timeout");
                    if (MBInterstitialActivity.this.f != null) {
                        MBInterstitialActivity.this.f.setVisibility(8);
                        MBInterstitialActivity.this.f.setWebViewListener(null);
                        MBInterstitialActivity.this.f.release();
                    }
                    MBInterstitialActivity.this.hideLoading();
                    return;
                }
                return;
            }
            z.d("MBInterstitialActivity", "mLoadTimeTask 已经打开非mb的页面了 return ");
        }
    };
    Runnable b = new Runnable() {
        @Override
        public final void run() {
            z.d("MBInterstitialActivity", "mWaitJsInvokeTask 开始执行run方法");
            if (!MBInterstitialActivity.this.mIsMBPage) {
                if (MBInterstitialActivity.this.e != null && MBInterstitialActivity.this.e.isMraid()) {
                    MBInterstitialActivity.h(MBInterstitialActivity.this);
                }
                com.mbridge.msdk.interstitial.b.a.a().a(MBInterstitialActivity.this.e, MBInterstitialActivity.this.mUnitid);
                if (!MBInterstitialActivity.this.c) {
                    MBInterstitialActivity.this.d = true;
                    MBInterstitialActivity.this.hideLoading();
                    MBInterstitialActivity.this.showWebView();
                    z.d("MBInterstitialActivity", "mWaitJsInvokeTask 最终显示非mb的页面 ");
                    return;
                }
                z.b("MBInterstitialActivity", "mWaitJsInvokeTask webview 已加载超时 return");
                return;
            }
            z.b("MBInterstitialActivity", "mWaitJsInvokeTask getinfo 已调用 return");
        }
    };

    @Override
    public void expand(String str, boolean z) {
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            int iA = s.a(getApplicationContext(), "mbridge_interstitial_activity", "layout");
            if (iA != -1) {
                setContentView(iA);
                initView();
                a();
                this.g.setOnClickListener(new View.OnClickListener() {
                    @Override
                    public final void onClick(View view) {
                        MBInterstitialActivity.this.finish();
                    }
                });
                if (this.f != null && this.e != null) {
                    BrowserView.MBDownloadListener mBDownloadListener = new BrowserView.MBDownloadListener(this.e);
                    mBDownloadListener.setTitle(this.e.getAppName());
                    this.f.setCampaignId(this.e.getId());
                    this.f.setDownloadListener(mBDownloadListener);
                }
                b();
                try {
                    if (this.e != null && (!TextUtils.isEmpty(this.e.getHtmlUrl()) || this.e.isMraid())) {
                        z.b("MBInterstitialActivity", "url:" + this.e.getHtmlUrl());
                        goneWebView();
                        this.f.setWebViewListener(new com.mbridge.msdk.mbjscommon.windvane.d() {
                            @Override
                            public final void a(WebView webView, int i) {
                            }

                            @Override
                            public final void b(WebView webView, int i) {
                            }

                            @Override
                            public final void c(WebView webView, int i) {
                            }

                            @Override
                            public final boolean b(WebView webView, String str) {
                                z.d("MBInterstitialActivity", "shouldOverrideUrlLoading");
                                return true;
                            }

                            @Override
                            public final void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                                z.d("MBInterstitialActivity", "onReceivedSslError");
                                MBInterstitialActivity.this.i = true;
                            }

                            @Override
                            public final void a(WebView webView, int i, String str, String str2) {
                                try {
                                    MBInterstitialActivity.this.i = true;
                                    z.d("MBInterstitialActivity", "onReceivedError");
                                    if (MBInterstitialActivity.this.h != null) {
                                        MBInterstitialActivity.this.h.a(str);
                                    }
                                    MBInterstitialActivity.a(MBInterstitialActivity.this, 3, str);
                                } catch (Exception e) {
                                    e.printStackTrace();
                                }
                            }

                            @Override
                            public final void a(WebView webView, String str, Bitmap bitmap) {
                                z.b("MBInterstitialActivity", "onPageStarted");
                            }

                            @Override
                            public final void a(WebView webView, String str) {
                                try {
                                    if (MBInterstitialActivity.this.i) {
                                        return;
                                    }
                                    MBInterstitialActivity.a(MBInterstitialActivity.this, 1, "");
                                    z.d("MBInterstitialActivity", "onPageFinished");
                                    if (MBInterstitialActivity.this.a != null && MBInterstitialActivity.this.n != null) {
                                        MBInterstitialActivity.this.n.removeCallbacks(MBInterstitialActivity.this.a);
                                    }
                                    if (MBInterstitialActivity.this.h != null) {
                                        MBInterstitialActivity.this.h.a();
                                    }
                                    if (!MBInterstitialActivity.this.mIsMBPage) {
                                        MBInterstitialActivity.this.n.postDelayed(MBInterstitialActivity.this.b, 2000L);
                                        z.d("MBInterstitialActivity", "不是mb页面 getinfo还没调用 2秒后执行task");
                                    } else {
                                        z.d("MBInterstitialActivity", "是mb页面 getinfo已调用 不做处理");
                                    }
                                    MBInterstitialActivity.e(MBInterstitialActivity.this);
                                } catch (Exception e) {
                                    e.printStackTrace();
                                    if (MBInterstitialActivity.this.h != null) {
                                        MBInterstitialActivity.this.h.a("load page failed");
                                    }
                                }
                            }
                        });
                        String htmlUrl = this.e.getHtmlUrl();
                        if (this.e.isMraid()) {
                            File file = new File(this.e.getMraid());
                            if (file.exists() && file.isFile() && file.canRead()) {
                                htmlUrl = "file:////" + this.e.getMraid();
                            }
                        }
                        this.k = System.currentTimeMillis();
                        this.f.loadUrl(htmlUrl);
                        this.n.postDelayed(this.a, WEB_LOAD_TIME);
                    } else if (this.h != null) {
                        this.h.a("offerwall htmlurl is null");
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
                com.mbridge.msdk.foundation.controller.a.f().a(this);
                com.mbridge.msdk.foundation.b.b.a().a(this.mUnitid, this, null, null, new com.mbridge.msdk.foundation.b.a() {
                    @Override
                    public final void a() {
                        String string;
                        MBInterstitialActivity.this.onPause();
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 1);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c("MBInterstitialActivity", th.getMessage(), th);
                            string = "";
                        }
                        h.a().a((WebView) MBInterstitialActivity.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }

                    @Override
                    public final void b() {
                        String string;
                        MBInterstitialActivity.this.onResume();
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 2);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c("MBInterstitialActivity", th.getMessage(), th);
                            string = "";
                        }
                        h.a().a((WebView) MBInterstitialActivity.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }

                    @Override
                    public final void a(String str) {
                        String string;
                        MBInterstitialActivity.this.onResume();
                        try {
                            JSONObject jSONObject = new JSONObject();
                            if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                jSONObject.put("status", 2);
                            }
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c("MBInterstitialActivity", th.getMessage(), th);
                            string = "";
                        }
                        h.a().a((WebView) MBInterstitialActivity.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                    }
                });
                this.e.setCampaignUnitId(this.mUnitid);
                com.mbridge.msdk.foundation.b.b.a().a(this.mUnitid, this.e);
                return;
            }
            a();
            b();
            if (this.h != null) {
                this.h.a("not found resource");
            }
            finish();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        CampaignEx campaignEx = this.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        com.mbridge.msdk.mbjscommon.mraid.a.a().b(this.f, "true");
    }

    @Override
    protected void onPause() {
        super.onPause();
        CampaignEx campaignEx = this.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        com.mbridge.msdk.mbjscommon.mraid.a.a().b(this.f, "false");
    }

    private void a() {
        Intent intent = getIntent();
        if (intent != null) {
            this.mUnitid = intent.getStringExtra("unitId");
            this.e = (CampaignEx) intent.getSerializableExtra(INTENT_CAMAPIGN);
        }
        CampaignEx campaignEx = this.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        d dVar = new d(this);
        this.j = dVar;
        dVar.c();
        this.j.a(new d.b() {
            @Override
            public final void a(double d) {
                z.d("MBInterstitialActivity", "volume is : " + d);
                com.mbridge.msdk.mbjscommon.mraid.a.a().a(MBInterstitialActivity.this.f, d);
            }
        });
    }

    public void initView() {
        this.f = (WindVaneWebView) findViewById(s.a(getApplicationContext(), "mbridge_interstitial_wv", "id"));
        this.mProgressBar = (ProgressBar) findViewById(s.a(getApplicationContext(), "mbridge_interstitial_pb", "id"));
        this.g = (ImageView) findViewById(s.a(getApplicationContext(), "mbridge_interstitial_iv_close", "id"));
    }

    private void b() {
        try {
            if (a.e == null || TextUtils.isEmpty(this.mUnitid) || !a.e.containsKey(this.mUnitid)) {
                return;
            }
            this.h = a.e.get(this.mUnitid);
            z.b("MBInterstitialActivity", "mShowIntersInnerListener 初始化成功");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void showWebView() {
        try {
            runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (MBInterstitialActivity.this.f != null) {
                        MBInterstitialActivity.this.f.setVisibility(0);
                        if (MBInterstitialActivity.this.e.isMraid()) {
                            MBInterstitialActivity.j(MBInterstitialActivity.this);
                        }
                        MBInterstitialActivity.k(MBInterstitialActivity.this);
                    }
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void goneWebView() {
        try {
            runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (MBInterstitialActivity.this.f != null) {
                        MBInterstitialActivity.this.f.setVisibility(8);
                    }
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void showLoading() {
        try {
            runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (MBInterstitialActivity.this.mProgressBar != null) {
                        MBInterstitialActivity.this.mProgressBar.setVisibility(0);
                    }
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public void hideLoading() {
        try {
            runOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    if (MBInterstitialActivity.this.mProgressBar != null) {
                        MBInterstitialActivity.this.mProgressBar.setVisibility(8);
                    }
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        try {
            if (this.h != null) {
                this.h.b();
            }
            if (this.o != null) {
                this.o.a(false);
                this.o.a((NativeListener.NativeTrackingListener) null);
                this.o.a();
            }
            if (this.j != null) {
                this.j.d();
            }
            if (!this.l) {
                c();
            }
            if (a.e != null && !TextUtils.isEmpty(this.mUnitid)) {
                a.e.remove(this.mUnitid);
            }
            this.h = null;
            com.mbridge.msdk.foundation.b.b.a().c(this.mUnitid);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void finish() {
        super.finish();
        if (!this.l) {
            c();
        }
        if (this.m) {
            return;
        }
        reportPlayableClosed();
    }

    public void reportPlayableClosed() {
        if (this.e != null) {
            p pVar = new p(r.q, this.e.getId(), this.e.getRequestId(), this.e.getRequestIdNotice(), this.mUnitid, v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
            pVar.a(this.e.isMraid() ? p.a : p.b);
            c.b(pVar, com.mbridge.msdk.foundation.controller.a.f().j(), this.mUnitid);
            this.m = true;
        }
    }

    private void c() {
        com.mbridge.msdk.foundation.same.report.d dVar = new com.mbridge.msdk.foundation.same.report.d(getApplicationContext());
        CampaignEx campaignEx = this.e;
        if (campaignEx != null) {
            dVar.a(campaignEx.getRequestId(), this.e.getRequestIdNotice(), this.e.getId(), this.mUnitid, com.mbridge.msdk.mbjscommon.mraid.c.a(this.e.getId()), this.e.isBidCampaign());
            com.mbridge.msdk.mbjscommon.mraid.c.b(this.e.getId());
            this.l = true;
        }
    }

    public void onIntersClick() {
        try {
            if (this.h != null) {
                this.h.c();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public com.mbridge.msdk.c.d getIntersUnitSetting() {
        try {
            if (TextUtils.isEmpty(this.mUnitid)) {
                return null;
            }
            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.mUnitid);
            if (dVarE != null) {
                return dVarE;
            }
            z.b("MBInterstitialActivity", "获取默认的unitsetting");
            return com.mbridge.msdk.c.d.f(this.mUnitid);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public void clickTracking(final boolean z, final String str) {
        this.o = new com.mbridge.msdk.click.b(getApplicationContext(), this.mUnitid);
        try {
            if (this.e != null && this.e.needShowIDialog()) {
                com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() {
                    @Override
                    public final void b() {
                    }

                    @Override
                    public final void a() {
                        MBInterstitialActivity.this.a(z, str);
                    }

                    @Override
                    public final void c() {
                        a();
                    }
                };
                if (com.mbridge.msdk.click.c.a(this.e) && this.e.needShowIDialog()) {
                    if (!this.o.b(this.e)) {
                        e.a().a("", this.e, this, this.mUnitid, aVar);
                        return;
                    } else {
                        onIntersClick();
                        return;
                    }
                }
            }
        } catch (Throwable th) {
            z.a("MBInterstitialActivity", th.getMessage());
        }
        a(z, str);
    }

    private void a(boolean z, String str) {
        try {
            if (this.e != null && !ai.a(this.mUnitid)) {
                onIntersClick();
                this.o.a(new NativeListener.NativeTrackingListener() {
                    @Override
                    public final void onDismissLoading(Campaign campaign) {
                    }

                    @Override
                    public final void onDownloadFinish(Campaign campaign) {
                    }

                    @Override
                    public final void onDownloadProgress(int i) {
                    }

                    @Override
                    public final void onDownloadStart(Campaign campaign) {
                    }

                    @Override
                    public final boolean onInterceptDefaultLoadingDialog() {
                        return false;
                    }

                    @Override
                    public final void onShowLoading(Campaign campaign) {
                    }

                    @Override
                    public final void onStartRedirection(Campaign campaign, String str2) {
                        try {
                            z.d("MBInterstitialActivity", "=====showloading");
                            MBInterstitialActivity.this.showLoading();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }

                    @Override
                    public final void onRedirectionFailed(Campaign campaign, String str2) {
                        MBInterstitialActivity.this.hideLoading();
                    }

                    @Override
                    public final void onFinishRedirection(Campaign campaign, String str2) {
                        try {
                            MBInterstitialActivity.this.hideLoading();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                    }
                });
                this.o.c(this.e);
                if (!z || TextUtils.isEmpty(str)) {
                    return;
                }
                a(str);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public void open(String str) {
        if (!TextUtils.isEmpty(str)) {
            this.e.setClickURL(str);
        }
        clickTracking(true, str);
    }

    private void a(String str) {
        CampaignEx mraidCampaign = getMraidCampaign();
        if (mraidCampaign != null) {
            new com.mbridge.msdk.foundation.same.report.d(getApplicationContext()).b(mraidCampaign.getRequestId(), mraidCampaign.getRequestIdNotice(), mraidCampaign.getId(), this.mUnitid, str, mraidCampaign.isBidCampaign());
        }
    }

    @Override
    public void close() {
        finish();
    }

    @Override
    public void unload() {
        close();
    }

    @Override
    public CampaignEx getMraidCampaign() {
        return this.e;
    }

    @Override
    public void useCustomClose(boolean z) {
        if (z) {
            this.g.setImageDrawable(new ColorDrawable(0));
        } else {
            this.g.setImageResource(s.a(getApplicationContext(), "mbridge_interstitial_close", i.c));
        }
    }

    @Override
    public void setTopControllerPadding(int i, int i2, int i3, int i4, int i5) {
        int iB = ae.b(this, 10.0f);
        if (i2 <= 0) {
            i2 = iB;
        }
        if (i3 <= 0) {
            i3 = iB;
        }
        if (i4 <= 0) {
            i4 = iB;
        }
        if (i5 <= 0) {
            i5 = iB;
        }
        if (this.g != null) {
            int iB2 = ae.b(this, 25.0f);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iB2, iB2);
            layoutParams.addRule(11);
            layoutParams.setMargins(i2, i4, i3, i5);
            this.g.setLayoutParams(layoutParams);
        }
    }

    static void a(MBInterstitialActivity mBInterstitialActivity, int i, String str) {
        CampaignEx campaignEx = mBInterstitialActivity.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        p pVar = new p();
        pVar.k(mBInterstitialActivity.e.getRequestId());
        pVar.l(mBInterstitialActivity.e.getRequestIdNotice());
        pVar.n(mBInterstitialActivity.e.getId());
        pVar.d(i);
        pVar.q(String.valueOf(System.currentTimeMillis() - mBInterstitialActivity.k));
        pVar.f("");
        pVar.p(str);
        pVar.h("5");
        pVar.a(mBInterstitialActivity.e.isMraid() ? p.a : p.b);
        c.b(pVar, mBInterstitialActivity.mUnitid);
    }

    static void e(MBInterstitialActivity mBInterstitialActivity) {
        CampaignEx campaignEx = mBInterstitialActivity.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        int i = mBInterstitialActivity.getResources().getConfiguration().orientation;
        String str = i != 0 ? i != 1 ? i != 2 ? "UNDEFINED" : "landscape" : "portrait" : "undefined";
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("orientation", str);
            jSONObject.put("locked", "true");
        } catch (Exception e) {
            e.printStackTrace();
        }
        float fX = v.x(mBInterstitialActivity);
        float fY = v.y(mBInterstitialActivity);
        DisplayMetrics displayMetrics = new DisplayMetrics();
        mBInterstitialActivity.getWindowManager().getDefaultDisplay().getMetrics(displayMetrics);
        float f = displayMetrics.widthPixels;
        float f2 = displayMetrics.heightPixels;
        HashMap map = new HashMap();
        map.put(CallMraidJS.a, "Interstitial");
        map.put(CallMraidJS.b, "default");
        map.put(CallMraidJS.c, "true");
        map.put(CallMraidJS.d, jSONObject);
        com.mbridge.msdk.mbjscommon.mraid.a.a().b(mBInterstitialActivity.f, fX, fY);
        com.mbridge.msdk.mbjscommon.mraid.a.a().c(mBInterstitialActivity.f, f, f2);
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBInterstitialActivity.f, map);
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBInterstitialActivity.f, mBInterstitialActivity.j.a());
        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBInterstitialActivity.f);
    }

    static void h(MBInterstitialActivity mBInterstitialActivity) {
        List<String> pv_urls;
        try {
            com.mbridge.msdk.foundation.controller.a.f().a(mBInterstitialActivity);
            if (!TextUtils.isEmpty(mBInterstitialActivity.e.getImpressionURL())) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), mBInterstitialActivity.e, mBInterstitialActivity.mUnitid, mBInterstitialActivity.e.getImpressionURL(), false, true, com.mbridge.msdk.click.a.a.g);
            }
            if (!TextUtils.isEmpty(mBInterstitialActivity.e.getOnlyImpressionURL())) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), mBInterstitialActivity.e, mBInterstitialActivity.mUnitid, mBInterstitialActivity.e.getOnlyImpressionURL(), false, true, com.mbridge.msdk.click.a.a.h);
            }
            com.mbridge.msdk.foundation.same.a.d.a(mBInterstitialActivity.mUnitid, mBInterstitialActivity.e, f.d);
            Runnable runnable = new Runnable() {
                @Override
                public final void run() {
                    l.a(com.mbridge.msdk.foundation.db.i.a(MBInterstitialActivity.this)).b(MBInterstitialActivity.this.e.getId());
                }
            };
            if (com.mbridge.msdk.foundation.controller.b.a().d()) {
                com.mbridge.msdk.foundation.same.f.b.a().execute(runnable);
            } else {
                runnable.run();
            }
            if (mBInterstitialActivity.e == null || (pv_urls = mBInterstitialActivity.e.getPv_urls()) == null || pv_urls.size() <= 0) {
                return;
            }
            Iterator<String> it = pv_urls.iterator();
            while (it.hasNext()) {
                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), mBInterstitialActivity.e, mBInterstitialActivity.mUnitid, it.next(), false, true);
            }
        } catch (Throwable th) {
            z.a("MBInterstitialActivity", th.getMessage());
        }
    }

    static void j(MBInterstitialActivity mBInterstitialActivity) {
        try {
            p pVar = new p();
            pVar.k(mBInterstitialActivity.e.getRequestId());
            pVar.l(mBInterstitialActivity.e.getRequestIdNotice());
            pVar.n(mBInterstitialActivity.e.getId());
            pVar.a(mBInterstitialActivity.e.isMraid() ? p.a : p.b);
            c.a(pVar, mBInterstitialActivity.getApplicationContext(), mBInterstitialActivity.mUnitid);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    static void k(MBInterstitialActivity mBInterstitialActivity) {
        CampaignEx campaignEx = mBInterstitialActivity.e;
        if (campaignEx == null || !campaignEx.isMraid()) {
            return;
        }
        mBInterstitialActivity.f.post(new Runnable() {
            @Override
            public final void run() {
                com.mbridge.msdk.mbjscommon.mraid.a.a().a(MBInterstitialActivity.this.f, MBInterstitialActivity.this.f.getLeft(), MBInterstitialActivity.this.f.getTop(), MBInterstitialActivity.this.f.getWidth(), MBInterstitialActivity.this.f.getHeight());
                com.mbridge.msdk.mbjscommon.mraid.a.a().b(MBInterstitialActivity.this.f, MBInterstitialActivity.this.f.getLeft(), MBInterstitialActivity.this.f.getTop(), MBInterstitialActivity.this.f.getWidth(), MBInterstitialActivity.this.f.getHeight());
            }
        });
    }
}
