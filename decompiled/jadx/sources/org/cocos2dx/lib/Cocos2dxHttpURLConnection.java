package org.cocos2dx.lib;

import android.util.Log;
import com.bianfeng.libuniverse.Device;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import com.xiaomi.mipush.sdk.Constants;
import cz.msebera.android.httpclient.cookie.ClientCookie;
import cz.msebera.android.httpclient.protocol.HTTP;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.ProtocolException;
import java.net.URL;
import java.security.KeyStore;
import java.security.cert.Certificate;
import java.security.cert.CertificateFactory;
import java.security.cert.X509Certificate;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.zip.GZIPInputStream;
import java.util.zip.InflaterInputStream;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.TrustManagerFactory;

/* JADX INFO: loaded from: classes4.dex */
public class Cocos2dxHttpURLConnection {
    private static final String POST_METHOD = "POST";
    private static final String PUT_METHOD = "PUT";

    static HttpURLConnection createHttpURLConnection(String str) {
        try {
            HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(str).openConnection();
            httpURLConnection.setRequestProperty("Accept-Encoding", HTTP.IDENTITY_CODING);
            httpURLConnection.setDoInput(true);
            return httpURLConnection;
        } catch (Exception e) {
            Log.e("URLConnection exception", e.toString());
            return null;
        }
    }

    static void setReadAndConnectTimeout(HttpURLConnection httpURLConnection, int i, int i2) {
        httpURLConnection.setReadTimeout(i);
        httpURLConnection.setConnectTimeout(i2);
    }

    static void setRequestMethod(HttpURLConnection httpURLConnection, String str) {
        try {
            httpURLConnection.setRequestMethod(str);
            if (str.equalsIgnoreCase("POST") || str.equalsIgnoreCase("PUT")) {
                httpURLConnection.setDoOutput(true);
            }
        } catch (ProtocolException e) {
            Log.e("URLConnection exception", e.toString());
        }
    }

