package com.bianfeng.h5library;

class H5LoginEventUtils {
    private com.bianfeng.h5library.H5LoginEvent.AppEventsBean appEventsBean;
    private com.bianfeng.h5library.H5LoginEvent baseRequestBean;
    private java.lang.String uniqueId;

    public H5LoginEventUtils(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r7 = this;
            r7.<init>()
            com.bianfeng.h5library.H5LoginEvent$AppEventsBean r6 = new com.bianfeng.h5library.H5LoginEvent$AppEventsBean
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r7.appEventsBean = r6
            java.lang.String r8 = r6.toString()
            java.lang.String r8 = com.bianfeng.h5library.utils.H5libMd5Utils.md5(r8)
            r7.uniqueId = r8
            com.bianfeng.h5library.H5LoginEvent$AppEventsBean r9 = r7.appEventsBean
            r9.setUniqueId(r8)
            com.bianfeng.h5library.H5LoginEvent r8 = new com.bianfeng.h5library.H5LoginEvent
            com.bianfeng.h5library.H5LoginEvent$AppEventsBean r9 = r7.appEventsBean
            r8.<init>(r13, r9)
            r7.baseRequestBean = r8
            return
    }

    public java.lang.String toString() {
            r1 = this;
            com.bianfeng.h5library.H5LoginEvent r0 = r1.baseRequestBean
            java.lang.String r0 = r0.toString()
            return r0
    }
}
