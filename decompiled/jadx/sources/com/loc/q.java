package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;

/* JADX INFO: compiled from: HttpsDecisionUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile b f3026a = new b(0);
    private bd b = new bd("HttpsDecisionUtil");

    /* JADX INFO: compiled from: HttpsDecisionUtil.java */
    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static q f3027a = new q();
    }

    /* JADX INFO: compiled from: HttpsDecisionUtil.java */
    private static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected boolean f3028a;
        private int b;
        private final boolean c;
        private boolean d;

        private b() {
            this.b = 0;
            this.f3028a = true;
            this.c = true;
            this.d = false;
        }

        /* synthetic */ b(byte b) {
            this();
        }

        public final void a(Context context) {
            if (context != null && this.b <= 0 && Build.VERSION.SDK_INT >= 4) {
                this.b = context.getApplicationContext().getApplicationInfo().targetSdkVersion;
            }
        }

        public final void a(boolean z) {
            this.f3028a = z;
        }

        /* JADX WARN: Removed duplicated region for block: B:19:0x0023  */
        /* JADX WARN: Removed duplicated region for block: B:23:0x002a  */
        /* JADX WARN: Removed duplicated region for block: B:26:0x002e A[RETURN] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final boolean a() {
            /*
                r5 = this;
                boolean r0 = r5.d
                r1 = 1
                if (r0 != 0) goto L2f
                int r0 = android.os.Build.VERSION.SDK_INT
                r2 = 28
                r3 = 0
                if (r0 < r2) goto Le
                r0 = 1
                goto Lf
            Le:
                r0 = 0
            Lf:
                boolean r4 = r5.f3028a
                if (r4 == 0) goto L23
                int r4 = r5.b
                if (r4 > 0) goto L19
                r4 = 28
            L19:
                if (r4 < r2) goto L1d
                r2 = 1
                goto L1e
            L1d:
                r2 = 0
            L1e:
                if (r2 == 0) goto L21
                goto L23
            L21:
                r2 = 0
                goto L24
            L23:
                r2 = 1
            L24:
                if (r0 == 0) goto L2a
                if (r2 == 0) goto L2a
                r0 = 1
                goto L2b
            L2a:
                r0 = 0
            L2b:
                if (r0 == 0) goto L2e
                goto L2f
            L2e:
                return r3
            L2f:
                return r1
            */
            throw new UnsupportedOperationException("Method not decompiled: com.loc.q.b.a():boolean");
        }
    }

    public static q a() {
        return a.f3027a;
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
        if (this.f3026a == null) {
            this.f3026a = new b((byte) 0);
        }
        this.f3026a.a(bd.a(context, "open_common", "a3", true));
        this.f3026a.a(context);
        ah.a(context).a();
    }

    final void a(Context context, boolean z) {
        if (this.f3026a == null) {
            this.f3026a = new b((byte) 0);
        }
        b(context, z);
        this.f3026a.a(z);
    }

    public final boolean a(boolean z) {
        if (c()) {
            return false;
        }
        return z || b();
    }

    public final boolean b() {
        if (this.f3026a == null) {
            this.f3026a = new b((byte) 0);
        }
        return this.f3026a.a();
    }
}
