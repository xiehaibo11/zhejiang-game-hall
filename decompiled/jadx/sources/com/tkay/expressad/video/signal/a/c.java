package com.tkay.expressad.video.signal.a;

import android.app.Activity;
import android.content.Context;
import com.tkay.expressad.out.j;
import com.tkay.expressad.video.signal.c;

/* JADX INFO: loaded from: classes3.dex */
public class c implements com.tkay.expressad.video.signal.c {
    protected static final String d = "DefaultJSCommon";
    protected String n;
    protected com.tkay.expressad.videocommon.e.d o;
    protected com.tkay.expressad.videocommon.c.c p;
    protected com.tkay.expressad.a.a q;
    protected boolean e = false;
    protected boolean f = false;
    protected int g = 0;
    protected int h = 0;
    protected int i = 0;
    protected int j = 0;
    protected int k = 0;
    protected int l = 1;
    protected int m = -1;
    public c.a r = new a();
    protected int s = 2;

    @Override // com.tkay.expressad.video.signal.c
    public void a(Activity activity) {
    }

    @Override // com.tkay.expressad.video.signal.c
    public void a(Context context) {
    }

    @Override // com.tkay.expressad.video.signal.c
    public void b(String str) {
    }

    @Override // com.tkay.expressad.video.signal.c
    public String h(int i) {
        return "{}";
    }

    @Override // com.tkay.expressad.video.signal.c
    public String i() {
        return "{}";
    }

    @Override // com.tkay.expressad.video.signal.c
    public void j() {
    }

    @Override // com.tkay.expressad.video.signal.c
    public void l() {
    }

    @Override // com.tkay.expressad.video.signal.c
    public String o() {
        return null;
    }

