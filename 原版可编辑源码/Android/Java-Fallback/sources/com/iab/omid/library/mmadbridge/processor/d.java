package com.iab.omid.library.mmadbridge.processor;

public class d implements com.iab.omid.library.mmadbridge.processor.a {
    private final int[] a;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 2
            int[] r0 = new int[r0]
            r1.a = r0
            return
    }

    private void a(android.view.ViewGroup r3, org.json.JSONObject r4, com.iab.omid.library.mmadbridge.processor.a.a r5, boolean r6) {
            r2 = this;
            r0 = 0
        L1:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L11
            android.view.View r1 = r3.getChildAt(r0)
            r5.a(r1, r2, r4, r6)
            int r0 = r0 + 1
            goto L1
        L11:
            return
    }

    private void b(android.view.ViewGroup r6, org.json.JSONObject r7, com.iab.omid.library.mmadbridge.processor.a.a r8, boolean r9) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r6.getChildCount()
            if (r1 >= r2) goto L36
            android.view.View r2 = r6.getChildAt(r1)
            float r3 = r2.getZ()
            java.lang.Float r3 = java.lang.Float.valueOf(r3)
            java.lang.Object r3 = r0.get(r3)
            java.util.ArrayList r3 = (java.util.ArrayList) r3
            if (r3 != 0) goto L30
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            float r4 = r2.getZ()
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
            r0.put(r4, r3)
        L30:
            r3.add(r2)
            int r1 = r1 + 1
            goto L6
        L36:
            java.util.ArrayList r6 = new java.util.ArrayList
            java.util.Set r1 = r0.keySet()
            r6.<init>(r1)
            java.util.Collections.sort(r6)
            java.util.Iterator r6 = r6.iterator()
        L46:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L6c
            java.lang.Object r1 = r6.next()
            java.lang.Float r1 = (java.lang.Float) r1
            java.lang.Object r1 = r0.get(r1)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            java.util.Iterator r1 = r1.iterator()
        L5c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L46
            java.lang.Object r2 = r1.next()
            android.view.View r2 = (android.view.View) r2
            r8.a(r2, r5, r7, r9)
            goto L5c
        L6c:
            return
    }

    @Override
    public org.json.JSONObject a(android.view.View r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L8
            org.json.JSONObject r5 = com.iab.omid.library.mmadbridge.utils.c.a(r0, r0, r0, r0)
            return r5
        L8:
            int r1 = r5.getWidth()
            int r2 = r5.getHeight()
            int[] r3 = r4.a
            r5.getLocationOnScreen(r3)
            int[] r5 = r4.a
            r0 = r5[r0]
            r3 = 1
            r5 = r5[r3]
            org.json.JSONObject r5 = com.iab.omid.library.mmadbridge.utils.c.a(r0, r5, r1, r2)
            return r5
    }

    @Override
    public void a(android.view.View r2, org.json.JSONObject r3, com.iab.omid.library.mmadbridge.processor.a.a r4, boolean r5, boolean r6) {
            r1 = this;
            boolean r0 = r2 instanceof android.view.ViewGroup
            if (r0 != 0) goto L5
            return
        L5:
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            if (r5 == 0) goto L14
            int r5 = android.os.Build.VERSION.SDK_INT
            r0 = 21
            if (r5 >= r0) goto L10
            goto L14
        L10:
            r1.b(r2, r3, r4, r6)
            goto L17
        L14:
            r1.a(r2, r3, r4, r6)
        L17:
            return
    }
}
