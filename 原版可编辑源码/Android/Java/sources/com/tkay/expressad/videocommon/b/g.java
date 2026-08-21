package com.tkay.expressad.videocommon.b;

import android.net.Uri;
import android.text.TextUtils;
import android.util.Patterns;
import android.webkit.URLUtil;
import com.tkay.expressad.foundation.h.v;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.videocommon.b.f;
import com.tkay.expressad.videocommon.b.h;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class g {
    public static final String a = "ending_page_source";
    public static final String b = "ending_page_save_time";
    private static final String c = "H5DownLoadManager";
    private static volatile g f;
    private CopyOnWriteArrayList<String> d;
    private ConcurrentMap<String, com.tkay.expressad.videocommon.b.b> e;
    private k g;
    private h h;
    private boolean i = false;

    public interface a {
        void a(String str);

        void a(String str, String str2);
    }

    public interface b extends a {
    }

    public interface c {
        void a();

        void a(String str);

        void a(byte[] bArr, String str);
    }

    public interface d extends a {
    }

    private g() {
        try {
            this.g = k.a();
            this.h = h.a.a;
            this.d = new CopyOnWriteArrayList<>();
            this.e = new ConcurrentHashMap();
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    public static g a() {
        if (f == null) {
            synchronized (g.class) {
                if (f == null) {
                    f = new g();
                }
            }
        }
        return f;
    }

    public final String a(String str) {
        k kVar = this.g;
        if (kVar != null) {
            return kVar.a(str);
        }
        return null;
    }

    private String d(String str) {
        h hVar = this.h;
        return hVar != null ? hVar.a(str) : str;
    }

    private void b(String str, d dVar) {
        try {
            if (!TextUtils.isEmpty(this.g.a(str))) {
                if (dVar != null) {
                    dVar.a(str);
                }
            } else {
                if (this.e.containsKey(str)) {
                    com.tkay.expressad.videocommon.b.b bVar = this.e.get(str);
                    if (bVar != null) {
                        bVar.a(dVar);
                        return;
                    }
                    return;
                }
                com.tkay.expressad.videocommon.b.b bVar2 = new com.tkay.expressad.videocommon.b.b(this.e, this.g, dVar, str);
                this.e.put(str, bVar2);
                e.a(str, bVar2);
            }
        } catch (Exception e) {
            if (dVar != null) {
                dVar.a(str, "downloadzip failed");
            }
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
    }

    public final void b(String str) {
        c(str, (b) null);
    }

    public final void a(String str, a aVar) {
        c(str, aVar);
    }

    private void c(final String str, final a aVar) {
        try {
            if (this.d.contains(str)) {
                return;
            }
            this.d.add(str);
            f.a.a.a(new com.tkay.expressad.foundation.g.g.a() {
                @Override
                public final void b() {
                }

                @Override
                public final void c() {
                }

                @Override
                public final void a() {
                    if (!TextUtils.isEmpty(g.this.h.b(str))) {
                        g.this.d.remove(str);
                        a aVar2 = aVar;
                        if (aVar2 != null) {
                            aVar2.a(str);
                            return;
                        }
                        return;
                    }
                    e.a(str, new c() {
                        @Override
                        public final void a() {
                        }

                        @Override
                        public final void a(byte[] bArr, String str2) {
                            try {
                                g.this.d.remove(str2);
                                if (bArr == null || bArr.length <= 0) {
                                    return;
                                }
                                if (g.this.h.a(str2, bArr)) {
                                    if (aVar != null) {
                                        aVar.a(str2);
                                    }
                                } else if (aVar != null) {
                                    aVar.a(str2, "save file failed");
                                }
                            } catch (Exception e) {
                                if (com.tkay.expressad.b.a) {
                                    e.printStackTrace();
                                }
                                if (aVar != null) {
                                    aVar.a(str2, e.getMessage());
                                }
                            }
                        }

                        @Override
                        public final void a(String str2) {
                            try {
                                g.this.d.remove(str);
                                if (aVar != null) {
                                    aVar.a(str, str2);
                                }
                            } catch (Exception e) {
                                if (com.tkay.expressad.b.a) {
                                    e.printStackTrace();
                                }
                                if (aVar != null) {
                                    aVar.a(str, str2);
                                }
                            }
                        }
                    });
                }
            });
        } catch (Throwable th) {
            if (com.tkay.expressad.b.a) {
                th.printStackTrace();
            }
        }
    }

    private static String e(String str) {
        try {
            Object objB = v.b(com.tkay.expressad.foundation.b.b.b().d(), "ending_page_source".concat(String.valueOf(str)), "");
            if (objB == null || !(objB instanceof String)) {
                return null;
            }
            String str2 = (String) objB;
            if (w.b(str2)) {
                return str2;
            }
            return null;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    private static void a(String str, String str2) {
        try {
            v.a(com.tkay.expressad.foundation.b.b.b().d(), "ending_page_source".concat(String.valueOf(str2)), str);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static long f(String str) {
        try {
            Object objB = v.b(com.tkay.expressad.foundation.b.b.b().d(), "ending_page_save_time".concat(String.valueOf(str)), 0L);
            if (objB != null && (objB instanceof Long)) {
                return ((Long) objB).longValue();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return 0L;
    }

    private static void g(String str) {
        try {
            v.a(com.tkay.expressad.foundation.b.b.b().d(), "ending_page_save_time".concat(String.valueOf(str)), Long.valueOf(System.currentTimeMillis()));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private void h(String str) {
        b(str, (a) null);
    }

    public final void b(String str, a aVar) {
        try {
            if (Patterns.WEB_URL.matcher(str).matches() || URLUtil.isValidUrl(str)) {
                String path = Uri.parse(str).getPath();
                if (!TextUtils.isEmpty(path)) {
                    if (path.toLowerCase().endsWith(".zip")) {
                        a(str, (d) aVar);
                        return;
                    } else {
                        c(str, aVar);
                        return;
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (aVar != null) {
            aVar.a(str, "The URL does not contain a path ");
        }
    }

    public final String c(String str) {
        try {
            if (Patterns.WEB_URL.matcher(str).matches() || URLUtil.isValidUrl(str)) {
                Uri uri = Uri.parse(str);
                String path = uri.getPath();
                if (TextUtils.isEmpty(path) || !TextUtils.isEmpty(uri.getQueryParameter("urlDebug"))) {
                    return str;
                }
                if (path.toLowerCase().endsWith(".zip")) {
                    return a(str);
                }
                return this.h != null ? this.h.a(str) : str;
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        return str;
    }

    private void a(String str, d dVar) {
        try {
            if (!TextUtils.isEmpty(this.g.a(str))) {
                if (dVar != null) {
                    dVar.a(str);
                }
            } else {
                if (this.e.containsKey(str)) {
                    com.tkay.expressad.videocommon.b.b bVar = this.e.get(str);
                    if (bVar != null) {
                        bVar.a(dVar);
                        return;
                    }
                    return;
                }
                com.tkay.expressad.videocommon.b.b bVar2 = new com.tkay.expressad.videocommon.b.b(this.e, this.g, dVar, str);
                this.e.put(str, bVar2);
                e.a(str, bVar2);
            }
        } catch (Exception e) {
            if (dVar != null) {
                dVar.a(str, "downloadzip failed");
            }
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
    }
}
