package com.kwad.framework.filedownloader.b;

public final class d implements com.kwad.framework.filedownloader.b.a {
    private static boolean abV;
    private android.database.sqlite.SQLiteDatabase abU;

    public class a implements com.kwad.framework.filedownloader.b.a.a {
        private final android.util.SparseArray<com.kwad.framework.filedownloader.d.c> abK;
        private final android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> abL;
        private final android.util.SparseArray<com.kwad.framework.filedownloader.d.c> abW;
        private com.kwad.framework.filedownloader.b.d.b abX;
        final com.kwad.framework.filedownloader.b.d abY;

        a(com.kwad.framework.filedownloader.b.d r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0, r0)
                return
        }

        a(com.kwad.framework.filedownloader.b.d r1, android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r2, android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r3) {
                r0 = this;
                r0.abY = r1
                r0.<init>()
                android.util.SparseArray r1 = new android.util.SparseArray
                r1.<init>()
                r0.abW = r1
                r0.abK = r2
                r0.abL = r3
                return
        }

        @Override
        public final void a(int r2, com.kwad.framework.filedownloader.d.c r3) {
                r1 = this;
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r1.abW
                r0.put(r2, r3)
                return
        }

        @Override
        public final void c(com.kwad.framework.filedownloader.d.c r4) {
                r3 = this;
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r3.abK
                if (r0 == 0) goto L13
                monitor-enter(r0)
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r1 = r3.abK     // Catch: java.lang.Throwable -> L10
                int r2 = r4.getId()     // Catch: java.lang.Throwable -> L10
                r1.put(r2, r4)     // Catch: java.lang.Throwable -> L10
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
                return
            L10:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L10
                throw r4
            L13:
                return
        }

        @Override
        public final java.util.Iterator<com.kwad.framework.filedownloader.d.c> iterator() {
                r2 = this;
                com.kwad.framework.filedownloader.b.d$b r0 = new com.kwad.framework.filedownloader.b.d$b
                com.kwad.framework.filedownloader.b.d r1 = r2.abY
                r0.<init>(r1)
                r2.abX = r0
                return r0
        }

