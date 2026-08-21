package com.igexin.push.extension.mod;

import android.util.Log;
import com.igexin.a.d;
import com.igexin.b.a.c.a.f;
import com.igexin.b.a.c.b;
import com.igexin.push.core.x;
import com.igexin.sdk.PushConsts;

public class SecurityUtils {
    public static final String a = SecurityUtils.class.getName();
    public static boolean b;
    public static String c;

    static {
        c = "";
        try {
            try {
                b.a(a + "|load so by system start #######", new Object[0]);
                System.loadLibrary("getuiext3");
                b = true;
                f.a().a("load so = getuiext3 by system success");
                b.a(a + "|load so by system success ^_^", new Object[0]);
            } catch (UnsatisfiedLinkError e) {
                Log.e(PushConsts.KEY_CLIENT_ID, "load1 so error = " + e.toString());
                b.a(a + "|load so by system error = " + e.toString(), new Object[0]);
                StringBuilder sb = new StringBuilder();
                sb.append(e.getMessage());
                sb.append(" + ");
                c = sb.toString();
                b.a(a + "|load so by new start !!", new Object[0]);
                if (x.a == null) {
                    b.a(a + "|load so by new context = null ~~~~", new Object[0]);
                    b = false;
                    c = e.getMessage();
                } else {
                    d.a(null).a().b().a(x.a, "getuiext3", null, new a());
                }
            }
        } catch (Throwable th) {
            b.a(a + "|load so error not UnsatisfiedLinkError", new Object[0]);
            b.a(a + "|load so error e = " + th.toString(), new Object[0]);
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
