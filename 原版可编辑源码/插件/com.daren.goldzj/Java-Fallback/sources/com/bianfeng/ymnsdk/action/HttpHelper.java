package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.net.URLDecoder;
import java.net.URLEncoder;
import java.util.Iterator;
import java.util.Map;

public class HttpHelper {
    public static final int CODE_REQ_TIME_OUT = 600;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    public static final String VERSION_SERVER = "v1";
    private Context context;
    private int errorCode;
    private String errorMsg;
    private String method;

    class a implements Runnable {
        final String a;
        final String b;
        final HttpListener c;
        final HttpHelper d;

        class a extends TypeToken<Map<String, Object>> {
            a(a r1) {
            }
        }

        a(HttpHelper r1, String r2, String r3, HttpListener r4) {
            this.d = r1;
            this.a = r2;
            this.b = r3;
            this.c = r4;
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v0, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r1v1 */
        /* JADX WARN: Type inference failed for: r1v11, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v14, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v2 */
        /* JADX WARN: Type inference failed for: r1v21 */
        /* JADX WARN: Type inference failed for: r1v22 */
        /* JADX WARN: Type inference failed for: r1v23 */
        /* JADX WARN: Type inference failed for: r1v24 */
        /* JADX WARN: Type inference failed for: r1v25 */
        /* JADX WARN: Type inference failed for: r1v3 */
        /* JADX WARN: Type inference failed for: r1v5, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r1v7 */
        /* JADX WARN: Type inference failed for: r2v1 */
        /* JADX WARN: Type inference failed for: r2v3, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r2v5 */
        /* JADX WARN: Type inference failed for: r9v0 */
        @Override
        public void run() {
            ?? r1 = "=";
            InputStream r2 = null;
        L68:
            e = move-exception;
            Exception e = e;
            ?? r12 = 0;
        L70:
            DataOutputStream r0 = null;
            ?? r22 = r12;
            InputStream r13 = null;
        L96:
            e.printStackTrace();     // Catch: Throwable -> L83
            this.c.onError(e.hashCode(), e.getMessage());     // Catch: Throwable -> L83
            if (r22 != 0) goto L100;
        L76:
            if (r0 == null) goto L78;
            r0.close();     // Catch: Exception -> L74
        L78:
            if (r13 == null) goto L120;
            r13.close();     // Catch: Exception -> L74
            return;
        L74:
            e = move-exception;
            e.printStackTrace();
            return;
        L120:
            return;
        L100:
            r22.disconnect();     // Catch: Exception -> L74
        L83:
            Throwable th = th;
            ?? r9 = r22;
            r2 = r13;
            r1 = r9;
        L85:
            if (r1 != 0) goto L104;
        L89:
            if (r0 == null) goto L91;
            r0.close();     // Catch: Exception -> L87
        L91:
            if (r2 == null) goto L95;
            r2.close();     // Catch: Exception -> L87
        L87:
            e = move-exception;
            e.printStackTrace();
        L95:
            throw th;
        L104:
            r1.disconnect();     // Catch: Exception -> L87
        L66:
            th = move-exception;
            th = th;
            r0 = null;
            r1 = 0;
            goto L85
        L107:
            if (HttpHelper.access$000(this.d).equals("GET") == true) goto L6;
            URL r02 = new URL(this.b);     // Catch: Throwable -> L66 Exception -> L68
            r1 = (HttpURLConnection) r02.openConnection();     // Catch: Throwable -> L66 Exception -> L68
            if (HttpHelper.getProxy(HttpHelper.access$100(this.d), r02) == null) goto L27;
            r1 = HttpHelper.getProxy(HttpHelper.access$100(this.d), r02);     // Catch: Throwable -> L62 Exception -> L64
        L27:
            r1.setReadTimeout(25000);     // Catch: Throwable -> L62 Exception -> L64
            r1.setConnectTimeout(15000);     // Catch: Throwable -> L62 Exception -> L64
            r1.setUseCaches(false);     // Catch: Throwable -> L62 Exception -> L64
            r1.setRequestProperty("Content-Type", "application/json;charset=UTF-8");     // Catch: Throwable -> L62 Exception -> L64
            if (HttpHelper.access$000(this.d).equals("POST") == false) goto L31;
            r1.setDoOutput(true);     // Catch: Throwable -> L62 Exception -> L64
            r1.setDoInput(true);     // Catch: Throwable -> L62 Exception -> L64
        L31:
            if (r02.getHost().isEmpty() == false) goto L38;
            if (r1 == 0) goto L116;
            r1.disconnect();     // Catch: Exception -> L35
            return;
        L35:
            e = move-exception;
            e.printStackTrace();
            return;
        L116:
            return;
        L38:
            r0 = new DataOutputStream(r1.getOutputStream());     // Catch: Throwable -> L62 Exception -> L64
            r0.write(String.valueOf(this.a).getBytes("UTF-8"));     // Catch: Throwable -> L58 Exception -> L60
            r0.flush();     // Catch: Throwable -> L58 Exception -> L60
            r0.close();     // Catch: Throwable -> L58 Exception -> L60
            ?? r14 = r1;
        L41:
            if (r14.getResponseCode() != 200) goto L47;
            r2 = r14.getInputStream();     // Catch: Throwable -> L58 Exception -> L60
            byte[] r3 = new byte[1048576];     // Catch: Throwable -> L58 Exception -> L60
            StringBuilder r5 = new StringBuilder();     // Catch: Throwable -> L58 Exception -> L60
        L43:
            int r6 = r2.read(r3);     // Catch: Throwable -> L58 Exception -> L60
            if (r6 == (-1)) goto L46;
            r5.append(new String(r3, 0, r6));     // Catch: Throwable -> L58 Exception -> L60
            goto L43
        L46:
            r2.close();     // Catch: Throwable -> L58 Exception -> L60
            this.c.onComplete(SecurityUtil.getInstance().urlDecoder(r5.toString()));     // Catch: Throwable -> L58 Exception -> L60
        L48:
            if (r14 != 0) goto L102;
        L52:
            if (r0 == null) goto L54;
            r0.close();     // Catch: Exception -> L50
        L54:
            if (r2 == null) goto L118;
            r2.close();     // Catch: Exception -> L50
            return;
        L50:
            e = move-exception;
            e.printStackTrace();
            return;
        L118:
            return;
        L102:
            r14.disconnect();     // Catch: Exception -> L50
            goto L52
        L47:
            this.c.onError(r14.getResponseCode(), r14.getResponseMessage());     // Catch: Throwable -> L58 Exception -> L60
        L60:
            e = e;
            r22 = r1;
            r13 = null;
        L58:
            th = th;
            goto L85
        L6:
            if (this.a != null) goto L9;
            URL r15 = new URL(this.b);     // Catch: Throwable -> L66 Exception -> L68
        L20:
            HttpURLConnection r16 = (HttpURLConnection) r15.openConnection();     // Catch: Throwable -> L66 Exception -> L68
            r16.setRequestMethod("GET");     // Catch: Throwable -> L62 Exception -> L64
            r16.setConnectTimeout(10000);     // Catch: Throwable -> L62 Exception -> L64
            r0 = null;
            r14 = r16;
            goto L41
        L9:
            if (this.a.isEmpty() == true) goto L19;
            Map r32 = (Map) new Gson().fromJson(URLDecoder.decode(this.a), new a(this).getType());     // Catch: Throwable -> L66 Exception -> L68
            Iterator r52 = r32.keySet().iterator();     // Catch: Throwable -> L66 Exception -> L68
            String r62 = "?";
        L13:
            if (r52.hasNext() == false) goto L18;
            Object r7 = r52.next();     // Catch: Throwable -> L66 Exception -> L68
            if (r62.contains("=") == true) goto L16;
            r62 = r62 + r7.toString() + "=" + URLEncoder.encode(r32.get(r7.toString()).toString());     // Catch: Throwable -> L66 Exception -> L68
            goto L13
        L16:
            r62 = r62 + "&" + r7.toString() + "=" + URLEncoder.encode(r32.get(r7.toString()).toString());     // Catch: Throwable -> L66 Exception -> L68
            goto L13
        L18:
            r15 = new URL(this.b + r62);     // Catch: Throwable -> L66 Exception -> L68
            goto L20
        L19:
            r15 = new URL(this.b);     // Catch: Throwable -> L66 Exception -> L68
        L64:
            e = move-exception;
            e = e;
            r12 = r1;
        L62:
            th = move-exception;
            th = th;
            r0 = null;
            goto L85
        }
    }

    public HttpHelper(Context r2) {
        this.method = "POST";
        this.context = r2;
    }

    static String access$000(HttpHelper r0) {
        return r0.method;
    }

    static Context access$100(HttpHelper r0) {
        return r0.context;
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

    public void createHttpRequest(String r3, String r4, HttpListener r5) {
        new Thread(new a(this, r4, r3, r5)).start();
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
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
