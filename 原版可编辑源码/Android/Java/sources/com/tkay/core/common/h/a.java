package com.tkay.core.common.h;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import com.ss.android.download.api.constant.BaseConstants;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import com.tkay.core.common.b.f;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.ConnectException;
import java.net.HttpURLConnection;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;
import javax.net.ssl.SSLException;
import kotlin.UByte;
import org.apache.http.conn.ConnectTimeoutException;
import org.json.JSONObject;

public abstract class a {
    private static final String a = "http.loader";
    protected k m;
    protected boolean n;
    protected String o;

    protected abstract int a();

    protected abstract Object a(String str);

    protected abstract void a(AdError adError);

    protected abstract boolean a(int i);

    protected abstract String b();

    protected void b(int i) {
    }

    protected abstract void b(AdError adError);

    protected abstract Map<String, String> c();

    protected abstract byte[] d();

    protected abstract String h();

    protected abstract Context i();

    protected abstract String j();

    protected abstract String k();

    protected abstract Map<String, Object> l();

    protected int m() {
        return 0;
    }

    protected boolean n() {
        return false;
    }

    protected boolean o() {
        return false;
    }

    public void a(int i, k kVar) {
        this.n = false;
        this.m = kVar;
        1 r3 = new 1(i);
        if (o()) {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) r3, 1);
        } else {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) r3, 2);
        }
    }

    private void p() {
        this.n = true;
    }

    protected JSONObject e() {
        return c.a(m());
    }

    protected JSONObject f() {
        return c.a();
    }

    protected String g() {
        HashMap map = new HashMap();
        String strA = com.tkay.core.common.l.c.a(e().toString());
        String strA2 = com.tkay.core.common.l.c.a(f().toString());
        map.put(c.O, "1.0");
        map.put("p", strA);
        map.put(c.X, strA2);
        ArrayList<String> arrayList = new ArrayList(map.size());
        arrayList.addAll(map.keySet());
        Collections.sort(arrayList);
        StringBuilder sb = new StringBuilder();
        for (String str : arrayList) {
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append(str);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(map.get(str));
        }
        new StringBuilder(" sorted value list:").append(sb.toString());
        map.put("sign", com.tkay.core.common.l.f.c(j() + sb.toString()));
        if (l() != null) {
            map.putAll(l());
        }
        Set<String> setKeySet = map.keySet();
        JSONObject jSONObject = new JSONObject();
        try {
            for (String str2 : setKeySet) {
                jSONObject.put(str2, String.valueOf(map.get(str2)));
            }
            return jSONObject.toString();
        } catch (Exception unused) {
            return null;
        } catch (OutOfMemoryError unused2) {
            System.gc();
            return null;
        }
    }

    final class 1 extends com.tkay.core.common.l.b.b {
        final int a;

        1(int i) {
            this.a = i;
        }

        /* JADX WARN: Removed duplicated region for block: B:21:0x0052  */
        /* JADX WARN: Removed duplicated region for block: B:24:0x005c  */
        /* JADX WARN: Removed duplicated region for block: B:29:? A[RETURN, SYNTHETIC] */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void a() throws Throwable {
            try {
                if (a.this.m != null) {
                    a.this.m.onLoadStart(this.a);
                }
                b(a.this.b());
            } catch (Exception e) {
                String message = e.getMessage();
                if (e.getMessage() != null) {
                    message = e.getMessage();
                }
                if (a.this.m != null) {
                    a.this.m.onLoadError(this.a, message, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e.getMessage()));
                }
            } catch (OutOfMemoryError e2) {
                e = e2;
                System.gc();
                String message2 = e.getMessage();
                if (e.getMessage() != null) {
                    message2 = e.getMessage();
                }
                if (a.this.m == null) {
                    a.this.m.onLoadError(this.a, message2, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e.getMessage()));
                }
            } catch (StackOverflowError e3) {
                e = e3;
                System.gc();
                String message22 = e.getMessage();
                if (e.getMessage() != null) {
                }
                if (a.this.m == null) {
                }
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Removed duplicated region for block: B:185:0x029f A[Catch: all -> 0x04bf, TryCatch #24 {all -> 0x04bf, blocks: (B:69:0x0135, B:183:0x0287, B:185:0x029f, B:186:0x02a3, B:199:0x02ce, B:201:0x02e9, B:202:0x02ed, B:215:0x0318, B:217:0x0325, B:218:0x0329, B:231:0x0354, B:233:0x0361, B:234:0x0365, B:247:0x038f, B:260:0x03b5, B:273:0x03e7, B:286:0x0419, B:299:0x044b, B:312:0x048a), top: B:396:0x0003 }] */
        /* JADX WARN: Removed duplicated region for block: B:194:0x02c5  */
        /* JADX WARN: Removed duplicated region for block: B:201:0x02e9 A[Catch: all -> 0x04bf, TryCatch #24 {all -> 0x04bf, blocks: (B:69:0x0135, B:183:0x0287, B:185:0x029f, B:186:0x02a3, B:199:0x02ce, B:201:0x02e9, B:202:0x02ed, B:215:0x0318, B:217:0x0325, B:218:0x0329, B:231:0x0354, B:233:0x0361, B:234:0x0365, B:247:0x038f, B:260:0x03b5, B:273:0x03e7, B:286:0x0419, B:299:0x044b, B:312:0x048a), top: B:396:0x0003 }] */
        /* JADX WARN: Removed duplicated region for block: B:210:0x030f  */
        /* JADX WARN: Removed duplicated region for block: B:217:0x0325 A[Catch: all -> 0x04bf, TryCatch #24 {all -> 0x04bf, blocks: (B:69:0x0135, B:183:0x0287, B:185:0x029f, B:186:0x02a3, B:199:0x02ce, B:201:0x02e9, B:202:0x02ed, B:215:0x0318, B:217:0x0325, B:218:0x0329, B:231:0x0354, B:233:0x0361, B:234:0x0365, B:247:0x038f, B:260:0x03b5, B:273:0x03e7, B:286:0x0419, B:299:0x044b, B:312:0x048a), top: B:396:0x0003 }] */
        /* JADX WARN: Removed duplicated region for block: B:226:0x034b  */
        /* JADX WARN: Removed duplicated region for block: B:233:0x0361 A[Catch: all -> 0x04bf, TryCatch #24 {all -> 0x04bf, blocks: (B:69:0x0135, B:183:0x0287, B:185:0x029f, B:186:0x02a3, B:199:0x02ce, B:201:0x02e9, B:202:0x02ed, B:215:0x0318, B:217:0x0325, B:218:0x0329, B:231:0x0354, B:233:0x0361, B:234:0x0365, B:247:0x038f, B:260:0x03b5, B:273:0x03e7, B:286:0x0419, B:299:0x044b, B:312:0x048a), top: B:396:0x0003 }] */
        /* JADX WARN: Removed duplicated region for block: B:242:0x0387  */
        /* JADX WARN: Removed duplicated region for block: B:255:0x03ac  */
        /* JADX WARN: Removed duplicated region for block: B:268:0x03de  */
        /* JADX WARN: Removed duplicated region for block: B:281:0x0410  */
        /* JADX WARN: Removed duplicated region for block: B:294:0x0442  */
        /* JADX WARN: Removed duplicated region for block: B:307:0x0481  */
        /* JADX WARN: Removed duplicated region for block: B:320:0x04bb  */
        /* JADX WARN: Removed duplicated region for block: B:330:0x04d1  */
        /* JADX WARN: Removed duplicated region for block: B:368:0x039d A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:370:0x03a2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:372:0x03a7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:374:0x04ac A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:378:0x04b1 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:380:0x0433 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:384:0x04b6 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:386:0x02b6 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:388:0x0438 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:392:0x02bb A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:394:0x033c A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:397:0x043d A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:399:0x02c0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:401:0x0341 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:403:0x04c2 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:405:0x0346 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:407:0x04c7 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:409:0x04cc A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:411:0x03cf A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:413:0x03d4 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:415:0x03d9 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:417:0x0472 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:419:0x0477 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:421:0x0378 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:423:0x047c A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:425:0x037d A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:427:0x0300 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:429:0x0401 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:431:0x0382 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:433:0x0305 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:435:0x0406 A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:437:0x030a A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:439:0x040b A[EXC_TOP_SPLITTER, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:455:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:456:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:457:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:458:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:459:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:460:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:461:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:462:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:463:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:464:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:465:? A[SYNTHETIC] */
        /* JADX WARN: Type inference failed for: r12v0, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r12v1 */
        /* JADX WARN: Type inference failed for: r12v10 */
        /* JADX WARN: Type inference failed for: r12v11 */
        /* JADX WARN: Type inference failed for: r12v12 */
        /* JADX WARN: Type inference failed for: r12v13 */
        /* JADX WARN: Type inference failed for: r12v14 */
        /* JADX WARN: Type inference failed for: r12v15 */
        /* JADX WARN: Type inference failed for: r12v16 */
        /* JADX WARN: Type inference failed for: r12v17 */
        /* JADX WARN: Type inference failed for: r12v18 */
        /* JADX WARN: Type inference failed for: r12v19 */
        /* JADX WARN: Type inference failed for: r12v2 */
        /* JADX WARN: Type inference failed for: r12v20 */
        /* JADX WARN: Type inference failed for: r12v21 */
        /* JADX WARN: Type inference failed for: r12v22 */
        /* JADX WARN: Type inference failed for: r12v23, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v24, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v25, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v26, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v27, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v28, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v29, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v3 */
        /* JADX WARN: Type inference failed for: r12v30, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v31, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v32, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v33, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v35, types: [java.net.HttpURLConnection] */
        /* JADX WARN: Type inference failed for: r12v36 */
        /* JADX WARN: Type inference failed for: r12v37 */
        /* JADX WARN: Type inference failed for: r12v38 */
        /* JADX WARN: Type inference failed for: r12v39 */
        /* JADX WARN: Type inference failed for: r12v4 */
        /* JADX WARN: Type inference failed for: r12v40 */
        /* JADX WARN: Type inference failed for: r12v41 */
        /* JADX WARN: Type inference failed for: r12v42 */
        /* JADX WARN: Type inference failed for: r12v43 */
        /* JADX WARN: Type inference failed for: r12v44 */
        /* JADX WARN: Type inference failed for: r12v45 */
        /* JADX WARN: Type inference failed for: r12v46 */
        /* JADX WARN: Type inference failed for: r12v5 */
        /* JADX WARN: Type inference failed for: r12v6 */
        /* JADX WARN: Type inference failed for: r12v7 */
        /* JADX WARN: Type inference failed for: r12v8 */
        /* JADX WARN: Type inference failed for: r12v9 */
        /* JADX WARN: Type inference failed for: r2v13 */
        /* JADX WARN: Type inference failed for: r2v14 */
        /* JADX WARN: Type inference failed for: r2v16 */
        /* JADX WARN: Type inference failed for: r2v18 */
        /* JADX WARN: Type inference failed for: r2v2 */
        /* JADX WARN: Type inference failed for: r2v20 */
        /* JADX WARN: Type inference failed for: r2v22 */
        /* JADX WARN: Type inference failed for: r2v24 */
        /* JADX WARN: Type inference failed for: r2v26 */
        /* JADX WARN: Type inference failed for: r2v28 */
        /* JADX WARN: Type inference failed for: r2v30 */
        /* JADX WARN: Type inference failed for: r2v31, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v32, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v33, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v34, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v35, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v36, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v37, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v38, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v39, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v40, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v41, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v46 */
        /* JADX WARN: Type inference failed for: r2v61, types: [java.io.InputStream] */
        /* JADX WARN: Type inference failed for: r2v72 */
        /* JADX WARN: Type inference failed for: r2v73 */
        /* JADX WARN: Type inference failed for: r2v74 */
        /* JADX WARN: Type inference failed for: r3v0 */
        /* JADX WARN: Type inference failed for: r3v1 */
        /* JADX WARN: Type inference failed for: r3v10 */
        /* JADX WARN: Type inference failed for: r3v11 */
        /* JADX WARN: Type inference failed for: r3v12 */
        /* JADX WARN: Type inference failed for: r3v13 */
        /* JADX WARN: Type inference failed for: r3v14 */
        /* JADX WARN: Type inference failed for: r3v15 */
        /* JADX WARN: Type inference failed for: r3v16 */
        /* JADX WARN: Type inference failed for: r3v17 */
        /* JADX WARN: Type inference failed for: r3v18 */
        /* JADX WARN: Type inference failed for: r3v19 */
        /* JADX WARN: Type inference failed for: r3v2 */
        /* JADX WARN: Type inference failed for: r3v20, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v21, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v22, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v23, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v24, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v25, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v26, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v27, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v28, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v29, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v3 */
        /* JADX WARN: Type inference failed for: r3v30, types: [java.io.InputStreamReader] */
        /* JADX WARN: Type inference failed for: r3v31 */
        /* JADX WARN: Type inference failed for: r3v32 */
        /* JADX WARN: Type inference failed for: r3v33 */
        /* JADX WARN: Type inference failed for: r3v34 */
        /* JADX WARN: Type inference failed for: r3v35 */
        /* JADX WARN: Type inference failed for: r3v36 */
        /* JADX WARN: Type inference failed for: r3v37 */
        /* JADX WARN: Type inference failed for: r3v38 */
        /* JADX WARN: Type inference failed for: r3v39 */
        /* JADX WARN: Type inference failed for: r3v4 */
        /* JADX WARN: Type inference failed for: r3v5 */
        /* JADX WARN: Type inference failed for: r3v50 */
        /* JADX WARN: Type inference failed for: r3v52 */
        /* JADX WARN: Type inference failed for: r3v53 */
        /* JADX WARN: Type inference failed for: r3v55 */
        /* JADX WARN: Type inference failed for: r3v57 */
        /* JADX WARN: Type inference failed for: r3v59 */
        /* JADX WARN: Type inference failed for: r3v6 */
        /* JADX WARN: Type inference failed for: r3v61 */
        /* JADX WARN: Type inference failed for: r3v63 */
        /* JADX WARN: Type inference failed for: r3v65 */
        /* JADX WARN: Type inference failed for: r3v67 */
        /* JADX WARN: Type inference failed for: r3v69 */
        /* JADX WARN: Type inference failed for: r3v7 */
        /* JADX WARN: Type inference failed for: r3v70, types: [java.io.InputStreamReader, java.io.Reader] */
        /* JADX WARN: Type inference failed for: r3v8 */
        /* JADX WARN: Type inference failed for: r3v83 */
        /* JADX WARN: Type inference failed for: r3v9 */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private void b(String str) throws Throwable {
            Object obj;
            ?? inputStreamReader;
            ?? A;
            ?? r3;
            Exception e;
            SSLException e2;
            UnknownHostException e3;
            SocketTimeoutException e4;
            SocketException e5;
            ConnectException e6;
            Error e7;
            StackOverflowError e8;
            OutOfMemoryError e9;
            ?? r2;
            BufferedReader bufferedReader;
            byte[] bArrD;
            BufferedReader bufferedReader2 = null;
            try {
                try {
                    a.this.o = str;
                    str = (HttpURLConnection) new URL(str).openConnection();
                } catch (Throwable th) {
                    th = th;
                }
                try {
                    int iA = a.this.a();
                    if (iA != 1 && iA != 2) {
                        iA = 2;
                    }
                    if (iA == 1) {
                        str.setDoInput(true);
                        str.setDoOutput(true);
                        str.setRequestMethod("POST");
                        str.setUseCaches(false);
                    }
                    if (iA == 2) {
                        str.setInstanceFollowRedirects(false);
                    }
                    Map<String, String> mapC = a.this.c();
                    if (mapC != null && mapC.size() > 0) {
                        for (String str2 : mapC.keySet()) {
                            str.addRequestProperty(str2, mapC.get(str2));
                        }
                    }
                    if (a.this.n) {
                        a.this.c(this.a);
                        if (str != 0) {
                            str.disconnect();
                            return;
                        }
                        return;
                    }
                    if (com.tkay.core.common.b.m.a().c("ua")) {
                        str.addRequestProperty("User-Agent", com.tkay.core.common.l.g.a());
                    }
                    str.setConnectTimeout(BaseConstants.Time.MINUTE);
                    str.setReadTimeout(BaseConstants.Time.MINUTE);
                    str.connect();
                    if (iA == 1 && (bArrD = a.this.d()) != null) {
                        OutputStream outputStream = str.getOutputStream();
                        outputStream.write(bArrD);
                        outputStream.flush();
                        outputStream.close();
                    }
                    int responseCode = str.getResponseCode();
                    if (!a.this.a(responseCode) && responseCode != 200) {
                        if (responseCode != 302 && responseCode != 301 && responseCode != 307) {
                            a.this.a(this.a, responseCode, "Http respond status code is ".concat(String.valueOf(responseCode)), ErrorCode.getErrorCode(ErrorCode.httpStatuException, String.valueOf(responseCode), str.getResponseMessage()));
                            if (str != 0) {
                                str.disconnect();
                                return;
                            }
                            return;
                        }
                        if (a.this.n) {
                            a.this.c(this.a);
                        } else {
                            String headerField = str.getHeaderField("Location");
                            if (headerField != null && headerField.toLowerCase().startsWith("http")) {
                                b(headerField);
                            }
                        }
                        if (str != 0) {
                            str.disconnect();
                            return;
                        }
                        return;
                    }
                    if (a.this.n) {
                        a.this.c(this.a);
                        if (str != 0) {
                            str.disconnect();
                            return;
                        }
                        return;
                    }
                    A = a.a((HttpURLConnection) str);
                    try {
                        inputStreamReader = new InputStreamReader(A);
                        try {
                            bufferedReader = new BufferedReader(inputStreamReader);
                        } catch (OutOfMemoryError e10) {
                            e9 = e10;
                        } catch (StackOverflowError e11) {
                            e8 = e11;
                        } catch (Error e12) {
                            e7 = e12;
                        } catch (ConnectException e13) {
                            e6 = e13;
                        } catch (SocketException e14) {
                            e5 = e14;
                        } catch (SocketTimeoutException e15) {
                            e4 = e15;
                        } catch (UnknownHostException e16) {
                            e3 = e16;
                        } catch (SSLException e17) {
                            e2 = e17;
                        } catch (ConnectTimeoutException e18) {
                            e = e18;
                        } catch (Exception e19) {
                            e = e19;
                        }
                        try {
                            StringBuilder sb = new StringBuilder();
                            while (true) {
                                String line = bufferedReader.readLine();
                                if (line == null) {
                                    break;
                                } else {
                                    sb.append(line);
                                }
                            }
                            if (a.this.n()) {
                                String strTrim = sb.toString().trim();
                                JSONObject jSONObject = new JSONObject(strTrim);
                                int iOptInt = jSONObject.optInt("code");
                                if (iOptInt == 0) {
                                    JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject(f.c.d);
                                    if (jSONObjectOptJSONObject == null) {
                                        jSONObjectOptJSONObject = new JSONObject();
                                    }
                                    String string = jSONObjectOptJSONObject.toString();
                                    a aVar = a.this;
                                    str.getHeaderFields();
                                    a.this.a(this.a, aVar.a(string));
                                } else {
                                    a.this.a(this.a, i.k, strTrim, ErrorCode.getErrorCode(ErrorCode.statuError, String.valueOf(iOptInt), strTrim));
                                }
                            } else {
                                a aVar2 = a.this;
                                str.getHeaderFields();
                                a.this.a(this.a, aVar2.a(sb.toString()));
                            }
                            try {
                                bufferedReader.close();
                            } catch (Throwable unused) {
                            }
                            try {
                                inputStreamReader.close();
                            } catch (Throwable unused2) {
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused3) {
                                }
                            }
                            if (str != 0) {
                                str.disconnect();
                            }
                        } catch (OutOfMemoryError e20) {
                            e9 = e20;
                            bufferedReader2 = bufferedReader;
                            System.gc();
                            String message = e9.getMessage();
                            if (e9.getMessage() != null) {
                                message = e9.getMessage();
                            }
                            a.this.a(this.a, i.e, message, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e9.getMessage()));
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused4) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused5) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused6) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (StackOverflowError e21) {
                            e8 = e21;
                            bufferedReader2 = bufferedReader;
                            System.gc();
                            String message2 = e8.getMessage();
                            if (e8.getMessage() != null) {
                                message2 = e8.getMessage();
                            }
                            a.this.a(this.a, i.f, message2, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e8.getMessage()));
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused7) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused8) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused9) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (Error e22) {
                            e7 = e22;
                            bufferedReader2 = bufferedReader;
                            new StringBuilder("Error msg = ").append(e7.getMessage());
                            System.gc();
                            String message3 = e7.getMessage();
                            if (e7.getMessage() != null) {
                                message3 = e7.getMessage();
                            }
                            a.this.a(this.a, i.j, message3, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e7.getMessage()));
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused10) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused11) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused12) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (ConnectException e23) {
                            e6 = e23;
                            bufferedReader2 = bufferedReader;
                            a.this.a(ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e6.getMessage()));
                            a.this.a(this.a, -1001, "Connect error.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e6.getMessage()));
                            a.a(a.this);
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused13) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused14) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused15) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (SocketException e24) {
                            e5 = e24;
                            bufferedReader2 = bufferedReader;
                            a.this.a(this.a, i.h, "connect socket failed.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e5.getMessage()));
                            a.a(a.this);
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused16) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused17) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused18) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (SocketTimeoutException e25) {
                            e4 = e25;
                            bufferedReader2 = bufferedReader;
                            a.this.a(this.a, -1002, "Connect timeout.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e4.getMessage()));
                            a.a(a.this);
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused19) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused20) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused21) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (UnknownHostException e26) {
                            e3 = e26;
                            bufferedReader2 = bufferedReader;
                            a.this.a(ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e3.getMessage()));
                            a.this.a(this.a, -1000, "UnknownHostException", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e3.getMessage()));
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused22) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused23) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused24) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (SSLException e27) {
                            e2 = e27;
                            bufferedReader2 = bufferedReader;
                            a.this.a(this.a, i.g, "connect ssl failed.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e2.getMessage()));
                            a.a(a.this);
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused25) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused26) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused27) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (ConnectTimeoutException e28) {
                            e = e28;
                            bufferedReader2 = bufferedReader;
                            a.this.a(this.a, e);
                            a.a(a.this);
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused28) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused29) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused30) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (Exception e29) {
                            e = e29;
                            bufferedReader2 = bufferedReader;
                            new StringBuilder("Exception msg = ").append(e.getMessage());
                            String message4 = e.getMessage();
                            if (e.getMessage() != null) {
                                message4 = e.getMessage();
                            }
                            a.this.a(this.a, i.i, message4, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e.getMessage()));
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused31) {
                                }
                            }
                            if (inputStreamReader != 0) {
                                try {
                                    inputStreamReader.close();
                                } catch (Throwable unused32) {
                                }
                            }
                            if (A != 0) {
                                try {
                                    A.close();
                                } catch (Throwable unused33) {
                                }
                            }
                            if (str == 0) {
                                str.disconnect();
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            bufferedReader2 = bufferedReader;
                            r2 = A;
                            r3 = inputStreamReader;
                            if (bufferedReader2 != null) {
                                try {
                                    bufferedReader2.close();
                                } catch (Throwable unused34) {
                                }
                            }
                            if (r3 != 0) {
                                try {
                                    r3.close();
                                } catch (Throwable unused35) {
                                }
                            }
                            if (r2 != 0) {
                                try {
                                    r2.close();
                                } catch (Throwable unused36) {
                                }
                            }
                            if (str != 0) {
                                throw th;
                            }
                            str.disconnect();
                            throw th;
                        }
                    } catch (OutOfMemoryError e30) {
                        e9 = e30;
                        inputStreamReader = 0;
                    } catch (StackOverflowError e31) {
                        e8 = e31;
                        inputStreamReader = 0;
                    } catch (Error e32) {
                        e7 = e32;
                        inputStreamReader = 0;
                    } catch (ConnectException e33) {
                        e6 = e33;
                        inputStreamReader = 0;
                    } catch (SocketException e34) {
                        e5 = e34;
                        inputStreamReader = 0;
                    } catch (SocketTimeoutException e35) {
                        e4 = e35;
                        inputStreamReader = 0;
                    } catch (UnknownHostException e36) {
                        e3 = e36;
                        inputStreamReader = 0;
                    } catch (SSLException e37) {
                        e2 = e37;
                        inputStreamReader = 0;
                    } catch (ConnectTimeoutException e38) {
                        e = e38;
                        inputStreamReader = 0;
                    } catch (Exception e39) {
                        e = e39;
                        inputStreamReader = 0;
                    } catch (Throwable th3) {
                        th = th3;
                        r3 = 0;
                        r2 = A;
                    }
                } catch (OutOfMemoryError e40) {
                    e = e40;
                    inputStreamReader = 0;
                    str = str;
                    e9 = e;
                    A = inputStreamReader;
                    System.gc();
                    String message5 = e9.getMessage();
                    if (e9.getMessage() != null) {
                    }
                    a.this.a(this.a, i.e, message5, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e9.getMessage()));
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (StackOverflowError e41) {
                    e = e41;
                    inputStreamReader = 0;
                    str = str;
                    e8 = e;
                    A = inputStreamReader;
                    System.gc();
                    String message22 = e8.getMessage();
                    if (e8.getMessage() != null) {
                    }
                    a.this.a(this.a, i.f, message22, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e8.getMessage()));
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (Error e42) {
                    e = e42;
                    inputStreamReader = 0;
                    str = str;
                    e7 = e;
                    A = inputStreamReader;
                    new StringBuilder("Error msg = ").append(e7.getMessage());
                    System.gc();
                    String message32 = e7.getMessage();
                    if (e7.getMessage() != null) {
                    }
                    a.this.a(this.a, i.j, message32, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e7.getMessage()));
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (ConnectException e43) {
                    e = e43;
                    inputStreamReader = 0;
                    str = str;
                    e6 = e;
                    A = inputStreamReader;
                    a.this.a(ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e6.getMessage()));
                    a.this.a(this.a, -1001, "Connect error.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e6.getMessage()));
                    a.a(a.this);
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (SocketException e44) {
                    e = e44;
                    inputStreamReader = 0;
                    str = str;
                    e5 = e;
                    A = inputStreamReader;
                    a.this.a(this.a, i.h, "connect socket failed.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e5.getMessage()));
                    a.a(a.this);
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (SocketTimeoutException e45) {
                    e = e45;
                    inputStreamReader = 0;
                    str = str;
                    e4 = e;
                    A = inputStreamReader;
                    a.this.a(this.a, -1002, "Connect timeout.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e4.getMessage()));
                    a.a(a.this);
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (UnknownHostException e46) {
                    e = e46;
                    inputStreamReader = 0;
                    str = str;
                    e3 = e;
                    A = inputStreamReader;
                    a.this.a(ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e3.getMessage()));
                    a.this.a(this.a, -1000, "UnknownHostException", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e3.getMessage()));
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (SSLException e47) {
                    e = e47;
                    inputStreamReader = 0;
                    str = str;
                    e2 = e;
                    A = inputStreamReader;
                    a.this.a(this.a, i.g, "connect ssl failed.", ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e2.getMessage()));
                    a.a(a.this);
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (ConnectTimeoutException e48) {
                    e = e48;
                    A = 0;
                    str = str;
                    inputStreamReader = A;
                    a.this.a(this.a, e);
                    a.a(a.this);
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (Exception e49) {
                    e = e49;
                    inputStreamReader = 0;
                    str = str;
                    e = e;
                    A = inputStreamReader;
                    new StringBuilder("Exception msg = ").append(e.getMessage());
                    String message42 = e.getMessage();
                    if (e.getMessage() != null) {
                    }
                    a.this.a(this.a, i.i, message42, ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, e.getMessage()));
                    if (bufferedReader2 != null) {
                    }
                    if (inputStreamReader != 0) {
                    }
                    if (A != 0) {
                    }
                    if (str == 0) {
                    }
                } catch (Throwable th4) {
                    th = th4;
                    obj = null;
                    str = str;
                    r3 = obj;
                    r2 = obj;
                    if (bufferedReader2 != null) {
                    }
                    if (r3 != 0) {
                    }
                    if (r2 != 0) {
                    }
                    if (str != 0) {
                    }
                }
            } catch (OutOfMemoryError e50) {
                e = e50;
                str = 0;
                inputStreamReader = 0;
            } catch (StackOverflowError e51) {
                e = e51;
                str = 0;
                inputStreamReader = 0;
            } catch (Error e52) {
                e = e52;
                str = 0;
                inputStreamReader = 0;
            } catch (ConnectException e53) {
                e = e53;
                str = 0;
                inputStreamReader = 0;
            } catch (SocketException e54) {
                e = e54;
                str = 0;
                inputStreamReader = 0;
            } catch (SocketTimeoutException e55) {
                e = e55;
                str = 0;
                inputStreamReader = 0;
            } catch (UnknownHostException e56) {
                e = e56;
                str = 0;
                inputStreamReader = 0;
            } catch (SSLException e57) {
                e = e57;
                str = 0;
                inputStreamReader = 0;
            } catch (ConnectTimeoutException e58) {
                e = e58;
                str = 0;
                A = 0;
            } catch (Exception e59) {
                e = e59;
                str = 0;
                inputStreamReader = 0;
            } catch (Throwable th5) {
                th = th5;
                str = 0;
                obj = null;
            }
        }
    }

    private void d(int i) {
        1 r0 = new 1(i);
        if (o()) {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) r0, 1);
        } else {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) r0, 2);
        }
    }

    protected final void a(int i, ConnectTimeoutException connectTimeoutException) {
        AdError errorCode = ErrorCode.getErrorCode(ErrorCode.exception, ErrorCode.exception, connectTimeoutException.getMessage());
        k kVar = this.m;
        if (kVar != null) {
            kVar.onLoadError(i, "Connect timeout.", errorCode);
        }
        b(errorCode);
        b(-1001);
    }

    protected final void a(int i, int i2, String str, AdError adError) {
        k kVar = this.m;
        if (kVar != null) {
            kVar.onLoadError(i, str, adError);
        }
        b(adError);
        b(i2);
    }

    protected final void c(int i) {
        k kVar = this.m;
        if (kVar != null) {
            kVar.onLoadCanceled(i);
        }
    }

    protected void a(int i, Object obj) {
        k kVar = this.m;
        if (kVar != null) {
            kVar.onLoadFinish(i, obj);
        }
    }

    public static InputStream a(HttpURLConnection httpURLConnection) {
        InputStream inputStream = null;
        if (httpURLConnection == null) {
            return null;
        }
        try {
            inputStream = httpURLConnection.getInputStream();
        } catch (Exception unused) {
        }
        if (!"gzip".equalsIgnoreCase(httpURLConnection.getHeaderField("Content-Encoding"))) {
            return inputStream;
        }
        try {
            byte[] bArr = new byte[2];
            BufferedInputStream bufferedInputStream = new BufferedInputStream(inputStream);
            bufferedInputStream.mark(2);
            int i = bufferedInputStream.read(bArr);
            bufferedInputStream.reset();
            return (i == -1 || (((bArr[1] & UByte.MAX_VALUE) << 8) | (bArr[0] & UByte.MAX_VALUE)) != 35615) ? bufferedInputStream : new GZIPInputStream(bufferedInputStream);
        } catch (Exception unused2) {
            return inputStream;
        }
    }

    protected static byte[] c(String str) {
        if (str == null || str.length() == 0) {
            return null;
        }
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        try {
            GZIPOutputStream gZIPOutputStream = new GZIPOutputStream(byteArrayOutputStream);
            gZIPOutputStream.write(str.getBytes("utf-8"));
            gZIPOutputStream.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return byteArrayOutputStream.toByteArray();
    }

    private void q() {
        if ((m() & 8) == 8) {
            com.tkay.core.common.e.a.a().b(this.o);
        }
    }

    static void a(a aVar) {
        if ((aVar.m() & 8) == 8) {
            com.tkay.core.common.e.a.a().b(aVar.o);
        }
    }
}
