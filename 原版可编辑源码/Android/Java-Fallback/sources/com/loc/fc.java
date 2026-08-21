package com.loc;

public final class fc {
    public int a;
    public double b;
    public double c;
    public long d;
    public int e;
    public int f;
    public int g;
    public int h;

    public fc() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r1 = 0
            r3.b = r1
            r3.c = r1
            r1 = 0
            r3.d = r1
            r3.e = r0
            r3.f = r0
            r1 = 63
            r3.g = r1
            r3.h = r0
            return
    }

    public final java.lang.String a() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L37
            r0.<init>()     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "time"
            long r2 = r4.d     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "lon"
            double r2 = r4.c     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "lat"
            double r2 = r4.b     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "radius"
            int r2 = r4.e     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "locationType"
            int r2 = r4.a     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "reType"
            int r2 = r4.g     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "reSubType"
            int r2 = r4.h     // Catch: java.lang.Throwable -> L37
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L37
            goto L38
        L37:
            r0 = 0
        L38:
            if (r0 != 0) goto L3d
            java.lang.String r0 = ""
            return r0
        L3d:
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final void a(org.json.JSONObject r4) {
            r3 = this;
            java.lang.String r0 = "lat"
            double r1 = r3.b     // Catch: java.lang.Throwable -> L47
            double r0 = r4.optDouble(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.b = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "lon"
            double r1 = r3.c     // Catch: java.lang.Throwable -> L47
            double r0 = r4.optDouble(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.c = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "locationType"
            int r1 = r3.a     // Catch: java.lang.Throwable -> L47
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.a = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "reType"
            int r1 = r3.g     // Catch: java.lang.Throwable -> L47
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.g = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "reSubType"
            int r1 = r3.h     // Catch: java.lang.Throwable -> L47
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.h = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "radius"
            int r1 = r3.e     // Catch: java.lang.Throwable -> L47
            int r0 = r4.optInt(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.e = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "time"
            long r1 = r3.d     // Catch: java.lang.Throwable -> L47
            long r0 = r4.optLong(r0, r1)     // Catch: java.lang.Throwable -> L47
            r3.d = r0     // Catch: java.lang.Throwable -> L47
            return
        L47:
            r4 = move-exception
            java.lang.String r0 = "CoreUtil"
            java.lang.String r1 = "transformLocation"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    public final boolean equals(java.lang.Object r8) {
            r7 = this;
            r0 = 1
            if (r7 != r8) goto L4
            return r0
        L4:
            r1 = 0
            if (r8 == 0) goto L4f
            java.lang.Class r2 = r7.getClass()
            java.lang.Class r3 = r8.getClass()
            if (r2 == r3) goto L12
            goto L4f
        L12:
            com.loc.fc r8 = (com.loc.fc) r8
            int r2 = r7.a
            int r3 = r8.a
            if (r2 != r3) goto L4f
            double r2 = r8.b
            double r4 = r7.b
            int r2 = java.lang.Double.compare(r2, r4)
            if (r2 != 0) goto L4f
            double r2 = r8.c
            double r4 = r7.c
            int r2 = java.lang.Double.compare(r2, r4)
            if (r2 != 0) goto L4f
            long r2 = r7.d
            long r4 = r8.d
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 != 0) goto L4f
            int r2 = r7.e
            int r3 = r8.e
            if (r2 != r3) goto L4f
            int r2 = r7.f
            int r3 = r8.f
            if (r2 != r3) goto L4f
            int r2 = r7.g
            int r3 = r8.g
            if (r2 != r3) goto L4f
            int r2 = r7.h
            int r8 = r8.h
            if (r2 != r8) goto L4f
            return r0
        L4f:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            r0 = 8
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r1 = r3.a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            double r1 = r3.b
            java.lang.Double r1 = java.lang.Double.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            double r1 = r3.c
            java.lang.Double r1 = java.lang.Double.valueOf(r1)
            r2 = 2
            r0[r2] = r1
            long r1 = r3.d
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 3
            r0[r2] = r1
            int r1 = r3.e
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 4
            r0[r2] = r1
            int r1 = r3.f
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 5
            r0[r2] = r1
            int r1 = r3.g
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 6
            r0[r2] = r1
            int r1 = r3.h
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 7
            r0[r2] = r1
            int r0 = java.util.Objects.hash(r0)
            return r0
    }
}
