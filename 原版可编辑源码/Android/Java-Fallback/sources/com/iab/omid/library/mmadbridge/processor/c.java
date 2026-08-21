package com.iab.omid.library.mmadbridge.processor;

public class c implements com.iab.omid.library.mmadbridge.processor.a {
    private final com.iab.omid.library.mmadbridge.processor.a a;

    public c(com.iab.omid.library.mmadbridge.processor.a r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    java.util.ArrayList<android.view.View> a() {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.iab.omid.library.mmadbridge.internal.c r1 = com.iab.omid.library.mmadbridge.internal.c.c()
            if (r1 == 0) goto L68
            java.util.Collection r1 = r1.a()
            int r2 = r1.size()
            int r2 = r2 * 2
            int r2 = r2 + 3
            java.util.IdentityHashMap r3 = new java.util.IdentityHashMap
            r3.<init>(r2)
            java.util.Iterator r1 = r1.iterator()
        L20:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L68
            java.lang.Object r2 = r1.next()
            com.iab.omid.library.mmadbridge.adsession.a r2 = (com.iab.omid.library.mmadbridge.adsession.a) r2
            android.view.View r2 = r2.c()
            if (r2 == 0) goto L20
            boolean r4 = com.iab.omid.library.mmadbridge.utils.h.e(r2)
            if (r4 == 0) goto L20
            android.view.View r2 = r2.getRootView()
            if (r2 == 0) goto L20
            boolean r4 = r3.containsKey(r2)
            if (r4 != 0) goto L20
            r3.put(r2, r2)
            float r4 = com.iab.omid.library.mmadbridge.utils.h.c(r2)
            int r5 = r0.size()
        L4f:
            if (r5 <= 0) goto L64
            int r6 = r5 + (-1)
            java.lang.Object r6 = r0.get(r6)
            android.view.View r6 = (android.view.View) r6
            float r6 = com.iab.omid.library.mmadbridge.utils.h.c(r6)
            int r6 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r6 <= 0) goto L64
            int r5 = r5 + (-1)
            goto L4f
        L64:
            r0.add(r5, r2)
            goto L20
        L68:
            return r0
    }

    @Override
    public org.json.JSONObject a(android.view.View r2) {
            r1 = this;
            r2 = 0
            org.json.JSONObject r2 = com.iab.omid.library.mmadbridge.utils.c.a(r2, r2, r2, r2)
            com.iab.omid.library.mmadbridge.adsession.OutputDeviceStatus r0 = com.iab.omid.library.mmadbridge.utils.e.a()
            com.iab.omid.library.mmadbridge.utils.c.a(r2, r0)
            return r2
    }

    @Override
    public void a(android.view.View r2, org.json.JSONObject r3, com.iab.omid.library.mmadbridge.processor.a.a r4, boolean r5, boolean r6) {
            r1 = this;
            java.util.ArrayList r2 = r1.a()
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r5 = r2.hasNext()
            if (r5 == 0) goto L1a
            java.lang.Object r5 = r2.next()
            android.view.View r5 = (android.view.View) r5
            com.iab.omid.library.mmadbridge.processor.a r0 = r1.a
            r4.a(r5, r0, r3, r6)
            goto L8
        L1a:
            return
    }
}
