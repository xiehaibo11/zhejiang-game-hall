package com.xiaomi.push;

public class gv {
    private static org.xmlpull.v1.XmlPullParser a;

    static {
            return
    }

    public static com.xiaomi.push.gk a(java.lang.String r1, java.lang.String r2, org.xmlpull.v1.XmlPullParser r3) {
            com.xiaomi.push.gu r1 = com.xiaomi.push.gu.a()
            java.lang.String r2 = "all"
            java.lang.String r0 = "xm:chat"
            java.lang.Object r1 = r1.a(r2, r0)
            if (r1 == 0) goto L19
            boolean r2 = r1 instanceof com.xiaomi.push.service.k
            if (r2 == 0) goto L19
            com.xiaomi.push.service.k r1 = (com.xiaomi.push.service.k) r1
            com.xiaomi.push.gk r1 = r1.b(r3)
            return r1
        L19:
            r1 = 0
            return r1
    }

    public static com.xiaomi.push.gl a(org.xmlpull.v1.XmlPullParser r13, com.xiaomi.push.fw r14) {
            java.lang.String r0 = ""
            java.lang.String r1 = "id"
            java.lang.String r1 = r13.getAttributeValue(r0, r1)
            java.lang.String r2 = "to"
            java.lang.String r2 = r13.getAttributeValue(r0, r2)
            java.lang.String r3 = "from"
            java.lang.String r3 = r13.getAttributeValue(r0, r3)
            java.lang.String r4 = "chid"
            java.lang.String r4 = r13.getAttributeValue(r0, r4)
            java.lang.String r5 = "type"
            java.lang.String r5 = r13.getAttributeValue(r0, r5)
            com.xiaomi.push.gl$a r5 = com.xiaomi.push.gl.a.a(r5)
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            r7 = 0
            r8 = r7
        L2b:
            int r9 = r13.getAttributeCount()
            if (r8 >= r9) goto L3f
            java.lang.String r9 = r13.getAttributeName(r8)
            java.lang.String r10 = r13.getAttributeValue(r0, r9)
            r6.put(r9, r10)
            int r8 = r8 + 1
            goto L2b
        L3f:
            r0 = 0
            r8 = r0
            r9 = r8
        L42:
            if (r7 != 0) goto L7e
            int r10 = r13.next()
            r11 = 2
            if (r10 != r11) goto L6d
            java.lang.String r10 = r13.getName()
            java.lang.String r11 = r13.getNamespace()
            java.lang.String r12 = "error"
            boolean r12 = r10.equals(r12)
            if (r12 == 0) goto L60
            com.xiaomi.push.gr r9 = a(r13)
            goto L42
        L60:
            com.xiaomi.push.gl r8 = new com.xiaomi.push.gl
            r8.<init>()
            com.xiaomi.push.gk r10 = a(r10, r11, r13)
            r8.a(r10)
            goto L42
        L6d:
            r11 = 3
            if (r10 != r11) goto L42
            java.lang.String r10 = r13.getName()
            java.lang.String r11 = "iq"
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto L42
            r7 = 1
            goto L42
        L7e:
            if (r8 != 0) goto Lb8
            com.xiaomi.push.gl$a r13 = com.xiaomi.push.gl.a.a
            if (r13 == r5) goto L8f
            com.xiaomi.push.gl$a r13 = com.xiaomi.push.gl.a.b
            if (r13 != r5) goto L89
            goto L8f
        L89:
            com.xiaomi.push.gx r8 = new com.xiaomi.push.gx
            r8.<init>()
            goto Lb8
        L8f:
            com.xiaomi.push.gw r13 = new com.xiaomi.push.gw
            r13.<init>()
            r13.k(r1)
            r13.m(r3)
            r13.n(r2)
            com.xiaomi.push.gl$a r1 = com.xiaomi.push.gl.a.d
            r13.a(r1)
            r13.l(r4)
            com.xiaomi.push.gr r1 = new com.xiaomi.push.gr
            com.xiaomi.push.gr$a r2 = com.xiaomi.push.gr.a.e
            r1.<init>(r2)
            r13.a(r1)
            r14.a(r13)
            java.lang.String r13 = "iq usage error. send packet in packet parser."
            com.xiaomi.channel.commonutils.logger.b.d(r13)
            return r0
        Lb8:
            r8.k(r1)
            r8.m(r2)
            r8.l(r4)
            r8.n(r3)
            r8.a(r5)
            r8.a(r9)
            r8.a(r6)
            return r8
    }

