package com.tkay.expressad.videocommon.b;

import android.text.TextUtils;
import com.tkay.expressad.foundation.h.p;
import com.tkay.expressad.foundation.h.x;
import com.tkay.expressad.videocommon.b.f;
import java.io.File;

public final class h {
    public static final int a = 259200000;
    private static final String b = "HTMLResourceManager";
    private String c;

    h(byte b2) {
        this();
    }

    private static class a {
        public static h a = new h(0);

        private a() {
        }
    }

    private h() {
        this.c = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.i);
    }

    public static h a() {
        return a.a;
    }

    private void c() {
        this.c = com.tkay.expressad.foundation.g.c.f.b(com.tkay.expressad.foundation.g.c.c.i);
    }

    public final void b() {
        try {
            if (TextUtils.isEmpty(this.c)) {
                return;
            }
            f.a.a.a(new com.tkay.expressad.foundation.g.g.a() {
                @Override
                public final void b() {
                }

                @Override
                public final void c() {
                }

                @Override
                public final void a() {
                    com.tkay.expressad.foundation.h.m.c(h.this.c);
                }
            });
        } catch (Exception e) {
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        }
    }

    public final boolean a(String str, byte[] bArr) {
        if (bArr == null) {
            return false;
        }
        try {
            if (bArr.length <= 0) {
                return false;
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.c);
            sb.append("/");
            sb.append(p.a(x.a(str)));
            sb.append(".html");
            return com.tkay.expressad.foundation.h.m.a(bArr, new File(sb.toString()));
        } catch (Exception e) {
            if (!com.tkay.expressad.b.a) {
                return false;
            }
            e.printStackTrace();
            return false;
        }
    }

    public final String a(String str) {
        try {
            String str2 = this.c + "/" + p.a(x.a(str)) + ".html";
            if (new File(str2).exists()) {
                return "file:////".concat(String.valueOf(str2));
            }
            return null;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.a) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }

    public final String b(String str) {
        try {
            File file = new File(this.c + "/" + p.a(x.a(str)) + ".html");
            if (file.length() > 0) {
                return com.tkay.expressad.foundation.h.m.a(file);
            }
            return null;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.a) {
                return null;
            }
            th.printStackTrace();
            return null;
        }
    }
}
