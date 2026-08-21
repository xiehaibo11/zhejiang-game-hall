package com.tramini.plugin.a.e;

public final class a extends com.tramini.plugin.a.e.f {
    static final java.lang.String a = "naitve";
    static final java.lang.String b = "html";
    static final java.lang.String c = "html_background";
    static final java.lang.String d = "html_play";
    static final java.lang.String e = "html_css";
    static final java.lang.String f = "html_x3d";
    static final java.lang.String g = "html_doctype";
    static final java.lang.String h = "html_doctype_write";
    static final java.lang.String i = "html_unknow";
    static final java.lang.String j = "0";
    static final java.lang.String k = "1";
    static final java.lang.String l = "2";
    static final java.lang.String m = "3";
    static final java.lang.String n = "4";
    static final java.lang.String o = "5";
    static final java.lang.String p = "6";
    static final java.lang.String q = "7";
    static final java.lang.String r = "8";
    static final java.lang.String s = "9";
    private static final java.lang.String t = null;

    static {
            java.lang.Class<org.json.JSONObject> r0 = org.json.JSONObject.class
            java.lang.String r0 = r0.getName()
            com.tramini.plugin.a.e.a.t = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.tramini.plugin.a.c.a a(java.lang.Object r17, java.lang.String r18, java.lang.String[] r19, org.json.JSONObject r20, org.json.JSONArray r21, java.lang.String r22) {
            r0 = r17
            r1 = r18
            r2 = r20
            r3 = r21
            java.lang.String r4 = "naitve"
            java.lang.String r5 = "pkg"
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            if (r0 == 0) goto L1e8
            int r7 = r21.length()     // Catch: java.lang.Throwable -> L1e8
            r3.put(r7, r5)     // Catch: java.lang.Throwable -> L1e8
            java.util.HashSet r7 = new java.util.HashSet     // Catch: java.lang.Throwable -> L1e8
            r7.<init>()     // Catch: java.lang.Throwable -> L1e8
            r8 = -1
            int r9 = r22.hashCode()     // Catch: java.lang.Throwable -> L1e8
            r10 = 48
            r11 = 0
            if (r9 == r10) goto L2a
            goto L35
        L2a:
            java.lang.String r9 = "0"
            r10 = r22
            boolean r9 = r10.equals(r9)     // Catch: java.lang.Throwable -> L1e8
            if (r9 == 0) goto L35
            r8 = r11
        L35:
            java.lang.String r9 = "i_lr"
            java.lang.String r10 = "all"
            java.lang.String r12 = ""
            if (r8 == 0) goto L116
            r4 = r19[r11]     // Catch: java.lang.Throwable -> L1e8
            org.json.JSONObject r0 = a(r0, r7, r4, r1)     // Catch: java.lang.Throwable -> L1e8
            if (r0 == 0) goto L111
            r1 = r19[r11]     // Catch: java.lang.Throwable -> L1e8
            java.lang.String r1 = r0.optString(r1)     // Catch: java.lang.Throwable -> L1e8
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1e8
            if (r4 != 0) goto L111
            java.lang.String r4 = "html_unknow"
            java.lang.String r7 = "div id=\"mys-wrapper\" class=\"mys-wrapper\">"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto L72
            java.lang.String r4 = "https://rr"
            boolean r4 = r1.contains(r4)     // Catch: java.lang.Throwable -> L1e8
            if (r4 != 0) goto L6f
            java.lang.String r4 = ".mp4"
            boolean r4 = r1.contains(r4)     // Catch: java.lang.Throwable -> L1e8
            if (r4 == 0) goto L6c
            goto L6f
        L6c:
            java.lang.String r4 = "html_background"
            goto Lc0
        L6f:
            java.lang.String r4 = "html"
            goto Lc0
        L72:
            java.lang.String r7 = "html5AdData"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto L85
            java.lang.String r7 = "google_template_data"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto L85
            java.lang.String r4 = "html_play"
            goto Lc0
        L85:
            java.lang.String r7 = "<link"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto L98
            java.lang.String r7 = "type=\"text/css"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto L98
            java.lang.String r4 = "html_css"
            goto Lc0
        L98:
            java.lang.String r7 = "new videoInterstitial"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto Lab
            java.lang.String r7 = "x3c"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto Lab
            java.lang.String r4 = "html_x3d"
            goto Lc0
        Lab:
            java.lang.String r7 = "<!doctype html>"
            boolean r7 = r1.contains(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r7 == 0) goto Lc0
            java.lang.String r4 = "doc.write"
            boolean r4 = r1.contains(r4)     // Catch: java.lang.Throwable -> L1e8
            if (r4 == 0) goto Lbe
            java.lang.String r4 = "html_doctype_write"
            goto Lc0
        Lbe:
            java.lang.String r4 = "html_doctype"
        Lc0:
            java.lang.String r1 = d(r1, r4)     // Catch: java.lang.Throwable -> L1e8
            r7 = r12
            r8 = r7
            r13 = r8
        Lc7:
            int r14 = r21.length()     // Catch: java.lang.Throwable -> L1e8
            if (r11 >= r14) goto L178
            java.lang.String r14 = r3.optString(r11)     // Catch: java.lang.Throwable -> L10e
            java.lang.String r15 = r2.optString(r14)     // Catch: java.lang.Throwable -> L10e
            boolean r16 = android.text.TextUtils.equals(r15, r5)     // Catch: java.lang.Throwable -> L10e
            if (r16 == 0) goto Ldd
            r7 = r14
            goto L10e
        Ldd:
            boolean r16 = android.text.TextUtils.equals(r15, r10)     // Catch: java.lang.Throwable -> L10e
            if (r16 == 0) goto Le5
            r13 = r14
            goto L10e
        Le5:
            boolean r15 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L10e
            if (r15 != 0) goto L10e
            java.lang.String r15 = a(r1, r4, r14, r2)     // Catch: java.lang.Throwable -> L10e
            boolean r16 = android.text.TextUtils.equals(r14, r9)     // Catch: java.lang.Throwable -> L10e
            if (r16 == 0) goto Lf6
            r8 = r15
        Lf6:
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L10e
            if (r16 != 0) goto L10e
            boolean r16 = r14.equals(r5)     // Catch: java.lang.Throwable -> L10e
            if (r16 == 0) goto L10b
            boolean r16 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L10e
            if (r16 != 0) goto L10b
            r6.put(r7, r15)     // Catch: java.lang.Throwable -> L10e
        L10b:
            r6.put(r14, r15)     // Catch: java.lang.Throwable -> L10e
        L10e:
            int r11 = r11 + 1
            goto Lc7
        L111:
            r7 = r12
            r8 = r7
            r13 = r8
            goto L178
        L116:
            r8 = 1
            r8 = r19[r8]     // Catch: java.lang.Throwable -> L1e8
            org.json.JSONObject r0 = a(r0, r7, r8, r1)     // Catch: java.lang.Throwable -> L1e8
            java.lang.String r1 = r0.toString()     // Catch: java.lang.Throwable -> L1e8
            boolean r7 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L1e8
            if (r7 != 0) goto L111
            java.lang.String r1 = d(r1, r4)     // Catch: java.lang.Throwable -> L1e8
            r7 = r12
            r8 = r7
            r13 = r8
        L12e:
            int r14 = r21.length()     // Catch: java.lang.Throwable -> L1e8
            if (r11 >= r14) goto L178
            java.lang.String r14 = r3.optString(r11)     // Catch: java.lang.Throwable -> L175
            java.lang.String r15 = r2.optString(r14)     // Catch: java.lang.Throwable -> L175
            boolean r16 = android.text.TextUtils.equals(r15, r5)     // Catch: java.lang.Throwable -> L175
            if (r16 == 0) goto L144
            r7 = r14
            goto L175
        L144:
            boolean r16 = android.text.TextUtils.equals(r15, r10)     // Catch: java.lang.Throwable -> L175
            if (r16 == 0) goto L14c
            r13 = r14
            goto L175
        L14c:
            boolean r15 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L175
            if (r15 != 0) goto L175
            java.lang.String r15 = a(r1, r4, r14, r2)     // Catch: java.lang.Throwable -> L175
            boolean r16 = android.text.TextUtils.equals(r14, r9)     // Catch: java.lang.Throwable -> L175
            if (r16 == 0) goto L15d
            r8 = r15
        L15d:
            boolean r16 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L175
            if (r16 != 0) goto L175
            boolean r16 = r14.equals(r5)     // Catch: java.lang.Throwable -> L175
            if (r16 == 0) goto L172
            boolean r16 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L175
            if (r16 != 0) goto L172
            r6.put(r7, r15)     // Catch: java.lang.Throwable -> L175
        L172:
            r6.put(r14, r15)     // Catch: java.lang.Throwable -> L175
        L175:
            int r11 = r11 + 1
            goto L12e
        L178:
            com.tramini.plugin.a.c.a r1 = new com.tramini.plugin.a.c.a     // Catch: java.lang.Throwable -> L1e8
            r1.<init>()     // Catch: java.lang.Throwable -> L1e8
            int r2 = r6.length()     // Catch: java.lang.Throwable -> L1e8
            if (r2 <= 0) goto L1ce
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L1e8
            if (r2 != 0) goto L1b4
            java.lang.String r2 = r6.optString(r7, r12)     // Catch: java.lang.Throwable -> L1e8
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e8
            if (r2 == 0) goto L1b4
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1e8
            if (r2 != 0) goto L1b4
            java.lang.String r2 = b(r8)     // Catch: java.lang.Throwable -> L1e8
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e8
            if (r3 != 0) goto L1a7
            r6.put(r7, r2)     // Catch: java.lang.Throwable -> L1e8
            goto L1b4
        L1a7:
            java.lang.String r2 = a(r8)     // Catch: java.lang.Throwable -> L1e8
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1e8
            if (r3 != 0) goto L1b4
            r6.put(r7, r2)     // Catch: java.lang.Throwable -> L1e8
        L1b4:
            if (r0 == 0) goto L1cb
            boolean r2 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L1e8
            if (r2 != 0) goto L1cb
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1e8
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L1e8
            java.lang.String r0 = com.tramini.plugin.a.g.c.a(r0)     // Catch: java.lang.Throwable -> L1e8
            r6.put(r13, r0)     // Catch: java.lang.Throwable -> L1e8
        L1cb:
            r1.a = r6     // Catch: java.lang.Throwable -> L1e8
            return r1
        L1ce:
            if (r0 != 0) goto L1da
            com.tramini.plugin.a.c.a$a r0 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L1e8
            java.lang.String r2 = "1"
            r0.<init>(r2, r12)     // Catch: java.lang.Throwable -> L1e8
            r1.b = r0     // Catch: java.lang.Throwable -> L1e8
            goto L1e7
        L1da:
            com.tramini.plugin.a.c.a$a r2 = new com.tramini.plugin.a.c.a$a     // Catch: java.lang.Throwable -> L1e8
            java.lang.String r3 = "2"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1e8
            r2.<init>(r3, r0)     // Catch: java.lang.Throwable -> L1e8
            r1.b = r2     // Catch: java.lang.Throwable -> L1e8
        L1e7:
            return r1
        L1e8:
            r0 = 0
            return r0
    }

    public static com.tramini.plugin.a.c.a a(org.json.JSONObject r7, com.tramini.plugin.a.c.c r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "pre"
            java.lang.String r2 = r7.optString(r0)
            java.lang.String r0 = "p_key"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            java.lang.String[] r3 = a(r0)
            java.lang.String r0 = "in_na"
            java.lang.String r0 = r7.optString(r0)
            java.lang.Object r1 = a(r0, r9)
            org.json.JSONArray r5 = r8.e
            r4 = r7
            r6 = r10
            com.tramini.plugin.a.c.a r7 = a(r1, r2, r3, r4, r5, r6)
            return r7
    }

    private static java.lang.String a(java.lang.String r4, java.lang.String r5, java.lang.String r6, org.json.JSONObject r7) {
            int r0 = r5.hashCode()
            switch(r0) {
                case -1852354744: goto L59;
                case -1851164744: goto L4e;
                case -1747666366: goto L44;
                case -1052935859: goto L3a;
                case -336860305: goto L30;
                case -336842123: goto L26;
                case 3213227: goto L1c;
                case 45377598: goto L12;
                case 562203614: goto L8;
                default: goto L7;
            }
        L7:
            goto L63
        L8:
            java.lang.String r0 = "html_doctype"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 4
            goto L64
        L12:
            java.lang.String r0 = "html_doctype_write"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 7
            goto L64
        L1c:
            java.lang.String r0 = "html"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 1
            goto L64
        L26:
            java.lang.String r0 = "html_x3d"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 6
            goto L64
        L30:
            java.lang.String r0 = "html_css"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 3
            goto L64
        L3a:
            java.lang.String r0 = "naitve"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 0
            goto L64
        L44:
            java.lang.String r0 = "html_background"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 2
            goto L64
        L4e:
            java.lang.String r0 = "html_unknow"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 8
            goto L64
        L59:
            java.lang.String r0 = "html_play"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L63
            r5 = 5
            goto L64
        L63:
            r5 = -1
        L64:
            java.lang.String r0 = "2"
            java.lang.String r1 = "3"
            switch(r5) {
                case 0: goto L129;
                case 1: goto L11a;
                case 2: goto L10d;
                case 3: goto Lfe;
                case 4: goto Lef;
                case 5: goto Lb9;
                case 6: goto L93;
                case 7: goto L7b;
                default: goto L6b;
            }
        L6b:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r6 = "9"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r4 = e(r5, r4)
            goto L137
        L7b:
            java.lang.String r5 = "8"
            java.lang.String r5 = r7.optString(r5)
            java.lang.String r4 = com.tramini.plugin.a.e.f.b.a(r4, r5)
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r5 = r5.optString(r0)
            java.lang.String r4 = e(r5, r4)
            goto L137
        L93:
            java.lang.String r5 = "6"
            java.lang.String r5 = r7.optString(r5)
            java.lang.String r4 = com.tramini.plugin.a.e.f.b.a(r4, r5)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto Lb5
            java.lang.String r4 = d(r4)
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r5 = r5.optString(r1)
            java.lang.String r4 = e(r5, r4)
            goto L137
        Lb5:
            java.lang.String r4 = ""
            goto L137
        Lb9:
            java.lang.String r5 = r7.optString(r1)
            java.lang.String r0 = "4"
            java.lang.String r2 = r7.optString(r0)
            java.lang.String r5 = com.tramini.plugin.a.e.f.b.a(r4, r5)
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 != 0) goto Lde
            java.lang.String r4 = d(r5)
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r5 = r5.optString(r1)
            java.lang.String r4 = e(r5, r4)
            goto L137
        Lde:
            java.lang.String r4 = com.tramini.plugin.a.e.f.b.a(r4, r2)
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r5 = r5.optString(r0)
            java.lang.String r4 = e(r5, r4)
            goto L137
        Lef:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r6 = "7"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r4 = e(r5, r4)
            goto L137
        Lfe:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r6 = "5"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r4 = e(r5, r4)
            goto L137
        L10d:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r5 = r5.optString(r0)
            java.lang.String r4 = e(r5, r4)
            goto L137
        L11a:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r6 = "1"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r4 = e(r5, r4)
            goto L137
        L129:
            org.json.JSONObject r5 = r7.optJSONObject(r6)
            java.lang.String r6 = "0"
            java.lang.String r5 = r5.optString(r6)
            java.lang.String r4 = e(r5, r4)
        L137:
            return r4
    }

