package com.kuaishou.weapon.p0;

public class cv implements java.lang.Runnable {
    private android.content.Context a;


    public cv(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private com.kuaishou.weapon.p0.y b(java.lang.String r21) {
            r20 = this;
            java.lang.String r0 = "ie"
            java.lang.String r1 = "n"
            java.lang.String r2 = "btm"
            java.lang.String r3 = "ic"
            java.lang.String r4 = "w"
            java.lang.String r5 = "d"
            java.lang.String r6 = "p"
            java.lang.String r7 = "c"
            java.lang.String r8 = "r"
            java.lang.String r9 = "ac"
            java.lang.String r10 = "a"
            java.lang.String r11 = "mc"
            java.lang.String r12 = "is"
            com.kuaishou.weapon.p0.y r14 = new com.kuaishou.weapon.p0.y     // Catch: java.lang.Exception -> L4db
            r14.<init>()     // Catch: java.lang.Exception -> L4db
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Exception -> L4db
            r13 = r21
            r15.<init>(r13)     // Catch: java.lang.Exception -> L4db
            java.lang.String r13 = "status"
            r16 = r6
            r6 = 1
            int r13 = r15.optInt(r13, r6)     // Catch: java.lang.Exception -> L4db
            r14.e(r13)     // Catch: java.lang.Exception -> L4db
            int r13 = r14.z()     // Catch: java.lang.Exception -> L4db
            if (r13 == r6) goto L3a
            r13 = 0
            return r13
        L3a:
            java.lang.String r13 = "bwc"
            r6 = 0
            int r13 = r15.optInt(r13, r6)     // Catch: java.lang.Exception -> L4db
            r14.f(r13)     // Catch: java.lang.Exception -> L4db
            java.lang.String r13 = "blpc"
            r6 = 1
            int r13 = r15.optInt(r13, r6)     // Catch: java.lang.Exception -> L4db
            r14.g(r13)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "scc"
            r13 = 0
            int r6 = r15.optInt(r6, r13)     // Catch: java.lang.Exception -> L4db
            r14.h(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "dpver"
            java.lang.String r6 = r15.optString(r6)     // Catch: java.lang.Exception -> L4db
            r14.j(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "bver"
            java.lang.String r6 = r15.optString(r6)     // Catch: java.lang.Exception -> L4db
            r14.k(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "dpd"
            r13 = 12
            int r6 = r15.optInt(r6, r13)     // Catch: java.lang.Exception -> L4db
            r14.d(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "aar"
            r13 = 30
            int r6 = r15.optInt(r6, r13)     // Catch: java.lang.Exception -> L4db
            r14.b(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "dir"
            java.lang.String r6 = r15.optString(r6)     // Catch: java.lang.Exception -> L4db
            r14.e(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = r15.optString(r12)     // Catch: java.lang.Exception -> L4db
            r14.f(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "ii"
            int r6 = r15.optInt(r6)     // Catch: java.lang.Exception -> L4db
            r14.a(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "act"
            r13 = 0
            int r6 = r15.optInt(r6, r13)     // Catch: java.lang.Exception -> L4db
            r14.c(r6)     // Catch: java.lang.Exception -> L4db
            java.lang.String r6 = "aver"
            java.lang.String r6 = r15.optString(r6)     // Catch: java.lang.Exception -> Lef
            r14.h(r6)     // Catch: java.lang.Exception -> Lef
            org.json.JSONObject r6 = r15.getJSONObject(r10)     // Catch: java.lang.Exception -> Lef
            if (r6 == 0) goto Lef
            com.kuaishou.weapon.p0.y$a r13 = new com.kuaishou.weapon.p0.y$a     // Catch: java.lang.Exception -> Lef
            r13.<init>()     // Catch: java.lang.Exception -> Lef
            r18 = r2
            java.lang.String r2 = "as"
            r19 = r3
            r3 = 0
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf3
            r13.c(r2)     // Catch: java.lang.Exception -> Lf3
            r2 = 3
            int r3 = r6.optInt(r9, r2)     // Catch: java.lang.Exception -> Lf3
            r13.d(r3)     // Catch: java.lang.Exception -> Lf3
            java.lang.String r2 = "ai"
            r3 = 8
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf3
            r13.e(r2)     // Catch: java.lang.Exception -> Lf3
            java.lang.String r2 = "ab"
            r3 = 0
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf3
            r13.b(r2)     // Catch: java.lang.Exception -> Lf3
            java.lang.String r2 = "am"
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Exception -> Lf3
            r13.a(r2)     // Catch: java.lang.Exception -> Lf3
            r14.a(r13)     // Catch: java.lang.Exception -> Lf3
            goto Lf3
        Lef:
            r18 = r2
        Lf1:
            r19 = r3
        Lf3:
            java.lang.String r2 = "acver"
            java.lang.String r2 = r15.optString(r2)     // Catch: java.lang.Exception -> L129
            r14.b(r2)     // Catch: java.lang.Exception -> L129
            org.json.JSONObject r2 = r15.getJSONObject(r9)     // Catch: java.lang.Exception -> L129
            if (r2 == 0) goto L129
            com.kuaishou.weapon.p0.y$b r3 = new com.kuaishou.weapon.p0.y$b     // Catch: java.lang.Exception -> L129
            r3.<init>()     // Catch: java.lang.Exception -> L129
            java.lang.String r6 = "acs"
            r9 = 1
            int r6 = r2.optInt(r6, r9)     // Catch: java.lang.Exception -> L129
            r3.a(r6)     // Catch: java.lang.Exception -> L129
            java.lang.String r6 = "acc"
            r9 = 3
            int r6 = r2.optInt(r6, r9)     // Catch: java.lang.Exception -> L129
            r3.b(r6)     // Catch: java.lang.Exception -> L129
            java.lang.String r6 = "aci"
            r9 = 8
            int r2 = r2.optInt(r6, r9)     // Catch: java.lang.Exception -> L129
            r3.c(r2)     // Catch: java.lang.Exception -> L129
            r14.a(r3)     // Catch: java.lang.Exception -> L129
        L129:
            java.lang.String r2 = "rver"
            java.lang.String r2 = r15.optString(r2)     // Catch: java.lang.Exception -> L200
            r14.a(r2)     // Catch: java.lang.Exception -> L200
            com.kuaishou.weapon.p0.y$g r2 = new com.kuaishou.weapon.p0.y$g     // Catch: java.lang.Exception -> L200
            r2.<init>()     // Catch: java.lang.Exception -> L200
            org.json.JSONObject r3 = r15.getJSONObject(r8)     // Catch: java.lang.Exception -> L200
            if (r3 == 0) goto L200
            java.lang.String r6 = "rs"
            r9 = 1
            int r6 = r3.optInt(r6, r9)     // Catch: java.lang.Exception -> L200
            r2.b(r6)     // Catch: java.lang.Exception -> L200
            java.lang.String r6 = "rc"
            r9 = 6
            int r6 = r3.optInt(r6, r9)     // Catch: java.lang.Exception -> L200
            r2.c(r6)     // Catch: java.lang.Exception -> L200
            java.lang.String r6 = "ri"
            r9 = 4
            int r6 = r3.optInt(r6, r9)     // Catch: java.lang.Exception -> L200
            r2.d(r6)     // Catch: java.lang.Exception -> L200
            java.lang.String r6 = "ro"
            r9 = 5
            int r6 = r3.optInt(r6, r9)     // Catch: java.lang.Exception -> L200
            r2.e(r6)     // Catch: java.lang.Exception -> L200
            java.lang.String r6 = "rb"
            r9 = 0
            int r6 = r3.optInt(r6, r9)     // Catch: java.lang.Exception -> L200
            r2.a(r6)     // Catch: java.lang.Exception -> L200
            java.lang.String r6 = "rcl"
            org.json.JSONObject r3 = r3.getJSONObject(r6)     // Catch: java.lang.Exception -> L200
            com.kuaishou.weapon.p0.y$g$a r6 = new com.kuaishou.weapon.p0.y$g$a     // Catch: java.lang.Exception -> L200
            r6.<init>()     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "da"
            r13 = 1
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.l(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "em"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.b(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "li"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.m(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "rcd"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.f(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "dv"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.g(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "re"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.h(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "fr"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.c(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "hk"
            r13 = 0
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.a(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "vp"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.k(r9)     // Catch: java.lang.Exception -> L200
            int r9 = r3.optInt(r11, r13)     // Catch: java.lang.Exception -> L200
            r6.i(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "sc"
            r13 = 1
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.e(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "ud"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.d(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "xp"
            int r9 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.j(r9)     // Catch: java.lang.Exception -> L200
            java.lang.String r9 = "vl"
            r13 = 0
            int r3 = r3.optInt(r9, r13)     // Catch: java.lang.Exception -> L200
            r6.n(r3)     // Catch: java.lang.Exception -> L200
            r2.a(r6)     // Catch: java.lang.Exception -> L200
            r14.a(r2)     // Catch: java.lang.Exception -> L200
        L200:
            r2 = 2
            com.kuaishou.weapon.p0.y$c r3 = new com.kuaishou.weapon.p0.y$c     // Catch: java.lang.Exception -> L33c
            r3.<init>()     // Catch: java.lang.Exception -> L33c
            java.lang.String r6 = "b"
            org.json.JSONObject r6 = r15.getJSONObject(r6)     // Catch: java.lang.Exception -> L33c
            java.lang.String r9 = "bc"
            int r9 = r6.optInt(r9, r2)     // Catch: java.lang.Exception -> L33c
            r3.b(r9)     // Catch: java.lang.Exception -> L33c
            java.lang.String r9 = "bi"
            r13 = 12
            int r9 = r6.optInt(r9, r13)     // Catch: java.lang.Exception -> L33c
            r3.c(r9)     // Catch: java.lang.Exception -> L33c
            java.lang.String r9 = "bs"
            r13 = 1
            int r9 = r6.optInt(r9, r13)     // Catch: java.lang.Exception -> L33c
            r3.a(r9)     // Catch: java.lang.Exception -> L33c
            java.lang.String r9 = "pry"
            org.json.JSONObject r9 = r6.getJSONObject(r9)     // Catch: java.lang.Exception -> L28d
            com.kuaishou.weapon.p0.y$c$b r13 = new com.kuaishou.weapon.p0.y$c$b     // Catch: java.lang.Exception -> L28d
            r13.<init>()     // Catch: java.lang.Exception -> L28d
            java.lang.String r2 = "gifa"
            r17 = r15
            r15 = 1
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.e(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "gnci"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.d(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "gsl"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.f(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "gso"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.c(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "gno"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.a(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "gnon"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.b(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "rl"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.g(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "grs"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.i(r2)     // Catch: java.lang.Exception -> L28f
            java.lang.String r2 = "grt"
            int r2 = r9.optInt(r2, r15)     // Catch: java.lang.Exception -> L28f
            r13.h(r2)     // Catch: java.lang.Exception -> L28f
            r3.a(r13)     // Catch: java.lang.Exception -> L28f
            goto L28f
        L28d:
            r17 = r15
        L28f:
            java.lang.String r2 = "bcl"
            org.json.JSONObject r2 = r6.getJSONObject(r2)     // Catch: java.lang.Exception -> L33e
            com.kuaishou.weapon.p0.y$c$a r6 = new com.kuaishou.weapon.p0.y$c$a     // Catch: java.lang.Exception -> L33e
            r6.<init>()     // Catch: java.lang.Exception -> L33e
            r9 = 1
            int r10 = r2.optInt(r10, r9)     // Catch: java.lang.Exception -> L33e
            r6.a(r10)     // Catch: java.lang.Exception -> L33e
            int r8 = r2.optInt(r8, r9)     // Catch: java.lang.Exception -> L33e
            r6.i(r8)     // Catch: java.lang.Exception -> L33e
            int r8 = r2.optInt(r7, r9)     // Catch: java.lang.Exception -> L33e
            r6.b(r8)     // Catch: java.lang.Exception -> L33e
            java.lang.String r8 = "s"
            int r8 = r2.optInt(r8, r9)     // Catch: java.lang.Exception -> L33e
            r6.j(r8)     // Catch: java.lang.Exception -> L33e
            int r8 = r2.optInt(r5, r9)     // Catch: java.lang.Exception -> L33e
            r6.d(r8)     // Catch: java.lang.Exception -> L33e
            java.lang.String r8 = "u"
            int r8 = r2.optInt(r8, r9)     // Catch: java.lang.Exception -> L33e
            r6.k(r8)     // Catch: java.lang.Exception -> L33e
            r8 = 0
            int r9 = r2.optInt(r4, r8)     // Catch: java.lang.Exception -> L33e
            r6.m(r9)     // Catch: java.lang.Exception -> L33e
            int r9 = r2.optInt(r1, r8)     // Catch: java.lang.Exception -> L33e
            r6.f(r9)     // Catch: java.lang.Exception -> L33e
            r9 = 1
            int r10 = r2.optInt(r0, r9)     // Catch: java.lang.Exception -> L33e
            r6.p(r10)     // Catch: java.lang.Exception -> L33e
            int r10 = r2.optInt(r12, r8)     // Catch: java.lang.Exception -> L33e
            r6.e(r10)     // Catch: java.lang.Exception -> L33e
            r8 = r19
            int r10 = r2.optInt(r8, r9)     // Catch: java.lang.Exception -> L337
            r6.n(r10)     // Catch: java.lang.Exception -> L337
            r10 = r18
            int r13 = r2.optInt(r10, r9)     // Catch: java.lang.Exception -> L334
            r6.o(r13)     // Catch: java.lang.Exception -> L334
            int r13 = r2.optInt(r11, r9)     // Catch: java.lang.Exception -> L334
            r6.l(r13)     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "rp"
            int r13 = r2.optInt(r13, r9)     // Catch: java.lang.Exception -> L334
            r6.q(r13)     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "tc"
            int r13 = r2.optInt(r13, r9)     // Catch: java.lang.Exception -> L334
            r6.g(r13)     // Catch: java.lang.Exception -> L334
            java.lang.String r13 = "il"
            int r13 = r2.optInt(r13, r9)     // Catch: java.lang.Exception -> L334
            r6.c(r13)     // Catch: java.lang.Exception -> L334
            r13 = r16
            int r15 = r2.optInt(r13, r9)     // Catch: java.lang.Exception -> L344
            r6.h(r15)     // Catch: java.lang.Exception -> L344
            java.lang.String r15 = "l"
            int r2 = r2.optInt(r15, r9)     // Catch: java.lang.Exception -> L344
            r6.r(r2)     // Catch: java.lang.Exception -> L344
            r3.a(r6)     // Catch: java.lang.Exception -> L344
            r14.a(r3)     // Catch: java.lang.Exception -> L344
            goto L344
        L334:
            r13 = r16
            goto L344
        L337:
            r13 = r16
            r10 = r18
            goto L344
        L33c:
            r17 = r15
        L33e:
            r13 = r16
            r10 = r18
            r8 = r19
        L344:
            java.lang.String r2 = "cver"
            r3 = r17
            java.lang.String r2 = r3.optString(r2)     // Catch: java.lang.Exception -> L3d0
            r14.g(r2)     // Catch: java.lang.Exception -> L3d0
            com.kuaishou.weapon.p0.y$d r2 = new com.kuaishou.weapon.p0.y$d     // Catch: java.lang.Exception -> L3d0
            r2.<init>()     // Catch: java.lang.Exception -> L3d0
            org.json.JSONObject r6 = r3.getJSONObject(r7)     // Catch: java.lang.Exception -> L3d0
            java.lang.String r7 = "cc"
            r9 = 2
            int r7 = r6.optInt(r7, r9)     // Catch: java.lang.Exception -> L3d0
            r2.b(r7)     // Catch: java.lang.Exception -> L3d0
            java.lang.String r7 = "ci"
            r9 = 12
            int r7 = r6.optInt(r7, r9)     // Catch: java.lang.Exception -> L3d0
            r2.c(r7)     // Catch: java.lang.Exception -> L3d0
            java.lang.String r7 = "cs"
            r9 = 1
            int r7 = r6.optInt(r7, r9)     // Catch: java.lang.Exception -> L3d0
            r2.a(r7)     // Catch: java.lang.Exception -> L3d0
            java.lang.String r7 = "cb"
            r9 = 0
            int r7 = r6.optInt(r7, r9)     // Catch: java.lang.Exception -> L3d0
            r2.d(r7)     // Catch: java.lang.Exception -> L3d0
            java.lang.String r7 = "ccl"
            org.json.JSONObject r6 = r6.getJSONObject(r7)     // Catch: java.lang.Exception -> L3d0
            com.kuaishou.weapon.p0.y$d$a r7 = new com.kuaishou.weapon.p0.y$d$a     // Catch: java.lang.Exception -> L3d0
            r7.<init>()     // Catch: java.lang.Exception -> L3d0
            r9 = 1
            int r5 = r6.optInt(r5, r9)     // Catch: java.lang.Exception -> L3d0
            r7.a(r5)     // Catch: java.lang.Exception -> L3d0
            int r5 = r6.optInt(r11, r9)     // Catch: java.lang.Exception -> L3d0
            r7.b(r5)     // Catch: java.lang.Exception -> L3d0
            r5 = 0
            int r4 = r6.optInt(r4, r5)     // Catch: java.lang.Exception -> L3d0
            r7.c(r4)     // Catch: java.lang.Exception -> L3d0
            int r4 = r6.optInt(r12, r9)     // Catch: java.lang.Exception -> L3d0
            r7.d(r4)     // Catch: java.lang.Exception -> L3d0
            int r4 = r6.optInt(r8, r9)     // Catch: java.lang.Exception -> L3d0
            r7.e(r4)     // Catch: java.lang.Exception -> L3d0
            int r4 = r6.optInt(r10, r9)     // Catch: java.lang.Exception -> L3d0
            r7.f(r4)     // Catch: java.lang.Exception -> L3d0
            int r0 = r6.optInt(r0, r9)     // Catch: java.lang.Exception -> L3d0
            r7.g(r0)     // Catch: java.lang.Exception -> L3d0
            r0 = 0
            int r1 = r6.optInt(r1, r0)     // Catch: java.lang.Exception -> L3d0
            r7.h(r1)     // Catch: java.lang.Exception -> L3d0
            r2.a(r7)     // Catch: java.lang.Exception -> L3d0
            r14.a(r2)     // Catch: java.lang.Exception -> L3d0
            goto L3d0
        L3ce:
            r3 = r17
        L3d0:
            java.lang.String r0 = "pgver"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L444
            r14.i(r0)     // Catch: java.lang.Exception -> L444
            org.json.JSONObject r0 = r3.optJSONObject(r13)     // Catch: java.lang.Exception -> L444
            if (r0 == 0) goto L444
            com.kuaishou.weapon.p0.y$f r1 = new com.kuaishou.weapon.p0.y$f     // Catch: java.lang.Exception -> L444
            r1.<init>()     // Catch: java.lang.Exception -> L444
            java.lang.String r2 = "ps"
            r4 = 1
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L444
            r1.a(r2)     // Catch: java.lang.Exception -> L444
            java.lang.String r2 = "pc"
            r4 = 2
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L444
            r1.b(r2)     // Catch: java.lang.Exception -> L444
            java.lang.String r2 = "pi"
            r4 = 12
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L444
            r1.c(r2)     // Catch: java.lang.Exception -> L444
            java.lang.String r2 = "pcl"
            org.json.JSONObject r0 = r0.optJSONObject(r2)     // Catch: java.lang.Exception -> L444
            if (r0 == 0) goto L441
            com.kuaishou.weapon.p0.y$f$a r2 = new com.kuaishou.weapon.p0.y$f$a     // Catch: java.lang.Exception -> L444
            r2.<init>()     // Catch: java.lang.Exception -> L444
            java.lang.String r4 = "cp"
            r5 = 1
            int r4 = r0.optInt(r4, r5)     // Catch: java.lang.Exception -> L444
            r2.d(r4)     // Catch: java.lang.Exception -> L444
            java.lang.String r4 = "gc"
            int r4 = r0.optInt(r4, r5)     // Catch: java.lang.Exception -> L444
            r2.c(r4)     // Catch: java.lang.Exception -> L444
            java.lang.String r4 = "pke"
            int r4 = r0.optInt(r4, r5)     // Catch: java.lang.Exception -> L444
            r2.b(r4)     // Catch: java.lang.Exception -> L444
            java.lang.String r4 = "pds"
            int r4 = r0.optInt(r4, r5)     // Catch: java.lang.Exception -> L444
            r2.e(r4)     // Catch: java.lang.Exception -> L444
            java.lang.String r4 = "pam"
            int r0 = r0.optInt(r4, r5)     // Catch: java.lang.Exception -> L444
            r2.a(r0)     // Catch: java.lang.Exception -> L444
            r1.a(r2)     // Catch: java.lang.Exception -> L444
        L441:
            r14.a(r1)     // Catch: java.lang.Exception -> L444
        L444:
            java.lang.String r0 = "socver"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L486
            r14.m(r0)     // Catch: java.lang.Exception -> L486
            java.lang.String r0 = "soc"
            org.json.JSONObject r0 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> L486
            if (r0 == 0) goto L486
            com.kuaishou.weapon.p0.y$h r1 = new com.kuaishou.weapon.p0.y$h     // Catch: java.lang.Exception -> L486
            r1.<init>()     // Catch: java.lang.Exception -> L486
            java.lang.String r2 = "socs"
            r4 = 0
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L486
            r1.c(r2)     // Catch: java.lang.Exception -> L486
            java.lang.String r2 = "socc"
            r4 = 2
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L486
            r1.d(r2)     // Catch: java.lang.Exception -> L486
            java.lang.String r2 = "soci"
            r4 = 12
            int r2 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L486
            r1.b(r2)     // Catch: java.lang.Exception -> L486
            java.lang.String r2 = "snack"
            r4 = 0
            int r0 = r0.optInt(r2, r4)     // Catch: java.lang.Exception -> L486
            r1.a(r0)     // Catch: java.lang.Exception -> L486
            r14.a(r1)     // Catch: java.lang.Exception -> L486
        L486:
            java.lang.String r0 = "hver"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Exception -> L4da
            r14.d(r0)     // Catch: java.lang.Exception -> L4da
            java.lang.String r0 = "h"
            org.json.JSONObject r0 = r3.optJSONObject(r0)     // Catch: java.lang.Exception -> L4da
            if (r0 == 0) goto L4da
            com.kuaishou.weapon.p0.y$e r1 = new com.kuaishou.weapon.p0.y$e     // Catch: java.lang.Exception -> L4da
            r1.<init>()     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "hs"
            r3 = 1
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> L4da
            r1.b(r2)     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "hc"
            r3 = 2
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> L4da
            r1.c(r2)     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "hi"
            r3 = 12
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> L4da
            r1.a(r2)     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "hsdc"
            r3 = 1
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> L4da
            r1.d(r2)     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "hlbr"
            int r2 = r0.optInt(r2, r3)     // Catch: java.lang.Exception -> L4da
            r1.e(r2)     // Catch: java.lang.Exception -> L4da
            java.lang.String r2 = "pr"
            java.lang.String r0 = r0.optString(r2)     // Catch: java.lang.Exception -> L4da
            r1.a(r0)     // Catch: java.lang.Exception -> L4da
            r14.a(r1)     // Catch: java.lang.Exception -> L4da
        L4da:
            return r14
        L4db:
            r0 = 0
            return r0
    }

    public void a(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r0.<init>(r4)     // Catch: java.lang.Exception -> L44
            java.lang.String r1 = "result"
            r2 = 0
            int r1 = r0.optInt(r1, r2)     // Catch: java.lang.Exception -> L44
            r2 = 1
            if (r1 != r2) goto L44
            java.lang.String r1 = "antispamPluginRsp"
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Exception -> L44
            com.kuaishou.weapon.p0.bm r1 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Exception -> L44
            android.content.Context r2 = r3.a     // Catch: java.lang.Exception -> L44
            r1.<init>(r2)     // Catch: java.lang.Exception -> L44
            java.lang.String r0 = r1.a(r0)     // Catch: java.lang.Exception -> L44
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L44
            if (r1 == 0) goto L27
            return
        L27:
            com.kuaishou.weapon.p0.y r0 = r3.b(r0)     // Catch: java.lang.Exception -> L44
            if (r0 == 0) goto L37
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L44
            com.kuaishou.weapon.p0.df r1 = com.kuaishou.weapon.p0.df.a(r1)     // Catch: java.lang.Exception -> L44
            r1.a(r4, r0)     // Catch: java.lang.Exception -> L44
            goto L44
        L37:
            android.content.Context r4 = r3.a     // Catch: java.lang.Exception -> L44
            com.kuaishou.weapon.p0.df r4 = com.kuaishou.weapon.p0.df.a(r4)     // Catch: java.lang.Exception -> L44
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L44
            r4.b(r0)     // Catch: java.lang.Exception -> L44
        L44:
            return
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r0.<init>()     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.a     // Catch: java.lang.Exception -> L71
            r0.append(r1)     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = com.kuaishou.weapon.p0.ct.d     // Catch: java.lang.Exception -> L71
            r0.append(r1)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L71
            android.content.Context r1 = r5.a     // Catch: java.lang.Exception -> L71
            java.lang.String r1 = com.kuaishou.weapon.p0.cu.a(r1)     // Catch: java.lang.Exception -> L71
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L71
            if (r2 != 0) goto L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L71
            r2.<init>()     // Catch: java.lang.Exception -> L71
            r2.append(r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = "?"
            r2.append(r0)     // Catch: java.lang.Exception -> L71
            r2.append(r1)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L71
        L33:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L71
            r1.<init>()     // Catch: java.lang.Exception -> L71
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L71
            org.json.JSONObject r2 = com.kuaishou.weapon.p0.cu.b(r2)     // Catch: java.lang.Exception -> L71
            if (r2 == 0) goto L54
            com.kuaishou.weapon.p0.bm r3 = new com.kuaishou.weapon.p0.bm     // Catch: java.lang.Exception -> L71
            android.content.Context r4 = r5.a     // Catch: java.lang.Exception -> L71
            r3.<init>(r4)     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L71
            java.lang.String r2 = r3.c(r2)     // Catch: java.lang.Exception -> L71
            java.lang.String r3 = "data"
            r1.put(r3, r2)     // Catch: java.lang.Exception -> L71
        L54:
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.l r2 = com.kuaishou.weapon.p0.l.a(r2)     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.m r3 = new com.kuaishou.weapon.p0.m     // Catch: java.lang.Exception -> L71
            r3.<init>(r0, r1)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.cookieData     // Catch: java.lang.Exception -> L71
            r3.a(r0)     // Catch: java.lang.Exception -> L71
            java.lang.String r0 = com.kuaishou.weapon.p0.WeaponHI.encryENV     // Catch: java.lang.Exception -> L71
            r3.b(r0)     // Catch: java.lang.Exception -> L71
            com.kuaishou.weapon.p0.cv$1 r0 = new com.kuaishou.weapon.p0.cv$1     // Catch: java.lang.Exception -> L71
            r0.<init>(r5)     // Catch: java.lang.Exception -> L71
            r2.b(r3, r0)     // Catch: java.lang.Exception -> L71
        L71:
            return
    }
}
