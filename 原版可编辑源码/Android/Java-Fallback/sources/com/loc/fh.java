package com.loc;

public final class fh {
    java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh.a>> a;
    boolean b;
    long c;
    java.lang.String d;
    com.loc.fa e;
    boolean f;
    boolean g;
    java.lang.String h;
    private long i;
    private boolean j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private long n;

    static class a {
        private com.loc.ew a;
        private java.lang.String b;

        protected a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r0
                return
        }

        public final com.loc.ew a() {
                r1 = this;
                com.loc.ew r0 = r1.a
                return r0
        }

        public final void a(com.loc.ew r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public final void a(java.lang.String r3) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto La
                r3 = 0
            L7:
                r2.b = r3
                return
            La:
                java.lang.String r0 = "##"
                java.lang.String r1 = "#"
                java.lang.String r3 = r3.replace(r0, r1)
                goto L7
        }

        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    public fh() {
            r5 = this;
            r5.<init>()
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r5.a = r0
            r0 = 0
            r5.i = r0
            r2 = 0
            r5.j = r2
            java.lang.String r2 = "2.0.201501131131"
            java.lang.String r3 = "."
            java.lang.String r4 = ""
            java.lang.String r2 = r2.replace(r3, r4)
            r5.k = r2
            r2 = 0
            r5.l = r2
            r3 = 1
            r5.b = r3
            r5.c = r0
            r5.d = r2
            r5.e = r2
            r5.m = r2
            r5.n = r0
            r5.f = r3
            r5.g = r3
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r5.h = r0
            return
    }

    private com.loc.ew a(java.lang.String r5, java.lang.StringBuilder r6, boolean r7) {
            r4 = this;
            r0 = 0
            java.lang.String r1 = "cgiwifi"
            boolean r1 = r5.contains(r1)     // Catch: java.lang.Throwable -> L96
            if (r1 != 0) goto L42
            java.lang.String r1 = "wifi"
            boolean r1 = r5.contains(r1)     // Catch: java.lang.Throwable -> L96
            if (r1 == 0) goto L12
            goto L42
        L12:
            java.lang.String r6 = "cgi"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> L96
            if (r6 == 0) goto L40
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r6 = r4.a     // Catch: java.lang.Throwable -> L96
            boolean r6 = r6.containsKey(r5)     // Catch: java.lang.Throwable -> L96
            if (r6 == 0) goto L40
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r6 = r4.a     // Catch: java.lang.Throwable -> L96
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Throwable -> L96
            java.util.ArrayList r6 = (java.util.ArrayList) r6     // Catch: java.lang.Throwable -> L96
            int r6 = r6.size()     // Catch: java.lang.Throwable -> L96
            if (r6 <= 0) goto L40
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r6 = r4.a     // Catch: java.lang.Throwable -> L96
            java.lang.Object r6 = r6.get(r5)     // Catch: java.lang.Throwable -> L96
            java.util.ArrayList r6 = (java.util.ArrayList) r6     // Catch: java.lang.Throwable -> L96
            r1 = 0
            java.lang.Object r6 = r6.get(r1)     // Catch: java.lang.Throwable -> L96
            com.loc.fh$a r6 = (com.loc.fh.a) r6     // Catch: java.lang.Throwable -> L96
            goto L46
        L40:
            r6 = r0
            goto L46
        L42:
            com.loc.fh$a r6 = r4.a(r6, r5)     // Catch: java.lang.Throwable -> L96
        L46:
            if (r6 == 0) goto L9e
            com.loc.ew r1 = r6.a()     // Catch: java.lang.Throwable -> L96
            boolean r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L96
            if (r1 == 0) goto L9e
            com.loc.ew r1 = r6.a()     // Catch: java.lang.Throwable -> L96
            java.lang.String r2 = "mem"
            r1.e(r2)     // Catch: java.lang.Throwable -> L96
            java.lang.String r2 = r6.b()     // Catch: java.lang.Throwable -> L96
            r1.h(r2)     // Catch: java.lang.Throwable -> L96
            if (r7 != 0) goto L87
            long r2 = r1.getTime()     // Catch: java.lang.Throwable -> L96
            boolean r7 = com.loc.fq.a(r2)     // Catch: java.lang.Throwable -> L96
            if (r7 == 0) goto L6f
            goto L87
        L6f:
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r7 = r4.a     // Catch: java.lang.Throwable -> L96
            if (r7 == 0) goto L9e
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r7 = r4.a     // Catch: java.lang.Throwable -> L96
            boolean r7 = r7.containsKey(r5)     // Catch: java.lang.Throwable -> L96
            if (r7 == 0) goto L9e
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r7 = r4.a     // Catch: java.lang.Throwable -> L96
            java.lang.Object r5 = r7.get(r5)     // Catch: java.lang.Throwable -> L96
            java.util.ArrayList r5 = (java.util.ArrayList) r5     // Catch: java.lang.Throwable -> L96
            r5.remove(r6)     // Catch: java.lang.Throwable -> L96
            goto L9e
        L87:
            boolean r5 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L96
            if (r5 == 0) goto L91
            r5 = 0
            r4.c = r5     // Catch: java.lang.Throwable -> L96
        L91:
            r5 = 4
            r1.setLocationType(r5)     // Catch: java.lang.Throwable -> L96
            return r1
        L96:
            r5 = move-exception
            java.lang.String r6 = "Cache"
            java.lang.String r7 = "get1"
            com.loc.fr.a(r5, r6, r7)
        L9e:
            return r0
    }

