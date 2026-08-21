package com.tkay.nativead.api;

import android.view.View;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class TYNativePrepareExInfo extends TYNativePrepareInfo {
    List<View> creativeClickViewList;

    public List<View> getCreativeClickViewList() {
        if (this.creativeClickViewList != null && this.closeView != null) {
            this.creativeClickViewList.remove(this.closeView);
        }
        return this.creativeClickViewList;
    }

    public void setCreativeClickViewList(List<View> list) {
        this.creativeClickViewList = list;
    }
}
