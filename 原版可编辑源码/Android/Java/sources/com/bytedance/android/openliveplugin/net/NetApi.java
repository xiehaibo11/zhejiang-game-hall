package com.bytedance.android.openliveplugin.net;

import com.huawei.hms.framework.common.ContainerUtils;
import java.io.BufferedOutputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.net.URL;
import java.security.GeneralSecurityException;
import java.security.KeyStore;
import java.util.Arrays;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.TrustManagerFactory;
import javax.net.ssl.X509TrustManager;
import org.json.JSONObject;

public class NetApi {
    private static final int BUFFER_SIZE = 1024;
    private static final String HEADER_CONTENT_TYPE = "Content-Type";
    private static final String PROTOCOL_CHARSET = "utf-8";
    private static final int TIMEOUT = 5000;

    private NetApi() {
    }

    private static final class Holder {
        private static final NetApi INSTANCE = new NetApi();

        private Holder() {
        }
    }

    public static NetApi getInstance() {
        return Holder.INSTANCE;
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x007c A[EXC_TOP_SPLITTER, PHI: r5
      0x007c: PHI (r5v4 javax.net.ssl.HttpsURLConnection) = (r5v3 javax.net.ssl.HttpsURLConnection), (r5v8 javax.net.ssl.HttpsURLConnection) binds: [B:30:0x0089, B:20:0x007a] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0091 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String request(boolean z, String str, byte[] bArr) throws Throwable {
        HttpsURLConnection httpsURLConnection;
        int responseCode;
        HttpsURLConnection httpsURLConnection2 = null;
        try {
            URL url = new URL(str);
            HttpsURLConnection.setDefaultSSLSocketFactory(systemDefaultSslSocketFactory(systemDefaultTrustManager()));
            httpsURLConnection = (HttpsURLConnection) url.openConnection();
            try {
                try {
                    httpsURLConnection.setConnectTimeout(5000);
                    httpsURLConnection.setHostnameVerifier(DefaultHostnameVerifier.INSTANCE);
                    if (z && bArr != null && bArr.length != 0) {
                        httpsURLConnection.setDoOutput(true);
                        httpsURLConnection.setFixedLengthStreamingMode(bArr.length);
                        BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(httpsURLConnection.getOutputStream());
                        bufferedOutputStream.write(bArr);
                        bufferedOutputStream.flush();
                        bufferedOutputStream.close();
                        httpsURLConnection.setRequestMethod("POST");
                    } else {
                        httpsURLConnection.setRequestMethod("GET");
                    }
                    responseCode = httpsURLConnection.getResponseCode();
                } catch (Exception e) {
                    e = e;
                    e.printStackTrace();
                    if (httpsURLConnection != null) {
                    }
                }
            } catch (Throwable th) {
                th = th;
                httpsURLConnection2 = httpsURLConnection;
                if (httpsURLConnection2 != null) {
                    try {
                        httpsURLConnection2.disconnect();
                    } catch (Exception unused) {
                    }
                }
                throw th;
            }
        } catch (Exception e2) {
            e = e2;
            httpsURLConnection = null;
        } catch (Throwable th2) {
            th = th2;
            if (httpsURLConnection2 != null) {
            }
            throw th;
        }
        if (responseCode >= 200 && responseCode < 300) {
            String str2 = new String(inputStreamToByteArray(httpsURLConnection.getInputStream(), 1024), parseCharset(httpsURLConnection.getHeaderField("Content-Type"), "utf-8"));
            if (httpsURLConnection != null) {
                try {
                    httpsURLConnection.disconnect();
                } catch (Exception unused2) {
                }
            }
            return str2;
        }
        if (httpsURLConnection != null) {
            try {
                httpsURLConnection.disconnect();
            } catch (Exception unused3) {
            }
        }
        return null;
    }

    private static byte[] inputStreamToByteArray(InputStream inputStream, int i) throws IOException {
        if (inputStream == null) {
            return null;
        }
        if (i < 1) {
            i = 1;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        byte[] bArr = new byte[i];
        while (true) {
            int i2 = inputStream.read(bArr);
            if (i2 != -1) {
                byteArrayOutputStream.write(bArr, 0, i2);
            } else {
                byteArrayOutputStream.close();
                inputStream.close();
                return byteArrayOutputStream.toByteArray();
            }
        }
    }

    private static String parseCharset(String str, String str2) {
        if (str != null) {
            String[] strArrSplit = str.split(";", 0);
            for (int i = 1; i < strArrSplit.length; i++) {
                String[] strArrSplit2 = strArrSplit[i].trim().split(ContainerUtils.KEY_VALUE_DELIMITER, 0);
                if (strArrSplit2.length == 2 && strArrSplit2[0].equals("charset")) {
                    return strArrSplit2[1];
                }
            }
        }
        return str2;
    }

    private SSLSocketFactory systemDefaultSslSocketFactory(X509TrustManager x509TrustManager) throws IOException {
        try {
            SSLContext sSLContext = SSLContext.getInstance("TLS");
            sSLContext.init(null, new TrustManager[]{x509TrustManager}, null);
            return sSLContext.getSocketFactory();
        } catch (GeneralSecurityException e) {
            throw new IOException("No System TLS", e);
        }
    }

    private X509TrustManager systemDefaultTrustManager() throws IOException {
        try {
            TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
            trustManagerFactory.init((KeyStore) null);
            TrustManager[] trustManagers = trustManagerFactory.getTrustManagers();
            if (trustManagers.length != 1 || !(trustManagers[0] instanceof X509TrustManager)) {
                throw new IllegalStateException("Unexpected default trust managers:" + Arrays.toString(trustManagers));
            }
            return (X509TrustManager) trustManagers[0];
        } catch (GeneralSecurityException e) {
            throw new IOException("No System TLS", e);
        }
    }

    private byte[] getBody(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        try {
            return jSONObject.toString().getBytes("utf-8");
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }
}
