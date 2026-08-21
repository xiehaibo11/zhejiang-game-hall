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
    private TreeMap<String, String> headersMap = new TreeMap<>();
    private String method;

    class a extends Thread {
        final PayTokenEntity.PayloadEntity a;
        final String b;
        final String c;
        final String d;
        final HttpListener e;

        a(PayTokenEntity.PayloadEntity payloadEntity, String str, String str2, String str3, HttpListener httpListener) {
            this.a = payloadEntity;
            this.b = str;
            this.c = str2;
            this.d = str3;
            this.e = httpListener;
        }

        @Override
        public void run() throws Throwable {
            this.a.setAud(this.b);
            HttpURLConnection httpURLConnectionCreateHttpRequest = HttpHelperV2.this.createHttpRequest(this.b, this.c, SecurityUtil.getInstance().getPayToken(PayTokenEntity.getHeader, this.a.toString()), this.d);
            if (!HttpHelperV2.this.openUrl(httpURLConnectionCreateHttpRequest, this.e)) {
                this.e.onError(HttpHelperV2.this.errorCode, HttpHelperV2.this.errorMsg);
            } else if (httpURLConnectionCreateHttpRequest != null) {
                httpURLConnectionCreateHttpRequest.disconnect();
            }
        }
    }

    public HttpHelperV2(Context context) {
        this.context = context;
    }

    private void addHeader(HttpURLConnection httpURLConnection, String str, String str2) {
        this.headersMap.put("X-Signature", SecurityUtil.getInstance().getPaySignatue(str, str2));
        for (Map.Entry<String, String> entry : this.headersMap.entrySet()) {
            httpURLConnection.addRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    private String checkReasonCode(Map<String, List<String>> map) {
        for (Map.Entry<String, List<String>> entry : map.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (!TextUtils.isEmpty(entry.getKey()) && key.equalsIgnoreCase("X-Error-Code")) {
                Iterator<String> it = value.iterator();
                if (it.hasNext()) {
                    String next = it.next();
                    return TextUtils.isEmpty(next) ? "1" : next;
                }
            }
        }
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
    private HttpURLConnection createHttpRequest(String str, String str2, String str3, String str4) throws Throwable {
        Exception e;
        DataOutputStream dataOutputStream;
        DataOutputStream dataOutputStream2 = null;
        try {
            try {
                try {
                    URL url = new URL(str);
                    str = (HttpURLConnection) url.openConnection();
                    try {
                        str = str;
                        if (getProxy(this.context, url) != null) {
                            str = getProxy(this.context, url);
                        }
                        str.addRequestProperty("Authorization", "BEARER " + str3);
                        addHeader(str, str2, str4);
                        str.setReadTimeout(25000);
                        str.setConnectTimeout(15000);
                        str.setUseCaches(false);
                        str.setRequestProperty("Content-Type", "application/json,charset=UTF-8");
                        if (this.method.equals("POST")) {
                            str.setDoOutput(true);
                            str.setDoInput(true);
                        }
                        dataOutputStream = new DataOutputStream(str.getOutputStream());
                    } catch (Exception e2) {
                        e = e2;
                    }
                } catch (Exception e3) {
                    e = e3;
                    str = 0;
                }
            } catch (Throwable th) {
                th = th;
            }
        } catch (IOException e4) {
            e4.printStackTrace();
        }
        try {
            dataOutputStream.write(str2.getBytes("UTF-8"));
            dataOutputStream.flush();
            dataOutputStream.close();
            dataOutputStream.close();
            str = str;
        } catch (Exception e5) {
            e = e5;
            dataOutputStream2 = dataOutputStream;
            e.printStackTrace();
            this.errorCode = 601;
            this.errorMsg = "request data error " + e.getMessage();
            if (dataOutputStream2 != null) {
                dataOutputStream2.close();
                str = str;
            }
            return str;
        } catch (Throwable th2) {
            th = th2;
            dataOutputStream2 = dataOutputStream;
            if (dataOutputStream2 != null) {
                try {
                    dataOutputStream2.close();
                } catch (IOException e6) {
                    e6.printStackTrace();
                }
            }
            throw th;
        }
        return str;
    }

    private String getInputStreamString(InputStream inputStream) throws IOException {
        StringBuilder sb = new StringBuilder();
        byte[] bArr = new byte[1048576];
        while (true) {
            int i = inputStream.read(bArr);
            if (i == -1) {
                inputStream.close();
                return sb.toString();
            }
            sb.append(new String(bArr, 0, i));
        }
    }

    public static HttpURLConnection getProxy(Context context, URL url) {
        NetworkInfo activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
        if (activeNetworkInfo != null && activeNetworkInfo.isAvailable() && activeNetworkInfo.getType() == 0) {
            String defaultHost = Proxy.getDefaultHost();
            int defaultPort = Proxy.getDefaultPort();
            if (defaultHost != null && defaultPort != -1) {
                try {
                    return (HttpURLConnection) url.openConnection(new java.net.Proxy(Proxy.Type.HTTP, new InetSocketAddress(defaultHost, defaultPort)));
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
        return null;
    }

    private boolean openUrl(HttpURLConnection httpURLConnection, HttpListener httpListener) {
        int responseCode;
        InputStream inputStream = null;
        try {
            try {
                responseCode = httpURLConnection.getResponseCode();
            } catch (Exception e) {
                e = e;
                responseCode = 604;
            }
            try {
                if (responseCode != 200) {
                    this.errorCode = responseCode;
                    InputStream errorStream = httpURLConnection.getErrorStream();
                    this.errorMsg = getInputStreamString(errorStream);
                    Logger.i("错误信息：" + this.errorCode + "|" + this.errorMsg);
                    if (errorStream != null) {
                        try {
                            errorStream.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    return false;
                }
                InputStream inputStream2 = httpURLConnection.getInputStream();
                String strCheckReasonCode = checkReasonCode(httpURLConnection.getHeaderFields());
                String inputStreamString = getInputStreamString(inputStream2);
                if ("0".equalsIgnoreCase(strCheckReasonCode)) {
                    httpListener.onComplete(inputStreamString);
                    if (inputStream2 != null) {
                        try {
                            inputStream2.close();
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                    }
                    return true;
                }
                this.errorCode = Integer.parseInt(strCheckReasonCode);
                this.errorMsg = inputStreamString;
                Logger.i("错误信息：" + strCheckReasonCode + "|" + this.errorMsg);
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
                return false;
            } catch (Exception e5) {
                e = e5;
                this.errorCode = responseCode;
                this.errorMsg = e.getMessage();
                Logger.i("错误信息：", this.errorCode + "|" + this.errorMsg);
                return false;
            }
        } finally {
            if (0 != 0) {
                try {
                    inputStream.close();
                } catch (IOException e6) {
                    e6.printStackTrace();
                }
            }
        }
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void request(String str, String str2, PayTokenEntity.PayloadEntity payloadEntity, String str3, HttpListener httpListener) {
        if (payloadEntity == null) {
            Logger.i("  ---------  payloadEntity is null --------- ");
        } else {
            new a(payloadEntity, str, str2, str3, httpListener).start();
        }
    }

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }
}
