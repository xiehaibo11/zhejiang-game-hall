package com.ss.android.socialbase.appdownloader.pt;

public class rg extends com.ss.android.socialbase.appdownloader.q.df {
    private android.app.AlertDialog.Builder rg;

    private static class rg implements com.ss.android.socialbase.appdownloader.q.b {
        private android.app.AlertDialog rg;

        public rg(android.app.AlertDialog.Builder r1) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto Lb
                android.app.AlertDialog r1 = r1.show()
                r0.rg = r1
            Lb:
                return
        }

        @Override
        public boolean df() {
                r1 = this;
                android.app.AlertDialog r0 = r1.rg
                if (r0 == 0) goto L9
                boolean r0 = r0.isShowing()
                return r0
            L9:
                r0 = 0
                return r0
        }

        @Override
        public void rg() {
                r1 = this;
                android.app.AlertDialog r0 = r1.rg
                if (r0 == 0) goto L7
                r0.show()
            L7:
                return
        }
    }

    public rg(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r0.<init>(r2)
            r1.rg = r0
            return
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq df(int r2, android.content.DialogInterface.OnClickListener r3) {
            r1 = this;
            android.app.AlertDialog$Builder r0 = r1.rg
            if (r0 == 0) goto L7
            r0.setNegativeButton(r2, r3)
        L7:
            return r1
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.b rg() {
            r2 = this;
            com.ss.android.socialbase.appdownloader.pt.rg$rg r0 = new com.ss.android.socialbase.appdownloader.pt.rg$rg
            android.app.AlertDialog$Builder r1 = r2.rg
            r0.<init>(r1)
            return r0
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq rg(int r2) {
            r1 = this;
            android.app.AlertDialog$Builder r0 = r1.rg
            if (r0 == 0) goto L7
            r0.setTitle(r2)
        L7:
            return r1
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq rg(int r2, android.content.DialogInterface.OnClickListener r3) {
            r1 = this;
            android.app.AlertDialog$Builder r0 = r1.rg
            if (r0 == 0) goto L7
            r0.setPositiveButton(r2, r3)
        L7:
            return r1
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq rg(android.content.DialogInterface.OnCancelListener r2) {
            r1 = this;
            android.app.AlertDialog$Builder r0 = r1.rg
            if (r0 == 0) goto L7
            r0.setOnCancelListener(r2)
        L7:
            return r1
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq rg(java.lang.String r2) {
            r1 = this;
            android.app.AlertDialog$Builder r0 = r1.rg
            if (r0 == 0) goto L7
            r0.setMessage(r2)
        L7:
            return r1
    }
}
