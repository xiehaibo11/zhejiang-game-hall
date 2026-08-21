package com.tkay.expressad.a;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.tkay.expressad.foundation.g.g.a;
import java.io.Serializable;
import java.net.HttpURLConnection;
import java.net.URL;

public final class c extends d {
    private static final boolean i = true;
    private int l;
    private com.tkay.expressad.foundation.g.g.c o;
    private h p;
    private int j = 0;
    private String k = null;
    b a = null;
    private e m = null;
    private boolean n = true;
    private Handler q = new Handler(Looper.getMainLooper());

    static int d(c cVar) {
        int i2 = cVar.j;
        cVar.j = i2 + 1;
        return i2;
    }

    public final boolean a() {
        return this.n;
    }

    public c(Context context) {
        this.o = new com.tkay.expressad.foundation.g.g.c(context, 2);
        this.p = new h(context);
    }

    public final void a(String str, String str2, com.tkay.expressad.foundation.d.c cVar, e eVar, String str3, boolean z, boolean z2, int i2) {
        String strAZ;
        this.k = str3;
        this.m = eVar;
        this.a = null;
        this.l = i2;
        if (cVar != null) {
            z = "5".equals(cVar.ab()) || "6".equals(cVar.ab());
            strAZ = cVar.aZ();
        } else {
            strAZ = "";
        }
        this.p.a(str3, eVar, z, str, strAZ, str2, null, cVar, z, z2, i2);
    }

    private void a(String str, String str2, com.tkay.expressad.foundation.d.c cVar, e eVar, com.tkay.expressad.c.b bVar) {
        this.k = new String(cVar.ad());
        this.m = eVar;
        this.a = null;
        this.p.a(cVar.ad(), eVar, "5".equals(cVar.ab()) || "6".equals(cVar.ab()), str, cVar.aZ(), str2, bVar, cVar, true, false, com.tkay.expressad.a.a.a.l);
    }

    final class 1 implements a.b {
        private 1() {
        }

        @Override
        public final void a(a.a aVar) {
            if (aVar == a.a.e && c.this.n) {
                c.this.q.post(new Runnable() {
                    @Override
                    public final void run() {
                        if (c.this.m != null) {
                            if (c.this.a.g()) {
                                e unused = c.this.m;
                            } else {
                                e unused2 = c.this.m;
                                c.this.a.h();
                            }
                        }
                    }
                });
            }
        }
    }

    @Override
    public final void b() {
        this.n = false;
    }

    private class a extends com.tkay.expressad.foundation.g.g.a {
        @Override
        public final void b() {
        }

        @Override
        public final void c() {
        }

        private a() {
        }

        private a(c cVar, byte b) {
            this();
        }

