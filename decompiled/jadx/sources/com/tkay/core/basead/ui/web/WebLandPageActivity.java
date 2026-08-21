package com.tkay.core.basead.ui.web;

import android.app.Activity;
import android.content.ClipData;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.ColorDrawable;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.CookieSyncManager;
import android.webkit.DownloadListener;
import android.webkit.GeolocationPermissions;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.widget.ImageButton;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import android.widget.Toast;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.core.api.IOfferClickHandler;
import com.tkay.core.basead.a;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.an;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.k.c;
import com.tkay.core.common.l.l;
import java.io.Serializable;
import java.lang.reflect.Method;
import java.util.Iterator;
import org.json.JSONArray;

/* JADX INFO: loaded from: classes3.dex */
public class WebLandPageActivity extends Activity {
    private static final int e = 343452;
    JSONArray b;
    private WebProgressBarView f;
    private WebView g;
    private ImageButton h;
    private ImageButton i;
    private ImageButton j;
    private ImageButton k;
    private boolean l;
    private h m;
    private i n;
    private String o;
    private IOfferClickHandler p;
    private b q;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    int f5985a = 8;
    private ValueCallback<Uri[]> r = null;
    private final int s = 512;
    int c = 0;
    int d = 0;

    public static void a(Context context, com.tkay.core.basead.b.a aVar) {
        Intent intent = new Intent();
        intent.setClass(context, WebLandPageActivity.class);
        intent.putExtra(a.C0409a.c, aVar.c);
        intent.putExtra(a.C0409a.e, aVar.h);
        intent.putExtra(a.C0409a.j, aVar.f);
        if (aVar.g != null) {
            intent.putExtra(a.C0409a.l, aVar.g);
        }
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    public static void a(Context context, String str) {
        com.tkay.core.basead.b.a aVar = new com.tkay.core.basead.b.a();
        aVar.f = str;
        a(context, aVar);
    }

    private void b() {
        Intent intent = getIntent();
        if (intent != null) {
            try {
                Serializable serializableExtra = intent.getSerializableExtra(a.C0409a.c);
                if (serializableExtra != null && (serializableExtra instanceof h)) {
                    h hVar = (h) serializableExtra;
                    this.m = hVar;
                    this.q = new b(hVar);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            try {
                Serializable serializableExtra2 = intent.getSerializableExtra(a.C0409a.e);
                if (serializableExtra2 != null && (serializableExtra2 instanceof i)) {
                    this.n = (i) serializableExtra2;
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
            try {
                Serializable serializableExtra3 = intent.getSerializableExtra(a.C0409a.l);
                if (serializableExtra3 != null && (serializableExtra3 instanceof IOfferClickHandler)) {
                    this.p = (IOfferClickHandler) serializableExtra3;
                }
            } catch (Throwable th3) {
                th3.printStackTrace();
            }
            try {
                this.o = intent.getStringExtra(a.C0409a.j);
            } catch (Throwable th4) {
                th4.printStackTrace();
            }
        }
    }

    private void a(boolean z) {
        this.i.setImageResource(z ? com.tkay.core.common.l.h.a(this, "browser_right_icon", com.tkay.expressad.foundation.h.i.c) : com.tkay.core.common.l.h.a(this, "browser_unright_icon", com.tkay.expressad.foundation.h.i.c));
    }

    private void b(boolean z) {
        this.h.setImageResource(z ? com.tkay.core.common.l.h.a(this, "browser_left_icon", com.tkay.expressad.foundation.h.i.c) : com.tkay.core.common.l.h.a(this, "browser_unleft_icon", com.tkay.expressad.foundation.h.i.c));
    }

    public final void a(WebView webView, String str) {
        this.h.setImageResource(webView.canGoBack() ? com.tkay.core.common.l.h.a(this, "browser_left_icon", com.tkay.expressad.foundation.h.i.c) : com.tkay.core.common.l.h.a(this, "browser_unleft_icon", com.tkay.expressad.foundation.h.i.c));
        this.i.setImageResource(webView.canGoForward() ? com.tkay.core.common.l.h.a(this, "browser_right_icon", com.tkay.expressad.foundation.h.i.c) : com.tkay.core.common.l.h.a(this, "browser_unright_icon", com.tkay.expressad.foundation.h.i.c));
        b bVar = this.q;
        if (bVar == null || bVar.b == null) {
            return;
        }
        try {
            Iterator<String> itKeys = bVar.b.keys();
            while (itKeys.hasNext()) {
                String next = itKeys.next();
                if (next != null && str != null && str.contains(next) && bVar.c.get(next) == null) {
                    bVar.c.put(next, Boolean.TRUE);
                    webView.loadUrl(bVar.b.optString(next));
                }
            }
        } catch (Throwable unused) {
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setResult(-1);
        boolean zRequestFeature = getWindow().requestFeature(2);
        this.l = zRequestFeature;
        if (zRequestFeature) {
            getWindow().setFeatureInt(2, -1);
        }
        Intent intent = getIntent();
        if (intent != null) {
            try {
                Serializable serializableExtra = intent.getSerializableExtra(a.C0409a.c);
                if (serializableExtra != null && (serializableExtra instanceof h)) {
                    h hVar = (h) serializableExtra;
                    this.m = hVar;
                    this.q = new b(hVar);
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
            try {
                Serializable serializableExtra2 = intent.getSerializableExtra(a.C0409a.e);
                if (serializableExtra2 != null && (serializableExtra2 instanceof i)) {
                    this.n = (i) serializableExtra2;
                }
            } catch (Throwable th2) {
                th2.printStackTrace();
            }
            try {
                Serializable serializableExtra3 = intent.getSerializableExtra(a.C0409a.l);
                if (serializableExtra3 != null && (serializableExtra3 instanceof IOfferClickHandler)) {
                    this.p = (IOfferClickHandler) serializableExtra3;
                }
            } catch (Throwable th3) {
                th3.printStackTrace();
            }
            try {
                this.o = intent.getStringExtra(a.C0409a.j);
            } catch (Throwable th4) {
                th4.printStackTrace();
            }
        }
        String strA = this.o;
        if (TextUtils.isEmpty(strA)) {
            h hVar2 = this.m;
            strA = hVar2 != null ? hVar2.A() : "";
        }
        Context applicationContext = getApplicationContext();
        if (TextUtils.isEmpty(strA)) {
            Toast.makeText(applicationContext, com.tkay.core.common.l.h.a(applicationContext, "basead_click_empty", com.tkay.expressad.foundation.h.i.g), 0).show();
            finish();
            return;
        }
        an anVarA = com.tkay.core.basead.a.a.a(applicationContext, strA);
        if (anVarA.m) {
            a(anVarA);
            return;
        }
        a(anVarA);
        RelativeLayout relativeLayout = new RelativeLayout(this);
        relativeLayout.setBackgroundColor(-16777216);
        relativeLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setId(e);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 55.0f));
        layoutParams.addRule(12);
        linearLayout.setLayoutParams(layoutParams);
        linearLayout.setBackgroundDrawable(new ColorDrawable(-592138));
        int iA = com.tkay.core.common.l.h.a(this, 20.0f);
        linearLayout.setPadding(iA, 0, iA, 0);
        relativeLayout.addView(linearLayout);
        this.h = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_unleft_icon", com.tkay.expressad.foundation.h.i.c)));
        this.i = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_unright_icon", com.tkay.expressad.foundation.h.i.c)));
        this.j = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_refresh_icon", com.tkay.expressad.foundation.h.i.c)));
        this.k = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_close_icon", com.tkay.expressad.foundation.h.i.c)));
        linearLayout.addView(this.h);
        linearLayout.addView(this.i);
        linearLayout.addView(this.j);
        linearLayout.addView(this.k);
        this.g = new BaseWebView(this);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams2.addRule(2, e);
        this.g.setLayoutParams(layoutParams2);
        relativeLayout.addView(this.g);
        View view = new View(this);
        view.setBackgroundColor(-2434342);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 1.0f));
        layoutParams3.addRule(2, e);
        view.setLayoutParams(layoutParams3);
        relativeLayout.addView(view);
        WebProgressBarView webProgressBarView = new WebProgressBarView(this);
        this.f = webProgressBarView;
        webProgressBarView.setProgress(0);
        relativeLayout.addView(this.f, new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 2.0f)));
        setContentView(relativeLayout);
        this.h.setBackgroundColor(0);
        this.h.setOnClickListener(new AnonymousClass2());
        this.i.setBackgroundColor(0);
        this.i.setOnClickListener(new AnonymousClass3());
        this.j.setBackgroundColor(0);
        this.j.setOnClickListener(new AnonymousClass4());
        this.k.setBackgroundColor(0);
        this.k.setOnClickListener(new AnonymousClass5());
        CookieSyncManager.createInstance(this);
        CookieSyncManager.getInstance().startSync();
        WebSettings settings = this.g.getSettings();
        this.g.setHorizontalScrollBarEnabled(false);
        this.g.setVerticalScrollBarEnabled(false);
        this.g.setVerticalScrollBarEnabled(false);
        this.g.requestFocus();
        settings.setJavaScriptEnabled(true);
        settings.setAppCacheEnabled(true);
        settings.setAppCacheMaxSize(5242880L);
        settings.setAllowFileAccess(false);
        settings.setBuiltInZoomControls(true);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setDomStorageEnabled(true);
        settings.setSupportZoom(true);
        settings.setBuiltInZoomControls(true);
        settings.setSavePassword(false);
        settings.setDatabaseEnabled(true);
        settings.setUseWideViewPort(true);
        settings.setLoadWithOverviewMode(true);
        settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        if (Build.VERSION.SDK_INT >= 17) {
            settings.setMediaPlaybackRequiresUserGesture(false);
        }
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                settings.setMixedContentMode(0);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        if (Build.VERSION.SDK_INT >= 11) {
            try {
                Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(settings, Boolean.FALSE);
            } catch (Exception unused) {
            }
        }
        settings.setDatabaseEnabled(true);
        String path = getDir("database", 0).getPath();
        settings.setDatabasePath(path);
        settings.setGeolocationEnabled(true);
        settings.setGeolocationDatabasePath(path);
        this.g.setWebViewClient(new a(this));
        this.g.setDownloadListener(new AnonymousClass1());
        an anVarA2 = com.tkay.core.basead.a.a.a(strA);
        this.f5985a = anVarA2.l;
        this.g.loadUrl(anVarA2.o);
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
    }

    private void a(String str) {
        WebSettings settings = this.g.getSettings();
        this.g.setHorizontalScrollBarEnabled(false);
        this.g.setVerticalScrollBarEnabled(false);
        this.g.setVerticalScrollBarEnabled(false);
        this.g.requestFocus();
        settings.setJavaScriptEnabled(true);
        settings.setAppCacheEnabled(true);
        settings.setAppCacheMaxSize(5242880L);
        settings.setAllowFileAccess(false);
        settings.setBuiltInZoomControls(true);
        settings.setJavaScriptCanOpenWindowsAutomatically(true);
        settings.setDomStorageEnabled(true);
        settings.setSupportZoom(true);
        settings.setBuiltInZoomControls(true);
        settings.setSavePassword(false);
        settings.setDatabaseEnabled(true);
        settings.setUseWideViewPort(true);
        settings.setLoadWithOverviewMode(true);
        settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
        if (Build.VERSION.SDK_INT >= 17) {
            settings.setMediaPlaybackRequiresUserGesture(false);
        }
        try {
            if (Build.VERSION.SDK_INT >= 21) {
                settings.setMixedContentMode(0);
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        if (Build.VERSION.SDK_INT >= 11) {
            try {
                Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(settings, Boolean.FALSE);
            } catch (Exception unused) {
            }
        }
        settings.setDatabaseEnabled(true);
        String path = getDir("database", 0).getPath();
        settings.setDatabasePath(path);
        settings.setGeolocationEnabled(true);
        settings.setGeolocationDatabasePath(path);
        this.g.setWebViewClient(new a(this));
        this.g.setDownloadListener(new AnonymousClass1());
        an anVarA = com.tkay.core.basead.a.a.a(str);
        this.f5985a = anVarA.l;
        this.g.loadUrl(anVarA.o);
    }

    /* JADX INFO: renamed from: com.tkay.core.basead.ui.web.WebLandPageActivity$1, reason: invalid class name */
    final class AnonymousClass1 implements DownloadListener {
        AnonymousClass1() {
        }

        @Override // android.webkit.DownloadListener
        public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
            if (WebLandPageActivity.this.m != null && WebLandPageActivity.this.n != null && !TextUtils.isEmpty(WebLandPageActivity.this.m.B())) {
                if (WebLandPageActivity.this.p == null || !(WebLandPageActivity.this.p instanceof IOfferClickHandler) || !WebLandPageActivity.this.p.startDownloadApp(WebLandPageActivity.this.getApplicationContext(), WebLandPageActivity.this.m, WebLandPageActivity.this.n, str)) {
                    WebLandPageActivity.this.d = 2;
                    l.a(str);
                    WebLandPageActivity.this.f5985a = 7;
                } else {
                    WebLandPageActivity.this.f5985a = 6;
                    WebLandPageActivity.this.d = 1;
                }
            } else {
                WebLandPageActivity.this.f5985a = 11;
                l.a(str);
            }
            WebLandPageActivity.this.finish();
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.basead.ui.web.WebLandPageActivity$2, reason: invalid class name */
    final class AnonymousClass2 implements View.OnClickListener {
        AnonymousClass2() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (WebLandPageActivity.this.g.canGoBack()) {
                WebLandPageActivity.this.g.goBack();
            }
        }
    }

    private void c() {
        this.h.setBackgroundColor(0);
        this.h.setOnClickListener(new AnonymousClass2());
        this.i.setBackgroundColor(0);
        this.i.setOnClickListener(new AnonymousClass3());
        this.j.setBackgroundColor(0);
        this.j.setOnClickListener(new AnonymousClass4());
        this.k.setBackgroundColor(0);
        this.k.setOnClickListener(new AnonymousClass5());
    }

    /* JADX INFO: renamed from: com.tkay.core.basead.ui.web.WebLandPageActivity$3, reason: invalid class name */
    final class AnonymousClass3 implements View.OnClickListener {
        AnonymousClass3() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (WebLandPageActivity.this.g.canGoForward()) {
                WebLandPageActivity.this.g.goForward();
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.basead.ui.web.WebLandPageActivity$4, reason: invalid class name */
    final class AnonymousClass4 implements View.OnClickListener {
        AnonymousClass4() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            WebLandPageActivity.this.g.reload();
        }
    }

    /* JADX INFO: renamed from: com.tkay.core.basead.ui.web.WebLandPageActivity$5, reason: invalid class name */
    final class AnonymousClass5 implements View.OnClickListener {
        AnonymousClass5() {
        }

        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            WebLandPageActivity.this.finish();
        }
    }

    private void d() {
        CookieSyncManager.createInstance(this);
        CookieSyncManager.getInstance().startSync();
    }

    public final WebProgressBarView a() {
        return this.f;
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        CookieSyncManager.getInstance().stopSync();
        this.g.setWebChromeClient(null);
        WebView webView = this.g;
        if (isFinishing()) {
            webView.stopLoading();
            webView.loadUrl("");
        }
        webView.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        CookieSyncManager.getInstance().startSync();
        this.g.setWebChromeClient(new WebChromeClient() { // from class: com.tkay.core.basead.ui.web.WebLandPageActivity.6
            @Override // android.webkit.WebChromeClient
            public final boolean onShowFileChooser(WebView webView, ValueCallback<Uri[]> valueCallback, WebChromeClient.FileChooserParams fileChooserParams) {
                try {
                    WebLandPageActivity.this.r = valueCallback;
                    Intent intent = new Intent("android.intent.action.GET_CONTENT");
                    intent.putExtra("android.intent.extra.ALLOW_MULTIPLE", true);
                    intent.setType("*/*");
                    intent.addCategory("android.intent.category.OPENABLE");
                    intent.putExtra("android.intent.extra.ALLOW_MULTIPLE", true);
                    WebLandPageActivity.this.startActivityForResult(Intent.createChooser(intent, "File Chooser"), 512);
                    return true;
                } catch (Throwable unused) {
                    return false;
                }
            }

            @Override // android.webkit.WebChromeClient
            public final void onGeolocationPermissionsShowPrompt(String str, GeolocationPermissions.Callback callback) {
                try {
                    callback.invoke(str, true, false);
                } catch (Throwable unused) {
                }
                super.onGeolocationPermissionsShowPrompt(str, callback);
            }

            @Override // android.webkit.WebChromeClient
            public final void onProgressChanged(WebView webView, int i) {
                if (WebLandPageActivity.this.f != null) {
                    WebLandPageActivity.this.f.setProgress(i);
                    if (i == 100) {
                        m.a().a(new Runnable() { // from class: com.tkay.core.basead.ui.web.WebLandPageActivity.6.1
                            @Override // java.lang.Runnable
                            public final void run() {
                                WebLandPageActivity.this.f.setVisibility(8);
                            }
                        }, 200L);
                    }
                }
            }
        });
        this.g.onResume();
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        Uri[] uriArr;
        ClipData clipData;
        if (i == 512) {
            try {
                if (this.r == null) {
                    return;
                }
                if (i2 != -1 || intent == null) {
                    uriArr = null;
                } else {
                    String dataString = intent.getDataString();
                    try {
                        clipData = intent.getClipData();
                    } catch (Throwable unused) {
                    }
                    if (clipData != null) {
                        uriArr = new Uri[clipData.getItemCount()];
                        for (int i3 = 0; i3 < clipData.getItemCount(); i3++) {
                            try {
                                uriArr[i3] = clipData.getItemAt(i3).getUri();
                            } catch (Throwable unused2) {
                            }
                        }
                    } else {
                        uriArr = null;
                    }
                    if (dataString != null) {
                        uriArr = new Uri[]{Uri.parse(dataString)};
                    }
                }
                this.r.onReceiveValue(uriArr);
                this.r = null;
            } catch (Throwable unused3) {
            }
            super.onActivityResult(i, i2, intent);
        }
    }

    @Override // android.app.Activity
    public void finish() {
        ((ViewGroup) getWindow().getDecorView()).removeAllViews();
        super.finish();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        i iVar;
        super.onDestroy();
        WebView webView = this.g;
        if (webView != null) {
            webView.setDownloadListener(null);
            this.g.destroy();
        }
        this.g = null;
        if (this.m == null || (iVar = this.n) == null) {
            return;
        }
        c.a(iVar.b, this.n.d, this.m.d(), this.m.p(), this.b, this.c, this.d, this.f5985a, this.o, this.n.j);
    }

    private View e() {
        RelativeLayout relativeLayout = new RelativeLayout(this);
        relativeLayout.setBackgroundColor(-16777216);
        relativeLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
        LinearLayout linearLayout = new LinearLayout(this);
        linearLayout.setId(e);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 55.0f));
        layoutParams.addRule(12);
        linearLayout.setLayoutParams(layoutParams);
        linearLayout.setBackgroundDrawable(new ColorDrawable(-592138));
        int iA = com.tkay.core.common.l.h.a(this, 20.0f);
        linearLayout.setPadding(iA, 0, iA, 0);
        relativeLayout.addView(linearLayout);
        this.h = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_unleft_icon", com.tkay.expressad.foundation.h.i.c)));
        this.i = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_unright_icon", com.tkay.expressad.foundation.h.i.c)));
        this.j = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_refresh_icon", com.tkay.expressad.foundation.h.i.c)));
        this.k = a(getResources().getDrawable(com.tkay.core.common.l.h.a(this, "browser_close_icon", com.tkay.expressad.foundation.h.i.c)));
        linearLayout.addView(this.h);
        linearLayout.addView(this.i);
        linearLayout.addView(this.j);
        linearLayout.addView(this.k);
        this.g = new BaseWebView(this);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(-1, -1);
        layoutParams2.addRule(2, e);
        this.g.setLayoutParams(layoutParams2);
        relativeLayout.addView(this.g);
        View view = new View(this);
        view.setBackgroundColor(-2434342);
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 1.0f));
        layoutParams3.addRule(2, e);
        view.setLayoutParams(layoutParams3);
        relativeLayout.addView(view);
        WebProgressBarView webProgressBarView = new WebProgressBarView(this);
        this.f = webProgressBarView;
        webProgressBarView.setProgress(0);
        relativeLayout.addView(this.f, new RelativeLayout.LayoutParams(-1, com.tkay.core.common.l.h.a(this, 2.0f)));
        return relativeLayout;
    }

    private ImageButton a(Drawable drawable) {
        ImageButton imageButton = new ImageButton(this);
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-2, com.tkay.core.common.l.h.a(this, 35.0f), 1.0f);
        layoutParams.gravity = 16;
        imageButton.setLayoutParams(layoutParams);
        imageButton.setBackgroundColor(0);
        imageButton.setScaleType(ImageView.ScaleType.CENTER_INSIDE);
        imageButton.setImageDrawable(drawable);
        return imageButton;
    }

    private void b(String str) {
        if (this.b == null) {
            this.b = new JSONArray();
        }
        this.b.put(str);
    }

    protected final void a(an anVar) {
        this.f5985a = anVar.l;
        if (anVar.n) {
            if (anVar.m) {
                this.c = 1;
                finish();
            } else {
                this.c = 2;
            }
        }
    }
}
