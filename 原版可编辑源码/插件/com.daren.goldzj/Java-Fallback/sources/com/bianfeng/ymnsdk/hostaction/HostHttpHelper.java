package com.bianfeng.ymnsdk.hostaction;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.util.Logger;
import com.qihoo360.replugin.RePlugin;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONException;
import org.json.JSONObject;

public class HostHttpHelper {
    public static final int CODE_NOT_NETWORK = 604;
    public static final int CODE_REQ_TIME_OUT = 600;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_THRIDSERVER_ERROR = 603;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    private Context context;
    private int errorCode;
    private String errorMsg;
    private TreeMap<String, String> headersMap;
    private String method;

    class a extends Thread {
        final String a;
        final String b;
        final HttpListener c;
        final HostHttpHelper d;

        a(HostHttpHelper r1, String r2, String r3, HttpListener r4) {
            this.d = r1;
            this.a = r2;
            this.b = r3;
            this.c = r4;
        }

        @Override
        public void run() {
            HttpURLConnection r0 = HostHttpHelper.access$000(this.d, this.a, this.b);
            if (HostHttpHelper.access$100(this.d, r0, this.c) == false) goto L7;
            if (r0 == null) goto L9;
            r0.disconnect();
            return;
        L9:
            return;
        L7:
            this.c.onError(HostHttpHelper.access$200(this.d), HostHttpHelper.access$300(this.d));
        }
    }

    public HostHttpHelper(Context r1) {
        this.context = r1;
        this.headersMap = new TreeMap();
    }

    static HttpURLConnection access$000(HostHttpHelper r0, String r1, String r2) {
        return r0.createHttpRequest(r1, r2);
    }

    static boolean access$100(HostHttpHelper r0, HttpURLConnection r1, HttpListener r2) {
        return r0.openUrl(r1, r2);
    }

    static int access$200(HostHttpHelper r0) {
        return r0.errorCode;
    }

    static String access$300(HostHttpHelper r0) {
        return r0.errorMsg;
    }

    private void addHeader(HttpURLConnection r4) {
        Iterator<Map.Entry<String, String>> r0 = this.headersMap.entrySet().iterator();
    L4:
        if (r0.hasNext() == false) goto L6;
        Map.Entry<String, String> r1 = r0.next();
        r4.addRequestProperty(r1.getKey(), r1.getValue());
        goto L4
    }

