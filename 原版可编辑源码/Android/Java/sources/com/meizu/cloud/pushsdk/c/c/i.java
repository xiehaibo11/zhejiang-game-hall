package com.meizu.cloud.pushsdk.c.c;

import com.meizu.cloud.pushsdk.c.c.c;
import cz.msebera.android.httpclient.client.methods.HttpPatch;

public class i {
    private final f a;
    private final String b;
    private final c c;
    private final j d;
    private final Object e;

    public class a {
        private f a;
        private String b = "GET";
        private c.a c = new c.a();
        private j d;
        private Object e;

        public a a() {
            return a("GET", (j) null);
        }

        public a a(c cVar) {
            this.c = cVar.c();
            return this;
        }

        public a a(f fVar) {
            if (fVar == null) {
                throw new IllegalArgumentException("url == null");
            }
            this.a = fVar;
            return this;
        }

        public a a(j jVar) {
            return a("POST", jVar);
        }

        /* JADX WARN: Removed duplicated region for block: B:12:0x0045  */
        /* JADX WARN: Removed duplicated region for block: B:14:0x004a  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public a a(String str) {
            StringBuilder sb;
            int i;
            f fVarC;
            if (str == null) {
                throw new IllegalArgumentException("url == null");
            }
            if (!str.regionMatches(true, 0, "ws:", 0, 3)) {
                if (str.regionMatches(true, 0, "wss:", 0, 4)) {
                    sb = new StringBuilder();
                    sb.append("https:");
                    i = 4;
                }
                fVarC = f.c(str);
                if (fVarC == null) {
                    return a(fVarC);
                }
                throw new IllegalArgumentException("unexpected url: " + str);
            }
            sb = new StringBuilder();
            sb.append("http:");
            i = 3;
            sb.append(str.substring(i));
            str = sb.toString();
            fVarC = f.c(str);
            if (fVarC == null) {
            }
        }

        public a a(String str, j jVar) {
            if (str == null || str.length() == 0) {
                throw new IllegalArgumentException("method == null || method.length() == 0");
            }
            if (jVar != null && !d.b(str)) {
                throw new IllegalArgumentException("method " + str + " must not have a request body.");
            }
            if (jVar != null || !d.a(str)) {
                this.b = str;
                this.d = jVar;
                return this;
            }
            throw new IllegalArgumentException("method " + str + " must have a request body.");
        }

        public a a(String str, String str2) {
            this.c.a(str, str2);
            return this;
        }

        public a b() {
            return a("HEAD", (j) null);
        }

        public a b(j jVar) {
            return a("DELETE", jVar);
        }

        public a c(j jVar) {
            return a("PUT", jVar);
        }

        public i c() {
            if (this.a != null) {
                return new i(this);
            }
            throw new IllegalStateException("url == null");
        }

        public a d(j jVar) {
            return a(HttpPatch.METHOD_NAME, jVar);
        }
    }

    private i(a aVar) {
        this.a = aVar.a;
        this.b = aVar.b;
        this.c = aVar.c.a();
        this.d = aVar.d;
        this.e = aVar.e != null ? aVar.e : this;
    }

    public f a() {
        return this.a;
    }

    public String a(String str) {
        return this.c.a(str);
    }

    public String b() {
        return this.b;
    }

    public int c() {
        if ("POST".equals(b())) {
            return 1;
        }
        if ("PUT".equals(b())) {
            return 2;
        }
        if ("DELETE".equals(b())) {
            return 3;
        }
        if ("HEAD".equals(b())) {
            return 4;
        }
        return HttpPatch.METHOD_NAME.equals(b()) ? 5 : 0;
    }

    public c d() {
        return this.c;
    }

    public j e() {
        return this.d;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("Request{method=");
        sb.append(this.b);
        sb.append(", url=");
        sb.append(this.a);
        sb.append(", tag=");
        Object obj = this.e;
        if (obj == this) {
            obj = null;
        }
        sb.append(obj);
        sb.append('}');
        return sb.toString();
    }
}
