package com.kwad.sdk.core.webview.b;

import android.content.Context;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.WebResourceResponse;
import com.alibaba.sdk.android.oss.common.OSSHeaders;
import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.webview.b.c.b;
import com.kwad.sdk.crash.utils.h;
import com.kwad.sdk.utils.q;
import java.io.BufferedInputStream;
import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.net.URLConnection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static final Map<String, com.kwad.sdk.core.webview.b.a.b> ayF = new ConcurrentHashMap();
    private static final Map<String, String> ayG = new ConcurrentHashMap();

    private static String Z(String str, String str2) {
        return str + Uri.parse(str2).getPath();
    }

    public static WebResourceResponse a(Context context, String str, com.kwad.sdk.h.a.b bVar, b.a aVar, boolean z) throws Throwable {
        com.kwad.sdk.core.webview.b.a.b bVarA;
        StringBuilder sb;
        String string;
        try {
            bVarA = a(context, bVar, str, aVar);
        } catch (Exception e) {
            c.printStackTraceOnly(e);
            aVar.msg = "获取配置文件失败 崩溃" + Log.getStackTraceString(e);
            bVarA = null;
        }
        if (bVarA == null) {
            b(z, aVar.msg);
            if (TextUtils.isEmpty(aVar.msg)) {
                aVar.msg = "获取配置文件失败";
            }
            return null;
        }
        if (TextUtils.isEmpty(bVarA.ayN)) {
            b(z, "getResource [" + str + "] getFilePath from url fail");
            string = "getFilePath from url fail";
        } else {
            if (com.kwad.sdk.core.webview.b.c.c.ej(bVarA.ayJ)) {
                BufferedInputStream bufferedInputStreamFp = q.fp(bVarA.ayN);
                if (bufferedInputStreamFp != null) {
                    return a(bufferedInputStreamFp, bVarA);
                }
                b(z, "getResource [" + str + "] inputStream is null");
                sb = new StringBuilder("inputStream is null,本地加载路径：");
                sb.append(bVarA.ayN);
            } else {
                b(z, "mimetype为: " + bVarA.ayJ + "不在拦截范围的文件");
                sb = new StringBuilder("mimetype为: ");
                sb.append(bVarA.ayJ);
                sb.append("不在拦截范围的文件");
            }
            string = sb.toString();
        }
        aVar.msg = string;
        return null;
    }

    private static WebResourceResponse a(InputStream inputStream, com.kwad.sdk.core.webview.b.a.b bVar) {
        String str = bVar.ayJ;
        if (Build.VERSION.SDK_INT < 21) {
            return new WebResourceResponse(str, "UTF-8", inputStream);
        }
        HashMap map = new HashMap();
        map.put(OSSHeaders.ACCESS_CONTROL_ALLOW_ORIGIN, bVar.ayM.ayH);
        map.put("Access-Control-Allow-Credentials", "true");
        map.put("Timing-Allow-Origin", bVar.ayM.ayI);
        map.put("content-type", str);
        map.put("Date", bVar.ayM.ayK);
        map.put("union-cache ", "1");
        return new WebResourceResponse(bVar.ayJ, "", bVar.status, "OK", map, inputStream);
    }

    private static com.kwad.sdk.core.webview.b.a.b a(Context context, com.kwad.sdk.h.a.b bVar, String str, b.a aVar) throws Throwable {
        InputStreamReader inputStreamReader;
        FileInputStream fileInputStream = null;
        try {
            String strEc = ec(bVar.aCb);
            com.kwad.sdk.core.webview.b.a.b bVarEb = !TextUtils.isEmpty(strEc) ? eb(Z(strEc, str)) : null;
            if (bVarEb != null) {
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                return bVarEb;
            }
            String strE = com.kwad.sdk.core.webview.b.c.a.E(context, bVar.aCc);
            if (strE == null) {
                aVar.msg = "获取配置文件失败 offlinepackage 为空";
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                return null;
            }
            File file = new File(strE);
            if (!file.exists()) {
                aVar.msg = "获取配置文件失败 下载文件路径不存在 " + strE;
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) null);
                return null;
            }
            FileInputStream fileInputStream2 = new FileInputStream(file);
            try {
                inputStreamReader = new InputStreamReader(fileInputStream2);
                try {
                    String strB = h.b(inputStreamReader);
                    if (TextUtils.isEmpty(strB)) {
                        aVar.msg = "获取配置文件失败 mainfest文件不存在";
                        com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream2);
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamReader);
                        return null;
                    }
                    JSONObject jSONObject = new JSONObject(strB);
                    Iterator<String> itKeys = jSONObject.keys();
                    while (itKeys.hasNext()) {
                        String next = itKeys.next();
                        JSONObject jSONObject2 = jSONObject.getJSONObject(next);
                        com.kwad.sdk.core.webview.b.a.b bVar2 = new com.kwad.sdk.core.webview.b.a.b();
                        bVar2.parseJson(jSONObject2);
                        String host = Uri.parse("https://" + next).getHost();
                        bVar2.ayO = host;
                        bVar2.ayN = com.kwad.sdk.core.webview.b.c.a.D(context, bVar.aCc) + "/" + next;
                        if (TextUtils.isEmpty(bVar2.ayJ)) {
                            bVar2.ayJ = URLConnection.getFileNameMap().getContentTypeFor(bVar2.ayN);
                        }
                        a(next, bVar2);
                        strEc = host;
                    }
                    aa(bVar.aCb, strEc);
                    com.kwad.sdk.core.webview.b.a.b bVarEb2 = eb(Z(strEc, str));
                    com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream2);
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamReader);
                    return bVarEb2;
                } catch (Throwable th) {
                    th = th;
                    fileInputStream = fileInputStream2;
                    com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamReader);
                    throw th;
                }
            } catch (Throwable th2) {
                th = th2;
                inputStreamReader = null;
            }
        } catch (Throwable th3) {
            th = th3;
            inputStreamReader = null;
        }
    }

    private static void a(String str, com.kwad.sdk.core.webview.b.a.b bVar) {
        ayF.put(String.valueOf(str.hashCode()), bVar);
    }

    private static void aa(String str, String str2) {
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str)) {
            return;
        }
        ayG.put(str, str2);
    }

    private static void b(boolean z, String str) {
        if (z) {
            return;
        }
        c.d("HybridResourceManager", str);
    }

    private static com.kwad.sdk.core.webview.b.a.b eb(String str) {
        return ayF.get(String.valueOf(str.hashCode()));
    }

    private static String ec(String str) {
        return ayG.get(str);
    }
}
