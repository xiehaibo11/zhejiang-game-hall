package com.tkay.core.common.l;

public final class i {
    protected static com.tkay.core.common.l.i a;

    static {
            com.tkay.core.common.l.i r0 = new com.tkay.core.common.l.i
            r0.<init>()
            com.tkay.core.common.l.i.a = r0
            return
    }

    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.core.api.TYBaseAdAdapter a(com.tkay.core.common.f.aj r0) {
            java.lang.String r0 = r0.h()     // Catch: java.lang.Throwable -> L9
            com.tkay.core.api.TYBaseAdAdapter r0 = a(r0)     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    private static com.tkay.core.api.TYBaseAdAdapter a(java.lang.Class<? extends com.tkay.core.common.b.n> r2) {
            if (r2 != 0) goto L9
            java.lang.String r0 = "tkay"
            java.lang.String r1 = "can not find adapter"
            android.util.Log.w(r0, r1)
        L9:
            r0 = 0
            java.lang.Class[] r0 = (java.lang.Class[]) r0
            java.lang.reflect.Constructor r2 = r2.getDeclaredConstructor(r0)
            r0 = 1
            r2.setAccessible(r0)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object r2 = r2.newInstance(r0)
            com.tkay.core.api.TYBaseAdAdapter r2 = (com.tkay.core.api.TYBaseAdAdapter) r2
            return r2
    }

    public static com.tkay.core.api.TYBaseAdAdapter a(java.lang.String r3) {
            r0 = 0
            if (r3 == 0) goto L2a
            java.lang.Class r3 = java.lang.Class.forName(r3)
            java.lang.Class<com.tkay.core.api.TYBaseAdAdapter> r1 = com.tkay.core.api.TYBaseAdAdapter.class
            java.lang.Class r3 = r3.asSubclass(r1)
            if (r3 != 0) goto L16
            java.lang.String r1 = "tkay"
            java.lang.String r2 = "can not find adapter"
            android.util.Log.w(r1, r2)
        L16:
            java.lang.Class[] r0 = (java.lang.Class[]) r0
            java.lang.reflect.Constructor r3 = r3.getDeclaredConstructor(r0)
            r0 = 1
            r3.setAccessible(r0)
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Object r3 = r3.newInstance(r0)
            com.tkay.core.api.TYBaseAdAdapter r3 = (com.tkay.core.api.TYBaseAdAdapter) r3
            return r3
        L2a:
            return r0
    }
}
