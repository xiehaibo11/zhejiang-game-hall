package com.meizu.cloud.pushsdk.a.a;

import android.content.Context;
import android.text.TextUtils;
import android.util.Base64;
import com.meizu.cloud.pushinternal.DebugLogger;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.zip.GZIPOutputStream;
import org.json.JSONException;
import org.json.JSONObject;

public class b {
    private static final String a = b.class.getSimpleName();
    private static final Object b = new Object();
    private static b c;

    private b(Context context) {
        try {
            System.setProperty("sun.net.http.allowRestrictedHeaders", "true");
        } catch (Exception e) {
            e.printStackTrace();
        }
        a.a(context);
    }

    public static b a(Context context) {
        if (c == null) {
            synchronized (b) {
                if (c == null) {
                    c = new b(context);
                }
            }
        }
        return c;
    }

    private Map<String, String> a(Map<String, String> map) {
        if (map == null) {
            map = new HashMap<>(2);
        }
        byte[] bArrC = a.a().c();
        if (bArrC == null || bArrC.length <= 0) {
            byte[] bArrB = a.a().b();
            if (bArrB != null && bArrB.length > 0) {
                String str = new String(a.a().b());
                DebugLogger.d(a, "attach x_a_key: " + str);
                map.put("X-A-Key", str);
            }
        } else {
            String str2 = new String(bArrC);
            DebugLogger.d(a, "attach x_s_key: " + str2);
            map.put("X-S-Key", str2);
        }
        return map;
    }

    private void a(HttpURLConnection httpURLConnection, byte[] bArr) throws Throwable {
        GZIPOutputStream gZIPOutputStream = null;
        try {
            GZIPOutputStream gZIPOutputStream2 = new GZIPOutputStream(httpURLConnection.getOutputStream());
            try {
                gZIPOutputStream2.write(bArr);
                gZIPOutputStream2.flush();
                try {
                    gZIPOutputStream2.close();
                } catch (Exception unused) {
                }
            } catch (Throwable th) {
                th = th;
                gZIPOutputStream = gZIPOutputStream2;
                if (gZIPOutputStream != null) {
                    try {
                        gZIPOutputStream.close();
                    } catch (Exception unused2) {
                    }
                }
                throw th;
            }
        } catch (Throwable th2) {
            th = th2;
        }
    }

    private void a(URLConnection uRLConnection) {
        try {
            String headerField = uRLConnection.getHeaderField("X-S-Key");
            DebugLogger.d(a, "get x_s_key = " + headerField);
            if (TextUtils.isEmpty(headerField)) {
                return;
            }
            a.a().a(headerField);
        } catch (NullPointerException unused) {
        }
    }

