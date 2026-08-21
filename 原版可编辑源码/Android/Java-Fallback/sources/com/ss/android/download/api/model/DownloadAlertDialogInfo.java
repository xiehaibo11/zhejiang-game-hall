package com.ss.android.download.api.model;

public class DownloadAlertDialogInfo {
    public int bm;
    public boolean c;
    public java.lang.String df;
    public android.graphics.drawable.Drawable fw;
    public java.lang.String pp;
    public java.lang.String pt;
    public java.lang.String q;
    public android.content.Context rg;
    public android.view.View rz;
    public com.ss.android.download.api.model.DownloadAlertDialogInfo.df ux;

    static class 1 {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Scene {
        public static final int BACK_INSTALL = 1;
        public static final int CANCEL = 3;
        public static final int OPEN_APP = 2;
        public static final int WEBVIEW_START = 0;
    }

    public interface df {
        void df(android.content.DialogInterface r1);

        void q(android.content.DialogInterface r1);

        void rg(android.content.DialogInterface r1);
    }

    public static final class rg {
        private com.ss.android.download.api.model.DownloadAlertDialogInfo.df bm;
        private java.lang.String c;
        public int df;
        private java.lang.String fw;
        private java.lang.String pp;
        private java.lang.String pt;
        private android.content.Context q;
        public android.view.View rg;
        private android.graphics.drawable.Drawable rz;
        private boolean ux;

        public rg(android.content.Context r1) {
                r0 = this;
                r0.<init>()
                r0.q = r1
                return
        }

        static boolean c(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                boolean r0 = r0.ux
                return r0
        }

        static java.lang.String df(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                java.lang.String r0 = r0.pt
                return r0
        }

        static android.graphics.drawable.Drawable fw(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                android.graphics.drawable.Drawable r0 = r0.rz
                return r0
        }

        static java.lang.String pp(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                java.lang.String r0 = r0.fw
                return r0
        }

        static java.lang.String pt(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                java.lang.String r0 = r0.c
                return r0
        }

        static java.lang.String q(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                java.lang.String r0 = r0.pp
                return r0
        }

        static android.content.Context rg(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                android.content.Context r0 = r0.q
                return r0
        }

        static com.ss.android.download.api.model.DownloadAlertDialogInfo.df ux(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r0) {
                com.ss.android.download.api.model.DownloadAlertDialogInfo$df r0 = r0.bm
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg df(java.lang.String r1) {
                r0 = this;
                r0.pp = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg pt(java.lang.String r1) {
                r0 = this;
                r0.fw = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg q(java.lang.String r1) {
                r0 = this;
                r0.c = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg rg(int r1) {
                r0 = this;
                r0.df = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg rg(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.rz = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg rg(com.ss.android.download.api.model.DownloadAlertDialogInfo.df r1) {
                r0 = this;
                r0.bm = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg rg(java.lang.String r1) {
                r0 = this;
                r0.pt = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo.rg rg(boolean r1) {
                r0 = this;
                r0.ux = r1
                return r0
        }

        public com.ss.android.download.api.model.DownloadAlertDialogInfo rg() {
                r2 = this;
                com.ss.android.download.api.model.DownloadAlertDialogInfo r0 = new com.ss.android.download.api.model.DownloadAlertDialogInfo
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    private DownloadAlertDialogInfo(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.c = r0
            android.content.Context r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.rg(r2)
            r1.rg = r0
            java.lang.String r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.df(r2)
            r1.df = r0
            java.lang.String r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.q(r2)
            r1.q = r0
            java.lang.String r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.pt(r2)
            r1.pt = r0
            java.lang.String r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.pp(r2)
            r1.pp = r0
            boolean r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.c(r2)
            r1.c = r0
            android.graphics.drawable.Drawable r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.fw(r2)
            r1.fw = r0
            com.ss.android.download.api.model.DownloadAlertDialogInfo$df r0 = com.ss.android.download.api.model.DownloadAlertDialogInfo.rg.ux(r2)
            r1.ux = r0
            android.view.View r0 = r2.rg
            r1.rz = r0
            int r2 = r2.df
            r1.bm = r2
            return
    }

    DownloadAlertDialogInfo(com.ss.android.download.api.model.DownloadAlertDialogInfo.rg r1, com.ss.android.download.api.model.DownloadAlertDialogInfo.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
