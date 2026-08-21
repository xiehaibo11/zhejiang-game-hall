package com.ymnsdk.replugin.action;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.Proxy;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.InetSocketAddress;
import java.net.Proxy;
import java.net.URL;
import java.net.URLDecoder;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
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
        new Thread(new Runnable() { // from class: com.ymnsdk.replugin.action.HttpHelper.1
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Removed duplicated region for block: B:84:0x0209 A[Catch: Exception -> 0x0205, TryCatch #7 {Exception -> 0x0205, blocks: (B:80:0x0201, B:84:0x0209, B:86:0x020e), top: B:93:0x0201 }] */
            /* JADX WARN: Removed duplicated region for block: B:86:0x020e A[Catch: Exception -> 0x0205, TRY_LEAVE, TryCatch #7 {Exception -> 0x0205, blocks: (B:80:0x0201, B:84:0x0209, B:86:0x020e), top: B:93:0x0201 }] */
            /* JADX WARN: Removed duplicated region for block: B:93:0x0201 A[EXC_TOP_SPLITTER, SYNTHETIC] */
            @Override // java.lang.Runnable
            /*
                Code decompiled incorrectly, please refer to instructions dump.
                To view partially-correct add '--show-bad-code' argument
            */
            public void run() throws java.lang.Throwable {
                /*
                    Method dump skipped, instruction units count: 534
                    To view this dump add '--comments-level debug' option
                */
                throw new UnsupportedOperationException("Method not decompiled: com.ymnsdk.replugin.action.HttpHelper.AnonymousClass1.run():void");
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
