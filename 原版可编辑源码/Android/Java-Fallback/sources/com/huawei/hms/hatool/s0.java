package com.huawei.hms.hatool;

public abstract class s0 {
    public static long a(java.lang.String r2, long r3) {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.text.ParseException -> L1a
            java.util.Locale r1 = java.util.Locale.getDefault()     // Catch: java.text.ParseException -> L1a
            r0.<init>(r2, r1)     // Catch: java.text.ParseException -> L1a
            java.lang.Long r2 = java.lang.Long.valueOf(r3)     // Catch: java.text.ParseException -> L1a
            java.lang.String r2 = r0.format(r2)     // Catch: java.text.ParseException -> L1a
            java.util.Date r2 = r0.parse(r2)     // Catch: java.text.ParseException -> L1a
            long r2 = r2.getTime()     // Catch: java.text.ParseException -> L1a
            goto L23
        L1a:
            java.lang.String r2 = "hmsSdk/stringUtil"
            java.lang.String r3 = "getMillisOfDate(): Time conversion Exception !"
            com.huawei.hms.hatool.y.f(r2, r3)
            r2 = 0
        L23:
            return r2
    }

    public static android.util.Pair<java.lang.String, java.lang.String> a(java.lang.String r5) {
            java.lang.String r0 = "_default_config_tag"
            boolean r0 = r0.equals(r5)
            if (r0 != 0) goto L31
            java.lang.String r0 = "-"
            java.lang.String[] r0 = r5.split(r0)
            int r1 = r0.length
            r2 = 2
            r3 = 0
            r4 = 1
            if (r1 <= r2) goto L27
            int r1 = r0.length
            int r1 = r1 - r4
            r0 = r0[r1]
            int r1 = r0.length()
            int r2 = r5.length()
            int r2 = r2 - r1
            int r2 = r2 - r4
            java.lang.String r5 = r5.substring(r3, r2)
            goto L2b
        L27:
            r5 = r0[r3]
            r0 = r0[r4]
        L2b:
            android.util.Pair r1 = new android.util.Pair
            r1.<init>(r5, r0)
            return r1
        L31:
            android.util.Pair r0 = new android.util.Pair
            java.lang.String r1 = ""
            r0.<init>(r5, r1)
            return r0
    }

    public static java.lang.String a(int r1) {
            if (r1 == 0) goto L17
            r0 = 1
            if (r1 == r0) goto L14
            r0 = 2
            if (r1 == r0) goto L11
            r0 = 3
            if (r1 == r0) goto Le
            java.lang.String r1 = "alltype"
            return r1
        Le:
            java.lang.String r1 = "diffprivacy"
            return r1
        L11:
            java.lang.String r1 = "preins"
            return r1
        L14:
            java.lang.String r1 = "maint"
            return r1
        L17:
            java.lang.String r1 = "oper"
            return r1
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "_default_config_tag"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L9
            goto L1d
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
        L1d:
            return r1
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "_default_config_tag"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "_default_config_tag#"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            goto L36
        L1a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = "#"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = r0.toString()
        L36:
            return r1
    }

    public static java.util.Set<java.lang.String> a(java.util.Set<java.lang.String> r6) {
            if (r6 == 0) goto L73
            int r0 = r6.size()
            if (r0 != 0) goto L9
            goto L73
        L9:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r6 = r6.iterator()
        L12:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L72
            java.lang.Object r1 = r6.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "_default_config_tag"
            boolean r3 = r2.equals(r1)
            if (r3 != 0) goto L6e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r3 = "-"
            r2.append(r3)
            java.lang.String r4 = "oper"
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r3)
            java.lang.String r5 = "maint"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r1)
            r5.append(r3)
            java.lang.String r1 = "diffprivacy"
            r5.append(r1)
            java.lang.String r1 = r5.toString()
            r0.add(r2)
            r0.add(r4)
            r0.add(r1)
            goto L12
        L6e:
            r0.add(r2)
            goto L12
        L72:
            return r0
        L73:
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            return r6
    }
}
