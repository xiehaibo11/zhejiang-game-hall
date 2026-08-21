package android.support.v4.os;

public final class HandlerCompat {
    private HandlerCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean postDelayed(android.os.Handler r2, java.lang.Runnable r3, java.lang.Object r4, long r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto Lb
            boolean r2 = r2.postDelayed(r3, r4, r5)
            return r2
        Lb:
            android.os.Message r3 = android.os.Message.obtain(r2, r3)
            r3.obj = r4
            boolean r2 = r2.sendMessageDelayed(r3, r5)
            return r2
    }
}
