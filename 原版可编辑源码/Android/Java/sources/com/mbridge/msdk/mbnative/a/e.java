package com.mbridge.msdk.mbnative.a;

import com.mbridge.msdk.out.Campaign;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class e extends b<String, List<Campaign>> {
    private static Map<String, Map<Long, Object>> a = new HashMap();

    @Override
    public final void a(String str, Campaign campaign, String str2) {
    }

    @Override
    public final void a(String str, List<Campaign> list) {
        a(str, list, a);
    }

    @Override
    public final void a(String str, List<Campaign> list, String str2) {
    }

    @Override
    public final List<Campaign> b(String str, int i) {
        return a(str, a, i);
    }

    @Override
    public final void a(String str) {
        try {
            a(str, a);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
