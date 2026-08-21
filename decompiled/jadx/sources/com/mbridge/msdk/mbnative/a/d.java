package com.mbridge.msdk.mbnative.a;

import com.mbridge.msdk.out.Campaign;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: compiled from: FaceBookCache.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d extends b<String, List<Campaign>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, Map<Long, Object>> f3745a = new HashMap();

    @Override // com.mbridge.msdk.mbnative.a.b
    public final void a(String str, Campaign campaign, String str2) {
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* bridge */ /* synthetic */ void a(String str, List<Campaign> list) {
        a(str, list, f3745a);
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* bridge */ /* synthetic */ void a(String str, List<Campaign> list, String str2) {
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final /* synthetic */ List<Campaign> b(String str, int i) {
        return a(str, f3745a, i);
    }

    @Override // com.mbridge.msdk.mbnative.a.b
    public final void a(String str) {
        try {
            a(str, f3745a);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
