package com.mbridge.msdk.splash.js;

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
import com.igexin.sdk.PushBuildConfig;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.util.HashMap;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class SplashExpandDialog extends Dialog {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f4016a;
    private String b;
    private boolean c;
    private FrameLayout d;
    private WindVaneWebView e;
    private TextView f;
    private String g;
    private List<CampaignEx> h;
    private com.mbridge.msdk.splash.d.a i;
    private com.mbridge.msdk.mbjscommon.mraid.b j;

    public SplashExpandDialog(Context context, Bundle bundle, com.mbridge.msdk.splash.d.a aVar) {
        super(context);
        this.f4016a = "SplashExpandDialog";
        this.j = new com.mbridge.msdk.mbjscommon.mraid.b() { // from class: com.mbridge.msdk.splash.js.SplashExpandDialog.4
            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final void expand(String str, boolean z) {
            }

            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final CampaignEx getMraidCampaign() {
                return null;
            }

            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final void open(String str) {
                try {
                    if (SplashExpandDialog.this.e == null || System.currentTimeMillis() - SplashExpandDialog.this.e.lastTouchTime <= com.mbridge.msdk.click.b.a.c || !com.mbridge.msdk.click.b.a.a((CampaignEx) SplashExpandDialog.this.h.get(0), SplashExpandDialog.this.e.getUrl(), com.mbridge.msdk.click.b.a.f3152a)) {
                        z.d("SplashExpandDialog", str);
                        if (SplashExpandDialog.this.h.size() > 1) {
                            com.mbridge.msdk.foundation.controller.a.f().j().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                            str = null;
                        }
                        if (SplashExpandDialog.this.i != null) {
                            SplashExpandDialog.this.i.a(true, str);
                        }
                    }
                } catch (Throwable th) {
                    z.c("SplashExpandDialog", PushBuildConfig.sdk_conf_channelid, th);
                }
            }

            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final void close() {
                SplashExpandDialog.this.dismiss();
            }

            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final void unload() {
                close();
            }

            @Override // com.mbridge.msdk.mbjscommon.mraid.b
            public final void useCustomClose(boolean z) {
                try {
                    SplashExpandDialog.this.f.setVisibility(z ? 4 : 0);
                } catch (Throwable th) {
                    z.c("SplashExpandDialog", "useCustomClose", th);
                }
            }
        };
        if (bundle != null) {
            this.b = bundle.getString("url");
            this.c = bundle.getBoolean("shouldUseCustomClose");
        }
        this.i = aVar;
    }

    @Override // android.app.Dialog
    protected void onCreate(Bundle bundle) {
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
        this.f.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.splash.js.SplashExpandDialog.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                SplashExpandDialog.this.dismiss();
            }
        });
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
        this.e.setWebViewListener(new com.mbridge.msdk.mbjscommon.c.b() { // from class: com.mbridge.msdk.splash.js.SplashExpandDialog.2
            @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
            public final void a(WebView webView, String str) {
                super.a(webView, str);
                StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
                sb.append(com.mbridge.msdk.c.b.b.a().b());
                if (Build.VERSION.SDK_INT <= 19) {
                    webView.loadUrl(sb.toString());
                } else {
                    webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() { // from class: com.mbridge.msdk.splash.js.SplashExpandDialog.2.1
                        @Override // android.webkit.ValueCallback
                        public final /* bridge */ /* synthetic */ void onReceiveValue(String str2) {
                        }
                    });
                }
                SplashExpandDialog.a(SplashExpandDialog.this);
            }
        });
        this.e.setObject(this.j);
        this.e.loadUrl(this.b);
        setOnDismissListener(new DialogInterface.OnDismissListener() { // from class: com.mbridge.msdk.splash.js.SplashExpandDialog.3
            @Override // android.content.DialogInterface.OnDismissListener
            public final void onDismiss(DialogInterface dialogInterface) {
                if (SplashExpandDialog.this.i != null) {
                    SplashExpandDialog.this.i.a(false);
                    SplashExpandDialog.this.i.a();
                }
                SplashExpandDialog.this.e.loadDataWithBaseURL(null, "", "text/html", "utf-8", null);
                SplashExpandDialog.this.d.removeView(SplashExpandDialog.this.e);
                SplashExpandDialog.this.e.release();
                SplashExpandDialog.this.e = null;
                SplashExpandDialog.this.i = null;
            }
        });
    }

    public void setCampaignList(String str, List<CampaignEx> list) {
        this.g = str;
        this.h = list;
    }

    @Override // android.app.Dialog, android.content.DialogInterface
    public void dismiss() {
        super.dismiss();
    }

    static /* synthetic */ void a(SplashExpandDialog splashExpandDialog) {
        try {
            int i = com.mbridge.msdk.foundation.controller.a.f().j().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i == 2 ? "landscape" : i == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fX = v.x(com.mbridge.msdk.foundation.controller.a.f().j());
            float fY = v.y(com.mbridge.msdk.foundation.controller.a.f().j());
            HashMap mapZ = v.z(com.mbridge.msdk.foundation.controller.a.f().j());
            int iIntValue = ((Integer) mapZ.get("width")).intValue();
            int iIntValue2 = ((Integer) mapZ.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.f6428a, "Interstitial");
            map.put(CallMraidJS.b, CallMraidJS.g);
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            splashExpandDialog.e.getLocationInWindow(new int[2]);
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(splashExpandDialog.e, r1[0], r1[1], splashExpandDialog.e.getWidth(), splashExpandDialog.e.getHeight());
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(splashExpandDialog.e, r1[0], r1[1], splashExpandDialog.e.getWidth(), splashExpandDialog.e.getHeight());
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(splashExpandDialog.e, fX, fY);
            com.mbridge.msdk.mbjscommon.mraid.a.a().c(splashExpandDialog.e, iIntValue, iIntValue2);
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(splashExpandDialog.e, map);
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(splashExpandDialog.e);
        } catch (Throwable th) {
            z.c("SplashExpandDialog", "notifyMraid", th);
        }
    }
}
