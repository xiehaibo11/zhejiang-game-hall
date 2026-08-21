package com.kwad.components.offline.tk;

import android.content.Context;
import com.kwad.components.core.offline.init.DefaultOfflineCompo;
import com.kwad.components.offline.api.tk.IOfflineCompoTachikomaView;
import com.kwad.components.offline.api.tk.ITkOfflineCompo;
import com.kwad.components.offline.api.tk.TKDownloadListener;
import com.kwad.components.offline.api.tk.model.StyleTemplate;
import com.kwad.components.offline.tk.a.g;
import com.kwad.sdk.components.l;
import org.json.JSONObject;

public class TkCompoImpl extends DefaultOfflineCompo implements com.kwad.components.core.offline.api.b.c {
    private final ITkOfflineCompo mOfflineCompo;

    public TkCompoImpl(ITkOfflineCompo iTkOfflineCompo) {
        super(iTkOfflineCompo);
        this.mOfflineCompo = iTkOfflineCompo;
    }

    @Override
    public StyleTemplate checkStyleTemplateById(Context context, String str, String str2, String str3, int i) {
        return this.mOfflineCompo.checkStyleTemplateById(context, str, str2, str3, i);
    }

    @Override
    public Class getComponentsType() {
        return TkCompoImpl.class;
    }

    @Override
    public String getJsBaseDir(Context context, String str) {
        return this.mOfflineCompo.getJsBaseDir(context, str);
    }

    @Override
    public ITkOfflineCompo.TKState getState() {
        return this.mOfflineCompo.getState();
    }

    public String getTKVersion() {
        return this.mOfflineCompo.getTKVersion();
    }

    @Override
    public l getView(Context context, String str, int i, int i2) {
        IOfflineCompoTachikomaView view = this.mOfflineCompo.getView(context, str, i, i2);
        if (view == null) {
            return null;
        }
        return new g(view);
    }

    @Override
    public void init(Context context) {
    }

    @Override
    public void loadTkFileByTemplateId(Context context, String str, String str2, String str3, int i, TKDownloadListener tKDownloadListener) {
        this.mOfflineCompo.loadTkFileByTemplateId(context, str, str2, str3, i, tKDownloadListener);
    }

    public void onConfigRefresh(Context context, JSONObject jSONObject) {
        this.mOfflineCompo.onConfigRefresh(context, jSONObject);
    }

    @Override
    public void onDestroy() {
        this.mOfflineCompo.onDestroy();
    }
}