    private static org.json.JSONObject a(java.lang.Object r6, java.util.Set<java.lang.Object> r7, java.lang.String r8, java.lang.String r9) {
            r0 = 0
            if (r6 == 0) goto L87
            boolean r1 = r7.contains(r6)
            if (r1 != 0) goto L87
            r7.add(r6)
            java.lang.Class r1 = r6.getClass()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
        L15:
            java.lang.reflect.Field[] r3 = r1.getDeclaredFields()
            java.util.List r3 = java.util.Arrays.asList(r3)
            r2.addAll(r3)
            java.lang.Class r1 = r1.getSuperclass()
            java.lang.String r3 = r1.getName()
            boolean r3 = r3.startsWith(r9)
            if (r3 != 0) goto L15
            java.util.Iterator r1 = r2.iterator()
        L32:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L87
            java.lang.Object r2 = r1.next()
            java.lang.reflect.Field r2 = (java.lang.reflect.Field) r2
            r3 = 1
            r2.setAccessible(r3)
            java.lang.Object r3 = r2.get(r6)     // Catch: java.lang.Throwable -> L87
            if (r3 == 0) goto L32
            java.lang.Class r4 = r2.getType()     // Catch: java.lang.Throwable -> L87
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L87
            java.lang.String r5 = "interface"
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L87
            if (r4 != 0) goto L80
            java.lang.Class r4 = r3.getClass()     // Catch: java.lang.Throwable -> L87
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L87
            boolean r4 = r4.startsWith(r9)     // Catch: java.lang.Throwable -> L87
            if (r4 == 0) goto L67
            goto L80
        L67:
            java.lang.Class r2 = r2.getType()     // Catch: java.lang.Throwable -> L87
            java.lang.String r2 = r2.getName()     // Catch: java.lang.Throwable -> L87
            java.lang.String r4 = com.tramini.plugin.a.e.a.t     // Catch: java.lang.Throwable -> L87
            boolean r2 = r2.equals(r4)     // Catch: java.lang.Throwable -> L87
            if (r2 == 0) goto L32
            org.json.JSONObject r3 = (org.json.JSONObject) r3     // Catch: java.lang.Throwable -> L87
            boolean r2 = r3.has(r8)     // Catch: java.lang.Throwable -> L87
            if (r2 == 0) goto L32
            return r3
        L80:
            org.json.JSONObject r2 = a(r3, r7, r8, r9)     // Catch: java.lang.Throwable -> L87
            if (r2 == 0) goto L32
            return r2
        L87:
            return r0
    }

