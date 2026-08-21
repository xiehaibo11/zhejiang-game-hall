package com.huawei.updatesdk.service.otaupdate;

public class c {
    private static java.lang.String a;

    public interface a {
        void a(java.lang.Boolean r1);
    }

    private static class b extends android.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Boolean> {
        com.huawei.updatesdk.service.otaupdate.c.a a;

        public b(com.huawei.updatesdk.service.otaupdate.c.a r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        protected java.lang.Boolean a(java.lang.Void... r12) {
                r11 = this;
                java.lang.String r12 = "cursor Execption"
                java.lang.String r0 = "AutoUpdateUtil"
                r1 = 0
                r2 = 0
                com.huawei.updatesdk.a.b.a.a r3 = com.huawei.updatesdk.a.b.a.a.c()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                android.content.Context r3 = r3.a()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r4 = com.huawei.updatesdk.service.otaupdate.c.a()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                android.net.Uri r6 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                android.content.ContentResolver r5 = r3.getContentResolver()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                android.database.Cursor r1 = r5.query(r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                if (r1 == 0) goto L68
                boolean r3 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                if (r3 == 0) goto L68
                java.lang.String r3 = "isagree"
                int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                boolean r3 = r3.booleanValue()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r4 = "isopenautoupdate"
                int r4 = r1.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r4 = r1.getString(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                boolean r4 = r4.booleanValue()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r5 = "isneverreminder"
                int r5 = r1.getColumnIndex(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.String r5 = r1.getString(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
                if (r3 == 0) goto L6d
                if (r4 != 0) goto L6d
                if (r5 != 0) goto L6d
                r2 = 1
                goto L6d
            L68:
                java.lang.String r3 = "cursor == null"
                com.huawei.updatesdk.a.a.a.a(r0, r3)     // Catch: java.lang.Throwable -> L73 java.lang.Exception -> L75
            L6d:
                if (r1 == 0) goto L94
            L6f:
                r1.close()     // Catch: java.lang.Exception -> L91
                goto L94
            L73:
                r2 = move-exception
                goto L99
            L75:
                r3 = move-exception
                java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73
                r4.<init>()     // Catch: java.lang.Throwable -> L73
                java.lang.String r5 = "close cursor error: "
                r4.append(r5)     // Catch: java.lang.Throwable -> L73
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L73
                r4.append(r3)     // Catch: java.lang.Throwable -> L73
                java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L73
                com.huawei.updatesdk.a.a.a.a(r0, r3)     // Catch: java.lang.Throwable -> L73
                if (r1 == 0) goto L94
                goto L6f
            L91:
                com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r12)
            L94:
                java.lang.Boolean r12 = java.lang.Boolean.valueOf(r2)
                return r12
            L99:
                if (r1 == 0) goto La2
                r1.close()     // Catch: java.lang.Exception -> L9f
                goto La2
            L9f:
                com.huawei.updatesdk.a.a.c.a.a.a.b(r0, r12)
            La2:
                throw r2
        }

        protected void a(java.lang.Boolean r2) {
                r1 = this;
                com.huawei.updatesdk.service.otaupdate.c$a r0 = r1.a
                if (r0 == 0) goto L7
                r0.a(r2)
            L7:
                return
        }

        @Override
        protected java.lang.Boolean doInBackground(java.lang.Void[] r1) {
                r0 = this;
                java.lang.Void[] r1 = (java.lang.Void[]) r1
                java.lang.Boolean r1 = r0.a(r1)
                return r1
        }

        @Override
        protected void onPostExecute(java.lang.Boolean r1) {
                r0 = this;
                java.lang.Boolean r1 = (java.lang.Boolean) r1
                r0.a(r1)
                return
        }
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.huawei.updatesdk.service.otaupdate.c.a
            return r0
    }

    public void a(android.content.Context r6, java.lang.String r7, com.huawei.updatesdk.service.otaupdate.c.a r8, boolean r9) {
            r5 = this;
            boolean r6 = com.huawei.updatesdk.b.h.b.b(r6, r7, r9)
            r9 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r9)
            if (r6 == 0) goto L5d
            com.huawei.updatesdk.service.otaupdate.f r6 = com.huawei.updatesdk.service.otaupdate.f.e()
            boolean r6 = r6.d()
            if (r6 != 0) goto L16
            goto L5d
        L16:
            com.huawei.updatesdk.service.otaupdate.c$b r6 = new com.huawei.updatesdk.service.otaupdate.c$b
            r6.<init>(r8)
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newSingleThreadExecutor()
            java.lang.Void[] r2 = new java.lang.Void[r9]
            r6.executeOnExecutor(r1, r2)
            r1 = 1
            java.util.Locale r2 = java.util.Locale.ROOT     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = "content://%s.commondata/item/4"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L3b
            r4[r9] = r7     // Catch: java.lang.Exception -> L3b
            java.lang.String r7 = java.lang.String.format(r2, r3, r4)     // Catch: java.lang.Exception -> L3b
            com.huawei.updatesdk.service.otaupdate.c.a = r7     // Catch: java.lang.Exception -> L3b
            r2 = 500(0x1f4, double:2.47E-321)
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Exception -> L3b
            r6.get(r2, r7)     // Catch: java.lang.Exception -> L3b
            goto L5c
        L3b:
            r7 = move-exception
            r6.cancel(r1)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r9 = "init AutoUpdateInfo error: "
            r6.append(r9)
            java.lang.String r7 = r7.toString()
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            java.lang.String r7 = "AutoUpdateUtil"
            com.huawei.updatesdk.a.a.a.a(r7, r6)
            r8.a(r0)
        L5c:
            return
        L5d:
            r8.a(r0)
            return
    }
}
