package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.action.HttpListener;
import com.bianfeng.ymnsdk.entity.PayTokenEntity;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

public class HttpHelperV2 {
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
    public static final String VERSION_SERVER = "v1";
    public static final String VERSION_SERVER_V2 = "v2";
    private Context context;
    private int errorCode;
    private String errorMsg;
    private TreeMap<String, String> headersMap;
    private String method;

    class a extends Thread {
        final PayTokenEntity.PayloadEntity a;
        final String b;
        final String c;
        final String d;
        final HttpListener e;
        final HttpHelperV2 f;

        a(HttpHelperV2 r1, PayTokenEntity.PayloadEntity r2, String r3, String r4, String r5, HttpListener r6) {
            this.f = r1;
            this.a = r2;
            this.b = r3;
            this.c = r4;
            this.d = r5;
            this.e = r6;
        }

        @Override
        public void run() {
            this.a.setAud(this.b);
            String r0 = SecurityUtil.getInstance().getPayToken(PayTokenEntity.getHeader, this.a.toString());
            HttpURLConnection r02 = HttpHelperV2.access$000(this.f, this.b, this.c, r0, this.d);
            if (HttpHelperV2.access$100(this.f, r02, this.e) == false) goto L6;
            if (r02 == null) goto L8;
            r02.disconnect();
            return;
        L8:
            return;
        L6:
            this.e.onError(HttpHelperV2.access$200(this.f), HttpHelperV2.access$300(this.f));
        }
    }

    public HttpHelperV2(Context r1) {
        this.context = r1;
        this.headersMap = new TreeMap();
    }

    static HttpURLConnection access$000(HttpHelperV2 r0, String r1, String r2, String r3, String r4) {
        return r0.createHttpRequest(r1, r2, r3, r4);
    }

    static boolean access$100(HttpHelperV2 r0, HttpURLConnection r1, HttpListener r2) {
        return r0.openUrl(r1, r2);
    }

    static int access$200(HttpHelperV2 r0) {
        return r0.errorCode;
    }

    static String access$300(HttpHelperV2 r0) {
        return r0.errorMsg;
    }

    private void addHeader(HttpURLConnection r3, String r4, String r5) {
        this.headersMap.put("X-Signature", SecurityUtil.getInstance().getPaySignatue(r4, r5));
        Iterator<Map.Entry<String, String>> r42 = this.headersMap.entrySet().iterator();
    L4:
        if (r42.hasNext() == false) goto L6;
        Map.Entry<String, String> r52 = r42.next();
        r3.addRequestProperty(r52.getKey(), r52.getValue());
        goto L4
    }

