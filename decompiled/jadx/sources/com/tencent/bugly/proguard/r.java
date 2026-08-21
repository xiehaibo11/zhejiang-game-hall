package com.tencent.bugly.proguard;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import com.tencent.bugly.crashreport.biz.UserInfoBean;
import com.tencent.bugly.crashreport.common.strategy.StrategyBean;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: BUGLY */
/* JADX INFO: loaded from: classes3.dex */
public final class r {
    private static boolean e = true;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f5389a;
    private long b;
    private int c;
    private boolean d;

    public r(Context context, boolean z) {
        this.d = true;
        this.f5389a = context;
        this.d = z;
    }

    public final void a(int i, boolean z) {
        ac acVarA = ac.a();
        if (acVarA != null && !acVarA.c().g && i != 1 && i != 3) {
            al.e("UserInfo is disable", new Object[0]);
            return;
        }
        if (i == 1 || i == 3) {
            this.c++;
        }
        aa aaVarA = aa.a(this.f5389a);
        UserInfoBean userInfoBean = new UserInfoBean();
        userInfoBean.b = i;
        userInfoBean.c = aaVarA.d;
        userInfoBean.d = aaVarA.f();
        userInfoBean.e = System.currentTimeMillis();
        userInfoBean.f = -1L;
        userInfoBean.n = aaVarA.o;
        userInfoBean.o = i == 1 ? 1 : 0;
        userInfoBean.l = aaVarA.a();
        userInfoBean.m = aaVarA.y;
        userInfoBean.g = aaVarA.z;
        userInfoBean.h = aaVarA.A;
        userInfoBean.i = aaVarA.B;
        userInfoBean.k = aaVarA.C;
        userInfoBean.r = aaVarA.t();
        userInfoBean.s = aaVarA.y();
        userInfoBean.p = aaVarA.z();
        userInfoBean.q = aaVarA.x;
        ak.a().a(new a(userInfoBean, z), 0L);
    }

    public final void a(long j) {
        ak.a().a(new c(j), j);
    }

    public final void a() {
        this.b = ap.b() + 86400000;
        ak.a().a(new b(), (this.b - System.currentTimeMillis()) + 5000);
    }

    /* JADX INFO: compiled from: BUGLY */
    class a implements Runnable {
        private boolean b;
        private UserInfoBean c;

        public a(UserInfoBean userInfoBean, boolean z) {
            this.c = userInfoBean;
            this.b = z;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (r.this.d) {
                try {
                    if (this.c != null) {
                        r.a(this.c);
                        al.c("[UserInfo] Record user info.", new Object[0]);
                        r.this.a(this.c, false);
                    }
                    if (this.b) {
                        r.this.b();
                    }
                } catch (Throwable th) {
                    if (al.a(th)) {
                        return;
                    }
                    th.printStackTrace();
                }
            }
        }
    }

    private static void a(List<UserInfoBean> list, List<UserInfoBean> list2) {
        int size = list.size() - 20;
        if (size > 0) {
            int i = 0;
            while (i < list.size() - 1) {
                int i2 = i + 1;
                for (int i3 = i2; i3 < list.size(); i3++) {
                    if (list.get(i).e > list.get(i3).e) {
                        UserInfoBean userInfoBean = list.get(i);
                        list.set(i, list.get(i3));
                        list.set(i3, userInfoBean);
                    }
                }
                i = i2;
            }
            for (int i4 = 0; i4 < size; i4++) {
                list2.add(list.get(i4));
            }
        }
    }

    private static void b(List<UserInfoBean> list, List<UserInfoBean> list2) {
        Iterator<UserInfoBean> it = list.iterator();
        while (it.hasNext()) {
            UserInfoBean next = it.next();
            if (next.f != -1) {
                it.remove();
                if (next.e < ap.b()) {
                    list2.add(next);
                }
            }
        }
    }

