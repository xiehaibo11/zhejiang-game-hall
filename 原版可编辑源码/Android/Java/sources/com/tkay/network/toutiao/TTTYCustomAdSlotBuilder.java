package com.tkay.network.toutiao;

import android.text.TextUtils;
import android.util.Log;
import com.bykv.vk.openvk.TTAdLoadType;
import com.bykv.vk.openvk.VfSlot;
import com.tkay.core.api.TYSDK;
import com.tkay.core.common.b.f;
import java.util.Map;
import org.json.JSONObject;

public class TTTYCustomAdSlotBuilder extends VfSlot.Builder {
    private final String a = getClass().getSimpleName();

    private TTTYCustomAdSlotBuilder() {
    }

    public TTTYCustomAdSlotBuilder(String str, Map<String, Object> map, Map<String, Object> map2) {
        setCodeId(str);
        try {
            if (map.containsKey(f.k.k)) {
                int iIntValue = ((Integer) map.get(f.k.k)).intValue();
                if (TYSDK.isNetworkLogDebug()) {
                    Log.i(this.a, "adLoadSeq: ".concat(String.valueOf(iIntValue)));
                }
                setAdloadSeq(iIntValue);
            }
        } catch (Throwable unused) {
        }
        try {
            if (map.containsKey(f.k.l)) {
                String strOptString = new JSONObject((String) map.get(f.k.l)).optString("slot_id", "");
                if (!TextUtils.isEmpty(strOptString)) {
                    if (TYSDK.isNetworkLogDebug()) {
                        Log.i(this.a, "primeRit: ".concat(String.valueOf(strOptString)));
                    }
                    setPrimeRit(strOptString);
                }
            }
        } catch (Throwable unused2) {
        }
        if (map2 == null || !map2.containsKey(TTTYConst.AD_LOAD_TYPE)) {
            return;
        }
        Object obj = map2.get(TTTYConst.AD_LOAD_TYPE);
        if (obj instanceof TTAdLoadType) {
            setAdLoadType((TTAdLoadType) obj);
        }
    }
}
