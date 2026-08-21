package com.loc;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.loc.bo;
import com.mbridge.msdk.foundation.download.core.DownloadCommon;
import java.net.Proxy;
import java.util.Map;

public abstract class bt {
    private String d;
    private boolean e;
    private boolean f;
    bo.a o;
    int l = 20000;
    int m = 20000;
    Proxy n = null;
    private boolean a = false;
    private int b = 20000;
    private boolean c = true;
    private a g = a.a;
    private b h = b.a;

    public enum a {
        a(0),
        b(1),
        c(2),
        d(3),
        e(4);

        private int f;

        a(int i) {
            this.f = i;
        }
    }

    public enum b {
        a(0),
        b(1),
        c(2),
        d(3),
        e(4),
        f(5),
        g(6);

        private int h;

        b(int i2) {
            this.h = i2;
        }

        public final int a() {
            return this.h;
        }

        public final boolean b() {
            int i2 = this.h;
            return i2 == a.h || i2 == b.h || i2 == e.h;
        }

        public final boolean c() {
            int i2 = this.h;
            return i2 == c.h || i2 == d.h || i2 == f.h || i2 == g.h;
        }

        public final boolean d() {
            int i2 = this.h;
            return i2 == c.h || i2 == f.h;
        }

        public final boolean e() {
            return this.h == b.h;
        }
    }

    public enum c {
        a(0),
        b(1);

        private int c;

        c(int i) {
            this.c = i;
        }
    }

    private static String a(Map<String, String> map) {
        if (map == null) {
            return null;
        }
        try {
            if (map.containsKey("platinfo")) {
                return c(map.get("platinfo"));
            }
            return null;
        } catch (Throwable th) {
            as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "pnfh");
            return null;
        }
    }

    private String b(String str) {
        byte[] bArrD = d();
        if (bArrD == null || bArrD.length == 0) {
            return str;
        }
        Map<String, String> mapE = e();
        if (bo.e != null) {
            if (mapE != null) {
                mapE.putAll(bo.e);
            } else {
                mapE = bo.e;
            }
        }
        if (mapE == null) {
            return str;
        }
        String strA = br.a(mapE);
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(str);
        stringBuffer.append("?");
        stringBuffer.append(strA);
        return stringBuffer.toString();
    }

    private static String c(String str) {
        String str2;
        String strTrim = "";
        try {
            if (!TextUtils.isEmpty(str)) {
                String[] strArrSplit = str.split("&");
                if (strArrSplit.length > 1) {
                    int length = strArrSplit.length;
                    int i = 0;
                    String str3 = "";
                    while (true) {
                        if (i >= length) {
                            str2 = "";
                            break;
                        }
                        str2 = strArrSplit[i];
                        if (str2.contains("sdkversion")) {
                            str3 = str2;
                        }
                        if (str2.contains("product")) {
                            break;
                        }
                        i++;
                    }
                    if (!TextUtils.isEmpty(str2)) {
                        String[] strArrSplit2 = str2.split(ContainerUtils.KEY_VALUE_DELIMITER);
                        if (strArrSplit2.length > 1) {
                            strTrim = strArrSplit2[1].trim();
                            if (!TextUtils.isEmpty(str3) && TextUtils.isEmpty(ag.a(strTrim))) {
                                String[] strArrSplit3 = str3.split(ContainerUtils.KEY_VALUE_DELIMITER);
                                if (strArrSplit3.length > 1) {
                                    ag.a(strTrim, strArrSplit3[1].trim());
                                }
                            }
                        }
                    }
                }
            }
        } catch (Throwable th) {
            as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "pnfp");
        }
        return strTrim;
    }

    public abstract Map<String, String> a();

    public final void a(int i) {
        this.l = i;
    }

    public final void a(a aVar) {
        this.g = aVar;
    }

    public final void a(b bVar) {
        this.h = bVar;
    }

    public final void a(c cVar) {
        this.f = cVar == c.b;
    }

    public final void a(String str) {
        this.d = str;
    }

    public final void a(Proxy proxy) {
        this.n = proxy;
    }

    public final void a(boolean z) {
        this.e = z;
    }

    public abstract String b();

    public final void b(int i) {
        this.m = i;
    }

    public String c() {
        return b();
    }

    public final void c(int i) {
        this.b = i;
    }

    public String c_() {
        return "";
    }

    public byte[] d() {
        return null;
    }

    public abstract Map<String, String> e();

    protected String g() {
        return "";
    }

    protected boolean h() {
        return this.c;
    }

    final String l() {
        return b(b());
    }

    final String m() {
        return b(c());
    }

    public final int n() {
        return this.l;
    }

    public final Proxy o() {
        return this.n;
    }

    protected final a p() {
        return this.g;
    }

    protected final boolean q() {
        return this.a;
    }

    public final void r() {
        this.a = true;
    }

    protected final boolean s() {
        return this.f;
    }

    public final bo.a t() {
        return this.o;
    }

    protected final b u() {
        return this.h;
    }

    protected final int v() {
        return this.b;
    }

    public final void w() {
        this.c = false;
    }

    protected final String x() {
        return this.d;
    }

    protected final boolean y() {
        return this.e;
    }

    protected final String z() {
        String strC_;
        try {
            strC_ = c_();
            try {
                if (TextUtils.isEmpty(strC_)) {
                    strC_ = this.a ? c(((bp) this).j()) : a(a());
                }
            } catch (Throwable th) {
                th = th;
                as.a(th, DownloadCommon.DOWNLOAD_REPORT_HOST, "pnfr");
            }
        } catch (Throwable th2) {
            th = th2;
            strC_ = "";
        }
        return strC_;
    }
}