    public static com.xiaomi.push.gn a(org.xmlpull.v1.XmlPullParser r16) {
            r0 = r16
            java.lang.String r1 = "s"
            java.lang.String r2 = ""
            java.lang.String r3 = r0.getAttributeValue(r2, r1)
            java.lang.String r4 = "1"
            boolean r3 = r4.equals(r3)
            java.lang.String r4 = "message"
            r6 = 2
            java.lang.String r7 = "type"
            java.lang.String r8 = "to"
            java.lang.String r9 = "from"
            java.lang.String r10 = "chid"
            java.lang.String r11 = "id"
            r12 = 0
            r13 = 1
            r14 = 0
            if (r3 == 0) goto Le7
            java.lang.String r3 = r0.getAttributeValue(r2, r10)
            java.lang.String r10 = r0.getAttributeValue(r2, r11)
            java.lang.String r9 = r0.getAttributeValue(r2, r9)
            java.lang.String r8 = r0.getAttributeValue(r2, r8)
            java.lang.String r2 = r0.getAttributeValue(r2, r7)
            com.xiaomi.push.service.bg r7 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r7 = r7.a(r3, r8)
            if (r7 != 0) goto L48
            com.xiaomi.push.service.bg r7 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r7 = r7.a(r3, r9)
        L48:
            if (r7 == 0) goto Ldf
            r11 = r14
        L4b:
            java.lang.String r15 = "error while receiving a encrypted message with wrong format"
            if (r12 != 0) goto Ld6
            int r5 = r16.next()
            if (r5 != r6) goto Lc6
            java.lang.String r5 = r16.getName()
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto Lc0
            int r5 = r16.next()
            r11 = 4
            if (r5 != r11) goto Lba
            java.lang.String r5 = r16.getText()
            java.lang.String r11 = "5"
            boolean r11 = r11.equals(r3)
            if (r11 != 0) goto L94
            java.lang.String r11 = "6"
            boolean r11 = r11.equals(r3)
            if (r11 == 0) goto L7b
            goto L94
        L7b:
            java.lang.String r11 = r7.h
            byte[] r11 = com.xiaomi.push.service.bp.a(r11, r10)
            byte[] r5 = com.xiaomi.push.service.bp.a(r11, r5)
            a(r5)
            org.xmlpull.v1.XmlPullParser r5 = com.xiaomi.push.gv.a
            r5.next()
            org.xmlpull.v1.XmlPullParser r5 = com.xiaomi.push.gv.a
            com.xiaomi.push.gn r11 = a(r5)
            goto L4b
        L94:
            com.xiaomi.push.gm r0 = new com.xiaomi.push.gm
            r0.<init>()
            r0.l(r3)
            r0.b(r13)
            r0.n(r9)
            r0.m(r8)
            r0.k(r10)
            r0.f(r2)
            com.xiaomi.push.gk r2 = new com.xiaomi.push.gk
            r3 = r14
            java.lang.String[] r3 = (java.lang.String[]) r3
            r2.<init>(r1, r14, r3, r3)
            r2.a(r5)
            r0.a(r2)
            return r0
        Lba:
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            r0.<init>(r15)
            throw r0
        Lc0:
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            r0.<init>(r15)
            throw r0
        Lc6:
            r15 = 3
            if (r5 != r15) goto L4b
            java.lang.String r5 = r16.getName()
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L4b
            r12 = r13
            goto L4b
        Ld6:
            if (r11 == 0) goto Ld9
            return r11
        Ld9:
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            r0.<init>(r15)
            throw r0
        Ldf:
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            java.lang.String r1 = "the channel id is wrong while receiving a encrypted message"
            r0.<init>(r1)
            throw r0
        Le7:
            com.xiaomi.push.gm r1 = new com.xiaomi.push.gm
            r1.<init>()
            java.lang.String r3 = r0.getAttributeValue(r2, r11)
            if (r3 != 0) goto Lf4
            java.lang.String r3 = "ID_NOT_AVAILABLE"
        Lf4:
            r1.k(r3)
            java.lang.String r3 = r0.getAttributeValue(r2, r8)
            r1.m(r3)
            java.lang.String r3 = r0.getAttributeValue(r2, r9)
            r1.n(r3)
            java.lang.String r3 = r0.getAttributeValue(r2, r10)
            r1.l(r3)
            java.lang.String r3 = "appid"
            java.lang.String r3 = r0.getAttributeValue(r2, r3)
            r1.a(r3)
            java.lang.String r3 = "transient"
            java.lang.String r3 = r0.getAttributeValue(r2, r3)     // Catch: java.lang.Exception -> L11c
            goto L11d
        L11c:
            r3 = r14
        L11d:
            java.lang.String r5 = "seq"
            java.lang.String r5 = r0.getAttributeValue(r2, r5)     // Catch: java.lang.Exception -> L12c
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L12c
            if (r8 != 0) goto L12c
            r1.b(r5)     // Catch: java.lang.Exception -> L12c
        L12c:
            java.lang.String r5 = "mseq"
            java.lang.String r5 = r0.getAttributeValue(r2, r5)     // Catch: java.lang.Exception -> L13b
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L13b
            if (r8 != 0) goto L13b
            r1.c(r5)     // Catch: java.lang.Exception -> L13b
        L13b:
            java.lang.String r5 = "fseq"
            java.lang.String r5 = r0.getAttributeValue(r2, r5)     // Catch: java.lang.Exception -> L14a
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L14a
            if (r8 != 0) goto L14a
            r1.d(r5)     // Catch: java.lang.Exception -> L14a
        L14a:
            java.lang.String r5 = "status"
            java.lang.String r5 = r0.getAttributeValue(r2, r5)     // Catch: java.lang.Exception -> L159
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L159
            if (r8 != 0) goto L159
            r1.e(r5)     // Catch: java.lang.Exception -> L159
        L159:
            boolean r5 = android.text.TextUtils.isEmpty(r3)
            if (r5 != 0) goto L169
            java.lang.String r5 = "true"
            boolean r3 = r3.equalsIgnoreCase(r5)
            if (r3 == 0) goto L169
            r3 = r13
            goto L16a
        L169:
            r3 = r12
        L16a:
            r1.a(r3)
            java.lang.String r3 = r0.getAttributeValue(r2, r7)
            r1.f(r3)
            java.lang.String r3 = b(r16)
            if (r3 == 0) goto L188
            java.lang.String r5 = r3.trim()
            boolean r5 = r2.equals(r5)
            if (r5 != 0) goto L188
            r1.j(r3)
            goto L18b
        L188:
            com.xiaomi.push.gn.q()
        L18b:
            if (r12 != 0) goto L20f
            int r3 = r16.next()
            if (r3 != r6) goto L1ff
            java.lang.String r3 = r16.getName()
            java.lang.String r5 = r16.getNamespace()
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 == 0) goto L1a3
            java.lang.String r5 = "xm"
        L1a3:
            java.lang.String r7 = "subject"
            boolean r7 = r3.equals(r7)
            if (r7 == 0) goto L1b7
            java.lang.String r3 = b(r16)
            java.lang.String r3 = a(r16)
            r1.g(r3)
            goto L1fd
        L1b7:
            java.lang.String r7 = "body"
            boolean r7 = r3.equals(r7)
            if (r7 == 0) goto L1d7
            java.lang.String r3 = "encode"
            java.lang.String r3 = r0.getAttributeValue(r2, r3)
            java.lang.String r5 = a(r16)
            boolean r7 = android.text.TextUtils.isEmpty(r3)
            if (r7 != 0) goto L1d3
            r1.a(r5, r3)
            goto L1fd
        L1d3:
            r1.h(r5)
            goto L1fd
        L1d7:
            java.lang.String r7 = "thread"
            boolean r7 = r3.equals(r7)
            if (r7 == 0) goto L1e6
            if (r14 != 0) goto L1fd
            java.lang.String r14 = r16.nextText()
            goto L1fd
        L1e6:
            java.lang.String r7 = "error"
            boolean r7 = r3.equals(r7)
            if (r7 == 0) goto L1f6
            com.xiaomi.push.gr r3 = a(r16)
            r1.a(r3)
            goto L1fd
        L1f6:
            com.xiaomi.push.gk r3 = a(r3, r5, r0)
            r1.a(r3)
        L1fd:
            r5 = 3
            goto L18b
        L1ff:
            r5 = 3
            if (r3 != r5) goto L18b
            java.lang.String r3 = r16.getName()
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L18b
            r12 = r13
            goto L18b
        L20f:
            r1.i(r14)
            return r1
    }

    public static com.xiaomi.push.gp a(org.xmlpull.v1.XmlPullParser r7) {
            com.xiaomi.push.gp$b r0 = com.xiaomi.push.gp.b.a
            java.lang.String r1 = ""
            java.lang.String r2 = "type"
            java.lang.String r2 = r7.getAttributeValue(r1, r2)
            if (r2 == 0) goto L2d
            boolean r3 = r2.equals(r1)
            if (r3 != 0) goto L2d
            com.xiaomi.push.gp$b r0 = com.xiaomi.push.gp.b.valueOf(r2)     // Catch: java.lang.IllegalArgumentException -> L17
            goto L2d
        L17:
            java.io.PrintStream r3 = java.lang.System.err
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Found invalid presence type "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.println(r2)
        L2d:
            com.xiaomi.push.gp r2 = new com.xiaomi.push.gp
            r2.<init>(r0)
            java.lang.String r0 = "to"
            java.lang.String r0 = r7.getAttributeValue(r1, r0)
            r2.m(r0)
            java.lang.String r0 = "from"
            java.lang.String r0 = r7.getAttributeValue(r1, r0)
            r2.n(r0)
            java.lang.String r0 = "chid"
            java.lang.String r0 = r7.getAttributeValue(r1, r0)
            r2.l(r0)
            java.lang.String r0 = "id"
            java.lang.String r0 = r7.getAttributeValue(r1, r0)
            if (r0 != 0) goto L57
            java.lang.String r0 = "ID_NOT_AVAILABLE"
        L57:
            r2.k(r0)
            r0 = 0
            r1 = r0
        L5c:
            if (r1 != 0) goto Lea
            int r3 = r7.next()
            r4 = 2
            if (r3 != r4) goto Ld8
            java.lang.String r3 = r7.getName()
            java.lang.String r4 = r7.getNamespace()
            java.lang.String r5 = "status"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto L7d
            java.lang.String r3 = r7.nextText()
            r2.a(r3)
            goto L5c
        L7d:
            java.lang.String r5 = "priority"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto L95
            java.lang.String r3 = r7.nextText()     // Catch: java.lang.NumberFormatException -> L5c java.lang.IllegalArgumentException -> L91
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L5c java.lang.IllegalArgumentException -> L91
            r2.a(r3)     // Catch: java.lang.NumberFormatException -> L5c java.lang.IllegalArgumentException -> L91
            goto L5c
        L91:
            r2.a(r0)
            goto L5c
        L95:
            java.lang.String r5 = "show"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto Lc0
            java.lang.String r3 = r7.nextText()
            com.xiaomi.push.gp$a r4 = com.xiaomi.push.gp.a.valueOf(r3)     // Catch: java.lang.IllegalArgumentException -> La9
            r2.a(r4)     // Catch: java.lang.IllegalArgumentException -> La9
            goto L5c
        La9:
            java.io.PrintStream r4 = java.lang.System.err
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Found invalid presence mode "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.println(r3)
            goto L5c
        Lc0:
            java.lang.String r5 = "error"
            boolean r5 = r3.equals(r5)
            if (r5 == 0) goto Ld0
            com.xiaomi.push.gr r3 = a(r7)
            r2.a(r3)
            goto L5c
        Ld0:
            com.xiaomi.push.gk r3 = a(r3, r4, r7)
            r2.a(r3)
            goto L5c
        Ld8:
            r4 = 3
            if (r3 != r4) goto L5c
            java.lang.String r3 = r7.getName()
            java.lang.String r4 = "presence"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L5c
            r1 = 1
            goto L5c
        Lea:
            return r2
    }

    public static com.xiaomi.push.gq a(org.xmlpull.v1.XmlPullParser r4) {
            r0 = 0
            r1 = 0
        L2:
            if (r1 != 0) goto L26
            int r2 = r4.next()
            r3 = 2
            if (r2 != r3) goto L15
            com.xiaomi.push.gq r0 = new com.xiaomi.push.gq
            java.lang.String r2 = r4.getName()
            r0.<init>(r2)
            goto L2
        L15:
            r3 = 3
            if (r2 != r3) goto L2
            java.lang.String r2 = r4.getName()
            java.lang.String r3 = "error"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L2
            r1 = 1
            goto L2
        L26:
            return r0
    }

    public static com.xiaomi.push.gr a(org.xmlpull.v1.XmlPullParser r10) {
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r0 = 0
            r1 = 0
            java.lang.String r2 = "-1"
            r4 = r0
            r3 = r1
            r5 = r3
        Lc:
            int r7 = r10.getAttributeCount()
            if (r4 >= r7) goto L47
            java.lang.String r7 = r10.getAttributeName(r4)
            java.lang.String r8 = "code"
            boolean r7 = r7.equals(r8)
            java.lang.String r9 = ""
            if (r7 == 0) goto L24
            java.lang.String r2 = r10.getAttributeValue(r9, r8)
        L24:
            java.lang.String r7 = r10.getAttributeName(r4)
            java.lang.String r8 = "type"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L34
            java.lang.String r5 = r10.getAttributeValue(r9, r8)
        L34:
            java.lang.String r7 = r10.getAttributeName(r4)
            java.lang.String r8 = "reason"
            boolean r7 = r7.equals(r8)
            if (r7 == 0) goto L44
            java.lang.String r3 = r10.getAttributeValue(r9, r8)
        L44:
            int r4 = r4 + 1
            goto Lc
        L47:
            r4 = r1
            r7 = r4
        L49:
            if (r0 != 0) goto L96
            int r1 = r10.next()
            r8 = 2
            if (r1 != r8) goto L7d
            java.lang.String r1 = r10.getName()
            java.lang.String r8 = "text"
            boolean r1 = r1.equals(r8)
            if (r1 == 0) goto L63
            java.lang.String r7 = r10.nextText()
            goto L49
        L63:
            java.lang.String r1 = r10.getName()
            java.lang.String r8 = r10.getNamespace()
            java.lang.String r9 = "urn:ietf:params:xml:ns:xmpp-stanzas"
            boolean r9 = r9.equals(r8)
            if (r9 == 0) goto L75
            r4 = r1
            goto L49
        L75:
            com.xiaomi.push.gk r1 = a(r1, r8, r10)
            r6.add(r1)
            goto L49
        L7d:
            r8 = 3
            if (r1 != r8) goto L8e
            java.lang.String r1 = r10.getName()
            java.lang.String r8 = "error"
            boolean r1 = r1.equals(r8)
            if (r1 == 0) goto L49
            r0 = 1
            goto L49
        L8e:
            r8 = 4
            if (r1 != r8) goto L49
            java.lang.String r7 = r10.getText()
            goto L49
        L96:
            if (r5 != 0) goto L9b
            java.lang.String r10 = "cancel"
            goto L9c
        L9b:
            r10 = r5
        L9c:
            com.xiaomi.push.gr r8 = new com.xiaomi.push.gr
            int r1 = java.lang.Integer.parseInt(r2)
            r0 = r8
            r2 = r10
            r5 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r8
    }

    private static java.lang.String a(org.xmlpull.v1.XmlPullParser r4) {
            int r0 = r4.getDepth()
            java.lang.String r1 = ""
        L6:
            int r2 = r4.next()
            r3 = 3
            if (r2 != r3) goto L15
            int r2 = r4.getDepth()
            if (r2 == r0) goto L14
            goto L15
        L14:
            return r1
        L15:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = r4.getText()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            goto L6
    }

    private static void a(byte[] r3) {
            org.xmlpull.v1.XmlPullParser r0 = com.xiaomi.push.gv.a
            if (r0 != 0) goto L19
            org.xmlpull.v1.XmlPullParserFactory r0 = org.xmlpull.v1.XmlPullParserFactory.newInstance()     // Catch: org.xmlpull.v1.XmlPullParserException -> L15
            org.xmlpull.v1.XmlPullParser r0 = r0.newPullParser()     // Catch: org.xmlpull.v1.XmlPullParserException -> L15
            com.xiaomi.push.gv.a = r0     // Catch: org.xmlpull.v1.XmlPullParserException -> L15
            java.lang.String r1 = "http://xmlpull.org/v1/doc/features.html#process-namespaces"
            r2 = 1
            r0.setFeature(r1, r2)     // Catch: org.xmlpull.v1.XmlPullParserException -> L15
            goto L19
        L15:
            r0 = move-exception
            r0.printStackTrace()
        L19:
            org.xmlpull.v1.XmlPullParser r0 = com.xiaomi.push.gv.a
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r3)
            r1.<init>(r2)
            r0.setInput(r1)
            return
    }

    private static java.lang.String b(org.xmlpull.v1.XmlPullParser r3) {
            r0 = 0
        L1:
            int r1 = r3.getAttributeCount()
            if (r0 >= r1) goto L30
            java.lang.String r1 = r3.getAttributeName(r0)
            java.lang.String r2 = "xml:lang"
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L2b
            java.lang.String r2 = "lang"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L28
            java.lang.String r1 = r3.getAttributePrefix(r0)
            java.lang.String r2 = "xml"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L28
            goto L2b
        L28:
            int r0 = r0 + 1
            goto L1
        L2b:
            java.lang.String r3 = r3.getAttributeValue(r0)
            return r3
        L30:
            r3 = 0
            return r3
    }
}
