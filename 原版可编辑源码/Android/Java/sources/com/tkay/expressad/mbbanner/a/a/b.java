package com.tkay.expressad.mbbanner.a.a;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.graphics.drawable.ColorDrawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.view.View;
import android.view.WindowManager;
import android.webkit.ValueCallback;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.h.k;
import java.util.HashMap;
import java.util.List;
import org.json.JSONObject;

public final class b extends Dialog {
    private final String a;
    private String b;
    private boolean c;
    private FrameLayout d;
    private WindVaneWebView e;
    private TextView f;
    private String g;
    private List<com.tkay.expressad.foundation.d.c> h;
    private com.tkay.expressad.mbbanner.a.c.a i;
    private IMraidJSBridge j;

    public b(Context context, Bundle bundle, com.tkay.expressad.mbbanner.a.c.a aVar) {
        super(context);
        this.a = "BannerExpandDialog";
        this.j = new IMraidJSBridge() {
            @Override
            public final void expand(String str, boolean z) {
            }

            @Override
            public final com.tkay.expressad.foundation.d.c getMraidCampaign() {
                return null;
            }

            @Override
            public final void open(String str) {
                try {
                    if (b.this.e != null && System.currentTimeMillis() - b.this.e.lastTouchTime > com.tkay.expressad.a.b.a.c) {
                        com.tkay.expressad.foundation.d.c cVar = (com.tkay.expressad.foundation.d.c) b.this.h.get(0);
                        b.this.e.getUrl();
                        int i = com.tkay.expressad.a.b.a.a;
                        if (com.tkay.expressad.a.b.a.a(cVar)) {
                            return;
                        }
                    }
                    if (b.this.h.size() > 1) {
                        m.a().f().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                        str = null;
                    }
                    if (b.this.i != null) {
                        b.this.i.a(true, str);
                    }
                } catch (Throwable unused) {
                }
            }

            @Override
            public final void close() {
                b.this.dismiss();
            }

            @Override
            public final void unload() {
                close();
            }

            @Override
            public final void useCustomClose(boolean z) {
                try {
                    b.this.f.setVisibility(z ? 4 : 0);
                } catch (Throwable unused) {
                }
            }
        };
        this.b = bundle.getString("url");
        this.c = bundle.getBoolean("shouldUseCustomClose");
        this.i = aVar;
    }

