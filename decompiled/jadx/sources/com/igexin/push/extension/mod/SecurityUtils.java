package com.igexin.push.extension.mod;

import android.util.Log;
import com.igexin.a.d;
import com.igexin.b.a.c.a.f;
import com.igexin.b.a.c.b;
import com.igexin.push.core.x;
import com.igexin.sdk.PushConsts;

/* JADX INFO: loaded from: classes2.dex */
public class SecurityUtils {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f2641a = SecurityUtils.class.getName();
    public static boolean b;
    public static String c;

    static {
        c = "";
        try {
            try {
                b.a(f2641a + "|load so by system start #######", new Object[0]);
                System.loadLibrary("getuiext3");
                b = true;
                f.a().a("load so = getuiext3 by system success");
                b.a(f2641a + "|load so by system success ^_^", new Object[0]);
            } catch (UnsatisfiedLinkError e) {
                Log.e(PushConsts.KEY_CLIENT_ID, "load1 so error = " + e.toString());
                b.a(f2641a + "|load so by system error = " + e.toString(), new Object[0]);
                StringBuilder sb = new StringBuilder();
                sb.append(e.getMessage());
                sb.append(" + ");
                c = sb.toString();
                b.a(f2641a + "|load so by new start !!", new Object[0]);
                if (x.f2590a == null) {
                    b.a(f2641a + "|load so by new context = null ~~~~", new Object[0]);
                    b = false;
                    c = e.getMessage();
                } else {
                    d.a(null).a().b().a(x.f2590a, "getuiext3", null, new a());
                }
            }
        } catch (Throwable th) {
            b.a(f2641a + "|load so error not UnsatisfiedLinkError", new Object[0]);
            b.a(f2641a + "|load so error e = " + th.toString(), new Object[0]);
            b = false;
            c += th.toString() + " + " + th.getMessage();
        }
    }

    public static native byte[] a();

    public static native byte[] b(byte[] bArr, byte[] bArr2, byte[] bArr3);

    public static native byte[] c(byte[] bArr, byte[] bArr2, byte[] bArr3);

    public static native byte[] d(byte[] bArr);

    public static native byte[] e();

    public static native byte[] f(byte[] bArr, byte[] bArr2, byte[] bArr3);

    public static native byte[] g(byte[] bArr, byte[] bArr2, byte[] bArr3);

    public static native byte[] h(byte[] bArr);

    public static native byte[] i(byte[] bArr);

    public static native byte[] j();

    public static native byte[] k();

    public static native byte[] l(byte[] bArr, byte[] bArr2);

    public static native byte[] m(byte[] bArr, byte[] bArr2);
}
