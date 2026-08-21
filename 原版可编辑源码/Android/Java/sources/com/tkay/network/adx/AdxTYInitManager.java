package com.tkay.network.adx;

import android.content.Context;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYInitMediation;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class AdxTYInitManager extends TYInitMediation {
    private static volatile AdxTYInitManager a;

    @Override
    public String getNetworkName() {
        return "Adx";
    }

    @Override
    public String getNetworkSDKClass() {
        return "com.tkay.core.api.TYSDK";
    }

    @Override
    public void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback) {
    }

    public static AdxTYInitManager getInstance() {
        if (a == null) {
            synchronized (AdxTYInitManager.class) {
                if (a == null) {
                    a = new AdxTYInitManager();
                }
            }
        }
        return a;
    }

    @Override
    public List getResourceStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("tkay_myoffer_full_screen");
        arrayList.add("tkay_myoffer_splash_ad_layout_asseblem_vertical_port");
        return arrayList;
    }
}
