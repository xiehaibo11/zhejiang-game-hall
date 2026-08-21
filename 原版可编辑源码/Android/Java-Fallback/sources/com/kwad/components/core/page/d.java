package com.kwad.components.core.page;

public class d extends com.kwad.components.core.n.f {
    private boolean MJ;



    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.core.page.d r0) {
            r0.oF()
            return
    }

    private void aA(boolean r2) {
            r1 = this;
            android.content.Intent r0 = r1.getIntent()
            if (r2 == 0) goto L16
            java.lang.String r2 = "pendingIntent"
            android.os.Parcelable r2 = r0.getParcelableExtra(r2)
            android.content.Intent r2 = (android.content.Intent) r2
            android.app.Activity r0 = r1.getActivity()
            r0.startActivity(r2)
            return
        L16:
            java.lang.String r2 = "filePath"
            java.lang.String r2 = r0.getStringExtra(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L2d
            android.app.Activity r0 = r1.getActivity()
            android.content.Context r0 = r0.getApplicationContext()
            com.kwad.sdk.utils.ak.an(r0, r2)
        L2d:
            return
    }

    private void oE() {
            r3 = this;
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.app.Activity r1 = r3.getActivity()
            r0.<init>(r1)
            int r1 = com.kwad.sdk.R.string.ksad_request_install_title
            r0.setTitle(r1)
            int r1 = com.kwad.sdk.R.string.ksad_request_install_content
            r0.setMessage(r1)
            int r1 = com.kwad.sdk.R.string.ksad_request_install_nagative
            com.kwad.components.core.page.d$1 r2 = new com.kwad.components.core.page.d$1
            r2.<init>(r3)
            r0.setNegativeButton(r1, r2)
            int r1 = com.kwad.sdk.R.string.ksad_request_install_positive
            com.kwad.components.core.page.d$2 r2 = new com.kwad.components.core.page.d$2
            r2.<init>(r3)
            r0.setPositiveButton(r1, r2)
            android.app.AlertDialog r0 = r0.create()
            r0.show()
            return
    }

    private void oF() {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 26
            if (r0 < r1) goto L38
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "package:"
            r0.<init>(r1)
            android.app.Activity r1 = r3.getActivity()
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            java.lang.String r1 = r1.packageName
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.settings.MANAGE_UNKNOWN_APP_SOURCES"
            r1.<init>(r2, r0)
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r1.addFlags(r0)
            android.app.Activity r0 = r3.getActivity()
            r2 = 100
            r0.startActivityForResult(r1, r2)
            return
        L38:
            r3.finish()
            return
    }

    public static void register() {
            java.lang.Class<com.kwad.sdk.api.proxy.app.BaseFragmentActivity$RequestInstallPermissionActivity> r0 = com.kwad.sdk.api.proxy.app.BaseFragmentActivity.RequestInstallPermissionActivity.class
            java.lang.Class<com.kwad.components.core.page.d> r1 = com.kwad.components.core.page.d.class
            com.kwad.sdk.service.b.a(r0, r1)     // Catch: java.lang.Throwable -> L7
        L7:
            return
    }

    @Override
    public java.lang.String getPageName() {
            r1 = this;
            java.lang.String r0 = "RequestInstallPermissionImpl"
            return r0
    }

    @Override
    public void onActivityResult(int r1, int r2, android.content.Intent r3) {
            r0 = this;
            r3 = 100
            if (r1 != r3) goto Lc
            r1 = -1
            if (r2 != r1) goto Lc
            boolean r1 = r0.MJ
            r0.aA(r1)
        Lc:
            r0.finish()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r4) {
            r3 = this;
            super.onCreate(r4)
            android.content.Intent r4 = r3.getIntent()
            if (r4 != 0) goto Ld
            r3.finish()
            return
        Ld:
            r0 = 0
            java.lang.String r1 = "fromNotification"
            boolean r1 = r4.getBooleanExtra(r1, r0)
            r3.MJ = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto L25
            boolean r4 = r3.MJ
            r3.aA(r4)
            r3.finish()
            return
        L25:
            boolean r1 = r3.MJ
            if (r1 == 0) goto L3d
            android.app.Activity r4 = r3.getActivity()
            boolean r4 = com.kwad.sdk.utils.aj.co(r4)
            if (r4 == 0) goto L39
            boolean r4 = r3.MJ
            r3.aA(r4)
            return
        L39:
            r3.oF()
            return
        L3d:
            java.lang.String r1 = "needAllowDialog"
            boolean r4 = r4.getBooleanExtra(r1, r0)
            if (r4 == 0) goto L49
            r3.oE()
            return
        L49:
            r3.oF()
            return
    }
}