    private static java.lang.String[] a(org.json.JSONArray r4) {
            int r0 = r4.length()     // Catch: org.json.JSONException -> L12
            java.lang.String[] r1 = new java.lang.String[r0]     // Catch: org.json.JSONException -> L12
            r2 = 0
        L7:
            if (r2 >= r0) goto L14
            java.lang.String r3 = r4.getString(r2)     // Catch: org.json.JSONException -> L14
            r1[r2] = r3     // Catch: org.json.JSONException -> L14
            int r2 = r2 + 1
            goto L7
        L12:
            r4 = 0
            r1 = r4
        L14:
            return r1
    }

    private static java.lang.String d(java.lang.String r4, java.lang.String r5) {
            int r0 = r5.hashCode()
            r1 = 3
            r2 = 2
            r3 = 1
            switch(r0) {
                case -1852354744: goto L29;
                case -1052935859: goto L1f;
                case -336842123: goto L15;
                case 45377598: goto Lb;
                default: goto La;
            }
        La:
            goto L33
        Lb:
            java.lang.String r0 = "html_doctype_write"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L33
            r5 = r1
            goto L34
        L15:
            java.lang.String r0 = "html_x3d"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L33
            r5 = r2
            goto L34
        L1f:
            java.lang.String r0 = "naitve"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L33
            r5 = 0
            goto L34
        L29:
            java.lang.String r0 = "html_play"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L33
            r5 = r3
            goto L34
        L33:
            r5 = -1
        L34:
            if (r5 == 0) goto L9d
            if (r5 == r3) goto L7e
            if (r5 == r2) goto L7e
            if (r5 == r1) goto L45
            java.lang.String r4 = c(r4)
            java.lang.String r4 = f(r4)
            return r4
        L45:
            java.lang.String r5 = "x22"
            java.lang.String r0 = "\""
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r5 = "x26"
            java.lang.String r0 = "&"
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r5 = "x27"
            java.lang.String r0 = "'"
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r5 = "x3c"
            java.lang.String r0 = "<"
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r5 = "x3d"
            java.lang.String r0 = "="
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r5 = "x3e"
            java.lang.String r0 = ">"
            java.lang.String r4 = r4.replace(r5, r0)
            java.lang.String r4 = c(r4)
            java.lang.String r4 = f(r4)
            return r4
        L7e:
            java.lang.String r5 = "%"
            java.lang.String r0 = "\\\\\\\\x"
            java.lang.String r4 = r4.replace(r0, r5)
            java.lang.String r0 = "\\\\x"
            java.lang.String r4 = r4.replaceAll(r0, r5)
            java.lang.String r5 = "\\\\n"
            java.lang.String r0 = ""
            java.lang.String r4 = r4.replaceAll(r5, r0)
            java.lang.String r4 = c(r4)
            java.lang.String r4 = f(r4)
            return r4
        L9d:
            java.lang.String r5 = "\\/"
            java.lang.String r0 = "/"
            java.lang.String r4 = r4.replace(r5, r0)
            return r4
    }

