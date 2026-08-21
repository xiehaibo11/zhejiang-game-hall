package com.tkay.network.adx;

import android.content.Context;
import com.tkay.core.api.MediationInitCallback;
import com.tkay.core.api.TYInitMediation;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class AdxTYInitManager extends TYInitMediation {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile AdxTYInitManager f7530a;

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkName() {
        return "Adx";
    }

    @Override // com.tkay.core.api.TYInitMediation
    public String getNetworkSDKClass() {
        return "com.tkay.core.api.TYSDK";
    }

    @Override // com.tkay.core.api.TYInitMediation
    public void initSDK(Context context, Map<String, Object> map, MediationInitCallback mediationInitCallback) {
    }

    public static AdxTYInitManager getInstance() {
        if (f7530a == null) {
            synchronized (AdxTYInitManager.class) {
                if (f7530a == null) {
                    f7530a = new AdxTYInitManager();
                }
            }
        }
        return f7530a;
    }

    @Override // com.tkay.core.api.TYInitMediation
    public List getResourceStatus() {
        ArrayList arrayList = new ArrayList();
        arrayList.add("tkay_myoffer_full_screen");
        arrayList.add("tkay_myoffer_splash_ad_layout_asseblem_vertical_port");
        return arrayList;
    }
}
