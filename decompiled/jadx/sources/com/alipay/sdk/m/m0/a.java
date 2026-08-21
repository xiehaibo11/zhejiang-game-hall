package com.alipay.sdk.m.m0;

import android.content.Context;
import android.content.SharedPreferences;
import com.alipay.sdk.m.l0.f;

/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f1219a;
    public SharedPreferences b;
    public SharedPreferences.Editor c = null;
    public Context d;
    public boolean e;

    public a(Context context, String str, String str2, boolean z, boolean z2) {
        this.f1219a = "";
        this.b = null;
        this.d = null;
        this.e = false;
        this.e = z2;
        this.f1219a = str2;
        this.d = context;
        if (context != null) {
            this.b = context.getSharedPreferences(str2, 0);
        }
    }

    private void b() {
        SharedPreferences sharedPreferences;
        if (this.c != null || (sharedPreferences = this.b) == null) {
            return;
        }
        this.c = sharedPreferences.edit();
    }

    public void a(String str, String str2) {
        if (f.m6a(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.c;
        if (editor != null) {
            editor.putString(str, str2);
        }
    }

    public void b(String str) {
        if (f.m6a(str) || str.equals("t")) {
            return;
        }
        b();
        SharedPreferences.Editor editor = this.c;
        if (editor != null) {
            editor.remove(str);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0020  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean a() {
        /*
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r2 = r5.c
            r3 = 0
            if (r2 == 0) goto L20
            boolean r4 = r5.e
            if (r4 != 0) goto L16
            android.content.SharedPreferences r4 = r5.b
            if (r4 == 0) goto L16
            java.lang.String r4 = "t"
            r2.putLong(r4, r0)
        L16:
            android.content.SharedPreferences$Editor r0 = r5.c
            boolean r0 = r0.commit()
            if (r0 != 0) goto L20
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            android.content.SharedPreferences r1 = r5.b
            if (r1 == 0) goto L31
            android.content.Context r1 = r5.d
            if (r1 == 0) goto L31
            java.lang.String r2 = r5.f1219a
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            r5.b = r1
        L31:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.alipay.sdk.m.m0.a.a():boolean");
    }

    public String a(String str) {
        SharedPreferences sharedPreferences = this.b;
        if (sharedPreferences != null) {
            String string = sharedPreferences.getString(str, "");
            if (!f.m6a(string)) {
                return string;
            }
        }
        return "";
    }
}