    private static java.lang.String e(java.lang.String r1) {
            java.lang.String r0 = "div id=\"mys-wrapper\" class=\"mys-wrapper\">"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = "https://rr"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L1c
            java.lang.String r0 = ".mp4"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L19
            goto L1c
        L19:
            java.lang.String r1 = "html_background"
            goto L70
        L1c:
            java.lang.String r1 = "html"
            goto L70
        L1f:
            java.lang.String r0 = "html5AdData"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = "google_template_data"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L32
            java.lang.String r1 = "html_play"
            goto L70
        L32:
            java.lang.String r0 = "<link"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L45
            java.lang.String r0 = "type=\"text/css"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L45
            java.lang.String r1 = "html_css"
            goto L70
        L45:
            java.lang.String r0 = "new videoInterstitial"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L58
            java.lang.String r0 = "x3c"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L58
            java.lang.String r1 = "html_x3d"
            goto L70
        L58:
            java.lang.String r0 = "<!doctype html>"
            boolean r0 = r1.contains(r0)
            if (r0 == 0) goto L6e
            java.lang.String r0 = "doc.write"
            boolean r1 = r1.contains(r0)
            if (r1 == 0) goto L6b
            java.lang.String r1 = "html_doctype_write"
            goto L70
        L6b:
            java.lang.String r1 = "html_doctype"
            goto L70
        L6e:
            java.lang.String r1 = "html_unknow"
        L70:
            return r1
    }

