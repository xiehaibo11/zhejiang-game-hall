package com.bianfeng.netlib;

import android.app.Activity;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import android.text.TextUtils;
import android.util.Log;
import com.bianfeng.utilslib.UtilsSdk;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class HttpHelper {
    public static final int CODE_JSONERROR_ERROR = 603;
    public static final int CODE_NOT_NETWORK = 604;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    private final String TAG = "HttpHelper";
    private Activity context;
    private int errorCode;
    private String errorMsg;
    private String mUrl;
    private int method;

    public HttpHelper(Activity activity) {
        this.context = activity;
    }

    public void setMethod(int i) {
        this.method = i;
    }

    public boolean isGetMethod() {
        return this.method == 1;
    }

    public HttpURLConnection createHttpRequest(String str) {
        IOException e;
        HttpURLConnection proxy;
        URL url;
        this.mUrl = str;
        HttpURLConnection httpURLConnection = null;
        try {
            url = new URL(str);
            proxy = (HttpURLConnection) url.openConnection();
        } catch (IOException e2) {
            HttpURLConnection httpURLConnection2 = httpURLConnection;
            e = e2;
            proxy = httpURLConnection2;
        }
        try {
            if (getProxy(this.context, url) != null) {
                proxy = getProxy(this.context, url);
            }
            httpURLConnection = proxy;
            httpURLConnection.setReadTimeout(25000);
            httpURLConnection.setConnectTimeout(15000);
            httpURLConnection.setUseCaches(false);
            httpURLConnection.setRequestProperty("Content-Type", "application/json,charset=UTF-8");
            return httpURLConnection;
        } catch (IOException e3) {
            e = e3;
            e.printStackTrace();
            this.errorCode = 601;
            this.errorMsg = "request data error " + e.getMessage();
            Log.i("HttpHelper", "createHttpRequest: " + e.getMessage());
            return proxy;
        }
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
                    } catch (IOException e) {
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
                UtilsSdk.getLogger().e("接收到的错误信息：", this.errorMsg);
                if (errorStream != null) {
                    try {
                        errorStream.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
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
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
                return true;
            }
            this.errorCode = Integer.parseInt(strCheckReasonCode);
            this.errorMsg = inputStreamString;
            UtilsSdk.getLogger().i("openUrl: " + inputStreamString);
            if (inputStream2 != null) {
                try {
                    inputStream2.close();
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            }
            return false;
        } catch (IOException e6) {
            e = e6;
            this.errorCode = responseCode;
            this.errorMsg = e.getMessage();
            UtilsSdk.getLogger().e("接收到的错误信息：openUrl IOException", this.errorMsg);
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

    /* JADX WARN: Type inference failed for: r0v0, types: [com.bianfeng.netlib.HttpHelper$1] */
    public void request(final String str, final HttpListener httpListener) {
        new Thread() { // from class: com.bianfeng.netlib.HttpHelper.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                UtilsSdk.getLogger().i("HttpHelper request ：" + str);
                HttpURLConnection httpURLConnectionCreateHttpRequest = HttpHelper.this.createHttpRequest(str);
                if (!HttpHelper.this.openUrl(httpURLConnectionCreateHttpRequest, httpListener)) {
                    httpListener.onError(HttpHelper.this.errorCode, HttpHelper.this.errorMsg);
                } else if (httpURLConnectionCreateHttpRequest != null) {
                    httpURLConnectionCreateHttpRequest.disconnect();
                }
            }
        }.start();
    }

    public static HttpURLConnection getProxy(Context context, URL url) {
        NetworkInfo activeNetworkInfo;
        if (context != null && (activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo()) != null && activeNetworkInfo.isAvailable() && activeNetworkInfo.getType() == 0) {
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
}
