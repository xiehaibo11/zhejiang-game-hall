package com.mbridge.msdk.activity;

import android.R;
import android.app.Activity;
import android.content.ContentValues;
import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.webkit.WebView;
import android.widget.LinearLayout;
import android.widget.Toast;
import com.mbridge.msdk.c.a;
import com.mbridge.msdk.c.b;
import com.mbridge.msdk.click.c;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.an;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.foundation.webview.BrowserView;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import org.json.JSONException;
import org.json.JSONObject;

public class DomainMBCommonActivity extends Activity {
    private CampaignEx b;
    protected BrowserView browserView;
    String a = "";
    private BrowserView.a c = new BrowserView.a() {
        @Override
        public final void a(WebView webView, int i, String str, String str2) {
        }

        @Override
        public final void a(WebView webView, String str) {
        }

        @Override
        public final void a(WebView webView, String str, Bitmap bitmap) {
        }

        @Override
        public final void c(WebView webView, String str) {
        }

        @Override
        public final void a() {
            DomainMBCommonActivity.this.finish();
        }

        @Override
        public final boolean b(WebView webView, String str) {
            z.d("MBCommonActivity", "shouldOverrideUrlLoading  " + str);
            if (ad.a.a(str) && ad.a.a(DomainMBCommonActivity.this, str, null)) {
                DomainMBCommonActivity.this.finish();
            }
            return DomainMBCommonActivity.this.a(webView, str);
        }
    };

    @Override
    public void onCreate(Bundle bundle) throws Throwable {
        super.onCreate(bundle);
        try {
            requestWindowFeature(1);
        } catch (Throwable th) {
            z.d("MBCommonActivity", th.getMessage());
        }
        String stringExtra = getIntent().getStringExtra("intent_flag");
        String stringExtra2 = getIntent().getStringExtra("intent_jsonobject");
        if (!TextUtils.isEmpty(stringExtra) && stringExtra.equals("shortcuts") && !TextUtils.isEmpty(stringExtra2)) {
            try {
                this.b = CampaignEx.parseCampaignWithBackData(new JSONObject(stringExtra2));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            try {
                a aVarB = b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
                if (aVarB == null) {
                    aVarB = b.a().b();
                }
                CampaignEx campaignExD = f.a(i.a(this)).d(this.b.getId(), aVarB.D());
                com.mbridge.msdk.foundation.controller.a.f().a(this);
                if (campaignExD != null && !TextUtils.isEmpty(this.b.getImpressionURL()) && !TextUtils.isEmpty(aVarB.D()) && campaignExD.getIsClick() == 0) {
                    com.mbridge.msdk.click.b.a((Context) this, this.b, aVarB.D(), this.b.getImpressionURL(), false, true, com.mbridge.msdk.click.a.a.g);
                }
                this.b.setIsClick(1);
                ContentValues contentValues = new ContentValues();
                contentValues.put("is_click", (Integer) 1);
                f.a(i.a(this)).a(this.b.getId(), contentValues);
                LinearLayout linearLayout = new LinearLayout(this);
                linearLayout.setLayoutParams(new LinearLayout.LayoutParams(-1, -1));
                setContentView(linearLayout);
                return;
            } catch (Exception e2) {
                finish();
                e2.printStackTrace();
                return;
            }
        }
        String stringExtra3 = getIntent().getStringExtra("url");
        this.a = stringExtra3;
        if (!TextUtils.isEmpty(stringExtra3)) {
            this.b = (CampaignEx) getIntent().getSerializableExtra("mvcommon");
            if (com.mbridge.msdk.foundation.webview.b.a.containsKey(this.a)) {
                BrowserView browserView = com.mbridge.msdk.foundation.webview.b.a.get(this.a);
                this.browserView = browserView;
                if (browserView != null) {
                    browserView.setListener(this.c);
                }
            } else {
                BrowserView browserView2 = new BrowserView(this, this.b);
                this.browserView = browserView2;
                browserView2.setListener(this.c);
                this.browserView.loadUrl(this.a);
            }
            BrowserView browserView3 = this.browserView;
            if (browserView3 != null) {
                an.a(browserView3);
                setContentView(this.browserView);
                return;
            }
            return;
        }
        Toast.makeText(this, "Error: no data", 0).show();
    }

    @Override
    public void setTheme(int i) {
        String stringExtra = getIntent().getStringExtra("intent_flag");
        if (TextUtils.isEmpty(stringExtra) || !stringExtra.equals("shortcuts")) {
            return;
        }
        super.setTheme(R.style.Theme.Translucent.NoTitleBar);
    }

    private boolean a(WebView webView, String str) {
        String str2;
        try {
        } catch (Throwable th) {
            z.d("MBCommonActivity", th.getMessage());
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Uri uri = Uri.parse(str);
        if (uri.getScheme().equals("http") || uri.getScheme().equals("https")) {
            return false;
        }
        if (uri.getScheme().equals("intent")) {
            Intent uri2 = Intent.parseUri(str, 1);
            try {
                str2 = uri2.getPackage();
            } catch (Throwable th2) {
                z.d("MBCommonActivity", th2.getMessage());
            }
            if (!TextUtils.isEmpty(str2) && getPackageManager().getLaunchIntentForPackage(str2) != null) {
                uri2.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                startActivityForResult(uri2, 0);
                finish();
                return true;
            }
            try {
                String stringExtra = uri2.getStringExtra("browser_fallback_url");
                if (!TextUtils.isEmpty(stringExtra)) {
                    Uri uri3 = Uri.parse(str);
                    if (uri3.getScheme().equals("http") || uri3.getScheme().equals("https")) {
                        webView.loadUrl(stringExtra);
                        return false;
                    }
                    str = stringExtra;
                }
            } catch (Throwable th3) {
                z.d("MBCommonActivity", th3.getMessage());
            }
            z.d("MBCommonActivity", th.getMessage());
            return false;
        }
        if (!c.e(this, str)) {
            return false;
        }
        z.d("MBCommonActivity", "openDeepLink");
        finish();
        return true;
    }
}