    private void a(com.tkay.expressad.videocommon.c.c cVar) {
        this.p = cVar;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void a(int i) {
        this.s = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void c(int i) {
        this.g = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void b(int i) {
        this.h = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void d(int i) {
        this.i = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int c() {
        if (this.g == 0 && this.f) {
            this.g = 1;
        }
        return this.g;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int b() {
        if (this.h == 0 && this.f) {
            this.h = 1;
        }
        return this.h;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int d() {
        if (this.i == 0 && this.f) {
            this.i = 1;
        }
        return this.i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void e(int i) {
        this.j = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int e() {
        return this.j;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void f(int i) {
        this.k = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int f() {
        return this.k;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final boolean a() {
        return this.f;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void a(boolean z) {
        this.f = z;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final boolean g() {
        return this.e;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void h() {
        this.e = true;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void a(String str) {
        this.n = str;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void a(c.a aVar) {
        new StringBuilder("setTrackingListener:").append(aVar);
        this.r = aVar;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void a(com.tkay.expressad.videocommon.e.d dVar) {
        new StringBuilder("setSetting:").append(dVar);
        this.o = dVar;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void k() {
        com.tkay.expressad.a.a aVar = this.q;
        if (aVar != null) {
            aVar.a();
            this.q.a((j.c) null);
            this.q.b();
        }
    }

    @Override // com.tkay.expressad.video.signal.c
    public void a(int i, String str) {
        StringBuilder sb = new StringBuilder("statistics,type:");
        sb.append(i);
        sb.append(",json:");
        sb.append(str);
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void g(int i) {
        this.m = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int m() {
        return this.m;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final void i(int i) {
        this.l = i;
    }

    @Override // com.tkay.expressad.video.signal.c
    public final int n() {
        new StringBuilder("getAlertDialogRole ").append(this.l);
        return this.l;
    }

    @Override // com.tkay.expressad.video.signal.d
    public void click(int i, String str) {
        StringBuilder sb = new StringBuilder("click:type");
        sb.append(i);
        sb.append(",pt:");
        sb.append(str);
    }

    @Override // com.tkay.expressad.video.signal.d
    public void handlerH5Exception(int i, String str) {
        StringBuilder sb = new StringBuilder("handlerH5Exception,code=");
        sb.append(i);
        sb.append(",msg:");
        sb.append(str);
    }

    public static class b implements c.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private com.tkay.expressad.video.signal.c f7346a;
        private c.a b;

        @Override // com.tkay.expressad.out.j.c
        public final void b() {
        }

        public b(com.tkay.expressad.video.signal.c cVar, c.a aVar) {
            this.f7346a = cVar;
            this.b = aVar;
        }

        @Override // com.tkay.expressad.out.j.c
        public final boolean a() {
            c.a aVar = this.b;
            return aVar != null && aVar.a();
        }

        @Override // com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.out.d dVar) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(dVar);
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void b(com.tkay.expressad.out.d dVar) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.b(dVar);
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.foundation.d.c cVar, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(cVar, str);
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.out.d dVar, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(dVar, str);
            }
            com.tkay.expressad.video.signal.c cVar = this.f7346a;
            if (cVar != null) {
                cVar.j();
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void b(com.tkay.expressad.out.d dVar, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.b(dVar, str);
            }
            com.tkay.expressad.video.signal.c cVar = this.f7346a;
            if (cVar != null) {
                cVar.j();
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void c(com.tkay.expressad.out.d dVar) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.c(dVar);
            }
        }

        @Override // com.tkay.expressad.out.j.c
        public final void d(com.tkay.expressad.out.d dVar) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.d(dVar);
            }
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public final void c() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.c();
            }
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public final void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(cVar, z);
            }
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public final void a(int i, String str) {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.a(i, str);
            }
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public final void d() {
            c.a aVar = this.b;
            if (aVar != null) {
                aVar.d();
            }
        }
    }

    public static class a implements c.a {
        @Override // com.tkay.expressad.video.signal.c.a
        public void a(com.tkay.expressad.foundation.d.c cVar, boolean z) {
        }

        @Override // com.tkay.expressad.out.j.c
        public final boolean a() {
            return false;
        }

        @Override // com.tkay.expressad.out.j.c
        public final void b() {
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public void c() {
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public void d() {
        }

        @Override // com.tkay.expressad.out.j.c
        public final void a(com.tkay.expressad.out.d dVar) {
            new StringBuilder("onShowLoading,campaign:").append(dVar);
        }

        @Override // com.tkay.expressad.out.j.c
        public final void b(com.tkay.expressad.out.d dVar) {
            new StringBuilder("onDismissLoading,campaign:").append(dVar);
        }

        @Override // com.tkay.expressad.out.j.c
        public void a(com.tkay.expressad.foundation.d.c cVar, String str) {
            StringBuilder sb = new StringBuilder("onStartRedirection,campaign:");
            sb.append(cVar);
            sb.append(",url:");
            sb.append(str);
        }

        @Override // com.tkay.expressad.out.j.c
        public void a(com.tkay.expressad.out.d dVar, String str) {
            StringBuilder sb = new StringBuilder("onFinishRedirection,campaign:");
            sb.append(dVar);
            sb.append(",url:");
            sb.append(str);
        }

        @Override // com.tkay.expressad.out.j.c
        public void b(com.tkay.expressad.out.d dVar, String str) {
            StringBuilder sb = new StringBuilder("onFinishRedirection,campaign:");
            sb.append(dVar);
            sb.append(",url:");
            sb.append(str);
        }

        @Override // com.tkay.expressad.out.j.c
        public final void c(com.tkay.expressad.out.d dVar) {
            new StringBuilder("onDownloadStart,campaign:").append(dVar);
        }

        @Override // com.tkay.expressad.out.j.c
        public final void d(com.tkay.expressad.out.d dVar) {
            new StringBuilder("onDownloadFinish,campaign:").append(dVar);
        }

        @Override // com.tkay.expressad.video.signal.c.a
        public void a(int i, String str) {
            StringBuilder sb = new StringBuilder("onH5Error,code:");
            sb.append(i);
            sb.append("，msg:");
            sb.append(str);
        }
    }
}
