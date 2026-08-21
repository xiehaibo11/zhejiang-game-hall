package com.kwad.sdk.crash.report.upload;

import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.Base64;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.kwad.sdk.core.network.q;
import com.kwad.sdk.crash.utils.h;
import com.ss.android.socialbase.downloader.constants.DBDefinition;
import cz.msebera.android.httpclient.cookie.SM;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import org.json.HTTP;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private static Map<String, String> a(f fVar) {
        HashMap map = new HashMap();
        if (fVar == null) {
            return map;
        }
        if (!TextUtils.isEmpty(fVar.aBP)) {
            map.put("uploadToken", fVar.aBP);
        }
        if (!TextUtils.isEmpty(fVar.aBM)) {
            map.put(NotificationCompat.CATEGORY_SYSTEM, fVar.aBM);
        }
        if (!TextUtils.isEmpty(fVar.aBL)) {
            map.put("did", fVar.aBL);
        }
        if (!TextUtils.isEmpty(fVar.aBJ)) {
            map.put("sid", fVar.aBJ);
        }
        if (!TextUtils.isEmpty(fVar.aAo)) {
            map.put("appver", fVar.aAo);
        }
        if (!TextUtils.isEmpty(fVar.mTaskId)) {
            map.put(DBDefinition.TASK_ID, fVar.mTaskId);
        }
        if (!TextUtils.isEmpty(fVar.aBK)) {
            map.put("token", fVar.aBK);
        }
        if (!TextUtils.isEmpty(fVar.aBI)) {
            map.put(IUserFeature.LOGIN_SUC_RS_UID, fVar.aBI);
        }
        if (!TextUtils.isEmpty(fVar.aBN)) {
            map.put("extraInfo", fVar.aBN);
        }
        return map;
    }

    public static void a(File file, f fVar, a aVar) throws Throwable {
        a(file, fVar.aBL, fVar.aBK, a(fVar), aVar);
    }

    private static void a(File file, String str, String str2, Map<String, String> map, a aVar) throws Throwable {
        DataInputStream dataInputStream;
        OutputStream outputStream;
        HttpURLConnection httpURLConnection;
        byte[] bytes;
        byte[] bArr;
        com.kwad.sdk.core.e.c.d("ExceptionCollector", "uploadLogFile " + Thread.currentThread());
        com.kwad.sdk.core.network.c cVar = new com.kwad.sdk.core.network.c();
        String string = UUID.randomUUID().toString();
        String name = file.getName();
        String str3 = "https://" + com.kwad.sdk.core.network.idc.a.Bo().P("ulog", "ulog-sdk.gifshow.com") + "/rest/log/sdk/file/upload";
        int i = -1;
        HttpURLConnection httpURLConnection2 = null;
        try {
            httpURLConnection = (HttpURLConnection) new URL(str3).openConnection();
            try {
                httpURLConnection.setDoOutput(true);
                httpURLConnection.setDoInput(true);
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setConnectTimeout(5000);
                httpURLConnection.setReadTimeout(5000);
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setRequestMethod("POST");
                httpURLConnection.setRequestProperty("connection", "Keep-Alive");
                httpURLConnection.setRequestProperty("User-Agent", q.getUserAgent());
                httpURLConnection.setRequestProperty("Charset", "UTF-8");
                httpURLConnection.setRequestProperty("Content-Type", "multipart/form-data; boundary=" + string);
                httpURLConnection.setRequestProperty("Content-MD5", Base64.encodeToString(com.kwad.sdk.utils.a.fn(file.getPath()), 2));
                httpURLConnection.setRequestProperty("file-type", "." + com.kwad.sdk.utils.q.getExtension(file.getName()));
                httpURLConnection.setRequestProperty("origin-name", name);
                httpURLConnection.setRequestProperty(SM.COOKIE, "did=" + str);
                httpURLConnection.connect();
                outputStream = httpURLConnection.getOutputStream();
                try {
                    for (String str4 : map.keySet()) {
                        outputStream.write(d(str4, map.get(str4), string));
                    }
                    bytes = ("\r\n--" + string + "--\r\n").getBytes();
                    StringBuilder sb = new StringBuilder();
                    sb.append("--");
                    sb.append(string);
                    sb.append(HTTP.CRLF);
                    sb.append("Content-Disposition: form-data;name=\"file\";filename=\"" + name + "\"\r\n");
                    sb.append("Content-Type: application/octet-stream\r\n\r\n");
                    outputStream.write(sb.toString().getBytes());
                    dataInputStream = new DataInputStream(new FileInputStream(file));
                    try {
                        bArr = new byte[1024];
                    } catch (Exception e) {
                        e = e;
                        httpURLConnection2 = httpURLConnection;
                        try {
                            e eVar = e.aBD;
                            e.getCause();
                            aVar.Fj();
                            com.kwad.sdk.core.network.idc.a aVarBo = com.kwad.sdk.core.network.idc.a.Bo();
                            if (cVar.code != 0) {
                                i = cVar.code;
                            }
                            aVarBo.a(str3, i, e);
                            com.kwad.sdk.core.e.c.printStackTrace(e);
                            com.kwad.sdk.crash.utils.b.a(httpURLConnection2);
                        } catch (Throwable th) {
                            th = th;
                            com.kwad.sdk.crash.utils.b.a(httpURLConnection2);
                            com.kwad.sdk.crash.utils.b.closeQuietly(dataInputStream);
                            com.kwad.sdk.crash.utils.b.closeQuietly(outputStream);
                            throw th;
                        }
                    } catch (Throwable th2) {
                        th = th2;
                        httpURLConnection2 = httpURLConnection;
                        com.kwad.sdk.crash.utils.b.a(httpURLConnection2);
                        com.kwad.sdk.crash.utils.b.closeQuietly(dataInputStream);
                        com.kwad.sdk.crash.utils.b.closeQuietly(outputStream);
                        throw th;
                    }
                } catch (Exception e2) {
                    e = e2;
                    dataInputStream = null;
                } catch (Throwable th3) {
                    th = th3;
                    dataInputStream = null;
                }
            } catch (Exception e3) {
                e = e3;
                dataInputStream = null;
                outputStream = null;
            } catch (Throwable th4) {
                th = th4;
                dataInputStream = null;
                outputStream = null;
            }
        } catch (Exception e4) {
            e = e4;
            dataInputStream = null;
            outputStream = null;
        } catch (Throwable th5) {
            th = th5;
            dataInputStream = null;
            outputStream = null;
        }
        while (true) {
            int i2 = dataInputStream.read(bArr);
            if (i2 == -1) {
                break;
            } else {
                outputStream.write(bArr, 0, i2);
            }
            com.kwad.sdk.crash.utils.b.closeQuietly(dataInputStream);
            com.kwad.sdk.crash.utils.b.closeQuietly(outputStream);
        }
        outputStream.write(HTTP.CRLF.getBytes());
        outputStream.write(bytes);
        outputStream.flush();
        int responseCode = httpURLConnection.getResponseCode();
        cVar.code = responseCode;
        cVar.aoK = responseCode;
        if (responseCode == 200) {
            cVar.aoM = h.a(httpURLConnection.getInputStream());
            try {
                int iOptInt = new JSONObject(cVar.aoM).optInt("result", -1);
                if (iOptInt == 1) {
                    aVar.Fk();
                } else {
                    e eVar2 = e.aBE;
                    new StringBuilder("result is ").append(iOptInt);
                    aVar.Fj();
                }
            } catch (JSONException unused) {
                e eVar3 = e.aBF;
                e eVar4 = e.aBF;
                aVar.Fj();
            }
            com.kwad.sdk.core.e.c.d("ExceptionCollector", "response.body= " + cVar.aoM);
        } else {
            e eVar5 = e.aBD;
            StringBuilder sb2 = new StringBuilder();
            sb2.append(e.aBD.vo());
            sb2.append(responseCode);
            aVar.Fj();
            com.kwad.sdk.core.network.idc.a.Bo().a(str3, cVar.code == 0 ? -1 : cVar.code, (Throwable) null);
        }
        com.kwad.sdk.crash.utils.b.a(httpURLConnection);
        com.kwad.sdk.crash.utils.b.closeQuietly(dataInputStream);
        com.kwad.sdk.crash.utils.b.closeQuietly(outputStream);
    }

    private static byte[] d(String str, String str2, String str3) {
        StringBuilder sb = new StringBuilder();
        sb.append("--");
        sb.append(str3);
        sb.append(HTTP.CRLF);
        sb.append("Content-Disposition: form-data; name=\"" + str + "\"");
        sb.append(HTTP.CRLF);
        sb.append("Content-Length: " + str2.length());
        sb.append(HTTP.CRLF);
        sb.append(HTTP.CRLF);
        sb.append(str2);
        sb.append(HTTP.CRLF);
        return sb.toString().getBytes();
    }
}
