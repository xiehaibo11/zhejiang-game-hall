package com.tkay.basead.a.b;

import android.text.TextUtils;
import com.tkay.basead.a.b.d;
import com.tkay.basead.mraid.MraidWebView;
import com.tkay.basead.mraid.d;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.f.j;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class b implements d.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f5565a = b.class.getSimpleName();
    h b;
    j c;
    i d;
    Runnable e = new Runnable() { // from class: com.tkay.basead.a.b.b.1
        @Override // java.lang.Runnable
        public final void run() {
            b.this.a(com.tkay.basead.c.f.a("20001", com.tkay.basead.c.f.p));
        }
    };
    private String f;
    private boolean g;
    private int h;
    private String i;
    private List<String> j;
    private InterfaceC0384b k;
    private com.tkay.basead.a.a.c<Void, com.tkay.basead.c.e> l;
    private MraidWebView m;
    private volatile boolean n;

    /* JADX INFO: renamed from: com.tkay.basead.a.b.b$b, reason: collision with other inner class name */
    public interface InterfaceC0384b {
        void a();

        void a(com.tkay.basead.c.e eVar);
    }

    public b(String str, boolean z, h hVar, i iVar) {
        this.f = str;
        this.g = z;
        this.b = hVar;
        this.d = iVar;
        j jVar = iVar.m;
        this.c = jVar;
        this.h = jVar.m();
        com.tkay.basead.a.b.a aVar = new com.tkay.basead.a.b.a();
        this.l = aVar;
        aVar.a((com.tkay.basead.a.a.b) new a(this, (byte) 0));
    }

    public final void a(InterfaceC0384b interfaceC0384b) {
        h hVar = this.b;
        if (hVar == null || this.l == null) {
            a(com.tkay.basead.c.f.a("-9999", com.tkay.basead.c.f.w));
            return;
        }
        this.i = hVar.p();
        this.k = interfaceC0384b;
        m.a().a(this.e, this.h);
        if (!this.b.g()) {
            this.l.a(1);
            a();
            return;
        }
        this.n = false;
        j jVar = this.c;
        if (jVar != null) {
            String strValueOf = String.valueOf(jVar.t());
            boolean z = strValueOf.equals("1") || strValueOf.equals("3");
            this.l.a(1);
            if (z) {
                this.l.a(2);
                a();
            }
            if (this.n) {
                return;
            }
            boolean zV = this.c.V();
            String strA = com.tkay.basead.mraid.d.a(this.d, this.b);
            if (TextUtils.isEmpty(strA)) {
                a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.F, com.tkay.basead.c.f.L));
            } else if (!zV) {
                b();
            } else {
                m.a().a(new AnonymousClass2(c.a(this.d, this.b), strA));
            }
        }
    }

    private void a() {
        List<String> listB = this.b.b(this.c);
        if (listB == null) {
            a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.l, "Incomplete resource allocation! MissResource: ".concat(String.valueOf(this.b.m()))));
            return;
        }
        int size = listB.size();
        if (size == 0) {
            b();
            return;
        }
        this.j = new ArrayList(size);
        for (int i = 0; i < size; i++) {
            String str = listB.get(i);
            if (!TextUtils.isEmpty(str)) {
                if (this.b.D(str)) {
                    if (!c.b(str, this.c.S()) && !this.j.contains(str)) {
                        StringBuilder sb = new StringBuilder("videoInfo:video file is not ready to play -> ");
                        sb.append(str);
                        sb.append(",need readyRate:");
                        sb.append(this.c.S());
                        this.j.add(str);
                    }
                } else if (!c.c(str) && !this.j.contains(str)) {
                    this.j.add(str);
                }
            }
        }
        int size2 = this.j.size();
        if (size2 == 0) {
            StringBuilder sb2 = new StringBuilder("Offer(");
            sb2.append(this.i);
            sb2.append("), all files have already exist");
            b();
            return;
        }
        d.a().a(this);
        synchronized (this) {
            for (int i2 = 0; i2 < size2; i2++) {
                String str2 = this.j.get(i2);
                boolean zD = this.b.D(str2);
                int iS = this.c.S();
                if (zD) {
                    if (c.b(str2, iS)) {
                        StringBuilder sb3 = new StringBuilder("Video file ready -> ");
                        sb3.append(str2);
                        sb3.append(",videoNeedReadyRate:");
                        sb3.append(iS);
                        d.a().a(str2, iS);
                    } else {
                        StringBuilder sb4 = new StringBuilder("Video file not exis -> ");
                        sb4.append(str2);
                        sb4.append(",videoNeedReadyRate:");
                        sb4.append(iS);
                        new f(this.f, this.b, this.c).a();
                    }
                } else if (!c.a(str2)) {
                    if (c.c(str2)) {
                        c.a(str2, 100);
                        d.a().a(str2, 100);
                    } else {
                        c.a(str2, 0);
                        new e(this.f, this.g, this.b, str2).d();
                    }
                }
            }
        }
    }

    private void a(boolean z) {
        String strA = com.tkay.basead.mraid.d.a(this.d, this.b);
        if (TextUtils.isEmpty(strA)) {
            a(com.tkay.basead.c.f.a(com.tkay.basead.c.f.F, com.tkay.basead.c.f.L));
        } else if (!z) {
            b();
        } else {
            m.a().a(new AnonymousClass2(c.a(this.d, this.b), strA));
        }
    }

    /* JADX INFO: renamed from: com.tkay.basead.a.b.b$2, reason: invalid class name */
    final class AnonymousClass2 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ String f5567a;
        final /* synthetic */ String b;

        AnonymousClass2(String str, String str2) {
            this.f5567a = str;
            this.b = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            b.this.m = new MraidWebView(m.a().f());
            com.tkay.basead.mraid.d.a(this.f5567a, this.b, b.this.m, new d.a() { // from class: com.tkay.basead.a.b.b.2.1
                @Override // com.tkay.basead.mraid.d.a
                public final void a() {
                    b.this.b();
                }

                @Override // com.tkay.basead.mraid.d.a
                public final void a(com.tkay.basead.c.e eVar) {
                    b.this.a(eVar);
                }
            });
        }
    }

    @Override // com.tkay.basead.a.b.d.a
    public final void a(String str, int i) {
        synchronized (this) {
            c.a(str, i);
            if (this.j.contains(str) && ((!this.b.D(str) || this.c.S() <= i) && this.j != null)) {
                this.j.remove(str);
                StringBuilder sb = new StringBuilder();
                sb.append(this.i);
                sb.append(" onResourceLoadSuccess -> resourceUrl:");
                sb.append(str);
                sb.append(",curmUrlList.size():");
                sb.append(this.j.size());
                if (this.j.size() == 0) {
                    b();
                }
            }
        }
    }

    @Override // com.tkay.basead.a.b.d.a
    public final void a(String str, com.tkay.basead.c.e eVar) {
        synchronized (this) {
            c.a(str, -1);
            a(eVar);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        com.tkay.basead.a.a.c<Void, com.tkay.basead.c.e> cVar = this.l;
        if (cVar != null) {
            cVar.a();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(com.tkay.basead.c.e eVar) {
        this.n = true;
        com.tkay.basead.a.a.c<Void, com.tkay.basead.c.e> cVar = this.l;
        if (cVar != null) {
            cVar.a(eVar);
        }
    }

    private class a implements com.tkay.basead.a.a.b<Void, com.tkay.basead.c.e> {
        private a() {
        }

        /* synthetic */ a(b bVar, byte b) {
            this();
        }

        @Override // com.tkay.basead.a.a.b
        public final /* synthetic */ void a(com.tkay.basead.c.e eVar) {
            com.tkay.basead.c.e eVar2 = eVar;
            if (b.this.k != null) {
                String str = b.f5565a;
                new StringBuilder("Offer load failed, OfferId -> ").append(b.this.i);
                b.this.k.a(eVar2);
            }
            b.e(b.this);
        }

        private void b() {
            if (b.this.k != null) {
                String str = b.f5565a;
                new StringBuilder("Offer load success, OfferId -> ").append(b.this.i);
                b.this.k.a();
            }
            b.e(b.this);
        }

        /* JADX INFO: renamed from: a, reason: avoid collision after fix types in other method */
        private void a2(com.tkay.basead.c.e eVar) {
            if (b.this.k != null) {
                String str = b.f5565a;
                new StringBuilder("Offer load failed, OfferId -> ").append(b.this.i);
                b.this.k.a(eVar);
            }
            b.e(b.this);
        }

        @Override // com.tkay.basead.a.a.b
        public final /* synthetic */ void a() {
            if (b.this.k != null) {
                String str = b.f5565a;
                new StringBuilder("Offer load success, OfferId -> ").append(b.this.i);
                b.this.k.a();
            }
            b.e(b.this);
        }
    }

    private void c() {
        d.a().b(this);
        m.a().c(this.e);
    }

    private void d() {
        m.a().a(this.e, this.h);
    }

    static /* synthetic */ void e(b bVar) {
        d.a().b(bVar);
        m.a().c(bVar.e);
    }
}
