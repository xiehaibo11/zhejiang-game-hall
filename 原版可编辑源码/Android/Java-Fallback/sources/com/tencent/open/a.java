package com.tencent.open;

public class a {


    public static void a(android.app.Dialog r3, android.os.Handler r4) {
            if (r3 == 0) goto L23
            android.content.Context r0 = r3.getContext()
            if (r0 == 0) goto L23
            if (r4 != 0) goto Lb
            goto L23
        Lb:
            android.content.Context r0 = r3.getContext()
            r1 = 0
            java.lang.String r2 = "网页加载异常，请自行下载并安装QQ后，再重新登录。"
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r2, r1)
            r0.show()
            com.tencent.open.a$1 r0 = new com.tencent.open.a$1
            r0.<init>(r3)
            r1 = 100
            r4.postDelayed(r0, r1)
        L23:
            return
    }

    public static void a(android.view.Window r2) {
            if (r2 != 0) goto L3
            return
        L3:
            r0 = 1024(0x400, float:1.435E-42)
            r2.setFlags(r0, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L17
            android.view.View r0 = r2.getDecorView()
            r1 = 1280(0x500, float:1.794E-42)
            r0.setSystemUiVisibility(r1)
        L17:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L33
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r2.addFlags(r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L38
            android.view.WindowManager$LayoutParams r0 = r2.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r2.setAttributes(r0)
            goto L38
        L33:
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r2.addFlags(r0)
        L38:
            return
    }
}
