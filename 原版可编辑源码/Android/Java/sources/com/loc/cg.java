package com.loc;

import android.content.Context;
import android.os.Build;
import java.io.ByteArrayOutputStream;

public final class cg extends ci {
    public static int a = 13;
    public static int b = 6;
    private Context e;

    public cg(Context context, ci ciVar) {
        super(ciVar);
        this.e = context;
    }

    private static byte[] a(Context context) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] byteArray = new byte[0];
        try {
            try {
                x.a(byteArrayOutputStream, "1.2." + a + "." + b);
                x.a(byteArrayOutputStream, "Android");
                x.a(byteArrayOutputStream, o.k());
                x.a(byteArrayOutputStream, o.h());
                x.a(byteArrayOutputStream, o.f(context));
                x.a(byteArrayOutputStream, Build.MANUFACTURER);
                x.a(byteArrayOutputStream, Build.MODEL);
                x.a(byteArrayOutputStream, Build.DEVICE);
                x.a(byteArrayOutputStream, o.n());
                x.a(byteArrayOutputStream, l.c(context));
                x.a(byteArrayOutputStream, l.d(context));
                x.a(byteArrayOutputStream, l.f(context));
                byteArrayOutputStream.write(new byte[]{0});
                byteArray = byteArrayOutputStream.toByteArray();
                byteArrayOutputStream.close();
            } catch (Throwable th) {
                th.printStackTrace();
            }
        } catch (Throwable th2) {
            try {
                av.b(th2, "sm", "gh");
                byteArrayOutputStream.close();
            } catch (Throwable th3) {
                try {
                    byteArrayOutputStream.close();
                } catch (Throwable th4) {
                    th4.printStackTrace();
                }
                throw th3;
            }
        }
        return byteArray;
    }

    @Override
    protected final byte[] a(byte[] bArr) {
        byte[] bArrA = a(this.e);
        byte[] bArr2 = new byte[bArrA.length + bArr.length];
        System.arraycopy(bArrA, 0, bArr2, 0, bArrA.length);
        System.arraycopy(bArr, 0, bArr2, bArrA.length, bArr.length);
        return bArr2;
    }
}
