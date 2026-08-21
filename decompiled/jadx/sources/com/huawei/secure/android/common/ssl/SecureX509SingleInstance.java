package com.huawei.secure.android.common.ssl;

import android.content.Context;
import android.os.AsyncTask;
import com.huawei.secure.android.common.ssl.util.BksUtil;
import com.huawei.secure.android.common.ssl.util.d;
import com.huawei.secure.android.common.ssl.util.g;
import java.io.IOException;
import java.io.InputStream;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;

/* JADX INFO: loaded from: classes2.dex */
public class SecureX509SingleInstance {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2245a = "SecureX509SingleInstance";
    private static volatile SecureX509TrustManager b;

    private SecureX509SingleInstance() {
    }

    public static SecureX509TrustManager getInstance(Context context) throws NoSuchAlgorithmException, IOException, CertificateException, KeyStoreException {
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (context == null) {
            throw new NullPointerException(com.tkay.expressad.foundation.g.b.b.f6873a);
        }
        com.huawei.secure.android.common.ssl.util.c.a(context);
        if (b == null) {
            synchronized (SecureX509SingleInstance.class) {
                if (b == null) {
                    InputStream filesBksIS = BksUtil.getFilesBksIS(context);
                    if (filesBksIS == null) {
                        g.c(f2245a, "get assets bks");
                        filesBksIS = context.getAssets().open("hmsrootcas.bks");
                    } else {
                        g.c(f2245a, "get files bks");
                    }
                    b = new SecureX509TrustManager(filesBksIS, "");
                    new d().executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, context);
                }
            }
        }
        g.a(f2245a, "SecureX509TrustManager getInstance: cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
        return b;
    }

    public static void updateBks(InputStream inputStream) {
        g.c(f2245a, "update bks");
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (inputStream != null && b != null) {
            b = new SecureX509TrustManager(inputStream, "");
            SecureSSLSocketFactory.a(b);
            SecureApacheSSLSocketFactory.a(b);
        }
        g.c(f2245a, "SecureX509TrustManager update bks cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
    }
}
