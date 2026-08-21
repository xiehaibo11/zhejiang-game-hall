package org.cocos2dx.lib;

import android.util.Log;
import com.bianfeng.libuniverse.Device;
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

public class Cocos2dxHttpURLConnection {
    private static final String POST_METHOD = "POST";
    private static final String PUT_METHOD = "PUT";
    private static String TAG = "Cocos2dxHttpURLConnection";

    static {
    }

    public Cocos2dxHttpURLConnection() {
    }

    static HttpURLConnection createHttpURLConnection(String r3) {
        HttpURLConnection r32 = (HttpURLConnection) new URL(r3).openConnection();     // Catch: Exception -> L4
        r32.setRequestProperty("Accept-Encoding", "identity");     // Catch: Exception -> L4
        r32.setDoInput(true);     // Catch: Exception -> L4
        return r32;
    L4:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "createHttpURLConnection:" + e.toString());
        return null;
    }

    static void setReadAndConnectTimeout(HttpURLConnection r0, int r1, int r2) {
        r0.setReadTimeout(r1);
        r0.setConnectTimeout(r2);
    }

    static void setRequestMethod(HttpURLConnection r2, String r3) {
        r2.setRequestMethod(r3);     // Catch: ProtocolException -> L8
        if (r3.equalsIgnoreCase(POST_METHOD) == false) goto L5;
    L6:
        r2.setDoOutput(true);     // Catch: ProtocolException -> L8
        return;
    L5:
        if (r3.equalsIgnoreCase(PUT_METHOD) == true) goto L6;
        return;
    L8:
        e = move-exception;
        Log.e(TAG, "setRequestMethod:" + e.toString());
    }

    static void setVerifySSL(HttpURLConnection r4, String r5) {
        if ((r4 instanceof HttpsURLConnection) == true) goto L5;
        return;
    L5:
        HttpsURLConnection r42 = (HttpsURLConnection) r4;
    L12:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "setVerifySSL:" + e.toString());
        return;
    L7:
        if (r5.startsWith("/") == false) goto L9;
        BufferedInputStream r0 = new BufferedInputStream(new FileInputStream(r5));     // Catch: Exception -> L12
    L10:
        Certificate r52 = CertificateFactory.getInstance("X.509").generateCertificate(r0);     // Catch: Exception -> L12
        System.out.println("ca=" + ((X509Certificate) r52).getSubjectDN());     // Catch: Exception -> L12
        r0.close();     // Catch: Exception -> L12
        KeyStore r02 = KeyStore.getInstance(KeyStore.getDefaultType());     // Catch: Exception -> L12
        r02.load(null, null);     // Catch: Exception -> L12
        r02.setCertificateEntry("ca", r52);     // Catch: Exception -> L12
        TrustManagerFactory r53 = TrustManagerFactory.getInstance(TrustManagerFactory.getDefaultAlgorithm());     // Catch: Exception -> L12
        r53.init(r02);     // Catch: Exception -> L12
        SSLContext r03 = SSLContext.getInstance("TLS");     // Catch: Exception -> L12
        r03.init(null, r53.getTrustManagers(), null);     // Catch: Exception -> L12
        r42.setSSLSocketFactory(r03.getSocketFactory());     // Catch: Exception -> L12
        return;
    L9:
        r0 = new BufferedInputStream(Cocos2dxHelper.getActivity().getAssets().open(r5.substring(7)));     // Catch: Exception -> L12
        goto L10
    }

    static void addRequestHeader(HttpURLConnection r0, String r1, String r2) {
        r0.setRequestProperty(r1, r2);
    }

    static int connect(HttpURLConnection r3) {
        r3.connect();     // Catch: Exception -> L4
        return 0;
    L4:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "connect" + e.toString());
        return 1;
    }

    static void disconnect(HttpURLConnection r0) {
        r0.disconnect();
    }

    static void sendRequest(HttpURLConnection r2, byte[] r3) {
        OutputStream r22 = r2.getOutputStream();     // Catch: Exception -> L7
        if (r3 == null) goto L5;
        r22.write(r3);     // Catch: Exception -> L7
        r22.flush();     // Catch: Exception -> L7
    L5:
        r22.close();     // Catch: Exception -> L7
        return;
    L7:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "sendRequest:" + e.toString());
    }

    static String getResponseHeaders(HttpURLConnection r6) {
        Map<String, List<String>> r62 = r6.getHeaderFields();
        if (r62 != null) goto L6;
        return null;
    L6:
        Iterator<Map.Entry<String, List<String>>> r63 = r62.entrySet().iterator();
        String r0 = "";
    L8:
        if (r63.hasNext() == false) goto L13;
        Map.Entry<String, List<String>> r1 = r63.next();
        String r2 = r1.getKey();
        if (r2 == null) goto L11;
        r0 = r0 + r2 + ":" + listToString(r1.getValue(), ",") + "\n";
        goto L8
    L11:
        r0 = r0 + listToString(r1.getValue(), ",") + "\n";
        goto L8
    L13:
        return r0;
    }

    static String getResponseHeaderByIdx(HttpURLConnection r3, int r4) {
        Map<String, List<String>> r32 = r3.getHeaderFields();
        if (r32 != null) goto L5;
        return null;
    L5:
        int r1 = 0;
        Iterator<Map.Entry<String, List<String>>> r33 = r32.entrySet().iterator();
    L7:
        if (r33.hasNext() == false) goto L19;
        Map.Entry<String, List<String>> r2 = r33.next();
        if (r1 == r4) goto L10;
        r1 = r1 + 1;
        goto L7
    L10:
        String r34 = r2.getKey();
        if (r34 != null) goto L18;
        return listToString(r2.getValue(), ",") + "\n";
    L18:
        return r34 + ":" + listToString(r2.getValue(), ",") + "\n";
    L19:
        return null;
    }

    static String getResponseHeaderByKey(HttpURLConnection r4, String r5) {
        if (r5 != null) goto L5;
        return null;
    L5:
        Map<String, List<String>> r1 = r4.getHeaderFields();
        if (r1 != null) goto L8;
        return null;
    L8:
        Iterator<Map.Entry<String, List<String>>> r12 = r1.entrySet().iterator();
    L10:
        if (r12.hasNext() == false) goto L22;
        Map.Entry<String, List<String>> r2 = r12.next();
        if (r5.equalsIgnoreCase(r2.getKey()) == false) goto L10;
        if ("set-cookie".equalsIgnoreCase(r5) == false) goto L17;
        return combinCookies(r2.getValue(), r4.getURL().getHost());
    L17:
        return listToString(r2.getValue(), ",");
    L22:
        return null;
    }

    static int getResponseHeaderByKeyInt(HttpURLConnection r0, String r1) {
        String r02 = r0.getHeaderField(r1);
        if (r02 != null) goto L7;
        return 0;
    L7:
        return Integer.parseInt(r02);
    }

    static byte[] getResponseContent(HttpURLConnection r7) {
        InputStream r1 = r7.getInputStream();     // Catch: Exception -> L12 IOException -> L15
        String r2 = r7.getContentEncoding();     // Catch: Exception -> L12 IOException -> L15
        if (r2 != null) goto L6;
    L28:
    L26:
        byte[] r22 = new byte[1024];     // Catch: Exception -> L23
        ByteArrayOutputStream r3 = new ByteArrayOutputStream();     // Catch: Exception -> L23
    L18:
        int r5 = r1.read(r22, 0, 1024);     // Catch: Exception -> L23
        if (r5 == (-1)) goto L21;
        r3.write(r22, 0, r5);     // Catch: Exception -> L23
        goto L18
    L21:
        byte[] r72 = r3.toByteArray();     // Catch: Exception -> L23
        r3.close();     // Catch: Exception -> L23
        return r72;
    L23:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "2 getResponseContent:" + e.toString());
        return null;
    L6:
        if (r2.equalsIgnoreCase("gzip") == false) goto L9;
        r1 = new GZIPInputStream(r7.getInputStream());     // Catch: Exception -> L12 IOException -> L15
        goto L28
    L9:
        if (r2.equalsIgnoreCase("deflate") == false) goto L28;
        r1 = new InflaterInputStream(r7.getInputStream());     // Catch: Exception -> L12 IOException -> L15
    L15:
        r1 = r7.getErrorStream();
    L12:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "1 getResponseContent: " + e.toString());
        return null;
    }

    static int getResponseCode(HttpURLConnection r3) {
        return r3.getResponseCode();
    L4:
        e = move-exception;
        e.printStackTrace();
        Log.e(TAG, "getResponseCode:" + e.toString());
        return 0;
    }

    static String getResponseMessage(HttpURLConnection r3) {
        return r3.getResponseMessage();
    L4:
        e = move-exception;
        e.printStackTrace();
        String r32 = e.toString();
        Log.e(TAG, "getResponseMessage: " + r32);
        return r32;
    }

    public static String listToString(List<String> r3, String r4) {
        if (r3 != null) goto L5;
        return null;
    L5:
        StringBuilder r0 = new StringBuilder();
        boolean r1 = false;
        Iterator<String> r32 = r3.iterator();
    L7:
        if (r32.hasNext() == false) goto L15;
        String r2 = r32.next();
        if (r1 == false) goto L11;
        r0.append(r4);
    L11:
        if (r2 != null) goto L13;
        r2 = "";
    L13:
        r0.append(r2);
        r1 = true;
        goto L7
    L15:
        return r0.toString();
    }

    public static String combinCookies(List<String> r17, String r18) {
        StringBuilder r0 = new StringBuilder();
        Iterator<String> r1 = r17.iterator();
        String r4 = "/";
        String r5 = "FALSE";
        String r6 = null;
        String r7 = null;
        String r8 = null;
        String r3 = r18;
    L4:
        if (r1.hasNext() == false) goto L35;
        String[] r9 = r1.next().split(";");
        int r10 = r9.length;
        int r11 = 0;
        String r12 = r8;
        String r82 = r7;
        String r72 = r6;
        String r62 = r5;
        String r52 = r4;
        String r42 = r3;
        int r32 = 0;
    L6:
        if (r32 >= r10) goto L30;
        String r13 = r9[r32];
        int r14 = r13.indexOf("=");
        if ((-1) == r14) goto L29;
        String[] r15 = new String[2];
        r15[r11] = r13.substring(r11, r14);
        r15[1] = r13.substring(r14 + 1);
        if ("expires".equalsIgnoreCase(r15[r11].trim()) == false) goto L15;
        r12 = str2Seconds(r15[1].trim());
    L13:
        r11 = 0;
        goto L29
    L15:
        if ("path".equalsIgnoreCase(r15[0].trim()) == false) goto L18;
        r52 = r15[1];
        goto L13
    L18:
        if ("secure".equalsIgnoreCase(r15[0].trim()) == false) goto L21;
        r62 = r15[1];
        goto L13
    L21:
        if ("domain".equalsIgnoreCase(r15[0].trim()) == false) goto L23;
        r42 = r15[1];
        goto L13
    L23:
        r11 = 0;
        if ("version".equalsIgnoreCase(r15[0].trim()) == true) goto L29;
        if ("max-age".equalsIgnoreCase(r15[0].trim()) == true) goto L29;
        r72 = r15[0];
        r82 = r15[1];
    L29:
        r32 = r32 + 1;
        goto L6
    L30:
        if (r42 != null) goto L32;
        r3 = Device.NETWORN_NONE;
    L33:
        r0.append(r3);
        r0.append('\t');
        r0.append("FALSE");
        r0.append('\t');
        r0.append(r52);
        r0.append('\t');
        r0.append(r62);
        r0.append('\t');
        r0.append(r12);
        r0.append("\t");
        r0.append(r72);
        r0.append("\t");
        r0.append(r82);
        r0.append('\n');
        r4 = r52;
        r5 = r62;
        r6 = r72;
        r7 = r82;
        r8 = r12;
        goto L4
    L32:
        r3 = r42;
        goto L33
    L35:
        return r0.toString();
    }

    private static String str2Seconds(String r4) {
        Calendar r0 = Calendar.getInstance();
        r0.setTime(new SimpleDateFormat("EEE, dd-MMM-yy hh:mm:ss zzz", Locale.US).parse(r4));     // Catch: ParseException -> L5
        long r02 = r0.getTimeInMillis() / 1000;     // Catch: ParseException -> L5
    L8:
        return Long.toString(r02);
    L5:
        e = move-exception;
        Log.e(TAG, "str2Seconds: " + e.toString());
        r02 = 0;
        goto L8
    }
}
