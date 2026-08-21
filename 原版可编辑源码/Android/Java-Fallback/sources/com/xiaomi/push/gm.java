package com.xiaomi.push;

public class gm extends com.xiaomi.push.gn {
    private boolean a;
    private java.lang.String b;
    private boolean b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;

    public gm() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            r2.c = r0
            r0 = 0
            r2.a = r0
            java.lang.String r1 = ""
            r2.i = r1
            r2.j = r1
            r2.k = r1
            r2.l = r1
            r2.b = r0
            return
    }

    public gm(android.os.Bundle r3) {
            r2 = this;
            r2.<init>(r3)
            r0 = 0
            r2.b = r0
            r2.c = r0
            r0 = 0
            r2.a = r0
            java.lang.String r1 = ""
            r2.i = r1
            r2.j = r1
            r2.k = r1
            r2.l = r1
            r2.b = r0
            java.lang.String r1 = "ext_msg_type"
            java.lang.String r1 = r3.getString(r1)
            r2.b = r1
            java.lang.String r1 = "ext_msg_lang"
            java.lang.String r1 = r3.getString(r1)
            r2.d = r1
            java.lang.String r1 = "ext_msg_thread"
            java.lang.String r1 = r3.getString(r1)
            r2.c = r1
            java.lang.String r1 = "ext_msg_sub"
            java.lang.String r1 = r3.getString(r1)
            r2.e = r1
            java.lang.String r1 = "ext_msg_body"
            java.lang.String r1 = r3.getString(r1)
            r2.f = r1
            java.lang.String r1 = "ext_body_encode"
            java.lang.String r1 = r3.getString(r1)
            r2.g = r1
            java.lang.String r1 = "ext_msg_appid"
            java.lang.String r1 = r3.getString(r1)
            r2.h = r1
            java.lang.String r1 = "ext_msg_trans"
            boolean r1 = r3.getBoolean(r1, r0)
            r2.a = r1
            java.lang.String r1 = "ext_msg_encrypt"
            boolean r0 = r3.getBoolean(r1, r0)
            r2.b = r0
            java.lang.String r0 = "ext_msg_seq"
            java.lang.String r0 = r3.getString(r0)
            r2.i = r0
            java.lang.String r0 = "ext_msg_mseq"
            java.lang.String r0 = r3.getString(r0)
            r2.j = r0
            java.lang.String r0 = "ext_msg_fseq"
            java.lang.String r0 = r3.getString(r0)
            r2.k = r0
            java.lang.String r0 = "ext_msg_status"
            java.lang.String r3 = r3.getString(r0)
            r2.l = r3
            return
    }

    @Override
    public android.os.Bundle a() {
            r4 = this;
            android.os.Bundle r0 = super.a()
            java.lang.String r1 = r4.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L13
            java.lang.String r1 = r4.b
            java.lang.String r2 = "ext_msg_type"
            r0.putString(r2, r1)
        L13:
            java.lang.String r1 = r4.d
            if (r1 == 0) goto L1c
            java.lang.String r2 = "ext_msg_lang"
            r0.putString(r2, r1)
        L1c:
            java.lang.String r1 = r4.e
            if (r1 == 0) goto L25
            java.lang.String r2 = "ext_msg_sub"
            r0.putString(r2, r1)
        L25:
            java.lang.String r1 = r4.f
            if (r1 == 0) goto L2e
            java.lang.String r2 = "ext_msg_body"
            r0.putString(r2, r1)
        L2e:
            java.lang.String r1 = r4.g
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L3d
            java.lang.String r1 = r4.g
            java.lang.String r2 = "ext_body_encode"
            r0.putString(r2, r1)
        L3d:
            java.lang.String r1 = r4.c
            if (r1 == 0) goto L46
            java.lang.String r2 = "ext_msg_thread"
            r0.putString(r2, r1)
        L46:
            java.lang.String r1 = r4.h
            if (r1 == 0) goto L4f
            java.lang.String r2 = "ext_msg_appid"
            r0.putString(r2, r1)
        L4f:
            boolean r1 = r4.a
            r2 = 1
            if (r1 == 0) goto L59
            java.lang.String r1 = "ext_msg_trans"
            r0.putBoolean(r1, r2)
        L59:
            java.lang.String r1 = r4.i
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L68
            java.lang.String r1 = r4.i
            java.lang.String r3 = "ext_msg_seq"
            r0.putString(r3, r1)
        L68:
            java.lang.String r1 = r4.j
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L77
            java.lang.String r1 = r4.j
            java.lang.String r3 = "ext_msg_mseq"
            r0.putString(r3, r1)
        L77:
            java.lang.String r1 = r4.k
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L86
            java.lang.String r1 = r4.k
            java.lang.String r3 = "ext_msg_fseq"
            r0.putString(r3, r1)
        L86:
            boolean r1 = r4.b
            if (r1 == 0) goto L8f
            java.lang.String r1 = "ext_msg_encrypt"
            r0.putBoolean(r1, r2)
        L8f:
            java.lang.String r1 = r4.l
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L9e
            java.lang.String r1 = r4.l
            java.lang.String r2 = "ext_msg_status"
            r0.putString(r2, r1)
        L9e:
            return r0
    }

    @Override
    public java.lang.String a() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<message"
            r0.append(r1)
            java.lang.String r1 = r4.p()
            java.lang.String r2 = "\""
            if (r1 == 0) goto L21
            java.lang.String r1 = " xmlns=\""
            r0.append(r1)
            java.lang.String r1 = r4.p()
            r0.append(r1)
            r0.append(r2)
        L21:
            java.lang.String r1 = r4.d
            if (r1 == 0) goto L34
            java.lang.String r1 = " xml:lang=\""
            r0.append(r1)
            java.lang.String r1 = r4.h()
            r0.append(r1)
            r0.append(r2)
        L34:
            java.lang.String r1 = r4.j()
            if (r1 == 0) goto L49
            java.lang.String r1 = " id=\""
            r0.append(r1)
            java.lang.String r1 = r4.j()
            r0.append(r1)
            r0.append(r2)
        L49:
            java.lang.String r1 = r4.l()
            if (r1 == 0) goto L62
            java.lang.String r1 = " to=\""
            r0.append(r1)
            java.lang.String r1 = r4.l()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        L62:
            java.lang.String r1 = r4.d()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L7b
            java.lang.String r1 = " seq=\""
            r0.append(r1)
            java.lang.String r1 = r4.d()
            r0.append(r1)
            r0.append(r2)
        L7b:
            java.lang.String r1 = r4.e()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L94
            java.lang.String r1 = " mseq=\""
            r0.append(r1)
            java.lang.String r1 = r4.e()
            r0.append(r1)
            r0.append(r2)
        L94:
            java.lang.String r1 = r4.f()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lad
            java.lang.String r1 = " fseq=\""
            r0.append(r1)
            java.lang.String r1 = r4.f()
            r0.append(r1)
            r0.append(r2)
        Lad:
            java.lang.String r1 = r4.g()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Lc6
            java.lang.String r1 = " status=\""
            r0.append(r1)
            java.lang.String r1 = r4.g()
            r0.append(r1)
            r0.append(r2)
        Lc6:
            java.lang.String r1 = r4.m()
            if (r1 == 0) goto Ldf
            java.lang.String r1 = " from=\""
            r0.append(r1)
            java.lang.String r1 = r4.m()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        Ldf:
            java.lang.String r1 = r4.k()
            if (r1 == 0) goto Lf8
            java.lang.String r1 = " chid=\""
            r0.append(r1)
            java.lang.String r1 = r4.k()
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            r0.append(r2)
        Lf8:
            boolean r1 = r4.a
            if (r1 == 0) goto L101
            java.lang.String r1 = " transient=\"true\""
            r0.append(r1)
        L101:
            java.lang.String r1 = r4.h
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L118
            java.lang.String r1 = " appid=\""
            r0.append(r1)
            java.lang.String r1 = r4.c()
            r0.append(r1)
            r0.append(r2)
        L118:
            java.lang.String r1 = r4.b
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L12d
            java.lang.String r1 = " type=\""
            r0.append(r1)
            java.lang.String r1 = r4.b
            r0.append(r1)
            r0.append(r2)
        L12d:
            boolean r1 = r4.b
            if (r1 == 0) goto L136
            java.lang.String r1 = " s=\"1\""
            r0.append(r1)
        L136:
            java.lang.String r1 = ">"
            r0.append(r1)
            java.lang.String r3 = r4.e
            if (r3 == 0) goto L152
            java.lang.String r3 = "<subject>"
            r0.append(r3)
            java.lang.String r3 = r4.e
            java.lang.String r3 = com.xiaomi.push.gy.a(r3)
            r0.append(r3)
            java.lang.String r3 = "</subject>"
            r0.append(r3)
        L152:
            java.lang.String r3 = r4.f
            if (r3 == 0) goto L181
            java.lang.String r3 = "<body"
            r0.append(r3)
            java.lang.String r3 = r4.g
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L170
            java.lang.String r3 = " encode=\""
            r0.append(r3)
            java.lang.String r3 = r4.g
            r0.append(r3)
            r0.append(r2)
        L170:
            r0.append(r1)
            java.lang.String r1 = r4.f
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            java.lang.String r1 = "</body>"
            r0.append(r1)
        L181:
            java.lang.String r1 = r4.c
            if (r1 == 0) goto L194
            java.lang.String r1 = "<thread>"
            r0.append(r1)
            java.lang.String r1 = r4.c
            r0.append(r1)
            java.lang.String r1 = "</thread>"
            r0.append(r1)
        L194:
            java.lang.String r1 = r4.b
            java.lang.String r2 = "error"
            boolean r1 = r2.equalsIgnoreCase(r1)
            if (r1 == 0) goto L1ab
            com.xiaomi.push.gr r1 = r4.a()
            if (r1 == 0) goto L1ab
            java.lang.String r1 = r1.a()
            r0.append(r1)
        L1ab:
            java.lang.String r1 = r4.o()
            r0.append(r1)
            java.lang.String r1 = "</message>"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.f = r1
            r0.g = r2
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public void d(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L6c
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L6c
        L12:
            com.xiaomi.push.gm r5 = (com.xiaomi.push.gm) r5
            boolean r2 = super.equals(r5)
            if (r2 != 0) goto L1b
            return r1
        L1b:
            java.lang.String r2 = r4.f
            if (r2 == 0) goto L28
            java.lang.String r3 = r5.f
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L2d
            goto L2c
        L28:
            java.lang.String r2 = r5.f
            if (r2 == 0) goto L2d
        L2c:
            return r1
        L2d:
            java.lang.String r2 = r4.d
            if (r2 == 0) goto L3a
            java.lang.String r3 = r5.d
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L3f
            goto L3e
        L3a:
            java.lang.String r2 = r5.d
            if (r2 == 0) goto L3f
        L3e:
            return r1
        L3f:
            java.lang.String r2 = r4.e
            if (r2 == 0) goto L4c
            java.lang.String r3 = r5.e
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L51
            goto L50
        L4c:
            java.lang.String r2 = r5.e
            if (r2 == 0) goto L51
        L50:
            return r1
        L51:
            java.lang.String r2 = r4.c
            if (r2 == 0) goto L5e
            java.lang.String r3 = r5.c
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L63
            goto L62
        L5e:
            java.lang.String r2 = r5.c
            if (r2 == 0) goto L63
        L62:
            return r1
        L63:
            java.lang.String r2 = r4.b
            java.lang.String r5 = r5.b
            if (r2 != r5) goto L6a
            goto L6b
        L6a:
            r0 = r1
        L6b:
            return r0
        L6c:
            return r1
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public void g(java.lang.String r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void h(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public int hashCode() {
            r3 = this;
            java.lang.String r0 = r3.b
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.hashCode()
            goto Lb
        La:
            r0 = r1
        Lb:
            int r0 = r0 * 31
            java.lang.String r2 = r3.f
            if (r2 == 0) goto L16
            int r2 = r2.hashCode()
            goto L17
        L16:
            r2 = r1
        L17:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.c
            if (r2 == 0) goto L23
            int r2 = r2.hashCode()
            goto L24
        L23:
            r2 = r1
        L24:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.d
            if (r2 == 0) goto L30
            int r2 = r2.hashCode()
            goto L31
        L30:
            r2 = r1
        L31:
            int r0 = r0 + r2
            int r0 = r0 * 31
            java.lang.String r2 = r3.e
            if (r2 == 0) goto L3c
            int r1 = r2.hashCode()
        L3c:
            int r0 = r0 + r1
            return r0
    }

    public void i(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void j(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
