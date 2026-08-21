package com.cmic.gen.sdk.c.a;

import android.text.TextUtils;
import com.cmic.gen.sdk.c.b.e;
import com.cmic.gen.sdk.c.b.g;
import com.cmic.gen.sdk.c.b.h;
import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.net.UnknownHostException;
import java.util.Map;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLSession;
import javax.net.ssl.SSLSocketFactory;

public class a implements b {
    private static com.cmic.gen.sdk.c.c a;

    /* JADX WARN: Removed duplicated region for block: B:103:0x026d  */
    /* JADX WARN: Removed duplicated region for block: B:106:0x0290  */
    /* JADX WARN: Removed duplicated region for block: B:107:0x0293  */
    /* JADX WARN: Removed duplicated region for block: B:10:0x005d  */
    /* JADX WARN: Removed duplicated region for block: B:110:0x02a5  */
    /* JADX WARN: Removed duplicated region for block: B:120:0x02c3  */
    /* JADX WARN: Removed duplicated region for block: B:123:0x02e6  */
    /* JADX WARN: Removed duplicated region for block: B:124:0x02e9  */
    /* JADX WARN: Removed duplicated region for block: B:132:0x030b  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x023b  */
    /* JADX WARN: Removed duplicated region for block: B:93:0x0242  */
    /* JADX WARN: Removed duplicated region for block: B:96:0x024c A[Catch: all -> 0x02ba, TryCatch #10 {all -> 0x02ba, blocks: (B:90:0x0213, B:94:0x0248, B:96:0x024c, B:98:0x0254, B:100:0x025c, B:44:0x0176, B:45:0x0178, B:47:0x017e, B:48:0x018c), top: B:136:0x0176 }] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void a(com.cmic.gen.sdk.c.c.c cVar, com.cmic.gen.sdk.c.d.c cVar2, com.cmic.gen.sdk.a aVar) throws Throwable {
        String str;
        OutputStream outputStream;
        HttpURLConnection httpURLConnection;
        InputStream inputStream;
        int responseCode;
        String strA;
        URL url;
        final String host;
        g gVarK;
        boolean z;
        byte[] bArr;
        String str2 = "";
        com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "请求地址: " + cVar.a());
        StringBuilder sb = new StringBuilder();
        try {
            strA = cVar.a();
            url = new URL(strA);
            host = url.getHost();
            gVarK = cVar.k();
        } catch (Exception e) {
            e = e;
            str = "";
            outputStream = null;
            httpURLConnection = null;
        } catch (Throwable th) {
            th = th;
            str = "";
            outputStream = null;
            httpURLConnection = null;
        }
        if ((gVarK instanceof h) || (gVarK instanceof e)) {
            String strB = aVar.b("remote_ip");
            if (TextUtils.isEmpty(strB)) {
                z = false;
            } else {
                url = new URL(strA.replaceFirst(host, strB));
                z = true;
            }
            if (cVar.h() != null) {
                com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "开始wifi下取号" + url);
                httpURLConnection = (HttpURLConnection) cVar.h().openConnection(url);
            } else {
                com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "使用当前网络环境发送请求" + url);
                httpURLConnection = (HttpURLConnection) url.openConnection();
            }
            try {
                Map<String, String> mapC = cVar.c();
                if (mapC != null) {
                    for (String str3 : mapC.keySet()) {
                        str = str2;
                        try {
                            httpURLConnection.addRequestProperty(str3, mapC.get(str3));
                            str2 = str;
                            mapC = mapC;
                        } catch (Exception e2) {
                            e = e2;
                            outputStream = null;
                            inputStream = null;
                            e.printStackTrace();
                            com.cmic.gen.sdk.e.c.a("ConnectionInterceptor", "请求失败: " + cVar.a());
                            aVar.a().a.add(e);
                            if (e instanceof EOFException) {
                            }
                            if (e instanceof UnknownHostException) {
                            }
                            a(outputStream);
                            a(inputStream);
                            if (httpURLConnection != null) {
                            }
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append("responseResult: ");
                            sb2.append(TextUtils.isEmpty(sb) ? str : sb.toString());
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb2.toString());
                            if (responseCode != 200) {
                            }
                            cVar2.a((com.cmic.gen.sdk.c.d.b) null);
                            return;
                        } catch (Throwable th2) {
                            th = th2;
                            outputStream = null;
                            inputStream = null;
                            responseCode = -1;
                            a(outputStream);
                            a(inputStream);
                            if (httpURLConnection != null) {
                            }
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
                            StringBuilder sb3 = new StringBuilder();
                            sb3.append("responseResult: ");
                            sb3.append(!TextUtils.isEmpty(sb) ? str : sb.toString());
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb3.toString());
                            if (responseCode != 200) {
                                cVar2.a((com.cmic.gen.sdk.c.d.b) null);
                            }
                            throw th;
                        }
                    }
                }
                str = str2;
                if ((httpURLConnection instanceof HttpsURLConnection) && ((gVarK instanceof h) || (gVarK instanceof e))) {
                    if (z) {
                        com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "host = " + host);
                        httpURLConnection.setRequestProperty("Host", host);
                        com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "need sni handle");
                        ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(new com.cmic.gen.sdk.c.d((HttpsURLConnection) httpURLConnection, cVar.h(), aVar));
                        ((HttpsURLConnection) httpURLConnection).setHostnameVerifier(new HostnameVerifier() {
                            @Override
                            public boolean verify(String str4, SSLSession sSLSession) {
                                return HttpsURLConnection.getDefaultHostnameVerifier().verify(host, sSLSession);
                            }
                        });
                    } else {
                        ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(a(gVarK, aVar));
                    }
                }
                httpURLConnection.setDoInput(true);
                httpURLConnection.setInstanceFollowRedirects(false);
                httpURLConnection.setConnectTimeout(5000);
                httpURLConnection.setReadTimeout(5000);
                httpURLConnection.setDefaultUseCaches(false);
                String strE = cVar.e();
                httpURLConnection.setRequestMethod(strE);
                httpURLConnection.setDoOutput(true);
                if (cVar instanceof com.cmic.gen.sdk.c.c.b) {
                    httpURLConnection.connect();
                    ((com.cmic.gen.sdk.c.c.b) cVar).a(aVar);
                }
                if (strE.endsWith("POST")) {
                    outputStream = httpURLConnection.getOutputStream();
                    try {
                        outputStream.write(cVar.d().getBytes("utf-8"));
                        outputStream.flush();
                    } catch (Exception e3) {
                        e = e3;
                        inputStream = null;
                        e.printStackTrace();
                        com.cmic.gen.sdk.e.c.a("ConnectionInterceptor", "请求失败: " + cVar.a());
                        aVar.a().a.add(e);
                        if (e instanceof EOFException) {
                        }
                        if (e instanceof UnknownHostException) {
                            aVar.a("remote_ip", a());
                        }
                        a(outputStream);
                        a(inputStream);
                        if (httpURLConnection != null) {
                        }
                        com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
                        StringBuilder sb22 = new StringBuilder();
                        sb22.append("responseResult: ");
                        sb22.append(TextUtils.isEmpty(sb) ? str : sb.toString());
                        com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb22.toString());
                        if (responseCode != 200) {
                        }
                        cVar2.a((com.cmic.gen.sdk.c.d.b) null);
                        return;
                    } catch (Throwable th3) {
                        th = th3;
                        inputStream = null;
                        responseCode = -1;
                    }
                } else {
                    outputStream = null;
                }
                responseCode = httpURLConnection.getResponseCode();
                try {
                    inputStream = httpURLConnection.getInputStream();
                    try {
                        try {
                            bArr = new byte[2048];
                        } catch (Exception e4) {
                            e = e4;
                            e.printStackTrace();
                            com.cmic.gen.sdk.e.c.a("ConnectionInterceptor", "请求失败: " + cVar.a());
                            aVar.a().a.add(e);
                            responseCode = e instanceof EOFException ? 200050 : 102102;
                            if ((e instanceof UnknownHostException) && ((cVar.k() instanceof h) || (cVar.k() instanceof e))) {
                                aVar.a("remote_ip", a());
                            }
                            a(outputStream);
                            a(inputStream);
                            if (httpURLConnection != null) {
                                httpURLConnection.disconnect();
                            }
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
                            StringBuilder sb222 = new StringBuilder();
                            sb222.append("responseResult: ");
                            sb222.append(TextUtils.isEmpty(sb) ? str : sb.toString());
                            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb222.toString());
                            if (responseCode != 200 || responseCode == 301 || responseCode == 302) {
                                cVar2.a((com.cmic.gen.sdk.c.d.b) null);
                                return;
                            }
                            cVar2.a(com.cmic.gen.sdk.c.d.a.a(responseCode));
                        }
                    } catch (Throwable th4) {
                        th = th4;
                    }
                } catch (Exception e5) {
                    e = e5;
                    inputStream = null;
                } catch (Throwable th5) {
                    th = th5;
                    inputStream = null;
                }
            } catch (Exception e6) {
                e = e6;
                str = str2;
            } catch (Throwable th6) {
                th = th6;
                str = str2;
            }
            while (true) {
                int i = inputStream.read(bArr);
                if (i <= 0) {
                    break;
                } else {
                    sb.append(new String(bArr, 0, i, "utf-8"));
                }
                th = th4;
                a(outputStream);
                a(inputStream);
                if (httpURLConnection != null) {
                    httpURLConnection.disconnect();
                }
                com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
                StringBuilder sb32 = new StringBuilder();
                sb32.append("responseResult: ");
                sb32.append(!TextUtils.isEmpty(sb) ? str : sb.toString());
                com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb32.toString());
                if (responseCode != 200 || responseCode == 301 || responseCode == 302) {
                    cVar2.a((com.cmic.gen.sdk.c.d.b) null);
                } else {
                    cVar2.a(com.cmic.gen.sdk.c.d.a.a(responseCode));
                }
                throw th;
            }
            com.cmic.gen.sdk.c.d.b bVar = new com.cmic.gen.sdk.c.d.b(responseCode, httpURLConnection.getHeaderFields(), sb.toString());
            a(outputStream);
            a(inputStream);
            if (httpURLConnection != null) {
                httpURLConnection.disconnect();
            }
            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", "responseCode: " + responseCode);
            StringBuilder sb4 = new StringBuilder();
            sb4.append("responseResult: ");
            sb4.append(TextUtils.isEmpty(sb) ? str : sb.toString());
            com.cmic.gen.sdk.e.c.b("ConnectionInterceptor", sb4.toString());
            if (responseCode == 200 || responseCode == 301 || responseCode == 302) {
                cVar2.a(bVar);
                return;
            }
        }
        cVar2.a(com.cmic.gen.sdk.c.d.a.a(responseCode));
    }

    private void a(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    private String a() {
        return com.cmic.gen.sdk.b.a[0] + "." + com.cmic.gen.sdk.b.a[2] + "." + com.cmic.gen.sdk.b.a[4] + "." + com.cmic.gen.sdk.b.a[6];
    }

    public synchronized SSLSocketFactory a(g gVar, com.cmic.gen.sdk.a aVar) {
        if (gVar instanceof e) {
            com.cmic.gen.sdk.c.c cVar = new com.cmic.gen.sdk.c.c(HttpsURLConnection.getDefaultSSLSocketFactory(), aVar);
            if (a == null) {
                a = cVar;
            }
            return cVar;
        }
        if (a == null) {
            a = new com.cmic.gen.sdk.c.c(HttpsURLConnection.getDefaultSSLSocketFactory(), aVar);
        }
        return a;
    }
}
