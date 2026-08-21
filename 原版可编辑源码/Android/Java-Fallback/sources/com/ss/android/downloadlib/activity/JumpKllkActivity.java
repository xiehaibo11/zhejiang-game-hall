package com.ss.android.downloadlib.activity;

public class JumpKllkActivity extends com.ss.android.downloadlib.activity.TTDelegateActivity {
    public JumpKllkActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onPause() {
            r0 = this;
            super.onPause()
            com.ss.android.socialbase.appdownloader.q.rg(r0)
            return
    }

    @Override
    protected void rg() {
            r6 = this;
            android.content.Intent r0 = r6.getIntent()
            if (r0 != 0) goto L12
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r1 = "handleIntent is null"
            r0.rg(r1)
            com.ss.android.socialbase.appdownloader.q.rg(r6)
        L12:
            android.content.Intent r0 = r6.getIntent()
            java.lang.String r1 = "p"
            java.lang.String r0 = r0.getStringExtra(r1)
            android.content.Intent r1 = r6.getIntent()
            r2 = 0
            java.lang.String r4 = "id"
            long r4 = r1.getLongExtra(r4, r2)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L32
            int r1 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r1 != 0) goto L3e
        L32:
            com.ss.android.downloadlib.exception.q r1 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r2 = "getPackage or id is null"
            r1.rg(r2)
            com.ss.android.socialbase.appdownloader.q.rg(r6)
        L3e:
            org.json.JSONObject r1 = com.ss.android.downloadlib.addownload.bm.rz()
            r2 = 0
            java.lang.String r3 = "ab"
            int r1 = r1.optInt(r3, r2)
            r3 = 1
            if (r1 != r3) goto L4d
            r2 = r3
        L4d:
            com.ss.android.downloadlib.utils.fw.rg(r6, r0, r4, r2)
            if (r1 == r3) goto L55
            com.ss.android.socialbase.appdownloader.q.rg(r6)
        L55:
            return
    }
}
