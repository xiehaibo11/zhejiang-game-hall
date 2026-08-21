package com.mbridge.msdk.dycreator.e;

public final class c {
    public static double a(double r3, double r5, int r7) {
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            if (r7 >= 0) goto L5
            return r0
        L5:
            java.math.BigDecimal r2 = new java.math.BigDecimal     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = java.lang.Double.toString(r3)     // Catch: java.lang.Exception -> L21
            r2.<init>(r3)     // Catch: java.lang.Exception -> L21
            java.math.BigDecimal r3 = new java.math.BigDecimal     // Catch: java.lang.Exception -> L21
            java.lang.String r4 = java.lang.Double.toString(r5)     // Catch: java.lang.Exception -> L21
            r3.<init>(r4)     // Catch: java.lang.Exception -> L21
            r4 = 4
            java.math.BigDecimal r3 = r2.divide(r3, r7, r4)     // Catch: java.lang.Exception -> L21
            double r3 = r3.doubleValue()     // Catch: java.lang.Exception -> L21
            return r3
        L21:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            java.lang.String r4 = "CommUtil"
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
            return r0
    }

    public static int a(android.content.Context r1, float r2) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Exception -> L17
            if (r1 != 0) goto Lb
            return r0
        Lb:
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()     // Catch: java.lang.Exception -> L17
            float r1 = r1.density     // Catch: java.lang.Exception -> L17
            float r2 = r2 * r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
        L17:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = "CommUtil"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r6, android.util.AttributeSet r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r6 == 0) goto Lbe
            if (r7 == 0) goto Lbe
            int r6 = r7.getAttributeCount()
            r1 = 0
        Le:
            if (r1 >= r6) goto Lbe
            java.lang.String r2 = r7.getAttributeName(r1)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Lba
            java.lang.String r3 = "mbridge_data"
            boolean r3 = r2.equals(r3)
            r4 = 8
            if (r3 == 0) goto L3e
            java.lang.String r3 = r7.getAttributeValue(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.dycreator.e.b.a     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> L3a
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = "mbridgeData"
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r3 = move-exception
            r3.printStackTrace()
        L3e:
            java.lang.String r3 = "mbridge_click"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L60
            java.lang.String r3 = r7.getAttributeValue(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.dycreator.e.b.a     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> L5c
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> L5c
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = "mbridgeAction"
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L5c
            goto L60
        L5c:
            r3 = move-exception
            r3.printStackTrace()
        L60:
            java.lang.String r3 = "mbridge_strategy"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L82
            java.lang.String r3 = r7.getAttributeValue(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.dycreator.e.b.a     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> L7e
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L7e
            java.lang.String r5 = "mbridgeStrategy"
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L7e
            goto L82
        L7e:
            r3 = move-exception
            r3.printStackTrace()
        L82:
            java.lang.String r3 = "mbridge_effect"
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto La4
            java.lang.String r3 = r7.getAttributeValue(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.dycreator.e.b.a     // Catch: java.lang.Exception -> La0
            java.lang.String r3 = r3.substring(r4)     // Catch: java.lang.Exception -> La0
            java.lang.Object r3 = r5.get(r3)     // Catch: java.lang.Exception -> La0
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> La0
            java.lang.String r4 = "mbridgeEffect"
            r0.put(r4, r3)     // Catch: java.lang.Exception -> La0
            goto La4
        La0:
            r3 = move-exception
            r3.printStackTrace()
        La4:
            java.lang.String r3 = "mbridge_report"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto Lba
            java.lang.String r2 = r7.getAttributeValue(r1)
            java.lang.String r3 = "mbridgeReport"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lb6
            goto Lba
        Lb6:
            r2 = move-exception
            r2.printStackTrace()
        Lba:
            int r1 = r1 + 1
            goto Le
        Lbe:
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Boolean> a(java.lang.String r8) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 != 0) goto L58
            java.lang.String r1 = "\\|"
            java.lang.String[] r1 = r8.split(r1)
            java.lang.String r2 = "mbridgeDetached"
            java.lang.String r3 = "mbridgeAttached"
            r4 = 1
            if (r1 == 0) goto L3e
            int r5 = r1.length
            if (r5 <= 0) goto L3e
            int r8 = r1.length
            r5 = 0
        L1d:
            if (r5 >= r8) goto L58
            r6 = r1[r5]
            boolean r7 = r6.equals(r3)
            if (r7 == 0) goto L2e
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r4)
            r0.put(r3, r7)
        L2e:
            boolean r6 = r6.equals(r2)
            if (r6 == 0) goto L3b
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r4)
            r0.put(r2, r6)
        L3b:
            int r5 = r5 + 1
            goto L1d
        L3e:
            boolean r1 = r8.equals(r3)
            if (r1 == 0) goto L4b
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r4)
            r0.put(r3, r1)
        L4b:
            boolean r8 = r8.equals(r2)
            if (r8 == 0) goto L58
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r4)
            r0.put(r2, r8)
        L58:
            return r0
    }

    public static void a(java.util.Map<java.lang.String, java.lang.String> r1, android.view.View r2) {
            if (r1 == 0) goto L40
            if (r2 == 0) goto L40
            java.lang.String r0 = "mbridgeData"
            boolean r0 = r1.containsKey(r0)
            if (r0 == 0) goto L13
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a()
            r0.c(r2)
        L13:
            java.lang.String r0 = "mbridgeAction"
            boolean r0 = r1.containsKey(r0)
            if (r0 == 0) goto L22
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a()
            r0.d(r2)
        L22:
            java.lang.String r0 = "mbridgeEffect"
            boolean r0 = r1.containsKey(r0)
            if (r0 == 0) goto L31
            com.mbridge.msdk.dycreator.binding.b r0 = com.mbridge.msdk.dycreator.binding.b.a()
            r0.b(r2)
        L31:
            java.lang.String r0 = "mbridgeReport"
            boolean r1 = r1.containsKey(r0)
            if (r1 == 0) goto L40
            com.mbridge.msdk.dycreator.binding.b r1 = com.mbridge.msdk.dycreator.binding.b.a()
            r1.a(r2)
        L40:
            return
    }
}
