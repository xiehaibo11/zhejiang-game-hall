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
import java.net.SocketAddress;
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

    public HttpHelperV2(Context context) {
        this.context = context;
    }

    public void setMethod(int method) {
        this.method = method == 1 ? "GET" : "POST";
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public static HttpURLConnection getProxy(Context context, URL url) {
        ConnectivityManager cm = (ConnectivityManager) context.getSystemService("connectivity");
        NetworkInfo ni = cm.getActiveNetworkInfo();
        if (ni == null || !ni.isAvailable() || ni.getType() != 0) {
            return null;
        }
        String proxyHost = Proxy.getDefaultHost();
        int port = Proxy.getDefaultPort();
        if (proxyHost != null && port != -1) {
            try {
                SocketAddress sa = new InetSocketAddress(proxyHost, port);
                java.net.Proxy proxy = new java.net.Proxy(Proxy.Type.HTTP, sa);
                return (HttpURLConnection) url.openConnection(proxy);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return null;
    }

    private HttpURLConnection createHttpRequest(String urlString, String postContent, String token, String trace) {
        HttpURLConnection connection = null;
        DataOutputStream outputStream = null;
        try {
            try {
                try {
                    URL urls = new URL(urlString);
                    connection = (HttpURLConnection) urls.openConnection();
                    if (getProxy(this.context, urls) != null) {
                        connection = getProxy(this.context, urls);
                    }
                    connection.addRequestProperty("Authorization", "BEARER " + token);
                    addHeader(connection, postContent, trace);
                    connection.setReadTimeout(25000);
                    connection.setConnectTimeout(15000);
                    connection.setUseCaches(false);
                    connection.setRequestProperty("Content-Type", "application/json,charset=UTF-8");
                    if (this.method.equals("POST")) {
                        connection.setDoOutput(true);
                        connection.setDoInput(true);
                    }
                    outputStream = new DataOutputStream(connection.getOutputStream());
                    byte[] bytes = postContent.getBytes("UTF-8");
                    outputStream.write(bytes);
                    outputStream.flush();
                    outputStream.close();
                    outputStream.close();
                } catch (Throwable th) {
                    if (outputStream != null) {
                        try {
                            outputStream.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    throw th;
                }
            } catch (Exception e2) {
                e2.printStackTrace();
                this.errorCode = 601;
                this.errorMsg = "request data error " + e2.getMessage();
                if (outputStream != null) {
                    outputStream.close();
                }
                return connection;
            }
        } catch (IOException e3) {
            e3.printStackTrace();
        }
        return connection;
    }

    private void addHeader(HttpURLConnection request, String postContent, String trace) {
        this.headersMap.put("X-Signature", SecurityUtil.getInstance().getPaySignatue(postContent, trace));
        for (Map.Entry<String, String> entry : this.headersMap.entrySet()) {
            request.addRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    public void request(String url, String postContent, PayTokenEntity.PayloadEntity payloadEntity, String trace, HttpListener listerner) {
        if (payloadEntity == null) {
            Logger.i("  ---------  payloadEntity is null --------- ");
        } else {
            new a(payloadEntity, url, postContent, trace, listerner).start();
        }
    }

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
        public void run() {
            this.a.setAud(this.b);
            String token = SecurityUtil.getInstance().getPayToken(PayTokenEntity.getHeader, this.a.toString());
            HttpURLConnection request = HttpHelperV2.this.createHttpRequest(this.b, this.c, token, this.d);
            if (!HttpHelperV2.this.openUrl(request, this.e)) {
                this.e.onError(HttpHelperV2.this.errorCode, HttpHelperV2.this.errorMsg);
            } else if (request != null) {
                request.disconnect();
            }
        }
    }

    private boolean openUrl(HttpURLConnection connection, HttpListener listerner) {
        InputStream inputStream = null;
        try {
            try {
                int code = connection.getResponseCode();
                if (code != 200) {
                    this.errorCode = code;
                    InputStream inputStream2 = connection.getErrorStream();
                    this.errorMsg = getInputStreamString(inputStream2);
                    Logger.i("错误信息：" + this.errorCode + "|" + this.errorMsg);
                    if (inputStream2 != null) {
                        try {
                            inputStream2.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    return false;
                }
                InputStream inputStream3 = connection.getInputStream();
                String str = checkReasonCode(connection.getHeaderFields());
                String infoStr = getInputStreamString(inputStream3);
                if ("0".equalsIgnoreCase(str)) {
                    listerner.onComplete(infoStr);
                    if (inputStream3 != null) {
                        try {
                            inputStream3.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    return true;
                }
                this.errorCode = Integer.parseInt(str);
                this.errorMsg = infoStr;
                Logger.i("错误信息：" + str + "|" + this.errorMsg);
                if (inputStream3 != null) {
                    try {
                        inputStream3.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                return false;
            } catch (Exception e4) {
                this.errorCode = 604;
                this.errorMsg = e4.getMessage();
                Logger.i("错误信息：", this.errorCode + "|" + this.errorMsg);
                if (0 != 0) {
                    try {
                        inputStream.close();
                    } catch (IOException e5) {
                        e5.printStackTrace();
                    }
                }
                return false;
            }
        } catch (Throwable th) {
            if (0 != 0) {
                try {
                    inputStream.close();
                } catch (IOException e6) {
                    e6.printStackTrace();
                }
            }
            throw th;
        }
    }

    private String getInputStreamString(InputStream inputStream) throws IOException {
        StringBuilder jsonBuilder = new StringBuilder();
        byte[] buf = new byte[1048576];
        while (true) {
            int len = inputStream.read(buf);
            if (len != -1) {
                jsonBuilder.append(new String(buf, 0, len));
            } else {
                inputStream.close();
                return jsonBuilder.toString();
            }
        }
    }

    private String checkReasonCode(Map<String, List<String>> response) {
        for (Map.Entry<String, List<String>> h : response.entrySet()) {
            String key = h.getKey();
            List<String> values = h.getValue();
            if (!TextUtils.isEmpty(h.getKey()) && key.equalsIgnoreCase("X-Error-Code")) {
                Iterator<String> it = values.iterator();
                if (it.hasNext()) {
                    String str = it.next();
                    return TextUtils.isEmpty(str) ? "1" : str;
                }
            }
        }
        return "1";
    }
}
