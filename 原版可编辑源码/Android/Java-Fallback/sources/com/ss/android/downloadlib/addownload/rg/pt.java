package com.ss.android.downloadlib.addownload.rg;

public class pt extends android.app.Dialog {
    private android.app.Activity c;
    private android.widget.TextView df;
    private java.lang.String fw;
    private boolean pp;
    private com.ss.android.downloadlib.addownload.rg.q pt;
    private android.widget.TextView q;
    private android.widget.TextView rg;
    private java.lang.String rz;
    private java.lang.String ux;



    public static class rg {
        private com.ss.android.downloadlib.addownload.rg.q c;
        private java.lang.String df;
        private boolean pp;
        private java.lang.String pt;
        private java.lang.String q;
        private android.app.Activity rg;

        public rg(android.app.Activity r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        public com.ss.android.downloadlib.addownload.rg.pt.rg df(java.lang.String r1) {
                r0 = this;
                r0.q = r1
                return r0
        }

        public com.ss.android.downloadlib.addownload.rg.pt.rg q(java.lang.String r1) {
                r0 = this;
                r0.pt = r1
                return r0
        }

        public com.ss.android.downloadlib.addownload.rg.pt.rg rg(com.ss.android.downloadlib.addownload.rg.q r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.ss.android.downloadlib.addownload.rg.pt.rg rg(java.lang.String r1) {
                r0 = this;
                r0.df = r1
                return r0
        }

        public com.ss.android.downloadlib.addownload.rg.pt.rg rg(boolean r1) {
                r0 = this;
                r0.pp = r1
                return r0
        }

        public com.ss.android.downloadlib.addownload.rg.pt rg() {
                r8 = this;
                com.ss.android.downloadlib.addownload.rg.pt r7 = new com.ss.android.downloadlib.addownload.rg.pt
                android.app.Activity r1 = r8.rg
                java.lang.String r2 = r8.df
                java.lang.String r3 = r8.q
                java.lang.String r4 = r8.pt
                boolean r5 = r8.pp
                com.ss.android.downloadlib.addownload.rg.q r6 = r8.c
                r0 = r7
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return r7
        }
    }

    public pt(android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6, com.ss.android.downloadlib.addownload.rg.q r7) {
            r1 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.style.ttdownloader_translucent_dialog
            r1.<init>(r2, r0)
            r1.c = r2
            r1.pt = r7
            r1.fw = r3
            r1.ux = r4
            r1.rz = r5
            r1.setCanceledOnTouchOutside(r6)
            r1.pt()
            return
    }

    private void c() {
            r0 = this;
            r0.dismiss()
            return
    }

    static void df(com.ss.android.downloadlib.addownload.rg.pt r0) {
            r0.c()
            return
    }

    private void pp() {
            r1 = this;
            r0 = 1
            r1.pp = r0
            r1.dismiss()
            return
    }

    private void pt() {
            r3 = this;
            android.app.Activity r0 = r3.c
            android.content.Context r0 = r0.getApplicationContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            int r1 = r3.rg()
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r2)
            r3.setContentView(r0)
            int r0 = r3.df()
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.rg = r0
            int r0 = r3.q()
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.df = r0
            int r0 = com.bytedance.sdk.openadsdk.R.id.message_tv
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.q = r0
            java.lang.String r0 = r3.ux
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L47
            android.widget.TextView r0 = r3.rg
            java.lang.String r1 = r3.ux
            r0.setText(r1)
        L47:
            java.lang.String r0 = r3.rz
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L56
            android.widget.TextView r0 = r3.df
            java.lang.String r1 = r3.rz
            r0.setText(r1)
        L56:
            java.lang.String r0 = r3.fw
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L65
            android.widget.TextView r0 = r3.q
            java.lang.String r1 = r3.fw
            r0.setText(r1)
        L65:
            android.widget.TextView r0 = r3.rg
            com.ss.android.downloadlib.addownload.rg.pt$1 r1 = new com.ss.android.downloadlib.addownload.rg.pt$1
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            android.widget.TextView r0 = r3.df
            com.ss.android.downloadlib.addownload.rg.pt$2 r1 = new com.ss.android.downloadlib.addownload.rg.pt$2
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            return
    }

    static void rg(com.ss.android.downloadlib.addownload.rg.pt r0) {
            r0.pp()
            return
    }

    public int df() {
            r1 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.id.confirm_tv
            return r0
    }

    @Override
    public void dismiss() {
            r1 = this;
            super.dismiss()
            android.app.Activity r0 = r1.c
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto L10
            android.app.Activity r0 = r1.c
            r0.finish()
        L10:
            boolean r0 = r1.pp
            if (r0 == 0) goto L1a
            com.ss.android.downloadlib.addownload.rg.q r0 = r1.pt
            r0.rg()
            goto L1f
        L1a:
            com.ss.android.downloadlib.addownload.rg.q r0 = r1.pt
            r0.df()
        L1f:
            return
    }

    @Override
    public boolean dispatchKeyEvent(android.view.KeyEvent r3) {
            r2 = this;
            int r0 = r3.getKeyCode()
            r1 = 4
            if (r0 != r1) goto L9
            r3 = 1
            return r3
        L9:
            boolean r3 = super.dispatchKeyEvent(r3)
            return r3
    }

    public int q() {
            r1 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.id.cancel_tv
            return r0
    }

    public int rg() {
            r1 = this;
            int r0 = com.bytedance.sdk.openadsdk.R.layout.ttdownloader_dialog_select_operation
            return r0
    }
}
