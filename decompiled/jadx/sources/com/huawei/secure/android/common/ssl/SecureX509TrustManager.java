package com.huawei.secure.android.common.ssl;

import android.content.Context;
import com.huawei.secure.android.common.ssl.util.BksUtil;
import com.huawei.secure.android.common.ssl.util.f;
import com.huawei.secure.android.common.ssl.util.g;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.security.KeyStore;
import java.security.KeyStoreException;
import java.security.NoSuchAlgorithmException;
import java.security.cert.CertificateException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: classes2.dex */
public class SecureX509TrustManager implements X509TrustManager {
    private static final String c = SecureX509TrustManager.class.getSimpleName();
    public static final String d = "hmsrootcas.bks";
    private static final String e = "";
    private static final String f = "X509";
    private static final String g = "bks";
    private static final String h = "AndroidCAStore";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected List<X509TrustManager> f2246a;
    private X509Certificate[] b;

    public SecureX509TrustManager(Context context) throws NoSuchAlgorithmException, IOException, CertificateException, KeyStoreException, IllegalArgumentException {
        this(context, false);
    }

    private void a() {
        g.c(c, "loadSystemCA");
        long jCurrentTimeMillis = System.currentTimeMillis();
        try {
            KeyStore keyStore = KeyStore.getInstance(h);
            keyStore.load(null, null);
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(f);
            trustManagerFactory.init(keyStore);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            for (int i = 0; i < trustManagers.length; i++) {
                if (trustManagers[i] instanceof X509TrustManager) {
                    this.f2246a.add((X509TrustManager) trustManagers[i]);
                }
            }
        } catch (IOException | KeyStoreException | NoSuchAlgorithmException | CertificateException e2) {
            g.b(c, "loadSystemCA: exception : " + e2.getMessage());
        }
        g.a(c, "loadSystemCA: cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
        g.c(c, "checkClientTrusted: ");
        Iterator<X509TrustManager> it = this.f2246a.iterator();
        while (it.hasNext()) {
            try {
                it.next().checkServerTrusted(x509CertificateArr, str);
                return;
            } catch (CertificateException e2) {
                g.b(c, "checkServerTrusted CertificateException" + e2.getMessage());
            }
        }
        throw new CertificateException("checkServerTrusted CertificateException");
    }

    @Override // javax.net.ssl.X509TrustManager
    public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) throws CertificateException {
        setChain(x509CertificateArr);
        g.c(c, "checkServerTrusted begin ,server ca chain size is : " + x509CertificateArr.length + " ,auth type is : " + str);
        long jCurrentTimeMillis = System.currentTimeMillis();
        int length = x509CertificateArr.length;
        for (int i = 0; i < length; i++) {
            X509Certificate x509Certificate = x509CertificateArr[i];
            g.a(c, "server ca chain: getSubjectDN is :" + x509Certificate.getSubjectDN());
            g.a(c, "IssuerDN :" + x509Certificate.getIssuerDN());
            g.a(c, "SerialNumber : " + x509Certificate.getSerialNumber());
        }
        int size = this.f2246a.size();
        for (int i2 = 0; i2 < size; i2++) {
            try {
                g.c(c, "check server i : " + i2);
                X509TrustManager x509TrustManager = this.f2246a.get(i2);
                X509Certificate[] acceptedIssuers = x509TrustManager.getAcceptedIssuers();
                if (acceptedIssuers != null) {
                    g.c(c, "client root ca size is : " + acceptedIssuers.length);
                    for (int i3 = 0; i3 < acceptedIssuers.length; i3++) {
                        g.a(c, "client root ca getIssuerDN :" + acceptedIssuers[i3].getIssuerDN());
                    }
                }
                x509TrustManager.checkServerTrusted(x509CertificateArr, str);
                g.c(c, "checkServerTrusted succeed ,root ca issuer is : " + x509CertificateArr[x509CertificateArr.length - 1].getIssuerDN());
                return;
            } catch (CertificateException e2) {
                g.b(c, "checkServerTrusted error :" + e2.getMessage() + " , time : " + i2);
                if (i2 == size - 1) {
                    if (x509CertificateArr != null && x509CertificateArr.length > 0) {
                        g.b(c, "root ca issuer : " + x509CertificateArr[x509CertificateArr.length - 1].getIssuerDN());
                    }
                    throw e2;
                }
            }
        }
        g.a(c, "checkServerTrusted: cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
    }

    @Override // javax.net.ssl.X509TrustManager
    public X509Certificate[] getAcceptedIssuers() {
        try {
            ArrayList arrayList = new ArrayList();
            Iterator<X509TrustManager> it = this.f2246a.iterator();
            while (it.hasNext()) {
                arrayList.addAll(Arrays.asList(it.next().getAcceptedIssuers()));
            }
            return (X509Certificate[]) arrayList.toArray(new X509Certificate[arrayList.size()]);
        } catch (Exception e2) {
            g.b(c, "getAcceptedIssuers exception : " + e2.getMessage());
            return new X509Certificate[0];
        }
    }

    public X509Certificate[] getChain() {
        return this.b;
    }

    public List<X509TrustManager> getX509TrustManagers() {
        return this.f2246a;
    }

    public void setChain(X509Certificate[] x509CertificateArr) {
        this.b = x509CertificateArr;
    }

    public void setX509TrustManagers(List<X509TrustManager> list) {
        this.f2246a = list;
    }

    public SecureX509TrustManager(Context context, boolean z) throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException, IllegalArgumentException {
        this.f2246a = new ArrayList();
        if (context == null) {
            throw new IllegalArgumentException(com.tkay.expressad.foundation.g.b.b.f6873a);
        }
        com.huawei.secure.android.common.ssl.util.c.a(context);
        if (z) {
            a();
        }
        a(context);
        if (this.f2246a.isEmpty()) {
            throw new CertificateException("X509TrustManager is empty");
        }
    }

    private void a(Context context) throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        boolean z;
        g.c(c, "loadBksCA");
        long jCurrentTimeMillis = System.currentTimeMillis();
        InputStream filesBksIS = BksUtil.getFilesBksIS(context);
        if (filesBksIS != null) {
            try {
                g.c(c, "get bks not from assets");
                a(filesBksIS);
                z = true;
            } catch (IOException | KeyStoreException | NoSuchAlgorithmException | CertificateException e2) {
                g.b(c, "loadBksCA: exception : " + e2.getMessage());
                z = false;
            }
        } else {
            z = true;
        }
        if (!z || filesBksIS == null) {
            g.c(c, " get bks from assets ");
            a(context.getAssets().open("hmsrootcas.bks"));
        }
        g.a(c, "loadBksCA: cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
    }

    private void a(InputStream inputStream) throws NoSuchAlgorithmException, IOException, KeyStoreException, CertificateException {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(f);
            KeyStore keyStore = KeyStore.getInstance("bks");
            keyStore.load(inputStream, "".toCharArray());
            trustManagerFactory.init(keyStore);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            for (int i = 0; i < trustManagers.length; i++) {
                if (trustManagers[i] instanceof X509TrustManager) {
                    this.f2246a.add((X509TrustManager) trustManagers[i]);
                }
            }
        } finally {
            f.a(inputStream);
        }
    }

