package com.loc;

import android.content.Context;
import android.os.Build;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.NoSuchAlgorithmException;
import java.security.PublicKey;
import java.security.cert.CertificateException;
import java.security.spec.InvalidKeySpecException;
import javax.crypto.BadPaddingException;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.NoSuchPaddingException;

/* JADX INFO: compiled from: ClientInfo.java */
/* JADX INFO: loaded from: classes2.dex */
public final class n {

    /* JADX INFO: compiled from: ClientInfo.java */
    private static class a {
        String A;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        String f3018a;
        String b;
        String c;
        String d;
        String e;
        String f;
        String g;
        String h;
        String i;
        String j;
        String k;
        String l;
        String m;
        String n;
        String o;
        String p;
        String q;
        String r;
        String s;
        String t;
        String u;
        String v;
        String w;
        String x;
        String y;
        String z;

        private a() {
        }

        /* synthetic */ a(byte b) {
            this();
        }
    }

    public static String a() {
        try {
            String strValueOf = String.valueOf(System.currentTimeMillis());
            String str = l.a() ? "1" : "0";
            int length = strValueOf.length();
            return strValueOf.substring(0, length - 2) + str + strValueOf.substring(length - 1);
        } catch (Throwable th) {
            as.a(th, "CI", "TS");
            return null;
        }
    }

    public static String a(Context context) {
        return b(context);
    }

    public static String a(Context context, String str, String str2) {
        try {
            return s.a(l.e(context) + Constants.COLON_SEPARATOR + str.substring(0, str.length() - 3) + Constants.COLON_SEPARATOR + str2);
        } catch (Throwable th) {
            as.a(th, "CI", "Sco");
            return null;
        }
    }

    private static String a(a aVar) {
        return p.b(b(aVar));
    }

    private static void a(ByteArrayOutputStream byteArrayOutputStream, String str) {
        if (TextUtils.isEmpty(str)) {
            x.a(byteArrayOutputStream, (byte) 0, new byte[0]);
        } else {
            x.a(byteArrayOutputStream, str.getBytes().length > 255 ? (byte) -1 : (byte) str.getBytes().length, x.a(str));
        }
    }

    public static byte[] a(Context context, boolean z, boolean z2) {
        try {
            return b(b(context, z, z2));
        } catch (Throwable th) {
            as.a(th, "CI", "gz");
            return null;
        }
    }

    public static byte[] a(byte[] bArr) throws BadPaddingException, InvalidKeySpecException, NoSuchPaddingException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException, NullPointerException {
        return p.a(bArr);
    }

    private static a b(Context context, boolean z, boolean z2) {
        a aVar = new a((byte) 0);
        aVar.f3018a = o.k();
        aVar.b = o.h();
        String strF = o.f(context);
        if (strF == null) {
            strF = "";
        }
        aVar.c = strF;
        aVar.d = l.c(context);
        aVar.e = Build.MODEL;
        aVar.f = Build.MANUFACTURER;
        aVar.g = Build.DEVICE;
        aVar.h = l.b(context);
        aVar.i = l.d(context);
        aVar.j = String.valueOf(Build.VERSION.SDK_INT);
        aVar.k = o.n();
        aVar.l = o.m(context);
        StringBuilder sb = new StringBuilder();
        sb.append(o.j(context));
        aVar.m = sb.toString();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(o.i(context));
        aVar.n = sb2.toString();
        aVar.o = o.s(context);
        aVar.p = o.h(context);
        aVar.q = "";
        aVar.r = "";
        if (z) {
            aVar.s = "";
            aVar.t = "";
        } else {
            String[] strArrI = o.i();
            aVar.s = strArrI[0];
            aVar.t = strArrI[1];
        }
        aVar.w = o.a();
        String strA = o.a(context);
        if (TextUtils.isEmpty(strA)) {
            aVar.x = "";
        } else {
            aVar.x = strA;
        }
        aVar.y = "aid=" + o.g();
        if ((z2 && ag.d) || ag.e) {
            String strE = o.e(context);
            if (!TextUtils.isEmpty(strE)) {
                aVar.y += "|oaid=" + strE;
            }
        }
        String strJ = o.j();
        if (!TextUtils.isEmpty(strJ)) {
            aVar.y += "|multiImeis=" + strJ;
        }
        String strM = o.m();
        if (!TextUtils.isEmpty(strM)) {
            aVar.y += "|meid=" + strM;
        }
        aVar.y += "|serial=" + o.f();
        String strB = o.b();
        if (!TextUtils.isEmpty(strB)) {
            aVar.y += "|adiuExtras=" + strB;
        }
        aVar.y += "|storage=" + o.o() + "|ram=" + o.r(context) + "|arch=" + o.p();
        String strB2 = ar.a().b();
        if (TextUtils.isEmpty(strB2)) {
            aVar.z = "";
        } else {
            aVar.z = strB2;
        }
        if (z) {
            String strA2 = ac.a(context).a();
            if (!TextUtils.isEmpty(strA2)) {
                aVar.A = strA2;
            }
        }
        return aVar;
    }

