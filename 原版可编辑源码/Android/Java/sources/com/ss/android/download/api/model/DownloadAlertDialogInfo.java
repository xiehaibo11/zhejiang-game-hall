package com.ss.android.download.api.model;

import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.view.View;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class DownloadAlertDialogInfo {
    public int bm;
    public boolean c;
    public String df;
    public Drawable fw;
    public String pp;
    public String pt;
    public String q;
    public Context rg;
    public View rz;
    public df ux;

    @Retention(RetentionPolicy.SOURCE)
    public @interface Scene {
        public static final int BACK_INSTALL = 1;
        public static final int CANCEL = 3;
        public static final int OPEN_APP = 2;
        public static final int WEBVIEW_START = 0;
    }

    public interface df {
        void df(DialogInterface dialogInterface);

        void q(DialogInterface dialogInterface);

        void rg(DialogInterface dialogInterface);
    }

    private DownloadAlertDialogInfo(rg rgVar) {
        this.c = true;
        this.rg = rgVar.q;
        this.df = rgVar.pt;
        this.q = rgVar.pp;
        this.pt = rgVar.c;
        this.pp = rgVar.fw;
        this.c = rgVar.ux;
        this.fw = rgVar.rz;
        this.ux = rgVar.bm;
        this.rz = rgVar.rg;
        this.bm = rgVar.df;
    }

    public static final class rg {
        private df bm;
        private String c;
        public int df;
        private String fw;
        private String pp;
        private String pt;
        private Context q;
        public View rg;
        private Drawable rz;
        private boolean ux;

        public rg(Context context) {
            this.q = context;
        }

        public rg rg(String str) {
            this.pt = str;
            return this;
        }

        public rg df(String str) {
            this.pp = str;
            return this;
        }

        public rg q(String str) {
            this.c = str;
            return this;
        }

        public rg pt(String str) {
            this.fw = str;
            return this;
        }

        public rg rg(boolean z) {
            this.ux = z;
            return this;
        }

        public rg rg(Drawable drawable) {
            this.rz = drawable;
            return this;
        }

        public rg rg(df dfVar) {
            this.bm = dfVar;
            return this;
        }

        public rg rg(int i) {
            this.df = i;
            return this;
        }

        public DownloadAlertDialogInfo rg() {
            return new DownloadAlertDialogInfo(this);
        }
    }
}