    private static java.lang.String e(java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = ""
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L7b
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L7b
            r6 = 0
            r2 = r0
        L9:
            int r3 = r1.length()     // Catch: java.lang.Throwable -> L7b
            if (r6 >= r3) goto L7b
            org.json.JSONObject r3 = r1.optJSONObject(r6)     // Catch: java.lang.Throwable -> L7b
            if (r3 == 0) goto L78
            java.lang.String r4 = "action"
            r5 = -1
            int r4 = r3.optInt(r4, r5)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r5 = "param"
            java.lang.String r3 = r3.optString(r5, r0)     // Catch: java.lang.Throwable -> L7b
            r5 = 11
            if (r4 == r5) goto L67
            r5 = 13
            if (r4 == r5) goto L5c
            r5 = 101(0x65, float:1.42E-43)
            if (r4 == r5) goto L51
            r5 = 102(0x66, float:1.43E-43)
            if (r4 == r5) goto L33
            goto L71
        L33:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L78
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7b
            java.lang.String r4 = "'"
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L7b
            r2.append(r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r3 = "'\\s*:\\s*'(.*?)'"
            r2.append(r3)     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L7b
            java.lang.String r2 = com.tramini.plugin.a.e.f.c(r7, r2)     // Catch: java.lang.Throwable -> L7b
            goto L71
        L51:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L78
            java.lang.String r2 = com.tramini.plugin.a.e.f.b.a(r7, r3)     // Catch: java.lang.Throwable -> L7b
            goto L71
        L5c:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L78
            java.lang.String r2 = com.tramini.plugin.a.e.f.d.b(r7, r3)     // Catch: java.lang.Throwable -> L7b
            goto L71
        L67:
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L7b
            if (r4 != 0) goto L78
            java.lang.String r2 = com.tramini.plugin.a.e.f.d.a(r7, r3)     // Catch: java.lang.Throwable -> L7b
        L71:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L7b
            if (r3 != 0) goto L78
            return r2
        L78:
            int r6 = r6 + 1
            goto L9
        L7b:
            return r0
    }

    private static java.lang.String f(java.lang.String r2) {
            java.lang.String r0 = "&amp;"
            java.lang.String r1 = "&"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "&quot;"
            java.lang.String r1 = "\""
            java.lang.String r2 = r2.replaceAll(r0, r1)
            return r2
    }
}
