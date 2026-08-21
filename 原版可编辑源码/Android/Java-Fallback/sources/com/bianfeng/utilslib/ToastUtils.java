package com.bianfeng.utilslib;

public class ToastUtils {
    private static com.bianfeng.utilslib.ToastUtils utils;
    private android.widget.Toast mToast;


    private ToastUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.widget.Toast access$000(com.bianfeng.utilslib.ToastUtils r0) {
            android.widget.Toast r0 = r0.mToast
            return r0
    }

    public static com.bianfeng.utilslib.ToastUtils getInstance() {
            com.bianfeng.utilslib.ToastUtils r0 = com.bianfeng.utilslib.ToastUtils.utils
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.utilslib.ToastUtils> r0 = com.bianfeng.utilslib.ToastUtils.class
            monitor-enter(r0)
            com.bianfeng.utilslib.ToastUtils r1 = com.bianfeng.utilslib.ToastUtils.utils     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.utilslib.ToastUtils r1 = new com.bianfeng.utilslib.ToastUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.utilslib.ToastUtils.utils = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.utilslib.ToastUtils r0 = com.bianfeng.utilslib.ToastUtils.utils
            return r0
    }

    private void show(android.app.Activity r2) {
            r1 = this;
            com.bianfeng.utilslib.ToastUtils$1 r0 = new com.bianfeng.utilslib.ToastUtils$1
            r0.<init>(r1)
            r2.runOnUiThread(r0)
            return
    }

    public void show(android.app.Activity r3, int r4) {
            r2 = this;
            android.widget.Toast r0 = r2.mToast
            r1 = 0
            if (r0 != 0) goto Lc
            android.widget.Toast r4 = android.widget.Toast.makeText(r3, r4, r1)
            r2.mToast = r4
            goto Lf
        Lc:
            r0.setText(r4)
        Lf:
            android.widget.Toast r4 = r2.mToast
            r0 = 17
            r4.setGravity(r0, r1, r1)
            r2.show(r3)
            return
    }

    public void show(android.app.Activity r3, java.lang.String r4) {
            r2 = this;
            android.widget.Toast r0 = r2.mToast
            r1 = 0
            if (r0 != 0) goto Lc
            android.widget.Toast r4 = android.widget.Toast.makeText(r3, r4, r1)
            r2.mToast = r4
            goto Lf
        Lc:
            r0.setText(r4)
        Lf:
            android.widget.Toast r4 = r2.mToast
            r0 = 17
            r4.setGravity(r0, r1, r1)
            r2.show(r3)
            return
    }

    public void show(android.app.Activity r2, java.lang.String r3, int r4) {
            r1 = this;
            android.widget.Toast r0 = r1.mToast
            if (r0 != 0) goto Lc
            r0 = 1
            android.widget.Toast r3 = android.widget.Toast.makeText(r2, r3, r0)
            r1.mToast = r3
            goto Lf
        Lc:
            r0.setText(r3)
        Lf:
            android.widget.Toast r3 = r1.mToast
            r0 = 0
            r3.setGravity(r4, r0, r0)
            r1.show(r2)
            return
    }

    public void showImg(android.app.Activity r2, java.lang.String r3, int r4) {
            r1 = this;
            android.widget.Toast r0 = r1.mToast
            if (r0 != 0) goto Lc
            r0 = 0
            android.widget.Toast r3 = android.widget.Toast.makeText(r2, r3, r0)
            r1.mToast = r3
            goto Lf
        Lc:
            r0.setText(r3)
        Lf:
            android.widget.Toast r3 = r1.mToast
            android.view.View r3 = r3.getView()
            android.widget.LinearLayout r3 = (android.widget.LinearLayout) r3
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r2)
            r0.setImageResource(r4)
            r3.addView(r0)
            r1.show(r2)
            return
    }
}
