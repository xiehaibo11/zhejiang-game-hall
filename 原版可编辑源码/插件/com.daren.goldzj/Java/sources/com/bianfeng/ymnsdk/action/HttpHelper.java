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

    class a implements Runnable {
        final String a;
        final String b;
        final HttpListener c;

        class a extends TypeToken<Map<String, Object>> {
            a(a aVar) {
            }
        }

        a(String str, String str2, HttpListener httpListener) {
            this.a = str;
            this.b = str2;
            this.c = httpListener;
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Removed duplicated region for block: B:100:0x01eb A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:104:0x0206 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:120:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:77:0x01f3 A[Catch: Exception -> 0x01ef, TryCatch #3 {Exception -> 0x01ef, blocks: (B:73:0x01eb, B:77:0x01f3, B:79:0x01f8), top: B:100:0x01eb }] */
        /* JADX WARN: Removed duplicated region for block: B:79:0x01f8 A[Catch: Exception -> 0x01ef, TRY_LEAVE, TryCatch #3 {Exception -> 0x01ef, blocks: (B:73:0x01eb, B:77:0x01f3, B:79:0x01f8), top: B:100:0x01eb }] */
        /* JADX WARN: Removed duplicated region for block: B:90:0x020e A[Catch: Exception -> 0x020a, TryCatch #6 {Exception -> 0x020a, blocks: (B:86:0x0206, B:90:0x020e, B:92:0x0213), top: B:104:0x0206 }] */
        /* JADX WARN: Removed duplicated region for block: B:92:0x0213 A[Catch: Exception -> 0x020a, TRY_LEAVE, TryCatch #6 {Exception -> 0x020a, blocks: (B:86:0x0206, B:90:0x020e, B:92:0x0213), top: B:104:0x0206 }] */
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
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void run() throws Throwable {
            Throwable th;
            DataOutputStream dataOutputStream;
            Exception e;
            ?? r1;
            ?? r2;
            InputStream inputStream;
            ?? r12;
            URL url;
            ?? proxy = "=";
            InputStream inputStream2 = null;
            try {
                try {
                    if (HttpHelper.this.method.equals("GET")) {
                        if (this.a == null || this.a.isEmpty()) {
                            url = new URL(this.b);
                        } else {
                            Map map = (Map) new Gson().fromJson(URLDecoder.decode(this.a), new a(this).getType());
                            String str = "?";
                            for (Object obj : map.keySet()) {
                                str = str.contains("=") ? str + "&" + obj.toString() + "=" + URLEncoder.encode(map.get(obj.toString()).toString()) : str + obj.toString() + "=" + URLEncoder.encode(map.get(obj.toString()).toString());
                            }
                            url = new URL(this.b + str);
                        }
                        HttpURLConnection httpURLConnection = (HttpURLConnection) url.openConnection();
                        httpURLConnection.setRequestMethod("GET");
                        httpURLConnection.setConnectTimeout(10000);
                        dataOutputStream = null;
                        r12 = httpURLConnection;
                    } else {
                        URL url2 = new URL(this.b);
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
                            if (proxy != 0) {
                                try {
                                    proxy.disconnect();
                                    return;
                                } catch (Exception e2) {
                                    e2.printStackTrace();
                                    return;
                                }
                            }
                            return;
                        }
                        dataOutputStream = new DataOutputStream(proxy.getOutputStream());
                        try {
                            dataOutputStream.write(String.valueOf(this.a).getBytes("UTF-8"));
                            dataOutputStream.flush();
                            dataOutputStream.close();
                            r12 = proxy;
                        } catch (Exception e3) {
                            e = e3;
                            r2 = proxy;
                            inputStream = null;
                            try {
                                e.printStackTrace();
                                this.c.onError(e.hashCode(), e.getMessage());
                                if (r2 != 0) {
                                    try {
                                        r2.disconnect();
                                    } catch (Exception e4) {
                                        e4.printStackTrace();
                                        return;
                                    }
                                }
                                if (dataOutputStream != null) {
                                    dataOutputStream.close();
                                }
                                if (inputStream == null) {
                                    inputStream.close();
                                    return;
                                }
                                return;
                            } catch (Throwable th2) {
                                th = th2;
                                ?? r9 = r2;
                                inputStream2 = inputStream;
                                proxy = r9;
                                if (proxy != 0) {
                                    try {
                                        proxy.disconnect();
                                    } catch (Exception e5) {
                                        e5.printStackTrace();
                                        throw th;
                                    }
                                }
                                if (dataOutputStream != null) {
                                    dataOutputStream.close();
                                }
                                if (inputStream2 != null) {
                                    inputStream2.close();
                                }
                                throw th;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            if (proxy != 0) {
                            }
                            if (dataOutputStream != null) {
                            }
                            if (inputStream2 != null) {
                            }
                            throw th;
                        }
                    }
                    if (r12.getResponseCode() == 200) {
                        inputStream2 = r12.getInputStream();
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
                        this.c.onComplete(SecurityUtil.getInstance().urlDecoder(sb.toString()));
                    } else {
                        this.c.onError(r12.getResponseCode(), r12.getResponseMessage());
                    }
                    if (r12 != 0) {
                        try {
                            r12.disconnect();
                        } catch (Exception e6) {
                            e6.printStackTrace();
                            return;
                        }
                    }
                    if (dataOutputStream != null) {
                        dataOutputStream.close();
                    }
                    if (inputStream2 != null) {
                        inputStream2.close();
                    }
                } catch (Exception e7) {
                    e = e7;
                    r1 = proxy;
                    dataOutputStream = null;
                    r2 = r1;
                    inputStream = null;
                    e.printStackTrace();
                    this.c.onError(e.hashCode(), e.getMessage());
                    if (r2 != 0) {
                    }
                    if (dataOutputStream != null) {
                    }
                    if (inputStream == null) {
                    }
                } catch (Throwable th4) {
                    th = th4;
                    dataOutputStream = null;
                }
            } catch (Exception e8) {
                e = e8;
                r1 = 0;
            } catch (Throwable th5) {
                th = th5;
                dataOutputStream = null;
                proxy = 0;
            }
        }
    }

    public HttpHelper(Context context) {
        this.context = context;
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

    public void createHttpRequest(String str, String str2, HttpListener httpListener) {
        new Thread(new a(str2, str, httpListener)).start();
    }

    public boolean isGetMethod() {
        return this.method.equals("GET");
    }

    public void setMethod(int i) {
        this.method = i == 1 ? "GET" : "POST";
    }
}
