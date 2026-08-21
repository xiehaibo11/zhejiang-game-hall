package com.huawei.hms.ui;

public abstract class AbstractPromptDialog extends com.huawei.hms.ui.AbstractDialog {
    public AbstractPromptDialog() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String onGetNegativeButtonString(android.content.Context r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String onGetTitleString(android.content.Context r2) {
            r1 = this;
            android.content.Context r0 = com.huawei.hms.utils.ResourceLoaderUtil.getmContext()
            if (r0 != 0) goto L9
            com.huawei.hms.utils.ResourceLoaderUtil.setmContext(r2)
        L9:
            java.lang.String r2 = "hms_bindfaildlg_title"
            java.lang.String r2 = com.huawei.hms.utils.ResourceLoaderUtil.getString(r2)
            return r2
    }
}
