package com.xiaomi.push;

public class cj {
    private static volatile com.xiaomi.push.cj a;
    private android.content.Context a;
    private com.xiaomi.push.ci a;
    private final java.util.ArrayList<com.xiaomi.push.cj.a> a;
    private final java.util.HashMap<java.lang.String, com.xiaomi.push.ch> a;
    private java.util.concurrent.ThreadPoolExecutor a;

    public abstract class a implements java.lang.Runnable {
        private int a;
        protected com.xiaomi.push.ch a;
        private com.xiaomi.push.cj.a a;
        private java.lang.String a;
        private java.lang.ref.WeakReference<android.content.Context> a;
        private java.util.Random a;
        protected java.lang.String b;

        public a(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                java.util.Random r0 = new java.util.Random
                r0.<init>()
                r1.a = r0
                r0 = 0
                r1.a = r0
                r1.a = r2
                return
        }

        public android.database.sqlite.SQLiteDatabase a() {
                r1 = this;
                com.xiaomi.push.ch r0 = r1.a
                android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
                return r0
        }

        public java.lang.Object a() {
                r1 = this;
                r0 = 0
                return r0
        }

        public java.lang.String a() {
                r1 = this;
                java.lang.String r0 = r1.a
                return r0
        }

        void a(android.content.Context r3) {
                r2 = this;
                com.xiaomi.push.cj$a r0 = r2.a
                if (r0 == 0) goto Lb
                java.lang.Object r1 = r2.a()
                r0.a(r3, r1)
            Lb:
                r2.b(r3)
                return
        }

        public abstract void a(android.content.Context r1, android.database.sqlite.SQLiteDatabase r2);

        public void a(android.content.Context r1, java.lang.Object r2) {
                r0 = this;
                com.xiaomi.push.cj r1 = com.xiaomi.push.cj.a(r1)
                r1.a(r0)
                return
        }

        void a(com.xiaomi.push.ch r1, android.content.Context r2) {
                r0 = this;
                r0.a = r1
                java.lang.String r1 = r1.a()
                r0.b = r1
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.a = r1
                return
        }

        public void a(com.xiaomi.push.cj.a r1) {
                r0 = this;
                r0.a = r1
                return
        }

        public boolean a() {
                r1 = this;
                com.xiaomi.push.ch r0 = r1.a
                if (r0 == 0) goto L13
                java.lang.String r0 = r1.b
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L13
                java.lang.ref.WeakReference<android.content.Context> r0 = r1.a
                if (r0 != 0) goto L11
                goto L13
            L11:
                r0 = 0
                goto L14
            L13:
                r0 = 1
            L14:
                return r0
        }

        public void b(android.content.Context r1) {
                r0 = this;
                return
        }

