package com.bianfeng.ymnsdk.allogin.net;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.loopj.android.http.RequestParams;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;

public class HttpHelper {
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    private Context context;
    private int errorCode;
    private String errorMsg;
    private String method;

    public HttpHelper(Context context) {
        this.context = context;
    }

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }

    public void createHttpRequest(final String str, final String str2, final HttpListener httpListener) {
        try {
            new Thread(new Runnable() {
                /* JADX WARN: Removed duplicated region for block: B:70:0x0153 A[Catch: Exception -> 0x014f, TryCatch #0 {Exception -> 0x014f, blocks: (B:66:0x014b, B:70:0x0153, B:72:0x0158), top: B:78:0x014b }] */
                /* JADX WARN: Removed duplicated region for block: B:72:0x0158 A[Catch: Exception -> 0x014f, TRY_LEAVE, TryCatch #0 {Exception -> 0x014f, blocks: (B:66:0x014b, B:70:0x0153, B:72:0x0158), top: B:78:0x014b }] */
                /* JADX WARN: Removed duplicated region for block: B:78:0x014b A[EXC_TOP_SPLITTER, SYNTHETIC] */
                @Override
                /*
                    Code decompiled incorrectly, please refer to instructions dump.
                */
                public void run() throws Throwable {
                    InputStream inputStream;
                    Throwable th;
                    DataOutputStream dataOutputStream;
                    Exception exc;
                    HttpURLConnection proxy;
                    HttpURLConnection httpURLConnection = null;
                    InputStream inputStream2 = null;
                    httpURLConnection = null;
                    try {
                        try {
                            try {
                                if (HttpHelper.this.method.equals("POST")) {
                                    URL url = new URL(str);
                                    proxy = (HttpURLConnection) url.openConnection();
                                    if (HttpHelper.getProxy(HttpHelper.this.context, url) != null) {
                                        proxy = HttpHelper.getProxy(HttpHelper.this.context, url);
                                    }
                                    proxy.setReadTimeout(25000);
                                    proxy.setConnectTimeout(15000);
                                    proxy.setUseCaches(false);
                                    proxy.setRequestProperty("Content-Type", RequestParams.APPLICATION_JSON);
                                    proxy.setRequestProperty("connection", "keep-alive");
                                    proxy.setInstanceFollowRedirects(true);
                                    proxy.setDoOutput(true);
                                    proxy.setDoInput(true);
                                    if (url.getHost().isEmpty()) {
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
                                    dataOutputStream = new DataOutputStream(proxy.getOutputStream());
                                    try {
                                        dataOutputStream.writeBytes(String.valueOf(str2));
                                        dataOutputStream.flush();
                                        dataOutputStream.close();
                                    } catch (Exception e2) {
                                        exc = e2;
                                        inputStream = null;
                                        httpURLConnection = proxy;
                                        try {
                                            exc.printStackTrace();
                                            httpListener.onError(exc.hashCode(), exc.getMessage());
                                            if (httpURLConnection != null) {
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
                                        } catch (Throwable th2) {
                                            th = th2;
                                            if (httpURLConnection != null) {
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
                                    } catch (Throwable th3) {
                                        th = th3;
                                        inputStream = null;
                                        httpURLConnection = proxy;
                                        if (httpURLConnection != null) {
                                        }
                                        if (dataOutputStream != null) {
                                        }
                                        if (inputStream != null) {
                                        }
                                        throw th;
                                    }
                                } else {
                                    proxy = (HttpURLConnection) new URL(str + "?" + str2).openConnection();
                                    proxy.setReadTimeout(25000);
                                    proxy.setConnectTimeout(15000);
                                    dataOutputStream = null;
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
                                    httpListener.onComplete(sb.toString());
                                } else {
                                    httpListener.onError(proxy.getResponseCode(), proxy.getResponseMessage());
                                }
                                if (proxy != null) {
                                    proxy.disconnect();
                                }
                                if (dataOutputStream != null) {
                                    dataOutputStream.close();
                                }
                                if (inputStream2 != null) {
                                    inputStream2.close();
                                }
                            } catch (Exception e4) {
                                inputStream = null;
                                exc = e4;
                                dataOutputStream = null;
                            } catch (Throwable th4) {
                                inputStream = null;
                                th = th4;
                                dataOutputStream = null;
                            }
                        } catch (Exception e5) {
                            e5.printStackTrace();
                        }
                    } catch (Exception e6) {
                        inputStream = null;
                        exc = e6;
                        dataOutputStream = null;
                    } catch (Throwable th5) {
                        inputStream = null;
                        th = th5;
                        dataOutputStream = null;
                    }
                }
            }).start();
        } catch (Exception e) {
            e.printStackTrace();
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
}
