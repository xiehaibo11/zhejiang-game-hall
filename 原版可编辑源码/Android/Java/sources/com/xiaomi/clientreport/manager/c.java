package com.xiaomi.clientreport.manager;

import com.xiaomi.clientreport.data.PerfClientReport;

class c implements Runnable {
    final PerfClientReport a;
    final a a;

    c(a aVar, PerfClientReport perfClientReport) {
        this.a = aVar;
        this.a = perfClientReport;
    }

    /*  JADX ERROR: JadxRuntimeException in pass: InlineMethods
        jadx.core.utils.exceptions.JadxRuntimeException: Failed to process method for inline: com.xiaomi.clientreport.manager.a.a(com.xiaomi.clientreport.manager.a, com.xiaomi.clientreport.data.PerfClientReport):void
        	at jadx.core.dex.visitors.InlineMethods.processInvokeInsn(InlineMethods.java:80)
        	at jadx.core.dex.visitors.InlineMethods.visit(InlineMethods.java:50)
        Caused by: java.lang.ArrayIndexOutOfBoundsException: Index 26 out of bounds for length 25
        	at java.base/java.util.ArrayList.add(Unknown Source)
        */
    @Override
    public void run() {
        /*
            r2 = this;
            com.xiaomi.clientreport.manager.a r0 = r2.a
            com.xiaomi.clientreport.data.PerfClientReport r1 = r2.a
            com.xiaomi.clientreport.manager.a.a(r0, r1)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.clientreport.manager.c.run():void");
    }
}
