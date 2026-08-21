package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;

public final class q {
    private volatile b a = new b(0);
    private bd b = new bd("HttpsDecisionUtil");

    private static class a {
        static q a = new q();
    }

    private static class b {
        protected boolean a;
        private int b;
        private final boolean c;
        private boolean d;

        private b() {
            this.b = 0;
            this.a = true;
            this.c = true;
            this.d = false;
        }

        b(byte b) {
            this();
        }

        public final void a(Context context) {
            if (context != null && this.b <= 0 && Build.VERSION.SDK_INT >= 4) {
                this.b = context.getApplicationContext().getApplicationInfo().targetSdkVersion;
            }
        }

        public final void a(boolean z) {
            this.a = z;
        }

        /* JADX WARN: Removed duplicated region for block: B:19:0x0023  */
        /* JADX WARN: Removed duplicated region for block: B:23:0x002a  */
        /* JADX WARN: Removed duplicated region for block: B:26:0x002e A[RETURN] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final boolean a() {
            boolean z;
            if (!this.d) {
                boolean z2 = Build.VERSION.SDK_INT >= 28;
                if (this.a) {
                    int i = this.b;
                    if (i <= 0) {
                        i = 28;
                    }
                    if (!(i >= 28)) {
                        z = false;
                    }
                    if (z2) {
                        if (!z2 && z) {
                        }
                    }
                } else {
                    z = true;
                    if (!z2 && z) {
                        return false;
                    }
                }
            }
            return true;
        }
    }

    public static q a() {
        return a.a;
    }

    public static String a(String str) {
        if (TextUtils.isEmpty(str) || str.startsWith("https")) {
            return str;
        }
        try {
            Uri.Builder builderBuildUpon = Uri.parse(str).buildUpon();
            builderBuildUpon.scheme("https");
            return builderBuildUpon.build().toString();
        } catch (Throwable unused) {
            return str;
        }
    }

    public static void b(Context context) {
        b(context, true);
    }

    private static void b(Context context, boolean z) {
        SharedPreferences.Editor editorA = bd.a(context, "open_common");
        bd.a(editorA, "a3", z);
        bd.a(editorA);
    }

    private static boolean c() {
        return Build.VERSION.SDK_INT == 19;
    }

    public final void a(Context context) {
        if (this.a == null) {
            this.a = new b((byte) 0);
        }
        this.a.a(bd.a(context, "open_common", "a3", true));
        this.a.a(context);
        ah.a(context).a();
    }

    final void a(Context context, boolean z) {
        if (this.a == null) {
            this.a = new b((byte) 0);
        }
        b(context, z);
        this.a.a(z);
    }

    public final boolean a(boolean z) {
        if (c()) {
            return false;
        }
        return z || b();
    }

    public final boolean b() {
        if (this.a == null) {
            this.a = new b((byte) 0);
        }
        return this.a.a();
    }
}
