package com.kwad.sdk.ranger.a;

public class a extends com.kwad.sdk.core.response.a.a {
    public static final java.lang.String TAG = null;
    public java.lang.Object aHa;
    public java.lang.String aHb;
    public java.lang.String aHc;
    public boolean aHd;
    public java.lang.String aHe;
    public com.kwad.sdk.ranger.a.a.b aHf;
    public com.kwad.sdk.ranger.a.a aHg;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String aHh;
        public java.lang.String aHi;
        public java.lang.String aHj;
        public java.util.List<java.lang.String> aHk;
        public java.util.List<com.kwad.sdk.ranger.a.a.a> aHl;
        public java.lang.Object aHm;
        public java.util.List<java.lang.Object> aHn;
        public java.lang.String className;
        public java.lang.String fieldName;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.aHl = r0
                return
        }

        private java.lang.Object Hv() {
                r6 = this;
                r0 = 0
                java.lang.String r1 = r6.className     // Catch: java.lang.Exception -> L80
                boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L80
                if (r1 == 0) goto L11
                java.lang.String r1 = com.kwad.sdk.ranger.a.a.TAG     // Catch: java.lang.Exception -> L80
                java.lang.String r2 = "SpecialParam className is null"
                com.kwad.sdk.core.e.c.w(r1, r2)     // Catch: java.lang.Exception -> L80
                return r0
            L11:
                java.lang.String r1 = r6.className     // Catch: java.lang.Exception -> L80
                java.lang.Object r0 = com.kwad.sdk.utils.s.fv(r1)     // Catch: java.lang.Exception -> L80
                java.lang.String r1 = com.kwad.sdk.ranger.a.a.TAG     // Catch: java.lang.Exception -> L80
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L80
                java.lang.String r3 = "Class.forName(className):"
                r2.<init>(r3)     // Catch: java.lang.Exception -> L80
                java.lang.String r3 = r6.className     // Catch: java.lang.Exception -> L80
                r2.append(r3)     // Catch: java.lang.Exception -> L80
                java.lang.String r3 = " value:"
                r2.append(r3)     // Catch: java.lang.Exception -> L80
                r2.append(r0)     // Catch: java.lang.Exception -> L80
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L80
                com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Exception -> L80
                java.util.List<com.kwad.sdk.ranger.a.a$a> r1 = r6.aHl     // Catch: java.lang.Exception -> L80
                if (r1 == 0) goto L8a
                java.util.List<com.kwad.sdk.ranger.a.a$a> r1 = r6.aHl     // Catch: java.lang.Exception -> L80
                boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L80
                if (r1 != 0) goto L8a
                java.util.List<com.kwad.sdk.ranger.a.a$a> r1 = r6.aHl     // Catch: java.lang.Exception -> L80
                java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L80
            L46:
                boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L80
                if (r2 == 0) goto L8a
                java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L80
                com.kwad.sdk.ranger.a.a$a r2 = (com.kwad.sdk.ranger.a.a.a) r2     // Catch: java.lang.Exception -> L80
                r2.aHm = r0     // Catch: java.lang.Exception -> L80
                java.lang.String r3 = com.kwad.sdk.ranger.a.a.TAG     // Catch: java.lang.Exception -> L80
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L80
                java.lang.String r5 = "param.ob:"
                r4.<init>(r5)     // Catch: java.lang.Exception -> L80
                java.lang.Object r5 = r2.aHm     // Catch: java.lang.Exception -> L80
                r4.append(r5)     // Catch: java.lang.Exception -> L80
                java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L80
                com.kwad.sdk.core.e.c.d(r3, r4)     // Catch: java.lang.Exception -> L80
                java.lang.Object r3 = r2.getValue()     // Catch: java.lang.Exception -> L75
                java.lang.Object r4 = r2.aHm     // Catch: java.lang.Exception -> L75
                java.lang.String r2 = r2.fieldName     // Catch: java.lang.Exception -> L75
                com.kwad.sdk.utils.s.a(r4, r2, r3)     // Catch: java.lang.Exception -> L75
                goto L46
            L75:
                r2 = move-exception
                java.lang.String r3 = com.kwad.sdk.ranger.a.a.TAG     // Catch: java.lang.Exception -> L80
                java.lang.String r2 = android.util.Log.getStackTraceString(r2)     // Catch: java.lang.Exception -> L80
                com.kwad.sdk.core.e.c.d(r3, r2)     // Catch: java.lang.Exception -> L80
                goto L46
            L80:
                r1 = move-exception
                java.lang.String r2 = com.kwad.sdk.ranger.a.a.TAG
                java.lang.String r1 = android.util.Log.getStackTraceString(r1)
                com.kwad.sdk.core.e.c.d(r2, r1)
            L8a:
                java.lang.String r1 = com.kwad.sdk.ranger.a.a.TAG
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "return value in special:"
                r2.<init>(r3)
                r2.append(r0)
                java.lang.String r2 = r2.toString()
                com.kwad.sdk.core.e.c.d(r1, r2)
                return r0
        }

        private java.lang.Object Hw() {
                r3 = this;
                java.lang.String r0 = r3.aHj
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L11
                java.lang.String r0 = r3.aHh
                java.lang.String r1 = r3.aHi
                java.lang.Object r0 = al(r0, r1)
                return r0
            L11:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r3.aHn = r0
                java.util.List<java.lang.String> r0 = r3.aHk
                java.util.Iterator r0 = r0.iterator()
            L1e:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L38
                java.lang.Object r1 = r0.next()
                java.lang.String r1 = (java.lang.String) r1
                java.lang.String r2 = r3.aHj
                java.lang.Object r1 = al(r2, r1)
                if (r1 == 0) goto L1e
                java.util.List<java.lang.Object> r2 = r3.aHn
                r2.add(r1)
                goto L1e
            L38:
                java.util.List<java.lang.Object> r0 = r3.aHn
                return r0
        }

        private static java.lang.Object al(java.lang.String r2, java.lang.String r3) {
                r0 = 0
                java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L4e
                java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
                if (r2 != r1) goto L12
                int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.Integer r0 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L4e
                goto L58
            L12:
                java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
                if (r2 != r1) goto L1f
                long r2 = java.lang.Long.parseLong(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.Long r0 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L4e
                goto L58
            L1f:
                java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
                if (r2 != r1) goto L2c
                float r2 = java.lang.Float.parseFloat(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.Float r0 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Exception -> L4e
                goto L58
            L2c:
                java.lang.Class<java.lang.Boolean> r1 = java.lang.Boolean.class
                if (r2 != r1) goto L39
                boolean r2 = java.lang.Boolean.parseBoolean(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Exception -> L4e
                goto L58
            L39:
                java.lang.Class<java.lang.Double> r1 = java.lang.Double.class
                if (r2 != r1) goto L46
                double r2 = java.lang.Double.parseDouble(r3)     // Catch: java.lang.Exception -> L4e
                java.lang.Double r0 = java.lang.Double.valueOf(r2)     // Catch: java.lang.Exception -> L4e
                goto L58
            L46:
                java.lang.Class<java.lang.String> r1 = java.lang.String.class
                if (r2 != r1) goto L4b
                goto L4c
            L4b:
                r3 = r0
            L4c:
                r0 = r3
                goto L58
            L4e:
                r2 = move-exception
                java.lang.String r3 = com.kwad.sdk.ranger.a.a.TAG
                java.lang.String r2 = android.util.Log.getStackTraceString(r2)
                com.kwad.sdk.core.e.c.w(r3, r2)
            L58:
                return r0
        }

        public final java.lang.Object getValue() {
                r1 = this;
                java.lang.String r0 = r1.aHh
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L16
                java.lang.String r0 = r1.aHj
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L11
                goto L16
            L11:
                java.lang.Object r0 = r1.Hv()
                goto L1a
            L16:
                java.lang.Object r0 = r1.Hw()
            L1a:
                return r0
        }
    }

    public static class b extends com.kwad.sdk.core.response.a.a {
        public boolean aHo;
        public java.util.List<com.kwad.sdk.ranger.a.a.a> aHp;
        public java.lang.Object[] aHq;
        public java.lang.String name;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final boolean Hu() {
                r1 = this;
                java.lang.String r0 = r1.name
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L12
                java.util.List<com.kwad.sdk.ranger.a.a$a> r0 = r1.aHp
                if (r0 != 0) goto L12
                java.lang.Object[] r0 = r1.aHq
                if (r0 != 0) goto L12
                r0 = 1
                return r0
            L12:
                r0 = 0
                return r0
        }

        public final java.lang.Object[] Hx() {
                r3 = this;
                java.util.List<com.kwad.sdk.ranger.a.a$a> r0 = r3.aHp
                if (r0 == 0) goto L2e
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto Lb
                goto L2e
            Lb:
                java.util.List<com.kwad.sdk.ranger.a.a$a> r0 = r3.aHp
                int r0 = r0.size()
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
            L14:
                java.util.List<com.kwad.sdk.ranger.a.a$a> r2 = r3.aHp
                int r2 = r2.size()
                if (r1 >= r2) goto L2d
                java.util.List<com.kwad.sdk.ranger.a.a$a> r2 = r3.aHp
                java.lang.Object r2 = r2.get(r1)
                com.kwad.sdk.ranger.a.a$a r2 = (com.kwad.sdk.ranger.a.a.a) r2
                java.lang.Object r2 = r2.getValue()
                r0[r1] = r2
                int r1 = r1 + 1
                goto L14
            L2d:
                return r0
            L2e:
                r0 = 0
                return r0
        }
    }

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Ranger_"
            r0.<init>(r1)
            java.lang.Class<com.kwad.sdk.ranger.a.a> r1 = com.kwad.sdk.ranger.a.a.class
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.ranger.a.a.TAG = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public final boolean Hu() {
            r1 = this;
            java.lang.Object r0 = r1.aHa
            if (r0 != 0) goto L32
            java.lang.String r0 = r1.aHb
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = r1.aHc
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = r1.aHe
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L32
            com.kwad.sdk.ranger.a.a$b r0 = r1.aHf
            if (r0 == 0) goto L26
            boolean r0 = r0.Hu()
            if (r0 == 0) goto L32
        L26:
            com.kwad.sdk.ranger.a.a r0 = r1.aHg
            if (r0 == 0) goto L30
            boolean r0 = r0.Hu()
            if (r0 == 0) goto L32
        L30:
            r0 = 1
            return r0
        L32:
            r0 = 0
            return r0
    }
}
