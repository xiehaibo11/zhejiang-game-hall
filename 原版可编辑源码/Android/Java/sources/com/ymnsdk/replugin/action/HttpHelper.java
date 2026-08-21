package com.ymnsdk.replugin.action;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import com.huawei.hms.framework.common.ContainerUtils;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.net.URLDecoder;
import java.net.URLEncoder;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class HttpHelper {
    public static final int CODE_REQ_TIME_OUT = 600;
    public static final int CODE_RES_ALLOW = 0;
    public static final int CODE_RES_NOT_ALLOW = 1;
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

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void createHttpRequest(final String str, final String str2, final HttpListener httpListener) {
        new Thread(new Runnable() {
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Removed duplicated region for block: B:84:0x0209 A[Catch: Exception -> 0x0205, TryCatch #7 {Exception -> 0x0205, blocks: (B:80:0x0201, B:84:0x0209, B:86:0x020e), top: B:93:0x0201 }] */
            /* JADX WARN: Removed duplicated region for block: B:86:0x020e A[Catch: Exception -> 0x0205, TRY_LEAVE, TryCatch #7 {Exception -> 0x0205, blocks: (B:80:0x0201, B:84:0x0209, B:86:0x020e), top: B:93:0x0201 }] */
            /* JADX WARN: Removed duplicated region for block: B:93:0x0201 A[EXC_TOP_SPLITTER, SYNTHETIC] */
            @Override
            /*
                Code decompiled incorrectly, please refer to instructions dump.
            */
            public void run() throws Throwable {
                DataOutputStream dataOutputStream;
                InputStream inputStream;
                HttpURLConnection proxy;
                DataOutputStream dataOutputStream2;
                URL url;
                HttpURLConnection httpURLConnection = 0;
                InputStream inputStream2 = null;
                httpURLConnection = 0;
                try {
                    try {
                        try {
                            if (HttpHelper.this.method.equals("GET")) {
                                if (str2 == null || str2.isEmpty()) {
                                    url = new URL(str);
                                } else {
                                    Map map = (Map) new Gson().fromJson(URLDecoder.decode(str2), new TypeToken<Map<String, Object>>() {
                                    }.getType());
                                    String str3 = "?";
                                    for (Object obj : map.keySet()) {
                                        str3 = str3.contains(ContainerUtils.KEY_VALUE_DELIMITER) ? str3 + "&" + obj.toString() + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(map.get(obj.toString()).toString()) : str3 + obj.toString() + ContainerUtils.KEY_VALUE_DELIMITER + URLEncoder.encode(map.get(obj.toString()).toString());
                                    }
                                    url = new URL(str + str3);
                                }
                                proxy = (HttpURLConnection) url.openConnection();
                                proxy.setRequestMethod("GET");
                                proxy.setConnectTimeout(10000);
                                dataOutputStream2 = null;
                            } else {
                                URL url2 = new URL(str);
                                proxy = (HttpURLConnection) url2.openConnection();
                                if (HttpHelper.getProxy(HttpHelper.this.context, url2) != null) {
                                    proxy = HttpHelper.getProxy(HttpHelper.this.context, url2);
                                }
                                proxy.setReadTimeout(25000);
                                proxy.setConnectTimeout(15000);
                                proxy.setUseCaches(false);
                                proxy.setRequestProperty("Content-Type", "application/json;charset=UTF-8");
                                if (HttpHelper.this.method.equals("POST")) {
                                    proxy.setDoOutput(true);
                                    proxy.setDoInput(true);
                                }
                                if (url2.getHost().isEmpty()) {
                                    if (proxy != null) {
                                        try {
                                            proxy.disconnect();
                                            return;
                                        } catch (Exception e) {
                                            e.printStackTrace();
                                            return;
                                        }
                                    }
                                    return;
                                }
                                dataOutputStream2 = new DataOutputStream(proxy.getOutputStream());
                                try {
                                    dataOutputStream2.write(String.valueOf(str2).getBytes("UTF-8"));
                                    dataOutputStream2.flush();
                                    dataOutputStream2.close();
                                } catch (Exception e2) {
                                    HttpURLConnection httpURLConnection2 = proxy;
                                    dataOutputStream = dataOutputStream2;
                                    e = e2;
                                    inputStream = null;
                                    httpURLConnection = httpURLConnection2;
                                    try {
                                        e.printStackTrace();
                                        httpListener.onError(e.hashCode(), e.getMessage());
                                        if (httpURLConnection != 0) {
                                            httpURLConnection.disconnect();
                                        }
                                        if (dataOutputStream != null) {
                                            dataOutputStream.close();
                                        }
                                        if (inputStream != null) {
                                            inputStream.close();
                                            return;
                                        }
                                        return;
                                    } catch (Throwable th) {
                                        th = th;
                                        if (httpURLConnection != 0) {
                                            try {
                                                httpURLConnection.disconnect();
                                            } catch (Exception e3) {
                                                e3.printStackTrace();
                                                throw th;
                                            }
                                        }
                                        if (dataOutputStream != null) {
                                            dataOutputStream.close();
                                        }
                                        if (inputStream != null) {
                                            inputStream.close();
                                        }
                                        throw th;
                                    }
                                } catch (Throwable th2) {
                                    HttpURLConnection httpURLConnection3 = proxy;
                                    dataOutputStream = dataOutputStream2;
                                    th = th2;
                                    inputStream = null;
                                    httpURLConnection = httpURLConnection3;
                                    if (httpURLConnection != 0) {
                                    }
                                    if (dataOutputStream != null) {
                                    }
                                    if (inputStream != null) {
                                    }
                                    throw th;
                                }
                            }
                            if (proxy.getResponseCode() == 200) {
                                inputStream2 = proxy.getInputStream();
                                byte[] bArr = new byte[1048576];
                                StringBuilder sb = new StringBuilder();
                                while (true) {
                                    int i = inputStream2.read(bArr);
                                    if (i == -1) {
                                        break;
                                    } else {
                                        sb.append(new String(bArr, 0, i));
                                    }
                                }
                                inputStream2.close();
                                httpListener.onComplete(HttpHelper.this.decode(sb.toString()));
                            } else {
                                httpListener.onError(proxy.getResponseCode(), proxy.getResponseMessage());
                            }
                            if (proxy != null) {
                                proxy.disconnect();
                            }
                            if (dataOutputStream2 != null) {
                                dataOutputStream2.close();
                            }
                            if (inputStream2 != null) {
                                inputStream2.close();
                            }
                        } catch (Exception e4) {
                            e = e4;
                            inputStream = null;
                            httpURLConnection = ContainerUtils.KEY_VALUE_DELIMITER;
                            dataOutputStream = null;
                        } catch (Throwable th3) {
                            th = th3;
                            inputStream = null;
                            httpURLConnection = ContainerUtils.KEY_VALUE_DELIMITER;
                            dataOutputStream = null;
                        }
                    } catch (Exception e5) {
                        e5.printStackTrace();
                    }
                } catch (Exception e6) {
                    e = e6;
                    dataOutputStream = null;
                    inputStream = null;
                } catch (Throwable th4) {
                    th = th4;
                    dataOutputStream = null;
                    inputStream = null;
                }
            }
        }).start();
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

    public String decode(String str) throws Exception {
        try {
            return URLDecoder.decode(str.replaceAll("%(?![0-9a-fA-F]{2})", "%25"), "UTF-8");
        } catch (UnsupportedEncodingException e) {
            throw new Exception(HostConstant.ymn, e);
        }
    }
}
