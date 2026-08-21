package com.huawei.hms.framework.network.grs;

import android.content.Context;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, d> f2080a = new ConcurrentHashMap(16);
    private static final Object b = new Object();

    public static d a(GrsBaseInfo grsBaseInfo, Context context) {
        synchronized (b) {
            int iUniqueCode = grsBaseInfo.uniqueCode();
            d dVar = f2080a.get(context.getPackageName() + iUniqueCode);
            if (dVar == null) {
                d dVar2 = new d(context, grsBaseInfo);
                f2080a.put(context.getPackageName() + iUniqueCode, dVar2);
                return dVar2;
            }
            if (dVar.a((Object) new d(grsBaseInfo))) {
                return dVar;
            }
            d dVar3 = new d(context, grsBaseInfo);
            f2080a.put(context.getPackageName() + iUniqueCode, dVar3);
            return dVar3;
        }
    }
}