    @Override
    protected final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        requestWindowFeature(1);
        setCanceledOnTouchOutside(false);
        setCancelable(true);
        FrameLayout frameLayout = new FrameLayout(getContext());
        this.d = frameLayout;
        frameLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        WindVaneWebView windVaneWebView = new WindVaneWebView(getContext().getApplicationContext());
        this.e = windVaneWebView;
        windVaneWebView.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        this.d.addView(this.e);
        TextView textView = new TextView(getContext());
        this.f = textView;
        textView.setBackgroundColor(0);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(96, 96);
        layoutParams.gravity = 8388661;
        layoutParams.setMargins(30, 30, 30, 30);
        this.f.setLayoutParams(layoutParams);
        this.f.setVisibility(this.c ? 4 : 0);
        this.f.setOnClickListener(new 1());
        this.d.addView(this.f);
        setContentView(this.d);
        if (getWindow() != null) {
            getWindow().setBackgroundDrawable(new ColorDrawable(0));
            getWindow().getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = -1;
            getWindow().setAttributes(attributes);
            if (Build.VERSION.SDK_INT >= 16) {
                getWindow().getDecorView().setSystemUiVisibility(Build.VERSION.SDK_INT >= 19 ? 4615 : 519);
            }
        }
        this.e.setWebViewListener(new 2());
        this.e.setObject(this.j);
        this.e.loadUrl(this.b);
        setOnDismissListener(new 3());
    }

    private void a() {
        FrameLayout frameLayout = new FrameLayout(getContext());
        this.d = frameLayout;
        frameLayout.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        WindVaneWebView windVaneWebView = new WindVaneWebView(getContext().getApplicationContext());
        this.e = windVaneWebView;
        windVaneWebView.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        this.d.addView(this.e);
        TextView textView = new TextView(getContext());
        this.f = textView;
        textView.setBackgroundColor(0);
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(96, 96);
        layoutParams.gravity = 8388661;
        layoutParams.setMargins(30, 30, 30, 30);
        this.f.setLayoutParams(layoutParams);
        this.f.setVisibility(this.c ? 4 : 0);
        this.f.setOnClickListener(new 1());
        this.d.addView(this.f);
        setContentView(this.d);
        if (getWindow() != null) {
            getWindow().setBackgroundDrawable(new ColorDrawable(0));
            getWindow().getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = getWindow().getAttributes();
            attributes.width = -1;
            attributes.height = -1;
            getWindow().setAttributes(attributes);
            if (Build.VERSION.SDK_INT >= 16) {
                getWindow().getDecorView().setSystemUiVisibility(Build.VERSION.SDK_INT >= 19 ? 4615 : 519);
            }
        }
        this.e.setWebViewListener(new 2());
        this.e.setObject(this.j);
        this.e.loadUrl(this.b);
        setOnDismissListener(new 3());
    }

    final class 1 implements View.OnClickListener {
        1() {
        }

        @Override
        public final void onClick(View view) {
            b.this.dismiss();
        }
    }

    final class 2 extends com.tkay.expressad.atsignalcommon.a.b {
        2() {
        }

        @Override
        public final void onPageFinished(WebView webView, String str) {
            super.onPageFinished(webView, str);
            StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
            com.tkay.expressad.d.b.a.a();
            sb.append(com.tkay.expressad.d.b.a.b());
            if (Build.VERSION.SDK_INT <= 19) {
                webView.loadUrl(sb.toString());
            } else {
                webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() {
                    private static void a() {
                    }

                    @Override
                    public final void onReceiveValue(String str2) {
                    }
                });
            }
            b.a(b.this);
        }
    }

    final class 3 implements DialogInterface.OnDismissListener {
        3() {
        }

        @Override
        public final void onDismiss(DialogInterface dialogInterface) {
            if (b.this.i != null) {
                b.this.i.a(false);
            }
            b.this.e.loadDataWithBaseURL(null, "", "text/html", "utf-8", null);
            b.this.d.removeView(b.this.e);
            b.this.e.release();
            b.this.e = null;
            b.this.i = null;
        }
    }

    public final void a(String str, List<com.tkay.expressad.foundation.d.c> list) {
        this.g = str;
        this.h = list;
    }

    private void b() {
        try {
            int i = m.a().f().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i == 2 ? "landscape" : i == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fE = k.e(m.a().f());
            float f = k.f(m.a().f());
            HashMap mapG = k.g(m.a().f());
            int iIntValue = ((Integer) mapG.get("width")).intValue();
            int iIntValue2 = ((Integer) mapG.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.a, "Interstitial");
            map.put(CallMraidJS.b, CallMraidJS.g);
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            this.e.getLocationInWindow(new int[2]);
            CallMraidJS.getInstance().fireSetDefaultPosition(this.e, r1[0], r1[1], this.e.getWidth(), this.e.getHeight());
            CallMraidJS.getInstance().fireSetCurrentPosition(this.e, r1[0], r1[1], this.e.getWidth(), this.e.getHeight());
            CallMraidJS.getInstance().fireSetScreenSize(this.e, fE, f);
            CallMraidJS.getInstance().fireSetMaxSize(this.e, iIntValue, iIntValue2);
            CallMraidJS.getInstance().fireChangeEventForPropertys(this.e, map);
            CallMraidJS.getInstance().fireReadyEvent(this.e);
        } catch (Throwable unused) {
        }
    }

    static void a(b bVar) {
        try {
            int i = m.a().f().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i == 2 ? "landscape" : i == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fE = k.e(m.a().f());
            float f = k.f(m.a().f());
            HashMap mapG = k.g(m.a().f());
            int iIntValue = ((Integer) mapG.get("width")).intValue();
            int iIntValue2 = ((Integer) mapG.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.a, "Interstitial");
            map.put(CallMraidJS.b, CallMraidJS.g);
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            bVar.e.getLocationInWindow(new int[2]);
            CallMraidJS.getInstance().fireSetDefaultPosition(bVar.e, r1[0], r1[1], bVar.e.getWidth(), bVar.e.getHeight());
            CallMraidJS.getInstance().fireSetCurrentPosition(bVar.e, r1[0], r1[1], bVar.e.getWidth(), bVar.e.getHeight());
            CallMraidJS.getInstance().fireSetScreenSize(bVar.e, fE, f);
            CallMraidJS.getInstance().fireSetMaxSize(bVar.e, iIntValue, iIntValue2);
            CallMraidJS.getInstance().fireChangeEventForPropertys(bVar.e, map);
            CallMraidJS.getInstance().fireReadyEvent(bVar.e);
        } catch (Throwable unused) {
        }
    }
}