        @Override
        public final void run() {
                r4 = this;
                java.lang.ref.WeakReference<android.content.Context> r0 = r4.a
                if (r0 != 0) goto L5
                return
            L5:
                java.lang.Object r0 = r0.get()
                android.content.Context r0 = (android.content.Context) r0
                if (r0 == 0) goto L40
                java.io.File r1 = r0.getFilesDir()
                if (r1 == 0) goto L40
                com.xiaomi.push.ch r1 = r4.a
                if (r1 == 0) goto L40
                java.lang.String r1 = r4.a
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 == 0) goto L20
                goto L40
            L20:
                java.io.File r1 = new java.io.File
                java.lang.String r2 = r4.a
                r1.<init>(r2)
                java.io.File r2 = new java.io.File
                java.io.File r3 = r1.getParentFile()
                java.lang.String r1 = r1.getAbsolutePath()
                java.lang.String r1 = com.xiaomi.push.bo.b(r1)
                r2.<init>(r3, r1)
                com.xiaomi.push.cl r1 = new com.xiaomi.push.cl
                r1.<init>(r4, r0)
                com.xiaomi.push.y.a(r0, r2, r1)
            L40:
                return
        }
    }

    public abstract class b<T> extends com.xiaomi.push.cj.a {
        private int a;
        private java.lang.String a;
        private java.util.List<java.lang.String> a;
        private java.lang.String[] a;
        private java.util.List<T> b;
        private java.lang.String c;
        private java.lang.String d;
        private java.lang.String e;

        public b(java.lang.String r1, java.util.List<java.lang.String> r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, int r8) {
                r0 = this;
                r0.<init>(r1)
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.b = r1
                r0.a = r2
                r0.a = r3
                r0.a = r4
                r0.c = r5
                r0.d = r6
                r0.e = r7
                r0.a = r8
                return
        }

        @Override
        public android.database.sqlite.SQLiteDatabase a() {
                r1 = this;
                com.xiaomi.push.ch r0 = r1.a
                android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()
                return r0
        }

        public abstract T a(android.content.Context r1, android.database.Cursor r2);

        @Override
        public void a(android.content.Context r13, android.database.sqlite.SQLiteDatabase r14) {
                r12 = this;
                java.util.List<T> r0 = r12.b
                r0.clear()
                java.util.List<java.lang.String> r0 = r12.a
                r1 = 0
                if (r0 == 0) goto L1f
                int r0 = r0.size()
                if (r0 <= 0) goto L1f
                java.util.List<java.lang.String> r0 = r12.a
                int r0 = r0.size()
                java.lang.String[] r0 = new java.lang.String[r0]
                java.util.List<java.lang.String> r2 = r12.a
                r2.toArray(r0)
                r5 = r0
                goto L20
            L1f:
                r5 = r1
            L20:
                int r0 = r12.a
                if (r0 > 0) goto L25
                goto L29
            L25:
                java.lang.String r1 = java.lang.String.valueOf(r0)
            L29:
                r11 = r1
                java.lang.String r4 = r12.b
                java.lang.String r6 = r12.a
                java.lang.String[] r7 = r12.a
                java.lang.String r8 = r12.c
                java.lang.String r9 = r12.d
                java.lang.String r10 = r12.e
                r3 = r14
                android.database.Cursor r14 = r3.query(r4, r5, r6, r7, r8, r9, r10, r11)
                if (r14 == 0) goto L57
                boolean r0 = r14.moveToFirst()
                if (r0 == 0) goto L57
            L43:
                java.lang.Object r0 = r12.a(r13, r14)
                if (r0 == 0) goto L4e
                java.util.List<T> r1 = r12.b
                r1.add(r0)
            L4e:
                boolean r0 = r14.moveToNext()
                if (r0 != 0) goto L43
                r14.close()
            L57:
                java.util.List<T> r14 = r12.b
                r12.a(r13, r14)
                return
        }

        public abstract void a(android.content.Context r1, java.util.List<T> r2);
    }

    public class c extends com.xiaomi.push.cj.a {
        private java.util.ArrayList<com.xiaomi.push.cj.a> a;

        public c(java.lang.String r1, java.util.ArrayList<com.xiaomi.push.cj.a> r2) {
                r0 = this;
                r0.<init>(r1)
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.a = r1
                r1.addAll(r2)
                return
        }

        @Override
        public final void a(android.content.Context r3) {
                r2 = this;
                super.a(r3)
                java.util.ArrayList<com.xiaomi.push.cj$a> r0 = r2.a
                java.util.Iterator r0 = r0.iterator()
            L9:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1b
                java.lang.Object r1 = r0.next()
                com.xiaomi.push.cj$a r1 = (com.xiaomi.push.cj.a) r1
                if (r1 == 0) goto L9
                r1.a(r3)
                goto L9
            L1b:
                return
        }

        @Override
        public void a(android.content.Context r3, android.database.sqlite.SQLiteDatabase r4) {
                r2 = this;
                java.util.ArrayList<com.xiaomi.push.cj$a> r0 = r2.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L18
                java.lang.Object r1 = r0.next()
                com.xiaomi.push.cj$a r1 = (com.xiaomi.push.cj.a) r1
                if (r1 == 0) goto L6
                r1.a(r3, r4)
                goto L6
            L18:
                return
        }
    }

    public class d extends com.xiaomi.push.cj.a {
        private java.lang.String a;
        protected java.lang.String[] a;

        public d(java.lang.String r1, java.lang.String r2, java.lang.String[] r3) {
                r0 = this;
                r0.<init>(r1)
                r0.a = r2
                r0.a = r3
                return
        }

        @Override
        public void a(android.content.Context r3, android.database.sqlite.SQLiteDatabase r4) {
                r2 = this;
                java.lang.String r3 = r2.b
                java.lang.String r0 = r2.a
                java.lang.String[] r1 = r2.a
                r4.delete(r3, r0, r1)
                return
        }
    }

    public class e extends com.xiaomi.push.cj.a {
        private android.content.ContentValues a;

        public e(java.lang.String r1, android.content.ContentValues r2) {
                r0 = this;
                r0.<init>(r1)
                r0.a = r2
                return
        }

        @Override
        public void a(android.content.Context r3, android.database.sqlite.SQLiteDatabase r4) {
                r2 = this;
                java.lang.String r3 = r2.b
                android.content.ContentValues r0 = r2.a
                r1 = 0
                r4.insert(r3, r1, r0)
                return
        }
    }

    private cj(android.content.Context r9) {
            r8 = this;
            r8.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r8.a = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            r2 = 1
            r3 = 1
            r4 = 15
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7)
            r8.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r8.a = r0
            r8.a = r9
            return
    }

    private com.xiaomi.push.ch a(java.lang.String r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r0 = r3.a
            java.lang.Object r0 = r0.get(r4)
            com.xiaomi.push.ch r0 = (com.xiaomi.push.ch) r0
            if (r0 != 0) goto L21
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r1 = r3.a
            monitor-enter(r1)
            if (r0 != 0) goto L1c
            com.xiaomi.push.ci r0 = r3.a     // Catch: java.lang.Throwable -> L1e
            android.content.Context r2 = r3.a     // Catch: java.lang.Throwable -> L1e
            com.xiaomi.push.ch r0 = r0.a(r2, r4)     // Catch: java.lang.Throwable -> L1e
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r2 = r3.a     // Catch: java.lang.Throwable -> L1e
            r2.put(r4, r0)     // Catch: java.lang.Throwable -> L1e
        L1c:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1e
            goto L21
        L1e:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L1e
            throw r4
        L21:
            return r0
    }

    public static com.xiaomi.push.cj a(android.content.Context r2) {
            com.xiaomi.push.cj r0 = com.xiaomi.push.cj.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.cj> r0 = com.xiaomi.push.cj.class
            monitor-enter(r0)
            com.xiaomi.push.cj r1 = com.xiaomi.push.cj.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.cj r1 = new com.xiaomi.push.cj     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.cj.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.cj r2 = com.xiaomi.push.cj.a
            return r2
    }

    static java.util.ArrayList a(com.xiaomi.push.cj r0) {
            java.util.ArrayList<com.xiaomi.push.cj$a> r0 = r0.a
            return r0
    }

    private void a() {
            r5 = this;
            android.content.Context r0 = r5.a
            com.xiaomi.push.al r0 = com.xiaomi.push.al.a(r0)
            com.xiaomi.push.ck r1 = new com.xiaomi.push.ck
            r1.<init>(r5)
            android.content.Context r2 = r5.a
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a(r2)
            com.xiaomi.push.ho r3 = com.xiaomi.push.ho.bm
            int r3 = r3.a()
            r4 = 5
            int r2 = r2.a(r3, r4)
            r0.b(r1, r2)
            return
    }

    public java.lang.String a(java.lang.String r1) {
            r0 = this;
            com.xiaomi.push.ch r1 = r0.a(r1)
            java.lang.String r1 = r1.a()
            return r1
    }

    public void a(com.xiaomi.push.cj.a r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.xiaomi.push.ci r0 = r4.a
            if (r0 == 0) goto L47
            java.lang.String r0 = r5.a()
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r1 = r4.a
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r2 = r4.a     // Catch: java.lang.Throwable -> L44
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L44
            com.xiaomi.push.ch r2 = (com.xiaomi.push.ch) r2     // Catch: java.lang.Throwable -> L44
            if (r2 != 0) goto L25
            com.xiaomi.push.ci r2 = r4.a     // Catch: java.lang.Throwable -> L44
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L44
            com.xiaomi.push.ch r2 = r2.a(r3, r0)     // Catch: java.lang.Throwable -> L44
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r3 = r4.a     // Catch: java.lang.Throwable -> L44
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> L44
        L25:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L44
            java.util.concurrent.ThreadPoolExecutor r0 = r4.a
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto L43
            android.content.Context r0 = r4.a
            r5.a(r2, r0)
            java.util.ArrayList<com.xiaomi.push.cj$a> r0 = r4.a
            monitor-enter(r0)
            java.util.ArrayList<com.xiaomi.push.cj$a> r1 = r4.a     // Catch: java.lang.Throwable -> L40
            r1.add(r5)     // Catch: java.lang.Throwable -> L40
            r4.a()     // Catch: java.lang.Throwable -> L40
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            goto L43
        L40:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L40
            throw r5
        L43:
            return
        L44:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L44
            throw r5
        L47:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "should exec init method first!"
            r5.<init>(r0)
            throw r5
    }

    public void a(java.lang.Runnable r2) {
            r1 = this;
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto Ld
            java.util.concurrent.ThreadPoolExecutor r0 = r1.a
            r0.execute(r2)
        Ld:
            return
    }

    public void a(java.util.ArrayList<com.xiaomi.push.cj.a> r5) {
            r4 = this;
            com.xiaomi.push.ci r0 = r4.a
            if (r0 == 0) goto L8c
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.concurrent.ThreadPoolExecutor r1 = r4.a
            boolean r1 = r1.isShutdown()
            if (r1 != 0) goto L8b
            java.util.Iterator r5 = r5.iterator()
        L15:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L50
            java.lang.Object r1 = r5.next()
            com.xiaomi.push.cj$a r1 = (com.xiaomi.push.cj.a) r1
            boolean r2 = r1.a()
            if (r2 == 0) goto L34
            java.lang.String r2 = r1.a()
            com.xiaomi.push.ch r2 = r4.a(r2)
            android.content.Context r3 = r4.a
            r1.a(r2, r3)
        L34:
            java.lang.String r2 = r1.a()
            java.lang.Object r2 = r0.get(r2)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 != 0) goto L4c
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.lang.String r3 = r1.a()
            r0.put(r3, r2)
        L4c:
            r2.add(r1)
            goto L15
        L50:
            java.util.Set r5 = r0.keySet()
            java.util.Iterator r5 = r5.iterator()
        L58:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L8b
            java.lang.Object r1 = r5.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r0.get(r1)
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            if (r2 == 0) goto L58
            int r3 = r2.size()
            if (r3 <= 0) goto L58
            com.xiaomi.push.cj$c r3 = new com.xiaomi.push.cj$c
            r3.<init>(r1, r2)
            r1 = 0
            java.lang.Object r1 = r2.get(r1)
            com.xiaomi.push.cj$a r1 = (com.xiaomi.push.cj.a) r1
            com.xiaomi.push.ch r1 = r1.a
            android.content.Context r2 = r4.a
            r3.a(r1, r2)
            java.util.concurrent.ThreadPoolExecutor r1 = r4.a
            r1.execute(r3)
            goto L58
        L8b:
            return
        L8c:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "should exec setDbHelperFactory method first!"
            r5.<init>(r0)
            throw r5
    }

    public void b(com.xiaomi.push.cj.a r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.xiaomi.push.ci r0 = r4.a
            if (r0 == 0) goto L3a
            java.lang.String r0 = r5.a()
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r1 = r4.a
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r2 = r4.a     // Catch: java.lang.Throwable -> L37
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L37
            com.xiaomi.push.ch r2 = (com.xiaomi.push.ch) r2     // Catch: java.lang.Throwable -> L37
            if (r2 != 0) goto L25
            com.xiaomi.push.ci r2 = r4.a     // Catch: java.lang.Throwable -> L37
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L37
            com.xiaomi.push.ch r2 = r2.a(r3, r0)     // Catch: java.lang.Throwable -> L37
            java.util.HashMap<java.lang.String, com.xiaomi.push.ch> r3 = r4.a     // Catch: java.lang.Throwable -> L37
            r3.put(r0, r2)     // Catch: java.lang.Throwable -> L37
        L25:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            java.util.concurrent.ThreadPoolExecutor r0 = r4.a
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto L36
            android.content.Context r0 = r4.a
            r5.a(r2, r0)
            r4.a(r5)
        L36:
            return
        L37:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L37
            throw r5
        L3a:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "should exec init method first!"
            r5.<init>(r0)
            throw r5
    }
}
