package com.ss.android.downloadlib.addownload.compliance;

public class AppDetailInfoActivity extends android.app.Activity {
    private long c;
    private android.widget.TextView df;
    private java.util.List<android.util.Pair<java.lang.String, java.lang.String>> fw;
    private long pp;
    private android.support.v7.widget.RecyclerView pt;
    private android.widget.LinearLayout q;
    private android.widget.ImageView rg;



    private class rg extends android.support.v7.widget.RecyclerView.Adapter<java.lang.Object> {
        final com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity rg;

        private rg(com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity r1) {
                r0 = this;
                r0.rg = r1
                r0.<init>()
                return
        }

        rg(com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity r1, com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public AppDetailInfoActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df() {
            r3 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.id.iv_detail_back
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.rg = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_empty
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.df = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.permission_list
            android.view.View r0 = r3.findViewById(r0)
            android.support.v7.widget.RecyclerView r0 = (android.support.v7.widget.RecyclerView) r0
            r3.pt = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.ll_download
            android.view.View r0 = r3.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r3.q = r0
            java.util.List<android.util.Pair<java.lang.String, java.lang.String>> r0 = r3.fw
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L3e
            android.support.v7.widget.RecyclerView r0 = r3.pt
            r1 = 8
            r0.setVisibility(r1)
            android.widget.TextView r0 = r3.df
            r1 = 0
            r0.setVisibility(r1)
            goto L57
        L3e:
            android.support.v7.widget.LinearLayoutManager r0 = new android.support.v7.widget.LinearLayoutManager
            r0.<init>(r3)
            r1 = 1
            r0.setOrientation(r1)
            android.support.v7.widget.RecyclerView r1 = r3.pt
            r1.setLayoutManager(r0)
            android.support.v7.widget.RecyclerView r0 = r3.pt
            com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$rg r1 = new com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$rg
            r2 = 0
            r1.<init>(r3, r2)
            r0.setAdapter(r1)
        L57:
            android.widget.ImageView r0 = r3.rg
            com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$1 r1 = new com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$1
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            android.widget.LinearLayout r0 = r3.q
            com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$2 r1 = new com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity$2
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            return
    }

    static long rg(com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity r2) {
            long r0 = r2.c
            return r0
    }

    public static void rg(android.app.Activity r2, long r3) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity> r1 = com.ss.android.downloadlib.addownload.compliance.AppDetailInfoActivity.class
            r0.<init>(r2, r1)
            java.lang.String r1 = "app_info_id"
            r0.putExtra(r1, r3)
            r2.startActivity(r0)
            return
    }

    private boolean rg() {
            r4 = this;
            android.content.Intent r0 = r4.getIntent()
            java.lang.String r1 = "app_info_id"
            r2 = 0
            long r0 = r0.getLongExtra(r1, r2)
            r4.pp = r0
            com.ss.android.downloadlib.addownload.compliance.q r0 = com.ss.android.downloadlib.addownload.compliance.q.rg()
            long r1 = r4.pp
            com.ss.android.downloadlib.addownload.model.df r0 = r0.rg(r1)
            if (r0 != 0) goto L1c
            r0 = 0
            return r0
        L1c:
            long r1 = r0.df
            r4.c = r1
            java.util.List<android.util.Pair<java.lang.String, java.lang.String>> r0 = r0.ux
            r4.fw = r0
            r0 = 1
            return r0
    }

    @Override
    public void onBackPressed() {
            r3 = this;
            long r0 = r3.c
            java.lang.String r2 = "lp_app_detail_click_close"
            com.ss.android.downloadlib.addownload.compliance.pp.rg(r2, r0)
            super.onBackPressed()
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            int r1 = com.bytedance.sdk.openadsdk.R.layout.ttdownloader_activity_app_detail_info
            r0.setContentView(r1)
            boolean r1 = r0.rg()
            if (r1 == 0) goto L12
            r0.df()
            goto L15
        L12:
            com.ss.android.socialbase.appdownloader.q.rg(r0)
        L15:
            return
    }
}
