package com.tkay.nativead.api;

public class TYNativePrepareExInfo extends com.tkay.nativead.api.TYNativePrepareInfo {
    java.util.List<android.view.View> creativeClickViewList;

    public TYNativePrepareExInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<android.view.View> getCreativeClickViewList() {
            r2 = this;
            java.util.List<android.view.View> r0 = r2.creativeClickViewList
            if (r0 == 0) goto Lf
            android.view.View r0 = r2.closeView
            if (r0 == 0) goto Lf
            java.util.List<android.view.View> r0 = r2.creativeClickViewList
            android.view.View r1 = r2.closeView
            r0.remove(r1)
        Lf:
            java.util.List<android.view.View> r0 = r2.creativeClickViewList
            return r0
    }

    public void setCreativeClickViewList(java.util.List<android.view.View> r1) {
            r0 = this;
            r0.creativeClickViewList = r1
            return
    }
}
