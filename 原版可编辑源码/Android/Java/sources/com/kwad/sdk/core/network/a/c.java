package com.kwad.sdk.core.network.a;

import android.text.TextUtils;
import android.util.Log;
import com.kwad.sdk.core.network.f;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.export.proxy.AdHttpBodyBuilder;
import com.kwad.sdk.export.proxy.AdHttpFormDataBuilder;
import cz.msebera.android.httpclient.HttpHeaders;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.UnsupportedEncodingException;
import java.net.SocketTimeoutException;
import java.net.URLEncoder;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.TimeUnit;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.zip.GZIPInputStream;
import okhttp3.ConnectionSpec;
import okhttp3.FormBody;
import okhttp3.MediaType;
import okhttp3.MultipartBody;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.RequestBody;
import okhttp3.Response;
import org.json.JSONObject;

public final class c {
    private static final Pattern apN = Pattern.compile("Unexpected response code for CONNECT: ([0-9]+)", 2);
    public static String apO = "UTF-8";
    private static OkHttpClient apP = null;
    public static OkHttpClient apQ = Bn();

    public static OkHttpClient Bm() {
        if (!com.kwad.framework.a.a.ml.booleanValue()) {
            return apQ;
        }
        if (apP == null) {
            apP = apQ.newBuilder().build();
        }
        return apP;
    }

    private static OkHttpClient Bn() {
        if (apQ == null) {
            OkHttpClient.Builder builderConnectionSpecs = new OkHttpClient.Builder().connectTimeout(3000L, TimeUnit.MILLISECONDS).readTimeout(6000L, TimeUnit.MILLISECONDS).connectionSpecs(Arrays.asList(ConnectionSpec.MODERN_TLS, ConnectionSpec.COMPATIBLE_TLS, ConnectionSpec.CLEARTEXT));
            try {
                builderConnectionSpecs.dns(new d());
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
            }
            apQ = builderConnectionSpecs.build();
        }
        return apQ;
    }

