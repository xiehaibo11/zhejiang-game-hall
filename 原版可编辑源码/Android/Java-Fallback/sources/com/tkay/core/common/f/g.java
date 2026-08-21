package com.tkay.core.common.f;

public final class g extends com.tkay.core.common.f.p {
    public java.lang.String A;
    public java.lang.String B;
    public java.lang.String C;
    public java.lang.String D;
    public org.json.JSONObject E;
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public java.lang.String l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public java.lang.String p;
    public java.lang.String q;
    public java.lang.String r;
    public java.lang.String s;
    public java.lang.String t;
    public java.lang.String u;
    public java.lang.String v;
    public java.lang.String w;
    public java.lang.String x;
    public java.lang.String y;
    public java.lang.String z;

    private g() {
            r0 = this;
            r0.<init>()
            return
    }

    public g(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.A = r1
            r0.B = r2
            return
    }

    public static com.tkay.core.common.f.g a(java.lang.String r25) {
            java.lang.String r0 = "msg9"
            java.lang.String r1 = "msg8"
            java.lang.String r2 = "msg7"
            java.lang.String r3 = "msg6"
            java.lang.String r4 = "msg5"
            java.lang.String r5 = "msg4"
            java.lang.String r6 = "msg3"
            java.lang.String r7 = "msg2"
            java.lang.String r8 = "msg1"
            java.lang.String r9 = "msg"
            java.lang.String r10 = "traffic_group_id"
            java.lang.String r11 = "refresh"
            java.lang.String r12 = "asid"
            java.lang.String r13 = "timestamp"
            java.lang.String r14 = "unitgroupid"
            java.lang.String r15 = "groupid"
            r16 = r0
            java.lang.String r0 = "sessionid"
            r17 = r1
            java.lang.String r1 = "psid"
            r18 = r2
            java.lang.String r2 = "unitid"
            r19 = r3
            java.lang.String r3 = "requestid"
            r20 = r4
            java.lang.String r4 = "key"
            r21 = r5
            com.tkay.core.common.f.g r5 = new com.tkay.core.common.f.g
            r5.<init>()
            boolean r22 = android.text.TextUtils.isEmpty(r25)
            if (r22 != 0) goto L1d3
            r22 = r6
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1cf
            r23 = r7
            r7 = r25
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L1cf
            boolean r7 = r6.has(r4)     // Catch: java.lang.Throwable -> L1cf
            r24 = r8
            java.lang.String r8 = ""
            if (r7 == 0) goto L5c
            java.lang.String r4 = r6.optString(r4, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.a = r4     // Catch: java.lang.Throwable -> L1cf
        L5c:
            boolean r4 = r6.has(r3)     // Catch: java.lang.Throwable -> L1cf
            if (r4 == 0) goto L68
            java.lang.String r3 = r6.optString(r3, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.b = r3     // Catch: java.lang.Throwable -> L1cf
        L68:
            boolean r3 = r6.has(r2)     // Catch: java.lang.Throwable -> L1cf
            if (r3 == 0) goto L74
            java.lang.String r2 = r6.optString(r2, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.d = r2     // Catch: java.lang.Throwable -> L1cf
        L74:
            boolean r2 = r6.has(r1)     // Catch: java.lang.Throwable -> L1cf
            if (r2 == 0) goto L80
            java.lang.String r1 = r6.optString(r1, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.e = r1     // Catch: java.lang.Throwable -> L1cf
        L80:
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L8c
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.f = r0     // Catch: java.lang.Throwable -> L1cf
        L8c:
            boolean r0 = r6.has(r15)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L98
            java.lang.String r0 = r6.optString(r15, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.g = r0     // Catch: java.lang.Throwable -> L1cf
        L98:
            boolean r0 = r6.has(r14)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto La4
            java.lang.String r0 = r6.optString(r14, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.h = r0     // Catch: java.lang.Throwable -> L1cf
        La4:
            boolean r0 = r6.has(r13)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto Lb0
            java.lang.String r0 = r6.optString(r13, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.i = r0     // Catch: java.lang.Throwable -> L1cf
        Lb0:
            boolean r0 = r6.has(r12)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto Lbc
            java.lang.String r0 = r6.optString(r12, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.j = r0     // Catch: java.lang.Throwable -> L1cf
        Lbc:
            boolean r0 = r6.has(r11)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto Lc8
            java.lang.String r0 = r6.optString(r11, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.k = r0     // Catch: java.lang.Throwable -> L1cf
        Lc8:
            boolean r0 = r6.has(r10)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto Ld4
            java.lang.String r0 = r6.optString(r10, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.l = r0     // Catch: java.lang.Throwable -> L1cf
        Ld4:
            boolean r0 = r6.has(r9)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto Le0
            java.lang.String r0 = r6.optString(r9, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.m = r0     // Catch: java.lang.Throwable -> L1cf
        Le0:
            r0 = r24
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto Lee
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.n = r0     // Catch: java.lang.Throwable -> L1cf
        Lee:
            r0 = r23
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto Lfc
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.o = r0     // Catch: java.lang.Throwable -> L1cf
        Lfc:
            r0 = r22
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L10a
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.p = r0     // Catch: java.lang.Throwable -> L1cf
        L10a:
            r0 = r21
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L118
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.q = r0     // Catch: java.lang.Throwable -> L1cf
        L118:
            r0 = r20
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L126
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.r = r0     // Catch: java.lang.Throwable -> L1cf
        L126:
            r0 = r19
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L134
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.s = r0     // Catch: java.lang.Throwable -> L1cf
        L134:
            r0 = r18
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L142
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.t = r0     // Catch: java.lang.Throwable -> L1cf
        L142:
            r0 = r17
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L150
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.u = r0     // Catch: java.lang.Throwable -> L1cf
        L150:
            r0 = r16
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r1 == 0) goto L15e
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.v = r0     // Catch: java.lang.Throwable -> L1cf
        L15e:
            java.lang.String r0 = "msg10"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L16e
            java.lang.String r0 = "msg10"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.w = r0     // Catch: java.lang.Throwable -> L1cf
        L16e:
            java.lang.String r0 = "msg11"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L17e
            java.lang.String r0 = "msg11"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.x = r0     // Catch: java.lang.Throwable -> L1cf
        L17e:
            java.lang.String r0 = "msg12"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L18e
            java.lang.String r0 = "msg12"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.y = r0     // Catch: java.lang.Throwable -> L1cf
        L18e:
            java.lang.String r0 = "msg13"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L19e
            java.lang.String r0 = "msg13"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.z = r0     // Catch: java.lang.Throwable -> L1cf
        L19e:
            java.lang.String r0 = "wf_id"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L1ae
            java.lang.String r0 = "wf_id"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.C = r0     // Catch: java.lang.Throwable -> L1cf
        L1ae:
            java.lang.String r0 = "cp_pl_id"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L1be
            java.lang.String r0 = "cp_pl_id"
            java.lang.String r0 = r6.optString(r0, r8)     // Catch: java.lang.Throwable -> L1cf
            r5.D = r0     // Catch: java.lang.Throwable -> L1cf
        L1be:
            java.lang.String r0 = "p_c"
            boolean r0 = r6.has(r0)     // Catch: java.lang.Throwable -> L1cf
            if (r0 == 0) goto L1d3
            java.lang.String r0 = "p_c"
            org.json.JSONObject r0 = r6.optJSONObject(r0)     // Catch: java.lang.Throwable -> L1cf
            r5.E = r0     // Catch: java.lang.Throwable -> L1cf
            goto L1d3
        L1cf:
            r0 = move-exception
            r0.printStackTrace()
        L1d3:
            return r5
    }

    @Override
    public final org.json.JSONObject a() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "key"
            java.lang.String r2 = r3.a     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "requestid"
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "unitid"
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "psid"
            java.lang.String r2 = r3.e     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "sessionid"
            java.lang.String r2 = r3.f     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "groupid"
            java.lang.String r2 = r3.g     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "unitgroupid"
            java.lang.String r2 = r3.h     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "timestamp"
            java.lang.String r2 = r3.i     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "asid"
            java.lang.String r2 = r3.j     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "refresh"
            java.lang.String r2 = r3.k     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "traffic_group_id"
            java.lang.String r2 = r3.l     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg"
            java.lang.String r2 = r3.m     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg1"
            java.lang.String r2 = r3.n     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg2"
            java.lang.String r2 = r3.o     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg3"
            java.lang.String r2 = r3.p     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg4"
            java.lang.String r2 = r3.q     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg5"
            java.lang.String r2 = r3.r     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg6"
            java.lang.String r2 = r3.s     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg7"
            java.lang.String r2 = r3.t     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg8"
            java.lang.String r2 = r3.u     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg9"
            java.lang.String r2 = r3.v     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg10"
            java.lang.String r2 = r3.w     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg11"
            java.lang.String r2 = r3.x     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg12"
            java.lang.String r2 = r3.y     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "msg13"
            java.lang.String r2 = r3.z     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "wf_id"
            java.lang.String r2 = r3.C     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            java.lang.String r1 = "cp_pl_id"
            java.lang.String r2 = r3.D     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            org.json.JSONObject r1 = r3.E     // Catch: java.lang.Exception -> Lce
            if (r1 == 0) goto Ld2
            java.lang.String r1 = "p_c"
            org.json.JSONObject r2 = r3.E     // Catch: java.lang.Exception -> Lce
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lce
            goto Ld2
        Lce:
            r1 = move-exception
            r1.printStackTrace()
        Ld2:
            return r0
    }
}
