package com.kuaishou.weapon.p0;

public class aw {
    private org.json.JSONObject a;

    public aw(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            boolean r0 = com.kuaishou.weapon.p0.jni.Engine.loadSuccess
            if (r0 == 0) goto L2a
            com.kuaishou.weapon.p0.jni.Engine r5 = com.kuaishou.weapon.p0.jni.Engine.getInstance(r5)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = com.kuaishou.weapon.p0.cj.g     // Catch: java.lang.Throwable -> L2a
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L2a
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L2a
            r1 = 1
            r2 = 0
            java.lang.String r3 = ""
            java.lang.String r5 = r5.pqr(r0, r1, r2, r3)     // Catch: java.lang.Throwable -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L2a
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2a
            r4.a = r0     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            r1 = 0
            if (r0 == 0) goto La
            java.lang.String r3 = r0.optString(r3, r1)     // Catch: java.lang.Exception -> La
            return r3
        La:
            return r1
    }

    public java.util.Set a(int r3) {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 1
            if (r3 != r1) goto L76
            java.lang.String r3 = "HeapTaskDa"
            r0.add(r3)
            java.lang.String r3 = "queued-wor"
            r0.add(r3)
            java.lang.String r3 = "JDWP"
            r0.add(r3)
            java.lang.String r3 = "dTi"
            r0.add(r3)
            java.lang.String r3 = "MessageHan"
            r0.add(r3)
            java.lang.String r3 = "MediaPrefe"
            r0.add(r3)
            java.lang.String r3 = "CleanupRef"
            r0.add(r3)
            java.lang.String r3 = "GeoLocatio"
            r0.add(r3)
            java.lang.String r3 = "securityai"
            r0.add(r3)
            java.lang.String r3 = "Connectivi"
            r0.add(r3)
            java.lang.String r3 = "PatchManag"
            r0.add(r3)
            java.lang.String r3 = "CronetInte"
            r0.add(r3)
            java.lang.String r3 = "AegonLogge"
            r0.add(r3)
            java.lang.String r3 = "Countly"
            r0.add(r3)
            java.lang.String r3 = "DownloadSt"
            r0.add(r3)
            java.lang.String r3 = "GoogleApiH"
            r0.add(r3)
            java.lang.String r3 = "PlatformSe"
            r0.add(r3)
            java.lang.String r3 = "MemoryInfr"
            r0.add(r3)
            java.lang.String r3 = "CronetLibr"
            r0.add(r3)
            java.lang.String r3 = "Dex2OatIni"
            r0.add(r3)
            java.lang.String r3 = "EncodeApiH"
            r0.add(r3)
            java.lang.String r3 = "CookieMons"
            r0.add(r3)
        L76:
            return r0
    }

    public java.util.Set a(android.content.Context r11, java.lang.String r12, int r13) {
            r10 = this;
            java.lang.String r0 = " "
            org.json.JSONObject r1 = r10.a
            if (r1 == 0) goto Lc1
            java.lang.String r12 = r1.getString(r12)     // Catch: java.lang.Throwable -> Lc1
            java.util.Set r1 = r10.a(r13)     // Catch: java.lang.Throwable -> Lc1
            boolean r2 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Lc1
            if (r2 != 0) goto Lc1
            int r2 = r12.length()     // Catch: java.lang.Throwable -> Lc1
            r3 = 3
            if (r2 <= r3) goto Lc1
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Lc1
            r2.<init>(r12)     // Catch: java.lang.Throwable -> Lc1
            java.util.HashSet r12 = new java.util.HashSet     // Catch: java.lang.Throwable -> Lc1
            r12.<init>()     // Catch: java.lang.Throwable -> Lc1
            r3 = 0
            r4 = r3
        L27:
            int r5 = r2.length()     // Catch: java.lang.Throwable -> Lc1
            if (r4 >= r5) goto Lba
            java.lang.String r5 = r2.getString(r4)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = "azeroth"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r6 != 0) goto Lb6
            java.lang.String r6 = "OkHttp"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r6 != 0) goto Lb6
            java.lang.String r6 = "retrofit"
            boolean r6 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r6 != 0) goto Lb6
            r6 = r3
        L4a:
            boolean r7 = r5.contains(r0)     // Catch: java.lang.Throwable -> Lc1
            r8 = 1
            java.lang.String r9 = ""
            if (r7 == 0) goto L5c
            java.lang.String r5 = r5.replace(r0, r9)     // Catch: java.lang.Throwable -> Lc1
            int r6 = r6 + r8
            r7 = 200(0xc8, float:2.8E-43)
            if (r6 <= r7) goto L4a
        L5c:
            java.lang.String r6 = "\n"
            java.lang.String r5 = r5.replace(r6, r9)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = "\t"
            java.lang.String r5 = r5.replace(r6, r9)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = "\u200b"
            java.lang.String r5 = r5.replace(r6, r9)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = ":"
            boolean r6 = r5.startsWith(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r6 == 0) goto L7a
            java.lang.String r5 = r5.substring(r8)     // Catch: java.lang.Throwable -> Lc1
        L7a:
            int r6 = r5.length()     // Catch: java.lang.Throwable -> Lc1
            r7 = 10
            if (r6 <= r7) goto L87
            java.lang.String r6 = r5.substring(r3, r7)     // Catch: java.lang.Throwable -> Lc1
            goto L88
        L87:
            r6 = r5
        L88:
            java.lang.String r7 = "ridge"
            boolean r7 = r5.contains(r7)     // Catch: java.lang.Throwable -> Lc1
            if (r7 == 0) goto L93
            r12.add(r5)     // Catch: java.lang.Throwable -> Lc1
        L93:
            java.lang.String r7 = r11.getPackageName()     // Catch: java.lang.Throwable -> Lc1
            boolean r8 = r5.contains(r7)     // Catch: java.lang.Throwable -> Lc1
            if (r8 != 0) goto Lb6
            boolean r7 = r7.contains(r5)     // Catch: java.lang.Throwable -> Lc1
            if (r7 != 0) goto Lb6
            boolean r7 = r1.contains(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r7 != 0) goto Lb6
            java.util.Set r7 = r10.b(r13)     // Catch: java.lang.Throwable -> Lc1
            boolean r6 = r7.contains(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r6 != 0) goto Lb6
            r12.add(r5)     // Catch: java.lang.Throwable -> Lc1
        Lb6:
            int r4 = r4 + 1
            goto L27
        Lba:
            int r11 = r12.size()     // Catch: java.lang.Throwable -> Lc1
            if (r11 <= 0) goto Lc1
            return r12
        Lc1:
            r11 = 0
            return r11
    }

    public java.util.Set b(int r3) {
            r2 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 1
            if (r3 != r1) goto L3f
            java.lang.String r3 = "AudioTrack"
            r0.add(r3)
            java.lang.String r3 = "processrea"
            r0.add(r3)
            java.lang.String r3 = "RemitDatab"
            r0.add(r3)
            java.lang.String r3 = "BrowserBlo"
            r0.add(r3)
            java.lang.String r3 = "game_push"
            r0.add(r3)
            java.lang.String r3 = "Godzilla:I"
            r0.add(r3)
            java.lang.String r3 = "IndexedDB"
            r0.add(r3)
            java.lang.String r3 = "ScopeRetry"
            r0.add(r3)
            java.lang.String r3 = "RobustPatc"
            r0.add(r3)
            java.lang.String r3 = "FrescoIoBo"
            r0.add(r3)
            java.lang.String r3 = "key_config"
            r0.add(r3)
        L3f:
            return r0
    }
}