        @Override
        public final void ui() {
                r11 = this;
                com.kwad.framework.filedownloader.b.d$b r0 = r11.abX
                if (r0 == 0) goto L7
                r0.ui()
            L7:
                com.kwad.framework.filedownloader.b.d r0 = r11.abY
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)
                if (r0 != 0) goto L10
                return
            L10:
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r11.abW
                int r0 = r0.size()
                if (r0 >= 0) goto L19
                return
            L19:
                com.kwad.framework.filedownloader.b.d r1 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r1 = com.kwad.framework.filedownloader.b.d.a(r1)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r1.beginTransaction()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r1 = 0
                r2 = r1
            L24:
                if (r2 >= r0) goto Lac
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r3 = r11.abW     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                int r3 = r3.keyAt(r2)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r4 = r11.abW     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.d.c r4 = (com.kwad.framework.filedownloader.d.c) r4     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.b.d r5 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r5 = com.kwad.framework.filedownloader.b.d.a(r5)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r6 = "ksad_file_download"
                java.lang.String r7 = "_id = ?"
                r8 = 1
                java.lang.String[] r9 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r10 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r9[r1] = r10     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r5.delete(r6, r7, r9)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.b.d r5 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r5 = com.kwad.framework.filedownloader.b.d.a(r5)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r6 = "ksad_file_download"
                android.content.ContentValues r7 = r4.vk()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r9 = 0
                r5.insert(r6, r9, r7)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                int r5 = r4.vp()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                if (r5 <= r8) goto La8
                com.kwad.framework.filedownloader.b.d r5 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.util.List r5 = r5.bg(r3)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                int r6 = r5.size()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                if (r6 <= 0) goto La8
                com.kwad.framework.filedownloader.b.d r6 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r6 = com.kwad.framework.filedownloader.b.d.a(r6)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r7 = "ksad_file_download_connection"
                java.lang.String r10 = "id = ?"
                java.lang.String[] r8 = new java.lang.String[r8]     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r8[r1] = r3     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r6.delete(r7, r10, r8)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.util.Iterator r3 = r5.iterator()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
            L85:
                boolean r5 = r3.hasNext()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                if (r5 == 0) goto La8
                java.lang.Object r5 = r3.next()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.d.a r5 = (com.kwad.framework.filedownloader.d.a) r5     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                int r6 = r4.getId()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r5.setId(r6)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.b.d r6 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r6 = com.kwad.framework.filedownloader.b.d.a(r6)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                java.lang.String r7 = "ksad_file_download_connection"
                android.content.ContentValues r5 = r5.vk()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r6.insert(r7, r9, r5)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                goto L85
            La8:
                int r2 = r2 + 1
                goto L24
            Lac:
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r11.abK     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                if (r0 == 0) goto Lee
                android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r0 = r11.abL     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                if (r0 == 0) goto Lee
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r0 = r11.abK     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                monitor-enter(r0)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r2 = r11.abK     // Catch: java.lang.Throwable -> Leb
                int r2 = r2.size()     // Catch: java.lang.Throwable -> Leb
            Lbd:
                if (r1 >= r2) goto Le9
                android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r3 = r11.abK     // Catch: java.lang.Throwable -> Leb
                java.lang.Object r3 = r3.valueAt(r1)     // Catch: java.lang.Throwable -> Leb
                com.kwad.framework.filedownloader.d.c r3 = (com.kwad.framework.filedownloader.d.c) r3     // Catch: java.lang.Throwable -> Leb
                int r3 = r3.getId()     // Catch: java.lang.Throwable -> Leb
                com.kwad.framework.filedownloader.b.d r4 = r11.abY     // Catch: java.lang.Throwable -> Leb
                java.util.List r4 = r4.bg(r3)     // Catch: java.lang.Throwable -> Leb
                if (r4 == 0) goto Le6
                int r5 = r4.size()     // Catch: java.lang.Throwable -> Leb
                if (r5 <= 0) goto Le6
                android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r5 = r11.abL     // Catch: java.lang.Throwable -> Leb
                monitor-enter(r5)     // Catch: java.lang.Throwable -> Leb
                android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r6 = r11.abL     // Catch: java.lang.Throwable -> Le3
                r6.put(r3, r4)     // Catch: java.lang.Throwable -> Le3
                monitor-exit(r5)     // Catch: java.lang.Throwable -> Le3
                goto Le6
            Le3:
                r1 = move-exception
                monitor-exit(r5)     // Catch: java.lang.Throwable -> Le3
                throw r1     // Catch: java.lang.Throwable -> Leb
            Le6:
                int r1 = r1 + 1
                goto Lbd
            Le9:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Leb
                goto Lee
            Leb:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> Leb
                throw r1     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
            Lee:
                com.kwad.framework.filedownloader.b.d r0 = r11.abY     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                r0.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L10e java.lang.Exception -> L110 android.database.sqlite.SQLiteException -> L12b
                com.kwad.framework.filedownloader.b.d r0 = r11.abY
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)
                if (r0 == 0) goto L147
                com.kwad.framework.filedownloader.b.d r0 = r11.abY     // Catch: java.lang.Exception -> L109
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)     // Catch: java.lang.Exception -> L109
                r0.endTransaction()     // Catch: java.lang.Exception -> L109
                return
            L109:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r0)
                return
            L10e:
                r0 = move-exception
                goto L148
            L110:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r0)     // Catch: java.lang.Throwable -> L10e
                com.kwad.framework.filedownloader.b.d r0 = r11.abY
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)
                if (r0 == 0) goto L147
                com.kwad.framework.filedownloader.b.d r0 = r11.abY     // Catch: java.lang.Exception -> L126
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)     // Catch: java.lang.Exception -> L126
                r0.endTransaction()     // Catch: java.lang.Exception -> L126
                return
            L126:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r0)
                return
            L12b:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d r1 = r11.abY     // Catch: java.lang.Throwable -> L10e
                com.kwad.framework.filedownloader.b.d.a(r1, r0)     // Catch: java.lang.Throwable -> L10e
                com.kwad.framework.filedownloader.b.d r0 = r11.abY
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)
                if (r0 == 0) goto L147
                com.kwad.framework.filedownloader.b.d r0 = r11.abY     // Catch: java.lang.Exception -> L143
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r0)     // Catch: java.lang.Exception -> L143
                r0.endTransaction()     // Catch: java.lang.Exception -> L143
                return
            L143:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r0)
            L147:
                return
            L148:
                com.kwad.framework.filedownloader.b.d r1 = r11.abY
                android.database.sqlite.SQLiteDatabase r1 = com.kwad.framework.filedownloader.b.d.a(r1)
                if (r1 == 0) goto L15e
                com.kwad.framework.filedownloader.b.d r1 = r11.abY     // Catch: java.lang.Exception -> L15a
                android.database.sqlite.SQLiteDatabase r1 = com.kwad.framework.filedownloader.b.d.a(r1)     // Catch: java.lang.Exception -> L15a
                r1.endTransaction()     // Catch: java.lang.Exception -> L15a
                goto L15e
            L15a:
                r1 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r1)
            L15e:
                throw r0
        }
    }

    class b implements java.util.Iterator<com.kwad.framework.filedownloader.d.c> {
        final com.kwad.framework.filedownloader.b.d abY;
        private android.database.Cursor abZ;
        private final java.util.List<java.lang.Integer> aca;
        private int acb;

        b(com.kwad.framework.filedownloader.b.d r4) {
                r3 = this;
                r3.abY = r4
                r3.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r3.aca = r0
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r4)
                if (r0 == 0) goto L29
                android.database.sqlite.SQLiteDatabase r0 = com.kwad.framework.filedownloader.b.d.a(r4)     // Catch: java.lang.Exception -> L20 android.database.sqlite.SQLiteException -> L25
                java.lang.String r1 = "SELECT * FROM ksad_file_download"
                r2 = 0
                android.database.Cursor r0 = r0.rawQuery(r1, r2)     // Catch: java.lang.Exception -> L20 android.database.sqlite.SQLiteException -> L25
                r3.abZ = r0     // Catch: java.lang.Exception -> L20 android.database.sqlite.SQLiteException -> L25
                return
            L20:
                r4 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r4)
                goto L29
            L25:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.a(r4, r0)
            L29:
                return
        }

        private com.kwad.framework.filedownloader.d.c uj() {
                r2 = this;
                android.database.Cursor r0 = r2.abZ
                com.kwad.framework.filedownloader.d.c r0 = com.kwad.framework.filedownloader.b.d.e(r0)
                int r1 = r0.getId()
                r2.acb = r1
                return r0
        }

        @Override
        public final boolean hasNext() {
                r2 = this;
                r0 = 0
                android.database.Cursor r1 = r2.abZ     // Catch: java.lang.Throwable -> Lc
                if (r1 == 0) goto Lb
                android.database.Cursor r1 = r2.abZ     // Catch: java.lang.Throwable -> Lc
                boolean r0 = r1.moveToNext()     // Catch: java.lang.Throwable -> Lc
            Lb:
                return r0
            Lc:
                r1 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r1)
                return r0
        }

        @Override
        public final com.kwad.framework.filedownloader.d.c next() {
                r1 = this;
                com.kwad.framework.filedownloader.d.c r0 = r1.uj()
                return r0
        }

        @Override
        public final void remove() {
                r2 = this;
                java.util.List<java.lang.Integer> r0 = r2.aca
                int r1 = r2.acb
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0.add(r1)
                return
        }

        final void ui() {
                r8 = this;
                java.lang.String r0 = "DELETE FROM %s WHERE %s IN (%s);"
                com.kwad.framework.filedownloader.b.d r1 = r8.abY
                android.database.sqlite.SQLiteDatabase r1 = com.kwad.framework.filedownloader.b.d.a(r1)
                if (r1 == 0) goto L71
                android.database.Cursor r1 = r8.abZ
                if (r1 != 0) goto Lf
                goto L71
            Lf:
                r1.close()
                java.util.List<java.lang.Integer> r1 = r8.aca
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L71
                java.util.List<java.lang.Integer> r1 = r8.aca
                java.lang.String r2 = ", "
                java.lang.String r1 = android.text.TextUtils.join(r2, r1)
                boolean r2 = com.kwad.framework.filedownloader.f.d.aeI
                r3 = 0
                r4 = 1
                if (r2 == 0) goto L31
                java.lang.Object[] r2 = new java.lang.Object[r4]
                r2[r3] = r1
                java.lang.String r5 = "delete %s"
                com.kwad.framework.filedownloader.f.d.c(r8, r5, r2)
            L31:
                com.kwad.framework.filedownloader.b.d r2 = r8.abY     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                android.database.sqlite.SQLiteDatabase r2 = com.kwad.framework.filedownloader.b.d.a(r2)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                r5 = 3
                java.lang.Object[] r6 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r7 = "ksad_file_download"
                r6[r3] = r7     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r7 = "_id"
                r6[r4] = r7     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                r7 = 2
                r6[r7] = r1     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r6 = com.kwad.framework.filedownloader.f.f.b(r0, r6)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                r2.execSQL(r6)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                com.kwad.framework.filedownloader.b.d r2 = r8.abY     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                android.database.sqlite.SQLiteDatabase r2 = com.kwad.framework.filedownloader.b.d.a(r2)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r6 = "ksad_file_download_connection"
                r5[r3] = r6     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r3 = "id"
                r5[r4] = r3     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                r5[r7] = r1     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r0, r5)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                r2.execSQL(r0)     // Catch: java.lang.Exception -> L66 android.database.sqlite.SQLiteException -> L6b
                return
            L66:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d.i(r0)
                goto L71
            L6b:
                r0 = move-exception
                com.kwad.framework.filedownloader.b.d r1 = r8.abY
                com.kwad.framework.filedownloader.b.d.a(r1, r0)
            L71:
                return
        }
    }

    static {
            return
    }

    public d() {
            r2 = this;
            r2.<init>()
            com.kwad.framework.filedownloader.b.e r0 = new com.kwad.framework.filedownloader.b.e
            android.content.Context r1 = com.kwad.framework.filedownloader.f.c.vM()
            r0.<init>(r1)
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: android.database.sqlite.SQLiteException -> L13
            r2.abU = r0     // Catch: android.database.sqlite.SQLiteException -> L13
            return
        L13:
            r0 = move-exception
            r2.a(r0)
            return
    }

    static android.database.sqlite.SQLiteDatabase a(com.kwad.framework.filedownloader.b.d r0) {
            android.database.sqlite.SQLiteDatabase r0 = r0.abU
            return r0
    }

    private void a(int r7, android.content.ContentValues r8) {
            r6 = this;
            android.database.sqlite.SQLiteDatabase r0 = r6.abU
            if (r0 == 0) goto L1f
            java.lang.String r1 = "ksad_file_download"
            java.lang.String r2 = "_id = ? "
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L16 android.database.sqlite.SQLiteException -> L1b
            r4 = 0
            java.lang.String r5 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L16 android.database.sqlite.SQLiteException -> L1b
            r3[r4] = r5     // Catch: java.lang.Exception -> L16 android.database.sqlite.SQLiteException -> L1b
            r0.update(r1, r8, r2, r3)     // Catch: java.lang.Exception -> L16 android.database.sqlite.SQLiteException -> L1b
            return
        L16:
            r7 = move-exception
            printStackTrace(r7)
            goto L1f
        L1b:
            r8 = move-exception
            r6.a(r7, r8)
        L1f:
            return
    }

    private void a(int r2, android.database.sqlite.SQLiteException r3) {
            r1 = this;
            boolean r0 = r3 instanceof android.database.sqlite.SQLiteFullException
            if (r0 == 0) goto L14
            r0 = -1
            if (r2 == r0) goto Ld
            r1.bi(r2)
            r1.bh(r2)
        Ld:
            h(r3)
            r2 = 1
            com.kwad.framework.filedownloader.b.d.abV = r2
            return
        L14:
            printStackTrace(r3)
            return
    }

    private void a(android.database.sqlite.SQLiteException r2) {
            r1 = this;
            r0 = -1
            r1.a(r0, r2)
            return
    }

    static void a(com.kwad.framework.filedownloader.b.d r0, android.database.sqlite.SQLiteException r1) {
            r0.a(r1)
            return
    }

    private static com.kwad.framework.filedownloader.d.c d(android.database.Cursor r4) {
            com.kwad.framework.filedownloader.d.c r0 = new com.kwad.framework.filedownloader.d.c
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "_id"
            int r1 = r4.getColumnIndex(r1)
            int r1 = r4.getInt(r1)
            r0.setId(r1)
            java.lang.String r1 = "url"
            int r1 = r4.getColumnIndex(r1)
            java.lang.String r1 = r4.getString(r1)
            r0.setUrl(r1)
            java.lang.String r1 = "path"
            int r1 = r4.getColumnIndex(r1)
            java.lang.String r1 = r4.getString(r1)
            java.lang.String r2 = "pathAsDirectory"
            int r2 = r4.getColumnIndex(r2)
            short r2 = r4.getShort(r2)
            r3 = 1
            if (r2 != r3) goto L3a
            goto L3b
        L3a:
            r3 = 0
        L3b:
            r0.c(r1, r3)
            java.lang.String r1 = "status"
            int r1 = r4.getColumnIndex(r1)
            short r1 = r4.getShort(r1)
            byte r1 = (byte) r1
            r0.d(r1)
            java.lang.String r1 = "sofar"
            int r1 = r4.getColumnIndex(r1)
            long r1 = r4.getLong(r1)
            r0.L(r1)
            java.lang.String r1 = "total"
            int r1 = r4.getColumnIndex(r1)
            long r1 = r4.getLong(r1)
            r0.N(r1)
            java.lang.String r1 = "errMsg"
            int r1 = r4.getColumnIndex(r1)
            java.lang.String r1 = r4.getString(r1)
            r0.bj(r1)
            java.lang.String r1 = "etag"
            int r1 = r4.getColumnIndex(r1)
            java.lang.String r1 = r4.getString(r1)
            r0.bi(r1)
            java.lang.String r1 = "filename"
            int r1 = r4.getColumnIndex(r1)
            java.lang.String r1 = r4.getString(r1)
            r0.bk(r1)
            java.lang.String r1 = "connectionCount"
            int r1 = r4.getColumnIndex(r1)
            int r4 = r4.getInt(r1)
            r0.by(r4)
            return r0
    }

    private void d(com.kwad.framework.filedownloader.d.c r5) {
            r4 = this;
            android.database.sqlite.SQLiteDatabase r0 = r4.abU
            if (r0 == 0) goto L27
            java.lang.String r1 = "ksad_file_download"
            r2 = 0
            android.content.ContentValues r3 = r5.vk()     // Catch: java.lang.Exception -> Lf android.database.sqlite.SQLiteException -> L14
            r0.insert(r1, r2, r3)     // Catch: java.lang.Exception -> Lf android.database.sqlite.SQLiteException -> L14
            return
        Lf:
            r5 = move-exception
            printStackTrace(r5)
            goto L27
        L14:
            r0 = move-exception
            java.lang.String r1 = r0.toString()
            r5.bj(r1)
            r1 = -1
            r5.d(r1)
            int r5 = r5.getId()
            r4.a(r5, r0)
        L27:
            return
    }

    static com.kwad.framework.filedownloader.d.c e(android.database.Cursor r0) {
            com.kwad.framework.filedownloader.d.c r0 = d(r0)
            return r0
    }

    private static void h(java.lang.Throwable r0) {
            if (r0 == 0) goto L5
            r0.printStackTrace()
        L5:
            return
    }

    static void i(java.lang.Throwable r0) {
            printStackTrace(r0)
            return
    }

    private static void printStackTrace(java.lang.Throwable r0) {
            h(r0)
            return
    }

    public final com.kwad.framework.filedownloader.b.a.a a(android.util.SparseArray<com.kwad.framework.filedownloader.d.c> r2, android.util.SparseArray<java.util.List<com.kwad.framework.filedownloader.d.a>> r3) {
            r1 = this;
            com.kwad.framework.filedownloader.b.d$a r0 = new com.kwad.framework.filedownloader.b.d$a
            r0.<init>(r1, r2, r3)
            return r0
    }

    @Override
    public final void a(int r6, int r7, long r8) {
            r5 = this;
            android.database.sqlite.SQLiteDatabase r0 = r5.abU
            if (r0 != 0) goto L5
            return
        L5:
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Long r8 = java.lang.Long.valueOf(r8)
            java.lang.String r9 = "currentOffset"
            r0.put(r9, r8)
            android.database.sqlite.SQLiteDatabase r8 = r5.abU     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            java.lang.String r9 = "ksad_file_download_connection"
            java.lang.String r1 = "id = ? AND connectionIndex = ?"
            r2 = 2
            java.lang.String[] r2 = new java.lang.String[r2]     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            r3 = 0
            java.lang.String r4 = java.lang.Integer.toString(r6)     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            r2[r3] = r4     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            r3 = 1
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            r2[r3] = r7     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            r8.update(r9, r0, r1, r2)     // Catch: java.lang.Exception -> L2e android.database.sqlite.SQLiteException -> L33
            return
        L2e:
            r6 = move-exception
            printStackTrace(r6)
            return
        L33:
            r7 = move-exception
            r5.a(r6, r7)
            return
    }

    @Override
    public final void a(int r4, long r5, java.lang.String r7, java.lang.String r8) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 2
            java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "total"
            r0.put(r6, r5)
            java.lang.String r5 = "etag"
            r0.put(r5, r7)
            java.lang.String r5 = "filename"
            r0.put(r5, r8)
            r3.a(r4, r0)
            return
    }

    @Override
    public final void a(int r2, java.lang.String r3, long r4, long r6, int r8) {
            r1 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            java.lang.String r5 = "sofar"
            r0.put(r5, r4)
            java.lang.Long r4 = java.lang.Long.valueOf(r6)
            java.lang.String r5 = "total"
            r0.put(r5, r4)
            java.lang.String r4 = "etag"
            r0.put(r4, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r8)
            java.lang.String r4 = "connectionCount"
            r0.put(r4, r3)
            r1.a(r2, r0)
            return
    }

    @Override
    public final void a(int r3, java.lang.Throwable r4) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "errMsg"
            r0.put(r1, r4)
            r4 = 5
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            java.lang.String r1 = "status"
            r0.put(r1, r4)
            r2.a(r3, r0)
            return
    }

    @Override
    public final void a(int r3, java.lang.Throwable r4, long r5) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "errMsg"
            r0.put(r1, r4)
            r4 = -1
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            java.lang.String r1 = "status"
            r0.put(r1, r4)
            java.lang.Long r4 = java.lang.Long.valueOf(r5)
            java.lang.String r5 = "sofar"
            r0.put(r5, r4)
            r2.a(r3, r0)
            return
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.d.a r5) {
            r4 = this;
            if (r5 == 0) goto L1e
            android.database.sqlite.SQLiteDatabase r0 = r4.abU
            if (r0 == 0) goto L1e
            java.lang.String r1 = "ksad_file_download_connection"
            r2 = 0
            android.content.ContentValues r3 = r5.vk()     // Catch: java.lang.Exception -> L11 android.database.sqlite.SQLiteException -> L16
            r0.insert(r1, r2, r3)     // Catch: java.lang.Exception -> L11 android.database.sqlite.SQLiteException -> L16
            return
        L11:
            r5 = move-exception
            printStackTrace(r5)
            goto L1e
        L16:
            r0 = move-exception
            int r5 = r5.getId()
            r4.a(r5, r0)
        L1e:
            return
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.d.c r8) {
            r7 = this;
            android.database.sqlite.SQLiteDatabase r0 = r7.abU
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            if (r8 != 0) goto L10
            java.lang.Object[] r8 = new java.lang.Object[r0]
            java.lang.String r0 = "update but model == null!"
            com.kwad.framework.filedownloader.f.d.d(r7, r0, r8)
            return
        L10:
            int r1 = r8.getId()
            com.kwad.framework.filedownloader.d.c r1 = r7.bf(r1)
            if (r1 == 0) goto L4e
            android.content.ContentValues r1 = r8.vk()
            android.database.sqlite.SQLiteDatabase r2 = r7.abU     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            java.lang.String r3 = "ksad_file_download"
            java.lang.String r4 = "_id = ? "
            r5 = 1
            java.lang.String[] r5 = new java.lang.String[r5]     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            int r6 = r8.getId()     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            r5[r0] = r6     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            r2.update(r3, r1, r4, r5)     // Catch: java.lang.Exception -> L35 android.database.sqlite.SQLiteException -> L3a
            goto L51
        L35:
            r8 = move-exception
            printStackTrace(r8)
            return
        L3a:
            r0 = move-exception
            java.lang.String r1 = r0.toString()
            r8.bj(r1)
            r1 = -1
            r8.d(r1)
            int r8 = r8.getId()
            r7.a(r8, r0)
            goto L51
        L4e:
            r7.d(r8)
        L51:
            return
    }

    @Override
    public final void be(int r1) {
            r0 = this;
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.d.c bf(int r8) {
            r7 = this;
            android.database.sqlite.SQLiteDatabase r0 = r7.abU
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r2 = "SELECT * FROM %s WHERE %s = ?"
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            java.lang.String r4 = "ksad_file_download"
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            java.lang.String r4 = "_id"
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r2, r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            java.lang.String[] r3 = new java.lang.String[r6]     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            java.lang.String r4 = java.lang.Integer.toString(r8)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            r3[r5] = r4     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            android.database.Cursor r0 = r0.rawQuery(r2, r3)     // Catch: java.lang.Throwable -> L37 java.lang.Exception -> L39 android.database.sqlite.SQLiteException -> L3f
            boolean r2 = r0.moveToNext()     // Catch: java.lang.Exception -> L33 android.database.sqlite.SQLiteException -> L35 java.lang.Throwable -> L48
            if (r2 == 0) goto L44
            com.kwad.framework.filedownloader.d.c r8 = d(r0)     // Catch: java.lang.Exception -> L33 android.database.sqlite.SQLiteException -> L35 java.lang.Throwable -> L48
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r8
        L33:
            r8 = move-exception
            goto L3b
        L35:
            r2 = move-exception
            goto L41
        L37:
            r8 = move-exception
            goto L4a
        L39:
            r8 = move-exception
            r0 = r1
        L3b:
            printStackTrace(r8)     // Catch: java.lang.Throwable -> L48
            goto L44
        L3f:
            r2 = move-exception
            r0 = r1
        L41:
            r7.a(r8, r2)     // Catch: java.lang.Throwable -> L48
        L44:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r1
        L48:
            r8 = move-exception
            r1 = r0
        L4a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r8
    }

    @Override
    public final java.util.List<com.kwad.framework.filedownloader.d.a> bg(int r9) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.database.sqlite.SQLiteDatabase r1 = r8.abU
            if (r1 != 0) goto La
            return r0
        La:
            r2 = 0
            java.lang.String r3 = "SELECT * FROM %s WHERE %s = ?"
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r5 = "ksad_file_download_connection"
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r5 = "id"
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r3 = com.kwad.framework.filedownloader.f.f.b(r3, r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String[] r4 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r5 = java.lang.Integer.toString(r9)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r4[r6] = r5     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            android.database.Cursor r2 = r1.rawQuery(r3, r4)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
        L2a:
            boolean r1 = r2.moveToNext()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            if (r1 == 0) goto L7b
            com.kwad.framework.filedownloader.d.a r1 = new com.kwad.framework.filedownloader.d.a     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.<init>()     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.setId(r9)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r3 = "connectionIndex"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            int r3 = r2.getInt(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.setIndex(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r3 = "startOffset"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            long r3 = r2.getLong(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.setStartOffset(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r3 = "currentOffset"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            long r3 = r2.getLong(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.J(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            java.lang.String r3 = "endOffset"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            long r3 = r2.getLong(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r1.K(r3)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            r0.add(r1)     // Catch: java.lang.Throwable -> L70 java.lang.Exception -> L72 android.database.sqlite.SQLiteException -> L77
            goto L2a
        L70:
            r9 = move-exception
            goto L7f
        L72:
            r9 = move-exception
            printStackTrace(r9)     // Catch: java.lang.Throwable -> L70
            goto L7b
        L77:
            r1 = move-exception
            r8.a(r9, r1)     // Catch: java.lang.Throwable -> L70
        L7b:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            return r0
        L7f:
            com.kwad.sdk.crash.utils.b.closeQuietly(r2)
            throw r9
    }

    @Override
    public final void bh(int r4) {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.abU
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L17 android.database.sqlite.SQLiteException -> L1c
            java.lang.String r2 = "DELETE FROM ksad_file_download_connection WHERE id = "
            r1.<init>(r2)     // Catch: java.lang.Exception -> L17 android.database.sqlite.SQLiteException -> L1c
            r1.append(r4)     // Catch: java.lang.Exception -> L17 android.database.sqlite.SQLiteException -> L1c
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Exception -> L17 android.database.sqlite.SQLiteException -> L1c
            r0.execSQL(r4)     // Catch: java.lang.Exception -> L17 android.database.sqlite.SQLiteException -> L1c
            return
        L17:
            r4 = move-exception
            printStackTrace(r4)
            return
        L1c:
            r4 = move-exception
            printStackTrace(r4)
            return
    }

    @Override
    public final boolean bi(int r7) {
            r6 = this;
            android.database.sqlite.SQLiteDatabase r0 = r6.abU
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r2 = "ksad_file_download"
            java.lang.String r3 = "_id = ?"
            r4 = 1
            java.lang.String[] r5 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L1b android.database.sqlite.SQLiteException -> L1d
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> L1b android.database.sqlite.SQLiteException -> L1d
            r5[r1] = r7     // Catch: java.lang.Exception -> L1b android.database.sqlite.SQLiteException -> L1d
            int r7 = r0.delete(r2, r3, r5)     // Catch: java.lang.Exception -> L1b android.database.sqlite.SQLiteException -> L1d
            if (r7 == 0) goto L21
            r1 = r4
            goto L21
        L1b:
            r7 = move-exception
            goto L1e
        L1d:
            r7 = move-exception
        L1e:
            printStackTrace(r7)
        L21:
            return r1
    }

    @Override
    public final void bj(int r1) {
            r0 = this;
            return
    }

    @Override
    public final void c(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = 3
            java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "sofar"
            r0.put(r6, r5)
            r3.a(r4, r0)
            return
    }

    @Override
    public final void clear() {
            r3 = this;
            android.database.sqlite.SQLiteDatabase r0 = r3.abU
            if (r0 == 0) goto L1b
            r1 = 0
            java.lang.String r2 = "ksad_file_download"
            r0.delete(r2, r1, r1)     // Catch: android.database.sqlite.SQLiteException -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r3.a(r0)
        Lf:
            android.database.sqlite.SQLiteDatabase r0 = r3.abU     // Catch: android.database.sqlite.SQLiteException -> L17
            java.lang.String r2 = "ksad_file_download_connection"
            r0.delete(r2, r1, r1)     // Catch: android.database.sqlite.SQLiteException -> L17
            return
        L17:
            r0 = move-exception
            r3.a(r0)
        L1b:
            return
    }

    @Override
    public final void d(int r1, long r2) {
            r0 = this;
            r0.bi(r1)
            return
    }

    @Override
    public final void e(int r4, long r5) {
            r3 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            r1 = -2
            java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
            java.lang.String r2 = "status"
            r0.put(r2, r1)
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            java.lang.String r6 = "sofar"
            r0.put(r6, r5)
            r3.a(r4, r0)
            return
    }

    @Override
    public final void q(int r7, int r8) {
            r6 = this;
            android.database.sqlite.SQLiteDatabase r0 = r6.abU
            if (r0 != 0) goto L5
            return
        L5:
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            java.lang.String r1 = "connectionCount"
            r0.put(r1, r8)
            android.database.sqlite.SQLiteDatabase r8 = r6.abU     // Catch: java.lang.Exception -> L27 android.database.sqlite.SQLiteException -> L2c
            java.lang.String r1 = "ksad_file_download"
            java.lang.String r2 = "_id = ? "
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]     // Catch: java.lang.Exception -> L27 android.database.sqlite.SQLiteException -> L2c
            r4 = 0
            java.lang.String r5 = java.lang.Integer.toString(r7)     // Catch: java.lang.Exception -> L27 android.database.sqlite.SQLiteException -> L2c
            r3[r4] = r5     // Catch: java.lang.Exception -> L27 android.database.sqlite.SQLiteException -> L2c
            r8.update(r1, r0, r2, r3)     // Catch: java.lang.Exception -> L27 android.database.sqlite.SQLiteException -> L2c
            return
        L27:
            r7 = move-exception
            printStackTrace(r7)
            return
        L2c:
            r8 = move-exception
            r6.a(r7, r8)
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.b.a.a uh() {
            r1 = this;
            com.kwad.framework.filedownloader.b.d$a r0 = new com.kwad.framework.filedownloader.b.d$a
            r0.<init>(r1)
            return r0
    }
}
