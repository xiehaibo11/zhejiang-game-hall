package com.ss.android.download.api.rg;

public class rg implements com.ss.android.download.api.config.hq {




    public rg() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.app.Dialog rg(com.ss.android.download.api.model.DownloadAlertDialogInfo r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.content.Context r1 = r3.rg
            r0.<init>(r1)
            java.lang.String r1 = r3.df
            android.app.AlertDialog$Builder r0 = r0.setTitle(r1)
            java.lang.String r1 = r3.q
            android.app.AlertDialog$Builder r0 = r0.setMessage(r1)
            java.lang.String r1 = r3.pt
            com.ss.android.download.api.rg.rg$2 r2 = new com.ss.android.download.api.rg.rg$2
            r2.<init>(r3)
            android.app.AlertDialog$Builder r0 = r0.setPositiveButton(r1, r2)
            java.lang.String r1 = r3.pp
            com.ss.android.download.api.rg.rg$1 r2 = new com.ss.android.download.api.rg.rg$1
            r2.<init>(r3)
            android.app.AlertDialog$Builder r0 = r0.setNegativeButton(r1, r2)
            android.app.AlertDialog r0 = r0.show()
            boolean r1 = r3.c
            r0.setCanceledOnTouchOutside(r1)
            com.ss.android.download.api.rg.rg$3 r1 = new com.ss.android.download.api.rg.rg$3
            r1.<init>(r3)
            r0.setOnCancelListener(r1)
            android.graphics.drawable.Drawable r1 = r3.fw
            if (r1 == 0) goto L47
            android.graphics.drawable.Drawable r3 = r3.fw
            r0.setIcon(r3)
        L47:
            return r0
    }

    @Override
    public android.app.Dialog df(com.ss.android.download.api.model.DownloadAlertDialogInfo r1) {
            r0 = this;
            android.app.Dialog r1 = rg(r1)
            return r1
    }

    @Override
    public void rg(int r1, android.content.Context r2, com.ss.android.download.api.download.DownloadModel r3, java.lang.String r4, android.graphics.drawable.Drawable r5, int r6) {
            r0 = this;
            r1 = 0
            android.widget.Toast r1 = android.widget.Toast.makeText(r2, r4, r1)
            r1.show()
            return
    }
}
