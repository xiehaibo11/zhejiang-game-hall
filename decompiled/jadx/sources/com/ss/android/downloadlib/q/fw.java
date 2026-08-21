package com.ss.android.downloadlib.q;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.downloadlib.utils.bm;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;

/* JADX INFO: loaded from: classes3.dex */
public class fw extends com.ss.android.socialbase.appdownloader.q.rg {
    private static String rg = fw.class.getSimpleName();

    @Override // com.ss.android.socialbase.appdownloader.q.rg, com.ss.android.socialbase.appdownloader.q.q
    public boolean rg() {
        return true;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.rg, com.ss.android.socialbase.appdownloader.q.q
    public hq rg(final Context context) {
        return new hq() { // from class: com.ss.android.downloadlib.q.fw.1
            private DialogInterface.OnCancelListener c;
            private DialogInterface.OnClickListener pp;
            private DialogInterface.OnClickListener pt;
            private DownloadAlertDialogInfo.rg q;

            {
                this.q = new DownloadAlertDialogInfo.rg(context);
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq rg(int i) {
                this.q.rg(context.getResources().getString(i));
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq rg(String str) {
                this.q.df(str);
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq rg(int i, DialogInterface.OnClickListener onClickListener) {
                this.q.q(context.getResources().getString(i));
                this.pt = onClickListener;
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq df(int i, DialogInterface.OnClickListener onClickListener) {
                this.q.pt(context.getResources().getString(i));
                this.pp = onClickListener;
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq rg(DialogInterface.OnCancelListener onCancelListener) {
                this.c = onCancelListener;
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public hq rg(boolean z) {
                this.q.rg(z);
                return this;
            }

            @Override // com.ss.android.socialbase.appdownloader.q.hq
            public b rg() {
                this.q.rg(new DownloadAlertDialogInfo.df() { // from class: com.ss.android.downloadlib.q.fw.1.1
                    @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
                    public void rg(DialogInterface dialogInterface) {
                        if (AnonymousClass1.this.pt != null) {
                            AnonymousClass1.this.pt.onClick(dialogInterface, -1);
                        }
                    }

                    @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
                    public void df(DialogInterface dialogInterface) {
                        if (AnonymousClass1.this.pp != null) {
                            AnonymousClass1.this.pp.onClick(dialogInterface, -2);
                        }
                    }

                    @Override // com.ss.android.download.api.model.DownloadAlertDialogInfo.df
                    public void q(DialogInterface dialogInterface) {
                        if (AnonymousClass1.this.c == null || dialogInterface == null) {
                            return;
                        }
                        AnonymousClass1.this.c.onCancel(dialogInterface);
                    }
                });
                bm.rg(fw.rg, "getThemedAlertDlgBuilder", null);
                this.q.rg(3);
                return new rg(com.ss.android.downloadlib.addownload.bm.q().df(this.q.rg()));
            }
        };
    }

    private static class rg implements b {
        private Dialog rg;

        public rg(Dialog dialog) {
            if (dialog != null) {
                this.rg = dialog;
                rg();
            }
        }

        @Override // com.ss.android.socialbase.appdownloader.q.b
        public void rg() {
            Dialog dialog = this.rg;
            if (dialog != null) {
                dialog.show();
            }
        }

        @Override // com.ss.android.socialbase.appdownloader.q.b
        public boolean df() {
            Dialog dialog = this.rg;
            if (dialog != null) {
                return dialog.isShowing();
            }
            return false;
        }
    }
}
