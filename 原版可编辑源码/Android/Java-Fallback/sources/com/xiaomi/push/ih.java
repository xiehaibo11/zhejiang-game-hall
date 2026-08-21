package com.xiaomi.push;

public class ih implements com.xiaomi.push.iu<com.xiaomi.push.ih, java.lang.Object>, java.io.Serializable, java.lang.Cloneable {
    private static final com.xiaomi.push.jc a = null;
    private static final com.xiaomi.push.jk a = null;
    public java.util.List<com.xiaomi.push.hs> a;

    static {
            com.xiaomi.push.jk r0 = new com.xiaomi.push.jk
            java.lang.String r1 = "XmPushActionNormalConfig"
            r0.<init>(r1)
            com.xiaomi.push.ih.a = r0
            com.xiaomi.push.jc r0 = new com.xiaomi.push.jc
            java.lang.String r1 = ""
            r2 = 15
            r3 = 1
            r0.<init>(r1, r2, r3)
            com.xiaomi.push.ih.a = r0
            return
    }

    public ih() {
            r0 = this;
            r0.<init>()
            return
    }

    public int a(com.xiaomi.push.ih r3) {
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
            java.util.List<com.xiaomi.push.hs> r0 = r2.a
            java.util.List<com.xiaomi.push.hs> r3 = r3.a
            int r3 = com.xiaomi.push.iv.a(r0, r3)
            if (r3 == 0) goto L4b
            return r3
        L4b:
            r3 = 0
            return r3
    }

    public java.util.List<com.xiaomi.push.hs> a() {
            r1 = this;
            java.util.List<com.xiaomi.push.hs> r0 = r1.a
            return r0
    }

    public void a() {
            r3 = this;
            java.util.List<com.xiaomi.push.hs> r0 = r3.a
            if (r0 == 0) goto L5
            return
        L5:
            com.xiaomi.push.jg r0 = new com.xiaomi.push.jg
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Required field 'normalConfigs' was not present! Struct: "
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
            if (r1 != 0) goto L12
            r5.f()
            r4.a()
            return
        L12:
            short r1 = r0.a
            r2 = 1
            if (r1 == r2) goto L1d
        L17:
            byte r0 = r0.a
            com.xiaomi.push.ji.a(r5, r0)
            goto L48
        L1d:
            byte r1 = r0.a
            r2 = 15
            if (r1 != r2) goto L17
            com.xiaomi.push.jd r0 = r5.a()
            java.util.ArrayList r1 = new java.util.ArrayList
            int r2 = r0.a
            r1.<init>(r2)
            r4.a = r1
            r1 = 0
        L31:
            int r2 = r0.a
            if (r1 >= r2) goto L45
            com.xiaomi.push.hs r2 = new com.xiaomi.push.hs
            r2.<init>()
            r2.a(r5)
            java.util.List<com.xiaomi.push.hs> r3 = r4.a
            r3.add(r2)
            int r1 = r1 + 1
            goto L31
        L45:
            r5.i()
        L48:
            r5.g()
            goto L3
    }

    public boolean a() {
            r1 = this;
            java.util.List<com.xiaomi.push.hs> r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean a(com.xiaomi.push.ih r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.a()
            boolean r2 = r4.a()
            if (r1 != 0) goto L10
            if (r2 == 0) goto L20
        L10:
            if (r1 == 0) goto L22
            if (r2 != 0) goto L15
            goto L22
        L15:
            java.util.List<com.xiaomi.push.hs> r1 = r3.a
            java.util.List<com.xiaomi.push.hs> r4 = r4.a
            boolean r4 = r1.equals(r4)
            if (r4 != 0) goto L20
            return r0
        L20:
            r4 = 1
            return r4
        L22:
            return r0
    }

    @Override
    public void b(com.xiaomi.push.jf r4) {
            r3 = this;
            r3.a()
            com.xiaomi.push.jk r0 = com.xiaomi.push.ih.a
            r4.a(r0)
            java.util.List<com.xiaomi.push.hs> r0 = r3.a
            if (r0 == 0) goto L3d
            com.xiaomi.push.jc r0 = com.xiaomi.push.ih.a
            r4.a(r0)
            com.xiaomi.push.jd r0 = new com.xiaomi.push.jd
            r1 = 12
            java.util.List<com.xiaomi.push.hs> r2 = r3.a
            int r2 = r2.size()
            r0.<init>(r1, r2)
            r4.a(r0)
            java.util.List<com.xiaomi.push.hs> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        L27:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.hs r1 = (com.xiaomi.push.hs) r1
            r1.b(r4)
            goto L27
        L37:
            r4.e()
            r4.b()
        L3d:
            r4.c()
            r4.a()
            return
    }

    @Override
    public int compareTo(java.lang.Object r1) {
            r0 = this;
            com.xiaomi.push.ih r1 = (com.xiaomi.push.ih) r1
            int r1 = r0.a(r1)
            return r1
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3 instanceof com.xiaomi.push.ih
            if (r1 == 0) goto Lf
            com.xiaomi.push.ih r3 = (com.xiaomi.push.ih) r3
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
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "XmPushActionNormalConfig("
            r0.<init>(r1)
            java.lang.String r1 = "normalConfigs:"
            r0.append(r1)
            java.util.List<com.xiaomi.push.hs> r1 = r2.a
            if (r1 != 0) goto L16
            java.lang.String r1 = "null"
            r0.append(r1)
            goto L19
        L16:
            r0.append(r1)
        L19:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
