package com.kuaishou.weapon.p0;

public class s {
    public int a;
    public int b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public android.content.Context f;
    public java.lang.ClassLoader g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public android.content.pm.ActivityInfo[] l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public int p;
    public int q;
    public android.content.pm.PackageInfo r;
    public long s;
    public int t;
    public int u;
    public boolean v;
    public int w;
    public int x;
    public boolean y;

    public s() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.x = r0
            return
    }

    public s(android.content.pm.PackageInfo r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.x = r0
            r1.r = r2
            r1.a = r3
            r1.c = r4
            r1.d = r5
            r1.i = r6
            r1.j = r7
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 != 0) goto L8
            return r1
        L8:
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L13
            return r1
        L13:
            com.kuaishou.weapon.p0.s r5 = (com.kuaishou.weapon.p0.s) r5
            java.lang.String r2 = r4.c
            java.lang.String r5 = r5.c
            if (r2 != 0) goto L1e
            if (r5 == 0) goto L25
            return r1
        L1e:
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L25
            return r1
        L25:
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.c
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.hashCode()
        La:
            int r0 = r0 + 31
            return r0
    }
}
