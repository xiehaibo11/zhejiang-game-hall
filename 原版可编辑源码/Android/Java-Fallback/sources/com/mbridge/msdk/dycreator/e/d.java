package com.mbridge.msdk.dycreator.e;

public final class d {
    public static java.lang.Object a(java.lang.Object r4, java.lang.String r5) {
            r0 = 0
            r1 = 0
            java.lang.Class r2 = r4.getClass()     // Catch: java.lang.Exception -> L15 java.lang.NoSuchMethodException -> L17
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L15 java.lang.NoSuchMethodException -> L17
            java.lang.reflect.Method r2 = r2.getMethod(r5, r3)     // Catch: java.lang.Exception -> L15 java.lang.NoSuchMethodException -> L17
            if (r2 == 0) goto L3f
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L15 java.lang.NoSuchMethodException -> L18
            java.lang.Object r4 = r2.invoke(r4, r3)     // Catch: java.lang.Exception -> L15 java.lang.NoSuchMethodException -> L18
            return r4
        L15:
            r4 = move-exception
            goto L3c
        L17:
            r2 = r0
        L18:
            boolean r3 = r4 instanceof com.mbridge.msdk.dycreator.f.a.a     // Catch: java.lang.Exception -> L15
            if (r3 == 0) goto L2d
            r2 = r4
            com.mbridge.msdk.dycreator.f.a.a r2 = (com.mbridge.msdk.dycreator.f.a.a) r2     // Catch: java.lang.Exception -> L15
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r2.getBindData()     // Catch: java.lang.Exception -> L15
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Exception -> L15
            java.lang.Class[] r3 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L15
            java.lang.reflect.Method r2 = r2.getMethod(r5, r3)     // Catch: java.lang.Exception -> L15
        L2d:
            if (r2 == 0) goto L3f
            com.mbridge.msdk.dycreator.f.a.a r4 = (com.mbridge.msdk.dycreator.f.a.a) r4     // Catch: java.lang.Exception -> L15
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r4.getBindData()     // Catch: java.lang.Exception -> L15
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L15
            java.lang.Object r4 = r2.invoke(r4, r5)     // Catch: java.lang.Exception -> L15
            return r4
        L3c:
            r4.printStackTrace()
        L3f:
            return r0
    }

    public static java.lang.String a(boolean r2, int r3, java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            java.lang.String r4 = ""
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            java.lang.String r1 = "s"
            if (r0 != 0) goto L42
            java.lang.String r0 = "zh"
            boolean r5 = r5.contains(r0)
            if (r5 == 0) goto L42
            if (r2 == 0) goto L2d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            goto L59
        L2d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.String r3 = "s "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            goto L59
        L42:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = " "
            r2.append(r4)
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
        L59:
            return r2
    }

    public static void a(java.lang.String r2, android.view.View r3, boolean r4) {
            if (r3 == 0) goto L4a
            boolean r0 = r3 instanceof com.mbridge.msdk.dycreator.baseview.inter.InterBase
            if (r0 == 0) goto L4a
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L4a
            java.lang.String r0 = "\\|"
            java.lang.String[] r2 = r2.split(r0)     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L4a
            int r0 = r2.length     // Catch: java.lang.Exception -> L46
            r1 = 2
            if (r0 < r1) goto L4a
            r0 = 0
            r1 = r2[r0]     // Catch: java.lang.Exception -> L46
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L4a
            r0 = r2[r0]     // Catch: java.lang.Exception -> L46
            java.lang.String r1 = "visible"
            boolean r0 = r0.startsWith(r1)     // Catch: java.lang.Exception -> L46
            if (r0 == 0) goto L4a
            r0 = 1
            r1 = r2[r0]     // Catch: java.lang.Exception -> L46
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L46
            if (r1 != 0) goto L4a
            r2 = r2[r0]     // Catch: java.lang.Exception -> L46
            java.lang.String r0 = "parent"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Exception -> L46
            if (r2 == 0) goto L4a
            if (r4 == 0) goto L4a
            r2 = 8
            r3.setVisibility(r2)     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r2 = move-exception
            r2.printStackTrace()
        L4a:
            return
    }

    public static boolean a(android.view.View r3, com.mbridge.msdk.dycreator.f.a.a r4) {
            r0 = 1
            if (r3 == 0) goto L5a
            boolean r1 = r3 instanceof com.mbridge.msdk.dycreator.baseview.inter.InterBase     // Catch: java.lang.Exception -> L56
            if (r1 == 0) goto L5a
            if (r4 == 0) goto L5a
            com.mbridge.msdk.dycreator.baseview.inter.InterBase r3 = (com.mbridge.msdk.dycreator.baseview.inter.InterBase) r3     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = r3.getActionDes()     // Catch: java.lang.Exception -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L56
            if (r1 != 0) goto L5a
            java.lang.String r1 = "\\|"
            java.lang.String[] r3 = r3.split(r1)     // Catch: java.lang.Exception -> L56
            if (r3 == 0) goto L5a
            int r1 = r3.length     // Catch: java.lang.Exception -> L56
            r2 = 2
            if (r1 < r2) goto L5a
            r1 = 0
            r2 = r3[r1]     // Catch: java.lang.Exception -> L56
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L56
            if (r2 != 0) goto L5a
            r1 = r3[r1]     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = "click"
            boolean r1 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L56
            if (r1 == 0) goto L5a
            r1 = r3[r0]     // Catch: java.lang.Exception -> L56
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L56
            if (r1 != 0) goto L5a
            r3 = r3[r0]     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = "alecfc"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.Exception -> L56
            if (r3 == 0) goto L5a
            com.mbridge.msdk.dycreator.wrapper.DyOption r3 = r4.getEffectData()     // Catch: java.lang.Exception -> L56
            if (r3 == 0) goto L5a
            com.mbridge.msdk.dycreator.wrapper.DyOption r3 = r4.getEffectData()     // Catch: java.lang.Exception -> L56
            boolean r3 = r3.isClickScreen()     // Catch: java.lang.Exception -> L56
            r0 = r3
            goto L5a
        L56:
            r3 = move-exception
            r3.printStackTrace()
        L5a:
            return r0
    }
}
