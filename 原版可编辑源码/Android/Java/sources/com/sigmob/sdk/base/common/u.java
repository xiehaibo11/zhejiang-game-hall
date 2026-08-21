package com.sigmob.sdk.base.common;

import android.app.ActionBar;
import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.webkit.DownloadListener;
import android.webkit.WebChromeClient;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.exceptions.IntentNotResolvableException;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.videoAd.BaseAdActivity;
import java.io.Serializable;
import java.util.List;

public class u extends i {
    com.sigmob.sdk.base.views.e f;
    private int g;
    private BaseAdUnit h;
    private RelativeLayout i;
    private TextView j;
    private ImageView k;
    private String l;

    public u(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, j jVar) {
        super(activity, str, jVar);
        this.h = baseAdUnit;
        if (bundle != null) {
            Serializable serializable = bundle.getSerializable(BaseAdActivity.i);
            if (serializable instanceof BaseAdUnit) {
                this.h = (BaseAdUnit) serializable;
            }
        }
        BaseAdUnit baseAdUnit2 = this.h;
        if (baseAdUnit2 == null) {
            a(IntentActions.ACTION_INTERSTITIAL_FAIL);
            h().a();
            return;
        }
        int iIntValue = baseAdUnit2.getAd().display_orientation.intValue();
        this.g = iIntValue != 1 ? iIntValue != 2 ? bundle.getInt(com.sigmob.sdk.base.h.u, 3) : 6 : 7;
        if (this.h.getAd_type() != 5) {
            h().a(this.g);
        }
        k().requestWindowFeature(8);
        k().getWindow().addFlags(1024);
    }

