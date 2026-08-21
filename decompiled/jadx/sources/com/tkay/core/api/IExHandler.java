package com.tkay.core.api;

import android.content.Context;
import com.tkay.core.c.a;
import com.tkay.core.common.f.h;
import com.tkay.core.common.f.i;
import com.tkay.core.common.g.b;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public interface IExHandler {
    boolean checkDebuggerDevice(Context context, String str);

    int checkDownloadType(h hVar, i iVar);

    TYEventInterface createDownloadListener(TYBaseAdAdapter tYBaseAdAdapter, BaseAd baseAd, TYEventInterface tYEventInterface);

    String fillCDataParam(String str);

    void fillRequestData(JSONObject jSONObject, a aVar);

    void fillRequestDeviceData(JSONObject jSONObject, int i);

    void fillTestDeviceData(JSONObject jSONObject, a aVar);

    String getUniqueId(Context context);

    void handleOfferClick(Context context, i iVar, h hVar, String str, String str2, Runnable runnable, b bVar);

    void initDeviceInfo(Context context);

    void openApkConfirmDialog(Context context, h hVar, i iVar, com.tkay.core.common.g.a aVar);
}
