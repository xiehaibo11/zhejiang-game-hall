package com.xiaomi.push;

import java.io.IOException;

/* JADX INFO: loaded from: classes4.dex */
public final class dx {

    public final class a extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f255a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f257b;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f259c;

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private boolean f261d;

        /* JADX INFO: renamed from: e, reason: collision with other field name */
        private boolean f263e;

        /* JADX INFO: renamed from: f, reason: collision with other field name */
        private boolean f264f;
        private boolean g;
        private boolean h;
        private boolean i;
        private boolean j;
        private boolean k;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8117a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private long f253a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f254a = "";

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private String f256b = "";

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private String f258c = "";

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private String f260d = "";

        /* JADX INFO: renamed from: e, reason: collision with other field name */
        private String f262e = "";
        private int b = 1;
        private int c = 0;
        private int d = 0;
        private String f = "";
        private int e = -1;

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.e < 0) {
                b();
            }
            return this.e;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public long m237a() {
            return this.f253a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public a m238a() {
            this.f264f = false;
            this.f260d = "";
            return this;
        }

        public a a(int i) {
            this.f255a = true;
            this.f8117a = i;
            return this;
        }

        public a a(long j) {
            this.f257b = true;
            this.f253a = j;
            return this;
        }

        @Override // com.xiaomi.push.e
        public a a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                switch (iM129a) {
                    case 0:
                        return this;
                    case 8:
                        a(bVar.m138b());
                        break;
                    case 16:
                        a(bVar.m139b());
                        break;
                    case 26:
                        a(bVar.m132a());
                        break;
                    case 34:
                        b(bVar.m132a());
                        break;
                    case 42:
                        c(bVar.m132a());
                        break;
                    case 50:
                        d(bVar.m132a());
                        break;
                    case 58:
                        e(bVar.m132a());
                        break;
                    case 64:
                        b(bVar.m138b());
                        break;
                    case 72:
                        c(bVar.m138b());
                        break;
                    case 80:
                        d(bVar.m138b());
                        break;
                    case 90:
                        f(bVar.m132a());
                        break;
                    default:
                        if (!a(bVar, iM129a)) {
                            return this;
                        }
                        break;
                        break;
                }
            }
        }

        public a a(String str) {
            this.f259c = true;
            this.f254a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m239a() {
            return this.f254a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m240a()) {
                cVar.m173a(1, c());
            }
            if (m242b()) {
                cVar.m187b(2, m237a());
            }
            if (m244c()) {
                cVar.m177a(3, m239a());
            }
            if (m246d()) {
                cVar.m177a(4, m241b());
            }
            if (m248e()) {
                cVar.m177a(5, m243c());
            }
            if (m250f()) {
                cVar.m177a(6, m245d());
            }
            if (g()) {
                cVar.m177a(7, m247e());
            }
            if (h()) {
                cVar.m173a(8, d());
            }
            if (i()) {
                cVar.m173a(9, e());
            }
            if (j()) {
                cVar.m173a(10, f());
            }
            if (k()) {
                cVar.m177a(11, m249f());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m240a() {
            return this.f255a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m240a() ? 0 + com.xiaomi.push.c.a(1, c()) : 0;
            if (m242b()) {
                iA += com.xiaomi.push.c.b(2, m237a());
            }
            if (m244c()) {
                iA += com.xiaomi.push.c.a(3, m239a());
            }
            if (m246d()) {
                iA += com.xiaomi.push.c.a(4, m241b());
            }
            if (m248e()) {
                iA += com.xiaomi.push.c.a(5, m243c());
            }
            if (m250f()) {
                iA += com.xiaomi.push.c.a(6, m245d());
            }
            if (g()) {
                iA += com.xiaomi.push.c.a(7, m247e());
            }
            if (h()) {
                iA += com.xiaomi.push.c.a(8, d());
            }
            if (i()) {
                iA += com.xiaomi.push.c.a(9, e());
            }
            if (j()) {
                iA += com.xiaomi.push.c.a(10, f());
            }
            if (k()) {
                iA += com.xiaomi.push.c.a(11, m249f());
            }
            this.e = iA;
            return iA;
        }

        public a b(int i) {
            this.h = true;
            this.b = i;
            return this;
        }

        public a b(String str) {
            this.f261d = true;
            this.f256b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m241b() {
            return this.f256b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m242b() {
            return this.f257b;
        }

        public int c() {
            return this.f8117a;
        }

        public a c(int i) {
            this.i = true;
            this.c = i;
            return this;
        }

        public a c(String str) {
            this.f263e = true;
            this.f258c = str;
            return this;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public String m243c() {
            return this.f258c;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m244c() {
            return this.f259c;
        }

        public int d() {
            return this.b;
        }

        public a d(int i) {
            this.j = true;
            this.d = i;
            return this;
        }

        public a d(String str) {
            this.f264f = true;
            this.f260d = str;
            return this;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public String m245d() {
            return this.f260d;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public boolean m246d() {
            return this.f261d;
        }

        public int e() {
            return this.c;
        }

        public a e(String str) {
            this.g = true;
            this.f262e = str;
            return this;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public String m247e() {
            return this.f262e;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public boolean m248e() {
            return this.f263e;
        }

        public int f() {
            return this.d;
        }

        public a f(String str) {
            this.k = true;
            this.f = str;
            return this;
        }

        /* JADX INFO: renamed from: f, reason: collision with other method in class */
        public String m249f() {
            return this.f;
        }

        /* JADX INFO: renamed from: f, reason: collision with other method in class */
        public boolean m250f() {
            return this.f264f;
        }

        public boolean g() {
            return this.g;
        }

        public boolean h() {
            return this.h;
        }

        public boolean i() {
            return this.i;
        }

        public boolean j() {
            return this.j;
        }

        public boolean k() {
            return this.k;
        }
    }

    public final class b extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f265a;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f267c;

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private boolean f268d;
        private boolean e;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f266b = false;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8118a = 0;
        private int b = 0;
        private int c = 0;
        private int d = -1;

        public static b a(byte[] bArr) {
            return (b) new b().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.d < 0) {
                b();
            }
            return this.d;
        }

        public b a(int i) {
            this.f267c = true;
            this.f8118a = i;
            return this;
        }

        @Override // com.xiaomi.push.e
        public b a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 8) {
                    a(bVar.m135a());
                } else if (iM129a == 24) {
                    a(bVar.m138b());
                } else if (iM129a == 32) {
                    b(bVar.m138b());
                } else if (iM129a == 40) {
                    c(bVar.m138b());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public b a(boolean z) {
            this.f265a = true;
            this.f266b = z;
            return this;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m252b()) {
                cVar.m178a(1, m251a());
            }
            if (m253c()) {
                cVar.m173a(3, c());
            }
            if (m254d()) {
                cVar.m173a(4, d());
            }
            if (m255e()) {
                cVar.m173a(5, e());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m251a() {
            return this.f266b;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m252b() ? 0 + com.xiaomi.push.c.a(1, m251a()) : 0;
            if (m253c()) {
                iA += com.xiaomi.push.c.a(3, c());
            }
            if (m254d()) {
                iA += com.xiaomi.push.c.a(4, d());
            }
            if (m255e()) {
                iA += com.xiaomi.push.c.a(5, e());
            }
            this.d = iA;
            return iA;
        }

        public b b(int i) {
            this.f268d = true;
            this.b = i;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m252b() {
            return this.f265a;
        }

        public int c() {
            return this.f8118a;
        }

        public b c(int i) {
            this.e = true;
            this.c = i;
            return this;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m253c() {
            return this.f267c;
        }

        public int d() {
            return this.b;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public boolean m254d() {
            return this.f268d;
        }

        public int e() {
            return this.c;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public boolean m255e() {
            return this.e;
        }
    }

    public final class c extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f270a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f271b;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f272c;

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private boolean f273d;

        /* JADX INFO: renamed from: e, reason: collision with other field name */
        private boolean f274e;

        /* JADX INFO: renamed from: f, reason: collision with other field name */
        private boolean f275f;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f269a = "";
        private String b = "";
        private String c = "";
        private String d = "";
        private String e = "";
        private String f = "";

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8119a = -1;

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8119a < 0) {
                b();
            }
            return this.f8119a;
        }

        @Override // com.xiaomi.push.e
        public c a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m132a());
                } else if (iM129a == 18) {
                    b(bVar.m132a());
                } else if (iM129a == 26) {
                    c(bVar.m132a());
                } else if (iM129a == 34) {
                    d(bVar.m132a());
                } else if (iM129a == 42) {
                    e(bVar.m132a());
                } else if (iM129a == 50) {
                    f(bVar.m132a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public c a(String str) {
            this.f270a = true;
            this.f269a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m256a() {
            return this.f269a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m257a()) {
                cVar.m177a(1, m256a());
            }
            if (m259b()) {
                cVar.m177a(2, m258b());
            }
            if (m260c()) {
                cVar.m177a(3, c());
            }
            if (m261d()) {
                cVar.m177a(4, d());
            }
            if (m262e()) {
                cVar.m177a(5, e());
            }
            if (m263f()) {
                cVar.m177a(6, f());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m257a() {
            return this.f270a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m257a() ? 0 + com.xiaomi.push.c.a(1, m256a()) : 0;
            if (m259b()) {
                iA += com.xiaomi.push.c.a(2, m258b());
            }
            if (m260c()) {
                iA += com.xiaomi.push.c.a(3, c());
            }
            if (m261d()) {
                iA += com.xiaomi.push.c.a(4, d());
            }
            if (m262e()) {
                iA += com.xiaomi.push.c.a(5, e());
            }
            if (m263f()) {
                iA += com.xiaomi.push.c.a(6, f());
            }
            this.f8119a = iA;
            return iA;
        }

        public c b(String str) {
            this.f271b = true;
            this.b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m258b() {
            return this.b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m259b() {
            return this.f271b;
        }

        public c c(String str) {
            this.f272c = true;
            this.c = str;
            return this;
        }

        public String c() {
            return this.c;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m260c() {
            return this.f272c;
        }

        public c d(String str) {
            this.f273d = true;
            this.d = str;
            return this;
        }

        public String d() {
            return this.d;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public boolean m261d() {
            return this.f273d;
        }

        public c e(String str) {
            this.f274e = true;
            this.e = str;
            return this;
        }

        public String e() {
            return this.e;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public boolean m262e() {
            return this.f274e;
        }

        public c f(String str) {
            this.f275f = true;
            this.f = str;
            return this;
        }

        public String f() {
            return this.f;
        }

        /* JADX INFO: renamed from: f, reason: collision with other method in class */
        public boolean m263f() {
            return this.f275f;
        }
    }

    public final class d extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f277a;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f279c;
        private boolean d;
        private boolean e;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f278b = false;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f276a = "";
        private String b = "";
        private String c = "";

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8120a = -1;

        public static d a(byte[] bArr) {
            return (d) new d().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8120a < 0) {
                b();
            }
            return this.f8120a;
        }

        @Override // com.xiaomi.push.e
        public d a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 8) {
                    a(bVar.m135a());
                } else if (iM129a == 18) {
                    a(bVar.m132a());
                } else if (iM129a == 26) {
                    b(bVar.m132a());
                } else if (iM129a == 34) {
                    c(bVar.m132a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public d a(String str) {
            this.f279c = true;
            this.f276a = str;
            return this;
        }

        public d a(boolean z) {
            this.f277a = true;
            this.f278b = z;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m264a() {
            return this.f276a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m267b()) {
                cVar.m178a(1, m265a());
            }
            if (m268c()) {
                cVar.m177a(2, m264a());
            }
            if (d()) {
                cVar.m177a(3, m266b());
            }
            if (e()) {
                cVar.m177a(4, c());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m265a() {
            return this.f278b;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m267b() ? 0 + com.xiaomi.push.c.a(1, m265a()) : 0;
            if (m268c()) {
                iA += com.xiaomi.push.c.a(2, m264a());
            }
            if (d()) {
                iA += com.xiaomi.push.c.a(3, m266b());
            }
            if (e()) {
                iA += com.xiaomi.push.c.a(4, c());
            }
            this.f8120a = iA;
            return iA;
        }

        public d b(String str) {
            this.d = true;
            this.b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m266b() {
            return this.b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m267b() {
            return this.f277a;
        }

        public d c(String str) {
            this.e = true;
            this.c = str;
            return this;
        }

        public String c() {
            return this.c;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m268c() {
            return this.f279c;
        }

        public boolean d() {
            return this.d;
        }

        public boolean e() {
            return this.e;
        }
    }

    public final class e extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f282a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f284b;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f286c;

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private boolean f288d;

        /* JADX INFO: renamed from: e, reason: collision with other field name */
        private boolean f289e;

        /* JADX INFO: renamed from: f, reason: collision with other field name */
        private boolean f290f;
        private boolean g;
        private boolean h;
        private boolean i;
        private boolean j;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8121a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f281a = "";

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private String f283b = "";

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private String f285c = "";
        private int b = 0;

        /* JADX INFO: renamed from: d, reason: collision with other field name */
        private String f287d = "";
        private String e = "";
        private String f = "";

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private b f280a = null;
        private int c = 0;
        private int d = -1;

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.d < 0) {
                b();
            }
            return this.d;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public b m269a() {
            return this.f280a;
        }

        public e a(int i) {
            this.f282a = true;
            this.f8121a = i;
            return this;
        }

        @Override // com.xiaomi.push.e
        public e a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                switch (iM129a) {
                    case 0:
                        return this;
                    case 8:
                        a(bVar.c());
                        break;
                    case 18:
                        a(bVar.m132a());
                        break;
                    case 26:
                        b(bVar.m132a());
                        break;
                    case 34:
                        c(bVar.m132a());
                        break;
                    case 40:
                        b(bVar.m138b());
                        break;
                    case 50:
                        d(bVar.m132a());
                        break;
                    case 58:
                        e(bVar.m132a());
                        break;
                    case 66:
                        f(bVar.m132a());
                        break;
                    case 74:
                        b bVar2 = new b();
                        bVar.a(bVar2);
                        a(bVar2);
                        break;
                    case 80:
                        c(bVar.m138b());
                        break;
                    default:
                        if (!a(bVar, iM129a)) {
                            return this;
                        }
                        break;
                        break;
                }
            }
        }

        public e a(b bVar) {
            if (bVar == null) {
                throw null;
            }
            this.i = true;
            this.f280a = bVar;
            return this;
        }

        public e a(String str) {
            this.f284b = true;
            this.f281a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m270a() {
            return this.f281a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m271a()) {
                cVar.m186b(1, c());
            }
            if (m273b()) {
                cVar.m177a(2, m270a());
            }
            if (m275c()) {
                cVar.m177a(3, m272b());
            }
            if (m277d()) {
                cVar.m177a(4, m274c());
            }
            if (m279e()) {
                cVar.m173a(5, d());
            }
            if (m280f()) {
                cVar.m177a(6, m276d());
            }
            if (g()) {
                cVar.m177a(7, m278e());
            }
            if (h()) {
                cVar.m177a(8, f());
            }
            if (i()) {
                cVar.m176a(9, (com.xiaomi.push.e) m269a());
            }
            if (j()) {
                cVar.m173a(10, e());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m271a() {
            return this.f282a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iB = m271a() ? 0 + com.xiaomi.push.c.b(1, c()) : 0;
            if (m273b()) {
                iB += com.xiaomi.push.c.a(2, m270a());
            }
            if (m275c()) {
                iB += com.xiaomi.push.c.a(3, m272b());
            }
            if (m277d()) {
                iB += com.xiaomi.push.c.a(4, m274c());
            }
            if (m279e()) {
                iB += com.xiaomi.push.c.a(5, d());
            }
            if (m280f()) {
                iB += com.xiaomi.push.c.a(6, m276d());
            }
            if (g()) {
                iB += com.xiaomi.push.c.a(7, m278e());
            }
            if (h()) {
                iB += com.xiaomi.push.c.a(8, f());
            }
            if (i()) {
                iB += com.xiaomi.push.c.a(9, (com.xiaomi.push.e) m269a());
            }
            if (j()) {
                iB += com.xiaomi.push.c.a(10, e());
            }
            this.d = iB;
            return iB;
        }

        public e b(int i) {
            this.f289e = true;
            this.b = i;
            return this;
        }

        public e b(String str) {
            this.f286c = true;
            this.f283b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m272b() {
            return this.f283b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m273b() {
            return this.f284b;
        }

        public int c() {
            return this.f8121a;
        }

        public e c(int i) {
            this.j = true;
            this.c = i;
            return this;
        }

        public e c(String str) {
            this.f288d = true;
            this.f285c = str;
            return this;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public String m274c() {
            return this.f285c;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m275c() {
            return this.f286c;
        }

        public int d() {
            return this.b;
        }

        public e d(String str) {
            this.f290f = true;
            this.f287d = str;
            return this;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public String m276d() {
            return this.f287d;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public boolean m277d() {
            return this.f288d;
        }

        public int e() {
            return this.c;
        }

        public e e(String str) {
            this.g = true;
            this.e = str;
            return this;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public String m278e() {
            return this.e;
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public boolean m279e() {
            return this.f289e;
        }

        public e f(String str) {
            this.h = true;
            this.f = str;
            return this;
        }

        public String f() {
            return this.f;
        }

        /* JADX INFO: renamed from: f, reason: collision with other method in class */
        public boolean m280f() {
            return this.f290f;
        }

        public boolean g() {
            return this.g;
        }

        public boolean h() {
            return this.h;
        }

        public boolean i() {
            return this.i;
        }

        public boolean j() {
            return this.j;
        }
    }

    public final class f extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f293a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f294b;
        private boolean c;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f292a = "";
        private String b = "";

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private b f291a = null;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8122a = -1;

        public static f a(byte[] bArr) {
            return (f) new f().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8122a < 0) {
                b();
            }
            return this.f8122a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public b m281a() {
            return this.f291a;
        }

        @Override // com.xiaomi.push.e
        public f a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m132a());
                } else if (iM129a == 18) {
                    b(bVar.m132a());
                } else if (iM129a == 26) {
                    b bVar2 = new b();
                    bVar.a(bVar2);
                    a(bVar2);
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public f a(b bVar) {
            if (bVar == null) {
                throw null;
            }
            this.c = true;
            this.f291a = bVar;
            return this;
        }

        public f a(String str) {
            this.f293a = true;
            this.f292a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m282a() {
            return this.f292a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m283a()) {
                cVar.m177a(1, m282a());
            }
            if (m285b()) {
                cVar.m177a(2, m284b());
            }
            if (c()) {
                cVar.m176a(3, (com.xiaomi.push.e) m281a());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m283a() {
            return this.f293a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m283a() ? 0 + com.xiaomi.push.c.a(1, m282a()) : 0;
            if (m285b()) {
                iA += com.xiaomi.push.c.a(2, m284b());
            }
            if (c()) {
                iA += com.xiaomi.push.c.a(3, (com.xiaomi.push.e) m281a());
            }
            this.f8122a = iA;
            return iA;
        }

        public f b(String str) {
            this.f294b = true;
            this.b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m284b() {
            return this.b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m285b() {
            return this.f294b;
        }

        public boolean c() {
            return this.c;
        }
    }

    public final class g extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f296a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f297b;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f298c;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f295a = "";
        private String b = "";
        private String c = "";

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8123a = -1;

        public static g a(byte[] bArr) {
            return (g) new g().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8123a < 0) {
                b();
            }
            return this.f8123a;
        }

        @Override // com.xiaomi.push.e
        public g a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m132a());
                } else if (iM129a == 18) {
                    b(bVar.m132a());
                } else if (iM129a == 26) {
                    c(bVar.m132a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public g a(String str) {
            this.f296a = true;
            this.f295a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m286a() {
            return this.f295a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m287a()) {
                cVar.m177a(1, m286a());
            }
            if (m289b()) {
                cVar.m177a(2, m288b());
            }
            if (m290c()) {
                cVar.m177a(3, c());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m287a() {
            return this.f296a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m287a() ? 0 + com.xiaomi.push.c.a(1, m286a()) : 0;
            if (m289b()) {
                iA += com.xiaomi.push.c.a(2, m288b());
            }
            if (m290c()) {
                iA += com.xiaomi.push.c.a(3, c());
            }
            this.f8123a = iA;
            return iA;
        }

        public g b(String str) {
            this.f297b = true;
            this.b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m288b() {
            return this.b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m289b() {
            return this.f297b;
        }

        public g c(String str) {
            this.f298c = true;
            this.c = str;
            return this;
        }

        public String c() {
            return this.c;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m290c() {
            return this.f298c;
        }
    }

    public final class h extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f300a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f301b;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8124a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f299a = "";
        private int b = -1;

        public static h a(byte[] bArr) {
            return (h) new h().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.b < 0) {
                b();
            }
            return this.b;
        }

        public h a(int i) {
            this.f300a = true;
            this.f8124a = i;
            return this;
        }

        @Override // com.xiaomi.push.e
        public h a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 8) {
                    a(bVar.m138b());
                } else if (iM129a == 18) {
                    a(bVar.m132a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public h a(String str) {
            this.f301b = true;
            this.f299a = str;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m291a() {
            return this.f299a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m292a()) {
                cVar.m173a(1, c());
            }
            if (m293b()) {
                cVar.m177a(2, m291a());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m292a() {
            return this.f300a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m292a() ? 0 + com.xiaomi.push.c.a(1, c()) : 0;
            if (m293b()) {
                iA += com.xiaomi.push.c.a(2, m291a());
            }
            this.b = iA;
            return iA;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m293b() {
            return this.f301b;
        }

        public int c() {
            return this.f8124a;
        }
    }

    public final class i extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f303a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private com.xiaomi.push.a f302a = com.xiaomi.push.a.f8027a;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8125a = -1;

        public static i a(byte[] bArr) {
            return (i) new i().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8125a < 0) {
                b();
            }
            return this.f8125a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public com.xiaomi.push.a m294a() {
            return this.f302a;
        }

        public i a(com.xiaomi.push.a aVar) {
            this.f303a = true;
            this.f302a = aVar;
            return this;
        }

        @Override // com.xiaomi.push.e
        public i a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m131a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m295a()) {
                cVar.m175a(1, m294a());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m295a() {
            return this.f303a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m295a() ? 0 + com.xiaomi.push.c.a(1, m294a()) : 0;
            this.f8125a = iA;
            return iA;
        }
    }

    public final class j extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f306a;
        private boolean b;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private com.xiaomi.push.a f304a = com.xiaomi.push.a.f8027a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private b f305a = null;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8126a = -1;

        public static j a(byte[] bArr) {
            return (j) new j().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.f8126a < 0) {
                b();
            }
            return this.f8126a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public com.xiaomi.push.a m296a() {
            return this.f304a;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public b m297a() {
            return this.f305a;
        }

        public j a(com.xiaomi.push.a aVar) {
            this.f306a = true;
            this.f304a = aVar;
            return this;
        }

        @Override // com.xiaomi.push.e
        public j a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m131a());
                } else if (iM129a == 18) {
                    b bVar2 = new b();
                    bVar.a(bVar2);
                    a(bVar2);
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public j a(b bVar) {
            if (bVar == null) {
                throw null;
            }
            this.b = true;
            this.f305a = bVar;
            return this;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m298a()) {
                cVar.m175a(1, m296a());
            }
            if (m299b()) {
                cVar.m176a(2, (com.xiaomi.push.e) m297a());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m298a() {
            return this.f306a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m298a() ? 0 + com.xiaomi.push.c.a(1, m296a()) : 0;
            if (m299b()) {
                iA += com.xiaomi.push.c.a(2, (com.xiaomi.push.e) m297a());
            }
            this.f8126a = iA;
            return iA;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m299b() {
            return this.b;
        }
    }

    public final class k extends com.xiaomi.push.e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f309a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f312b;
        private boolean c;
        private boolean d;
        private boolean e;
        private boolean g;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private String f308a = "";

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private String f311b = "";

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private long f307a = 0;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private long f310b = 0;
        private boolean f = false;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8127a = 0;
        private int b = -1;

        public static k a(byte[] bArr) {
            return (k) new k().a(bArr);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.b < 0) {
                b();
            }
            return this.b;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public long m300a() {
            return this.f307a;
        }

        public k a(int i) {
            this.g = true;
            this.f8127a = i;
            return this;
        }

        public k a(long j) {
            this.c = true;
            this.f307a = j;
            return this;
        }

        @Override // com.xiaomi.push.e
        public k a(com.xiaomi.push.b bVar) throws com.xiaomi.push.d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 10) {
                    a(bVar.m132a());
                } else if (iM129a == 18) {
                    b(bVar.m132a());
                } else if (iM129a == 24) {
                    a(bVar.m130a());
                } else if (iM129a == 32) {
                    b(bVar.m130a());
                } else if (iM129a == 40) {
                    a(bVar.m135a());
                } else if (iM129a == 48) {
                    a(bVar.m138b());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public k a(String str) {
            this.f309a = true;
            this.f308a = str;
            return this;
        }

        public k a(boolean z) {
            this.e = true;
            this.f = z;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public String m301a() {
            return this.f308a;
        }

        @Override // com.xiaomi.push.e
        public void a(com.xiaomi.push.c cVar) throws IOException {
            if (m302a()) {
                cVar.m177a(1, m301a());
            }
            if (m305b()) {
                cVar.m177a(2, m304b());
            }
            if (m306c()) {
                cVar.m174a(3, m300a());
            }
            if (d()) {
                cVar.m174a(4, m303b());
            }
            if (f()) {
                cVar.m178a(5, e());
            }
            if (g()) {
                cVar.m173a(6, c());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m302a() {
            return this.f309a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = m302a() ? 0 + com.xiaomi.push.c.a(1, m301a()) : 0;
            if (m305b()) {
                iA += com.xiaomi.push.c.a(2, m304b());
            }
            if (m306c()) {
                iA += com.xiaomi.push.c.a(3, m300a());
            }
            if (d()) {
                iA += com.xiaomi.push.c.a(4, m303b());
            }
            if (f()) {
                iA += com.xiaomi.push.c.a(5, e());
            }
            if (g()) {
                iA += com.xiaomi.push.c.a(6, c());
            }
            this.b = iA;
            return iA;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public long m303b() {
            return this.f310b;
        }

        public k b(long j) {
            this.d = true;
            this.f310b = j;
            return this;
        }

        public k b(String str) {
            this.f312b = true;
            this.f311b = str;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public String m304b() {
            return this.f311b;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m305b() {
            return this.f312b;
        }

        public int c() {
            return this.f8127a;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m306c() {
            return this.c;
        }

        public boolean d() {
            return this.d;
        }

        public boolean e() {
            return this.f;
        }

        public boolean f() {
            return this.e;
        }

        public boolean g() {
            return this.g;
        }
    }
}
