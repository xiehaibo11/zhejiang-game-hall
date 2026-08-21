package com.xiaomi.push;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

public final class dw {

    public final class a extends e {
        private boolean a;
        private boolean b;
        private boolean d;
        private boolean e;
        private int a = 0;
        private boolean c = false;
        private int b = 0;
        private boolean f = false;
        private List<String> a = Collections.emptyList();
        private int c = -1;

        public static a a(byte[] bArr) {
            return (a) new a().a(bArr);
        }

        public static a b(b bVar) {
            return new a().a(bVar);
        }

        @Override
        public int a() {
            if (this.c < 0) {
                b();
            }
            return this.c;
        }

        public a a(int i) {
            this.a = true;
            this.a = i;
            return this;
        }

        @Override
        public a a(b bVar) throws d {
            while (true) {
                int iA = bVar.a();
                if (iA == 0) {
                    return this;
                }
                if (iA == 8) {
                    a(bVar.c());
                } else if (iA == 16) {
                    a(bVar.a());
                } else if (iA == 24) {
                    b(bVar.b());
                } else if (iA == 32) {
                    b(bVar.a());
                } else if (iA == 42) {
                    a(bVar.a());
                } else if (!a(bVar, iA)) {
                    return this;
                }
            }
        }

        public a a(String str) {
            if (str == null) {
                throw null;
            }
            if (this.a.isEmpty()) {
                this.a = new ArrayList();
            }
            this.a.add(str);
            return this;
        }

        public a a(boolean z) {
            this.b = true;
            this.c = z;
            return this;
        }

        public List<String> a() {
            return this.a;
        }

        @Override
        public void a(c cVar) {
            if (a()) {
                cVar.b(1, c());
            }
            if (c()) {
                cVar.a(2, b());
            }
            if (d()) {
                cVar.a(3, d());
            }
            if (f()) {
                cVar.a(4, e());
            }
            Iterator<String> it = a().iterator();
            while (it.hasNext()) {
                cVar.a(5, it.next());
            }
        }

        public boolean a() {
            return this.a;
        }

        @Override
        public int b() {
            int iA = 0;
            int iB = a() ? c.b(1, c()) + 0 : 0;
            if (c()) {
                iB += c.a(2, b());
            }
            if (d()) {
                iB += c.a(3, d());
            }
            if (f()) {
                iB += c.a(4, e());
            }
            Iterator<String> it = a().iterator();
            while (it.hasNext()) {
                iA += c.a(it.next());
            }
            int size = iB + iA + (a().size() * 1);
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

        public boolean b() {
            return this.c;
        }

        public int c() {
            return this.a;
        }

        public boolean c() {
            return this.b;
        }

        public int d() {
            return this.b;
        }

        public boolean d() {
            return this.d;
        }

        public int e() {
            return this.a.size();
        }

        public boolean e() {
            return this.f;
        }

        public boolean f() {
            return this.e;
        }
    }
}
