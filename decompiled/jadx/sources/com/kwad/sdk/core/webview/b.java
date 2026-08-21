package com.kwad.sdk.core.webview;

import android.view.ViewGroup;
import android.webkit.WebView;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.utils.af;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class b {
    public ViewGroup MT;
    public WebView Ms;
    public com.kwad.sdk.widget.e aye;
    public af ayf;
    public boolean ayg = true;
    public boolean ayh = true;
    private List<AdTemplate> ayi = null;
    public JSONObject mReportExtData;
    public int mScreenOrientation;

    public final List<AdTemplate> DX() {
        return this.ayi;
    }

    public final boolean DY() {
        List<AdTemplate> list = this.ayi;
        return list == null || list.size() == 0;
    }

    public final AdTemplate getAdTemplate() {
        List<AdTemplate> list = this.ayi;
        if (list == null || list.size() == 0) {
            return null;
        }
        return this.ayi.get(0);
    }

    public final void setAdTemplate(AdTemplate adTemplate) {
        if (adTemplate == null) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        this.ayi = arrayList;
        arrayList.add(adTemplate);
    }

    public final void setAdTemplateList(List<AdTemplate> list) {
        ArrayList arrayList = new ArrayList(list.size());
        Iterator<AdTemplate> it = list.iterator();
        while (it.hasNext()) {
            arrayList.add(it.next());
        }
        this.ayi = arrayList;
    }
}
