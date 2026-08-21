package com.tkay.core.common.h;

import android.content.Context;
import com.huawei.hms.framework.common.ContainerUtils;
import com.tkay.core.api.AdError;
import com.tkay.core.api.ErrorCode;
import java.io.BufferedInputStream;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.zip.GZIPInputStream;
import java.util.zip.GZIPOutputStream;
import kotlin.UByte;
import org.apache.http.conn.ConnectTimeoutException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6184a = "http.loader";
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
        AnonymousClass1 anonymousClass1 = new AnonymousClass1(i);
        if (o()) {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) anonymousClass1, 1);
        } else {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) anonymousClass1, 2);
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

    /* JADX INFO: renamed from: com.tkay.core.common.h.a$1, reason: invalid class name */
    final class AnonymousClass1 extends com.tkay.core.common.l.b.b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ int f6185a;

        AnonymousClass1(int i) {
            this.f6185a = i;
        }

        /* JADX WARN: Removed duplicated region for block: B:21:0x0052  */
        /* JADX WARN: Removed duplicated region for block: B:24:0x005c  */
        /* JADX WARN: Removed duplicated region for block: B:29:? A[RETURN, SYNTHETIC] */
        @Override // com.tkay.core.common.l.b.b
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void a() throws java.lang.Throwable {
            /*
                r5 = this;
                java.lang.String r0 = "9999"
                com.tkay.core.common.h.a r1 = com.tkay.core.common.h.a.this     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                com.tkay.core.common.h.k r1 = r1.m     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                if (r1 == 0) goto L11
                com.tkay.core.common.h.a r1 = com.tkay.core.common.h.a.this     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                com.tkay.core.common.h.k r1 = r1.m     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                int r2 = r5.f6185a     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                r1.onLoadStart(r2)     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
            L11:
                com.tkay.core.common.h.a r1 = com.tkay.core.common.h.a.this     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                r5.b(r1)     // Catch: java.lang.Exception -> L1b java.lang.StackOverflowError -> L42 java.lang.OutOfMemoryError -> L44
                return
            L1b:
                r1 = move-exception
                java.lang.String r2 = r1.getMessage()
                java.lang.String r3 = r1.getMessage()
                if (r3 == 0) goto L2a
                java.lang.String r2 = r1.getMessage()
            L2a:
                com.tkay.core.common.h.a r3 = com.tkay.core.common.h.a.this
                com.tkay.core.common.h.k r3 = r3.m
                if (r3 == 0) goto L41
                com.tkay.core.common.h.a r3 = com.tkay.core.common.h.a.this
                com.tkay.core.common.h.k r3 = r3.m
                int r4 = r5.f6185a
                java.lang.String r1 = r1.getMessage()
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r1)
                r3.onLoadError(r4, r2, r0)
            L41:
                return
            L42:
                r1 = move-exception
                goto L45
            L44:
                r1 = move-exception
            L45:
                java.lang.System.gc()
                java.lang.String r2 = r1.getMessage()
                java.lang.String r3 = r1.getMessage()
                if (r3 == 0) goto L56
                java.lang.String r2 = r1.getMessage()
            L56:
                com.tkay.core.common.h.a r3 = com.tkay.core.common.h.a.this
                com.tkay.core.common.h.k r3 = r3.m
                if (r3 == 0) goto L6d
                com.tkay.core.common.h.a r3 = com.tkay.core.common.h.a.this
                com.tkay.core.common.h.k r3 = r3.m
                int r4 = r5.f6185a
                java.lang.String r1 = r1.getMessage()
                com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r0, r1)
                r3.onLoadError(r4, r2, r0)
            L6d:
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.h.a.AnonymousClass1.a():void");
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
            To view partially-correct add '--show-bad-code' argument
        */
        private void b(java.lang.String r12) throws java.lang.Throwable {
            /*
                Method dump skipped, instruction units count: 1237
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.h.a.AnonymousClass1.b(java.lang.String):void");
        }
    }

    private void d(int i) {
        AnonymousClass1 anonymousClass1 = new AnonymousClass1(i);
        if (o()) {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) anonymousClass1, 1);
        } else {
            com.tkay.core.common.l.b.a.a().a((com.tkay.core.common.l.b.b) anonymousClass1, 2);
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

    static /* synthetic */ void a(a aVar) {
        if ((aVar.m() & 8) == 8) {
            com.tkay.core.common.e.a.a().b(aVar.o);
        }
    }
}