    private void a() {
        if (this.f == null) {
            try {
                com.sigmob.sdk.base.views.e eVar = new com.sigmob.sdk.base.views.e(k());
                this.f = eVar;
                eVar.setScrollBarStyle(0);
                this.f.setAdUnit(this.h);
                this.f.setWebViewClient(new com.sigmob.sdk.base.e() {
                    @Override
                    public void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
                        SigmobLog.e(webResourceError.toString());
                        super.onReceivedError(webView, webResourceRequest, webResourceError);
                    }

                    @Override
                    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
                        String message;
                        Context context;
                        String scheme;
                        int i;
                        try {
                            context = webView.getContext();
                            Uri uri = Uri.parse(str);
                            scheme = uri.getScheme();
                            if ("sigmobAd".equalsIgnoreCase(scheme)) {
                                String host = uri.getHost();
                                if (!TextUtils.isEmpty(host) && ("track".equals(host) || "active".equals(host))) {
                                    String queryParameter = uri.getQueryParameter("data");
                                    String queryParameter2 = uri.getQueryParameter("event");
                                    if (!TextUtils.isEmpty(queryParameter2) && !TextUtils.isEmpty(queryParameter)) {
                                        final String str2 = new String(Base64.decode(queryParameter, 0), "utf-8");
                                        z.a(host, queryParameter2, u.this.h, new z.a() {
                                            @Override
                                            public void a(Object obj) {
                                                if (obj instanceof PointEntitySigmob) {
                                                    ((PointEntitySigmob) obj).setUrl(str2);
                                                }
                                            }
                                        });
                                    }
                                    return true;
                                }
                            }
                        } catch (IntentNotResolvableException e) {
                            message = e.getMessage();
                            SigmobLog.e(message);
                        } catch (Throwable th) {
                            message = th.getMessage();
                            SigmobLog.e(message);
                        }
                        if (TextUtils.isEmpty(scheme) || scheme.equals("http") || scheme.equals("https")) {
                            SigmobLog.i("load Url: " + str);
                            webView.loadUrl(str);
                            return true;
                        }
                        List<String> list = u.this.h.getAdSetting() != null ? u.this.h.getAdSetting().scheme_white_list : null;
                        if (list != null && list.size() > 0) {
                            for (i = 0; i < list.size(); i++) {
                                String str3 = list.get(i);
                                if (!str.startsWith(str3) && !str3.equals("*")) {
                                }
                                s.a(context, Uri.parse(str));
                                z.a(com.sigmob.sdk.base.a.g, "click", u.this.h, "1", str, u.this.l);
                            }
                        }
                        return true;
                    }
                });
                this.f.setWebChromeClient(new WebChromeClient() {
                    @Override
                    public void onReceivedTitle(WebView webView, String str) {
                        if (TextUtils.isEmpty(str)) {
                            if (u.this.j != null) {
                                u.this.j.setVisibility(8);
                            }
                        } else if (u.this.j != null) {
                            u.this.j.setVisibility(0);
                            u.this.j.setText(str);
                        }
                    }
                });
            } catch (Throwable th) {
                SigmobLog.e(th.getMessage());
                this.d.a();
            }
        }
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
        LinearLayout linearLayout = new LinearLayout(k());
        linearLayout.addView(this.f, 0, layoutParams);
        this.d.onSetContentView(linearLayout);
        if (this.h.getAd() != null && this.h.getAd().ad_setting != null && !this.h.getAd().ad_setting.disable_download_listener.booleanValue()) {
            this.f.setDownloadListener(new DownloadListener() {
                @Override
                public void onDownloadStart(String str, String str2, String str3, String str4, long j) {
                    n.a(str, u.this.h);
                    z.a(com.sigmob.sdk.base.a.g, "click", u.this.h, "0", str, u.this.l);
                    SigmobLog.d("onDownloadStart() called with: url = [" + str + "], userAgent = [" + str2 + "], contentDisposition = [" + str3 + "], mimetype = [" + str4 + "], contentLength = [" + j + "]");
                }
            });
        }
        this.f.setOnTouchListener(new View.OnTouchListener() {
            MotionEvent a = null;

            @Override
            public boolean onTouch(View view, MotionEvent motionEvent) {
                SigmobLog.d(motionEvent.toString());
                if (motionEvent.getAction() == 0) {
                    this.a = MotionEvent.obtain(motionEvent);
                } else if (motionEvent.getAction() == 1) {
                    MotionEvent motionEvent2 = this.a;
                    if (motionEvent2 == null) {
                        u.this.l = String.format("%d,%d,%d,%d", Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()), Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()));
                    } else {
                        u.this.l = String.format("%d,%d,%d,%d", Integer.valueOf((int) motionEvent2.getRawX()), Integer.valueOf((int) this.a.getRawY()), Integer.valueOf((int) motionEvent.getRawX()), Integer.valueOf((int) motionEvent.getRawY()));
                    }
                }
                return false;
            }
        });
    }

    private void a(String str, String str2, BaseAdUnit baseAdUnit, final String str3) {
        z.a(str2, str, baseAdUnit, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    ((PointEntitySigmob) obj).setCoordinate(str3);
                }
            }
        });
    }

    private void l() {
        if (this.i == null) {
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams.addRule(13);
            int iDipsToIntPixels = Dips.dipsToIntPixels(20.0f, this.b);
            RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(iDipsToIntPixels, iDipsToIntPixels);
            layoutParams2.addRule(15);
            layoutParams2.addRule(9);
            int i = iDipsToIntPixels / 2;
            layoutParams2.setMargins(i, i, 0, 0);
            ImageView imageView = new ImageView(this.b);
            this.k = imageView;
            imageView.setImageBitmap(com.sigmob.sdk.base.views.o.h.a());
            this.k.setScaleType(ImageView.ScaleType.CENTER_CROP);
            this.k.setClickable(true);
            this.k.setId(ClientMetadata.generateViewId());
            this.k.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    u.this.h().a();
                }
            });
            RelativeLayout relativeLayout = new RelativeLayout(i());
            this.i = relativeLayout;
            relativeLayout.setLayoutParams(layoutParams);
            this.i.setBackgroundColor(-1);
            this.i.addView(this.k, layoutParams2);
            TextView textView = new TextView(this.b);
            this.j = textView;
            textView.setTextColor(-16777216);
            this.j.setTextSize(18.0f);
            this.j.setVisibility(8);
            RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
            layoutParams3.addRule(13);
            this.i.addView(this.j, layoutParams3);
        }
    }

    private void m() {
        ActionBar.LayoutParams layoutParams = new ActionBar.LayoutParams(-1, -1, 17);
        ActionBar actionBar = k().getActionBar();
        if (actionBar != null) {
            l();
            actionBar.setCustomView(this.i, layoutParams);
            actionBar.setDisplayOptions(16);
            actionBar.setDisplayShowCustomEnabled(true);
            actionBar.setDisplayShowHomeEnabled(false);
            actionBar.setDisplayShowTitleEnabled(false);
        }
    }

    @Override
    public void a(Configuration configuration) {
    }

    @Override
    public void a(Bundle bundle) {
    }

    @Override
    public void b() {
        int iC = com.sigmob.sdk.base.d.c();
        if (iC > 0) {
            k().getTheme().applyStyle(iC, true);
        }
        m();
        a();
        String strMacroProcess = this.h.getMacroCommon().macroProcess(this.h.getMaterial().landing_page);
        if (TextUtils.isEmpty(this.h.getLandUrl())) {
            this.f.loadUrl(strMacroProcess);
        } else {
            this.f.loadUrl(this.h.getLandUrl());
        }
        a(IntentActions.ACTION_LANDPAGE_SHOW);
    }

    @Override
    public void c() {
    }

    @Override
    public void d() {
        com.sigmob.sdk.base.views.e eVar = this.f;
        if (eVar != null) {
            eVar.resumeTimers();
        }
    }

    @Override
    public void e() {
        a(IntentActions.ACTION_LANDPAGE_DISMISS);
        ImageView imageView = this.k;
        if (imageView != null) {
            imageView.setOnClickListener(null);
            this.k = null;
        }
        com.sigmob.sdk.base.views.e eVar = this.f;
        if (eVar != null) {
            eVar.destroy();
            this.f = null;
        }
        super.e();
    }

    @Override
    public void f() {
    }

    @Override
    public boolean g() {
        if (!this.f.canGoBack()) {
            return true;
        }
        this.f.goBack();
        return false;
    }
}
