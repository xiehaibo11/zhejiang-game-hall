package com.kwad.components.offline.api.tk;

import android.content.Context;
import com.kwad.components.offline.api.IOfflineCompo;
import com.kwad.components.offline.api.InitCallBack;
import com.kwad.components.offline.api.tk.model.StyleTemplate;
import com.kwad.sdk.api.SdkConfig;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public interface ITkOfflineCompo extends IOfflineCompo {
    public static final String IMPL = "com.kwad.tachikoma.TkOfflineCompoImpl";
    public static final String PACKAGE_NAME = "com.kwad.components.tachikoma";

    public enum TKState {
        READY,
        SO_FAIL
    }

    StyleTemplate checkStyleTemplateById(Context context, String str, String str2, String str3, int i);

    String getJsBaseDir(Context context, String str);

    TKState getState();

    String getTKVersion();

    IOfflineCompoTachikomaView getView(Context context, String str, int i, int i2);

    void initReal(Context context, SdkConfig sdkConfig, ITkOfflineCompoInitConfig iTkOfflineCompoInitConfig, InitCallBack initCallBack);

    void loadTkFileByTemplateId(Context context, String str, String str2, String str3, int i, TKDownloadListener tKDownloadListener);

    void onConfigRefresh(Context context, JSONObject jSONObject);

    void onDestroy();
}
