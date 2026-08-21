package com.tencent.bugly.proguard;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import com.tencent.bugly.crashreport.biz.UserInfoBean;
import com.tencent.bugly.crashreport.common.strategy.StrategyBean;
import java.io.BufferedReader;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

public final class r {
    private static boolean e = true;
    private Context a;
    private long b;
    private int c;
    private boolean d;

    public r(Context context, boolean z) {
        this.d = true;
        this.a = context;
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
        aa aaVarA = aa.a(this.a);
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

    class a implements Runnable {
        private boolean b;
        private UserInfoBean c;

        public a(UserInfoBean userInfoBean, boolean z) {
            this.c = userInfoBean;
            this.b = z;
        }

        @Override
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
                bvVar2.a = (byte) 1;
            } else if (i == 2) {
                bvVar2.a = (byte) 2;
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
        bq bqVarA = ae.a(this.a, 840, bArrA);
        if (bqVarA == null) {
            al.d("[UserInfo] Request package is null.", new Object[0]);
            return;
        }
        ai.a().a(1001, bqVarA, ac.a().c().q, StrategyBean.a, new ah() {
            @Override
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
            akVarA.a(new Runnable() {
                final boolean a = false;

                @Override
                public final void run() {
                    try {
                        r.this.a(this.a);
                    } catch (Throwable th) {
                        al.a(th);
                    }
                }
            });
        }
    }

    class b implements Runnable {
        b() {
        }

        @Override
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

    class c implements Runnable {
        private long b;

        public c(long j) {
            this.b = com.tkay.expressad.d.a.b.aD;
            this.b = j;
        }

        @Override
        public final void run() {
            r.this.b();
            r.this.a(this.b);
        }
    }

    private void a(UserInfoBean userInfoBean, boolean z) {
        List<UserInfoBean> listA;
        if (userInfoBean == null) {
            return;
        }
        if (!z && userInfoBean.b != 1 && (listA = a(aa.a(this.a).d)) != null && listA.size() >= 20) {
            al.a("[UserInfo] There are too many user info in local: %d", Integer.valueOf(listA.size()));
            return;
        }
        long jA = w.a().a("t_ui", b(userInfoBean), (v) null);
        if (jA >= 0) {
            al.c("[Database] insert %s success with ID: %d", "t_ui", Long.valueOf(jA));
            userInfoBean.a = jA;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00ab  */
    /* JADX WARN: Type inference failed for: r8v0, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r8v2 */
    /* JADX WARN: Type inference failed for: r8v3, types: [android.database.Cursor] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static List<UserInfoBean> a(String str) {
        Cursor cursorA;
        String str2;
        try {
            try {
                if (ap.b((String) str)) {
                    str2 = null;
                } else {
                    str2 = "_pc = '" + ((String) str) + "'";
                }
                cursorA = w.a().a("t_ui", (String[]) null, str2);
                if (cursorA == null) {
                    if (cursorA != null) {
                        cursorA.close();
                    }
                    return null;
                }
                try {
                    StringBuilder sb = new StringBuilder();
                    ArrayList arrayList = new ArrayList();
                    while (cursorA.moveToNext()) {
                        UserInfoBean userInfoBeanA = a(cursorA);
                        if (userInfoBeanA != null) {
                            arrayList.add(userInfoBeanA);
                        } else {
                            try {
                                long j = cursorA.getLong(cursorA.getColumnIndex("_id"));
                                sb.append(" or _id = ");
                                sb.append(j);
                            } catch (Throwable unused) {
                                al.d("[Database] unknown id.", new Object[0]);
                            }
                        }
                    }
                    String string = sb.toString();
                    if (string.length() > 0) {
                        al.d("[Database] deleted %s error data %d", "t_ui", Integer.valueOf(w.a().a("t_ui", string.substring(4))));
                    }
                    if (cursorA != null) {
                        cursorA.close();
                    }
                    return arrayList;
                } catch (Throwable th) {
                    th = th;
                    if (!al.a(th)) {
                        th.printStackTrace();
                    }
                    if (cursorA != null) {
                        cursorA.close();
                    }
                    return null;
                }
            } catch (Throwable th2) {
                th = th2;
                if (str != 0) {
                    str.close();
                }
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            cursorA = null;
        }
    }

    private static void b(List<UserInfoBean> list) {
        if (list.size() == 0) {
            return;
        }
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < list.size() && i < 50; i++) {
            UserInfoBean userInfoBean = list.get(i);
            sb.append(" or _id = ");
            sb.append(userInfoBean.a);
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
            if (userInfoBean.a > 0) {
                contentValues.put("_id", Long.valueOf(userInfoBean.a));
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
                userInfoBean.a = j;
            }
            return userInfoBean;
        } catch (Throwable th) {
            if (!al.a(th)) {
                th.printStackTrace();
            }
            return null;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:30:0x0067 A[Catch: all -> 0x0092, TryCatch #0 {, blocks: (B:3:0x0001, B:21:0x002b, B:23:0x003e, B:25:0x004c, B:28:0x0061, B:30:0x0067, B:32:0x006c, B:35:0x0073, B:38:0x0089, B:26:0x005b, B:6:0x0009, B:9:0x0010, B:12:0x0017, B:14:0x001d), top: B:44:0x0001 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private synchronized void a(boolean z) {
        ai aiVarA;
        ac acVarA;
        boolean z2;
        if (this.d && (aiVarA = ai.a()) != null && (acVarA = ac.a()) != null && (!acVarA.b() || aiVarA.b(1001))) {
            String str = aa.a(this.a).d;
            ArrayList arrayList = new ArrayList();
            List<UserInfoBean> listA = a(str);
            if (listA != null) {
                a(listA, arrayList);
                b(listA, arrayList);
                int iA = a(listA);
                if (iA > 15) {
                    al.d("[UserInfo] Upload user info too many times in 10 min: %d", Integer.valueOf(iA));
                    z2 = false;
                }
                if (arrayList.size() > 0) {
                    b(arrayList);
                }
                if (z2 && listA.size() != 0) {
                    al.c("[UserInfo] Upload user info(size: %d)", Integer.valueOf(listA.size()));
                    a(listA, z);
                    return;
                }
                al.c("[UserInfo] There is no user info in local database.", new Object[0]);
            }
            listA = new ArrayList<>();
            z2 = true;
            if (arrayList.size() > 0) {
            }
            if (z2) {
                al.c("[UserInfo] Upload user info(size: %d)", Integer.valueOf(listA.size()));
                a(listA, z);
                return;
            }
            al.c("[UserInfo] There is no user info in local database.", new Object[0]);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:43:0x0093 A[Catch: Exception -> 0x0081, TRY_ENTER, TRY_LEAVE, TryCatch #3 {Exception -> 0x0081, blocks: (B:43:0x0093, B:32:0x007d), top: B:51:0x0036 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean b(boolean z) {
        boolean z2 = true;
        if (!e) {
            return true;
        }
        File file = new File(this.a.getFilesDir(), "bugly_last_us_up_tm");
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (z) {
            am.a(file, String.valueOf(jCurrentTimeMillis), 1024L, false);
            return true;
        }
        if (!file.exists()) {
            am.a(file, String.valueOf(jCurrentTimeMillis), 1024L, false);
        } else {
            BufferedReader bufferedReaderA = ap.a(file);
            try {
                if (bufferedReaderA != null) {
                    try {
                        try {
                            long jLongValue = Long.valueOf(bufferedReaderA.readLine().trim()).longValue();
                            if (!(jCurrentTimeMillis >= jLongValue && jCurrentTimeMillis - jLongValue <= 86400000) || jCurrentTimeMillis - jLongValue >= 300000) {
                                am.a(file, String.valueOf(jCurrentTimeMillis), 1024L, false);
                            } else {
                                z2 = false;
                            }
                        } catch (Throwable th) {
                            al.b(th);
                            am.a(file, String.valueOf(jCurrentTimeMillis), 1024L, false);
                            if (bufferedReaderA != null) {
                                bufferedReaderA.close();
                            }
                        }
                        if (bufferedReaderA != null) {
                            bufferedReaderA.close();
                        }
                    } catch (Throwable th2) {
                        if (bufferedReaderA != null) {
                            try {
                                bufferedReaderA.close();
                            } catch (Exception e2) {
                                al.a(e2);
                            }
                        }
                        throw th2;
                    }
                } else if (bufferedReaderA != null) {
                }
            } catch (Exception e3) {
                al.a(e3);
            }
        }
        return z2;
    }

    static void a(UserInfoBean userInfoBean) {
        aa aaVarB;
        if (userInfoBean == null || (aaVarB = aa.b()) == null) {
            return;
        }
        userInfoBean.j = aaVarB.d();
    }
}
