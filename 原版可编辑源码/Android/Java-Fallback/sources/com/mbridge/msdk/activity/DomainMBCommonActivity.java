package com.mbridge.msdk.activity;

public class DomainMBCommonActivity extends android.app.Activity {
    java.lang.String a;
    private com.mbridge.msdk.foundation.entity.CampaignEx b;
    protected com.mbridge.msdk.foundation.webview.BrowserView browserView;
    private com.mbridge.msdk.foundation.webview.BrowserView.a c;


    public DomainMBCommonActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            com.mbridge.msdk.activity.DomainMBCommonActivity$1 r0 = new com.mbridge.msdk.activity.DomainMBCommonActivity$1
            r0.<init>(r1)
            r1.c = r0
            return
    }

    private boolean a(android.webkit.WebView r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "http"
            java.lang.String r1 = "MBCommonActivity"
            r2 = 0
            boolean r3 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Lae
            if (r3 == 0) goto Lc
            return r2
        Lc:
            android.net.Uri r3 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = r3.getScheme()     // Catch: java.lang.Throwable -> Lae
            boolean r4 = r4.equals(r0)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r5 = "https"
            r6 = 1
            if (r4 != 0) goto L2a
            java.lang.String r4 = r3.getScheme()     // Catch: java.lang.Throwable -> Lae
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> Lae
            if (r4 == 0) goto L28
            goto L2a
        L28:
            r4 = r2
            goto L2b
        L2a:
            r4 = r6
        L2b:
            if (r4 == 0) goto L2e
            return r2
        L2e:
            java.lang.String r3 = r3.getScheme()     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = "intent"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lae
            if (r3 == 0) goto L9e
            android.content.Intent r3 = android.content.Intent.parseUri(r10, r6)     // Catch: java.lang.Throwable -> Lae
            java.lang.String r4 = r3.getPackage()     // Catch: java.lang.Throwable -> L5e
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5e
            if (r7 != 0) goto L66
            android.content.pm.PackageManager r7 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L5e
            android.content.Intent r4 = r7.getLaunchIntentForPackage(r4)     // Catch: java.lang.Throwable -> L5e
            if (r4 == 0) goto L66
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r3.setFlags(r4)     // Catch: java.lang.Throwable -> L5e
            r8.startActivityForResult(r3, r2)     // Catch: java.lang.Throwable -> L5e
            r8.finish()     // Catch: java.lang.Throwable -> L5e
            return r6
        L5e:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()     // Catch: java.lang.Throwable -> Lae
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)     // Catch: java.lang.Throwable -> Lae
        L66:
            java.lang.String r4 = "browser_fallback_url"
            java.lang.String r3 = r3.getStringExtra(r4)     // Catch: java.lang.Throwable -> L96
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L96
            if (r4 != 0) goto L9e
            android.net.Uri r4 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> L96
            java.lang.String r7 = r4.getScheme()     // Catch: java.lang.Throwable -> L96
            boolean r0 = r7.equals(r0)     // Catch: java.lang.Throwable -> L96
            if (r0 != 0) goto L8d
            java.lang.String r0 = r4.getScheme()     // Catch: java.lang.Throwable -> L96
            boolean r0 = r0.equals(r5)     // Catch: java.lang.Throwable -> L96
            if (r0 == 0) goto L8b
            goto L8d
        L8b:
            r0 = r2
            goto L8e
        L8d:
            r0 = r6
        L8e:
            if (r0 == 0) goto L94
            r9.loadUrl(r3)     // Catch: java.lang.Throwable -> L96
            return r2
        L94:
            r10 = r3
            goto L9e
        L96:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> Lae
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)     // Catch: java.lang.Throwable -> Lae
        L9e:
            boolean r9 = com.mbridge.msdk.click.c.e(r8, r10)     // Catch: java.lang.Throwable -> Lae
            if (r9 == 0) goto Lad
            java.lang.String r9 = "openDeepLink"
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)     // Catch: java.lang.Throwable -> Lae
            r8.finish()     // Catch: java.lang.Throwable -> Lae
            return r6
        Lad:
            return r2
        Lae:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r9)
            return r2
    }

    static boolean a(com.mbridge.msdk.activity.DomainMBCommonActivity r0, android.webkit.WebView r1, java.lang.String r2) {
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    @Override
    public void onCreate(android.os.Bundle r10) {
            r9 = this;
            super.onCreate(r10)
            r10 = 1
            r9.requestWindowFeature(r10)     // Catch: java.lang.Throwable -> L8
            goto L12
        L8:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBCommonActivity"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L12:
            android.content.Intent r0 = r9.getIntent()
            java.lang.String r1 = "intent_flag"
            java.lang.String r0 = r0.getStringExtra(r1)
            android.content.Intent r1 = r9.getIntent()
            java.lang.String r2 = "intent_jsonobject"
            java.lang.String r1 = r1.getStringExtra(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto Lf1
            java.lang.String r2 = "shortcuts"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto Lf1
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lf1
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L46
            r0.<init>(r1)     // Catch: org.json.JSONException -> L46
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = com.mbridge.msdk.foundation.entity.CampaignEx.parseCampaignWithBackData(r0)     // Catch: org.json.JSONException -> L46
            r9.b = r0     // Catch: org.json.JSONException -> L46
            goto L4a
        L46:
            r0 = move-exception
            r0.printStackTrace()
        L4a:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Exception -> Le9
            if (r0 != 0) goto L64
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.c.a r0 = r0.b()     // Catch: java.lang.Exception -> Le9
        L64:
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r9)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> Le9
            java.lang.String r3 = r0.D()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r1.d(r2, r3)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le9
            r2.a(r9)     // Catch: java.lang.Exception -> Le9
            if (r1 == 0) goto Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r9.b     // Catch: java.lang.Exception -> Le9
            java.lang.String r2 = r2.getImpressionURL()     // Catch: java.lang.Exception -> Le9
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Le9
            if (r2 != 0) goto Lb3
            java.lang.String r2 = r0.D()     // Catch: java.lang.Exception -> Le9
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Le9
            if (r2 != 0) goto Lb3
            int r1 = r1.getIsClick()     // Catch: java.lang.Exception -> Le9
            if (r1 != 0) goto Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r9.b     // Catch: java.lang.Exception -> Le9
            java.lang.String r4 = r0.D()     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> Le9
            java.lang.String r5 = r0.getImpressionURL()     // Catch: java.lang.Exception -> Le9
            r6 = 0
            r7 = 1
            int r8 = com.mbridge.msdk.click.a.a.g     // Catch: java.lang.Exception -> Le9
            r2 = r9
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> Le9
        Lb3:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b     // Catch: java.lang.Exception -> Le9
            r0.setIsClick(r10)     // Catch: java.lang.Exception -> Le9
            android.content.ContentValues r0 = new android.content.ContentValues     // Catch: java.lang.Exception -> Le9
            r0.<init>()     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = "is_click"
            java.lang.Integer r10 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Exception -> Le9
            r0.put(r1, r10)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.db.i r10 = com.mbridge.msdk.foundation.db.i.a(r9)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.db.f r10 = com.mbridge.msdk.foundation.db.f.a(r10)     // Catch: java.lang.Exception -> Le9
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.b     // Catch: java.lang.Exception -> Le9
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> Le9
            r10.a(r1, r0)     // Catch: java.lang.Exception -> Le9
            android.widget.LinearLayout r10 = new android.widget.LinearLayout     // Catch: java.lang.Exception -> Le9
            r10.<init>(r9)     // Catch: java.lang.Exception -> Le9
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Exception -> Le9
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Exception -> Le9
            r10.setLayoutParams(r0)     // Catch: java.lang.Exception -> Le9
            r9.setContentView(r10)     // Catch: java.lang.Exception -> Le9
            goto L15b
        Le9:
            r10 = move-exception
            r9.finish()
            r10.printStackTrace()
            goto L15b
        Lf1:
            android.content.Intent r10 = r9.getIntent()
            java.lang.String r0 = "url"
            java.lang.String r10 = r10.getStringExtra(r0)
            r9.a = r10
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto L151
            android.content.Intent r10 = r9.getIntent()
            java.lang.String r0 = "mvcommon"
            java.io.Serializable r10 = r10.getSerializableExtra(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10
            r9.b = r10
            java.util.HashMap<java.lang.String, com.mbridge.msdk.foundation.webview.BrowserView> r10 = com.mbridge.msdk.foundation.webview.b.a
            java.lang.String r0 = r9.a
            boolean r10 = r10.containsKey(r0)
            if (r10 == 0) goto L12f
            java.util.HashMap<java.lang.String, com.mbridge.msdk.foundation.webview.BrowserView> r10 = com.mbridge.msdk.foundation.webview.b.a
            java.lang.String r0 = r9.a
            java.lang.Object r10 = r10.get(r0)
            com.mbridge.msdk.foundation.webview.BrowserView r10 = (com.mbridge.msdk.foundation.webview.BrowserView) r10
            r9.browserView = r10
            if (r10 == 0) goto L144
            com.mbridge.msdk.foundation.webview.BrowserView$a r0 = r9.c
            r10.setListener(r0)
            goto L144
        L12f:
            com.mbridge.msdk.foundation.webview.BrowserView r10 = new com.mbridge.msdk.foundation.webview.BrowserView
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r9.b
            r10.<init>(r9, r0)
            r9.browserView = r10
            com.mbridge.msdk.foundation.webview.BrowserView$a r0 = r9.c
            r10.setListener(r0)
            com.mbridge.msdk.foundation.webview.BrowserView r10 = r9.browserView
            java.lang.String r0 = r9.a
            r10.loadUrl(r0)
        L144:
            com.mbridge.msdk.foundation.webview.BrowserView r10 = r9.browserView
            if (r10 == 0) goto L15b
            com.mbridge.msdk.foundation.tools.an.a(r10)
            com.mbridge.msdk.foundation.webview.BrowserView r10 = r9.browserView
            r9.setContentView(r10)
            goto L15b
        L151:
            r10 = 0
            java.lang.String r0 = "Error: no data"
            android.widget.Toast r10 = android.widget.Toast.makeText(r9, r0, r10)
            r10.show()
        L15b:
            return
    }

    @Override
    public void setTheme(int r2) {
            r1 = this;
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r0 = "intent_flag"
            java.lang.String r2 = r2.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1e
            java.lang.String r0 = "shortcuts"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L1e
            r2 = 16973840(0x1030010, float:2.4060945E-38)
            super.setTheme(r2)
        L1e:
            return
    }
}
