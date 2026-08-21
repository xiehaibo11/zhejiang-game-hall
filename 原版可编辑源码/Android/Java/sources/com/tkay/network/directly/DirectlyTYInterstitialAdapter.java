package com.tkay.network.directly;

import android.app.Activity;
import android.content.Context;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.z;
import com.tkay.network.adx.AdxTYInterstitialAdapter;
import java.util.Map;

public class DirectlyTYInterstitialAdapter extends AdxTYInterstitialAdapter {
    private int d = 0;

    @Override
    public String getNetworkName() {
        return "Directly";
    }

    @Override
    public void loadCustomNetworkAd(Context context, Map<String, Object> map, Map<String, Object> map2) {
        Object obj;
        if (map.containsKey("unit_type") && (obj = map.get("unit_type")) != null) {
            this.d = Integer.parseInt(obj.toString());
        }
        super.loadCustomNetworkAd(context, map, map2);
    }

    @Override
    public void show(Activity activity) {
        fixDirectlyInterstitial();
        super.show(activity);
    }

    public void fixDirectlyInterstitial() {
        h hVarE;
        if (this.b == null || (hVarE = this.b.e()) == null) {
            return;
        }
        hVarE.d(this.d == 0 ? 2 : 1);
        z zVar = (z) hVarE;
        if (zVar.Y() == 5 && this.d == 0) {
            zVar.j(3);
        }
    }
}
