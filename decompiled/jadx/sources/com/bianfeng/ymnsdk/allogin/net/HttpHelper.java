package com.bianfeng.ymnsdk.allogin.net;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;

/* JADX INFO: loaded from: classes.dex */
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
            new Thread(new Runnable() { // from class: com.bianfeng.ymnsdk.allogin.net.HttpHelper.1
                /* JADX WARN: Removed duplicated region for block: B:70:0x0153 A[Catch: Exception -> 0x014f, TryCatch #0 {Exception -> 0x014f, blocks: (B:66:0x014b, B:70:0x0153, B:72:0x0158), top: B:78:0x014b }] */
                /* JADX WARN: Removed duplicated region for block: B:72:0x0158 A[Catch: Exception -> 0x014f, TRY_LEAVE, TryCatch #0 {Exception -> 0x014f, blocks: (B:66:0x014b, B:70:0x0153, B:72:0x0158), top: B:78:0x014b }] */
                /* JADX WARN: Removed duplicated region for block: B:78:0x014b A[EXC_TOP_SPLITTER, SYNTHETIC] */
                @Override // java.lang.Runnable
                /*
                    Code decompiled incorrectly, please refer to instructions dump.
                    To view partially-correct add '--show-bad-code' argument
                */
                public void run() throws java.lang.Throwable {
                    /*
                        Method dump skipped, instruction units count: 354
                        To view this dump add '--comments-level debug' option
                    */
                    throw new UnsupportedOperationException("Method not decompiled: com.bianfeng.ymnsdk.allogin.net.HttpHelper.AnonymousClass1.run():void");
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
