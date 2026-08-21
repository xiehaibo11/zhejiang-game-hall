package com.huawei.secure.android.common.ssl;

import android.content.Context;
import android.os.AsyncTask;
import com.huawei.secure.android.common.ssl.util.BksUtil;
import com.huawei.secure.android.common.ssl.util.e;
import com.huawei.secure.android.common.ssl.util.g;
import java.io.IOException;
import java.io.InputStream;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;

/* JADX INFO: loaded from: classes2.dex */
public class SSFSecureX509SingleInstance {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2241a = "SSFSecureX509SingleInstance";
    private static volatile SecureX509TrustManager b;

    private SSFSecureX509SingleInstance() {
    }

    public static SecureX509TrustManager getInstance(Context context) throws NoSuchAlgorithmException, IOException, CertificateException, KeyStoreException {
        if (context == null) {
            throw new NullPointerException(com.tkay.expressad.foundation.g.b.b.f6873a);
        }
        com.huawei.secure.android.common.ssl.util.c.a(context);
        if (b == null) {
            synchronized (SSFSecureX509SingleInstance.class) {
                if (b == null) {
                    InputStream filesBksIS = BksUtil.getFilesBksIS(context);
                    if (filesBksIS == null) {
                        g.c(f2241a, "get assets bks");
                        filesBksIS = context.getAssets().open("hmsrootcas.bks");
                    } else {
                        g.c(f2241a, "get files bks");
                    }
                    b = new SecureX509TrustManager(filesBksIS, "", true);
                    new e().executeOnExecutor(AsyncTask.THREAD_POOL_EXECUTOR, context);
                }
            }
        }
        return b;
    }

    public static void updateBks(InputStream inputStream) {
        g.c(f2241a, "update bks");
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (inputStream != null && b != null) {
            b = new SecureX509TrustManager(inputStream, "", true);
            g.a(f2241a, "updateBks: new SecureX509TrustManager cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
            SSFCompatiableSystemCA.a(b);
            SASFCompatiableSystemCA.a(b);
        }
        g.a(f2241a, "update bks cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
    }
}
