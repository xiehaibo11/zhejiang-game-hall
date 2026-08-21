package com.bianfeng.privategetui;

public class GetuiActivity extends android.app.Activity {


    public GetuiActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.content.Intent r4 = r3.getIntent()
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.init(r3)
            java.lang.String r0 = "pkgName"
            java.lang.String r0 = r4.getStringExtra(r0)
            com.bianfeng.privategetui.GetuiActivity$1 r1 = new com.bianfeng.privategetui.GetuiActivity$1
            r1.<init>(r3, r4)
            r3.runOnUiThread(r1)
            android.content.Intent r4 = new android.content.Intent
            r4.<init>()
            r4.setClassName(r3, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "pkgName is "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.e(r1, r0)
            r3.startActivity(r4)
            r3.finish()
            return
    }
}
