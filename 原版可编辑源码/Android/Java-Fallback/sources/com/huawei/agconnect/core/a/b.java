package com.huawei.agconnect.core.a;

public class b {
    private final android.content.Context a;

    static class 1 {
    }

    private static class a implements java.io.Serializable, java.util.Comparator<java.util.Map.Entry<java.lang.String, java.lang.Integer>> {
        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        a(com.huawei.agconnect.core.a.b.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public int a(java.util.Map.Entry<java.lang.String, java.lang.Integer> r1, java.util.Map.Entry<java.lang.String, java.lang.Integer> r2) {
                r0 = this;
                java.lang.Object r1 = r1.getValue()
                java.lang.Integer r1 = (java.lang.Integer) r1
                int r1 = r1.intValue()
                java.lang.Object r2 = r2.getValue()
                java.lang.Integer r2 = (java.lang.Integer) r2
                int r2 = r2.intValue()
                int r1 = r1 - r2
                return r1
        }

        @Override
        public int compare(java.util.Map.Entry<java.lang.String, java.lang.Integer> r1, java.util.Map.Entry<java.lang.String, java.lang.Integer> r2) {
                r0 = this;
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                int r1 = r0.a(r1, r2)
                return r1
        }
    }

    b(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private <T extends com.huawei.agconnect.core.ServiceRegistrar> T a(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "instantiate service class exception "
            java.lang.String r1 = "ServiceRegistrarParser"
            r2 = 0
            java.lang.Class r3 = java.lang.Class.forName(r6)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            java.lang.Class<com.huawei.agconnect.core.ServiceRegistrar> r4 = com.huawei.agconnect.core.ServiceRegistrar.class
            boolean r4 = r4.isAssignableFrom(r3)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            if (r4 != 0) goto L26
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            r6.<init>()     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            r6.append(r3)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            java.lang.String r3 = " must extends from ServiceRegistrar."
            r6.append(r3)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            java.lang.String r6 = r6.toString()     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            android.util.Log.e(r1, r6)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            return r2
        L26:
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            com.huawei.agconnect.core.ServiceRegistrar r6 = (com.huawei.agconnect.core.ServiceRegistrar) r6     // Catch: java.lang.IllegalAccessException -> L31 java.lang.InstantiationException -> L3f java.lang.ClassNotFoundException -> L54
            return r6
        L31:
            r6 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r6 = r6.getLocalizedMessage()
            goto L4c
        L3f:
            r6 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r6 = r6.getLocalizedMessage()
        L4c:
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            goto L6a
        L54:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "Can not found service class, "
            r0.append(r3)
            java.lang.String r6 = r6.getMessage()
            r0.append(r6)
            java.lang.String r6 = r0.toString()
        L6a:
            android.util.Log.e(r1, r6)
            return r2
    }

    private java.util.List<java.lang.String> b() {
            r11 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            android.os.Bundle r1 = r11.c()
            if (r1 != 0) goto Lc
            return r0
        Lc:
            java.util.HashMap r2 = new java.util.HashMap
            r3 = 10
            r2.<init>(r3)
            java.util.Set r3 = r1.keySet()
            java.util.Iterator r3 = r3.iterator()
        L1b:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L81
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = r1.getString(r4)
            java.lang.String r6 = "com.huawei.agconnect.core.ServiceRegistrar"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L1b
            java.lang.String r5 = ":"
            java.lang.String[] r5 = r4.split(r5)
            int r6 = r5.length
            r7 = 2
            java.lang.String r8 = "ServiceRegistrarParser"
            r9 = 0
            r10 = 1
            if (r6 != r7) goto L5d
            r4 = r5[r9]     // Catch: java.lang.NumberFormatException -> L4d
            r5 = r5[r10]     // Catch: java.lang.NumberFormatException -> L4d
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.NumberFormatException -> L4d
            r2.put(r4, r5)     // Catch: java.lang.NumberFormatException -> L4d
            goto L1b
        L4d:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "registrar configuration format error:"
            r5.append(r6)
            java.lang.String r4 = r4.getMessage()
            goto L76
        L5d:
            int r6 = r5.length
            if (r6 != r10) goto L6c
            r4 = r5[r9]
            r5 = 1000(0x3e8, float:1.401E-42)
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r2.put(r4, r5)
            goto L1b
        L6c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "registrar configuration error, "
            r5.append(r6)
        L76:
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            android.util.Log.e(r8, r4)
            goto L1b
        L81:
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.Set r2 = r2.entrySet()
            r1.<init>(r2)
            com.huawei.agconnect.core.a.b$a r2 = new com.huawei.agconnect.core.a.b$a
            r3 = 0
            r2.<init>(r3)
            java.util.Collections.sort(r1, r2)
            java.util.Iterator r1 = r1.iterator()
        L97:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lab
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getKey()
            r0.add(r2)
            goto L97
        Lab:
            return r0
    }

    private android.os.Bundle c() {
            r6 = this;
            java.lang.String r0 = "ServiceRegistrarParser"
            android.content.Context r1 = r6.a
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r2 = 0
            if (r1 != 0) goto Lc
            return r2
        Lc:
            android.content.ComponentName r3 = new android.content.ComponentName     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            android.content.Context r4 = r6.a     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            java.lang.Class<com.huawei.agconnect.core.ServiceDiscovery> r5 = com.huawei.agconnect.core.ServiceDiscovery.class
            r3.<init>(r4, r5)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ServiceInfo r1 = r1.getServiceInfo(r3, r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            if (r1 != 0) goto L23
            java.lang.String r1 = "Can not found ServiceDiscovery service."
            android.util.Log.e(r0, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            goto L3f
        L23:
            android.os.Bundle r0 = r1.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L26
            return r0
        L26:
            r1 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "get ServiceDiscovery exception."
            r3.append(r4)
            java.lang.String r1 = r1.getLocalizedMessage()
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            android.util.Log.e(r0, r1)
        L3f:
            return r2
    }

    public java.util.List<com.huawei.agconnect.core.Service> a() {
            r5 = this;
            java.lang.String r0 = "ServiceRegistrarParser"
            java.lang.String r1 = "getServices"
            android.util.Log.i(r0, r1)
            java.util.List r1 = r5.b()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()
        L14:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L37
            java.lang.Object r3 = r1.next()
            java.lang.String r3 = (java.lang.String) r3
            com.huawei.agconnect.core.ServiceRegistrar r3 = r5.a(r3)
            if (r3 == 0) goto L14
            android.content.Context r4 = r5.a
            r3.initialize(r4)
            android.content.Context r4 = r5.a
            java.util.List r3 = r3.getServices(r4)
            if (r3 == 0) goto L14
            r2.addAll(r3)
            goto L14
        L37:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "services:"
            r1.append(r3)
            int r3 = r2.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            android.util.Log.i(r0, r1)
            return r2
    }
}
