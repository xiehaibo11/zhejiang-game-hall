package com.cmic.gen.sdk.view;

import android.app.Dialog;
import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.cmic.gen.sdk.auth.GenAuthnHelper;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: compiled from: ServerClauseDialog.java */
/* JADX INFO: loaded from: classes.dex */
public class d extends Dialog {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private WebView f1703a;
    private String b;
    private String c;
    private LinearLayout d;

    public d(Context context, int i, String str, String str2) {
        super(context, i);
        try {
            this.c = str;
            this.b = str2;
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    protected void a() {
        requestWindowFeature(1);
        getWindow().setFeatureDrawableAlpha(0, 0);
        GenAuthThemeConfig authThemeConfig = GenAuthnHelper.getInstance(getContext()).getAuthThemeConfig();
        if (Build.VERSION.SDK_INT >= 21 && authThemeConfig.getStatusBarColor() != 0) {
            getWindow().addFlags(Integer.MIN_VALUE);
            getWindow().clearFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
            getWindow().setStatusBarColor(authThemeConfig.getStatusBarColor());
            getWindow().setNavigationBarColor(authThemeConfig.getStatusBarColor());
        }
        if (Build.VERSION.SDK_INT >= 23) {
            if (authThemeConfig.isLightColor()) {
                getWindow().getDecorView().setSystemUiVisibility(8192);
            } else {
                getWindow().getDecorView().setSystemUiVisibility(0);
            }
        }
        setContentView(c());
    }

    private ViewGroup c() {
        View viewFindViewById;
        try {
            LinearLayout linearLayout = new LinearLayout(getContext());
            this.d = linearLayout;
            linearLayout.setOrientation(1);
            this.d.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
            GenAuthThemeConfig authThemeConfig = GenAuthnHelper.getInstance(getContext()).getAuthThemeConfig();
            int clauseLayoutResID = authThemeConfig.getClauseLayoutResID();
            String str = TextUtils.isEmpty(this.c) ? com.cmic.gen.sdk.c.d[authThemeConfig.getAppLanguageType()] : this.c;
            if (clauseLayoutResID != -1) {
                RelativeLayout relativeLayoutA = e.a(getContext(), getLayoutInflater().inflate(clauseLayoutResID, (ViewGroup) this.d, false), 1118481, 0, str, (View.OnClickListener) null);
                String clauseLayoutReturnID = authThemeConfig.getClauseLayoutReturnID();
                if (!TextUtils.isEmpty(clauseLayoutReturnID) && (viewFindViewById = relativeLayoutA.findViewById(c.a(getContext(), clauseLayoutReturnID))) != null) {
                    viewFindViewById.setOnClickListener(new View.OnClickListener() { // from class: com.cmic.gen.sdk.view.d.1
                        @Override // android.view.View.OnClickListener
                        public void onClick(View view) {
                            d.this.f1703a.stopLoading();
                            d.this.b();
                        }
                    });
                }
                this.d.addView(relativeLayoutA);
            } else {
                this.d.addView(e.a(getContext(), (View) null, 1118481, 2236962, str, new View.OnClickListener() { // from class: com.cmic.gen.sdk.view.d.2
                    @Override // android.view.View.OnClickListener
                    public void onClick(View view) {
                        d.this.f1703a.stopLoading();
                        d.this.b();
                    }
                }));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return this.d;
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public void dismiss() {
        super.dismiss();
        WebView webView = this.f1703a;
        if (webView != null) {
            webView.stopLoading();
        }
    }

    public void b() {
        if (this.f1703a.canGoBack()) {
            this.f1703a.goBack();
        } else {
            dismiss();
        }
    }

    @Override // android.app.Dialog
    public void show() {
        if (this.d == null) {
            a();
        }
        if (this.f1703a == null) {
            d();
        }
        super.show();
    }

    private void d() {
        GenAuthThemeConfig authThemeConfig = GenAuthnHelper.getInstance(getContext()).getAuthThemeConfig();
        WebView webView = new WebView(getContext());
        this.f1703a = webView;
        WebSettings settings = webView.getSettings();
        settings.setAllowFileAccess(false);
        settings.setAllowContentAccess(false);
        settings.setSavePassword(false);
        settings.setDomStorageEnabled(authThemeConfig.getWebStorage());
        settings.setJavaScriptEnabled(true);
        this.d.addView(this.f1703a, new LinearLayout.LayoutParams(-1, -1));
        if (Build.VERSION.SDK_INT < 17) {
            this.f1703a.removeJavascriptInterface("searchBoxJavaBridge_");
            this.f1703a.removeJavascriptInterface("accessibility");
            this.f1703a.removeJavascriptInterface("accessibilityTraversal");
        }
        this.f1703a.setWebViewClient(new WebViewClient());
        this.f1703a.loadUrl(this.b);
    }
}
