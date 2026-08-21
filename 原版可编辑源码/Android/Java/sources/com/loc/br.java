package com.loc;

import android.net.Uri;
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
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.io.OutputStream;
import java.io.PushbackInputStream;
import java.lang.ref.SoftReference;
import java.net.ConnectException;
import java.net.HttpURLConnection;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.net.MalformedURLException;
import java.net.Proxy;
import java.net.SocketException;
import java.net.SocketTimeoutException;
import java.net.URL;
import java.net.URLConnection;
import java.net.URLEncoder;
import java.net.UnknownHostException;
import java.text.DecimalFormat;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import java.util.Vector;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.zip.GZIPInputStream;
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

public final class br {
    private static SoftReference<SSLContext> k;
    private static SoftReference<bs> t;
    private boolean a;
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

    public static class a implements Cloneable, Comparable {
        public int a;
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
            this.d = cVar.a;
            this.i = cVar.f;
            if (this.f == 10) {
                this.a = 0;
            }
        }

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

        @Override
        public final int compareTo(Object obj) {
            return this.a - ((a) obj).a;
        }
    }

    public static class b {
        public HttpURLConnection a;
        public int b = this.b;
        public int b = this.b;

        public b(HttpURLConnection httpURLConnection) {
            this.a = httpURLConnection;
        }
    }

    public static class c implements Cloneable {
        public String a = "";
        public bt.b b = bt.b.a;
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

        protected final c clone() {
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
            return "RequestInfo{csid='" + this.a + "', degradeType=" + this.b + ", serverIp='" + this.c + "', path='" + this.d + "', hostname='" + this.e + "', totalTime=" + this.f + ", DNSTime=" + this.g + ", connectionTime=" + this.h + ", writeTime=" + this.i + ", readTime=" + this.j + ", serverTime='" + this.k + "', datasize='" + this.l + "', errorcode=" + this.m + ", errorcodeSub=" + this.n + '}';
        }
    }

    private static class d {
        private Vector<e> a;
        private volatile e b;

        private d() {
            this.a = new Vector<>();
            this.b = new e((byte) 0);
        }

        d(byte b) {
            this();
        }

        public final e a(String str) {
            if (TextUtils.isEmpty(str)) {
                return this.b;
            }
            byte b = 0;
            for (int i = 0; i < this.a.size(); i++) {
                e eVar = this.a.get(i);
                if (eVar != null && eVar.a().equals(str)) {
                    return eVar;
                }
            }
            e eVar2 = new e(b);
            eVar2.b(str);
            this.a.add(eVar2);
            return eVar2;
        }
    }

    private static class e implements HostnameVerifier {
        private String a;
        private String b;

        private e() {
        }

        e(byte b) {
            this();
        }

        public final String a() {
            return this.b;
        }

        public final void a(String str) {
            String[] strArrSplit;
            if (TextUtils.isEmpty(this.a) || !str.contains(Constants.COLON_SEPARATOR) || (strArrSplit = str.split(Constants.COLON_SEPARATOR)) == null || strArrSplit.length <= 0) {
                this.a = str;
            } else {
                this.a = strArrSplit[0];
            }
        }

        public final void b(String str) {
            this.b = str;
        }

        @Override
        public final boolean verify(String str, SSLSession sSLSession) {
            HostnameVerifier defaultHostnameVerifier = HttpsURLConnection.getDefaultHostnameVerifier();
            return !TextUtils.isEmpty(this.a) ? this.a.equals(str) : !TextUtils.isEmpty(this.b) ? defaultHostnameVerifier.verify(this.b, sSLSession) : defaultHostnameVerifier.verify(str, sSLSession);
        }
    }

    class f {
        long a = 0;
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
                this.c.f = SystemClock.elapsedRealtime() - this.a;
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
                this.c.f = SystemClock.elapsedRealtime() - this.a;
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
    */
    private bu a(b bVar) throws Throwable {
        ?? r4;
        InputStream inputStream;
        PushbackInputStream pushbackInputStream;
        boolean zA;
        InputStream inputStream2;
        char c2;
        String str = "";
        ByteArrayOutputStream byteArrayOutputStream = null;
        gZIPInputStream = null;
        gZIPInputStream = null;
        gZIPInputStream = null;
        InputStream gZIPInputStream = null;
        byteArrayOutputStream = null;
        byteArrayOutputStream = null;
        try {
            try {
                bq.a();
                HttpURLConnection httpURLConnection = bVar.a;
                Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
                int responseCode = httpURLConnection.getResponseCode();
                if (headerFields == null) {
                    zA = false;
                    if (responseCode == 200) {
                        k kVar = new k("网络异常原因：" + httpURLConnection.getResponseMessage() + " 网络异常状态码：" + responseCode + "  " + str + " " + this.g, str, this.g);
                        kVar.a(httpURLConnection.getResponseMessage());
                        kVar.a(headerFields);
                        this.u.b(responseCode);
                        this.u.a(10);
                        kVar.h();
                        throw kVar;
                    }
                    ByteArrayOutputStream byteArrayOutputStream2 = new ByteArrayOutputStream();
                    try {
                        this.u.b = SystemClock.elapsedRealtime();
                        inputStream = httpURLConnection.getInputStream();
                        try {
                            pushbackInputStream = new PushbackInputStream(inputStream, 2);
                            try {
                                byte[] bArr = new byte[2];
                                pushbackInputStream.read(bArr);
                                pushbackInputStream.unread(bArr);
                                gZIPInputStream = (bArr[0] == 31 && bArr[1] == -117) ? new GZIPInputStream(pushbackInputStream) : pushbackInputStream;
                                byte[] bArr2 = new byte[1024];
                                while (true) {
                                    int i = gZIPInputStream.read(bArr2);
                                    if (i == -1) {
                                        break;
                                    }
                                    byteArrayOutputStream2.write(bArr2, 0, i);
                                }
                                this.u.c();
                                av.c();
                                bu buVar = new bu();
                                buVar.a = byteArrayOutputStream2.toByteArray();
                                buVar.b = headerFields;
                                buVar.c = this.g;
                                buVar.d = str;
                                buVar.e = zA;
                                bq.a(httpURLConnection.getURL(), buVar);
                                this.u.a(buVar.a.length);
                                try {
                                    byteArrayOutputStream2.close();
                                } catch (Throwable th) {
                                    as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
                                }
                                if (inputStream != null) {
                                    try {
                                        inputStream.close();
                                    } catch (Throwable th2) {
                                        as.a(th2, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
                                    }
                                }
                                try {
                                    pushbackInputStream.close();
                                } catch (Throwable th3) {
                                    as.a(th3, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
                                }
                                try {
                                    gZIPInputStream.close();
                                } catch (Throwable th4) {
                                    as.a(th4, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
                                }
                                return buVar;
                            } catch (SocketTimeoutException e2) {
                                e = e2;
                                throw e;
                            } catch (ConnectTimeoutException e3) {
                                e = e3;
                                throw e;
                            } catch (IOException e4) {
                                e = e4;
                                inputStream2 = gZIPInputStream;
                                byteArrayOutputStream = byteArrayOutputStream2;
                                r4 = inputStream2;
                                try {
                                    if (!(e instanceof InterruptedIOException)) {
                                        throw e;
                                    }
                                    k kVar2 = new k("IO 操作异常 - IOException", str, this.g);
                                    if (TextUtils.isEmpty(e.getMessage()) || !e.getMessage().equals("thread interrupted")) {
                                        throw kVar2;
                                    }
                                    kVar2.j();
                                    throw kVar2;
                                } catch (Throwable th5) {
                                    th = th5;
                                }
                            } catch (Throwable th6) {
                                th = th6;
                                r4 = gZIPInputStream;
                                byteArrayOutputStream = byteArrayOutputStream2;
                                if (byteArrayOutputStream != null) {
                                }
                                if (inputStream != null) {
                                }
                                if (pushbackInputStream != null) {
                                }
                                if (r4 != 0) {
                                }
                            }
                        } catch (SocketTimeoutException e5) {
                            e = e5;
                        } catch (ConnectTimeoutException e6) {
                            e = e6;
                        } catch (IOException e7) {
                            e = e7;
                            inputStream2 = null;
                            pushbackInputStream = null;
                        } catch (Throwable th7) {
                            th = th7;
                            r4 = 0;
                            pushbackInputStream = null;
                        }
                    } catch (SocketTimeoutException e8) {
                        e = e8;
                    } catch (ConnectTimeoutException e9) {
                        e = e9;
                    } catch (IOException e10) {
                        e = e10;
                        inputStream2 = null;
                        inputStream = null;
                        pushbackInputStream = null;
                    } catch (Throwable th8) {
                        th = th8;
                        r4 = 0;
                        inputStream = null;
                        pushbackInputStream = null;
                    }
                } else {
                    List<String> list = headerFields.get("gsid");
                    if (list != null && list.size() > 0) {
                        str = list.get(0);
                    }
                    this.u.c.k = b(headerFields);
                    try {
                        if (!TextUtils.isEmpty(this.j)) {
                            if (!this.o) {
                                zA = a(headerFields, true);
                                c2 = 2;
                            } else if (headerFields.containsKey(com.tkay.expressad.d.a.b.bH)) {
                                zA = a(headerFields, false);
                                c2 = 1;
                            } else {
                                m.e(this.j);
                                zA = false;
                                c2 = 0;
                            }
                            try {
                                if (zA) {
                                    if (this.j.equals("loc")) {
                                        String host = this.s;
                                        if (TextUtils.isEmpty(host)) {
                                            host = httpURLConnection.getURL().getHost();
                                        }
                                        m.a(this.j, c2 == 2, host, host, this.n);
                                    } else {
                                        m.b(this.j, c2 == 2);
                                    }
                                } else if (c2 == 1) {
                                    bq.a(false, this.j);
                                }
                            } catch (Throwable unused) {
                            }
                        }
                    } catch (Throwable unused2) {
                    }
                    if (responseCode == 200) {
                    }
                }
            } catch (Throwable th9) {
                th = th9;
                r4 = "";
            }
        } catch (SocketTimeoutException e11) {
            throw e11;
        } catch (ConnectTimeoutException e12) {
            throw e12;
        } catch (IOException e13) {
            e = e13;
            r4 = 0;
            inputStream = null;
            pushbackInputStream = null;
        } catch (Throwable th10) {
            th = th10;
            r4 = 0;
            inputStream = null;
            pushbackInputStream = null;
        }
        if (byteArrayOutputStream != null) {
            try {
                byteArrayOutputStream.close();
            } catch (Throwable th11) {
                as.a(th11, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
            }
        }
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (Throwable th12) {
                as.a(th12, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
            }
        }
        if (pushbackInputStream != null) {
            try {
                pushbackInputStream.close();
            } catch (Throwable th13) {
                as.a(th13, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
            }
        }
        if (r4 != 0) {
            throw th;
        }
        try {
            r4.close();
            throw th;
        } catch (Throwable th14) {
            as.a(th14, DownloadCommon.DOWNLOAD_REPORT_HOST, "par");
            throw th;
        }
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
            httpURLConnection.addRequestProperty("lct", String.valueOf(gVarF.a));
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

    private boolean a(String str) {
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
    */
    private boolean a(Map<String, List<String>> map, boolean z) {
        boolean z2;
        List<String> list;
        try {
            List<String> list2 = map.get(com.tkay.expressad.d.a.b.bH);
            if (list2 == null || list2.size() <= 0) {
                z2 = false;
                if (!z2) {
                    return false;
                }
                if (!z) {
                    return true;
                }
                if (map.containsKey("lct") && (list = map.get("lct")) != null && list.size() > 0) {
                    return m.a(this.j, m.a(list));
                }
            } else {
                String str = list2.get(0);
                if (!TextUtils.isEmpty(str)) {
                    if (str.contains("#")) {
                        String[] strArrSplit = str.split("#");
                        if (strArrSplit.length > 1 && "1".equals(strArrSplit[1])) {
                        }
                        z2 = false;
                        if (!z2) {
                        }
                    }
                    z2 = true;
                    if (!z2) {
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return false;
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
        this.a = q.a().a(btVar.s());
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
    */
    private b c(bt btVar) throws k, IOException {
        String str;
        boolean z;
        URL url;
        URLConnection uRLConnectionA;
        HttpURLConnection httpURLConnection;
        bs bsVarB;
        bt.b bVarU;
        String str2;
        String hostAddress;
        f fVar = this.u;
        bt.b bVarU2 = btVar.u();
        fVar.c.a = br.this.g;
        fVar.c.b = bVarU2;
        fVar.a = SystemClock.elapsedRealtime();
        Map<String, String> mapA = btVar.a();
        if (mapA == null) {
            mapA = new HashMap<>();
        }
        e eVarA = this.i.a(this.n);
        int i = bo.a;
        String string = this.m;
        Uri uri = Uri.parse(string);
        String host = uri.getHost();
        if (i == 1) {
            str = bo.b;
        } else {
            if (i == 2) {
                str = bo.c != null ? bo.c.get(host) : "";
                z = false;
                if (!TextUtils.isEmpty(str)) {
                    btVar.w();
                    string = uri.buildUpon().encodedAuthority(str).build().toString();
                    if (z && mapA != null) {
                        mapA.put("targetHost", host);
                        this.s = host;
                    }
                    if (z && this.a) {
                        eVarA.a(str);
                    }
                }
                this.m = string;
                url = new URL(this.m);
                this.u.a(btVar, url);
                if (b(url.getHost()) && btVar.h()) {
                    bVarU = btVar.u();
                    str2 = this.u.c.e;
                    if (!a(str2) && ((bVarU.b() && m.g) || (bVarU.c() && m.h(str2)))) {
                        try {
                            this.u.b = SystemClock.elapsedRealtime();
                            InetAddress[] allByName = InetAddress.getAllByName(this.u.c.e);
                            if (allByName == null || allByName.length <= 0 || allByName[0] == null) {
                                hostAddress = "";
                            } else {
                                boolean z2 = m.a() && m.c();
                                "---canUseIpv6---".concat(String.valueOf(z2));
                                if (z2) {
                                    for (int i2 = 0; i2 < allByName.length; i2++) {
                                        if (allByName[i2] instanceof Inet6Address) {
                                            hostAddress = "[" + allByName[i2].getHostAddress() + "]";
                                            break;
                                        }
                                    }
                                    hostAddress = "";
                                    if (TextUtils.isEmpty(hostAddress)) {
                                        InetAddress inetAddress = allByName[0];
                                        hostAddress = inetAddress.getHostAddress();
                                        if (inetAddress instanceof Inet6Address) {
                                            hostAddress = "[" + hostAddress + "]";
                                        }
                                    }
                                } else {
                                    for (int i3 = 0; i3 < allByName.length; i3++) {
                                        if (allByName[i3] instanceof Inet4Address) {
                                            hostAddress = allByName[i3].getHostAddress();
                                            break;
                                        }
                                    }
                                    hostAddress = "";
                                    if (TextUtils.isEmpty(hostAddress)) {
                                    }
                                }
                            }
                            f fVar2 = this.u;
                            "---onDNSEnd---ip=".concat(String.valueOf(hostAddress));
                            fVar2.c.c = hostAddress.replace("[", "").replace("]", "");
                            fVar2.c.g = SystemClock.elapsedRealtime() - fVar2.b;
                            if (!TextUtils.isEmpty(hostAddress)) {
                                Uri uri2 = Uri.parse(this.m);
                                String host2 = uri2.getHost();
                                Uri uriBuild = uri2.buildUpon().encodedAuthority(hostAddress).build();
                                this.n = host2;
                                mapA.put("host", host2);
                                if (this.a) {
                                    eVarA.b(host2);
                                }
                                this.m = uriBuild.toString();
                            }
                        } catch (Throwable unused) {
                        }
                    }
                }
                if (this.a) {
                    this.m = q.a(this.m);
                }
                StringBuilder sb = new StringBuilder("是否降级=");
                sb.append(btVar.u());
                sb.append("-最终url=");
                sb.append(this.m);
                URL url2 = new URL(this.m);
                bo.a aVar = this.h;
                uRLConnectionA = aVar == null ? aVar.a() : null;
                if (uRLConnectionA == null) {
                    Proxy proxy = this.c;
                    uRLConnectionA = proxy != null ? url2.openConnection(proxy) : url2.openConnection();
                }
                if (this.a) {
                    httpURLConnection = (HttpURLConnection) uRLConnectionA;
                } else {
                    try {
                        if (k == null || k.get() == null) {
                            k = new SoftReference<>(SSLContext.getInstance("TLS"));
                        }
                    } catch (Throwable unused2) {
                    }
                    SSLContext sSLContext = k != null ? k.get() : null;
                    if (sSLContext == null) {
                        try {
                            sSLContext = SSLContext.getInstance("TLS");
                        } catch (Throwable th) {
                            as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "ne");
                        }
                    }
                    sSLContext.init(null, null, null);
                    this.b = sSLContext;
                    httpURLConnection = (HttpsURLConnection) uRLConnectionA;
                    if (!m.f.a || (bsVarB = b()) == null) {
                        ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(this.b.getSocketFactory());
                    } else {
                        ((HttpsURLConnection) httpURLConnection).setSSLSocketFactory(bsVarB);
                        bsVarB.a();
                    }
                    ((HttpsURLConnection) httpURLConnection).setHostnameVerifier(eVarA);
                }
                if (Build.VERSION.SDK != null && Build.VERSION.SDK_INT > 13) {
                    httpURLConnection.setRequestProperty("Connection", "close");
                }
                int iV = (int) (((long) btVar.v()) - (this.u.c.g / 1000));
                a(mapA, httpURLConnection);
                httpURLConnection.setConnectTimeout(iV);
                httpURLConnection.setReadTimeout(iV);
                httpURLConnection.setRequestMethod("POST");
                httpURLConnection.setUseCaches(false);
                httpURLConnection.setDoInput(true);
                httpURLConnection.setDoOutput(true);
                return new b(httpURLConnection);
            }
            str = "";
        }
        z = true;
        if (!TextUtils.isEmpty(str)) {
        }
        this.m = string;
        url = new URL(this.m);
        this.u.a(btVar, url);
        if (b(url.getHost())) {
            bVarU = btVar.u();
            str2 = this.u.c.e;
            if (a(str2)) {
                if (!a(str2) && ((bVarU.b() && m.g) || (bVarU.c() && m.h(str2)))) {
                }
            }
        }
        if (this.a) {
        }
        StringBuilder sb2 = new StringBuilder("是否降级=");
        sb2.append(btVar.u());
        sb2.append("-最终url=");
        sb2.append(this.m);
        URL url22 = new URL(this.m);
        bo.a aVar2 = this.h;
        if (aVar2 == null) {
        }
        if (uRLConnectionA == null) {
        }
        if (this.a) {
        }
        if (Build.VERSION.SDK != null) {
            httpURLConnection.setRequestProperty("Connection", "close");
        }
        int iV2 = (int) (((long) btVar.v()) - (this.u.c.g / 1000));
        a(mapA, httpURLConnection);
        httpURLConnection.setConnectTimeout(iV2);
        httpURLConnection.setReadTimeout(iV2);
        httpURLConnection.setRequestMethod("POST");
        httpURLConnection.setUseCaches(false);
        httpURLConnection.setDoInput(true);
        httpURLConnection.setDoOutput(true);
        return new b(httpURLConnection);
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
                HttpURLConnection httpURLConnection2 = bVarC.a;
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