    private com.loc.fh.a a(java.lang.StringBuilder r25, java.lang.String r26) {
            r24 = this;
            r0 = r24
            r1 = r26
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r2 = r0.a
            boolean r2 = r2.isEmpty()
            r3 = 0
            if (r2 != 0) goto L148
            boolean r2 = android.text.TextUtils.isEmpty(r25)
            if (r2 == 0) goto L15
            goto L148
        L15:
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r2 = r0.a
            boolean r2 = r2.containsKey(r1)
            if (r2 != 0) goto L1e
            return r3
        L1e:
            java.util.Hashtable r2 = new java.util.Hashtable
            r2.<init>()
            java.util.Hashtable r4 = new java.util.Hashtable
            r4.<init>()
            java.util.Hashtable r5 = new java.util.Hashtable
            r5.<init>()
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r6 = r0.a
            java.lang.Object r1 = r6.get(r1)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            int r6 = r1.size()
            r7 = 1
            int r6 = r6 - r7
        L3b:
            if (r6 < 0) goto L13d
            java.lang.Object r8 = r1.get(r6)
            com.loc.fh$a r8 = (com.loc.fh.a) r8
            java.lang.String r9 = r8.b()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L135
            java.lang.String r9 = r8.b()
            r10 = r25
            boolean r9 = a(r9, r10)
            r11 = 0
            if (r9 == 0) goto L6e
            java.lang.String r9 = r8.b()
            java.lang.String r12 = r25.toString()
            boolean r9 = com.loc.fz.a(r9, r12)
            if (r9 == 0) goto L6c
        L68:
            r16 = r8
            goto L132
        L6c:
            r9 = 1
            goto L6f
        L6e:
            r9 = 0
        L6f:
            java.lang.String r12 = r8.b()
            a(r12, r2)
            java.lang.String r12 = r25.toString()
            a(r12, r4)
            r5.clear()
            java.util.Set r12 = r2.keySet()
            java.util.Iterator r12 = r12.iterator()
        L88:
            boolean r13 = r12.hasNext()
            java.lang.String r14 = ""
            if (r13 == 0) goto L9a
            java.lang.Object r13 = r12.next()
            java.lang.String r13 = (java.lang.String) r13
            r5.put(r13, r14)
            goto L88
        L9a:
            java.util.Set r12 = r4.keySet()
            java.util.Iterator r12 = r12.iterator()
        La2:
            boolean r13 = r12.hasNext()
            if (r13 == 0) goto Lb2
            java.lang.Object r13 = r12.next()
            java.lang.String r13 = (java.lang.String) r13
            r5.put(r13, r14)
            goto La2
        Lb2:
            java.util.Set r12 = r5.keySet()
            int r13 = r12.size()
            double[] r13 = new double[r13]
            int r14 = r12.size()
            double[] r14 = new double[r14]
            java.util.Iterator r15 = r12.iterator()
            r16 = 0
        Lc8:
            if (r15 == 0) goto Lf8
            boolean r17 = r15.hasNext()
            if (r17 == 0) goto Lf8
            java.lang.Object r17 = r15.next()
            r3 = r17
            java.lang.String r3 = (java.lang.String) r3
            boolean r17 = r2.containsKey(r3)
            r18 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r20 = 0
            if (r17 == 0) goto Le5
            r22 = r18
            goto Le7
        Le5:
            r22 = r20
        Le7:
            r13[r16] = r22
            boolean r3 = r4.containsKey(r3)
            if (r3 == 0) goto Lf0
            goto Lf2
        Lf0:
            r18 = r20
        Lf2:
            r14[r16] = r18
            int r16 = r16 + 1
            r3 = 0
            goto Lc8
        Lf8:
            r12.clear()
            double[] r3 = a(r13, r14)
            r12 = r3[r11]
            r14 = 4605380979056443392(0x3fe99999a0000000, double:0.800000011920929)
            int r16 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r16 < 0) goto L10c
            goto L68
        L10c:
            r12 = r3[r7]
            double r14 = com.loc.fq.g()
            r16 = r8
            r7 = 4603741668684706349(0x3fe3c6a7ef9db22d, double:0.618)
            double r14 = java.lang.Math.min(r14, r7)
            int r17 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r17 < 0) goto L122
            goto L132
        L122:
            if (r9 == 0) goto L137
            r11 = r3[r11]
            double r13 = com.loc.fq.g()
            double r7 = java.lang.Math.min(r13, r7)
            int r3 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
            if (r3 < 0) goto L137
        L132:
            r3 = r16
            goto L13e
        L135:
            r10 = r25
        L137:
            int r6 = r6 + (-1)
            r3 = 0
            r7 = 1
            goto L3b
        L13d:
            r3 = 0
        L13e:
            r2.clear()
            r4.clear()
            r5.clear()
            return r3
        L148:
            r1 = r3
            return r1
    }

    private java.lang.String a(java.lang.String r9, java.lang.StringBuilder r10, android.content.Context r11) {
            r8 = this;
            java.lang.String r0 = ",access"
            java.lang.String r1 = "&"
            java.lang.String r2 = "cgi"
            java.lang.String r3 = "#"
            r4 = 0
            if (r11 != 0) goto Lc
            return r4
        Lc:
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r11 = com.loc.fz.l(r11)     // Catch: java.lang.Throwable -> L9e
            r8.l = r11     // Catch: java.lang.Throwable -> L9e
            boolean r11 = r9.contains(r1)     // Catch: java.lang.Throwable -> L9e
            r6 = 0
            if (r11 == 0) goto L26
            int r11 = r9.indexOf(r1)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r9 = r9.substring(r6, r11)     // Catch: java.lang.Throwable -> L9e
        L26:
            int r11 = r9.lastIndexOf(r3)     // Catch: java.lang.Throwable -> L9e
            int r11 = r11 + 1
            java.lang.String r11 = r9.substring(r11)     // Catch: java.lang.Throwable -> L9e
            boolean r1 = r11.equals(r2)     // Catch: java.lang.Throwable -> L9e
            if (r1 == 0) goto L44
            int r10 = r9.length()     // Catch: java.lang.Throwable -> L9e
            int r10 = r10 + (-12)
            java.lang.String r9 = r9.substring(r6, r10)     // Catch: java.lang.Throwable -> L9e
            r5.put(r2, r9)     // Catch: java.lang.Throwable -> L9e
            goto L89
        L44:
            boolean r1 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L9e
            if (r1 != 0) goto L89
            int r1 = r10.indexOf(r0)     // Catch: java.lang.Throwable -> L9e
            r7 = -1
            if (r1 == r7) goto L89
            int r11 = r11.length()     // Catch: java.lang.Throwable -> L9e
            int r11 = r11 + 9
            int r1 = r9.length()     // Catch: java.lang.Throwable -> L9e
            int r1 = r1 - r11
            java.lang.String r9 = r9.substring(r6, r1)     // Catch: java.lang.Throwable -> L9e
            r5.put(r2, r9)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Throwable -> L9e
            java.lang.String[] r9 = r9.split(r0)     // Catch: java.lang.Throwable -> L9e
            r10 = r9[r6]     // Catch: java.lang.Throwable -> L9e
            boolean r10 = r10.contains(r3)     // Catch: java.lang.Throwable -> L9e
            if (r10 == 0) goto L82
            r10 = r9[r6]     // Catch: java.lang.Throwable -> L9e
            r9 = r9[r6]     // Catch: java.lang.Throwable -> L9e
            int r9 = r9.lastIndexOf(r3)     // Catch: java.lang.Throwable -> L9e
            int r9 = r9 + 1
            java.lang.String r9 = r10.substring(r9)     // Catch: java.lang.Throwable -> L9e
            goto L84
        L82:
            r9 = r9[r6]     // Catch: java.lang.Throwable -> L9e
        L84:
            java.lang.String r10 = "mmac"
            r5.put(r10, r9)     // Catch: java.lang.Throwable -> L9e
        L89:
            java.lang.String r9 = r5.toString()
            java.lang.String r10 = "UTF-8"
            byte[] r9 = r9.getBytes(r10)
            java.lang.String r10 = r8.l
            byte[] r9 = com.loc.fg.a(r9, r10)
            java.lang.String r9 = com.loc.p.b(r9)     // Catch: java.lang.Throwable -> L9e
            return r9
        L9e:
            return r4
    }

    private void a(android.content.Context r20, java.lang.String r21, boolean r22) throws java.lang.Exception {
            r19 = this;
            r7 = r19
            r0 = r20
            r1 = r21
            java.lang.String r2 = "hist"
            java.lang.String r8 = "UTF-8"
            boolean r3 = com.loc.fq.e()
            if (r3 != 0) goto L11
            return
        L11:
            if (r0 != 0) goto L14
            return
        L14:
            r3 = 0
            java.lang.String r4 = "hmdb"
            r9 = 0
            android.database.sqlite.SQLiteDatabase r6 = r0.openOrCreateDatabase(r4, r9, r3)     // Catch: java.lang.Throwable -> L292
            boolean r4 = com.loc.fz.a(r6, r2)     // Catch: java.lang.Throwable -> L28d
            if (r4 != 0) goto L34
            if (r6 == 0) goto L33
            boolean r0 = r6.isOpen()     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L33
            r6.close()     // Catch: java.lang.Throwable -> L2e
            goto L33
        L2e:
            r0 = move-exception
            r10 = r3
        L30:
            r3 = r6
            goto L294
        L33:
            return
        L34:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28d
            r5.<init>()     // Catch: java.lang.Throwable -> L28d
            java.lang.String r4 = "'"
            java.lang.String r10 = " and feature = '"
            java.lang.String r11 = "time >"
            if (r22 != 0) goto L68
            long r12 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L2e
            long r14 = com.loc.fq.d()     // Catch: java.lang.Throwable -> L2e
            long r12 = r12 - r14
            r5.append(r11)     // Catch: java.lang.Throwable -> L2e
            r5.append(r12)     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L8b
            r5.append(r10)     // Catch: java.lang.Throwable -> L2e
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r10.<init>()     // Catch: java.lang.Throwable -> L2e
            r10.append(r1)     // Catch: java.lang.Throwable -> L2e
            r10.append(r4)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r10.toString()     // Catch: java.lang.Throwable -> L2e
        L64:
            r5.append(r1)     // Catch: java.lang.Throwable -> L2e
            goto L8b
        L68:
            long r12 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L28d
            r14 = 172800000(0xa4cb800, double:8.53745436E-316)
            long r12 = r12 - r14
            r5.append(r11)     // Catch: java.lang.Throwable -> L28d
            r5.append(r12)     // Catch: java.lang.Throwable -> L28d
            if (r1 == 0) goto L8b
            r5.append(r10)     // Catch: java.lang.Throwable -> L2e
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r10.<init>()     // Catch: java.lang.Throwable -> L2e
            r10.append(r1)     // Catch: java.lang.Throwable -> L2e
            r10.append(r4)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r10.toString()     // Catch: java.lang.Throwable -> L2e
            goto L64
        L8b:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L28d
            java.lang.String r2 = r7.k     // Catch: java.lang.Throwable -> L28d
            r1.append(r2)     // Catch: java.lang.Throwable -> L28d
            java.lang.String r11 = r1.toString()     // Catch: java.lang.Throwable -> L28d
            java.lang.String r1 = "feature"
            java.lang.String r2 = " nb"
            java.lang.String r4 = "loc"
            java.lang.String[] r12 = new java.lang.String[]{r1, r2, r4}     // Catch: java.lang.Throwable -> L28d
            java.lang.String r13 = r5.toString()     // Catch: java.lang.Throwable -> L28d
            r14 = 0
            r15 = 0
            r16 = 0
            java.lang.String r17 = "time ASC"
            r18 = 0
            r10 = r6
            android.database.Cursor r10 = r10.query(r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L28d
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28a
            r11.<init>()     // Catch: java.lang.Throwable -> L28a
            java.lang.String r1 = r7.l     // Catch: java.lang.Throwable -> L28a
            if (r1 != 0) goto Lc7
            java.lang.String r1 = com.loc.fz.l(r20)     // Catch: java.lang.Throwable -> Lc4
            r7.l = r1     // Catch: java.lang.Throwable -> Lc4
            goto Lc7
        Lc4:
            r0 = move-exception
            goto L30
        Lc7:
            if (r10 == 0) goto L278
            boolean r1 = r10.moveToFirst()     // Catch: java.lang.Throwable -> L28a
            if (r1 == 0) goto L278
        Lcf:
            java.lang.String r1 = r10.getString(r9)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r2 = "{"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r2 = "new"
            java.lang.String r3 = ",access"
            java.lang.String r12 = "type"
            r13 = 1
            java.lang.String r14 = "mmac"
            java.lang.String r15 = "#"
            if (r1 == 0) goto L12e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r10.getString(r9)     // Catch: java.lang.Throwable -> Lc4
            r1.<init>(r4)     // Catch: java.lang.Throwable -> Lc4
            int r4 = r11.length()     // Catch: java.lang.Throwable -> Lc4
            r11.delete(r9, r4)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r10.getString(r13)     // Catch: java.lang.Throwable -> Lc4
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lc4
            if (r4 != 0) goto L108
            java.lang.String r3 = r10.getString(r13)     // Catch: java.lang.Throwable -> Lc4
        L104:
            r11.append(r3)     // Catch: java.lang.Throwable -> Lc4
            goto L119
        L108:
            boolean r4 = com.loc.fz.a(r1, r14)     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto L119
            r11.append(r15)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r4 = r1.getString(r14)     // Catch: java.lang.Throwable -> Lc4
            r11.append(r4)     // Catch: java.lang.Throwable -> Lc4
            goto L104
        L119:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc4
            r4 = 2
            java.lang.String r4 = r10.getString(r4)     // Catch: java.lang.Throwable -> Lc4
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lc4
            boolean r4 = com.loc.fz.a(r3, r12)     // Catch: java.lang.Throwable -> Lc4
            if (r4 == 0) goto L1a4
            r3.put(r12, r2)     // Catch: java.lang.Throwable -> Lc4
            goto L1a4
        L12e:
            java.lang.String r1 = r10.getString(r9)     // Catch: java.lang.Throwable -> L28a
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> L28a
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L28a
            java.lang.String r13 = new java.lang.String     // Catch: java.lang.Throwable -> L28a
            java.lang.String r9 = r7.l     // Catch: java.lang.Throwable -> L28a
            byte[] r1 = com.loc.fg.b(r1, r9)     // Catch: java.lang.Throwable -> L28a
            r13.<init>(r1, r8)     // Catch: java.lang.Throwable -> L28a
            r4.<init>(r13)     // Catch: java.lang.Throwable -> L28a
            int r1 = r11.length()     // Catch: java.lang.Throwable -> L28a
            r9 = 0
            r11.delete(r9, r1)     // Catch: java.lang.Throwable -> L28a
            r1 = 1
            java.lang.String r9 = r10.getString(r1)     // Catch: java.lang.Throwable -> L28a
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L28a
            if (r9 != 0) goto L170
            java.lang.String r1 = r10.getString(r1)     // Catch: java.lang.Throwable -> Lc4
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r9 = r7.l     // Catch: java.lang.Throwable -> Lc4
            byte[] r1 = com.loc.fg.b(r1, r9)     // Catch: java.lang.Throwable -> Lc4
            r3.<init>(r1, r8)     // Catch: java.lang.Throwable -> Lc4
        L16c:
            r11.append(r3)     // Catch: java.lang.Throwable -> Lc4
            goto L181
        L170:
            boolean r1 = com.loc.fz.a(r4, r14)     // Catch: java.lang.Throwable -> L28a
            if (r1 == 0) goto L181
            r11.append(r15)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r1 = r4.getString(r14)     // Catch: java.lang.Throwable -> Lc4
            r11.append(r1)     // Catch: java.lang.Throwable -> Lc4
            goto L16c
        L181:
            r1 = 2
            java.lang.String r1 = r10.getString(r1)     // Catch: java.lang.Throwable -> L28a
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> L28a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L28a
            java.lang.String r9 = new java.lang.String     // Catch: java.lang.Throwable -> L28a
            java.lang.String r13 = r7.l     // Catch: java.lang.Throwable -> L28a
            byte[] r1 = com.loc.fg.b(r1, r13)     // Catch: java.lang.Throwable -> L28a
            r9.<init>(r1, r8)     // Catch: java.lang.Throwable -> L28a
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L28a
            boolean r1 = com.loc.fz.a(r3, r12)     // Catch: java.lang.Throwable -> L28a
            if (r1 == 0) goto L1a3
            r3.put(r12, r2)     // Catch: java.lang.Throwable -> Lc4
        L1a3:
            r1 = r4
        L1a4:
            com.loc.ew r4 = new com.loc.ew     // Catch: java.lang.Throwable -> L28a
            java.lang.String r2 = ""
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L28a
            r4.b(r3)     // Catch: java.lang.Throwable -> L28a
            boolean r2 = com.loc.fz.a(r1, r14)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r3 = "network#"
            java.lang.String r9 = "cgi"
            if (r2 == 0) goto L20a
            boolean r2 = com.loc.fz.a(r1, r9)     // Catch: java.lang.Throwable -> Lc4
            if (r2 == 0) goto L20a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r2.<init>()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r12 = r1.getString(r9)     // Catch: java.lang.Throwable -> Lc4
            r2.append(r12)     // Catch: java.lang.Throwable -> Lc4
            r2.append(r15)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lc4
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r12.<init>()     // Catch: java.lang.Throwable -> Lc4
            r12.append(r2)     // Catch: java.lang.Throwable -> Lc4
            r12.append(r3)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = r12.toString()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r1 = r1.getString(r9)     // Catch: java.lang.Throwable -> Lc4
            boolean r1 = r1.contains(r15)     // Catch: java.lang.Throwable -> Lc4
            if (r1 == 0) goto L1fc
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r1.<init>()     // Catch: java.lang.Throwable -> Lc4
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = "cgiwifi"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc4
        L1f7:
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc4
            goto L24b
        L1fc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc4
            r1.<init>()     // Catch: java.lang.Throwable -> Lc4
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r2 = "wifi"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc4
            goto L1f7
        L20a:
            boolean r2 = com.loc.fz.a(r1, r9)     // Catch: java.lang.Throwable -> L28a
            if (r2 == 0) goto L259
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28a
            r2.<init>()     // Catch: java.lang.Throwable -> L28a
            java.lang.String r12 = r1.getString(r9)     // Catch: java.lang.Throwable -> L28a
            r2.append(r12)     // Catch: java.lang.Throwable -> L28a
            r2.append(r15)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L28a
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28a
            r12.<init>()     // Catch: java.lang.Throwable -> L28a
            r12.append(r2)     // Catch: java.lang.Throwable -> L28a
            r12.append(r3)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r2 = r12.toString()     // Catch: java.lang.Throwable -> L28a
            java.lang.String r1 = r1.getString(r9)     // Catch: java.lang.Throwable -> L28a
            boolean r1 = r1.contains(r15)     // Catch: java.lang.Throwable -> L28a
            if (r1 == 0) goto L259
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L28a
            r1.<init>()     // Catch: java.lang.Throwable -> L28a
            r1.append(r2)     // Catch: java.lang.Throwable -> L28a
            r1.append(r9)     // Catch: java.lang.Throwable -> L28a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L28a
        L24b:
            r2 = r1
            r9 = 0
            r1 = r19
            r3 = r11
            r12 = r5
            r5 = r20
            r13 = r6
            r6 = r9
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L276
            goto L25b
        L259:
            r12 = r5
            r13 = r6
        L25b:
            boolean r1 = r10.moveToNext()     // Catch: java.lang.Throwable -> L276
            if (r1 != 0) goto L271
            int r0 = r11.length()     // Catch: java.lang.Throwable -> L276
            r1 = 0
            r11.delete(r1, r0)     // Catch: java.lang.Throwable -> L276
            int r0 = r12.length()     // Catch: java.lang.Throwable -> L276
            r12.delete(r1, r0)     // Catch: java.lang.Throwable -> L276
            goto L279
        L271:
            r5 = r12
            r6 = r13
            r9 = 0
            goto Lcf
        L276:
            r0 = move-exception
            goto L290
        L278:
            r13 = r6
        L279:
            if (r10 == 0) goto L27e
            r10.close()
        L27e:
            if (r13 == 0) goto L289
            boolean r0 = r13.isOpen()
            if (r0 == 0) goto L289
            r13.close()
        L289:
            return
        L28a:
            r0 = move-exception
            r13 = r6
            goto L290
        L28d:
            r0 = move-exception
            r13 = r6
            r10 = r3
        L290:
            r3 = r13
            goto L294
        L292:
            r0 = move-exception
            r10 = r3
        L294:
            java.lang.String r1 = "DB"
            java.lang.String r2 = "fetchHist p2"
            com.loc.fr.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L2ac
            if (r10 == 0) goto L2a0
            r10.close()
        L2a0:
            if (r3 == 0) goto L2ab
            boolean r0 = r3.isOpen()
            if (r0 == 0) goto L2ab
            r3.close()
        L2ab:
            return
        L2ac:
            r0 = move-exception
            if (r10 == 0) goto L2b2
            r10.close()
        L2b2:
            if (r3 == 0) goto L2bd
            boolean r1 = r3.isOpen()
            if (r1 == 0) goto L2bd
            r3.close()
        L2bd:
            throw r0
    }

    private void a(java.lang.String r6, com.amap.api.location.AMapLocation r7, java.lang.StringBuilder r8, android.content.Context r9) throws java.lang.Exception {
            r5 = this;
            java.lang.String r0 = "UTF-8"
            if (r9 != 0) goto L5
            return
        L5:
            java.lang.String r1 = r5.l
            if (r1 != 0) goto Lf
            java.lang.String r1 = com.loc.fz.l(r9)
            r5.l = r1
        Lf:
            java.lang.String r6 = r5.a(r6, r8, r9)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
            r3 = 0
            java.lang.String r4 = "hmdb"
            android.database.sqlite.SQLiteDatabase r2 = r9.openOrCreateDatabase(r4, r3, r2)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = "CREATE TABLE IF NOT EXISTS hist"
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = r5.k     // Catch: java.lang.Throwable -> Lb3
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = " (feature VARCHAR PRIMARY KEY, nb VARCHAR, loc VARCHAR, time VARCHAR);"
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> Lb3
            r2.execSQL(r9)     // Catch: java.lang.Throwable -> Lb3
            int r9 = r1.length()     // Catch: java.lang.Throwable -> Lb3
            r1.delete(r3, r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = "REPLACE INTO "
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = "hist"
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = r5.k     // Catch: java.lang.Throwable -> Lb3
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r9 = " VALUES (?, ?, ?, ?)"
            r1.append(r9)     // Catch: java.lang.Throwable -> Lb3
            r9 = 4
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> Lb3
            r9[r3] = r6     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> Lb3
            byte[] r6 = r6.getBytes(r0)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r8 = r5.l     // Catch: java.lang.Throwable -> Lb3
            byte[] r6 = com.loc.fg.a(r6, r8)     // Catch: java.lang.Throwable -> Lb3
            r8 = 1
            r9[r8] = r6     // Catch: java.lang.Throwable -> Lb3
            r6 = 2
            java.lang.String r4 = r7.toStr()     // Catch: java.lang.Throwable -> Lb3
            byte[] r0 = r4.getBytes(r0)     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r4 = r5.l     // Catch: java.lang.Throwable -> Lb3
            byte[] r0 = com.loc.fg.a(r0, r4)     // Catch: java.lang.Throwable -> Lb3
            r9[r6] = r0     // Catch: java.lang.Throwable -> Lb3
            long r6 = r7.getTime()     // Catch: java.lang.Throwable -> Lb3
            java.lang.Long r6 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> Lb3
            r7 = 3
            r9[r7] = r6     // Catch: java.lang.Throwable -> Lb3
        L83:
            if (r8 >= r7) goto L92
            r6 = r9[r8]     // Catch: java.lang.Throwable -> Lb3
            byte[] r6 = (byte[]) r6     // Catch: java.lang.Throwable -> Lb3
            java.lang.String r6 = com.loc.p.b(r6)     // Catch: java.lang.Throwable -> Lb3
            r9[r8] = r6     // Catch: java.lang.Throwable -> Lb3
            int r8 = r8 + 1
            goto L83
        L92:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> Lb3
            r2.execSQL(r6, r9)     // Catch: java.lang.Throwable -> Lb3
            int r6 = r1.length()     // Catch: java.lang.Throwable -> Lb3
            r1.delete(r3, r6)     // Catch: java.lang.Throwable -> Lb3
            int r6 = r1.length()
            r1.delete(r3, r6)
            if (r2 == 0) goto Lb2
            boolean r6 = r2.isOpen()
            if (r6 == 0) goto Lb2
            r2.close()
        Lb2:
            return
        Lb3:
            r6 = move-exception
            java.lang.String r7 = "DB"
            java.lang.String r8 = "updateHist"
            com.loc.fr.a(r6, r7, r8)     // Catch: java.lang.Throwable -> Lce
            int r6 = r1.length()
            r1.delete(r3, r6)
            if (r2 == 0) goto Lcd
            boolean r6 = r2.isOpen()
            if (r6 == 0) goto Lcd
            r2.close()
        Lcd:
            return
        Lce:
            r6 = move-exception
            int r7 = r1.length()
            r1.delete(r3, r7)
            if (r2 == 0) goto Le1
            boolean r7 = r2.isOpen()
            if (r7 == 0) goto Le1
            r2.close()
        Le1:
            throw r6
    }

    private static void a(java.lang.String r4, java.util.Hashtable<java.lang.String, java.lang.String> r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L7
            return
        L7:
            r5.clear()
            java.lang.String r0 = "#"
            java.lang.String[] r4 = r4.split(r0)
            int r0 = r4.length
            r1 = 0
        L12:
            if (r1 >= r0) goto L2c
            r2 = r4[r1]
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L29
            java.lang.String r3 = "|"
            boolean r3 = r2.contains(r3)
            if (r3 != 0) goto L29
            java.lang.String r3 = ""
            r5.put(r2, r3)
        L29:
            int r1 = r1 + 1
            goto L12
        L2c:
            return
    }

    private boolean a(com.loc.ew r5, boolean r6) {
            r4 = this;
            boolean r0 = r4.a(r6)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            if (r5 == 0) goto L17
            long r2 = r5.getTime()
            boolean r5 = com.loc.fq.a(r2)
            if (r5 != 0) goto L17
            if (r6 != 0) goto L17
            return r1
        L17:
            r5 = 1
            return r5
    }

    private static boolean a(java.lang.String r2, com.loc.ew r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 != 0) goto L1e
            boolean r3 = com.loc.fz.a(r3)
            if (r3 != 0) goto Le
            goto L1e
        Le:
            java.lang.String r3 = "#"
            boolean r3 = r2.startsWith(r3)
            if (r3 == 0) goto L17
            return r1
        L17:
            java.lang.String r3 = "network"
            boolean r2 = r2.contains(r3)
            return r2
        L1e:
            return r1
    }

    private static boolean a(java.lang.String r4, java.lang.StringBuilder r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L5c
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Le
            goto L5c
        Le:
            java.lang.String r0 = ",access"
            boolean r2 = r4.contains(r0)
            if (r2 == 0) goto L5c
            int r2 = r5.indexOf(r0)
            r3 = -1
            if (r2 != r3) goto L1e
            goto L5c
        L1e:
            java.lang.String[] r4 = r4.split(r0)
            r2 = r4[r1]
            java.lang.String r3 = "#"
            boolean r2 = r2.contains(r3)
            if (r2 == 0) goto L3b
            r2 = r4[r1]
            r4 = r4[r1]
            int r4 = r4.lastIndexOf(r3)
            int r4 = r4 + 1
            java.lang.String r4 = r2.substring(r4)
            goto L3d
        L3b:
            r4 = r4[r1]
        L3d:
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L44
            return r1
        L44:
            java.lang.String r5 = r5.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            boolean r4 = r5.contains(r4)
            return r4
        L5c:
            return r1
    }

    private boolean a(boolean r3) {
            r2 = this;
            boolean r0 = com.loc.fq.e()
            r1 = 0
            if (r0 != 0) goto La
            if (r3 != 0) goto La
            return r1
        La:
            boolean r0 = r2.b
            if (r0 != 0) goto L18
            boolean r0 = com.loc.fq.f()
            if (r0 != 0) goto L18
            if (r3 == 0) goto L17
            goto L18
        L17:
            return r1
        L18:
            r3 = 1
            return r3
    }

    private static double[] a(double[] r19, double[] r20) {
            r0 = r19
            r1 = 3
            double[] r1 = new double[r1]
            r2 = 0
            r4 = 0
            r5 = r2
            r7 = r5
            r9 = 0
            r10 = 0
            r11 = 0
        Ld:
            int r12 = r0.length
            r13 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            if (r9 >= r12) goto L3a
            r15 = r0[r9]
            r17 = r0[r9]
            double r15 = r15 * r17
            double r5 = r5 + r15
            r15 = r20[r9]
            r17 = r20[r9]
            double r15 = r15 * r17
            double r7 = r7 + r15
            r15 = r0[r9]
            r17 = r20[r9]
            double r15 = r15 * r17
            double r2 = r2 + r15
            r15 = r20[r9]
            int r12 = (r15 > r13 ? 1 : (r15 == r13 ? 0 : -1))
            if (r12 != 0) goto L37
            int r11 = r11 + 1
            r15 = r0[r9]
            int r12 = (r15 > r13 ? 1 : (r15 == r13 ? 0 : -1))
            if (r12 != 0) goto L37
            int r10 = r10 + 1
        L37:
            int r9 = r9 + 1
            goto Ld
        L3a:
            double r5 = java.lang.Math.sqrt(r5)
            double r7 = java.lang.Math.sqrt(r7)
            double r5 = r5 * r7
            double r2 = r2 / r5
            r1[r4] = r2
            double r2 = (double) r10
            double r5 = r2 * r13
            double r7 = (double) r11
            double r5 = r5 / r7
            r0 = 1
            r1[r0] = r5
            r0 = 2
            r1[r0] = r2
        L52:
            if (r4 >= r0) goto L5f
            r2 = r1[r4]
            int r5 = (r2 > r13 ? 1 : (r2 == r13 ? 0 : -1))
            if (r5 <= 0) goto L5c
            r1[r4] = r13
        L5c:
            int r4 = r4 + 1
            goto L52
        L5f:
            return r1
    }

    private boolean b() {
            r8 = this;
            long r0 = com.loc.fz.b()
            long r2 = r8.i
            long r0 = r0 - r2
            r4 = 0
            r5 = 0
            int r7 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r7 != 0) goto Lf
            goto L21
        Lf:
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r2 = r8.a
            int r2 = r2.size()
            r3 = 360(0x168, float:5.04E-43)
            if (r2 > r3) goto L20
            r2 = 172800000(0xa4cb800, double:8.53745436E-316)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 <= 0) goto L21
        L20:
            r4 = 1
        L21:
            return r4
    }

    private void c() {
            r2 = this;
            r0 = 0
            r2.i = r0
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r0 = r2.a
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L11
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r0 = r2.a
            r0.clear()
        L11:
            r0 = 0
            r2.j = r0
            return
    }

    private void c(android.content.Context r10) throws java.lang.Exception {
            r9 = this;
            java.lang.String r0 = "hist"
            java.lang.String r1 = "DB"
            if (r10 != 0) goto L7
            return
        L7:
            r2 = 0
            java.lang.String r3 = "hmdb"
            r4 = 0
            android.database.sqlite.SQLiteDatabase r2 = r10.openOrCreateDatabase(r3, r4, r2)     // Catch: java.lang.Throwable -> L67
            boolean r10 = com.loc.fz.a(r2, r0)     // Catch: java.lang.Throwable -> L67
            if (r10 != 0) goto L21
            if (r2 == 0) goto L20
            boolean r10 = r2.isOpen()     // Catch: java.lang.Throwable -> L67
            if (r10 == 0) goto L20
            r2.close()     // Catch: java.lang.Throwable -> L67
        L20:
            return
        L21:
            java.lang.String r10 = "time<?"
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Throwable -> L67
            long r5 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L67
            r7 = 172800000(0xa4cb800, double:8.53745436E-316)
            long r5 = r5 - r7
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L67
            r3[r4] = r5     // Catch: java.lang.Throwable -> L67
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r9.k     // Catch: java.lang.Throwable -> L46
            r4.append(r0)     // Catch: java.lang.Throwable -> L46
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L46
            r2.delete(r0, r10, r3)     // Catch: java.lang.Throwable -> L46
            goto L5b
        L46:
            r10 = move-exception
            java.lang.String r0 = "clearHist"
            com.loc.fr.a(r10, r1, r0)     // Catch: java.lang.Throwable -> L67
            java.lang.String r10 = r10.getMessage()     // Catch: java.lang.Throwable -> L67
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L67
            if (r0 != 0) goto L5b
            java.lang.String r0 = "no such table"
            r10.contains(r0)     // Catch: java.lang.Throwable -> L67
        L5b:
            if (r2 == 0) goto L66
            boolean r10 = r2.isOpen()
            if (r10 == 0) goto L66
            r2.close()
        L66:
            return
        L67:
            r10 = move-exception
            java.lang.String r0 = "clearHist p2"
            com.loc.fr.a(r10, r1, r0)     // Catch: java.lang.Throwable -> L79
            if (r2 == 0) goto L78
            boolean r10 = r2.isOpen()
            if (r10 == 0) goto L78
            r2.close()
        L78:
            return
        L79:
            r10 = move-exception
            if (r2 == 0) goto L85
            boolean r0 = r2.isOpen()
            if (r0 == 0) goto L85
            r2.close()
        L85:
            throw r10
    }

    public final com.loc.ew a(android.content.Context r4, java.lang.String r5, java.lang.StringBuilder r6, boolean r7, boolean r8) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = com.loc.fq.e()
            if (r0 != 0) goto Lf
            return r1
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r5 = "&"
            r0.append(r5)
            boolean r2 = r3.f
            r0.append(r2)
            r0.append(r5)
            boolean r2 = r3.g
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = r3.h
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "gps"
            boolean r0 = r5.contains(r0)
            if (r0 != 0) goto L70
            boolean r0 = com.loc.fq.e()
            if (r0 == 0) goto L70
            if (r6 != 0) goto L46
            goto L70
        L46:
            boolean r0 = r3.b()
            if (r0 == 0) goto L50
            r3.c()
            return r1
        L50:
            if (r7 == 0) goto L62
            boolean r7 = r3.j
            if (r7 != 0) goto L62
            java.lang.String r7 = r3.a(r5, r6, r4)     // Catch: java.lang.Throwable -> L61
            r3.c()     // Catch: java.lang.Throwable -> L61
            r3.a(r4, r7, r8)     // Catch: java.lang.Throwable -> L61
            goto L62
        L61:
        L62:
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r4 = r3.a
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L6b
            return r1
        L6b:
            com.loc.ew r4 = r3.a(r5, r6, r8)
            return r4
        L70:
            return r1
    }

    public final com.loc.ew a(com.loc.fb r16, boolean r17, com.loc.ew r18, com.loc.ff r19, java.lang.StringBuilder r20, java.lang.String r21, android.content.Context r22, boolean r23) {
            r15 = this;
            r6 = r15
            r0 = r18
            r1 = r21
            r2 = r23
            boolean r2 = r15.a(r0, r2)
            r7 = 0
            if (r2 != 0) goto Lf
            return r7
        Lf:
            com.loc.fa r2 = r16.e()     // Catch: java.lang.Throwable -> Lf2
            if (r2 != 0) goto L19
            com.loc.fa r3 = r6.e     // Catch: java.lang.Throwable -> Lf2
            if (r3 == 0) goto L26
        L19:
            com.loc.fa r3 = r6.e     // Catch: java.lang.Throwable -> Lf2
            if (r3 == 0) goto L28
            com.loc.fa r3 = r6.e     // Catch: java.lang.Throwable -> Lf2
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> Lf2
            if (r2 != 0) goto L26
            goto L28
        L26:
            r2 = 0
            goto L29
        L28:
            r2 = 1
        L29:
            if (r0 == 0) goto L46
            java.util.ArrayList r3 = r19.e()     // Catch: java.lang.Throwable -> Lf2
            int r3 = r3.size()     // Catch: java.lang.Throwable -> Lf2
            float r4 = r18.getAccuracy()     // Catch: java.lang.Throwable -> Lf2
            r5 = 1133871104(0x43958000, float:299.0)
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 <= 0) goto L43
            r4 = 5
            if (r3 <= r4) goto L43
            r3 = 1
            goto L44
        L43:
            r3 = 0
        L44:
            r10 = r3
            goto L47
        L46:
            r10 = 0
        L47:
            r3 = 3000(0xbb8, double:1.482E-320)
            r11 = 0
            if (r0 == 0) goto L87
            java.lang.String r5 = r6.d     // Catch: java.lang.Throwable -> Lf2
            if (r5 == 0) goto L87
            if (r10 != 0) goto L87
            if (r2 != 0) goto L87
            java.lang.String r2 = r6.d     // Catch: java.lang.Throwable -> Lf2
            java.lang.String r5 = r20.toString()     // Catch: java.lang.Throwable -> Lf2
            boolean r2 = com.loc.fz.a(r2, r5)     // Catch: java.lang.Throwable -> Lf2
            long r13 = r6.c     // Catch: java.lang.Throwable -> Lf2
            int r5 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r5 == 0) goto L72
            long r13 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lf2
            long r8 = r6.c     // Catch: java.lang.Throwable -> Lf2
            long r13 = r13 - r8
            int r5 = (r13 > r3 ? 1 : (r13 == r3 ? 0 : -1))
            if (r5 >= 0) goto L72
            r5 = 1
            goto L73
        L72:
            r5 = 0
        L73:
            if (r2 != 0) goto L77
            if (r5 == 0) goto L88
        L77:
            boolean r5 = com.loc.fz.a(r18)     // Catch: java.lang.Throwable -> Lf2
            if (r5 == 0) goto L88
            java.lang.String r1 = "mem"
            r0.e(r1)     // Catch: java.lang.Throwable -> Lf2
            r1 = 2
            r0.setLocationType(r1)     // Catch: java.lang.Throwable -> Lf2
            return r0
        L87:
            r2 = 0
        L88:
            if (r2 != 0) goto L91
            long r8 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lf2
            r6.c = r8     // Catch: java.lang.Throwable -> Lf2
            goto L93
        L91:
            r6.c = r11     // Catch: java.lang.Throwable -> Lf2
        L93:
            java.lang.String r0 = r6.m     // Catch: java.lang.Throwable -> Lf2
            if (r0 == 0) goto Lb7
            java.lang.String r0 = r6.m     // Catch: java.lang.Throwable -> Lf2
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Throwable -> Lf2
            if (r0 != 0) goto Lb7
            long r8 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf2
            long r13 = r6.n     // Catch: java.lang.Throwable -> Lf2
            long r8 = r8 - r13
            int r0 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r0 >= 0) goto Lae
            java.lang.String r0 = r6.m     // Catch: java.lang.Throwable -> Lf2
            r2 = r0
            goto Lc7
        Lae:
            long r2 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf2
        Lb2:
            r6.n = r2     // Catch: java.lang.Throwable -> Lf2
            r6.m = r1     // Catch: java.lang.Throwable -> Lf2
            goto Lc6
        Lb7:
            java.lang.String r0 = r6.m     // Catch: java.lang.Throwable -> Lf2
            if (r0 != 0) goto Lc0
            long r2 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf2
            goto Lb2
        Lc0:
            long r2 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf2
            r6.n = r2     // Catch: java.lang.Throwable -> Lf2
        Lc6:
            r2 = r1
        Lc7:
            if (r10 != 0) goto Ld7
            if (r17 != 0) goto Ld7
            r4 = 0
            r5 = 0
            r0 = r15
            r1 = r22
            r3 = r20
            com.loc.ew r0 = r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lf2
            goto Ld8
        Ld7:
            r0 = r7
        Ld8:
            if (r17 != 0) goto Le2
            boolean r1 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lf2
            if (r1 != 0) goto Le2
            r8 = 1
            goto Le3
        Le2:
            r8 = 0
        Le3:
            if (r8 != 0) goto Lf2
            if (r10 == 0) goto Le8
            goto Lf2
        Le8:
            if (r17 == 0) goto Leb
            return r7
        Leb:
            r6.c = r11     // Catch: java.lang.Throwable -> Lf2
            r1 = 4
            r0.setLocationType(r1)     // Catch: java.lang.Throwable -> Lf2
            return r0
        Lf2:
            return r7
    }

    public final void a() {
            r2 = this;
            r0 = 0
            r2.c = r0
            r0 = 0
            r2.d = r0
            return
    }

    public final void a(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.j
            if (r0 == 0) goto L5
            return
        L5:
            r2.c()     // Catch: java.lang.Throwable -> Le
            r0 = 0
            r1 = 0
            r2.a(r3, r0, r1)     // Catch: java.lang.Throwable -> Le
            goto L16
        Le:
            r3 = move-exception
            java.lang.String r0 = "Cache"
            java.lang.String r1 = "loadDB"
            com.loc.fr.a(r3, r0, r1)
        L16:
            r3 = 1
            r2.j = r3
            return
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r2) {
            r1 = this;
            boolean r0 = r2.isNeedAddress()
            r1.g = r0
            boolean r0 = r2.isOffset()
            r1.f = r0
            boolean r0 = r2.isLocationCacheEnable()
            r1.b = r0
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r2.getGeoLanguage()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            r1.h = r2
            return
    }

    public final void a(com.loc.fa r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(java.lang.String r16, java.lang.StringBuilder r17, com.loc.ew r18, android.content.Context r19, boolean r20) {
            r15 = this;
            r7 = r15
            r0 = r17
            r8 = r18
            java.lang.String r1 = "cgiwifi"
            java.lang.String r2 = "offpct"
            java.lang.String r9 = "add"
            java.lang.String r10 = "Cache"
            java.lang.String r3 = "&"
            boolean r4 = com.loc.fz.a(r18)     // Catch: java.lang.Throwable -> L18d
            if (r4 != 0) goto L16
            return
        L16:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18d
            r4.<init>()     // Catch: java.lang.Throwable -> L18d
            r5 = r16
            r4.append(r5)     // Catch: java.lang.Throwable -> L18d
            r4.append(r3)     // Catch: java.lang.Throwable -> L18d
            boolean r5 = r18.isOffset()     // Catch: java.lang.Throwable -> L18d
            r4.append(r5)     // Catch: java.lang.Throwable -> L18d
            r4.append(r3)     // Catch: java.lang.Throwable -> L18d
            boolean r5 = r18.i()     // Catch: java.lang.Throwable -> L18d
            r4.append(r5)     // Catch: java.lang.Throwable -> L18d
            r4.append(r3)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r3 = r18.j()     // Catch: java.lang.Throwable -> L18d
            r4.append(r3)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r11 = r4.toString()     // Catch: java.lang.Throwable -> L18d
            boolean r3 = a(r11, r8)     // Catch: java.lang.Throwable -> L18d
            if (r3 != 0) goto L49
            return
        L49:
            java.lang.String r3 = r18.e()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r4 = "mem"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L18d
            if (r3 != 0) goto L18c
            java.lang.String r3 = r18.e()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r4 = "file"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L18d
            if (r3 != 0) goto L18c
            java.lang.String r3 = r18.e()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r4 = "wifioff"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L18d
            if (r3 == 0) goto L6f
            goto L18c
        L6f:
            java.lang.String r3 = "-3"
            java.lang.String r4 = r18.d()     // Catch: java.lang.Throwable -> L18d
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L18d
            if (r3 == 0) goto L7c
            return
        L7c:
            boolean r3 = r15.b()     // Catch: java.lang.Throwable -> L18d
            if (r3 == 0) goto L85
            r15.c()     // Catch: java.lang.Throwable -> L18d
        L85:
            org.json.JSONObject r3 = r18.f()     // Catch: java.lang.Throwable -> L18d
            boolean r4 = com.loc.fz.a(r3, r2)     // Catch: java.lang.Throwable -> L18d
            if (r4 == 0) goto L95
            r3.remove(r2)     // Catch: java.lang.Throwable -> L18d
            r8.a(r3)     // Catch: java.lang.Throwable -> L18d
        L95:
            java.lang.String r2 = "wifi"
            boolean r2 = r11.contains(r2)     // Catch: java.lang.Throwable -> L18d
            java.lang.String r3 = ","
            java.lang.String r4 = "cgi"
            r12 = 0
            if (r2 == 0) goto L10a
            boolean r2 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto La9
            return
        La9:
            float r2 = r18.getAccuracy()     // Catch: java.lang.Throwable -> L18d
            r5 = 1133903872(0x43960000, float:300.0)
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 < 0) goto Ld4
            java.lang.String r2 = r17.toString()     // Catch: java.lang.Throwable -> L18d
            java.lang.String r5 = "#"
            java.lang.String[] r2 = r2.split(r5)     // Catch: java.lang.Throwable -> L18d
            int r5 = r2.length     // Catch: java.lang.Throwable -> L18d
            r6 = 0
            r13 = 0
        Lc0:
            if (r6 >= r5) goto Lcf
            r14 = r2[r6]     // Catch: java.lang.Throwable -> L18d
            boolean r14 = r14.contains(r3)     // Catch: java.lang.Throwable -> L18d
            if (r14 == 0) goto Lcc
            int r13 = r13 + 1
        Lcc:
            int r6 = r6 + 1
            goto Lc0
        Lcf:
            r2 = 8
            if (r13 < r2) goto Ldf
            return
        Ld4:
            float r2 = r18.getAccuracy()     // Catch: java.lang.Throwable -> L18d
            r3 = 1077936128(0x40400000, float:3.0)
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 > 0) goto Ldf
            return
        Ldf:
            boolean r2 = r11.contains(r1)     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto L127
            java.lang.String r2 = r18.g()     // Catch: java.lang.Throwable -> L18d
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L18d
            if (r2 != 0) goto L127
            java.lang.String r2 = r11.replace(r1, r4)     // Catch: java.lang.Throwable -> L18d
            com.loc.ew r4 = r18.h()     // Catch: java.lang.Throwable -> L18d
            boolean r1 = com.loc.fz.a(r4)     // Catch: java.lang.Throwable -> L18d
            if (r1 == 0) goto L127
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18d
            r3.<init>()     // Catch: java.lang.Throwable -> L18d
            r6 = 1
            r1 = r15
            r5 = r19
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L18d
            goto L127
        L10a:
            boolean r1 = r11.contains(r4)     // Catch: java.lang.Throwable -> L18d
            if (r1 == 0) goto L127
            if (r0 == 0) goto L11a
            int r1 = r0.indexOf(r3)     // Catch: java.lang.Throwable -> L18d
            r2 = -1
            if (r1 == r2) goto L11a
            return
        L11a:
            java.lang.String r1 = "4"
            java.lang.String r2 = r18.d()     // Catch: java.lang.Throwable -> L18d
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L18d
            if (r1 == 0) goto L127
            return
        L127:
            com.loc.ew r1 = r15.a(r11, r0, r12)     // Catch: java.lang.Throwable -> L18d
            boolean r2 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto L141
            java.lang.String r1 = r1.toStr()     // Catch: java.lang.Throwable -> L18d
            r2 = 3
            java.lang.String r2 = r8.toStr(r2)     // Catch: java.lang.Throwable -> L18d
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> L18d
            if (r1 == 0) goto L141
            return
        L141:
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L18d
            r7.i = r1     // Catch: java.lang.Throwable -> L18d
            com.loc.fh$a r1 = new com.loc.fh$a     // Catch: java.lang.Throwable -> L18d
            r1.<init>()     // Catch: java.lang.Throwable -> L18d
            r1.a(r8)     // Catch: java.lang.Throwable -> L18d
            boolean r2 = android.text.TextUtils.isEmpty(r17)     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto L157
            r2 = 0
            goto L15b
        L157:
            java.lang.String r2 = r17.toString()     // Catch: java.lang.Throwable -> L18d
        L15b:
            r1.a(r2)     // Catch: java.lang.Throwable -> L18d
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r2 = r7.a     // Catch: java.lang.Throwable -> L18d
            boolean r2 = r2.containsKey(r11)     // Catch: java.lang.Throwable -> L18d
            if (r2 == 0) goto L172
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r2 = r7.a     // Catch: java.lang.Throwable -> L18d
            java.lang.Object r2 = r2.get(r11)     // Catch: java.lang.Throwable -> L18d
            java.util.ArrayList r2 = (java.util.ArrayList) r2     // Catch: java.lang.Throwable -> L18d
            r2.add(r1)     // Catch: java.lang.Throwable -> L18d
            goto L17f
        L172:
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L18d
            r2.<init>()     // Catch: java.lang.Throwable -> L18d
            r2.add(r1)     // Catch: java.lang.Throwable -> L18d
            java.util.Hashtable<java.lang.String, java.util.ArrayList<com.loc.fh$a>> r1 = r7.a     // Catch: java.lang.Throwable -> L18d
            r1.put(r11, r2)     // Catch: java.lang.Throwable -> L18d
        L17f:
            if (r20 == 0) goto L18c
            r1 = r19
            r15.a(r11, r8, r0, r1)     // Catch: java.lang.Throwable -> L187
            return
        L187:
            r0 = move-exception
            r1 = r0
            com.loc.fr.a(r1, r10, r9)     // Catch: java.lang.Throwable -> L18d
        L18c:
            return
        L18d:
            r0 = move-exception
            com.loc.fr.a(r0, r10, r9)
            return
    }

    public final void b(android.content.Context r3) {
            r2 = this;
            r2.c()     // Catch: java.lang.Throwable -> L11
            r2.c(r3)     // Catch: java.lang.Throwable -> L11
            r3 = 0
            r2.j = r3     // Catch: java.lang.Throwable -> L11
            r3 = 0
            r2.d = r3     // Catch: java.lang.Throwable -> L11
            r0 = 0
            r2.n = r0     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r3 = move-exception
            java.lang.String r0 = "Cache"
            java.lang.String r1 = "destroy part"
            com.loc.fr.a(r3, r0, r1)
            return
    }
}
