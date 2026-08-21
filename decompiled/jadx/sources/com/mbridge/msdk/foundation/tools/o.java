package com.mbridge.msdk.foundation.tools;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.IntentFilter;
import android.database.Cursor;
import android.net.Uri;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: compiled from: MIMManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class o {
    private static volatile String d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private CopyOnWriteArrayList<CampaignEx> f3537a;
    private volatile b b;
    private final AtomicBoolean c;
    private volatile Boolean e;
    private CampaignEx f;
    private int g;
    private Context h;

    private o() {
        this.g = 0;
        this.f3537a = new CopyOnWriteArrayList<>();
        this.c = new AtomicBoolean(false);
    }

    public static o a() {
        return a.f3543a;
    }

    public final void a(CampaignEx campaignEx) {
        try {
            if (this.e == null || campaignEx == null || !this.e.booleanValue()) {
                return;
            }
            this.f = campaignEx;
            this.f3537a.add(campaignEx);
        } catch (Exception e) {
            z.d("MIMManager", e.getMessage());
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x0076  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final boolean a(java.lang.String r6) {
        /*
            r5 = this;
            r0 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            r5.e = r1
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L79
            if (r2 != 0) goto L83
            java.lang.Boolean r2 = r5.e     // Catch: java.lang.Exception -> L79
            if (r2 == 0) goto L83
            java.lang.Boolean r2 = r5.e     // Catch: java.lang.Exception -> L79
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L79
            if (r2 == 0) goto L83
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = "YkQwD+z8H+N1WBK3H+xtLkeAyM=="
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L83
            boolean r2 = r6.startsWith(r2)     // Catch: java.lang.Exception -> L83
            if (r2 == 0) goto L76
            java.lang.String r2 = "H75TDkQsVbxPY7V="
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.b(r2)     // Catch: java.lang.Exception -> L83
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r4 = "=1"
            r3.append(r4)     // Catch: java.lang.Exception -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Exception -> L83
            if (r3 != 0) goto L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r4 = "=2"
            r3.append(r4)     // Catch: java.lang.Exception -> L83
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Exception -> L83
            if (r3 != 0) goto L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L83
            r3.<init>()     // Catch: java.lang.Exception -> L83
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = "=3"
            r3.append(r2)     // Catch: java.lang.Exception -> L83
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Exception -> L83
            boolean r6 = r6.contains(r2)     // Catch: java.lang.Exception -> L83
            if (r6 == 0) goto L76
            goto L77
        L76:
            r0 = r1
        L77:
            r1 = r0
            goto L83
        L79:
            r6 = move-exception
            java.lang.String r6 = r6.getMessage()
            java.lang.String r0 = "MIMManager"
            com.mbridge.msdk.foundation.tools.z.d(r0, r6)
        L83:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.o.a(java.lang.String):boolean");
    }

    public final void b(CampaignEx campaignEx) {
        try {
            if (this.e == null || campaignEx == null || !this.e.booleanValue()) {
                return;
            }
            this.f = null;
            try {
                this.f3537a.remove(campaignEx);
            } catch (Exception e) {
                z.a("MIMManager", e.getMessage());
            }
        } catch (Exception e2) {
            z.d("MIMManager", e2.getMessage());
        }
    }

    final CampaignEx b() {
        return this.f;
    }

    public final void c() {
        this.g++;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final void d() {
        int i = this.g - 1;
        this.g = i;
        if (i <= 0) {
            Context context = this.h;
            if (this.b == null || context == null) {
                return;
            }
            try {
                try {
                    context.unregisterReceiver(this.b);
                } catch (Exception e) {
                    z.a("MIMManager", e.getMessage());
                }
            } finally {
                this.f = null;
                this.f3537a.clear();
                this.f3537a = null;
                this.b = null;
                this.h = null;
            }
        }
    }

    public final void a(final Context context) {
        this.h = context;
        com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() { // from class: com.mbridge.msdk.foundation.tools.o.1
            @Override // java.lang.Runnable
            public final void run() {
                if (o.this.c.compareAndSet(false, true)) {
                    try {
                        o.this.e = o.this.g();
                    } catch (Exception e) {
                        z.a("MIMManager", e.getMessage());
                    }
                    if (o.this.e == null || !o.this.e.booleanValue() || context == null) {
                        return;
                    }
                    try {
                        o.this.b = new b();
                        IntentFilter intentFilter = new IntentFilter();
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KyVj5GxVN="));
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KanjKnxVN="));
                        intentFilter.addAction(t.b("DFKwWgtuDkKwLZPwD+z8H+N/xjQZxVfV+T2SZVe6V2xS5c5n"));
                        context.registerReceiver(o.this.b, intentFilter);
                    } catch (Exception e2) {
                        z.a("MIMManager", e2.getMessage());
                    }
                }
            }
        });
    }

    public final Boolean e() {
        return this.e;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Boolean g() {
        Cursor cursorQuery;
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        Boolean boolValueOf = null;
        if (contextJ != null) {
            try {
                if (contextJ.getContentResolver() != null) {
                    try {
                        cursorQuery = contextJ.getContentResolver().query(Uri.parse(t.b("DFK/J75/JaEXWFfXYZP9LkcXYk3/YkcBLF5TWgSBYbHuH75BW3xuhr5UJj2tLkeNhrKFLkxQhl==")), null, null, null, null);
                    } catch (Exception unused) {
                        cursorQuery = null;
                    }
                    if (cursorQuery != null) {
                        while (cursorQuery.moveToNext()) {
                            try {
                                String string = cursorQuery.getString(cursorQuery.getColumnIndex("support"));
                                if (!TextUtils.isEmpty(string) && !string.equalsIgnoreCase("null") && (string.equalsIgnoreCase("false") || string.equalsIgnoreCase("true"))) {
                                    boolValueOf = Boolean.valueOf(Boolean.parseBoolean(string));
                                }
                            } catch (Exception e) {
                                z.a("MIMManager", e.getMessage());
                            }
                            try {
                                d = cursorQuery.getString(cursorQuery.getColumnIndex("detailStyle"));
                            } catch (Exception e2) {
                                z.a("MIMManager", e2.getMessage());
                            }
                        }
                        try {
                            cursorQuery.close();
                        } catch (Exception e3) {
                            z.a("MIMManager", e3.getMessage());
                        }
                    }
                }
            } catch (Exception e4) {
                z.d("MIMManager", e4.getMessage());
            }
        }
        return boolValueOf;
    }

    public final String f() {
        try {
            return d == null ? "" : String.format("[%s]", d);
        } catch (Exception unused) {
            return "";
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: compiled from: MIMManager.java */
    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final o f3543a = new o();
    }

    /* JADX INFO: compiled from: MIMManager.java */
    private static class b extends BroadcastReceiver {
        private b() {
        }

        /* JADX WARN: Removed duplicated region for block: B:36:0x0083 A[Catch: Exception -> 0x00a8, TryCatch #0 {Exception -> 0x00a8, blocks: (B:13:0x0033, B:16:0x003a, B:18:0x004b, B:21:0x0052, B:24:0x005d, B:36:0x0083, B:37:0x008a, B:31:0x006f, B:32:0x0075, B:33:0x007b), top: B:43:0x0033 }] */
        @Override // android.content.BroadcastReceiver
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public final void onReceive(final android.content.Context r9, android.content.Intent r10) {
            /*
                r8 = this;
                java.lang.String r0 = r10.getAction()
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 == 0) goto Lb
                return
            Lb:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KyVj5GxVN="
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L19
                goto Lb2
            L19:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xj26Vjcdx5KanjKnxVN="
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r1 = r0.equals(r1)
                if (r1 == 0) goto L27
                goto Lb2
            L27:
                java.lang.String r1 = "DFKwWgtuDkKwLZPwD+z8H+N/xjQZxVfV+T2SZVe6V2xS5c5n"
                java.lang.String r1 = com.mbridge.msdk.foundation.tools.t.b(r1)
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto Lb2
                android.os.Bundle r10 = r10.getExtras()     // Catch: java.lang.Exception -> La8
                if (r10 != 0) goto L3a
                return
            L3a:
                java.lang.String r0 = "statusCode"
                r1 = -1
                int r7 = r10.getInt(r0, r1)     // Catch: java.lang.Exception -> La8
                java.lang.String r0 = "packageName"
                java.lang.String r2 = ""
                java.lang.String r10 = r10.getString(r0, r2)     // Catch: java.lang.Exception -> La8
                if (r7 == r1) goto La7
                boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> La8
                if (r0 == 0) goto L52
                goto La7
            L52:
                com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r10 = com.mbridge.msdk.foundation.tools.o.a(r0, r10)     // Catch: java.lang.Exception -> La8
                if (r10 != 0) goto L5d
                return
            L5d:
                com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                r1 = 3001(0xbb9, float:4.205E-42)
                if (r7 == r1) goto L7b
                r1 = 3002(0xbba, float:4.207E-42)
                if (r7 == r1) goto L75
                r1 = 3008(0xbc0, float:4.215E-42)
                if (r7 == r1) goto L6f
                r10 = 0
                goto L81
            L6f:
                com.mbridge.msdk.foundation.tools.o$2 r1 = new com.mbridge.msdk.foundation.tools.o$2     // Catch: java.lang.Exception -> La8
                r1.<init>()     // Catch: java.lang.Exception -> La8
                goto L80
            L75:
                com.mbridge.msdk.foundation.tools.o$3 r1 = new com.mbridge.msdk.foundation.tools.o$3     // Catch: java.lang.Exception -> La8
                r1.<init>()     // Catch: java.lang.Exception -> La8
                goto L80
            L7b:
                com.mbridge.msdk.foundation.tools.o$4 r1 = new com.mbridge.msdk.foundation.tools.o$4     // Catch: java.lang.Exception -> La8
                r1.<init>()     // Catch: java.lang.Exception -> La8
            L80:
                r10 = r1
            L81:
                if (r10 == 0) goto L8a
                java.util.concurrent.ThreadPoolExecutor r0 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> La8
                r0.execute(r10)     // Catch: java.lang.Exception -> La8
            L8a:
                com.mbridge.msdk.foundation.tools.o r3 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                java.lang.String r5 = "dm_page_status"
                com.mbridge.msdk.foundation.tools.o r10 = com.mbridge.msdk.foundation.tools.o.a.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.entity.CampaignEx r6 = r10.b()     // Catch: java.lang.Exception -> La8
                java.util.concurrent.ThreadPoolExecutor r10 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Exception -> La8
                com.mbridge.msdk.foundation.tools.o$5 r0 = new com.mbridge.msdk.foundation.tools.o$5     // Catch: java.lang.Exception -> La8
                r2 = r0
                r4 = r9
                r2.<init>()     // Catch: java.lang.Exception -> La8
                r10.execute(r0)     // Catch: java.lang.Exception -> La8
                goto Lb2
            La7:
                return
            La8:
                r9 = move-exception
                java.lang.String r9 = r9.getMessage()
                java.lang.String r10 = "MIMManager"
                com.mbridge.msdk.foundation.tools.z.d(r10, r9)
            Lb2:
                return
            */
            throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.o.b.onReceive(android.content.Context, android.content.Intent):void");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public CampaignEx b(String str) {
        try {
            if (this.f != null && TextUtils.equals(this.f.getPackageName(), str)) {
                return this.f;
            }
            if (this.f3537a == null || this.f3537a.size() <= 0) {
                return null;
            }
            for (CampaignEx campaignEx : this.f3537a) {
                if (campaignEx != null && TextUtils.equals(campaignEx.getPackageName(), str)) {
                    return campaignEx;
                }
            }
            return null;
        } catch (Exception e) {
            z.d("MIMManager", e.getMessage());
            return null;
        }
    }
}
