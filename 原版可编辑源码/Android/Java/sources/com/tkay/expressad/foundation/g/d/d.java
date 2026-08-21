package com.tkay.expressad.foundation.g.d;

import android.text.TextUtils;
import com.tkay.expressad.foundation.g.f.f;
import com.tkay.expressad.foundation.g.f.k;
import java.io.File;

public final class d extends com.tkay.expressad.foundation.g.g.a {
    private static final String a = "ImageWorker";
    private String e;
    private String f;
    private String g;
    private boolean h = false;
    private a i;

    public interface a {
        void a(String str, String str2);

        void b(String str, String str2);
    }

    private static void m() {
    }

    @Override
    public final void b() {
    }

    @Override
    public final void c() {
    }

    private String h() {
        return this.e;
    }

    private String i() {
        return this.f;
    }

    private String j() {
        return this.g;
    }

    private boolean k() {
        return this.h;
    }

    public final void a(boolean z) {
        this.h = z;
    }

    private a l() {
        return this.i;
    }

    public final void a(a aVar) {
        this.i = aVar;
    }

    public d(String str, String str2, String str3) {
        this.e = str;
        this.f = str2;
        this.g = str3;
    }

    private void n() {
        try {
            File file = new File(this.g);
            if (!file.exists()) {
                file.mkdirs();
            }
            if (file.exists()) {
                file.delete();
            }
            com.tkay.expressad.foundation.g.f.h.a.a(file, this.f, new f<Void>() {
                @Override
                public final void a() {
                }

                @Override
                public final void a(long j, long j2) {
                }

                @Override
                public final void a(k kVar) {
                    String unused = d.this.g;
                    d.this.d();
                }

                @Override
                public final void a(com.tkay.expressad.foundation.g.f.a.a aVar) {
                    d dVar = d.this;
                    dVar.b(dVar.f, "load image from http faild because http return code: " + aVar.a + ".image url is " + d.this.f);
                }
            });
        } catch (Exception e) {
            b(this.f, e.getMessage());
            if (com.tkay.expressad.b.a) {
                e.printStackTrace();
            }
        } catch (OutOfMemoryError e2) {
            b(this.f, e2.getMessage());
        }
    }

    protected final void d() {
        if (new File(this.g).length() > 0) {
            String str = this.f;
            String str2 = this.g;
            a aVar = this.i;
            if (aVar != null) {
                aVar.a(str, str2);
                return;
            }
            return;
        }
        b(this.f, "load image faild.because file[" + this.g + "] is not exist!");
    }

    private void a(String str, String str2) {
        a aVar = this.i;
        if (aVar != null) {
            aVar.a(str, str2);
        }
    }

    private void b(String str, String str2) {
        a aVar = this.i;
        if (aVar != null) {
            aVar.b(str, str2);
        }
    }

    @Override
    public final void a() {
        if (!this.h) {
            if (TextUtils.isEmpty(this.g)) {
                b(this.f, "save path is null.");
                return;
            }
            File file = new File(this.g);
            if (!file.exists() || file.length() <= 0) {
                n();
                return;
            } else {
                d();
                return;
            }
        }
        n();
    }
}
