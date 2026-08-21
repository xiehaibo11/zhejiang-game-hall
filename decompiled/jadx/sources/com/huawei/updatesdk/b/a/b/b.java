package com.huawei.updatesdk.b.a.b;

import android.content.pm.PackageInfo;
import android.os.Build;
import android.util.ArrayMap;
import android.util.ArraySet;
import com.huawei.updatesdk.a.a.d.g;
import com.huawei.updatesdk.b.a.b.a;
import com.huawei.updatesdk.b.a.b.c;
import java.io.File;
import java.security.PublicKey;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class b {
    private static b b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map<String, a> f2315a = new HashMap();

    private b() {
    }

    public static synchronized b a() {
        if (b == null) {
            b = new b();
        }
        return b;
    }

    private static void a(a aVar) {
        a().f2315a.put(aVar.c(), aVar);
    }

    private static ArrayList<String> b(PackageInfo packageInfo) {
        ArraySet<String> arraySet;
        a aVar = new a();
        aVar.a(packageInfo.packageName);
        File file = new File(packageInfo.applicationInfo.sourceDir);
        if (!file.exists()) {
            return null;
        }
        aVar.a(file.lastModified());
        c.a aVarA = c.a(file);
        ArrayMap<String, ArraySet<PublicKey>> arrayMap = aVarA.f2316a;
        if (arrayMap == null || arrayMap.isEmpty() || (arraySet = aVarA.b) == null || arraySet.isEmpty()) {
            a(aVar);
            return null;
        }
        ArrayList<String> arrayList = new ArrayList<>();
        for (Map.Entry<String, ArraySet<PublicKey>> entry : aVarA.f2316a.entrySet()) {
            if (aVarA.b.contains(entry.getKey())) {
                Iterator<PublicKey> it = entry.getValue().iterator();
                while (it.hasNext()) {
                    arrayList.add(g.a(it.next().getEncoded()));
                }
            }
        }
        a.C0084a c0084a = new a.C0084a();
        c0084a.a(arrayList);
        aVar.a(c0084a);
        a(aVar);
        return arrayList;
    }

    public List<String> a(PackageInfo packageInfo) {
        String str;
        if (Build.VERSION.SDK_INT < 21 || packageInfo == null || (str = packageInfo.applicationInfo.sourceDir) == null) {
            return null;
        }
        long jLastModified = new File(str).lastModified();
        a aVar = a().f2315a.get(packageInfo.packageName);
        if (aVar == null || aVar.b() != jLastModified) {
            return b(packageInfo);
        }
        if (aVar.a() == null) {
            return null;
        }
        return aVar.a().a();
    }
}
