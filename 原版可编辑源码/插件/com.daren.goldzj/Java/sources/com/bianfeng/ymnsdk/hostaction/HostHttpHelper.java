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
        public void run() throws Throwable {
            HttpURLConnection httpURLConnectionCreateHttpRequest = HostHttpHelper.this.createHttpRequest(this.a, this.b);
            if (!HostHttpHelper.this.openUrl(httpURLConnectionCreateHttpRequest, this.c)) {
                this.c.onError(HostHttpHelper.this.errorCode, HostHttpHelper.this.errorMsg);
            } else if (httpURLConnectionCreateHttpRequest != null) {
                httpURLConnectionCreateHttpRequest.disconnect();
            }
        }
    }

    public HostHttpHelper(Context context) {
        this.context = context;
    }

    private void addHeader(HttpURLConnection httpURLConnection) {
        for (Map.Entry<String, String> entry : this.headersMap.entrySet()) {
            httpURLConnection.addRequestProperty(entry.getKey(), entry.getValue());
        }
    }

    private String checkReasonCode(String str) throws JSONException {
        return new JSONObject(str).optString("code").equals("0") ? "0" : RePlugin.PROCESS_UI;
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
    private HttpURLConnection createHttpRequest(String str, String str2) throws Throwable {
        IOException e;
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
                        addHeader(str);
                        str.setReadTimeout(25000);
                        str.setConnectTimeout(15000);
                        str.setUseCaches(false);
                        str.setRequestProperty("Content-Type", "application/json,charset=UTF-8");
                        if (this.method.equals("POST")) {
                            str.setDoOutput(true);
                            str.setDoInput(true);
                            DataOutputStream dataOutputStream2 = new DataOutputStream(str.getOutputStream());
                            try {
                                dataOutputStream2.writeBytes(String.valueOf(str2));
                                dataOutputStream2.flush();
                                dataOutputStream2.close();
                                dataOutputStream = dataOutputStream2;
                            } catch (IOException e2) {
                                e = e2;
                                dataOutputStream = dataOutputStream2;
                                str = str;
                                e.printStackTrace();
                                this.errorCode = 601;
                                this.errorMsg = "request data error " + e.getMessage();
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
                                    } catch (IOException e3) {
                                        e3.printStackTrace();
                                    }
                                }
                                throw th;
                            }
                        }
                    } catch (IOException e4) {
                        e = e4;
                        str = str;
                    }
                } catch (IOException e5) {
                    e5.printStackTrace();
                }
            } catch (IOException e6) {
                e = e6;
                str = 0;
            }
            if (dataOutputStream != null) {
                dataOutputStream.close();
                str = str;
            }
            return str;
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private String getErrorMsg(String str) throws JSONException {
        return new JSONObject(str).optString("message");
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
        try {
            NetworkInfo activeNetworkInfo = ((ConnectivityManager) context.getSystemService("connectivity")).getActiveNetworkInfo();
            if (activeNetworkInfo != null && activeNetworkInfo.isAvailable() && activeNetworkInfo.getType() == 0) {
                String defaultHost = Proxy.getDefaultHost();
                int defaultPort = Proxy.getDefaultPort();
                if (defaultHost != null && defaultPort != -1) {
                    try {
                        return (HttpURLConnection) url.openConnection(new java.net.Proxy(Proxy.Type.HTTP, new InetSocketAddress(defaultHost, defaultPort)));
                    } catch (IOException e) {
                        e.printStackTrace();
                        return null;
                    }
                }
            }
        } catch (Exception unused) {
        }
        return null;
    }

    private boolean openUrl(HttpURLConnection httpURLConnection, HttpListener httpListener) {
        if (httpURLConnection == null) {
            return false;
        }
        InputStream inputStream = null;
        try {
            try {
                int responseCode = httpURLConnection.getResponseCode();
                if (responseCode != 200) {
                    this.errorCode = responseCode;
                    InputStream errorStream = httpURLConnection.getErrorStream();
                    this.errorMsg = getInputStreamString(errorStream);
                    if (errorStream != null) {
                        try {
                            errorStream.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    return false;
                }
                InputStream inputStream2 = httpURLConnection.getInputStream();
                String inputStreamString = getInputStreamString(inputStream2);
                String strCheckReasonCode = checkReasonCode(inputStreamString);
                Logger.e("code参数" + strCheckReasonCode);
                if ("0".equalsIgnoreCase(strCheckReasonCode)) {
                    httpListener.onComplete(inputStreamString);
                    if (inputStream2 != null) {
                        try {
                            inputStream2.close();
                        } catch (IOException e2) {
                            e2.printStackTrace();
                        }
                    }
                    return true;
                }
                this.errorCode = Integer.parseInt(strCheckReasonCode);
                this.errorMsg = getErrorMsg(inputStreamString);
                if (inputStream2 != null) {
                    try {
                        inputStream2.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                return false;
            } finally {
                if (0 != 0) {
                    try {
                        inputStream.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
            }
        } catch (IOException | JSONException e5) {
            this.errorCode = 604;
            this.errorMsg = e5.getMessage();
            return false;
        }
    }

    public TreeMap<String, String> getHeadersMap() {
        return this.headersMap;
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void request(String str, String str2, HttpListener httpListener) {
        new a(str, str2, httpListener).start();
    }

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }
}
