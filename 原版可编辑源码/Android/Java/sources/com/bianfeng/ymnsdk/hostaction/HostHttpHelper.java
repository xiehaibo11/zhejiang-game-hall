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
import java.net.SocketAddress;
import java.net.URL;
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
    private TreeMap<String, String> headersMap = new TreeMap<>();
    private String method;

    public HostHttpHelper(Context context) {
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
        NetworkInfo ni;
        try {
            ConnectivityManager cm = (ConnectivityManager) context.getSystemService("connectivity");
            ni = cm.getActiveNetworkInfo();
        } catch (Exception e) {
        }
        if (ni != null && ni.isAvailable() && ni.getType() == 0) {
            String proxyHost = Proxy.getDefaultHost();
            int port = Proxy.getDefaultPort();
            if (proxyHost != null && port != -1) {
                try {
                    SocketAddress sa = new InetSocketAddress(proxyHost, port);
                    java.net.Proxy proxy = new java.net.Proxy(Proxy.Type.HTTP, sa);
                    return (HttpURLConnection) url.openConnection(proxy);
                } catch (IOException e2) {
                    e2.printStackTrace();
                }
            }
            return null;
        }
        return null;
    }

    private HttpURLConnection createHttpRequest(String urlString, String postContent) {
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
                    addHeader(connection);
                    connection.setReadTimeout(25000);
                    connection.setConnectTimeout(15000);
                    connection.setUseCaches(false);
                    connection.setRequestProperty("Content-Type", "application/json,charset=UTF-8");
                    if (this.method.equals("POST")) {
                        connection.setDoOutput(true);
                        connection.setDoInput(true);
                        outputStream = new DataOutputStream(connection.getOutputStream());
                        outputStream.writeBytes(String.valueOf(postContent));
                        outputStream.flush();
                        outputStream.close();
                    }
                    if (outputStream != null) {
                        outputStream.close();
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                }
            } catch (IOException e2) {
                e2.printStackTrace();
                this.errorCode = 601;
                this.errorMsg = "request data error " + e2.getMessage();
                if (outputStream != null) {
                    outputStream.close();
                }
            }
            return connection;
        } catch (Throwable th) {
            if (0 != 0) {
                try {
                    outputStream.close();
                } catch (IOException e3) {
                    e3.printStackTrace();
                }
            }
            throw th;
        }
    }

    private void addHeader(HttpURLConnection request) {
        for (Map.Entry<String, String> entry : this.headersMap.entrySet()) {
            request.addRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    class a extends Thread {
        final String a;
        final String b;
        final HttpListener c;

        a(String str, String str2, HttpListener httpListener) {
            this.a = str;
            this.b = str2;
            this.c = httpListener;
        }

        @Override
        public void run() {
            HttpURLConnection request = HostHttpHelper.this.createHttpRequest(this.a, this.b);
            if (!HostHttpHelper.this.openUrl(request, this.c)) {
                this.c.onError(HostHttpHelper.this.errorCode, HostHttpHelper.this.errorMsg);
            } else if (request != null) {
                request.disconnect();
            }
        }
    }

    public void request(String requestUrl, String postContent, HttpListener listerner) {
        new a(requestUrl, postContent, listerner).start();
    }

    private boolean openUrl(HttpURLConnection connection, HttpListener listerner) {
        InputStream inputStream = null;
        try {
            if (connection == null) {
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
                return false;
            }
            try {
                int code = connection.getResponseCode();
                if (code != 200) {
                    this.errorCode = code;
                    InputStream inputStream2 = connection.getErrorStream();
                    this.errorMsg = getInputStreamString(inputStream2);
                    if (inputStream2 != null) {
                        try {
                            inputStream2.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    return false;
                }
                inputStream = connection.getInputStream();
                String infoStr = getInputStreamString(inputStream);
                String str = checkReasonCode(infoStr);
                Logger.e("code参数" + str);
                if ("0".equalsIgnoreCase(str)) {
                    listerner.onComplete(infoStr);
                    return true;
                }
                this.errorCode = Integer.parseInt(str);
                this.errorMsg = getErrorMsg(infoStr);
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                return false;
            } catch (IOException | JSONException e4) {
                this.errorCode = 604;
                this.errorMsg = e4.getMessage();
                if (inputStream != null) {
                    try {
                        inputStream.close();
                    } catch (IOException e5) {
                        e5.printStackTrace();
                    }
                }
                return false;
            }
        } finally {
            if (inputStream != null) {
                try {
                    inputStream.close();
                } catch (IOException e6) {
                    e6.printStackTrace();
                }
            }
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

    private String checkReasonCode(String response) throws JSONException {
        JSONObject json = new JSONObject(response);
        return json.optString("code").equals("0") ? "0" : RePlugin.PROCESS_UI;
    }

    private String getErrorMsg(String response) throws JSONException {
        JSONObject json = new JSONObject(response);
        return json.optString("message");
    }
}
