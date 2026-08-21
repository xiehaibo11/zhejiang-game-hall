package com.kuaishou.weapon.p0;

import android.accounts.NetworkErrorException;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import com.qihoo360.i.IPluginManager;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class u implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f2793a = 1;
    public static final int b = 2;
    public static final int c = 4;
    public static final int d = 0;
    public static final int e = 8;
    public static final int f = 1;
    public static final int g = 3;
    public static final int h = 4;
    private static long o;
    private Context j;
    private q k;
    private t l;
    private File m;
    private dp n;
    private int p;
    private boolean r;
    private int q = 0;
    List<Integer> i = new ArrayList();
    private Map<Integer, a> s = new HashMap();

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f2794a;

        public a(int i) {
            this.f2794a = i;
        }
    }

    public u(Context context, int i, boolean z) {
        this.p = 0;
        this.r = false;
        this.j = context;
        this.k = q.a(context);
        this.l = t.a(context);
        this.n = dp.a(context);
        this.m = new File(context.getFilesDir(), bh.k);
        this.p = i;
        this.r = z;
    }

    private void a(s sVar) {
        File file;
        Object obj;
        long length;
        Object obj2;
        try {
            if (!TextUtils.isEmpty(sVar.j) && sVar.j.length() >= 10) {
                if (!this.m.exists()) {
                    this.m.mkdir();
                }
                File file2 = new File(this.m, sVar.f2790a + Constants.ACCEPT_TIME_SEPARATOR_SERVER + sVar.d + bh.k);
                File file3 = new File(this.m, sVar.f2790a + Constants.ACCEPT_TIME_SEPARATOR_SERVER + sVar.d + ".zip");
                boolean zA = l.a(this.j).a(sVar.i, file2);
                if (!zA) {
                    zA = l.a(this.j).a(sVar.i, file2);
                }
                if (zA) {
                    if (file3.exists()) {
                        file3.delete();
                    }
                    int iC = b.c(file2.getAbsolutePath(), file3.getAbsolutePath(), c.a("a3NyaXNrY3RsYnVzaW5zc3Z4cHprd3NwYWlvcXBrc3M=".getBytes("utf-8"), 2));
                    if (iC != 0) {
                        long length2 = file3.exists() ? file3.length() : -1L;
                        if (file3.exists()) {
                            file3.delete();
                        }
                        HashMap map = new HashMap();
                        file = file3;
                        map.put("e", cj.p);
                        StringBuilder sb = new StringBuilder();
                        obj2 = "e";
                        sb.append(sVar.f2790a);
                        map.put(PushConstants.URI_PACKAGE_NAME, sb.toString());
                        map.put("pv", sVar.d);
                        map.put("m", sVar.j);
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(length2);
                        map.put("len", sb2.toString());
                        map.put("l", "T");
                        bg.a(this.j, "1002001", map);
                        zA = false;
                    } else {
                        file = file3;
                        obj2 = "e";
                    }
                    if (iC == 0 && file2.exists()) {
                        file2.delete();
                    }
                    obj = obj2;
                } else {
                    file = file3;
                    HashMap map2 = new HashMap();
                    StringBuilder sb3 = new StringBuilder();
                    sb3.append(sVar.f2790a);
                    map2.put(PushConstants.URI_PACKAGE_NAME, sb3.toString());
                    map2.put("pv", sVar.d);
                    map2.put("m", sVar.j);
                    obj = "e";
                    map2.put(obj, "download fail");
                    map2.put("l", "T");
                    bg.a(this.j, "1002001", map2);
                    this.s.put(Integer.valueOf(sVar.f2790a), new a(3));
                }
                String strA = f.a(file);
                if (zA && sVar.j.equals(strA)) {
                    dn.a(file.getAbsolutePath(), Boolean.TRUE);
                    sVar.e = file.getAbsolutePath();
                    if (this.k.a(sVar, (String) null, (String) null)) {
                        if (this.s != null && !this.s.containsKey(Integer.valueOf(sVar.f2790a))) {
                            this.s.put(Integer.valueOf(sVar.f2790a), new a(1));
                        }
                        this.n.a(dp.b, System.currentTimeMillis(), true);
                        return;
                    }
                    if (this.s != null && !this.s.containsKey(Integer.valueOf(sVar.f2790a))) {
                        this.s.put(Integer.valueOf(sVar.f2790a), new a(4));
                    }
                    this.k.a(sVar.f2790a, sVar.d, (PackageInfo) null);
                    return;
                }
                if (file2.exists()) {
                    length = file2.length();
                    file2.delete();
                } else {
                    length = -1;
                }
                this.k.a(sVar.f2790a, sVar.d, (PackageInfo) null);
                HashMap map3 = new HashMap();
                map3.put(obj, cj.q);
                map3.put("ret", zA ? "1" : "0");
                map3.put("am", sVar.j);
                map3.put("acm", strA);
                map3.put("p", file.getAbsolutePath());
                StringBuilder sb4 = new StringBuilder();
                sb4.append(length);
                map3.put("len", sb4.toString());
                map3.put("l", "T");
                bg.a(this.j, "1002001", map3);
                return;
            }
            this.k.a(sVar.f2790a, sVar.d, (PackageInfo) null);
        } catch (Throwable unused) {
            this.k.a(sVar.f2790a, sVar.d, (PackageInfo) null);
        }
    }

    public JSONObject a() {
        try {
            String str = ct.f2745a + ct.g;
            String strA = cu.a(this.j);
            if (!TextUtils.isEmpty(strA)) {
                str = str + "?" + strA;
            }
            JSONObject jSONObject = new JSONObject();
            JSONObject jSONObjectC = cu.c(this.j);
            if (jSONObjectC != null) {
                jSONObject.put("data", new bm(this.j).c(jSONObjectC.toString()));
            }
            l lVarA = l.a(this.j);
            m mVar = new m(str, jSONObject);
            mVar.a(WeaponHI.cookieData);
            mVar.b(WeaponHI.encryENV);
            JSONObject jSONObject2 = new JSONObject(lVarA.a(mVar));
            int iOptInt = jSONObject2.optInt("result", 0);
            if (iOptInt != 1) {
                if (iOptInt != -7) {
                    return null;
                }
                dp.a(this.j).a(dp.f2772a, 1, false);
                return null;
            }
            String strA2 = new bm(this.j).a(jSONObject2.getString("antispamPluginManageRsp"));
            if (TextUtils.isEmpty(strA2)) {
                if (this.q == 0) {
                    this.q = 8;
                }
                throw new NetworkErrorException("kuaishou risk pluginloader response is null");
            }
            JSONObject jSONObject3 = new JSONObject(strA2);
            if (jSONObject3.optInt("status", 0) == 1) {
                return jSONObject3.optJSONObject(IPluginManager.KEY_PLUGIN);
            }
            if (this.n == null) {
                return null;
            }
            this.n.a(dp.b, System.currentTimeMillis(), true);
            return null;
        } catch (Exception unused) {
            return null;
        }
    }

    @Override // java.lang.Runnable
    public void run() {
        Iterator<String> it;
        JSONObject jSONObject;
        boolean z;
        String str;
        try {
            synchronized (u.class) {
                try {
                    if (this.p == 1 || this.p == 2 || this.p == 4 || this.r || System.currentTimeMillis() - o >= 300000) {
                        this.l.d();
                        o = System.currentTimeMillis();
                        if ((System.currentTimeMillis() - this.n.a(dp.b)) - (((long) this.n.a(dp.c, 6)) * 3600000) > 0) {
                            List<s> listA = this.l.a();
                            ArrayList arrayList = new ArrayList();
                            ArrayList arrayList2 = new ArrayList();
                            ArrayList<s> arrayList3 = new ArrayList();
                            ArrayList arrayList4 = new ArrayList();
                            JSONObject jSONObjectA = a();
                            if (jSONObjectA == null) {
                                throw new Exception("pluginJsonObject is null ");
                            }
                            boolean z2 = false;
                            try {
                                boolean zB = dm.b(this.j);
                                Iterator<String> itKeys = jSONObjectA.keys();
                                HashSet hashSet = new HashSet();
                                boolean z3 = false;
                                while (itKeys.hasNext()) {
                                    String next = itKeys.next();
                                    if (zB && next.endsWith("64")) {
                                        if (next.length() > 3) {
                                            hashSet.add(next.substring(0, next.length() - 3));
                                            str = next.substring(0, next.length() - 3) + ".32";
                                            hashSet.add(str);
                                            z3 = true;
                                        } else {
                                            z3 = true;
                                        }
                                    } else if (zB || !next.endsWith("32")) {
                                        if (zB && next.endsWith("v8")) {
                                            if (next.length() > 3) {
                                                hashSet.add(next.substring(0, next.length() - 3));
                                                str = next.substring(0, next.length() - 3) + ".v7";
                                                hashSet.add(str);
                                                z3 = true;
                                            } else {
                                                z3 = true;
                                            }
                                        } else if (!zB && next.endsWith("v7")) {
                                            if (next.length() > 3) {
                                                hashSet.add(next.substring(0, next.length() - 3));
                                                hashSet.add(next.substring(0, next.length() - 3) + ".v8");
                                            }
                                            z3 = true;
                                        }
                                    } else if (next.length() > 3) {
                                        hashSet.add(next.substring(0, next.length() - 3));
                                        str = next.substring(0, next.length() - 3) + ".64";
                                        hashSet.add(str);
                                        z3 = true;
                                    } else {
                                        z3 = true;
                                    }
                                }
                                if (z3) {
                                    Iterator it2 = hashSet.iterator();
                                    while (it2.hasNext()) {
                                        jSONObjectA.remove((String) it2.next());
                                    }
                                }
                                z2 = z3;
                            } catch (Throwable unused) {
                            }
                            Iterator<String> itKeys2 = jSONObjectA.keys();
                            while (itKeys2.hasNext()) {
                                String next2 = itKeys2.next();
                                s sVarA = o.a(jSONObjectA.optJSONObject(next2));
                                if (sVarA != null) {
                                    if (z2 && !sVarA.y && (next2.endsWith("32") || next2.endsWith("64") || next2.endsWith("v7") || next2.endsWith("v8"))) {
                                        sVarA.y = true;
                                    }
                                    if (sVarA.v) {
                                        arrayList4.add(next2);
                                    }
                                    if (!sVarA.y) {
                                        arrayList3.add(sVarA);
                                    }
                                    int iIndexOf = listA.indexOf(sVarA);
                                    if (iIndexOf < 0 || !sVarA.y) {
                                        it = itKeys2;
                                        jSONObject = jSONObjectA;
                                        z = z2;
                                        if (sVarA.y) {
                                            arrayList2.add(sVarA);
                                        }
                                    } else {
                                        s sVar = listA.get(iIndexOf);
                                        if (dn.b(sVarA.d, sVar.d)) {
                                            if (sVarA.x != sVar.x) {
                                                this.l.c(sVarA.f2790a, sVarA.x);
                                            }
                                            if (!this.l.d(sVarA.f2790a)) {
                                                arrayList2.add(sVarA);
                                            }
                                            it = itKeys2;
                                            jSONObject = jSONObjectA;
                                            z = z2;
                                        } else {
                                            jSONObject = jSONObjectA;
                                            z = z2;
                                            it = itKeys2;
                                            this.n.a(dp.b, System.currentTimeMillis(), true);
                                            if (sVarA.x != sVar.x) {
                                                this.l.c(sVarA.f2790a, sVarA.x);
                                            }
                                            arrayList.add(sVarA);
                                        }
                                        listA.remove(iIndexOf);
                                    }
                                    jSONObjectA = jSONObject;
                                    z2 = z;
                                    itKeys2 = it;
                                }
                            }
                            for (s sVar2 : listA) {
                                if (!arrayList4.contains(sVar2.c)) {
                                    if (this.i != null) {
                                        this.i.add(Integer.valueOf(sVar2.f2790a));
                                    }
                                    this.k.a(sVar2.c);
                                }
                            }
                            for (s sVar3 : arrayList3) {
                                if (!arrayList4.contains(sVar3.c)) {
                                    if (this.i != null) {
                                        this.i.add(Integer.valueOf(sVar3.f2790a));
                                    }
                                    this.k.a(sVar3.c);
                                }
                            }
                            ArrayList<s> arrayList5 = new ArrayList();
                            if (arrayList2.size() != 0) {
                                arrayList5.addAll(arrayList2);
                            }
                            if (arrayList.size() != 0) {
                                arrayList5.addAll(arrayList);
                            }
                            for (s sVar4 : arrayList5) {
                                if (sVar4 != null) {
                                    if (arrayList.contains(sVar4)) {
                                        this.k.a(sVar4.f2790a, sVar4.d, (PackageInfo) null);
                                    } else if (arrayList2.contains(sVar4)) {
                                        a(sVar4);
                                    }
                                }
                            }
                        } else {
                            this.k.c();
                            this.l.b();
                        }
                    }
                } finally {
                    WeaponHI.iD();
                }
            }
        } catch (Throwable unused2) {
            this.k.c();
            this.l.b();
        }
    }
}