    private byte[] a(InputStream inputStream) {
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        while (true) {
            try {
                int i = inputStream.read();
                if (i == -1) {
                    break;
                }
                byteArrayOutputStream.write(i);
            } finally {
                try {
                    byteArrayOutputStream.close();
                } catch (IOException unused) {
                }
            }
        }
        return byteArrayOutputStream.toByteArray();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:30:0x00ea  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00ed A[Catch: Exception -> 0x00e8, all -> 0x0129, TryCatch #4 {Exception -> 0x00e8, blocks: (B:21:0x00b7, B:23:0x00bd, B:24:0x00d8, B:27:0x00e4, B:32:0x00ed, B:33:0x00f9), top: B:62:0x00b7 }] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x00f9 A[Catch: Exception -> 0x00e8, all -> 0x0129, TRY_LEAVE, TryCatch #4 {Exception -> 0x00e8, blocks: (B:21:0x00b7, B:23:0x00bd, B:24:0x00d8, B:27:0x00e4, B:32:0x00ed, B:33:0x00f9), top: B:62:0x00b7 }] */
    /* JADX WARN: Removed duplicated region for block: B:60:0x0101 A[EXC_TOP_SPLITTER, PHI: r0 r8
      0x0101: PHI (r0v4 com.meizu.cloud.pushsdk.a.a.c) = (r0v12 com.meizu.cloud.pushsdk.a.a.c), (r0v7 com.meizu.cloud.pushsdk.a.a.c) binds: [B:43:0x0126, B:35:0x00ff] A[DONT_GENERATE, DONT_INLINE]
      0x0101: PHI (r8v4 java.io.InputStream) = (r8v3 java.io.InputStream), (r8v6 java.io.InputStream) binds: [B:43:0x0126, B:35:0x00ff] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:62:0x00b7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:66:0x008a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r0v10 */
    /* JADX WARN: Type inference failed for: r0v2 */
    /* JADX WARN: Type inference failed for: r0v3, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r8v1 */
    /* JADX WARN: Type inference failed for: r8v12 */
    /* JADX WARN: Type inference failed for: r8v13 */
    /* JADX WARN: Type inference failed for: r8v14 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private c b(String str, Map<String, String> map, String str2) throws Throwable {
        InputStream inputStream;
        byte[] bArrA;
        c cVar = null;
        cVar = null;
        cVar = null;
        ?? r0 = 0;
        cVar = null;
        if (str2 != null) {
            byte[] bArrA2 = a.a().a(str2.getBytes());
            String str3 = bArrA2 != null ? new String(Base64.encode(bArrA2, 2)) : null;
            try {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(PushConstants.URL_UPLOAD_DATA).openConnection();
                httpURLConnection.setRequestMethod(str);
                httpURLConnection.setDoInput(true);
                httpURLConnection.setDoOutput(true);
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setConnectTimeout(30000);
                httpURLConnection.setReadTimeout(30000);
                httpURLConnection.setRequestProperty("Connection", "keep-alive");
                httpURLConnection.setRequestProperty("Charset", "UTF-8");
                httpURLConnection.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
                httpURLConnection.setRequestProperty("Content-Encoding", "gzip");
                ?? r8 = map;
                try {
                    if (map != null) {
                        int size = map.size();
                        r8 = map;
                        if (size > 0) {
                            Iterator<Map.Entry<String, String>> it = map.entrySet().iterator();
                            while (true) {
                                boolean zHasNext = it.hasNext();
                                r8 = zHasNext;
                                if (zHasNext) {
                                    Map.Entry<String, String> next = it.next();
                                    httpURLConnection.setRequestProperty(next.getKey(), next.getValue());
                                }
                            }
                            if (str3 != null) {
                                try {
                                    a(httpURLConnection, str3.getBytes());
                                } catch (Exception e) {
                                    e = e;
                                    inputStream = null;
                                    DebugLogger.e(a, "realStringPartRequest error " + e.getMessage());
                                    if (inputStream != null) {
                                    }
                                    httpURLConnection.disconnect();
                                    return cVar;
                                } catch (Throwable th) {
                                    th = th;
                                    if (r0 != 0) {
                                        try {
                                            r0.close();
                                        } catch (IOException unused) {
                                        }
                                    }
                                    httpURLConnection.disconnect();
                                    throw th;
                                }
                            }
                            int responseCode = httpURLConnection.getResponseCode();
                            DebugLogger.d(a, "code = " + responseCode);
                            a(httpURLConnection);
                            b(httpURLConnection);
                            inputStream = httpURLConnection.getInputStream();
                            if (inputStream == null) {
                                try {
                                    bArrA = a(inputStream);
                                    if (bArrA != null) {
                                        String str4 = new String(bArrA);
                                        DebugLogger.d(a, "body = " + str4);
                                        try {
                                            new JSONObject(str4).getInt("code");
                                        } catch (JSONException e2) {
                                            e2.printStackTrace();
                                        }
                                    }
                                } catch (Exception e3) {
                                    e = e3;
                                    DebugLogger.e(a, "realStringPartRequest error " + e.getMessage());
                                    if (inputStream != null) {
                                    }
                                }
                            } else {
                                bArrA = null;
                            }
                            cVar = bArrA == null ? new c(responseCode, new String(bArrA)) : new c(responseCode, null);
                            if (inputStream != null) {
                                try {
                                    inputStream.close();
                                } catch (IOException unused2) {
                                }
                            }
                            httpURLConnection.disconnect();
                        }
                    }
                    if (str3 != null) {
                    }
                    int responseCode2 = httpURLConnection.getResponseCode();
                    DebugLogger.d(a, "code = " + responseCode2);
                    a(httpURLConnection);
                    b(httpURLConnection);
                    inputStream = httpURLConnection.getInputStream();
                    if (inputStream == null) {
                    }
                    if (bArrA == null) {
                    }
                    if (inputStream != null) {
                    }
                    httpURLConnection.disconnect();
                } catch (Throwable th2) {
                    th = th2;
                    r0 = r8;
                }
            } catch (MalformedURLException e4) {
                e4.printStackTrace();
            }
        }
        return cVar;
    }

    private void b(URLConnection uRLConnection) {
        try {
            String headerField = uRLConnection.getHeaderField("Key-Timeout");
            DebugLogger.d(a, "get keyTimeout = " + headerField);
        } catch (NullPointerException unused) {
        }
    }

    public c a(String str, Map<String, String> map, String str2) {
        try {
            return b(str, a(map), str2);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