    public static com.kwad.sdk.core.network.c a(String str, Map<String, String> map, boolean z) {
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        try {
            Request.Builder builderUrl = new Request.Builder().url(str);
            a(builderUrl);
            a(builderUrl, map);
            Response responseExecute = Bm().newCall(builderUrl.build()).execute();
            cVar.code = responseExecute.code();
            cVar.aoK = cVar.code;
            cVar.aoM = z ? a(responseExecute) : "";
        } catch (Exception e) {
            a(cVar, e);
        }
        return cVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v1, types: [java.io.Closeable] */
    /* JADX WARN: Type inference failed for: r4v2 */
    /* JADX WARN: Type inference failed for: r4v3, types: [java.io.Closeable, java.io.InputStreamReader, java.io.Reader] */
    private static String a(Response response) throws Throwable {
        InputStream inputStreamByteStream;
        InputStream inputStream;
        ?? inputStreamReader;
        InputStream gZIPInputStream;
        StringBuilder sb = new StringBuilder();
        BufferedReader bufferedReader = null;
        try {
            inputStreamByteStream = response.body().byteStream();
        } catch (Throwable th) {
            th = th;
            inputStreamByteStream = null;
            inputStream = null;
        }
        try {
            List<String> listHeaders = response.headers("Content-Encoding");
            boolean z = false;
            if (listHeaders != null) {
                Iterator<String> it = listHeaders.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    if ("gzip".equalsIgnoreCase(it.next())) {
                        z = true;
                        break;
                    }
                }
            }
            if (z) {
                gZIPInputStream = new GZIPInputStream(inputStreamByteStream);
                inputStream = gZIPInputStream;
            } else {
                inputStream = null;
                gZIPInputStream = inputStreamByteStream;
            }
            try {
                inputStreamReader = new InputStreamReader(gZIPInputStream, apO);
                try {
                    BufferedReader bufferedReader2 = new BufferedReader(inputStreamReader, 8);
                    while (true) {
                        try {
                            String line = bufferedReader2.readLine();
                            if (line == null) {
                                com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader2);
                                com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) inputStreamReader);
                                com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                                com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
                                return sb.toString();
                            }
                            sb.append(line);
                        } catch (Throwable th2) {
                            bufferedReader = bufferedReader2;
                            th = th2;
                            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
                            com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) inputStreamReader);
                            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                            com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            } catch (Throwable th4) {
                th = th4;
                inputStreamReader = 0;
            }
        } catch (Throwable th5) {
            th = th5;
            inputStream = null;
            inputStreamReader = inputStream;
            com.kwad.sdk.crash.utils.b.closeQuietly(bufferedReader);
            com.kwad.sdk.crash.utils.b.closeQuietly((Closeable) inputStreamReader);
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
            com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
            throw th;
        }
    }

    private static void a(com.kwad.sdk.core.network.c cVar, Exception exc) {
        String message;
        cVar.aoL = exc;
        if (cVar.aoK == -1 && (exc instanceof IOException) && (message = exc.getMessage()) != null) {
            Matcher matcher = apN.matcher(message);
            if (matcher.find()) {
                try {
                    cVar.aoK = Integer.parseInt(matcher.group(1));
                } catch (Exception unused) {
                }
            }
        }
        if (exc instanceof SocketTimeoutException) {
            cVar.code = f.aoP.errorCode;
            cVar.aoM = f.aoP.msg;
        } else {
            cVar.code = f.aoQ.errorCode;
            try {
                cVar.aoM = f.aoQ.msg + "/n" + Log.getStackTraceString(exc);
            } catch (Exception unused2) {
            }
        }
        if (com.kwad.framework.a.a.ml.booleanValue()) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(exc);
        }
    }

    private static void a(Request.Builder builder) {
        builder.addHeader("User-Agent", q.getUserAgent());
        builder.addHeader("BrowserUa", q.Bj());
        builder.addHeader("SystemUa", q.Bi());
    }

    private static void a(Request.Builder builder, Map<String, String> map) {
        if (builder == null || map == null || map.isEmpty()) {
            return;
        }
        for (Map.Entry<String, String> entry : map.entrySet()) {
            if (entry != null) {
                try {
                    builder.removeHeader(entry.getKey());
                    builder.addHeader(entry.getKey(), entry.getValue());
                } catch (Exception unused) {
                }
            }
        }
    }

    private static void a(Request.Builder builder, JSONObject jSONObject) {
        builder.post(RequestBody.create(MediaType.parse("application/json; charset=utf-8"), jSONObject.toString()));
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0030 A[Catch: all -> 0x0081, TRY_LEAVE, TryCatch #0 {all -> 0x0081, blocks: (B:4:0x0009, B:6:0x0013, B:7:0x0017, B:9:0x001d, B:14:0x0030), top: B:48:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:16:0x0037  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0047 A[Catch: all -> 0x007a, LOOP:1: B:21:0x0047->B:62:?, LOOP_START, PHI: r6
      0x0047: PHI (r6v1 long) = (r6v0 long), (r6v2 long) binds: [B:20:0x0045, B:62:?] A[DONT_GENERATE, DONT_INLINE], TryCatch #2 {all -> 0x007a, blocks: (B:19:0x0040, B:21:0x0047, B:23:0x004d, B:27:0x0057), top: B:52:0x0040 }] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x0055  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static boolean a(Response response, OutputStream outputStream, int i) throws Throwable {
        BufferedOutputStream bufferedOutputStream;
        InputStream inputStreamByteStream;
        InputStream inputStream;
        boolean z;
        InputStream gZIPInputStream;
        BufferedInputStream bufferedInputStream;
        Closeable closeable = null;
        try {
            inputStreamByteStream = response.body().byteStream();
            try {
                List<String> listHeaders = response.headers("Content-Encoding");
                if (listHeaders == null) {
                    z = false;
                    if (z) {
                    }
                    bufferedInputStream = new BufferedInputStream(gZIPInputStream);
                    byte[] bArr = new byte[1024];
                    long j = 0;
                    if (i <= 0) {
                    }
                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
                    com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
                    return true;
                }
                Iterator<String> it = listHeaders.iterator();
                while (it.hasNext()) {
                    if ("gzip".equalsIgnoreCase(it.next())) {
                        z = true;
                        break;
                    }
                }
                z = false;
                if (z) {
                    inputStream = null;
                    gZIPInputStream = inputStreamByteStream;
                } else {
                    gZIPInputStream = new GZIPInputStream(inputStreamByteStream);
                    inputStream = gZIPInputStream;
                }
                try {
                    bufferedInputStream = new BufferedInputStream(gZIPInputStream);
                    try {
                        byte[] bArr2 = new byte[1024];
                        long j2 = 0;
                        if (i <= 0) {
                            do {
                                int i2 = bufferedInputStream.read(bArr2);
                                if (i2 == -1) {
                                    break;
                                }
                                j2 += (long) i2;
                            } while (j2 <= i);
                        } else if (i < 0) {
                            bufferedOutputStream = new BufferedOutputStream(outputStream);
                            while (true) {
                                try {
                                    int i3 = bufferedInputStream.read(bArr2);
                                    if (i3 == -1) {
                                        break;
                                    }
                                    bufferedOutputStream.write(bArr2, 0, i3);
                                } catch (Throwable th) {
                                    th = th;
                                    closeable = bufferedInputStream;
                                    com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
                                    com.kwad.sdk.crash.utils.b.closeQuietly(bufferedOutputStream);
                                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                                    com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
                                    throw th;
                                }
                            }
                            bufferedOutputStream.flush();
                            closeable = bufferedOutputStream;
                        }
                        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedInputStream);
                        com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
                        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
                        return true;
                    } catch (Throwable th2) {
                        th = th2;
                        bufferedOutputStream = null;
                    }
                } catch (Throwable th3) {
                    th = th3;
                    bufferedOutputStream = null;
                }
            } catch (Throwable th4) {
                th = th4;
                bufferedOutputStream = null;
                inputStream = null;
            }
        } catch (Throwable th5) {
            th = th5;
            bufferedOutputStream = null;
            inputStreamByteStream = null;
            inputStream = null;
        }
        com.kwad.sdk.crash.utils.b.closeQuietly(closeable);
        com.kwad.sdk.crash.utils.b.closeQuietly(bufferedOutputStream);
        com.kwad.sdk.crash.utils.b.closeQuietly(inputStream);
        com.kwad.sdk.crash.utils.b.closeQuietly(inputStreamByteStream);
        throw th;
    }

    private static void b(Request.Builder builder, Map<String, String> map) {
        FormBody formBodyBuild;
        if (map == null || map.isEmpty()) {
            formBodyBuild = null;
        } else {
            FormBody.Builder builder2 = new FormBody.Builder();
            for (Map.Entry<String, String> entry : map.entrySet()) {
                if (entry != null) {
                    try {
                        builder2.addEncoded(entry.getKey(), encode(entry.getValue()));
                    } catch (Exception unused) {
                    }
                }
            }
            formBodyBuild = builder2.build();
        }
        if (builder == null || formBodyBuild == null) {
            return;
        }
        builder.post(formBodyBuild);
    }

    public static com.kwad.sdk.core.network.c doGet(String str, Map<String, String> map) {
        return a(str, map, true);
    }

    public static com.kwad.sdk.core.network.c doPost(String str, Map<String, String> map, AdHttpBodyBuilder adHttpBodyBuilder) {
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        try {
            final MultipartBody.Builder type = new MultipartBody.Builder().setType(MultipartBody.FORM);
            if (adHttpBodyBuilder != null) {
                adHttpBodyBuilder.buildFormData(new AdHttpFormDataBuilder() {
                    @Override
                    public final void addFormDataPart(String str2, String str3) {
                        type.addFormDataPart(str2, str3);
                    }

                    @Override
                    public final void addFormDataPart(String str2, String str3, String str4, byte[] bArr) {
                        type.addFormDataPart(str2, str3, RequestBody.create(MediaType.parse(str4), bArr));
                    }
                });
            }
            Request.Builder builderPost = new Request.Builder().url(str).post(type.build());
            a(builderPost, map);
            Response responseExecute = Bm().newCall(builderPost.build()).execute();
            cVar.code = responseExecute.code();
            cVar.aoK = cVar.code;
            cVar.aoM = a(responseExecute);
        } catch (Exception e) {
            a(cVar, e);
        }
        return cVar;
    }

    public static com.kwad.sdk.core.network.c doPost(String str, Map<String, String> map, Map<String, String> map2) {
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        try {
            Request.Builder builderUrl = new Request.Builder().url(str);
            a(builderUrl);
            a(builderUrl, map);
            b(builderUrl, map2);
            Response responseExecute = Bm().newCall(builderUrl.build()).execute();
            cVar.code = responseExecute.code();
            cVar.aoK = cVar.code;
            cVar.aoM = a(responseExecute);
        } catch (Exception e) {
            a(cVar, e);
        }
        return cVar;
    }

    public static com.kwad.sdk.core.network.c doPost(String str, Map<String, String> map, JSONObject jSONObject) {
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        try {
            Request.Builder builderUrl = new Request.Builder().url(str);
            a(builderUrl);
            a(builderUrl, map);
            a(builderUrl, jSONObject);
            Response responseExecute = Bm().newCall(builderUrl.build()).execute();
            cVar.code = responseExecute.code();
            cVar.aoK = cVar.code;
            cVar.aoM = a(responseExecute);
        } catch (Exception e) {
            a(cVar, e);
        }
        return cVar;
    }

    public static boolean downloadUrlToStream(String str, OutputStream outputStream, int i) throws Throwable {
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        Request.Builder builderUrl = new Request.Builder().url(str);
        HashMap map = new HashMap();
        map.put(HttpHeaders.ACCEPT_LANGUAGE, "zh-CN");
        map.put("Connection", "keep-alive");
        map.put("Charset", "UTF-8");
        a(builderUrl);
        a(builderUrl, map);
        Response responseExecute = Bm().newCall(builderUrl.build()).execute();
        cVar.code = responseExecute.code();
        cVar.aoK = cVar.code;
        a(responseExecute, outputStream, i);
        return true;
    }

    private static String encode(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        try {
            return URLEncoder.encode(str, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return "";
        }
    }
}
