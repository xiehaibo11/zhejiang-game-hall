package com.xiaomi.push;

public class hs implements com.xiaomi.push.iu<com.xiaomi.push.hs, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    private static final com.xiaomi.push.jc b = null;
    private static final com.xiaomi.push.jc c = null;
    public int a;
    public com.xiaomi.push.hp a;
    private java.util.BitSet a;
    public java.util.List<com.xiaomi.push.hu> a;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "NormalConfig"
            r0.<init>(r1)
            com.xiaomi.push.hs.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r1 = 8
            java.lang.String r2 = ""
            r3 = 1
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.hs.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 15
            r4 = 2
            r0.<init>(r2, r3, r4)
            com.xiaomi.push.hs.b = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            r3 = 3
            r0.<init>(r2, r1, r3)
            com.xiaomi.push.hs.c = r0
            return
    }

    public hs() {
            r2 = this;
            r2.<init>()
            java.util.BitSet r0 = new java.util.BitSet
            r1 = 1
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int a(com.xiaomi.push.hs r3) {
            r2 = this;
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L23
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            int r3 = r0.compareTo(r3)
            return r3
        L23:
            boolean r0 = r2.a()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.a()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L3a
            return r0
        L3a:
            boolean r0 = r2.a()
            if (r0 == 0) goto L4b
            int r0 = r2.a
            int r1 = r3.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L4b
            return r0
        L4b:
            boolean r0 = r2.b()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.b()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L62
            return r0
        L62:
            boolean r0 = r2.b()
            if (r0 == 0) goto L73
            java.util.List<com.xiaomi.push.hu> r0 = r2.a
            java.util.List<com.xiaomi.push.hu> r1 = r3.a
            int r0 = com.xiaomi.push.iv.a(r0, r1)
            if (r0 == 0) goto L73
            return r0
        L73:
            boolean r0 = r2.c()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            boolean r1 = r3.c()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            int r0 = r0.compareTo(r1)
            if (r0 == 0) goto L8a
            return r0
        L8a:
            boolean r0 = r2.c()
            if (r0 == 0) goto L9b
            com.xiaomi.push.hp r0 = r2.a
            com.xiaomi.push.hp r3 = r3.a
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L9b
            return r3
        L9b:
            r3 = 0
            return r3
    }

    public com.xiaomi.push.hp a() {
            r1 = this;
            com.xiaomi.push.hp r0 = r1.a
            return r0
    }

    public void a() {
            r3 = this;
            java.util.List<com.xiaomi.push.hu> r0 = r3.a
            if (r0 == 0) goto L5
            return
        L5:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'configItems' was not present! Struct: "
            r1.append(r2)
            java.lang.String r2 = r3.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.jf r5) {
            r4 = this;
            r5.a()
        L3:
            com.xiaomi.push.jc r0 = r5.a()
            byte r1 = r0.a
            if (r1 != 0) goto L33
            r5.f()
            boolean r5 = r4.a()
            if (r5 == 0) goto L18
            r4.a()
            return
        L18:
            com.xiaomi.push.jg r5 = new com.xiaomi.push.jg
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Required field 'version' was not found in serialized data! Struct: "
            r0.append(r1)
            java.lang.String r1 = r4.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L33:
            short r1 = r0.a
            r2 = 8
            r3 = 1
            if (r1 == r3) goto L81
            r3 = 2
            if (r1 == r3) goto L55
            r3 = 3
            if (r1 == r3) goto L46
        L40:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r5, r0)
            goto L8e
        L46:
            byte r1 = r0.a
            if (r1 != r2) goto L40
            int r0 = r5.a()
            com.xiaomi.push.hp r0 = com.xiaomi.push.hp.a(r0)
            r4.a = r0
            goto L8e
        L55:
            byte r1 = r0.a
            r2 = 15
            if (r1 != r2) goto L40
            com.xiaomi.push.jd r0 = r5.a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.a
            r1.<init>(r2)
            r4.a = r1
            r1 = 0
        L69:
            int r2 = r0.a
            if (r1 >= r2) goto L7d
            com.xiaomi.push.hu r2 = new com.xiaomi.push.hu
            r2.<init>()
            r2.a(r5)
            java.util.List<com.xiaomi.push.hu> r3 = r4.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L69
        L7d:
            r5.i()
            goto L8e
        L81:
            byte r1 = r0.a
            if (r1 != r2) goto L40
            int r0 = r5.a()
            r4.a = r0
            r4.a(r3)
        L8e:
            r5.g()
            goto L3
    }

    public void a(boolean r3) {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            r0.set(r1, r3)
            return
    }

    public boolean a() {
            r2 = this;
            java.util.BitSet r0 = r2.a
            r1 = 0
            boolean r0 = r0.get(r1)
            return r0
    }

    public boolean a(com.xiaomi.push.hs r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            int r1 = r3.a
            int r2 = r4.a
            if (r1 == r2) goto Lb
            return r0
        Lb:
            boolean r1 = r3.b()
            boolean r2 = r4.b()
            if (r1 != 0) goto L17
            if (r2 == 0) goto L27
        L17:
            if (r1 == 0) goto L45
            if (r2 != 0) goto L1c
            goto L45
        L1c:
            java.util.List<com.xiaomi.push.hu> r1 = r3.a
            java.util.List<com.xiaomi.push.hu> r2 = r4.a
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L27
            return r0
        L27:
            boolean r1 = r3.c()
            boolean r2 = r4.c()
            if (r1 != 0) goto L33
            if (r2 == 0) goto L43
        L33:
            if (r1 == 0) goto L45
            if (r2 != 0) goto L38
            goto L45
        L38:
            com.xiaomi.push.hp r1 = r3.a
            com.xiaomi.push.hp r4 = r4.a
            boolean r4 = r1.equals(r4)
            if (r4 != 0) goto L43
            return r0
        L43:
            r4 = 1
            return r4
        L45:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.hs.a
            r4.a(r0)
            com.xiaomi.push.jc r0 = com.xiaomi.push.hs.a
            r4.a(r0)
            int r0 = r3.a
            r4.a(r0)
            r4.b()
            java.util.List<com.xiaomi.push.hu> r0 = r3.a
            if (r0 == 0) goto L4a
            com.xiaomi.push.jc r0 = com.xiaomi.push.hs.b
            r4.a(r0)
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            r1 = 12
            java.util.List<com.xiaomi.push.hu> r2 = r3.a
            int r2 = r2.size()
            r0.<init>(r1, r2)
            r4.a(r0)
            java.util.List<com.xiaomi.push.hu> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L34:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L44
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.hu r1 = (com.xiaomi.push.hu) r1
            r1.b(r4)
            goto L34
        L44:
            r4.e()
            r4.b()
        L4a:
            com.xiaomi.push.hp r0 = r3.a
            if (r0 == 0) goto L65
            boolean r0 = r3.c()
            if (r0 == 0) goto L65
            com.xiaomi.push.jc r0 = com.xiaomi.push.hs.c
            r4.a(r0)
            com.xiaomi.push.hp r0 = r3.a
            int r0 = r0.a()
            r4.a(r0)
            r4.b()
        L65:
            r4.c()
            r4.a()
            return
    }

    public boolean b() {
            r1 = this;
            java.util.List<com.xiaomi.push.hu> r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean c() {
            r1 = this;
            com.xiaomi.push.hp r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.hs r1 = (com.xiaomi.push.hs) r1
            int r1 = r0.a(r1)
            return r1
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.hs
            if (r1 == 0) goto Lf
            com.xiaomi.push.hs r3 = (com.xiaomi.push.hs) r3
            boolean r3 = r2.a(r3)
            return r3
        Lf:
            return r0
    }

    public int hashCode() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "NormalConfig("
            r0.<init>(r1)
            java.lang.String r1 = "version:"
            r0.append(r1)
            int r1 = r4.a
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = "configItems:"
            r0.append(r2)
            java.util.List<com.xiaomi.push.hu> r2 = r4.a
            java.lang.String r3 = "null"
            if (r2 != 0) goto L25
            r0.append(r3)
            goto L28
        L25:
            r0.append(r2)
        L28:
            boolean r2 = r4.c()
            if (r2 == 0) goto L41
            r0.append(r1)
            java.lang.String r1 = "type:"
            r0.append(r1)
            com.xiaomi.push.hp r1 = r4.a
            if (r1 != 0) goto L3e
            r0.append(r3)
            goto L41
        L3e:
            r0.append(r1)
        L41:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
