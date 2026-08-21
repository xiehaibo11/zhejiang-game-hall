package com.ss.android.socialbase.appdownloader.pt;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import com.ss.android.socialbase.appdownloader.q.b;
import com.ss.android.socialbase.appdownloader.q.hq;

public class rg extends com.ss.android.socialbase.appdownloader.q.df {
    private AlertDialog.Builder rg;

    public rg(Context context) {
        this.rg = new AlertDialog.Builder(context);
    }

    @Override
    public hq rg(int i) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setTitle(i);
        }
        return this;
    }

    @Override
    public hq rg(String str) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setMessage(str);
        }
        return this;
    }

    @Override
    public hq rg(int i, DialogInterface.OnClickListener onClickListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setPositiveButton(i, onClickListener);
        }
        return this;
    }

    @Override
    public hq df(int i, DialogInterface.OnClickListener onClickListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setNegativeButton(i, onClickListener);
        }
        return this;
    }

    @Override
    public hq rg(DialogInterface.OnCancelListener onCancelListener) {
        AlertDialog.Builder builder = this.rg;
        if (builder != null) {
            builder.setOnCancelListener(onCancelListener);
        }
        return this;
    }

    @Override
    public b rg() {
        return new rg(this.rg);
    }

    private static class rg implements b {
        private AlertDialog rg;

        public rg(AlertDialog.Builder builder) {
            if (builder != null) {
                this.rg = builder.show();
            }
        }

        @Override
        public void rg() {
            AlertDialog alertDialog = this.rg;
            if (alertDialog != null) {
                alertDialog.show();
            }
        }

        @Override
        public boolean df() {
            AlertDialog alertDialog = this.rg;
            if (alertDialog != null) {
                return alertDialog.isShowing();
            }
            return false;
        }
    }
}
