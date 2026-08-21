package com.tramini.plugin.a.e;

public class f {


    public static class a {
        public static final int a = -1;
        public static final int b = 0;
        public static final int c = 1;
        public int d;
        public java.lang.Object e;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.tramini.plugin.a.e.f.a a() {
                com.tramini.plugin.a.e.f$a r0 = new com.tramini.plugin.a.e.f$a
                r0.<init>()
                r1 = 0
                r0.d = r1
                return r0
        }

        public static com.tramini.plugin.a.e.f.a a(java.lang.Object r2) {
                com.tramini.plugin.a.e.f$a r0 = new com.tramini.plugin.a.e.f$a
                r0.<init>()
                r1 = 1
                r0.d = r1
                r0.e = r2
                return r0
        }

        public static com.tramini.plugin.a.e.f.a b(java.lang.Object r2) {
                com.tramini.plugin.a.e.f$a r0 = new com.tramini.plugin.a.e.f$a
                r0.<init>()
                r1 = -1
                r0.d = r1
                r0.e = r2
                return r0
        }
    }

    public static class b {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        private static java.lang.String a(java.lang.String r2) {
                java.lang.String r0 = "(src|SRC)=(\"|')(.*?)(\"|')"
                r1 = 3
                java.lang.String r2 = com.tramini.plugin.a.e.f.a(r2, r0, r1)
                return r2
        }

        public static java.lang.String a(java.lang.String r5, java.lang.String r6) {
                java.lang.String r0 = ","
                java.lang.String[] r6 = r6.split(r0)
                int r1 = r6.length
                r2 = 0
            L8:
                if (r2 >= r1) goto L19
                r3 = r6[r2]
                java.lang.String r4 = "#01;"
                java.lang.String r3 = r3.replaceAll(r4, r0)
                java.lang.String r5 = com.tramini.plugin.a.e.f.c(r5, r3)
                int r2 = r2 + 1
                goto L8
            L19:
                boolean r6 = android.text.TextUtils.isEmpty(r5)
                if (r6 != 0) goto L20
                return r5
            L20:
                java.lang.String r5 = ""
                return r5
        }

        private static java.lang.String b(java.lang.String r1, java.lang.String r2) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = ".*?\\>(.*?)(</span>|</div>)"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                java.lang.String r1 = com.tramini.plugin.a.e.f.c(r1, r2)
                return r1
        }

        private static java.lang.String c(java.lang.String r2, java.lang.String r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "<(img|IMG).*?"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = "(.*?)(/>|></img>|>)"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r0 = 2
                java.lang.String r2 = com.tramini.plugin.a.e.f.a(r2, r3, r0)
                return r2
        }

        private static java.lang.String d(java.lang.String r2, java.lang.String r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "("
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = ")(http.*?)("
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ")"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r0 = 2
                java.lang.String r2 = com.tramini.plugin.a.e.f.a(r2, r3, r0)
                return r2
        }