        /* JADX WARN: Removed duplicated region for block: B:106:0x009f A[EDGE_INSN: B:106:0x009f->B:32:0x009f BREAK  A[LOOP:0: B:5:0x000b->B:67:0x013f], SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:108:0x0108 A[SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:36:0x00b7  */
        /* JADX WARN: Removed duplicated region for block: B:58:0x0102 A[Catch: Exception -> 0x01ed, TryCatch #4 {Exception -> 0x01ed, blocks: (B:3:0x0001, B:7:0x0015, B:10:0x001e, B:17:0x0087, B:47:0x00cc, B:49:0x00d2, B:51:0x00da, B:54:0x00e3, B:56:0x00f2, B:55:0x00eb, B:57:0x00fa, B:58:0x0102, B:60:0x0108, B:61:0x0110, B:63:0x011c, B:64:0x0129, B:67:0x013f, B:34:0x00b3, B:37:0x00b9, B:71:0x0147, B:72:0x014a, B:73:0x014b, B:75:0x015d, B:78:0x0170, B:80:0x0180, B:88:0x01de, B:81:0x019c, B:83:0x01a4, B:86:0x01b5, B:85:0x01ae, B:87:0x01c3), top: B:98:0x0001 }] */
        /* JADX WARN: Removed duplicated region for block: B:61:0x0110 A[Catch: Exception -> 0x01ed, TryCatch #4 {Exception -> 0x01ed, blocks: (B:3:0x0001, B:7:0x0015, B:10:0x001e, B:17:0x0087, B:47:0x00cc, B:49:0x00d2, B:51:0x00da, B:54:0x00e3, B:56:0x00f2, B:55:0x00eb, B:57:0x00fa, B:58:0x0102, B:60:0x0108, B:61:0x0110, B:63:0x011c, B:64:0x0129, B:67:0x013f, B:34:0x00b3, B:37:0x00b9, B:71:0x0147, B:72:0x014a, B:73:0x014b, B:75:0x015d, B:78:0x0170, B:80:0x0180, B:88:0x01de, B:81:0x019c, B:83:0x01a4, B:86:0x01b5, B:85:0x01ae, B:87:0x01c3), top: B:98:0x0001 }] */
        /* JADX WARN: Removed duplicated region for block: B:71:0x0147 A[Catch: Exception -> 0x01ed, TryCatch #4 {Exception -> 0x01ed, blocks: (B:3:0x0001, B:7:0x0015, B:10:0x001e, B:17:0x0087, B:47:0x00cc, B:49:0x00d2, B:51:0x00da, B:54:0x00e3, B:56:0x00f2, B:55:0x00eb, B:57:0x00fa, B:58:0x0102, B:60:0x0108, B:61:0x0110, B:63:0x011c, B:64:0x0129, B:67:0x013f, B:34:0x00b3, B:37:0x00b9, B:71:0x0147, B:72:0x014a, B:73:0x014b, B:75:0x015d, B:78:0x0170, B:80:0x0180, B:88:0x01de, B:81:0x019c, B:83:0x01a4, B:86:0x01b5, B:85:0x01ae, B:87:0x01c3), top: B:98:0x0001 }] */
        /* JADX WARN: Removed duplicated region for block: B:87:0x01c3 A[Catch: Exception -> 0x01ed, TryCatch #4 {Exception -> 0x01ed, blocks: (B:3:0x0001, B:7:0x0015, B:10:0x001e, B:17:0x0087, B:47:0x00cc, B:49:0x00d2, B:51:0x00da, B:54:0x00e3, B:56:0x00f2, B:55:0x00eb, B:57:0x00fa, B:58:0x0102, B:60:0x0108, B:61:0x0110, B:63:0x011c, B:64:0x0129, B:67:0x013f, B:34:0x00b3, B:37:0x00b9, B:71:0x0147, B:72:0x014a, B:73:0x014b, B:75:0x015d, B:78:0x0170, B:80:0x0180, B:88:0x01de, B:81:0x019c, B:83:0x01a4, B:86:0x01b5, B:85:0x01ae, B:87:0x01c3), top: B:98:0x0001 }] */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final void a() throws Throwable {
            HttpURLConnection httpURLConnection;
            String headerField;
            int responseCode;
            String headerField2;
            try {
                c.this.a = new b();
                int i = 0;
                while (true) {
                    HttpURLConnection httpURLConnection2 = null;
                    if (i >= 10) {
                        break;
                    }
                    if (!c.this.n) {
                        return;
                    }
                    c.d(c.this);
                    try {
                        c.this.k = c.this.k.replace(" ", "%20");
                        new StringBuilder("mTargetURL = ").append(c.this.k);
                        httpURLConnection = (HttpURLConnection) new URL(c.this.k).openConnection();
                        try {
                            try {
                                httpURLConnection.setRequestMethod("GET");
                                httpURLConnection.setRequestProperty("User-Agent", com.tkay.core.common.l.d.i());
                                httpURLConnection.setConnectTimeout(15000);
                                httpURLConnection.setReadTimeout(15000);
                                httpURLConnection.setInstanceFollowRedirects(false);
                                httpURLConnection.connect();
                                responseCode = httpURLConnection.getResponseCode();
                                try {
                                    headerField = httpURLConnection.getHeaderField("Location");
                                } catch (Exception e) {
                                    e = e;
                                    headerField = null;
                                }
                            } catch (Exception e2) {
                                e = e2;
                                headerField = null;
                                responseCode = 200;
                                e.printStackTrace();
                                if (i == 0) {
                                    if (httpURLConnection != null) {
                                        httpURLConnection.disconnect();
                                    }
                                    headerField2 = null;
                                    if (responseCode != 301) {
                                        if (!TextUtils.isEmpty(headerField)) {
                                        }
                                    }
                                    if (c.this.k.toLowerCase().startsWith("market:/")) {
                                        c.this.a.c(1);
                                        c.this.a.e(c.this.k);
                                        c.this.a.b(true);
                                    }
                                    c.this.a.d(null);
                                    c.this.a.a(true);
                                }
                                c.this.a.a(false);
                                c.this.a.d(e.getLocalizedMessage());
                                if (httpURLConnection != null) {
                                    httpURLConnection.disconnect();
                                    return;
                                }
                                return;
                            }
                            try {
                                headerField2 = httpURLConnection.getHeaderField("Content-type");
                                if (httpURLConnection != null) {
                                    httpURLConnection.disconnect();
                                }
                            } catch (Exception e3) {
                                e = e3;
                                e.printStackTrace();
                                if (i == 0) {
                                }
                            }
                        } catch (Throwable th) {
                            th = th;
                            httpURLConnection2 = httpURLConnection;
                            if (httpURLConnection2 != null) {
                                httpURLConnection2.disconnect();
                            }
                            throw th;
                        }
                    } catch (Exception e4) {
                        e = e4;
                        httpURLConnection = null;
                        headerField = null;
                    } catch (Throwable th2) {
                        th = th2;
                        if (httpURLConnection2 != null) {
                        }
                        throw th;
                    }
                    if (responseCode != 301 || responseCode == 302 || responseCode == 307) {
                        if (!TextUtils.isEmpty(headerField)) {
                            c.this.a.b(true);
                            break;
                        }
                        if (!headerField.toLowerCase().startsWith("http")) {
                            c.this.k = headerField;
                            c.this.a.b(true);
                            break;
                        } else {
                            c.this.k = headerField;
                            if (c.this.k.toLowerCase().endsWith(com.tkay.china.common.a.a.g)) {
                                break;
                            } else {
                                i++;
                            }
                        }
                    } else if (responseCode == 200) {
                        if (TextUtils.isEmpty(headerField2) || headerField2.indexOf("html") >= 0 || headerField2.indexOf("text") >= 0) {
                            c.this.a.c(2);
                        } else {
                            c.this.a.c(3);
                        }
                        c.this.a.b(true);
                    } else {
                        c.this.a.b(false);
                    }
                }
                if (c.this.k.toLowerCase().startsWith("market:/") && c.this.k.toLowerCase().indexOf("play.google.com") <= 0) {
                    if (!c.this.k.toLowerCase().endsWith(com.tkay.china.common.a.a.g)) {
                        if (c.this.j >= 10 || !c.this.a.k()) {
                            c.this.a.c(2);
                        }
                        c.this.a.e(c.this.k);
                    } else {
                        c.this.a.c(3);
                        c.this.a.e(c.this.k);
                        c.this.a.b(true);
                    }
                } else {
                    c.this.a.c(1);
                    c.this.a.e(c.this.k);
                    c.this.a.b(true);
                }
                c.this.a.d(null);
                c.this.a.a(true);
            } catch (Exception e5) {
                c.this.a.e(c.this.k);
                c.this.a.a(false);
                c.this.a.d(e5.getLocalizedMessage());
                e5.printStackTrace();
            }
        }
    }

