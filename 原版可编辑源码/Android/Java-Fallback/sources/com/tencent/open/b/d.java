package com.tencent.open.b;

public class d {
    private static java.lang.String a;
    private static java.lang.String b;

    static {
            return
    }

    public static java.lang.String a() {
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            java.lang.String r0 = com.tencent.open.b.d.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r2 = com.tencent.open.b.d.a
            return r2
        Lb:
            java.lang.String r0 = ""
            if (r2 != 0) goto L10
            return r0
        L10:
            com.tencent.open.b.d.a = r0
            java.lang.String r0 = "window"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            if (r2 == 0) goto L42
            android.view.Display r0 = r2.getDefaultDisplay()
            int r0 = r0.getWidth()
            android.view.Display r2 = r2.getDefaultDisplay()
            int r2 = r2.getHeight()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "x"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            com.tencent.open.b.d.a = r2
        L42:
            java.lang.String r2 = com.tencent.open.b.d.a
            return r2
    }
}
