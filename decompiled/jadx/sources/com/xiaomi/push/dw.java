package com.xiaomi.push;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public final class dw {

    public final class a extends e {

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private boolean f250a;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f251b;
        private boolean d;
        private boolean e;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f8116a = 0;

        /* JADX INFO: renamed from: c, reason: collision with other field name */
        private boolean f252c = false;
        private int b = 0;
        private boolean f = false;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private List<String> f249a = Collections.emptyList();
        private int c = -1;

        public static a a(byte[] bArr) {
            return (a) new a().a(bArr);
        }

        public static a b(b bVar) {
            return new a().a(bVar);
        }

        @Override // com.xiaomi.push.e
        public int a() {
            if (this.c < 0) {
                b();
            }
            return this.c;
        }

        public a a(int i) {
            this.f250a = true;
            this.f8116a = i;
            return this;
        }

        @Override // com.xiaomi.push.e
        public a a(b bVar) throws d {
            while (true) {
                int iM129a = bVar.m129a();
                if (iM129a == 0) {
                    return this;
                }
                if (iM129a == 8) {
                    a(bVar.c());
                } else if (iM129a == 16) {
                    a(bVar.m135a());
                } else if (iM129a == 24) {
                    b(bVar.m138b());
                } else if (iM129a == 32) {
                    b(bVar.m135a());
                } else if (iM129a == 42) {
                    a(bVar.m132a());
                } else if (!a(bVar, iM129a)) {
                    return this;
                }
            }
        }

        public a a(String str) {
            if (str == null) {
                throw null;
            }
            if (this.f249a.isEmpty()) {
                this.f249a = new ArrayList();
            }
            this.f249a.add(str);
            return this;
        }

        public a a(boolean z) {
            this.f251b = true;
            this.f252c = z;
            return this;
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public List<String> m231a() {
            return this.f249a;
        }

        @Override // com.xiaomi.push.e
        public void a(c cVar) {
            if (m232a()) {
                cVar.m186b(1, c());
            }
            if (m234c()) {
                cVar.m178a(2, m233b());
            }
            if (m235d()) {
                cVar.m173a(3, d());
            }
            if (f()) {
                cVar.m178a(4, m236e());
            }
            Iterator<String> it = m231a().iterator();
            while (it.hasNext()) {
                cVar.m177a(5, it.next());
            }
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m232a() {
            return this.f250a;
        }

        @Override // com.xiaomi.push.e
        public int b() {
            int iA = 0;
            int iB = m232a() ? c.b(1, c()) + 0 : 0;
            if (m234c()) {
                iB += c.a(2, m233b());
            }
            if (m235d()) {
                iB += c.a(3, d());
            }
            if (f()) {
                iB += c.a(4, m236e());
            }
            Iterator<String> it = m231a().iterator();
            while (it.hasNext()) {
                iA += c.a(it.next());
            }
            int size = iB + iA + (m231a().size() * 1);
            this.c = size;
            return size;
        }

        public a b(int i) {
            this.d = true;
            this.b = i;
            return this;
        }

        public a b(boolean z) {
            this.e = true;
            this.f = z;
            return this;
        }

        /* JADX INFO: renamed from: b, reason: collision with other method in class */
        public boolean m233b() {
            return this.f252c;
        }

        public int c() {
            return this.f8116a;
        }

        /* JADX INFO: renamed from: c, reason: collision with other method in class */
        public boolean m234c() {
            return this.f251b;
        }

        public int d() {
            return this.b;
        }

        /* JADX INFO: renamed from: d, reason: collision with other method in class */
        public boolean m235d() {
            return this.d;
        }

        public int e() {
            return this.f249a.size();
        }

        /* JADX INFO: renamed from: e, reason: collision with other method in class */
        public boolean m236e() {
            return this.f;
        }

        public boolean f() {
            return this.e;
        }
    }
}
