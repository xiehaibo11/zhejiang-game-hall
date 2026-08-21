package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.SocketAddress;
import java.net.URL;
import java.net.URLDecoder;
import java.net.URLEncoder;
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
    private String method = "POST";

    public HttpHelper(Context context) {
        this.context = context;
    }

    public void setMethod(int method) {
        this.method = method == 1 ? "GET" : "POST";
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    class a implements Runnable {
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
            HttpURLConnection connection;
            URL url;
            HttpURLConnection connection2 = null;
            DataOutputStream outputStream = null;
            InputStream inputStream = null;
            try {
                try {
                    try {
                        if (HttpHelper.this.method.equals("GET")) {
                            if (this.a == null || this.a.isEmpty()) {
                                url = new URL(this.b);
                            } else {
                                Map<String, Object> infoMap = (Map) new Gson().fromJson(URLDecoder.decode(this.a), new a(this).getType());
                                String appendString = "?";
                                for (Object key : infoMap.keySet()) {
                                    appendString = appendString.contains(ContainerUtils.KEY_VALUE_DELIMITER) ? appendString + "&" + key.toString() + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(infoMap.get(key.toString()).toString()) : appendString + key.toString() + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(infoMap.get(key.toString()).toString());
                                }
                                url = new URL(this.b + appendString);
                            }
                            connection = (HttpURLConnection) url.openConnection();
                            connection.setRequestMethod("GET");
                            connection.setConnectTimeout(10000);
                        } else {
                            URL url2 = new URL(this.b);
                            connection = (HttpURLConnection) url2.openConnection();
                            if (HttpHelper.getProxy(HttpHelper.this.context, url2) != null) {
                                connection = HttpHelper.getProxy(HttpHelper.this.context, url2);
                            }
                            connection.setReadTimeout(25000);
                            connection.setConnectTimeout(15000);
                            connection.setUseCaches(false);
                            connection.setRequestProperty("Content-Type", "application/json;charset=UTF-8");
                            if (HttpHelper.this.method.equals("POST")) {
                                connection.setDoOutput(true);
                                connection.setDoInput(true);
                            }
                            if (url2.getHost().isEmpty()) {
                                if (connection != null) {
                                    try {
                                        connection.disconnect();
                                    } catch (Exception e) {
                                        e.printStackTrace();
                                        return;
                                    }
                                }
                                if (0 != 0) {
                                    outputStream.close();
                                }
                                if (0 != 0) {
                                    inputStream.close();
                                    return;
                                }
                                return;
                            }
                            outputStream = new DataOutputStream(connection.getOutputStream());
                            outputStream.write(String.valueOf(this.a).getBytes("UTF-8"));
                            outputStream.flush();
                            outputStream.close();
                        }
                        if (connection.getResponseCode() == 200) {
                            inputStream = connection.getInputStream();
                            byte[] buf = new byte[1048576];
                            StringBuilder jsonBuilder = new StringBuilder();
                            while (true) {
                                int len = inputStream.read(buf);
                                if (len == -1) {
                                    break;
                                } else {
                                    jsonBuilder.append(new String(buf, 0, len));
                                }
                            }
                            inputStream.close();
                            String infoStr = jsonBuilder.toString();
                            this.c.onComplete(SecurityUtil.getInstance().urlDecoder(infoStr));
                        } else {
                            this.c.onError(connection.getResponseCode(), connection.getResponseMessage());
                        }
                        if (connection != null) {
                            connection.disconnect();
                        }
                        if (outputStream != null) {
                            outputStream.close();
                        }
                        if (inputStream != null) {
                            inputStream.close();
                        }
                    } catch (Exception e2) {
                        e2.printStackTrace();
                    }
                } catch (Exception e3) {
                    e3.printStackTrace();
                    this.c.onError(e3.hashCode(), e3.getMessage());
                    if (0 != 0) {
                        connection2.disconnect();
                    }
                    if (0 != 0) {
                        outputStream.close();
                    }
                    if (0 != 0) {
                        inputStream.close();
                    }
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        connection2.disconnect();
                    } catch (Exception e4) {
                        e4.printStackTrace();
                        throw th;
                    }
                }
                if (0 != 0) {
                    outputStream.close();
                }
                if (0 != 0) {
                    inputStream.close();
                }
                throw th;
            }
        }

        class a extends TypeToken<Map<String, Object>> {
            a(a this$1) {
            }
        }
    }

    public void createHttpRequest(String urlString, String params, HttpListener listerner) {
        new Thread(new a(params, urlString, listerner)).start();
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
}
