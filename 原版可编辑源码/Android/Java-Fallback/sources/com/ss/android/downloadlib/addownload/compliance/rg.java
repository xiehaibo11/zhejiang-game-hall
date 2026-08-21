package com.ss.android.downloadlib.addownload.compliance;

public class rg extends android.app.Dialog {
    private long b;
    private final long bm;
    private android.widget.TextView c;
    private android.widget.TextView df;
    private com.ss.android.downloadlib.guide.install.ClipImageView fw;
    private final com.ss.android.downloadlib.addownload.model.df hq;
    private android.widget.TextView pp;
    private android.widget.TextView pt;
    private android.widget.TextView q;
    private android.widget.TextView rg;
    private android.app.Activity rz;
    private android.widget.LinearLayout ux;







    public rg(android.app.Activity r1, long r2) {
            r0 = this;
            r0.<init>(r1)
            r0.rz = r1
            r0.bm = r2
            com.ss.android.downloadlib.addownload.compliance.q r1 = com.ss.android.downloadlib.addownload.compliance.q.rg()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r1 = r1.get(r2)
            com.ss.android.downloadlib.addownload.model.df r1 = (com.ss.android.downloadlib.addownload.model.df) r1
            r0.hq = r1
            return
    }

    static com.ss.android.downloadlib.guide.install.ClipImageView df(com.ss.android.downloadlib.addownload.compliance.rg r0) {
            com.ss.android.downloadlib.guide.install.ClipImageView r0 = r0.fw
            return r0
    }

    static long pt(com.ss.android.downloadlib.addownload.compliance.rg r2) {
            long r0 = r2.bm
            return r0
    }

    static android.app.Activity q(com.ss.android.downloadlib.addownload.compliance.rg r0) {
            android.app.Activity r0 = r0.rz
            return r0
    }

    static long rg(com.ss.android.downloadlib.addownload.compliance.rg r2) {
            long r0 = r2.b
            return r0
    }

    private void rg() {
            r8 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_app_name
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.rg = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_app_version
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.df = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_app_developer
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.q = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_app_detail
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.pt = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_app_privacy
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.pp = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.tv_give_up
            android.view.View r0 = r8.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r8.c = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.iv_app_icon
            android.view.View r0 = r8.findViewById(r0)
            com.ss.android.downloadlib.guide.install.ClipImageView r0 = (com.ss.android.downloadlib.guide.install.ClipImageView) r0
            r8.fw = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.ll_download
            android.view.View r0 = r8.findViewById(r0)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r8.ux = r0
            android.widget.TextView r0 = r8.rg
            r1 = 2
            java.lang.String[] r2 = new java.lang.String[r1]
            com.ss.android.downloadlib.addownload.model.df r3 = r8.hq
            java.lang.String r3 = r3.pp
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "--"
            r5 = 1
            r2[r5] = r3
            java.lang.String r2 = com.ss.android.downloadlib.utils.b.rg(r2)
            r0.setText(r2)
            android.widget.TextView r0 = r8.df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r6 = "版本号："
            r2.append(r6)
            java.lang.String[] r6 = new java.lang.String[r1]
            com.ss.android.downloadlib.addownload.model.df r7 = r8.hq
            java.lang.String r7 = r7.c
            r6[r4] = r7
            r6[r5] = r3
            java.lang.String r3 = com.ss.android.downloadlib.utils.b.rg(r6)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.setText(r2)
            android.widget.TextView r0 = r8.q
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "开发者："
            r2.append(r3)
            java.lang.String[] r1 = new java.lang.String[r1]
            com.ss.android.downloadlib.addownload.model.df r3 = r8.hq
            java.lang.String r3 = r3.fw
            r1[r4] = r3
            java.lang.String r3 = "应用信息正在完善中"
            r1[r5] = r3
            java.lang.String r1 = com.ss.android.downloadlib.utils.b.rg(r1)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.setText(r1)
            com.ss.android.downloadlib.guide.install.ClipImageView r0 = r8.fw
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            r2 = 1090519040(0x41000000, float:8.0)
            int r1 = com.ss.android.downloadlib.utils.b.rg(r1, r2)
            r0.setRoundRadius(r1)
            com.ss.android.downloadlib.guide.install.ClipImageView r0 = r8.fw
            java.lang.String r1 = "#EBEBEB"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setBackgroundColor(r1)
            com.ss.android.downloadlib.addownload.compliance.pt r0 = com.ss.android.downloadlib.addownload.compliance.pt.rg()
            long r1 = r8.bm
            com.ss.android.downloadlib.addownload.compliance.rg$2 r3 = new com.ss.android.downloadlib.addownload.compliance.rg$2
            r3.<init>(r8)
            r0.rg(r1, r3)
            android.widget.TextView r0 = r8.pt
            com.ss.android.downloadlib.addownload.compliance.rg$3 r1 = new com.ss.android.downloadlib.addownload.compliance.rg$3
            r1.<init>(r8)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r8.pp
            com.ss.android.downloadlib.addownload.compliance.rg$4 r1 = new com.ss.android.downloadlib.addownload.compliance.rg$4
            r1.<init>(r8)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r8.c
            com.ss.android.downloadlib.addownload.compliance.rg$5 r1 = new com.ss.android.downloadlib.addownload.compliance.rg$5
            r1.<init>(r8)
            r0.setOnClickListener(r1)
            android.widget.LinearLayout r0 = r8.ux
            com.ss.android.downloadlib.addownload.compliance.rg$6 r1 = new com.ss.android.downloadlib.addownload.compliance.rg$6
            r1.<init>(r8)
            r0.setOnClickListener(r1)
            return
    }

    @Override
    public void dismiss() {
            r1 = this;
            super.dismiss()
            android.app.Activity r0 = r1.rz
            com.ss.android.socialbase.appdownloader.q.rg(r0)
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.ss.android.downloadlib.addownload.model.df r3 = r2.hq
            if (r3 != 0) goto Lb
            r2.dismiss()
            return
        Lb:
            r3 = 1
            r2.requestWindowFeature(r3)
            int r0 = com.bytedance.sdk.openadsdk.R.layout.ttdownloader_dialog_appinfo
            r2.setContentView(r0)
            android.view.Window r0 = r2.getWindow()
            if (r0 == 0) goto L1f
            int r1 = com.bytedance.sdk.openadsdk.R.drawable.ttdownloader_bg_transparent
            r0.setBackgroundDrawableResource(r1)
        L1f:
            r2.setCancelable(r3)
            r2.setCanceledOnTouchOutside(r3)
            com.ss.android.downloadlib.addownload.model.df r3 = r2.hq
            long r0 = r3.df
            r2.b = r0
            r2.rg()
            long r0 = r2.b
            java.lang.String r3 = "lp_app_dialog_show"
            com.ss.android.downloadlib.addownload.compliance.pp.df(r3, r0)
            com.ss.android.downloadlib.addownload.compliance.rg$1 r3 = new com.ss.android.downloadlib.addownload.compliance.rg$1
            r3.<init>(r2)
            r2.setOnCancelListener(r3)
            return
    }
}
