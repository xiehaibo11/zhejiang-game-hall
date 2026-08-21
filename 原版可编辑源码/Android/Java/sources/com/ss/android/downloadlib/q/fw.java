package com.ss.android.downloadlib.q;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;
import com.ss.android.downloadlib.utils.bm;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;

public class fw extends com.ss.android.socialbase.appdownloader.q.rg {
    private static String rg = fw.class.getSimpleName();

    @Override
    public boolean rg() {
        return true;
    }

    @Override
    public hq rg(final Context context) {
        return new hq() {
            private DialogInterface.OnCancelListener c;
            private DialogInterface.OnClickListener pp;
            private DialogInterface.OnClickListener pt;
            private DownloadAlertDialogInfo.rg q;

            {
                this.q = new DownloadAlertDialogInfo.rg(context);
            }

            @Override
            public hq rg(int i) {
                this.q.rg(context.getResources().getString(i));
                return this;
            }

            @Override
            public hq rg(String str) {
                this.q.df(str);
                return this;
            }

            @Override
            public hq rg(int i, DialogInterface.OnClickListener onClickListener) {
                this.q.q(context.getResources().getString(i));
                this.pt = onClickListener;
                return this;
            }

            @Override
            public hq df(int i, DialogInterface.OnClickListener onClickListener) {
                this.q.pt(context.getResources().getString(i));
                this.pp = onClickListener;
                return this;
            }

            @Override
            public hq rg(DialogInterface.OnCancelListener onCancelListener) {
                this.c = onCancelListener;
                return this;
            }

            @Override
            public hq rg(boolean z) {
                this.q.rg(z);
                return this;
            }

            @Override
            public b rg() {
                this.q.rg(new DownloadAlertDialogInfo.df() {
                    @Override
                    public void rg(DialogInterface dialogInterface) {
                        if (1.this.pt != null) {
                            1.this.pt.onClick(dialogInterface, -1);
                        }
                    }

                    @Override
                    public void df(DialogInterface dialogInterface) {
                        if (1.this.pp != null) {
                            1.this.pp.onClick(dialogInterface, -2);
                        }
                    }

                    @Override
                    public void q(DialogInterface dialogInterface) {
                        if (1.this.c == null || dialogInterface == null) {
                            return;
                        }
                        1.this.c.onCancel(dialogInterface);
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

        @Override
        public void rg() {
            Dialog dialog = this.rg;
            if (dialog != null) {
                dialog.show();
            }
        }

        @Override
        public boolean df() {
            Dialog dialog = this.rg;
            if (dialog != null) {
                return dialog.isShowing();
            }
            return false;
        }
    }
}
