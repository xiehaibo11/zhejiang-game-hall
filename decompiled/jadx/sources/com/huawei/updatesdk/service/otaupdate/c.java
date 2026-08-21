package com.huawei.updatesdk.service.otaupdate;

import android.content.Context;
import android.os.AsyncTask;
import java.util.Locale;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f2365a;

    public interface a {
        void a(Boolean bool);
    }

    private static class b extends AsyncTask<Void, Void, Boolean> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        a f2366a;

        public b(a aVar) {
            this.f2366a = aVar;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        /* JADX WARN: Removed duplicated region for block: B:33:0x006f A[EXC_TOP_SPLITTER, PHI: r1 r2
          0x006f: PHI (r1v1 android.database.Cursor) = (r1v0 android.database.Cursor), (r1v2 android.database.Cursor) binds: [B:20:0x008e, B:13:0x006d] A[DONT_GENERATE, DONT_INLINE]
          0x006f: PHI (r2v2 boolean) = (r2v0 boolean), (r2v4 boolean) binds: [B:20:0x008e, B:13:0x006d] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public java.lang.Boolean doInBackground(java.lang.Void... r12) {
            /*
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
            */
            throw new UnsupportedOperationException("Method not decompiled: com.huawei.updatesdk.service.otaupdate.c.b.doInBackground(java.lang.Void[]):java.lang.Boolean");
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onPostExecute(Boolean bool) {
            a aVar = this.f2366a;
            if (aVar != null) {
                aVar.a(bool);
            }
        }
    }

    public void a(Context context, String str, a aVar, boolean z) {
        if (!com.huawei.updatesdk.b.h.b.b(context, str, z) || !f.e().d()) {
            aVar.a(false);
            return;
        }
        b bVar = new b(aVar);
        bVar.executeOnExecutor(Executors.newSingleThreadExecutor(), new Void[0]);
        try {
            f2365a = String.format(Locale.ROOT, "content://%s.commondata/item/4", str);
            bVar.get(500L, TimeUnit.MILLISECONDS);
        } catch (Exception e) {
            bVar.cancel(true);
            com.huawei.updatesdk.a.a.a.a("AutoUpdateUtil", "init AutoUpdateInfo error: " + e.toString());
            aVar.a(false);
        }
    }
}
