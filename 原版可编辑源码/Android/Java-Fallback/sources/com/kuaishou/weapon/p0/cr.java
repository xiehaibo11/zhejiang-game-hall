package com.kuaishou.weapon.p0;

public class cr {
    private com.kuaishou.weapon.p0.cs a;

    public cr() {
            r1 = this;
            r1.<init>()
            com.kuaishou.weapon.p0.cs r0 = new com.kuaishou.weapon.p0.cs
            r0.<init>()
            r1.a = r0
            return
    }

    public org.json.JSONObject a() {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lab
            r0.<init>()     // Catch: java.lang.Exception -> Lab
            com.kuaishou.weapon.p0.cs r1 = new com.kuaishou.weapon.p0.cs     // Catch: java.lang.Exception -> Lab
            r1.<init>()     // Catch: java.lang.Exception -> Lab
            java.lang.Class<android.telephony.TelephonyManager> r2 = android.telephony.TelephonyManager.class
            java.lang.String r3 = "getDeviceId"
            r4 = 0
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L1c
            java.lang.String r3 = "0"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L1c:
            java.lang.Class<android.telephony.TelephonyManager> r2 = android.telephony.TelephonyManager.class
            java.lang.String r3 = "getSubscriberId"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L2d
            java.lang.String r3 = "1"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L2d:
            java.lang.Class<android.telephony.TelephonyManager> r2 = android.telephony.TelephonyManager.class
            java.lang.String r3 = "getSimSerialNumber"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L3e
            java.lang.String r3 = "2"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L3e:
            java.lang.Class<android.location.Location> r2 = android.location.Location.class
            java.lang.String r3 = "getLatitude"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L4f
            java.lang.String r3 = "3"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L4f:
            java.lang.Class<android.location.Location> r2 = android.location.Location.class
            java.lang.String r3 = "getLongitude"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L60
            java.lang.String r3 = "4"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L60:
            java.lang.Class<android.net.wifi.WifiInfo> r2 = android.net.wifi.WifiInfo.class
            java.lang.String r3 = "getMacAddress"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L71
            java.lang.String r3 = "6"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L71:
            java.lang.Class<android.net.wifi.WifiInfo> r2 = android.net.wifi.WifiInfo.class
            java.lang.String r3 = "getBSSID"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L82
            java.lang.String r3 = "7"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L82:
            java.lang.Class<android.net.wifi.WifiInfo> r2 = android.net.wifi.WifiInfo.class
            java.lang.String r3 = "getRssi"
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r2 = r1.a(r2, r3, r5)     // Catch: java.lang.Exception -> Lab
            if (r2 <= 0) goto L93
            java.lang.String r3 = "8"
            r0.put(r3, r2)     // Catch: java.lang.Exception -> Lab
        L93:
            java.lang.Class<org.json.JSONObject> r2 = org.json.JSONObject.class
            java.lang.String r3 = "toString"
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> Lab
            int r1 = r1.a(r2, r3, r4)     // Catch: java.lang.Exception -> Lab
            if (r1 <= 0) goto La4
            java.lang.String r2 = "9"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lab
        La4:
            int r1 = r0.length()     // Catch: java.lang.Exception -> Lab
            if (r1 <= 0) goto Lab
            return r0
        Lab:
            r0 = 0
            return r0
    }

    public org.json.JSONObject b() {
            r8 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lbc
            r1.<init>()     // Catch: java.lang.Exception -> Lbc
            com.kuaishou.weapon.p0.cs r2 = r8.a     // Catch: java.lang.Exception -> Lbc
            int r2 = r2.a()     // Catch: java.lang.Exception -> Lbc
            if (r2 > 0) goto Lf
            return r0
        Lf:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.telephony.TelephonyManager> r4 = android.telephony.TelephonyManager.class
            java.lang.String r5 = "getDeviceId"
            r6 = 0
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L23
            java.lang.String r4 = "0"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L23:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.telephony.TelephonyManager> r4 = android.telephony.TelephonyManager.class
            java.lang.String r5 = "getSubscriberId"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L36
            java.lang.String r4 = "1"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L36:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.telephony.TelephonyManager> r4 = android.telephony.TelephonyManager.class
            java.lang.String r5 = "getSimSerialNumber"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L49
            java.lang.String r4 = "2"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L49:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.location.Location> r4 = android.location.Location.class
            java.lang.String r5 = "getLatitude"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L5c
            java.lang.String r4 = "3"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L5c:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.location.Location> r4 = android.location.Location.class
            java.lang.String r5 = "getLongitude"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L6f
            java.lang.String r4 = "4"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L6f:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.net.wifi.WifiInfo> r4 = android.net.wifi.WifiInfo.class
            java.lang.String r5 = "getMacAddress"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L82
            java.lang.String r4 = "6"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L82:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.net.wifi.WifiInfo> r4 = android.net.wifi.WifiInfo.class
            java.lang.String r5 = "getBSSID"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto L95
            java.lang.String r4 = "7"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        L95:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<android.net.wifi.WifiInfo> r4 = android.net.wifi.WifiInfo.class
            java.lang.String r5 = "getRssi"
            java.lang.Object[] r7 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r3 = r3.a(r2, r4, r5, r7)     // Catch: java.lang.Exception -> Lbc
            if (r3 <= 0) goto La8
            java.lang.String r4 = "8"
            r1.put(r4, r3)     // Catch: java.lang.Exception -> Lbc
        La8:
            com.kuaishou.weapon.p0.cs r3 = r8.a     // Catch: java.lang.Exception -> Lbc
            java.lang.Class<org.json.JSONObject> r4 = org.json.JSONObject.class
            java.lang.String r5 = "toString"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> Lbc
            int r2 = r3.a(r2, r4, r5, r6)     // Catch: java.lang.Exception -> Lbc
            if (r2 <= 0) goto Lbb
            java.lang.String r3 = "9"
            r1.put(r3, r2)     // Catch: java.lang.Exception -> Lbc
        Lbb:
            return r1
        Lbc:
            return r0
    }
}
