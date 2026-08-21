package com.loc;

import android.os.Build;
import android.os.SystemClock;
import android.text.TextUtils;
import com.heytap.mcssdk.constant.MessageConstant;
import com.huawei.hms.framework.common.ContainerUtils;
import com.loc.bo;
import com.loc.bt;
import com.loc.m;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import com.xiaomi.mipush.sdk.Constants;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.io.OutputStream;
import java.lang.ref.SoftReference;
import java.net.ConnectException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.Proxy;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.net.URLEncoder;
import java.net.UnknownHostException;
import java.text.DecimalFormat;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import java.util.Vector;
import java.util.concurrent.atomic.AtomicInteger;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLException;
import javax.net.ssl.SSLHandshakeException;
import javax.net.ssl.SSLKeyException;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLProtocolException;
import javax.net.ssl.SSLSession;
import org.apache.http.conn.ConnectTimeoutException;

/* JADX INFO: compiled from: HttpUrlUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class br {
    private static SoftReference<SSLContext> k;
    private static SoftReference<bs> t;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f2879a;
    private SSLContext b;
    private Proxy c;
    private String g;
    private bo.a h;
    private d i;
    private boolean l;
    private String m;
    private String n;
    private volatile boolean d = false;
    private long e = -1;
    private long f = 0;
    private String j = "";
    private boolean o = false;
    private boolean p = false;
    private String q = "";
    private String r = "";
    private String s = "";
    private f u = new f();

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    public static class a implements Cloneable, Comparable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f2880a;
        public String b;
        public String c;
        public String d;
        public String e;
        public int f;
        public int g;
        public int h;
        public long i;
        public volatile AtomicInteger j = new AtomicInteger(1);

        public a(c cVar) {
            this.b = cVar.c;
            this.c = cVar.e;
            this.e = cVar.d;
            this.f = cVar.m;
            this.g = cVar.n;
            this.h = cVar.b.a();
            this.d = cVar.f2882a;
            this.i = cVar.f;
            if (this.f == 10) {
                this.f2880a = 0;
            }
        }

        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final a clone() {
            try {
                return (a) super.clone();
            } catch (CloneNotSupportedException unused) {
                return null;
            }
        }

        public final String b() {
            StringBuilder sb;
            StringBuilder sb2;
            StringBuilder sb3;
            StringBuilder sb4;
            try {
                String str = this.f + "#";
                if (TextUtils.isEmpty(this.e)) {
                    sb = new StringBuilder();
                    sb.append(str);
                    sb.append("-#");
                } else {
                    sb = new StringBuilder();
                    sb.append(str);
                    sb.append(this.e);
                    sb.append("#");
                }
                String str2 = (sb.toString() + this.h + "#") + this.j + "#";
                if (TextUtils.isEmpty(this.b)) {
                    sb2 = new StringBuilder();
                    sb2.append(str2);
                    sb2.append("-#");
                } else {
                    sb2 = new StringBuilder();
                    sb2.append(str2);
                    sb2.append(this.b);
                    sb2.append("#");
                }
                String string = sb2.toString();
                if (this.f == 1) {
                    sb3 = new StringBuilder();
                    sb3.append(string);
                    sb3.append(this.d);
                    sb3.append("#");
                } else {
                    sb3 = new StringBuilder();
                    sb3.append(string);
                    sb3.append("-#");
                }
                String string2 = sb3.toString();
                if (this.f == 1) {
                    sb4 = new StringBuilder();
                    sb4.append(string2);
                    sb4.append(this.i);
                    sb4.append("#");
                } else {
                    sb4 = new StringBuilder();
                    sb4.append(string2);
                    sb4.append("-#");
                }
                String str3 = (sb4.toString() + this.c + "#") + this.g;
                String strB = p.b(bk.a(str3.getBytes(), "YXBtX25ldHdvcmtf".getBytes()));
                StringBuilder sb5 = new StringBuilder("上报异常数据");
                sb5.append(str3);
                sb5.append("加密后：");
                sb5.append(strB);
                br.a();
                return strB;
            } catch (Exception unused) {
                return null;
            }
        }

        @Override // java.lang.Comparable
        public final int compareTo(Object obj) {
            return this.f2880a - ((a) obj).f2880a;
        }
    }

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    public static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public HttpURLConnection f2881a;
        public int b = this.b;
        public int b = this.b;

        public b(HttpURLConnection httpURLConnection) {
            this.f2881a = httpURLConnection;
        }
    }

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    public static class c implements Cloneable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public String f2882a = "";
        public bt.b b = bt.b.FIRST_NONDEGRADE;
        public String c = "";
        public String d = "";
        public String e = "";
        public long f = 0;
        public long g = 0;
        public long h = 0;
        public long i = 0;
        public long j = 0;
        public String k = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        public String l = Constants.ACCEPT_TIME_SEPARATOR_SERVER;
        public int m = 0;
        public int n = 0;

        /* JADX INFO: Access modifiers changed from: protected */
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final c clone() {
            try {
                return (c) super.clone();
            } catch (CloneNotSupportedException unused) {
                return null;
            }
        }

        protected final String b() {
            String str;
            String str2;
            if (TextUtils.isEmpty(this.c)) {
                str = "-#";
            } else {
                str = this.c + "#";
            }
            if (TextUtils.isEmpty(this.d)) {
                str2 = str + "-#";
            } else {
                str2 = str + this.d + "#";
            }
            String str3 = (((str2 + this.b.a() + "#") + this.h + "#") + this.j + "#") + this.f;
            String strB = p.b(bk.a(str3.getBytes(), "YXBtX25ldHdvcmtf".getBytes()));
            StringBuilder sb = new StringBuilder("上报耗时数据");
            sb.append(str3);
            sb.append("加密后：");
            sb.append(strB);
            br.a();
            return strB;
        }

        public final String toString() {
            return "RequestInfo{csid='" + this.f2882a + "', degradeType=" + this.b + ", serverIp='" + this.c + "', path='" + this.d + "', hostname='" + this.e + "', totalTime=" + this.f + ", DNSTime=" + this.g + ", connectionTime=" + this.h + ", writeTime=" + this.i + ", readTime=" + this.j + ", serverTime='" + this.k + "', datasize='" + this.l + "', errorcode=" + this.m + ", errorcodeSub=" + this.n + '}';
        }
    }

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    private static class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Vector<e> f2883a;
        private volatile e b;

        private d() {
            this.f2883a = new Vector<>();
            this.b = new e((byte) 0);
        }

        /* synthetic */ d(byte b) {
            this();
        }

        public final e a(String str) {
            if (TextUtils.isEmpty(str)) {
                return this.b;
            }
            byte b = 0;
            for (int i = 0; i < this.f2883a.size(); i++) {
                e eVar = this.f2883a.get(i);
                if (eVar != null && eVar.a().equals(str)) {
                    return eVar;
                }
            }
            e eVar2 = new e(b);
            eVar2.b(str);
            this.f2883a.add(eVar2);
            return eVar2;
        }
    }

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    private static class e implements HostnameVerifier {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private String f2884a;
        private String b;

        private e() {
        }

        /* synthetic */ e(byte b) {
            this();
        }

        public final String a() {
            return this.b;
        }

        public final void a(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(this.f2884a) || !str.contains(Constants.COLON_SEPARATOR) || (strArrSplit = str.split(Constants.COLON_SEPARATOR)) == null || strArrSplit.length <= 0) {
                this.f2884a = str;
            } else {
                this.f2884a = strArrSplit[0];
            }
        }

        public final void b(String str) {
            this.b = str;
        }

        @Override // javax.net.ssl.HostnameVerifier
        public final boolean verify(String str, SSLSession sSLSession) {
            HostnameVerifier defaultHostnameVerifier = HttpsURLConnection.getDefaultHostnameVerifier();
            return !TextUtils.isEmpty(this.f2884a) ? this.f2884a.equals(str) : !TextUtils.isEmpty(this.b) ? defaultHostnameVerifier.verify(this.b, sSLSession) : defaultHostnameVerifier.verify(str, sSLSession);
        }
    }

    /* JADX INFO: compiled from: HttpUrlUtil.java */
    class f {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f2885a = 0;
        long b = 0;
        c c = new c();
        a d;
        c e;
        String f;
        URL g;

        f() {
        }

        public final void a() {
            this.c.h = SystemClock.elapsedRealtime() - this.b;
        }

        public final void a(int i) {
            "----errorcode-----".concat(String.valueOf(i));
            br.a();
            try {
                this.c.f = SystemClock.elapsedRealtime() - this.f2885a;
                this.c.m = i;
                if (this.c.b.e()) {
                    m.a(false, this.c.e);
                }
                boolean zA = br.this.a(this.c.e);
                if (zA) {
                    if (br.this.p && !TextUtils.isEmpty(br.this.n) && this.c.b.b()) {
                        m.d();
                    }
                    if (this.c.b.c()) {
                        m.a(this.c.b.c(), this.c.e);
                    }
                    m.c(this.e);
                    m.a(false, this.d);
                    m.b(this.c);
                }
                m.a(this.g.toString(), this.c.b.c(), true, zA);
                new StringBuilder("!!!error-").append(this.c.toString());
                br.a();
            } catch (Throwable unused) {
            }
        }

        public final void a(long j) {
            this.c.l = new DecimalFormat("0.00").format(j / 1024.0f);
        }

        public final void a(bt btVar, URL url) {
            this.g = url;
            this.c.d = url.getPath();
            this.c.e = url.getHost();
            if (!TextUtils.isEmpty(br.this.n) && btVar.u().b()) {
                c cVar = this.c;
                cVar.c = cVar.e.replace("[", "").replace("]", "");
                this.c.e = br.this.n;
            }
            if (btVar.u().b()) {
                btVar.a(this.c.e);
            }
            if (btVar.u().d()) {
                this.f = btVar.x();
            }
        }

        public final void a(bu buVar) {
            c cVarClone;
            try {
                this.c.f = SystemClock.elapsedRealtime() - this.f2885a;
                if (buVar != null) {
                    buVar.f = this.c.b.c();
                }
                if (this.c.b.b() && this.c.f > com.heytap.mcssdk.constant.a.q) {
                    m.a(false, this.c.e);
                }
                if (this.c.b.d()) {
                    m.a(false, this.f);
                }
                boolean zA = br.this.a(this.c.e);
                if (zA) {
                    m.c(this.c);
                    m.a(true, this.d);
                    if (this.c.f > m.e && (cVarClone = this.c.clone()) != null) {
                        cVarClone.m = 1;
                        m.b(cVarClone);
                        new StringBuilder("!!!finish&error-").append(cVarClone.toString());
                        br.a();
                    }
                }
                m.a(this.g.toString(), this.c.b.c(), false, zA);
                new StringBuilder("!!!finish-").append(this.c.toString());
                br.a();
            } catch (Throwable unused) {
            }
        }

        public final void b() {
            this.c.i = SystemClock.elapsedRealtime() - this.b;
        }

        public final void b(int i) {
            this.c.n = i;
        }

        public final void c() {
            this.c.j = SystemClock.elapsedRealtime() - this.b;
        }

        public final void d() {
            c cVarClone = this.c.clone();
            if (this.c.f > m.e) {
                cVarClone.m = 1;
            }
            m.a(cVarClone);
        }
    }

    br() {
        m.e();
        try {
            this.g = UUID.randomUUID().toString().replaceAll(Constants.ACCEPT_TIME_SEPARATOR_SERVER, "").toLowerCase();
        } catch (Throwable th) {
            as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "ic");
        }
    }

    private static int a(Exception exc) {
        if (exc instanceof SSLHandshakeException) {
            return MessageConstant.MessageType.MESSAGE_FIND_PHONE;
        }
        if (exc instanceof SSLKeyException) {
            return MessageConstant.MessageType.MESSAGE_LAUNCH_ALARM;
        }
        if (exc instanceof SSLProtocolException) {
            return MessageConstant.MessageType.MESSAGE_DATA;
        }
        if (exc instanceof SSLPeerUnverifiedException) {
            return 4104;
        }
        if (exc instanceof ConnectException) {
            return 6101;
        }
        if (exc instanceof SocketException) {
            return 6102;
        }
        if (exc instanceof ConnectTimeoutException) {
            return 2101;
        }
        return exc instanceof SocketTimeoutException ? 2102 : 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:104:0x016d A[Catch: all -> 0x01ba, IOException -> 0x01bf, SocketTimeoutException -> 0x01ed, ConnectTimeoutException -> 0x01f2, TRY_ENTER, TryCatch #18 {SocketTimeoutException -> 0x01ed, ConnectTimeoutException -> 0x01f2, IOException -> 0x01bf, all -> 0x01ba, blocks: (B:3:0x0007, B:5:0x0019, B:7:0x0023, B:9:0x0029, B:10:0x0030, B:44:0x00a4, B:104:0x016d, B:105:0x01b9), top: B:158:0x0007 }] */
    /* JADX WARN: Removed duplicated region for block: B:159:0x01fb A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:161:0x0205 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:163:0x020f A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:168:0x0219 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:181:? A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:41:0x009f A[PHI: r2
      0x009f: PHI (r2v11 java.lang.String) = (r2v0 java.lang.String), (r2v19 java.lang.String), (r2v19 java.lang.String) binds: [B:4:0x0017, B:150:0x009f, B:12:0x0040] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00a4 A[Catch: all -> 0x01ba, IOException -> 0x01bf, SocketTimeoutException -> 0x01ed, ConnectTimeoutException -> 0x01f2, TRY_ENTER, TRY_LEAVE, TryCatch #18 {SocketTimeoutException -> 0x01ed, ConnectTimeoutException -> 0x01f2, IOException -> 0x01bf, all -> 0x01ba, blocks: (B:3:0x0007, B:5:0x0019, B:7:0x0023, B:9:0x0029, B:10:0x0030, B:44:0x00a4, B:104:0x016d, B:105:0x01b9), top: B:158:0x0007 }] */
    /* JADX WARN: Type inference failed for: r4v0 */
    /* JADX WARN: Type inference failed for: r4v1 */
    /* JADX WARN: Type inference failed for: r4v11 */
    /* JADX WARN: Type inference failed for: r4v13 */
    /* JADX WARN: Type inference failed for: r4v18 */
    /* JADX WARN: Type inference failed for: r4v2 */
    /* JADX WARN: Type inference failed for: r4v3, types: [java.io.InputStream] */
    /* JADX WARN: Type inference failed for: r4v4 */
    /* JADX WARN: Type inference failed for: r4v7 */
    /* JADX WARN: Type inference failed for: r4v9 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.loc.bu a(com.loc.br.b r15) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 546
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.br.a(com.loc.br$b):com.loc.bu");
    }

    private static String a(String str, String str2) {
        return String.format("platform=Android&sdkversion=%s&product=%s&manufacture=%s&abitype=%s", str, str2, Build.MANUFACTURER, m.c != null ? x.a(m.c) : "");
    }

    static String a(Map<String, String> map) {
        if (map == null) {
            return null;
        }
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : map.entrySet()) {
            String key = entry.getKey();
            String value = entry.getValue();
            if (value == null) {
                value = "";
            }
            if (sb.length() > 0) {
                sb.append("&");
            }
            sb.append(URLEncoder.encode(key));
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(URLEncoder.encode(value));
        }
        return sb.toString();
    }

    public static void a() {
    }

    private void a(Map<String, String> map, HttpURLConnection httpURLConnection) {
        c cVarG;
        if (map != null) {
            try {
                for (String str : map.keySet()) {
                    httpURLConnection.addRequestProperty(str, map.get(str));
                }
            } catch (Throwable th) {
                as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "adh");
                return;
            }
        }
        if (bo.d != null) {
            for (String str2 : bo.d.keySet()) {
                httpURLConnection.addRequestProperty(str2, bo.d.get(str2));
            }
        }
        String strB = "";
        if (!this.m.contains("/v3/iasdkauth") && !TextUtils.isEmpty(this.j) && m.d(this.j)) {
            this.o = true;
            m.g gVarF = m.f(this.j);
            httpURLConnection.addRequestProperty("lct", String.valueOf(gVarF.f3017a));
            httpURLConnection.addRequestProperty("lct-info", gVarF.b);
            httpURLConnection.addRequestProperty("aks", m.c(m.a(this.j)));
            httpURLConnection.addRequestProperty("lct-args", a(m.b(this.j) != null ? m.b(this.j).b() : "", this.j));
        }
        httpURLConnection.addRequestProperty("csid", this.g);
        if (a(this.u.c.e)) {
            f fVar = this.u;
            if (!TextUtils.isEmpty(fVar.c.c)) {
                strB = p.b(bk.a(fVar.c.c.getBytes(), "YXBtX25ldHdvcmtf".getBytes()));
                StringBuilder sb = new StringBuilder("上报本次请求serverIp:");
                sb.append(fVar.c.c);
                sb.append("加密后：");
                sb.append(strB);
            }
            if (!TextUtils.isEmpty(strB)) {
                httpURLConnection.addRequestProperty("sip", strB);
            }
            if (m.j && (cVarG = m.g()) != null) {
                httpURLConnection.addRequestProperty("nls", cVarG.b());
                this.u.e = cVarG;
            }
            a aVarF = m.f();
            if (aVarF != null) {
                httpURLConnection.addRequestProperty("nlf", aVarF.b());
                this.u.d = aVarF;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(String str) {
        if (this.l) {
            return true;
        }
        return (!TextUtils.isEmpty(this.n) && (this.n.contains("rest") || this.n.contains("apilocate"))) || b(str);
    }

    /* JADX WARN: Removed duplicated region for block: B:17:0x003c  */
    /* JADX WARN: Removed duplicated region for block: B:19:0x003f A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0040  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r7, boolean r8) {
        /*
            r6 = this;
            java.lang.String r0 = "#"
            java.lang.String r1 = "lct"
            r2 = 1
            r3 = 0
            java.lang.String r4 = "sc"
            java.lang.Object r4 = r7.get(r4)     // Catch: java.lang.Throwable -> L62
            java.util.List r4 = (java.util.List) r4     // Catch: java.lang.Throwable -> L62
            if (r4 == 0) goto L3c
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L62
            if (r5 <= 0) goto L3c
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L62
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L62
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L3c
            boolean r5 = r4.contains(r0)     // Catch: java.lang.Throwable -> L62
            if (r5 != 0) goto L2a
        L28:
            r0 = 1
            goto L3d
        L2a:
            java.lang.String[] r0 = r4.split(r0)     // Catch: java.lang.Throwable -> L62
            int r4 = r0.length     // Catch: java.lang.Throwable -> L62
            if (r4 <= r2) goto L3c
            java.lang.String r4 = "1"
            r0 = r0[r2]     // Catch: java.lang.Throwable -> L62
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L62
            if (r0 == 0) goto L3c
            goto L28
        L3c:
            r0 = 0
        L3d:
            if (r0 != 0) goto L40
            return r3
        L40:
            if (r8 == 0) goto L63
            boolean r8 = r7.containsKey(r1)     // Catch: java.lang.Throwable -> L62
            if (r8 == 0) goto L62
            java.lang.Object r7 = r7.get(r1)     // Catch: java.lang.Throwable -> L62
            java.util.List r7 = (java.util.List) r7     // Catch: java.lang.Throwable -> L62
            if (r7 == 0) goto L62
            int r8 = r7.size()     // Catch: java.lang.Throwable -> L62
            if (r8 <= 0) goto L62
            long r7 = com.loc.m.a(r7)     // Catch: java.lang.Throwable -> L62
            java.lang.String r0 = r6.j     // Catch: java.lang.Throwable -> L62
            boolean r7 = com.loc.m.a(r0, r7)     // Catch: java.lang.Throwable -> L62
            r2 = r7
            goto L63
        L62:
            r2 = 0
        L63:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.br.a(java.util.Map, boolean):boolean");
    }

    private bs b() {
        try {
            if (t == null || t.get() == null) {
                t = new SoftReference<>(new bs(m.c, this.b));
            }
            bs bsVar = k != null ? t.get() : null;
            return bsVar == null ? new bs(m.c, this.b) : bsVar;
        } catch (Throwable th) {
            av.b(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "gsf");
            return null;
        }
    }

    private static String b(Map<String, List<String>> map) {
        try {
            List<String> list = map.get(com.tkay.expressad.d.a.b.bH);
            if (list == null || list.size() <= 0) {
                return "";
            }
            String str = list.get(0);
            if (TextUtils.isEmpty(str)) {
                return "";
            }
            if (str.contains("#")) {
                String[] strArrSplit = str.split("#");
                if (strArrSplit.length <= 1) {
                    return "";
                }
                str = strArrSplit[0];
            }
            return str;
        } catch (Throwable unused) {
            return "";
        }
    }

    private void b(bt btVar) throws k {
        this.i = new d((byte) 0);
        this.p = btVar.y();
        this.c = btVar.o();
        this.h = btVar.t();
        this.l = btVar.q();
        this.j = btVar.z();
        this.f2879a = q.a().a(btVar.s());
        String strM = btVar.u().b() ? btVar.m() : btVar.l();
        this.m = strM;
        this.m = bq.a(strM, this.j);
        this.n = btVar.g();
        if ("loc".equals(this.j)) {
            String strL = btVar.l();
            String strM2 = btVar.m();
            if (!TextUtils.isEmpty(strL)) {
                try {
                    this.r = new URL(strL).getHost();
                } catch (Exception unused) {
                }
            }
            if (TextUtils.isEmpty(strM2)) {
                return;
            }
            try {
                if (TextUtils.isEmpty(this.n)) {
                    this.q = new URL(strM2).getHost();
                } else {
                    this.q = this.n;
                }
            } catch (Exception unused2) {
            }
        }
    }

    private static boolean b(String str) {
        return str.contains("rest") || str.contains("apilocate");
    }

    /* JADX WARN: Removed duplicated region for block: B:126:0x0260  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x01fe A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:137:0x00cf A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:19:0x005e  */
    /* JADX WARN: Removed duplicated region for block: B:43:0x00cc  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0146 A[Catch: all -> 0x01b4, TryCatch #1 {all -> 0x01b4, blocks: (B:45:0x00cf, B:48:0x00e7, B:50:0x00ea, B:52:0x00ee, B:54:0x00f4, B:58:0x00fd, B:61:0x0109, B:63:0x010c, B:65:0x0112, B:75:0x0140, B:77:0x0146, B:79:0x0150, B:81:0x0161, B:83:0x0189, B:85:0x01aa, B:86:0x01ad, B:66:0x0128, B:68:0x012c, B:70:0x012f, B:72:0x0135, B:73:0x013c), top: B:137:0x00cf }] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x01b9  */
    /* JADX WARN: Removed duplicated region for block: B:94:0x01e5  */
    /* JADX WARN: Removed duplicated region for block: B:95:0x01ea  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x01ed  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.loc.br.b c(com.loc.bt r15) throws com.loc.k, java.io.IOException {
        /*
            Method dump skipped, instruction units count: 672
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.br.c(com.loc.bt):com.loc.br$b");
    }

    final bu a(bt btVar) throws k {
        DataOutputStream dataOutputStream;
        Throwable th;
        OutputStream outputStream;
        HttpURLConnection httpURLConnection = null;
        try {
            try {
                b(btVar);
                bu buVarB = bq.b(this.m, this.j);
                if (buVarB != null) {
                    this.u.d();
                    return buVarB;
                }
                b bVarC = c(btVar);
                HttpURLConnection httpURLConnection2 = bVarC.f2881a;
                try {
                    this.u.b = SystemClock.elapsedRealtime();
                    httpURLConnection2.connect();
                    this.u.a();
                    byte[] bArrD = btVar.d();
                    if (bArrD == null || bArrD.length == 0) {
                        Map<String, String> mapE = btVar.e();
                        if (bo.e != null) {
                            if (mapE != null) {
                                mapE.putAll(bo.e);
                            } else {
                                mapE = bo.e;
                            }
                        }
                        String strA = a(mapE);
                        if (!TextUtils.isEmpty(strA)) {
                            bArrD = x.a(strA);
                        }
                    }
                    if (bArrD != null && bArrD.length > 0) {
                        try {
                            this.u.b = SystemClock.elapsedRealtime();
                            outputStream = httpURLConnection2.getOutputStream();
                            try {
                                dataOutputStream = new DataOutputStream(outputStream);
                                try {
                                    dataOutputStream.write(bArrD);
                                    dataOutputStream.close();
                                    if (outputStream != null) {
                                        outputStream.close();
                                    }
                                    this.u.b();
                                } catch (Throwable th2) {
                                    th = th2;
                                    if (dataOutputStream != null) {
                                        dataOutputStream.close();
                                    }
                                    if (outputStream != null) {
                                        outputStream.close();
                                    }
                                    this.u.b();
                                    throw th;
                                }
                            } catch (Throwable th3) {
                                dataOutputStream = null;
                                th = th3;
                            }
                        } catch (Throwable th4) {
                            dataOutputStream = null;
                            th = th4;
                            outputStream = null;
                        }
                    }
                    bu buVarA = a(bVarC);
                    this.u.a(buVarA);
                    if (httpURLConnection2 != null) {
                        try {
                            httpURLConnection2.disconnect();
                        } catch (Throwable th5) {
                            as.a(th5, DownloadCommon.DOWNLOAD_REPORT_HOST, "mPt");
                        }
                    }
                    this.u.d();
                    return buVarA;
                } catch (k e2) {
                    e = e2;
                } catch (InterruptedIOException unused) {
                    this.u.b(7101);
                    this.u.a(7);
                    throw new k("未知的错误");
                } catch (ConnectException e3) {
                    e = e3;
                    e.printStackTrace();
                    this.u.b(a(e));
                    this.u.a(6);
                    throw new k("http连接失败 - ConnectionException");
                } catch (MalformedURLException e4) {
                    e = e4;
                    e.printStackTrace();
                    this.u.a(8);
                    throw new k("url异常 - MalformedURLException");
                } catch (SocketException e5) {
                    e = e5;
                    e.printStackTrace();
                    this.u.b(a(e));
                    this.u.a(6);
                    throw new k("socket 连接异常 - SocketException");
                } catch (SocketTimeoutException e6) {
                    e = e6;
                    e.printStackTrace();
                    this.u.b(a(e));
                    this.u.a(2);
                    throw new k("socket 连接超时 - SocketTimeoutException");
                } catch (UnknownHostException e7) {
                    e = e7;
                    e.printStackTrace();
                    this.u.a(5);
                    throw new k("未知主机 - UnKnowHostException");
                } catch (SSLException e8) {
                    e = e8;
                    e.printStackTrace();
                    this.u.b(a(e));
                    this.u.a(4);
                    throw new k("IO 操作异常 - IOException");
                } catch (ConnectTimeoutException e9) {
                    e = e9;
                    e.printStackTrace();
                    this.u.b(a(e));
                    this.u.a(2);
                    throw new k("IO 操作异常 - IOException");
                } catch (IOException e10) {
                    e = e10;
                    e.printStackTrace();
                    this.u.a(7);
                    throw new k("IO 操作异常 - IOException");
                } catch (Throwable th6) {
                    th = th6;
                    as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "mPt");
                    this.u.a(9);
                    throw new k("未知的错误");
                }
            } catch (Throwable th7) {
                if (0 != 0) {
                    try {
                        httpURLConnection.disconnect();
                    } catch (Throwable th8) {
                        as.a(th8, DownloadCommon.DOWNLOAD_REPORT_HOST, "mPt");
                    }
                }
                this.u.d();
                throw th7;
            }
        } catch (k e11) {
            e = e11;
        } catch (InterruptedIOException unused2) {
        } catch (ConnectException e12) {
            e = e12;
        } catch (MalformedURLException e13) {
            e = e13;
        } catch (SocketException e14) {
            e = e14;
        } catch (SocketTimeoutException e15) {
            e = e15;
        } catch (UnknownHostException e16) {
            e = e16;
        } catch (SSLException e17) {
            e = e17;
        } catch (ConnectTimeoutException e18) {
            e = e18;
        } catch (IOException e19) {
            e = e19;
        } catch (Throwable th9) {
            th = th9;
        }
        if (!e.i() && e.g() != 10) {
            this.u.a(e.g());
        }
        as.a(e, DownloadCommon.DOWNLOAD_REPORT_HOST, "mPt");
        throw e;
    }
}
