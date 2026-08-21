package com.tkay.basead;

import android.text.TextUtils;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.z;
import java.util.HashMap;
import java.util.Map;

public final class b {
    public static Map<String, Object> a(com.tkay.basead.d.b bVar) {
        if (bVar != null) {
            return a(bVar.e());
        }
        return null;
    }

    public static Map<String, Object> a(com.tkay.basead.f.c cVar) {
        if (cVar != null) {
            return a(cVar.e());
        }
        return null;
    }

    public static Map<String, Object> a(h hVar) {
        if (hVar == null) {
            return null;
        }
        HashMap map = new HashMap();
        map.put("offer_id", hVar.p());
        map.put("creative_id", hVar.q());
        map.put(TYAdConst.NETWORK_CUSTOM_KEY.IS_DEEPLINK_OFFER, Integer.valueOf((TextUtils.isEmpty(hVar.o()) && TextUtils.isEmpty(hVar.z())) ? 0 : 1));
        if (hVar instanceof z) {
            map.put("dsp_id", ((z) hVar).T());
        }
        return map;
    }
}
