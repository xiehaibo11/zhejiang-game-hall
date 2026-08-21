package com.sigmob.sdk.base.views;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Bitmap;
import android.graphics.drawable.GradientDrawable;
import android.net.Uri;
import android.net.http.SslError;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.JavascriptInterface;
import android.webkit.SslErrorHandler;
import android.webkit.WebResourceError;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.Md5Util;
import com.czhj.sdk.common.utils.TouchLocation;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.models.rtb.AdPrivacy;
import com.sigmob.sdk.base.models.rtb.MaterialMeta;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class q extends Dialog implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f4975a;
    private Map<String, String> b;
    private Context c;
    private Window d;
    private int e;
    private int f;
    private int g;
    private int h;
    private i i;
    private BaseAdUnit j;
    private boolean k;
    private ImageView l;
    private String m;
    private File n;

    static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Map<String, String> f4978a;

        public a(Map<String, String> map) {
            this.f4978a = map;
        }

        @JavascriptInterface
        public String getPrivacyInfo() {
            try {
                if (this.f4978a == null || this.f4978a.size() <= 0) {
                    return null;
                }
                JSONObject jSONObject = new JSONObject();
                for (Map.Entry<String, String> entry : this.f4978a.entrySet()) {
                    jSONObject.put(entry.getKey(), entry.getValue());
                }
                return jSONObject.toString();
            } catch (Throwable th) {
                th.printStackTrace();
                return null;
            }
        }
    }

    public interface b {
        void a();

        void a(String str, String str2);

        void b();
    }

    public q(Context context, BaseAdUnit baseAdUnit) {
        super(context, com.sigmob.sdk.base.d.e());
        this.d = null;
        this.k = false;
        this.m = "";
        this.c = context.getApplicationContext();
        this.j = baseAdUnit;
        this.i = b();
        this.l = d();
        this.g = this.c.getResources().getDisplayMetrics().widthPixels;
        int i = this.c.getResources().getDisplayMetrics().heightPixels;
        this.h = i;
        int i2 = this.g;
        if (i > i2) {
            this.e = (i * 1) / 2;
            this.f = i2;
        } else {
            this.e = (i * 5) / 6;
            this.f = i;
        }
    }

    private ImageView d() {
        ImageView imageView = new ImageView(this.c);
        this.l = imageView;
        imageView.setImageBitmap(o.CLOSE.a());
        this.l.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.l.setImageAlpha(127);
        this.l.setClickable(true);
        this.l.setOnClickListener(new View.OnClickListener() { // from class: com.sigmob.sdk.base.views.q.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                if (q.this.f4975a != null) {
                    q.this.f4975a.a();
                }
            }
        });
        return this.l;
    }

    private void e() {
        Window window = getWindow();
        this.d = window;
        if (window != null) {
            window.setGravity(80);
            int iF = com.sigmob.sdk.base.d.f();
            if (iF != 0) {
                this.d.setWindowAnimations(iF);
            }
            this.d.getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = this.d.getAttributes();
            attributes.width = this.f;
            attributes.height = this.e;
            this.d.setAttributes(attributes);
        }
    }

    public void a(b bVar) {
        this.f4975a = bVar;
    }

    public boolean a() {
        return this.k;
    }

    public i b() {
        File file;
        i iVar;
        String str;
        BaseAdUnit baseAdUnit = this.j;
        if (baseAdUnit != null) {
            MaterialMeta material = baseAdUnit.getMaterial();
            if (material == null || material.ad_privacy == null) {
                SigmobLog.i("ad_privacy is null");
            } else {
                AdPrivacy adPrivacy = material.ad_privacy;
                if (!TextUtils.isEmpty(adPrivacy.privacy_info_url)) {
                    this.m = adPrivacy.privacy_info_url;
                }
                if (adPrivacy.privacy_template_info != null && adPrivacy.privacy_template_info.size() > 0) {
                    this.b = adPrivacy.privacy_template_info;
                }
                if (!TextUtils.isEmpty(adPrivacy.privacy_template_url)) {
                    String strMd5 = Md5Util.md5(adPrivacy.privacy_template_url);
                    this.n = new File(com.sigmob.sdk.base.utils.b.b(com.sigmob.sdk.base.utils.b.b), strMd5 + ".html");
                }
            }
        }
        if (TextUtils.isEmpty(this.m) && ((file = this.n) == null || !file.exists() || this.b == null)) {
            this.k = false;
            return null;
        }
        this.k = true;
        i iVar2 = new i(this.c);
        this.i = iVar2;
        iVar2.a(true);
        this.i.setAdUnit(this.j);
        this.i.a((m.a) null);
        this.i.setWebViewClient(new WebViewClient() { // from class: com.sigmob.sdk.base.views.q.2
            @Override // android.webkit.WebViewClient
            public void onPageFinished(WebView webView, String str2) {
                super.onPageFinished(webView, str2);
            }

            @Override // android.webkit.WebViewClient
            public void onPageStarted(WebView webView, String str2, Bitmap bitmap) {
                super.onPageStarted(webView, str2, bitmap);
            }

            @Override // android.webkit.WebViewClient
            public void onReceivedError(WebView webView, WebResourceRequest webResourceRequest, WebResourceError webResourceError) {
                SigmobLog.i("onReceivedError:" + webResourceError.toString());
                super.onReceivedError(webView, webResourceRequest, webResourceError);
            }

            @Override // android.webkit.WebViewClient
            public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
                SigmobLog.i("onReceivedSslError:" + sslError.toString());
                super.onReceivedSslError(webView, sslErrorHandler, sslError);
            }

            @Override // android.webkit.WebViewClient
            public WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
                try {
                    return com.sigmob.sdk.base.e.a(webResourceRequest.getUrl());
                } catch (Throwable unused) {
                    return super.shouldInterceptRequest(webView, webResourceRequest);
                }
            }

            @Override // android.webkit.WebViewClient
            public WebResourceResponse shouldInterceptRequest(WebView webView, String str2) {
                try {
                    return com.sigmob.sdk.base.e.a(Uri.parse(str2));
                } catch (Throwable unused) {
                    return super.shouldInterceptRequest(webView, str2);
                }
            }

            @Override // android.webkit.WebViewClient
            public boolean shouldOverrideUrlLoading(WebView webView, String str2) {
                try {
                    SigmobLog.i("shouldOverrideUrlLoading:" + str2);
                    Uri uri = Uri.parse(str2);
                    if ("sigmobAd".equalsIgnoreCase(uri.getScheme())) {
                        String host = uri.getHost();
                        if (!TextUtils.isEmpty(host)) {
                            if ("closeFourElements".equals(host)) {
                                if (q.this.f4975a != null) {
                                    q.this.f4975a.a();
                                }
                            } else if ("buttonClick".equals(host)) {
                                Map<String, String> queryParamMap = ClientMetadata.getQueryParamMap(uri);
                                String str3 = queryParamMap.get("url");
                                String str4 = queryParamMap.get("x");
                                String str5 = "0";
                                if (TextUtils.isEmpty(str4)) {
                                    str4 = "0";
                                }
                                String str6 = queryParamMap.get("y");
                                if (!TextUtils.isEmpty(str6)) {
                                    str5 = str6;
                                }
                                String str7 = String.format("%s,%s,%s,%s", str4, str5, str4, str5);
                                SigMacroCommon macroCommon = q.this.j.getMacroCommon();
                                if (macroCommon instanceof SigMacroCommon) {
                                    macroCommon.addMarcoKey(SigMacroCommon._DOWNX_, str4);
                                    macroCommon.addMarcoKey(SigMacroCommon._DOWNY_, str5);
                                    macroCommon.addMarcoKey(SigMacroCommon._UPX_, str4);
                                    macroCommon.addMarcoKey(SigMacroCommon._UPY_, str5);
                                }
                                q.this.j.getClickCommon().down = new TouchLocation(Integer.parseInt(str4), Integer.parseInt(str5));
                                q.this.j.getClickCommon().up = new TouchLocation(Integer.parseInt(str4), Integer.parseInt(str5));
                                if (q.this.f4975a != null) {
                                    q.this.f4975a.a(str3, str7);
                                }
                            }
                            return true;
                        }
                    }
                } catch (Throwable th) {
                    SigmobLog.e("FourElementsDialog:" + th.getMessage());
                }
                if (!TextUtils.isEmpty(str2) && str2.startsWith("http")) {
                    webView.loadUrl(str2);
                }
                return true;
            }
        });
        if (TextUtils.isEmpty(this.m)) {
            File file2 = this.n;
            if (file2 == null || !file2.exists()) {
                this.k = false;
                return this.i;
            }
            this.i.addJavascriptInterface(new a(this.b), "sigPrivacy");
            iVar = this.i;
            str = "file://" + this.n.getAbsolutePath();
        } else {
            iVar = this.i;
            str = this.m;
        }
        iVar.loadUrl(str);
        return this.i;
    }

    public void c() {
        i iVar = this.i;
        if (iVar != null) {
            iVar.destroy();
            this.i = null;
        }
        ImageView imageView = this.l;
        if (imageView != null) {
            ViewUtil.removeFromParent(imageView);
            this.l = null;
        }
        if (this.c != null) {
            this.c = null;
        }
        if (this.f4975a != null) {
            this.f4975a = null;
        }
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        if (TextUtils.isEmpty(this.m)) {
            relativeLayout.setBackgroundColor(0);
        } else {
            GradientDrawable gradientDrawable = new GradientDrawable();
            gradientDrawable.setColor(-1);
            float fDipsToIntPixels = Dips.dipsToIntPixels(20.0f, this.c);
            gradientDrawable.setCornerRadii(new float[]{fDipsToIntPixels, fDipsToIntPixels, fDipsToIntPixels, fDipsToIntPixels, 0.0f, 0.0f, 0.0f, 0.0f});
            int iDipsToIntPixels = Dips.dipsToIntPixels(10.0f, this.c);
            relativeLayout.setPadding(iDipsToIntPixels, iDipsToIntPixels, iDipsToIntPixels, iDipsToIntPixels);
            relativeLayout.setBackground(gradientDrawable);
        }
        setContentView(relativeLayout);
        setOnShowListener(this);
        setOnDismissListener(this);
        SigmobLog.i("FourElementsDialog onCreate:" + this.f + Constants.COLON_SEPARATOR + this.e);
        if (this.i != null) {
            relativeLayout.addView(this.i, new RelativeLayout.LayoutParams(-1, -1));
        }
        if (this.l != null && !TextUtils.isEmpty(this.m)) {
            int iDipsToIntPixels2 = Dips.dipsToIntPixels(18.0f, this.c);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iDipsToIntPixels2, iDipsToIntPixels2);
            layoutParams.addRule(10);
            layoutParams.addRule(11);
            int i = iDipsToIntPixels2 / 2;
            layoutParams.setMargins(0, i, i, 0);
            relativeLayout.addView(this.l, layoutParams);
        }
        setCanceledOnTouchOutside(true);
        setCancelable(true);
        e();
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        SigmobLog.i("FourElementsDialog  onDismiss");
        b bVar = this.f4975a;
        if (bVar != null) {
            bVar.a();
        }
    }

    @Override // android.content.DialogInterface.OnShowListener
    public void onShow(DialogInterface dialogInterface) {
        SigmobLog.i("FourElementsDialog  onShow");
        b bVar = this.f4975a;
        if (bVar != null) {
            bVar.b();
        }
    }
}
