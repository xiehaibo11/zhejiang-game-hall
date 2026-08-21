package com.ss.android.socialbase.appdownloader.view;

public class JumpUnknownSourceActivity extends android.app.Activity {
    private android.content.Intent df;
    private org.json.JSONObject pp;
    private int pt;
    private android.content.Intent q;
    private com.ss.android.socialbase.appdownloader.q.b rg;




    public JumpUnknownSourceActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    static int df(com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r0) {
            int r0 = r0.pt
            return r0
    }

    private void df() {
            r6 = this;
            com.ss.android.socialbase.appdownloader.q.b r0 = r6.rg
            if (r0 != 0) goto L7b
            android.content.Intent r0 = r6.df
            if (r0 != 0) goto L9
            goto L7b
        L9:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.q r0 = r0.rg()     // Catch: java.lang.Exception -> L77
            r1 = 0
            if (r0 == 0) goto L18
            com.ss.android.socialbase.appdownloader.q.hq r1 = r0.rg(r6)     // Catch: java.lang.Exception -> L77
        L18:
            if (r1 != 0) goto L1f
            com.ss.android.socialbase.appdownloader.pt.rg r1 = new com.ss.android.socialbase.appdownloader.pt.rg     // Catch: java.lang.Exception -> L77
            r1.<init>(r6)     // Catch: java.lang.Exception -> L77
        L1f:
            java.lang.String r0 = "tt_appdownloader_tip"
            int r0 = com.ss.android.socialbase.appdownloader.rz.rg(r6, r0)     // Catch: java.lang.Exception -> L77
            java.lang.String r2 = "tt_appdownloader_label_ok"
            int r2 = com.ss.android.socialbase.appdownloader.rz.rg(r6, r2)     // Catch: java.lang.Exception -> L77
            java.lang.String r3 = "tt_appdownloader_label_cancel"
            int r3 = com.ss.android.socialbase.appdownloader.rz.rg(r6, r3)     // Catch: java.lang.Exception -> L77
            org.json.JSONObject r4 = r6.pp     // Catch: java.lang.Exception -> L77
            java.lang.String r5 = "jump_unknown_source_tips"
            java.lang.String r4 = r4.optString(r5)     // Catch: java.lang.Exception -> L77
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L77
            if (r5 == 0) goto L49
            java.lang.String r4 = "tt_appdownloader_jump_unknown_source_tips"
            int r4 = com.ss.android.socialbase.appdownloader.rz.rg(r6, r4)     // Catch: java.lang.Exception -> L77
            java.lang.String r4 = r6.getString(r4)     // Catch: java.lang.Exception -> L77
        L49:
            com.ss.android.socialbase.appdownloader.q.hq r0 = r1.rg(r0)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.hq r0 = r0.rg(r4)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$3 r4 = new com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$3     // Catch: java.lang.Exception -> L77
            r4.<init>(r6)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.hq r0 = r0.rg(r2, r4)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$2 r2 = new com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$2     // Catch: java.lang.Exception -> L77
            r2.<init>(r6)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.hq r0 = r0.df(r3, r2)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$1 r2 = new com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity$1     // Catch: java.lang.Exception -> L77
            r2.<init>(r6)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.hq r0 = r0.rg(r2)     // Catch: java.lang.Exception -> L77
            r2 = 0
            r0.rg(r2)     // Catch: java.lang.Exception -> L77
            com.ss.android.socialbase.appdownloader.q.b r0 = r1.rg()     // Catch: java.lang.Exception -> L77
            r6.rg = r0     // Catch: java.lang.Exception -> L77
            goto L7b
        L77:
            r0 = move-exception
            r0.printStackTrace()
        L7b:
            return
    }

    static org.json.JSONObject q(com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r0) {
            org.json.JSONObject r0 = r0.pp
            return r0
    }

    static android.content.Intent rg(com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r0) {
            android.content.Intent r0 = r0.q
            return r0
    }

    private void rg() {
            r3 = this;
            android.view.Window r0 = r3.getWindow()
            android.view.WindowManager$LayoutParams r1 = r0.getAttributes()
            r2 = 0
            r1.alpha = r2
            r0.setAttributes(r1)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            r0.rg()
            com.ss.android.socialbase.appdownloader.ux r1 = com.ss.android.socialbase.appdownloader.ux.rg()
            r1.rg(r0)
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            r0.setIntent(r1)
            com.ss.android.socialbase.appdownloader.ux r1 = com.ss.android.socialbase.appdownloader.ux.rg()
            r1.rg(r0)
            return
    }

    @Override
    protected void onResume() {
            r3 = this;
            super.onResume()
            android.content.Intent r0 = r3.getIntent()
            r3.df = r0
            if (r0 == 0) goto L30
            java.lang.String r1 = "intent"
            android.os.Parcelable r1 = r0.getParcelableExtra(r1)
            android.content.Intent r1 = (android.content.Intent) r1
            r3.q = r1
            r1 = -1
            java.lang.String r2 = "id"
            int r1 = r0.getIntExtra(r2, r1)
            r3.pt = r1
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c
            java.lang.String r2 = "config"
            java.lang.String r0 = r0.getStringExtra(r2)     // Catch: java.lang.Exception -> L2c
            r1.<init>(r0)     // Catch: java.lang.Exception -> L2c
            r3.pp = r1     // Catch: java.lang.Exception -> L2c
            goto L30
        L2c:
            r0 = move-exception
            r0.printStackTrace()
        L30:
            org.json.JSONObject r0 = r3.pp
            if (r0 != 0) goto L38
            com.ss.android.socialbase.appdownloader.q.rg(r3)
            return
        L38:
            r3.df()
            com.ss.android.socialbase.appdownloader.q.b r0 = r3.rg
            if (r0 == 0) goto L4b
            boolean r0 = r0.df()
            if (r0 != 0) goto L4b
            com.ss.android.socialbase.appdownloader.q.b r0 = r3.rg
            r0.rg()
            goto L52
        L4b:
            com.ss.android.socialbase.appdownloader.q.b r0 = r3.rg
            if (r0 != 0) goto L52
            r3.finish()
        L52:
            return
    }
}