    public static class b implements com.tkay.expressad.e.a, Serializable {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;
        private static final long e = 1;
        private boolean f;
        private String g;
        private int h;
        private String i;
        private String j;
        private boolean k;
        private String l;
        private String m;
        private String n;
        private int o;
        private boolean p;
        private int q;

        public final int a() {
            return this.q;
        }

        public final void a(int i) {
            this.q = i;
        }

        private boolean l() {
            return this.p;
        }

        public final void b() {
            this.p = true;
        }

        public final int c() {
            return this.o;
        }

        public final void b(int i) {
            this.o = i;
        }

        public final String d() {
            return this.n;
        }

        public final void a(String str) {
            this.n = str;
        }

        public final String e() {
            return this.m;
        }

        public final void b(String str) {
            this.m = str;
        }

        public final String f() {
            return this.l;
        }

        public final void c(String str) {
            this.l = str;
        }

        private String m() {
            return this.j;
        }

        private void f(String str) {
            this.j = str;
        }

        public final boolean g() {
            return this.f;
        }

        public final void a(boolean z) {
            this.f = z;
        }

        public final String h() {
            return this.g;
        }

        public final void d(String str) {
            this.g = str;
        }

        public final int i() {
            return this.h;
        }

        public final void c(int i) {
            this.h = i;
        }

        public final String j() {
            return this.i;
        }

        public final void e(String str) {
            this.i = str;
        }

        public final boolean k() {
            return this.k;
        }

        public final void b(boolean z) {
            this.k = z;
        }
    }

    private void a(String str, String str2, com.tkay.expressad.foundation.d.c cVar, e eVar) {
        this.k = new String(cVar.ad());
        this.m = eVar;
        this.a = null;
        this.p.a(cVar.ad(), eVar, "5".equals(cVar.ab()) || "6".equals(cVar.ab()), str, cVar.aZ(), str2, null, cVar, true, false, com.tkay.expressad.a.a.a.l);
    }
}
