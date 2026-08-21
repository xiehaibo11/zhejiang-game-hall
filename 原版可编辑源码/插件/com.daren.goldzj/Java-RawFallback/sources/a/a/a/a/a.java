package a.a.a.a;

public class a {
    public static int a(android.content.Context r4) {
            android.content.res.Resources r0 = r4.getResources()
            java.lang.String r1 = "fringe_height"
            java.lang.String r2 = "dimen"
            java.lang.String r3 = "com.daren.goldzj"
            int r0 = r0.getIdentifier(r1, r2, r3)
            if (r0 <= 0) goto L19
            android.content.res.Resources r4 = r4.getResources()
            int r4 = r4.getDimensionPixelSize(r0)
            goto L1a
        L19:
            r4 = 0
        L1a:
            return r4
    }

    public static void a(android.view.Window r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L15
            android.view.View r2 = r2.getDecorView()
            int r0 = r2.getSystemUiVisibility()
            r0 = r0 | 128(0x80, float:1.8E-43)
            r0 = r0 | 64
            r2.setSystemUiVisibility(r0)
        L15:
            return
    }

    public static boolean b(android.content.Context r2) {
            java.lang.String r2 = "flyme.config.FlymeFeature"
            r0 = 0
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1d
            java.lang.String r1 = "IS_FRINGE_DEVICE"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r1)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1d
            r1 = 0
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1d
            java.lang.Boolean r2 = (java.lang.Boolean) r2     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1d
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> L1d
            return r2
        L19:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L1d
        L1d:
            return r0
    }
}