    private static int a(List<UserInfoBean> list) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        int i = 0;
        for (UserInfoBean userInfoBean : list) {
            if (userInfoBean.e > jCurrentTimeMillis - 600000 && (userInfoBean.b == 1 || userInfoBean.b == 4 || userInfoBean.b == 3)) {
                i++;
            }
        }
        return i;
    }

    private void a(final List<UserInfoBean> list, boolean z) {
        aa aaVarB;
        if (!b(z)) {
            long jCurrentTimeMillis = System.currentTimeMillis();
            for (UserInfoBean userInfoBean : list) {
                userInfoBean.f = jCurrentTimeMillis;
                a(userInfoBean, true);
            }
            al.d("uploadCheck failed", new Object[0]);
            return;
        }
        int i = this.c == 1 ? 1 : 2;
        bv bvVar = null;
        if (list != null && list.size() != 0 && (aaVarB = aa.b()) != null) {
            aaVarB.o();
            bv bvVar2 = new bv();
            bvVar2.b = aaVarB.d;
            bvVar2.c = aaVarB.g();
            ArrayList<bu> arrayList = new ArrayList<>();
            Iterator<UserInfoBean> it = list.iterator();
            while (it.hasNext()) {
                bu buVarA = ae.a(it.next());
                if (buVarA != null) {
                    arrayList.add(buVarA);
                }
            }
            bvVar2.d = arrayList;
            bvVar2.e = new HashMap();
            Map<String, String> map = bvVar2.e;
            StringBuilder sb = new StringBuilder();
            aaVarB.getClass();
            map.put("A7", sb.toString());
            bvVar2.e.put("A6", aa.n());
            bvVar2.e.put("A5", aaVarB.m());
            Map<String, String> map2 = bvVar2.e;
            StringBuilder sb2 = new StringBuilder();
            sb2.append(aaVarB.k());
            map2.put("A2", sb2.toString());
            Map<String, String> map3 = bvVar2.e;
            StringBuilder sb3 = new StringBuilder();
            sb3.append(aaVarB.k());
            map3.put("A1", sb3.toString());
            bvVar2.e.put("A24", aaVarB.k);
            Map<String, String> map4 = bvVar2.e;
            StringBuilder sb4 = new StringBuilder();
            sb4.append(aaVarB.l());
            map4.put("A17", sb4.toString());
            bvVar2.e.put("A15", aaVarB.q());
            Map<String, String> map5 = bvVar2.e;
            StringBuilder sb5 = new StringBuilder();
            sb5.append(aaVarB.r());
            map5.put("A13", sb5.toString());
            bvVar2.e.put("F08", aaVarB.E);
            bvVar2.e.put("F09", aaVarB.F);
            Map<String, String> mapY = aaVarB.y();
            if (mapY != null && mapY.size() > 0) {
                for (Map.Entry<String, String> entry : mapY.entrySet()) {
                    bvVar2.e.put("C04_" + entry.getKey(), entry.getValue());
                }
            }
            if (i == 1) {
                bvVar2.f5379a = (byte) 1;
            } else if (i == 2) {
                bvVar2.f5379a = (byte) 2;
            } else {
                al.e("unknown up type %d ", Integer.valueOf(i));
            }
            bvVar = bvVar2;
        }
        if (bvVar == null) {
            al.d("[UserInfo] Failed to create UserInfoPackage.", new Object[0]);
            return;
        }
        byte[] bArrA = ae.a((m) bvVar);
        if (bArrA == null) {
            al.d("[UserInfo] Failed to encode data.", new Object[0]);
            return;
        }
        bq bqVarA = ae.a(this.f5389a, 840, bArrA);
        if (bqVarA == null) {
            al.d("[UserInfo] Request package is null.", new Object[0]);
            return;
        }
        ai.a().a(1001, bqVarA, ac.a().c().q, StrategyBean.f5306a, new ah() { // from class: com.tencent.bugly.proguard.r.1
            @Override // com.tencent.bugly.proguard.ah
            public final void a(boolean z2, String str) {
                if (z2) {
                    al.c("[UserInfo] Successfully uploaded user info.", new Object[0]);
                    long jCurrentTimeMillis2 = System.currentTimeMillis();
                    for (UserInfoBean userInfoBean2 : list) {
                        userInfoBean2.f = jCurrentTimeMillis2;
                        r.this.a(userInfoBean2, true);
                    }
                }
            }
        }, this.c == 1);
    }

    public final void b() {
        ak akVarA = ak.a();
        if (akVarA != null) {
            akVarA.a(new Runnable() { // from class: com.tencent.bugly.proguard.r.2

                /* JADX INFO: renamed from: a, reason: collision with root package name */
                final /* synthetic */ boolean f5391a = false;

                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        r.this.a(this.f5391a);
                    } catch (Throwable th) {
                        al.a(th);
                    }
                }
            });
        }
    }

    /* JADX INFO: compiled from: BUGLY */
    class b implements Runnable {
        b() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (jCurrentTimeMillis < r.this.b) {
                ak.a().a(r.this.new b(), (r.this.b - jCurrentTimeMillis) + 5000);
            } else {
                r.this.a(3, false);
                r.this.a();
            }
        }
    }

    /* JADX INFO: compiled from: BUGLY */
    class c implements Runnable {
        private long b;

        public c(long j) {
            this.b = com.tkay.expressad.d.a.b.aD;
            this.b = j;
        }

        @Override // java.lang.Runnable
        public final void run() {
            r.this.b();
            r.this.a(this.b);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(UserInfoBean userInfoBean, boolean z) {
        List<UserInfoBean> listA;
        if (userInfoBean == null) {
            return;
        }
        if (!z && userInfoBean.b != 1 && (listA = a(aa.a(this.f5389a).d)) != null && listA.size() >= 20) {
            al.a("[UserInfo] There are too many user info in local: %d", Integer.valueOf(listA.size()));
            return;
        }
        long jA = w.a().a("t_ui", b(userInfoBean), (v) null);
        if (jA >= 0) {
            al.c("[Database] insert %s success with ID: %d", "t_ui", Long.valueOf(jA));
            userInfoBean.f5304a = jA;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00ab  */
    /* JADX WARN: Type inference failed for: r8v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r8v2 */
    /* JADX WARN: Type inference failed for: r8v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.util.List<com.tencent.bugly.crashreport.biz.UserInfoBean> a(java.lang.String r8) {
        /*
            java.lang.String r0 = "t_ui"
            r1 = 0
            boolean r2 = com.tencent.bugly.proguard.ap.b(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            if (r2 == 0) goto Lb
            r8 = r1
            goto L1e
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r3 = "_pc = '"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            r2.append(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r8 = "'"
            r2.append(r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
        L1e:
            com.tencent.bugly.proguard.w r2 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            android.database.Cursor r8 = r2.a(r0, r1, r8)     // Catch: java.lang.Throwable -> L94 java.lang.Throwable -> L97
            if (r8 != 0) goto L2e
            if (r8 == 0) goto L2d
            r8.close()
        L2d:
            return r1
        L2e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r2.<init>()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r3.<init>()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
        L38:
            boolean r4 = r8.moveToNext()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r5 = 0
            if (r4 == 0) goto L64
            com.tencent.bugly.crashreport.biz.UserInfoBean r4 = a(r8)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            if (r4 == 0) goto L49
            r3.add(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            goto L38
        L49:
            java.lang.String r4 = "_id"
            int r4 = r8.getColumnIndex(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            long r6 = r8.getLong(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            java.lang.String r4 = " or _id = "
            r2.append(r4)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            r2.append(r6)     // Catch: java.lang.Throwable -> L5c java.lang.Throwable -> La8
            goto L38
        L5c:
            java.lang.String r4 = "[Database] unknown id."
            java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.al.d(r4, r5)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            goto L38
        L64:
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            if (r4 <= 0) goto L8c
            r4 = 4
            java.lang.String r2 = r2.substring(r4)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.w r4 = com.tencent.bugly.proguard.w.a()     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            int r2 = r4.a(r0, r2)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            java.lang.String r4 = "[Database] deleted %s error data %d"
            r6 = 2
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r6[r5] = r0     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r0 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            r6[r0] = r2     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
            com.tencent.bugly.proguard.al.d(r4, r6)     // Catch: java.lang.Throwable -> L92 java.lang.Throwable -> La8
        L8c:
            if (r8 == 0) goto L91
            r8.close()
        L91:
            return r3
        L92:
            r0 = move-exception
            goto L99
        L94:
            r0 = move-exception
            r8 = r1
            goto La9
        L97:
            r0 = move-exception
            r8 = r1
        L99:
            boolean r2 = com.tencent.bugly.proguard.al.a(r0)     // Catch: java.lang.Throwable -> La8
            if (r2 != 0) goto La2
            r0.printStackTrace()     // Catch: java.lang.Throwable -> La8
        La2:
            if (r8 == 0) goto La7
            r8.close()
        La7:
            return r1
        La8:
            r0 = move-exception
        La9:
            if (r8 == 0) goto Lae
            r8.close()
        Lae:
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.r.a(java.lang.String):java.util.List");
    }

    private static void b(List<UserInfoBean> list) {
        if (list.size() == 0) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < list.size() && i < 50; i++) {
            UserInfoBean userInfoBean = list.get(i);
            sb.append(" or _id = ");
            sb.append(userInfoBean.f5304a);
        }
        String string = sb.toString();
        if (string.length() > 0) {
            string = string.substring(4);
        }
        sb.setLength(0);
        try {
            al.c("[Database] deleted %s data %d", "t_ui", Integer.valueOf(w.a().a("t_ui", string)));
        } catch (Throwable th) {
            if (al.a(th)) {
                return;
            }
            th.printStackTrace();
        }
    }

    private static ContentValues b(UserInfoBean userInfoBean) {
        if (userInfoBean == null) {
            return null;
        }
        try {
            ContentValues contentValues = new ContentValues();
            if (userInfoBean.f5304a > 0) {
                contentValues.put("_id", Long.valueOf(userInfoBean.f5304a));
            }
            contentValues.put("_tm", Long.valueOf(userInfoBean.e));
            contentValues.put("_ut", Long.valueOf(userInfoBean.f));
            contentValues.put("_tp", Integer.valueOf(userInfoBean.b));
            contentValues.put("_pc", userInfoBean.c);
            contentValues.put("_dt", ap.a(userInfoBean));
            return contentValues;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    private static UserInfoBean a(Cursor cursor) {
        if (cursor == null) {
            return null;
        }
        try {
            byte[] blob = cursor.getBlob(cursor.getColumnIndex("_dt"));
            if (blob == null) {
                return null;
            }
            long j = cursor.getLong(cursor.getColumnIndex("_id"));
            UserInfoBean userInfoBean = (UserInfoBean) ap.a(blob, UserInfoBean.CREATOR);
            if (userInfoBean != null) {
                userInfoBean.f5304a = j;
            }
            return userInfoBean;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0067 A[Catch: all -> 0x0092, TryCatch #0 {, blocks: (B:3:0x0001, B:21:0x002b, B:23:0x003e, B:25:0x004c, B:28:0x0061, B:30:0x0067, B:32:0x006c, B:35:0x0073, B:38:0x0089, B:26:0x005b, B:6:0x0009, B:9:0x0010, B:12:0x0017, B:14:0x001d), top: B:44:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public synchronized void a(boolean r8) {
        /*
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.d     // Catch: java.lang.Throwable -> L92
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
        L7:
            r0 = 0
            goto L27
        L9:
            com.tencent.bugly.proguard.ai r0 = com.tencent.bugly.proguard.ai.a()     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L10
            goto L7
        L10:
            com.tencent.bugly.proguard.ac r3 = com.tencent.bugly.proguard.ac.a()     // Catch: java.lang.Throwable -> L92
            if (r3 != 0) goto L17
            goto L7
        L17:
            boolean r3 = r3.b()     // Catch: java.lang.Throwable -> L92
            if (r3 == 0) goto L26
            r3 = 1001(0x3e9, float:1.403E-42)
            boolean r0 = r0.b(r3)     // Catch: java.lang.Throwable -> L92
            if (r0 != 0) goto L26
            goto L7
        L26:
            r0 = 1
        L27:
            if (r0 != 0) goto L2b
            monitor-exit(r7)
            return
        L2b:
            android.content.Context r0 = r7.f5389a     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.a(r0)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r0.d     // Catch: java.lang.Throwable -> L92
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92
            r3.<init>()     // Catch: java.lang.Throwable -> L92
            java.util.List r0 = a(r0)     // Catch: java.lang.Throwable -> L92
            if (r0 == 0) goto L5b
            a(r0, r3)     // Catch: java.lang.Throwable -> L92
            b(r0, r3)     // Catch: java.lang.Throwable -> L92
            int r4 = a(r0)     // Catch: java.lang.Throwable -> L92
            r5 = 15
            if (r4 <= r5) goto L60
            java.lang.String r5 = "[UserInfo] Upload user info too many times in 10 min: %d"
            java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L92
            r6[r2] = r4     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.d(r5, r6)     // Catch: java.lang.Throwable -> L92
            r4 = 0
            goto L61
        L5b:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L92
            r0.<init>()     // Catch: java.lang.Throwable -> L92
        L60:
            r4 = 1
        L61:
            int r5 = r3.size()     // Catch: java.lang.Throwable -> L92
            if (r5 <= 0) goto L6a
            b(r3)     // Catch: java.lang.Throwable -> L92
        L6a:
            if (r4 == 0) goto L89
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L92
            if (r3 != 0) goto L73
            goto L89
        L73:
            java.lang.String r3 = "[UserInfo] Upload user info(size: %d)"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L92
            int r4 = r0.size()     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L92
            r1[r2] = r4     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r3, r1)     // Catch: java.lang.Throwable -> L92
            r7.a(r0, r8)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r7)
            return
        L89:
            java.lang.String r8 = "[UserInfo] There is no user info in local database."
            java.lang.Object[] r0 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L92
            com.tencent.bugly.proguard.al.c(r8, r0)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r7)
            return
        L92:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.r.a(boolean):void");
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x0093 A[Catch: Exception -> 0x0081, TRY_ENTER, TRY_LEAVE, TryCatch #3 {Exception -> 0x0081, blocks: (B:43:0x0093, B:32:0x007d), top: B:51:0x0036 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean b(boolean r15) {
        /*
            r14 = this;
            boolean r0 = com.tencent.bugly.proguard.r.e
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            java.io.File r0 = new java.io.File
            android.content.Context r2 = r14.f5389a
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r3 = "bugly_last_us_up_tm"
            r0.<init>(r2, r3)
            long r2 = java.lang.System.currentTimeMillis()
            r4 = 1024(0x400, double:5.06E-321)
            r6 = 0
            if (r15 == 0) goto L24
            java.lang.String r15 = java.lang.String.valueOf(r2)
            com.tencent.bugly.proguard.am.a(r0, r15, r4, r6)
            return r1
        L24:
            boolean r15 = r0.exists()
            if (r15 != 0) goto L32
            java.lang.String r15 = java.lang.String.valueOf(r2)
            com.tencent.bugly.proguard.am.a(r0, r15, r4, r6)
            goto L96
        L32:
            java.io.BufferedReader r15 = com.tencent.bugly.proguard.ap.a(r0)
            if (r15 == 0) goto L91
            java.lang.String r7 = r15.readLine()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            java.lang.String r7 = r7.trim()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            java.lang.Long r7 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            long r7 = r7.longValue()     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            int r9 = (r2 > r7 ? 1 : (r2 == r7 ? 0 : -1))
            if (r9 < 0) goto L58
            long r9 = r2 - r7
            r11 = 86400000(0x5265c00, double:4.2687272E-316)
            int r13 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r13 <= 0) goto L56
            goto L58
        L56:
            r9 = 1
            goto L59
        L58:
            r9 = 0
        L59:
            if (r9 == 0) goto L66
            long r7 = r2 - r7
            r9 = 300000(0x493e0, double:1.482197E-318)
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 >= 0) goto L66
            r1 = 0
            goto L91
        L66:
            java.lang.String r7 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            com.tencent.bugly.proguard.am.a(r0, r7, r4, r6)     // Catch: java.lang.Throwable -> L6e java.lang.Throwable -> L70
            goto L91
        L6e:
            r0 = move-exception
            goto L86
        L70:
            r7 = move-exception
            com.tencent.bugly.proguard.al.b(r7)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L6e
            com.tencent.bugly.proguard.am.a(r0, r2, r4, r6)     // Catch: java.lang.Throwable -> L6e
            if (r15 == 0) goto L96
            r15.close()     // Catch: java.lang.Exception -> L81
            goto L96
        L81:
            r15 = move-exception
            com.tencent.bugly.proguard.al.a(r15)
            goto L96
        L86:
            if (r15 == 0) goto L90
            r15.close()     // Catch: java.lang.Exception -> L8c
            goto L90
        L8c:
            r15 = move-exception
            com.tencent.bugly.proguard.al.a(r15)
        L90:
            throw r0
        L91:
            if (r15 == 0) goto L96
            r15.close()     // Catch: java.lang.Exception -> L81
        L96:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tencent.bugly.proguard.r.b(boolean):boolean");
    }

    static /* synthetic */ void a(UserInfoBean userInfoBean) {
        aa aaVarB;
        if (userInfoBean == null || (aaVarB = aa.b()) == null) {
            return;
        }
        userInfoBean.j = aaVarB.d();
    }
}