    private static String b(Context context) {
        try {
            return a(b(context, false, false));
        } catch (Throwable th) {
            as.a(th, "CI", "gCXi");
            return null;
        }
    }

    private static byte[] b(a aVar) {
        ByteArrayOutputStream byteArrayOutputStream;
        try {
            byteArrayOutputStream = new ByteArrayOutputStream();
            try {
                a(byteArrayOutputStream, aVar.f3018a);
                a(byteArrayOutputStream, aVar.b);
                a(byteArrayOutputStream, aVar.c);
                a(byteArrayOutputStream, aVar.d);
                a(byteArrayOutputStream, aVar.e);
                a(byteArrayOutputStream, aVar.f);
                a(byteArrayOutputStream, aVar.g);
                a(byteArrayOutputStream, aVar.h);
                a(byteArrayOutputStream, aVar.i);
                a(byteArrayOutputStream, aVar.j);
                a(byteArrayOutputStream, aVar.k);
                a(byteArrayOutputStream, aVar.l);
                a(byteArrayOutputStream, aVar.m);
                a(byteArrayOutputStream, aVar.n);
                a(byteArrayOutputStream, aVar.o);
                a(byteArrayOutputStream, aVar.p);
                a(byteArrayOutputStream, aVar.q);
                a(byteArrayOutputStream, aVar.r);
                a(byteArrayOutputStream, aVar.s);
                a(byteArrayOutputStream, aVar.t);
                a(byteArrayOutputStream, aVar.u);
                a(byteArrayOutputStream, aVar.v);
                a(byteArrayOutputStream, aVar.w);
                a(byteArrayOutputStream, aVar.x);
                a(byteArrayOutputStream, aVar.y);
                a(byteArrayOutputStream, aVar.z);
                a(byteArrayOutputStream, aVar.A);
                byte[] byteArray = byteArrayOutputStream.toByteArray();
                new String(byteArray);
                byte[] bArrB = b(x.b(byteArray));
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th) {
                    th.printStackTrace();
                }
                return bArrB;
            } catch (Throwable th2) {
                th = th2;
                try {
                    as.a(th, "CI", "gzx");
                    return null;
                } finally {
                    if (byteArrayOutputStream != null) {
                        try {
                            byteArrayOutputStream.close();
                        } catch (Throwable th3) {
                            th3.printStackTrace();
                        }
                    }
                }
            }
        } catch (Throwable th4) {
            th = th4;
            byteArrayOutputStream = null;
        }
    }

    private static byte[] b(byte[] bArr) throws BadPaddingException, InvalidKeySpecException, NoSuchPaddingException, IllegalBlockSizeException, NoSuchAlgorithmException, IOException, InvalidKeyException, CertificateException, NullPointerException {
        PublicKey publicKeyD = x.d();
        if (bArr.length <= 117) {
            return p.a(bArr, publicKeyD);
        }
        byte[] bArr2 = new byte[117];
        System.arraycopy(bArr, 0, bArr2, 0, 117);
        byte[] bArrA = p.a(bArr2, publicKeyD);
        byte[] bArr3 = new byte[(bArr.length + 128) - 117];
        System.arraycopy(bArrA, 0, bArr3, 0, 128);
        System.arraycopy(bArr, 117, bArr3, 128, bArr.length - 117);
        return bArr3;
    }
}