    private String checkReasonCode(Map<String, List<String>> r5) {
        Iterator<Map.Entry<String, List<String>>> r52 = r5.entrySet().iterator();
    L4:
        if (r52.hasNext() == false) goto L16;
        Map.Entry<String, List<String>> r0 = r52.next();
        String r2 = r0.getKey();
        List<String> r3 = r0.getValue();
        if (TextUtils.isEmpty(r0.getKey()) == true) goto L4;
        if (r2.equalsIgnoreCase("X-Error-Code") == false) goto L4;
        Iterator<String> r02 = r3.iterator();
        if (r02.hasNext() == false) goto L4;
        String r53 = r02.next();
        if (TextUtils.isEmpty(r53) == false) goto L15;
        return "1";
    L15:
        return r53;
    L16:
        return "1";
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0, types: [com.bianfeng.ymnsdk.actionv2.HttpHelperV2] */
    /* JADX WARN: Type inference failed for: r5v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v10, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r5v11 */
    /* JADX WARN: Type inference failed for: r5v12, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r5v15 */
    /* JADX WARN: Type inference failed for: r5v16 */
    /* JADX WARN: Type inference failed for: r5v17 */
    /* JADX WARN: Type inference failed for: r5v18 */
    /* JADX WARN: Type inference failed for: r5v2, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r5v5 */
    /* JADX WARN: Type inference failed for: r5v7 */
    /* JADX WARN: Type inference failed for: r5v8 */
    private HttpURLConnection createHttpRequest(String r5, String r6, String r7, String r8) {
        DataOutputStream r0 = null;
        URL r1 = new URL(r5);     // Catch: Throwable -> L22 Exception -> L24
        r5 = (HttpURLConnection) r1.openConnection();     // Catch: Throwable -> L22 Exception -> L24
        r5 = r5;
        if (getProxy(this.context, r1) == null) goto L11;
        r5 = getProxy(this.context, r1);     // Catch: Exception -> L8 Throwable -> L22
    L11:
        r5.addRequestProperty("Authorization", "BEARER " + r7);     // Catch: Exception -> L8 Throwable -> L22
        addHeader(r5, r6, r8);     // Catch: Exception -> L8 Throwable -> L22
        r5.setReadTimeout(25000);     // Catch: Exception -> L8 Throwable -> L22
        r5.setConnectTimeout(15000);     // Catch: Exception -> L8 Throwable -> L22
        r5.setUseCaches(false);     // Catch: Exception -> L8 Throwable -> L22
        r5.setRequestProperty("Content-Type", "application/json,charset=UTF-8");     // Catch: Exception -> L8 Throwable -> L22
        if (this.method.equals("POST") == false) goto L14;
        r5.setDoOutput(true);     // Catch: Exception -> L8 Throwable -> L22
        r5.setDoInput(true);     // Catch: Exception -> L8 Throwable -> L22
    L14:
        DataOutputStream r72 = new DataOutputStream(r5.getOutputStream());     // Catch: Exception -> L8 Throwable -> L22
        r72.write(r6.getBytes("UTF-8"));     // Catch: Throwable -> L18 Exception -> L20
        r72.flush();     // Catch: Throwable -> L18 Exception -> L20
        r72.close();     // Catch: Throwable -> L18 Exception -> L20
        r72.close();     // Catch: IOException -> L30
        r5 = r5;
    L41:
    L32:
        return r5;
    L20:
        Exception e = e;
        r0 = r72;
    L26:
        e.printStackTrace();     // Catch: Throwable -> L22
        this.errorCode = 601;     // Catch: Throwable -> L22
        this.errorMsg = "request data error " + e.getMessage();     // Catch: Throwable -> L22
        if (r0 == null) goto L32;
        r0.close();     // Catch: IOException -> L30
        r5 = r5;
    L18:
        th = th;
        r0 = r72;
    L33:
        if (r0 != null) goto L46;
    L38:
        throw th;
    L46:
        r0.close();     // Catch: IOException -> L36
    L36:
        e = move-exception;
        e.printStackTrace();
    L8:
        e = e;
    L24:
        e = move-exception;
        e = e;
        r5 = 0;
    L22:
        th = th;
    L30:
        e = move-exception;
        e.printStackTrace();
        goto L32
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
        NetworkInfo r32 = ((ConnectivityManager) r3.getSystemService("connectivity")).getActiveNetworkInfo();
        if (r32 != null) goto L5;
    L17:
        return null;
    L5:
        if (r32.isAvailable() == false) goto L17;
        if (r32.getType() != 0) goto L17;
        String r33 = Proxy.getDefaultHost();
        int r1 = Proxy.getDefaultPort();
        if (r33 == null) goto L17;
        if (r1 == (-1)) goto L17;
        InetSocketAddress r2 = new InetSocketAddress(r33, r1);     // Catch: IOException -> L15
        return (HttpURLConnection) r4.openConnection(new java.net.Proxy(Proxy.Type.HTTP, r2));
    L15:
        e = move-exception;
        e.printStackTrace();
        goto L17
    }

    private boolean openUrl(HttpURLConnection r8, HttpListener r9) {
        InputStream r3 = null;
        int r4 = r8.getResponseCode();     // Catch: Throwable -> L32 Exception -> L34
        if (r4 != 200) goto L23;
        InputStream r32 = r8.getInputStream();     // Catch: Exception -> L30 Throwable -> L32
        String r82 = checkReasonCode(r8.getHeaderFields());     // Catch: Exception -> L30 Throwable -> L32
        String r5 = getInputStreamString(r32);     // Catch: Exception -> L30 Throwable -> L32
        if ("0".equalsIgnoreCase(r82) == false) goto L16;
        r9.onComplete(r5);     // Catch: Exception -> L30 Throwable -> L32
        if (r32 != null) goto L55;
    L15:
        return true;
    L55:
        r32.close();     // Catch: IOException -> L13
    L13:
        e = move-exception;
        e.printStackTrace();
        goto L15
    L16:
        this.errorCode = Integer.parseInt(r82);     // Catch: Exception -> L30 Throwable -> L32
        this.errorMsg = r5;     // Catch: Exception -> L30 Throwable -> L32
        Logger.i("错误信息：" + r82 + "|" + this.errorMsg);     // Catch: Exception -> L30 Throwable -> L32
        if (r32 != null) goto L58;
    L22:
        return false;
    L58:
        r32.close();     // Catch: IOException -> L20
    L20:
        e = move-exception;
        e.printStackTrace();
        goto L22
    L23:
        this.errorCode = r4;     // Catch: Exception -> L30 Throwable -> L32
        InputStream r33 = r8.getErrorStream();     // Catch: Exception -> L30 Throwable -> L32
        this.errorMsg = getInputStreamString(r33);     // Catch: Exception -> L30 Throwable -> L32
        Logger.i("错误信息：" + this.errorCode + "|" + this.errorMsg);     // Catch: Exception -> L30 Throwable -> L32
        if (r33 != null) goto L53;
    L29:
        return false;
    L53:
        r33.close();     // Catch: IOException -> L27
    L27:
        e = move-exception;
        e.printStackTrace();
    L30:
        e = e;
    L36:
        this.errorCode = r4;     // Catch: Throwable -> L32
        this.errorMsg = e.getMessage();     // Catch: Throwable -> L32
        Logger.i("错误信息：", this.errorCode + "|" + this.errorMsg);     // Catch: Throwable -> L32
        if (0 != 0) goto L49;
    L42:
        return false;
    L49:
        r3.close();     // Catch: IOException -> L40
    L40:
        e = move-exception;
        e.printStackTrace();
    L34:
        e = e;
        r4 = 604;
    L32:
        th = move-exception;
        if (0 != 0) goto L60;
    L48:
        throw th;
    L60:
        r3.close();     // Catch: IOException -> L46
    L46:
        e = move-exception;
        e.printStackTrace();
        goto L48
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void request(String r9, String r10, PayTokenEntity.PayloadEntity r11, String r12, HttpListener r13) {
        if (r11 != null) goto L5;
        Logger.i("  ---------  payloadEntity is null --------- ");
        return;
    L5:
        new a(this, r11, r9, r10, r12, r13).start();
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