    private String checkReasonCode(String r2) throws JSONException {
        if (new JSONObject(r2).optString("code").equals("0") == false) goto L5;
        return "0";
    L5:
        return RePlugin.PROCESS_UI;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v0, types: [com.bianfeng.ymnsdk.hostaction.HostHttpHelper] */
    /* JADX WARN: Type inference failed for: r4v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r4v10, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r4v11 */
    /* JADX WARN: Type inference failed for: r4v12, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r4v15 */
    /* JADX WARN: Type inference failed for: r4v16 */
    /* JADX WARN: Type inference failed for: r4v17 */
    /* JADX WARN: Type inference failed for: r4v18 */
    /* JADX WARN: Type inference failed for: r4v19 */
    /* JADX WARN: Type inference failed for: r4v20 */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v5 */
    /* JADX WARN: Type inference failed for: r4v6, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r4v7 */
    /* JADX WARN: Type inference failed for: r4v8 */
    private HttpURLConnection createHttpRequest(String r4, String r5) {
        DataOutputStream r0 = null;
        URL r1 = new URL(r4);     // Catch: Throwable -> L21 IOException -> L23
        r4 = (HttpURLConnection) r1.openConnection();     // Catch: Throwable -> L21 IOException -> L23
        r4 = r4;
        if (getProxy(this.context, r1) == null) goto L9;
        r4 = getProxy(this.context, r1);     // Catch: IOException -> L7 Throwable -> L21
    L9:
        addHeader(r4);     // Catch: IOException -> L7 Throwable -> L21
        r4.setReadTimeout(25000);     // Catch: IOException -> L7 Throwable -> L21
        r4.setConnectTimeout(15000);     // Catch: IOException -> L7 Throwable -> L21
        r4.setUseCaches(false);     // Catch: IOException -> L7 Throwable -> L21
        r4.setRequestProperty("Content-Type", "application/json,charset=UTF-8");     // Catch: IOException -> L7 Throwable -> L21
        if (this.method.equals("POST") == false) goto L18;
        r4.setDoOutput(true);     // Catch: IOException -> L7 Throwable -> L21
        r4.setDoInput(true);     // Catch: IOException -> L7 Throwable -> L21
        DataOutputStream r12 = new DataOutputStream(r4.getOutputStream());     // Catch: IOException -> L7 Throwable -> L21
        r12.writeBytes(String.valueOf(r5));     // Catch: Throwable -> L14 IOException -> L16
        r12.flush();     // Catch: Throwable -> L14 IOException -> L16
        r12.close();     // Catch: Throwable -> L14 IOException -> L16
        r0 = r12;
        goto L18
    L16:
        IOException e = e;
        r0 = r12;
        r4 = r4;
    L25:
        e.printStackTrace();     // Catch: Throwable -> L21
        this.errorCode = 601;     // Catch: Throwable -> L21
        this.errorMsg = "request data error " + e.getMessage();     // Catch: Throwable -> L21
        if (r0 == null) goto L31;
        r0.close();     // Catch: IOException -> L29
        r4 = r4;
    L38:
    L31:
        return r4;
    L14:
        th = th;
        r0 = r12;
    L32:
        if (r0 != null) goto L42;
    L37:
        throw th;
    L42:
        r0.close();     // Catch: IOException -> L35
    L35:
        e = move-exception;
        e.printStackTrace();
    L18:
        if (r0 == null) goto L31;
        r0.close();     // Catch: IOException -> L29
        r4 = r4;
    L7:
        e = e;
        r4 = r4;
    L29:
        e = move-exception;
        e.printStackTrace();
    L23:
        e = move-exception;
        e = e;
        r4 = 0;
    L21:
        th = th;
        goto L32
    }

    private String getErrorMsg(String r2) throws JSONException {
        return new JSONObject(r2).optString("message");
    }

    private String getInputStreamString(InputStream r6) throws IOException {
        StringBuilder r0 = new StringBuilder();
        byte[] r1 = new byte[1048576];
    L3:
        int r2 = r6.read(r1);
        if (r2 == (-1)) goto L6;
        r0.append(new String(r1, 0, r2));
        goto L3
    L6:
        r6.close();
        return r0.toString();
    }

    public static HttpURLConnection getProxy(Context r3, URL r4) {
        NetworkInfo r32 = ((ConnectivityManager) r3.getSystemService("connectivity")).getActiveNetworkInfo();     // Catch: Exception -> L19
        if (r32 == null) goto L18;
        if (r32.isAvailable() == false) goto L18;
        if (r32.getType() != 0) goto L18;
        String r33 = Proxy.getDefaultHost();     // Catch: Exception -> L19
        int r1 = Proxy.getDefaultPort();     // Catch: Exception -> L19
        if (r33 == null) goto L18;
        if (r1 == (-1)) goto L18;
        InetSocketAddress r2 = new InetSocketAddress(r33, r1);     // Catch: IOException -> L16 Exception -> L19
        return (HttpURLConnection) r4.openConnection(new java.net.Proxy(Proxy.Type.HTTP, r2));
    L16:
        e = move-exception;
        e.printStackTrace();     // Catch: Exception -> L19
    L18:
        return null;
    }

    private boolean openUrl(HttpURLConnection r7, HttpListener r8) {
        if (r7 == null) goto L49;
        InputStream r2 = null;
        int r1 = r7.getResponseCode();     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        if (r1 != 200) goto L24;
        InputStream r22 = r7.getInputStream();     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        String r72 = getInputStreamString(r22);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        String r3 = checkReasonCode(r72);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        Logger.e("code参数" + r3);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        if ("0".equalsIgnoreCase(r3) == false) goto L17;
        r8.onComplete(r72);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        if (r22 != null) goto L57;
    L16:
        return true;
    L57:
        r22.close();     // Catch: IOException -> L14
    L14:
        e = move-exception;
        e.printStackTrace();
        goto L16
    L17:
        this.errorCode = Integer.parseInt(r3);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        this.errorMsg = getErrorMsg(r72);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        if (r22 != null) goto L50;
    L23:
        return false;
    L50:
        r22.close();     // Catch: IOException -> L21
    L21:
        e = move-exception;
        e.printStackTrace();
        goto L23
    L24:
        this.errorCode = r1;     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        InputStream r23 = r7.getErrorStream();     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        this.errorMsg = getInputStreamString(r23);     // Catch: Throwable -> L31 JSONException -> L33 Throwable -> L35
        if (r23 != null) goto L59;
    L30:
        return false;
    L59:
        r23.close();     // Catch: IOException -> L28
    L28:
        e = move-exception;
        e.printStackTrace();
    L31:
        th = move-exception;
        if (0 != 0) goto L55;
    L48:
        throw th;
    L55:
        r2.close();     // Catch: IOException -> L46
    L46:
        e = move-exception;
        e.printStackTrace();
    L35:
        e = move-exception;
        this.errorCode = 604;     // Catch: Throwable -> L31
        this.errorMsg = e.getMessage();     // Catch: Throwable -> L31
        if (0 != 0) goto L53;
    L42:
        return false;
    L53:
        r2.close();     // Catch: IOException -> L40
    L40:
        e = move-exception;
        e.printStackTrace();
        goto L42
    L49:
        return false;
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void request(String r2, String r3, HttpListener r4) {
        new a(this, r2, r3, r4).start();
    }

    public void setMethod(int r2) {
        if (r2 != 1) goto L5;
        String r22 = "GET";
    L6:
        this.method = r22;
        return;
    L5:
        r22 = "POST";
        goto L6
    }
}
