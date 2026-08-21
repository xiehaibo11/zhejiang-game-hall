package com.sigmob.sdk.videoplayer;

public class h {
    public static final java.lang.String a = "URL_KEY_DEFAULT";
    public int b;
    public java.util.LinkedHashMap c;
    public java.util.HashMap<java.lang.String, java.lang.String> d;
    public boolean e;
    public java.lang.Object[] f;
    public java.lang.String title;

    public h(java.lang.Object r4) {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.c = r0
            java.lang.String r0 = ""
            r3.title = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.d = r0
            r0 = 0
            r3.e = r0
            java.util.LinkedHashMap r1 = r3.c
            java.lang.String r2 = "URL_KEY_DEFAULT"
            r1.put(r2, r4)
            r3.b = r0
            return
    }

    public h(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.c = r0
            java.lang.String r0 = ""
            r3.title = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.d = r0
            r0 = 0
            r3.e = r0
            java.util.LinkedHashMap r1 = r3.c
            java.lang.String r2 = "URL_KEY_DEFAULT"
            r1.put(r2, r4)
            r3.b = r0
            return
    }

    public h(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            r3.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r3.c = r0
            java.lang.String r0 = ""
            r3.title = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.d = r0
            r0 = 0
            r3.e = r0
            java.util.LinkedHashMap r1 = r3.c
            java.lang.String r2 = "URL_KEY_DEFAULT"
            r1.put(r2, r4)
            r3.title = r5
            r3.b = r0
            return
    }

    public h(java.util.LinkedHashMap r3) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.c = r0
            java.lang.String r0 = ""
            r2.title = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            r0 = 0
            r2.e = r0
            java.util.LinkedHashMap r1 = r2.c
            r1.clear()
            java.util.LinkedHashMap r1 = r2.c
            r1.putAll(r3)
            r2.b = r0
            return
    }

    public h(java.util.LinkedHashMap r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            r2.c = r0
            java.lang.String r0 = ""
            r2.title = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            r0 = 0
            r2.e = r0
            java.util.LinkedHashMap r1 = r2.c
            r1.clear()
            java.util.LinkedHashMap r1 = r2.c
            r1.putAll(r3)
            r2.title = r4
            r2.b = r0
            return
    }

    public java.lang.Object a() {
            r1 = this;
            int r0 = r1.b
            java.lang.Object r0 = r1.b(r0)
            return r0
    }

    public java.lang.String a(int r4) {
            r3 = this;
            java.util.LinkedHashMap r0 = r3.c
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        Lb:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r0.next()
            if (r1 != r4) goto L1c
            java.lang.String r4 = r2.toString()
            return r4
        L1c:
            int r1 = r1 + 1
            goto Lb
        L1f:
            r4 = 0
            return r4
    }

    public boolean a(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto L9
            java.util.LinkedHashMap r0 = r1.c
            boolean r2 = r0.containsValue(r2)
            return r2
        L9:
            r2 = 0
            return r2
    }

    public java.lang.Object b() {
            r1 = this;
            int r0 = r1.b
            java.lang.String r0 = r1.a(r0)
            return r0
    }

    public java.lang.Object b(int r4) {
            r3 = this;
            java.util.LinkedHashMap r0 = r3.c
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        Lb:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r0.next()
            if (r1 != r4) goto L1e
            java.util.LinkedHashMap r4 = r3.c
            java.lang.Object r4 = r4.get(r2)
            return r4
        L1e:
            int r1 = r1 + 1
            goto Lb
        L21:
            r4 = 0
            return r4
    }

    public com.sigmob.sdk.videoplayer.h c() {
            r3 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.util.LinkedHashMap r1 = r3.c
            r0.putAll(r1)
            com.sigmob.sdk.videoplayer.h r1 = new com.sigmob.sdk.videoplayer.h
            java.lang.String r2 = r3.title
            r1.<init>(r0, r2)
            return r1
    }
}
