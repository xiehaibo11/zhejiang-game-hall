package com.bianfeng.yidonglogin.utils;

public class LoadingDialogUtils {
    private static android.app.Dialog alertDialog;


    public LoadingDialogUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.app.Dialog access$002(android.app.Dialog r0) {
            com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog = r0
            return r0
    }

    public static void dismiss() {
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            if (r0 == 0) goto L12
            boolean r0 = r0.isShowing()
            if (r0 == 0) goto L12
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            r0.dismiss()
            r0 = 0
            com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog = r0
        L12:
            return
    }

    public static void show(android.content.Context r3) {
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            r0.<init>(r3)
            android.app.AlertDialog r0 = r0.create()
            com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog = r0
            r1 = 0
            r0.setCancelable(r1)
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            r0.setCanceledOnTouchOutside(r1)
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            com.bianfeng.yidonglogin.utils.LoadingDialogUtils$1 r1 = new com.bianfeng.yidonglogin.utils.LoadingDialogUtils$1
            r1.<init>()
            r0.setOnKeyListener(r1)
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            r0.show()
            android.app.Dialog r0 = com.bianfeng.yidonglogin.utils.LoadingDialogUtils.alertDialog
            android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r3)
            java.lang.String r2 = "R.layout.yidonglogin_loading_alert"
            int r3 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r3, r2)
            r2 = 0
            android.view.View r3 = r1.inflate(r3, r2)
            r0.setContentView(r3)
            return
    }
}
