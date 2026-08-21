package com.bianfeng.paylib.action;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.paylib.utils.YmnURLManager;
import com.bianfeng.utilslib.UtilsSdk;
import cz.msebera.android.httpclient.HttpHeaders;
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

/* JADX INFO: loaded from: classes.dex */
public class HttpHelper {
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
    public static final String VERSION_SERVER_V2 = "v2";
    private Context context;
    private int errorCode;
    private String errorMsg;
    private String method;
    private final String TAG = "HttpHelper";
    private TreeMap<String, String> headersMap = new TreeMap<>();

    public HttpHelper(Context context) {
        this.context = context;
    }

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
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

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0, types: [com.bianfeng.paylib.action.HttpHelper] */
    /* JADX WARN: Type inference failed for: r5v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r5v1 */
    /* JADX WARN: Type inference failed for: r5v10 */
    /* JADX WARN: Type inference failed for: r5v11, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r5v14 */
    /* JADX WARN: Type inference failed for: r5v15 */
    /* JADX WARN: Type inference failed for: r5v16 */
    /* JADX WARN: Type inference failed for: r5v17 */
    /* JADX WARN: Type inference failed for: r5v3 */
    /* JADX WARN: Type inference failed for: r5v5, types: [java.net.HttpURLConnection] */
    /* JADX WARN: Type inference failed for: r5v6 */
    /* JADX WARN: Type inference failed for: r5v7 */
    /* JADX WARN: Type inference failed for: r5v9, types: [java.net.HttpURLConnection] */
    public HttpURLConnection createHttpRequest(String str, String str2) throws Throwable {
        DataOutputStream dataOutputStream = null;
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
                        str.setReadTimeout(25000);
                        str.setConnectTimeout(15000);
                        str.setUseCaches(false);
                        str.addRequestProperty("encoding", "UTF-8");
                        str.addRequestProperty(HttpHeaders.ACCEPT_CHARSET, "UTF-8");
                        str.setRequestProperty("Content-Type", "application/json;charset=UTF-8");
                        addHeader(str);
                        if (this.method.equals("POST")) {
                            str.setDoOutput(true);
                            str.setDoInput(true);
                            DataOutputStream dataOutputStream2 = new DataOutputStream(str.getOutputStream());
                            try {
                                dataOutputStream2.write(str2.getBytes("UTF-8"));
                                dataOutputStream2.flush();
                                dataOutputStream2.close();
                                dataOutputStream = dataOutputStream2;
                            } catch (IOException e) {
                                e = e;
                                dataOutputStream = dataOutputStream2;
                                e.printStackTrace();
                                this.errorCode = 601;
                                this.errorMsg = "request data error " + e.getMessage();
                                Log.i("HttpHelper", "createHttpRequest: " + this.errorMsg);
                                if (dataOutputStream != null) {
                                    dataOutputStream.close();
                                    str = str;
                                }
                                return str;
                            } catch (Throwable th) {
                                th = th;
                                dataOutputStream = dataOutputStream2;
                                if (dataOutputStream != null) {
                                    try {
                                        dataOutputStream.close();
                                    } catch (IOException e2) {
                                        e2.printStackTrace();
                                    }
                                }
                                throw th;
                            }
                        }
                    } catch (IOException e3) {
                        e = e3;
                    }
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            } catch (Throwable th2) {
                th = th2;
            }
        } catch (IOException e5) {
            e = e5;
            str = 0;
        }
        if (dataOutputStream != null) {
            dataOutputStream.close();
            str = str;
        }
        return str;
    }

    private void addHeader(HttpURLConnection httpURLConnection) {
        for (Map.Entry<String, String> entry : this.headersMap.entrySet()) {
            UtilsSdk.getLogger().i("字符串----" + entry.getKey() + "---" + entry.getValue());
            httpURLConnection.addRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [com.bianfeng.paylib.action.HttpHelper$1] */
    public void request(final String str, final String str2, final HttpListener httpListener) {
        new Thread() { // from class: com.bianfeng.paylib.action.HttpHelper.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() throws Throwable {
                for (String str3 : YmnURLManager.getPayUrl()) {
                    String str4 = str3 + str;
                    UtilsSdk.getLogger().i("getPayUrl----" + str4);
                    HttpURLConnection httpURLConnectionCreateHttpRequest = HttpHelper.this.createHttpRequest(str4, str2);
                    if (HttpHelper.this.openUrl(httpURLConnectionCreateHttpRequest, httpListener)) {
                        if (httpURLConnectionCreateHttpRequest != null) {
                            httpURLConnectionCreateHttpRequest.disconnect();
                            return;
                        }
                        return;
                    }
                }
                UtilsSdk.getLogger().i("响应数据----" + HttpHelper.this.errorMsg + "---" + HttpHelper.this.errorCode);
                httpListener.onError(HttpHelper.this.errorCode, HttpHelper.this.errorMsg);
            }
        }.start();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean openUrl(HttpURLConnection httpURLConnection, HttpListener httpListener) {
        int responseCode;
        InputStream inputStream = null;
        try {
            try {
                responseCode = httpURLConnection.getResponseCode();
            } finally {
                if (0 != 0) {
                    try {
                        inputStream.close();
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        } catch (IOException e2) {
            e = e2;
            responseCode = 604;
        }
        try {
            if (responseCode != 200) {
                this.errorCode = responseCode;
                InputStream errorStream = httpURLConnection.getErrorStream();
                this.errorMsg = getInputStreamString(errorStream);
                Log.i("HttpHelper", "接收到的错误信息: " + this.errorMsg);
                if (errorStream != null) {
                    try {
                        errorStream.close();
                    } catch (Exception e3) {
                        e3.printStackTrace();
                    }
                }
                return false;
            }
            InputStream inputStream2 = httpURLConnection.getInputStream();
            String strCheckReasonCode = checkReasonCode(httpURLConnection.getHeaderFields());
            String inputStreamString = getInputStreamString(inputStream2);
            UtilsSdk.getLogger().i("code参数" + strCheckReasonCode);
            if ("0".equalsIgnoreCase(strCheckReasonCode)) {
                httpListener.onComplete(inputStreamString);
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                    }
                }
                return true;
            }
            this.errorCode = Integer.parseInt(strCheckReasonCode);
            this.errorMsg = inputStreamString;
            Log.i("HttpHelper", "createHttpRequest: " + this.errorMsg);
            if (inputStream2 != null) {
                try {
                    inputStream2.close();
                } catch (Exception e5) {
                    e5.printStackTrace();
                }
            }
            return false;
        } catch (IOException e6) {
            e = e6;
            e.printStackTrace();
            this.errorCode = responseCode;
            this.errorMsg = e.getMessage();
            return false;
        }
    }

    private String getInputStreamString(InputStream inputStream) throws IOException {
        StringBuilder sb = new StringBuilder();
        byte[] bArr = new byte[1048576];
        while (true) {
            int i = inputStream.read(bArr);
            if (i != -1) {
                sb.append(new String(bArr, 0, i));
            } else {
                inputStream.close();
                return sb.toString();
            }
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
}