    public SecureX509TrustManager(InputStream inputStream, String str) throws IllegalArgumentException {
        this.f2246a = new ArrayList();
        a(inputStream, str);
    }

    private void a(InputStream inputStream, String str) {
        if (inputStream != null && str != null) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            try {
                try {
                    TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(f);
                    KeyStore keyStore = KeyStore.getInstance("bks");
                    keyStore.load(inputStream, str.toCharArray());
                    trustManagerFactory.init(keyStore);
                    TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
                    for (int i = 0; i < trustManagers.length; i++) {
                        if (trustManagers[i] instanceof X509TrustManager) {
                            this.f2246a.add((X509TrustManager) trustManagers[i]);
                        }
                    }
                    f.a(inputStream);
                } finally {
                    f.a(inputStream);
                }
            } catch (IOException | KeyStoreException | NoSuchAlgorithmException | CertificateException e2) {
                g.b(c, "loadInputStream: exception : " + e2.getMessage());
            }
            g.a(c, "loadInputStream: cost : " + (System.currentTimeMillis() - jCurrentTimeMillis) + " ms");
            return;
        }
        throw new IllegalArgumentException("inputstream or trustPwd is null");
    }

    public SecureX509TrustManager(String str) throws IllegalArgumentException, FileNotFoundException {
        this(str, false);
    }

    public SecureX509TrustManager(String str, boolean z) throws Throwable {
        FileInputStream fileInputStream;
        this.f2246a = new ArrayList();
        try {
            fileInputStream = new FileInputStream(str);
            try {
                a(fileInputStream, "");
                f.a((InputStream) fileInputStream);
                if (z) {
                    a();
                }
            } catch (Throwable th) {
                th = th;
                f.a((InputStream) fileInputStream);
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
            fileInputStream = null;
        }
    }

    public SecureX509TrustManager(InputStream inputStream, String str, boolean z) throws IllegalArgumentException {
        this.f2246a = new ArrayList();
        if (z) {
            a();
        }
        a(inputStream, str);
    }
}