        private static java.lang.String e(java.lang.String r1, java.lang.String r2) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = "=(\"|')(.*?)(\"|')"
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                r0 = 2
                java.lang.String r1 = com.tramini.plugin.a.e.f.a(r1, r2, r0)
                return r1
        }

        private static java.lang.String f(java.lang.String r1, java.lang.String r2) {
                r0 = 34
                java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2, r0)
                java.util.regex.Matcher r1 = r2.matcher(r1)
                boolean r2 = r1.find()
                if (r2 == 0) goto L16
                r2 = 1
                java.lang.String r1 = r1.group(r2)
                return r1
            L16:
                java.lang.String r1 = ""
                return r1
        }

        private static java.lang.String g(java.lang.String r2, java.lang.String r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "'"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = "'\\s*:\\s*'(.*?)'"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r2 = com.tramini.plugin.a.e.f.c(r2, r3)
                return r2
        }
    }

    public interface c {
        boolean a(java.lang.Object r1);

        com.tramini.plugin.a.e.f.a b(java.lang.Object r1);
    }

    public static class d {
        public static final java.lang.String a = "<!\\[CDATA\\[(.*?)\\]\\]>";

        public d() {
                r0 = this;
                r0.<init>()
                return
        }

        private static java.lang.String a(java.lang.String r1) {
                java.lang.String r0 = "<!\\[CDATA\\[(.*?)\\]\\]>"
                java.lang.String r1 = com.tramini.plugin.a.e.f.c(r1, r0)
                return r1
        }

        public static java.lang.String a(java.lang.String r8, java.lang.String r9) {
                java.lang.String r0 = ","
                java.lang.String[] r9 = r9.split(r0)
                int r0 = r9.length
                r1 = 0
                r2 = r1
            L9:
                if (r2 >= r0) goto L66
                r3 = r9[r2]
                java.lang.String r4 = "#"
                boolean r5 = r3.contains(r4)
                java.lang.String r6 = ">"
                if (r5 == 0) goto L46
                java.lang.String[] r3 = r3.split(r4)
                r4 = r3[r1]
                r5 = 1
                r3 = r3[r5]
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                java.lang.String r7 = ".*<"
                r5.<init>(r7)
                r5.append(r4)
                java.lang.String r7 = ".*?>(.*?"
                r5.append(r7)
                r5.append(r3)
                java.lang.String r3 = ".*?)</"
                r5.append(r3)
                r5.append(r4)
                r5.append(r6)
                java.lang.String r3 = r5.toString()
                java.lang.String r8 = com.tramini.plugin.a.e.f.c(r8, r3)
                goto L63
            L46:
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "<"
                r4.<init>(r5)
                r4.append(r3)
                java.lang.String r5 = ".*?>(.*?)</"
                r4.append(r5)
                r4.append(r3)
                r4.append(r6)
                java.lang.String r3 = r4.toString()
                java.lang.String r8 = com.tramini.plugin.a.e.f.c(r8, r3)
            L63:
                int r2 = r2 + 1
                goto L9
            L66:
                boolean r9 = android.text.TextUtils.isEmpty(r8)
                if (r9 != 0) goto L7a
                java.lang.String r9 = "<!\\[CDATA\\[(.*?)\\]\\]>"
                java.lang.String r9 = com.tramini.plugin.a.e.f.c(r8, r9)
                boolean r0 = android.text.TextUtils.isEmpty(r9)
                if (r0 != 0) goto L79
                return r9
            L79:
                return r8
            L7a:
                java.lang.String r8 = ""
                return r8
        }

        private static java.lang.String a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = ".*<"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = ".*?>(.*?"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = ".*?)</"
                r0.append(r4)
                r0.append(r3)
                java.lang.String r3 = ">"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r2 = com.tramini.plugin.a.e.f.c(r2, r3)
                return r2
        }

        public static java.lang.String b(java.lang.String r3, java.lang.String r4) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L59
                java.lang.String r1 = "<"
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L59
                r0.append(r4)     // Catch: java.lang.Throwable -> L59
                java.lang.String r1 = ">(.*?)</"
                r0.append(r1)     // Catch: java.lang.Throwable -> L59
                r0.append(r4)     // Catch: java.lang.Throwable -> L59
                java.lang.String r4 = ">"
                r0.append(r4)     // Catch: java.lang.Throwable -> L59
                java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L59
                java.lang.String r3 = com.tramini.plugin.a.e.f.c(r3, r4)     // Catch: java.lang.Throwable -> L59
                boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L59
                if (r4 != 0) goto L59
                java.lang.String r4 = ":"
                java.lang.String[] r3 = r3.split(r4)     // Catch: java.lang.Throwable -> L59
                r4 = 2
                r0 = r3[r4]     // Catch: java.lang.Throwable -> L59
                r1 = 0
                java.lang.String r0 = r0.substring(r1, r4)     // Catch: java.lang.Throwable -> L59
                int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L59
                r2 = 1
                r2 = r3[r2]     // Catch: java.lang.Throwable -> L59
                java.lang.String r2 = r2.substring(r1, r4)     // Catch: java.lang.Throwable -> L59
                int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L59
                int r2 = r2 * 60
                r3 = r3[r1]     // Catch: java.lang.Throwable -> L59
                java.lang.String r3 = r3.substring(r1, r4)     // Catch: java.lang.Throwable -> L59
                int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L59
                int r3 = r3 * 60
                int r3 = r3 * 60
                int r0 = r0 + r2
                int r0 = r0 + r3
                java.lang.String r3 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L59
                return r3
            L59:
                java.lang.String r3 = ""
                return r3
        }

        private static java.lang.String c(java.lang.String r2, java.lang.String r3) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "<"
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = ".*?>(.*?)</"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ">"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r2 = com.tramini.plugin.a.e.f.c(r2, r3)
                return r2
        }

        private static java.lang.String d(java.lang.String r1, java.lang.String r2) {
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                java.lang.String r2 = "=\"(.*?)\""
                r0.append(r2)
                java.lang.String r2 = r0.toString()
                java.lang.String r1 = com.tramini.plugin.a.e.f.c(r1, r2)
                boolean r2 = android.text.TextUtils.isEmpty(r1)
                java.lang.String r0 = ""
                if (r2 != 0) goto L24
                java.lang.String r2 = "\""
                java.lang.String r1 = r1.replace(r2, r0)
                return r1
            L24:
                return r0
        }
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static java.lang.Object a(java.lang.Object r3, java.lang.String r4) {
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Throwable -> L12
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L12
            java.lang.reflect.Method r4 = r0.getMethod(r4, r2)     // Catch: java.lang.Throwable -> L12
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L12
            java.lang.Object r3 = r4.invoke(r3, r0)     // Catch: java.lang.Throwable -> L12
            return r3
        L12:
            r3 = 0
            return r3
    }

    protected static java.lang.Object a(java.lang.Object r5, java.lang.String r6, java.lang.StringBuffer r7, com.tramini.plugin.a.e.f.c r8) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            if (r5 == 0) goto Lb7
            java.lang.Class r1 = r5.getClass()
            java.lang.String r1 = r1.getName()
            boolean r1 = r1.startsWith(r6)
            if (r1 == 0) goto Lb7
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Class r2 = r5.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = ","
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r7.append(r1)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lb7
            r1.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.Class r2 = r5.getClass()     // Catch: java.lang.Throwable -> Lb7
        L39:
            if (r2 == 0) goto L4b
            java.lang.reflect.Field[] r3 = r2.getDeclaredFields()     // Catch: java.lang.Throwable -> Lb7
            java.util.List r3 = java.util.Arrays.asList(r3)     // Catch: java.lang.Throwable -> Lb7
            r1.addAll(r3)     // Catch: java.lang.Throwable -> Lb7
            java.lang.Class r2 = r2.getSuperclass()     // Catch: java.lang.Throwable -> Lb7
            goto L39
        L4b:
            int r2 = r1.size()     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto Lb7
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lb7
        L55:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto Lb7
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Lb7
            java.lang.reflect.Field r2 = (java.lang.reflect.Field) r2     // Catch: java.lang.Throwable -> Lb7
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> Lb7
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto L55
            boolean r4 = r8.a(r2)     // Catch: java.lang.Throwable -> Lb7
            if (r4 == 0) goto L9e
            com.tramini.plugin.a.e.f$a r2 = r8.b(r2)     // Catch: java.lang.Throwable -> Lb7
            int r4 = r2.d     // Catch: java.lang.Throwable -> Lb7
            if (r4 == 0) goto L55
            if (r4 != r3) goto L7e
            java.lang.Object r5 = r2.e     // Catch: java.lang.Throwable -> Lb7
            return r5
        L7e:
            r3 = -1
            if (r4 != r3) goto L55
            java.lang.Object r2 = r2.e     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto L55
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> Lb7
            java.lang.Class r4 = r2.getClass()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Lb7
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> Lb7
            if (r3 != 0) goto L55
            java.lang.Object r2 = a(r2, r6, r7, r8)     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto L55
            return r2
        L9e:
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> Lb7
            java.lang.Class r4 = r2.getClass()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> Lb7
            boolean r3 = r3.contains(r4)     // Catch: java.lang.Throwable -> Lb7
            if (r3 != 0) goto L55
            java.lang.Object r2 = a(r2, r6, r7, r8)     // Catch: java.lang.Throwable -> Lb7
            if (r2 == 0) goto L55
            return r2
        Lb7:
            return r0
    }

    protected static java.lang.Object a(java.lang.String r6, java.lang.String r7) {
            r0 = 0
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Method r6 = r6.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r6 = r6.invoke(r0, r1)     // Catch: java.lang.Throwable -> L4f
            java.lang.Class r1 = r6.getClass()     // Catch: java.lang.Throwable -> L4f
            java.lang.reflect.Field[] r1 = r1.getDeclaredFields()     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L4f
            int r3 = r1.length     // Catch: java.lang.Throwable -> L4f
        L1f:
            if (r2 >= r3) goto L4f
            r4 = r1[r2]     // Catch: java.lang.Throwable -> L4f
            r5 = 1
            r4.setAccessible(r5)     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r5 = r4.get(r6)     // Catch: java.lang.Throwable -> L4f
            boolean r5 = r5 instanceof java.util.Map     // Catch: java.lang.Throwable -> L4f
            if (r5 == 0) goto L4c
            java.lang.Object r6 = r4.get(r6)     // Catch: java.lang.Throwable -> L4f
            java.util.Map r6 = (java.util.Map) r6     // Catch: java.lang.Throwable -> L4f
            if (r6 != 0) goto L38
            return r0
        L38:
            java.lang.Object r1 = r6.get(r7)     // Catch: java.lang.Throwable -> L4f
            boolean r2 = r1 instanceof java.lang.ref.WeakReference     // Catch: java.lang.Throwable -> L4f
            if (r2 == 0) goto L47
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r6 = r1.get()     // Catch: java.lang.Throwable -> L4f
            return r6
        L47:
            java.lang.Object r6 = r6.get(r7)     // Catch: java.lang.Throwable -> L4f
            return r6
        L4c:
            int r2 = r2 + 1
            goto L1f
        L4f:
            return r0
    }

    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L9
            return r0
        L9:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L14
            java.lang.String r1 = "id"
            java.lang.String r2 = r2.getQueryParameter(r1)     // Catch: java.lang.Throwable -> L14
            return r2
        L14:
            return r0
    }

    static java.lang.String a(java.lang.String r0, java.lang.String r1, int r2) {
            java.lang.String r0 = b(r0, r1, r2)
            return r0
    }

    protected static void a(java.lang.Class r2, java.util.List<java.lang.reflect.Field> r3) {
            if (r2 == 0) goto L2a
            java.lang.String r0 = r2.getName()     // Catch: java.lang.Throwable -> L2a
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L2a
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L13
            goto L2a
        L13:
            java.lang.reflect.Field[] r0 = r2.getDeclaredFields()     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L23
            int r1 = r0.length     // Catch: java.lang.Throwable -> L2a
            if (r1 <= 0) goto L23
            java.util.List r0 = java.util.Arrays.asList(r0)     // Catch: java.lang.Throwable -> L2a
            r3.addAll(r0)     // Catch: java.lang.Throwable -> L2a
        L23:
            java.lang.Class r2 = r2.getSuperclass()     // Catch: java.lang.Throwable -> L2a
            a(r2, r3)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    protected static java.lang.Object b(java.lang.Object r1, java.lang.String r2) {
            java.lang.Class r0 = r1.getClass()     // Catch: java.lang.Throwable -> L11
            java.lang.reflect.Field r2 = r0.getDeclaredField(r2)     // Catch: java.lang.Throwable -> L11
            r0 = 1
            r2.setAccessible(r0)     // Catch: java.lang.Throwable -> L11
            java.lang.Object r1 = r2.get(r1)     // Catch: java.lang.Throwable -> L11
            return r1
        L11:
            r1 = 0
            return r1
    }

    protected static java.lang.Object b(java.lang.String r3, java.lang.String r4) {
            r0 = 0
            java.lang.Class r3 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L13
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Throwable -> L13
            java.lang.reflect.Method r3 = r3.getMethod(r4, r2)     // Catch: java.lang.Throwable -> L13
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L13
            java.lang.Object r3 = r3.invoke(r0, r4)     // Catch: java.lang.Throwable -> L13
            return r3
        L13:
            return r0
    }

    public static java.lang.String b(java.lang.String r2) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L9
            return r0
        L9:
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "adurl"
            java.lang.String r2 = r2.getQueryParameter(r1)     // Catch: java.lang.Throwable -> L1f
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1a
            return r0
        L1a:
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> L1f
            return r2
        L1f:
            return r0
    }

    private static java.lang.String b(java.lang.String r9, java.lang.String r10, int r11) {
            r0 = 2
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r1 = 1
            java.lang.String[] r7 = new java.lang.String[r1]
            com.tramini.plugin.a.e.f$1 r8 = new com.tramini.plugin.a.e.f$1
            r1 = r8
            r2 = r10
            r3 = r9
            r4 = r7
            r5 = r11
            r6 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            r0.submit(r8)
            monitor-enter(r0)     // Catch: java.lang.Exception -> L2e
            r9 = 500(0x1f4, double:2.47E-321)
            r0.wait(r9)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            r0.shutdown()     // Catch: java.lang.Exception -> L2e
            r9 = 0
            r10 = r7[r9]     // Catch: java.lang.Exception -> L2e
            if (r10 == 0) goto L28
            r9 = r7[r9]     // Catch: java.lang.Exception -> L2e
            return r9
        L28:
            java.lang.String r9 = ""
            return r9
        L2b:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Exception -> L2e
            throw r9     // Catch: java.lang.Exception -> L2e
        L2e:
            java.lang.String r9 = ""
            return r9
    }

    protected static void b(java.lang.Class r2, java.util.List<java.lang.reflect.Method> r3) {
            if (r2 == 0) goto L2a
            java.lang.String r0 = r2.getName()     // Catch: java.lang.Throwable -> L2a
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.String r1 = r1.getName()     // Catch: java.lang.Throwable -> L2a
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L13
            goto L2a
        L13:
            java.lang.reflect.Method[] r0 = r2.getDeclaredMethods()     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L23
            int r1 = r0.length     // Catch: java.lang.Throwable -> L2a
            if (r1 <= 0) goto L23
            java.util.List r0 = java.util.Arrays.asList(r0)     // Catch: java.lang.Throwable -> L2a
            r3.addAll(r0)     // Catch: java.lang.Throwable -> L2a
        L23:
            java.lang.Class r2 = r2.getSuperclass()     // Catch: java.lang.Throwable -> L2a
            b(r2, r3)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public static java.lang.String c(java.lang.String r2) {
            java.util.Properties r0 = new java.util.Properties
            r0.<init>()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "unicodedString="
            java.lang.String r2 = r1.concat(r2)
            java.io.StringReader r1 = new java.io.StringReader
            r1.<init>(r2)
            r0.load(r1)     // Catch: java.io.IOException -> L17
        L17:
            java.lang.String r2 = "unicodedString"
            java.lang.String r2 = r0.getProperty(r2)
            return r2
    }

    static java.lang.String c(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            java.lang.String r1 = b(r1, r2, r0)
            return r1
    }

    public static java.lang.String d(java.lang.String r2) {
            java.lang.String r0 = "%(?![0-9a-fA-F]{2})"
            java.lang.String r1 = "%25"
            java.lang.String r0 = r2.replaceAll(r0, r1)     // Catch: java.io.UnsupportedEncodingException -> Lf
            java.lang.String r1 = "UTF-8"
            java.lang.String r2 = java.net.URLDecoder.decode(r0, r1)     // Catch: java.io.UnsupportedEncodingException -> Lf
            return r2
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            return r2
    }

    private static java.lang.String d(java.lang.String r1, java.lang.String r2) {
            r0 = 1
            java.lang.String r1 = b(r1, r2, r0)
            return r1
    }
}
