package com.ss.android.socialbase.appdownloader.pt;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;

/* JADX INFO: loaded from: classes3.dex */
public class rg extends com.ss.android.socialbase.appdownloader.q.df {
    private AlertDialog.Builder rg;

    public rg(Context context) {
        this.rg = new AlertDialog.Builder(context);
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public hq rg(int i) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setTitle(i);
        }
        return this;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public hq rg(String str) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setMessage(str);
        }
        return this;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public hq rg(int i, DialogInterface.OnClickListener onClickListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setPositiveButton(i, onClickListener);
        }
        return this;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public hq df(int i, DialogInterface.OnClickListener onClickListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setNegativeButton(i, onClickListener);
        }
        return this;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public hq rg(DialogInterface.OnCancelListener onCancelListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setOnCancelListener(onCancelListener);
        }
        return this;
    }

    @Override // com.ss.android.socialbase.appdownloader.q.hq
    public b rg() {
        return new C0362rg(this.rg);
    }

    /* JADX INFO: renamed from: com.ss.android.socialbase.appdownloader.pt.rg$rg, reason: collision with other inner class name */
    private static class C0362rg implements b {
        private AlertDialog rg;

        public C0362rg(AlertDialog.Builder builder) {
            if (builder != null) {
                this.rg = builder.show();
            }
        }

        @Override // com.ss.android.socialbase.appdownloader.q.b
        public void rg() {
            AlertDialog alertDialog = this.rg;
            if (alertDialog != null) {
                alertDialog.show();
            }
        }

        @Override // com.ss.android.socialbase.appdownloader.q.b
        public boolean df() {
            AlertDialog alertDialog = this.rg;
            if (alertDialog != null) {
                return alertDialog.isShowing();
            }
            return false;
        }
    }
}
