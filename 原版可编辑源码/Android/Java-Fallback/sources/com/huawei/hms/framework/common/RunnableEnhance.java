package com.huawei.hms.framework.common;

public class RunnableEnhance implements java.lang.Runnable {
    static final java.lang.String TRANCELOGO = " -->";
    private java.lang.String parentName;
    private java.lang.Runnable proxy;

    RunnableEnhance(java.lang.Runnable r2) {
            r1 = this;
            r1.<init>()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r0 = r0.getName()
            r1.parentName = r0
            r1.proxy = r2
            return
    }

    public java.lang.String getParentName() {
            r1 = this;
            java.lang.String r0 = r1.parentName
            return r0
    }

    @Override
    public void run() {
            r1 = this;
            java.lang.Runnable r0 = r1.proxy
            r0.run()
            return
    }
}
