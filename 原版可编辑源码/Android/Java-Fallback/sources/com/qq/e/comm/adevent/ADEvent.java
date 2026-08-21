package com.qq.e.comm.adevent;

public class ADEvent {
    private final int a;
    private final java.lang.Object[] b;

    public ADEvent(int r2, java.lang.Object... r3) {
            r1 = this;
            r1.<init>()
            r1.a = r2
            r1.b = r3
            r3 = 100
            if (r2 >= r3) goto L1f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "EventId 错误"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r1.a(r2)
        L1f:
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            com.qq.e.comm.util.GDTLogger.e(r1)
            return
    }

    public <T> T getParam(int r4, java.lang.Class<T> r5) {
            r3 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.Object[] r1 = r3.b
            if (r1 == 0) goto L63
            int r2 = r1.length
            if (r2 > r4) goto Lc
            goto L63
        Lc:
            r2 = r1[r4]
            if (r2 != 0) goto L27
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "ADEvent 参数为空,type:"
            r4.append(r5)
            int r5 = r3.a
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qq.e.comm.util.GDTLogger.e(r4)
            return r0
        L27:
            r4 = r1[r4]
            boolean r4 = r5.isInstance(r4)
            if (r4 != 0) goto L62
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "ADEvent"
            r4.append(r1)
            int r1 = r3.a
            r4.append(r1)
            java.lang.String r1 = " 参数类型错误,期望类型"
            r4.append(r1)
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            java.lang.String r5 = "实际类型 "
            r4.append(r5)
            java.lang.Class r5 = r2.getClass()
            java.lang.String r5 = r5.getName()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qq.e.comm.util.GDTLogger.e(r4)
            return r0
        L62:
            return r2
        L63:
            return r0
    }

    public <T> T getParam(java.lang.Class<T> r2) {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.getParam(r0, r2)
            return r2
    }

    public int getType() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