    static void setVerifySSL(HttpURLConnection httpURLConnection, String str) {
        BufferedInputStream bufferedInputStream;
        if (httpURLConnection instanceof HttpsURLConnection) {
            HttpsURLConnection httpsURLConnection = (HttpsURLConnection) httpURLConnection;
            try {
                if (str.startsWith("/")) {
                    bufferedInputStream = new BufferedInputStream(new FileInputStream(str));
                } else {
                    bufferedInputStream = new BufferedInputStream(Cocos2dxHelper.getActivity().getAssets().open(str.substring(7)));
                }
                Certificate certificateGenerateCertificate = CertificateFactory.getInstance("X.509").generateCertificate(bufferedInputStream);
                System.out.println("ca=" + ((X509Certificate) certificateGenerateCertificate).getSubjectDN());
                bufferedInputStream.close();
                KeyStore keyStore = KeyStore.getInstance(KeyStore.getDefaultType());
                keyStore.load(null, null);
                keyStore.setCertificateEntry(DownloadCommon.DOWNLOAD_REPORT_CANCEL, certificateGenerateCertificate);
                TrustManagerFactory trustManagerFactory = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());
                trustManagerFactory.init(keyStore);
                SSLContext sSLContext = SSLContext.getInstance("TLS");
                sSLContext.init(null, trustManagerFactory.getTrustManagers(), null);
                httpsURLConnection.setSSLSocketFactory(sSLContext.getSocketFactory());
            } catch (Exception e) {
                Log.e("URLConnection exception", e.toString());
            }
        }
    }

    static void addRequestHeader(HttpURLConnection httpURLConnection, String str, String str2) {
        httpURLConnection.setRequestProperty(str, str2);
    }

    static int connect(HttpURLConnection httpURLConnection) {
        try {
            httpURLConnection.connect();
            return 0;
        } catch (IOException e) {
            Log.e("cocos2d-x debug info", "come in connect");
            Log.e("cocos2d-x debug info", e.toString());
            return 1;
        }
    }

    static void disconnect(HttpURLConnection httpURLConnection) {
        httpURLConnection.disconnect();
    }

    static void sendRequest(HttpURLConnection httpURLConnection, byte[] bArr) {
        try {
            OutputStream outputStream = httpURLConnection.getOutputStream();
            if (bArr != null) {
                outputStream.write(bArr);
                outputStream.flush();
            }
            outputStream.close();
        } catch (IOException e) {
            Log.e("URLConnection exception", e.toString());
        }
    }

    static String getResponseHeaders(HttpURLConnection httpURLConnection) {
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        if (headerFields == null) {
            return null;
        }
        String str = "";
        for (Map.Entry<String, List<String>> entry : headerFields.entrySet()) {
            String key = entry.getKey();
            str = key == null ? str + listToString(entry.getValue(), Constants.ACCEPT_TIME_SEPARATOR_SP) + "\n" : str + key + Constants.COLON_SEPARATOR + listToString(entry.getValue(), Constants.ACCEPT_TIME_SEPARATOR_SP) + "\n";
        }
        return str;
    }

    static String getResponseHeaderByIdx(HttpURLConnection httpURLConnection, int i) {
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        if (headerFields == null) {
            return null;
        }
        int i2 = 0;
        for (Map.Entry<String, List<String>> entry : headerFields.entrySet()) {
            if (i2 == i) {
                String key = entry.getKey();
                if (key == null) {
                    return listToString(entry.getValue(), Constants.ACCEPT_TIME_SEPARATOR_SP) + "\n";
                }
                return key + Constants.COLON_SEPARATOR + listToString(entry.getValue(), Constants.ACCEPT_TIME_SEPARATOR_SP) + "\n";
            }
            i2++;
        }
        return null;
    }

    static String getResponseHeaderByKey(HttpURLConnection httpURLConnection, String str) {
        Map<String, List<String>> headerFields;
        if (str == null || (headerFields = httpURLConnection.getHeaderFields()) == null) {
            return null;
        }
        for (Map.Entry<String, List<String>> entry : headerFields.entrySet()) {
            if (str.equalsIgnoreCase(entry.getKey())) {
                if ("set-cookie".equalsIgnoreCase(str)) {
                    return combinCookies(entry.getValue(), httpURLConnection.getURL().getHost());
                }
                return listToString(entry.getValue(), Constants.ACCEPT_TIME_SEPARATOR_SP);
            }
        }
        return null;
    }

    static int getResponseHeaderByKeyInt(HttpURLConnection httpURLConnection, String str) {
        String headerField = httpURLConnection.getHeaderField(str);
        if (headerField == null) {
            return 0;
        }
        return Integer.parseInt(headerField);
    }

    static byte[] getResponseContent(HttpURLConnection httpURLConnection) {
        InputStream errorStream;
        try {
            errorStream = httpURLConnection.getInputStream();
            String contentEncoding = httpURLConnection.getContentEncoding();
            if (contentEncoding != null) {
                if (contentEncoding.equalsIgnoreCase("gzip")) {
                    errorStream = new GZIPInputStream(httpURLConnection.getInputStream());
                } else if (contentEncoding.equalsIgnoreCase("deflate")) {
                    errorStream = new InflaterInputStream(httpURLConnection.getInputStream());
                }
            }
        } catch (IOException unused) {
            errorStream = httpURLConnection.getErrorStream();
        } catch (Exception e) {
            Log.e("URLConnection exception", e.toString());
            return null;
        }
        try {
            byte[] bArr = new byte[1024];
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
            while (true) {
                int i = errorStream.read(bArr, 0, 1024);
                if (i != -1) {
                    byteArrayOutputStream.write(bArr, 0, i);
                } else {
                    byte[] byteArray = byteArrayOutputStream.toByteArray();
                    byteArrayOutputStream.close();
                    return byteArray;
                }
            }
        } catch (Exception e2) {
            Log.e("URLConnection exception", e2.toString());
            return null;
        }
    }

    static int getResponseCode(HttpURLConnection httpURLConnection) {
        try {
            return httpURLConnection.getResponseCode();
        } catch (IOException e) {
            Log.e("URLConnection exception", e.toString());
            return 0;
        }
    }

    static String getResponseMessage(HttpURLConnection httpURLConnection) {
        try {
            return httpURLConnection.getResponseMessage();
        } catch (IOException e) {
            String string = e.toString();
            Log.e("URLConnection exception", string);
            return string;
        }
    }

    public static String listToString(List<String> list, String str) {
        if (list == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        boolean z = false;
        for (String str2 : list) {
            if (z) {
                sb.append(str);
            }
            if (str2 == null) {
                str2 = "";
            }
            sb.append(str2);
            z = true;
        }
        return sb.toString();
    }

    public static String combinCookies(List<String> list, String str) {
        StringBuilder sb = new StringBuilder();
        Iterator<String> it = list.iterator();
        String str2 = "/";
        String str3 = "FALSE";
        String str4 = null;
        String str5 = null;
        String str6 = null;
        String str7 = str;
        while (it.hasNext()) {
            int i = 0;
            String strStr2Seconds = str6;
            String str8 = str5;
            String str9 = str4;
            String str10 = str3;
            String str11 = str2;
            String str12 = str7;
            for (String str13 : it.next().split(";")) {
                int iIndexOf = str13.indexOf(ContainerUtils.KEY_VALUE_DELIMITER);
                if (-1 != iIndexOf) {
                    String[] strArr = new String[2];
                    strArr[i] = str13.substring(i, iIndexOf);
                    strArr[1] = str13.substring(iIndexOf + 1);
                    if (ClientCookie.EXPIRES_ATTR.equalsIgnoreCase(strArr[i].trim())) {
                        strStr2Seconds = str2Seconds(strArr[1].trim());
                    } else if ("path".equalsIgnoreCase(strArr[0].trim())) {
                        str11 = strArr[1];
                    } else if (ClientCookie.SECURE_ATTR.equalsIgnoreCase(strArr[0].trim())) {
                        str10 = strArr[1];
                    } else if ("domain".equalsIgnoreCase(strArr[0].trim())) {
                        str12 = strArr[1];
                    } else {
                        i = 0;
                        if (!"version".equalsIgnoreCase(strArr[0].trim()) && !"max-age".equalsIgnoreCase(strArr[0].trim())) {
                            str9 = strArr[0];
                            str8 = strArr[1];
                        }
                    }
                    i = 0;
                }
            }
            str7 = str12 == null ? Device.NETWORN_NONE : str12;
            sb.append(str7);
            sb.append('\t');
            sb.append("FALSE");
            sb.append('\t');
            sb.append(str11);
            sb.append('\t');
            sb.append(str10);
            sb.append('\t');
            sb.append(strStr2Seconds);
            sb.append("\t");
            sb.append(str9);
            sb.append("\t");
            sb.append(str8);
            sb.append('\n');
            str2 = str11;
            str3 = str10;
            str4 = str9;
            str5 = str8;
            str6 = strStr2Seconds;
        }
        return sb.toString();
    }

    private static String str2Seconds(String str) {
        long timeInMillis;
        Calendar calendar = Calendar.getInstance();
        try {
            calendar.setTime(new SimpleDateFormat("EEE, dd-MMM-yy hh:mm:ss zzz", Locale.US).parse(str));
            timeInMillis = calendar.getTimeInMillis() / 1000;
        } catch (ParseException e) {
            Log.e("URLConnection exception", e.toString());
            timeInMillis = 0;
        }
        return Long.toString(timeInMillis);
    }
}
