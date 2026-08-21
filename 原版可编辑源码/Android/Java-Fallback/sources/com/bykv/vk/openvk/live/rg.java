package com.bykv.vk.openvk.live;

public class rg {
    private static android.content.SharedPreferences rg;




    public static void df(long r4) {
            android.content.SharedPreferences r0 = com.bykv.vk.openvk.live.rg.rg
            r1 = 0
            if (r0 != 0) goto L11
            android.content.Context r0 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            java.lang.String r2 = "csj_live"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            com.bykv.vk.openvk.live.rg.rg = r0
        L11:
            android.content.SharedPreferences r0 = com.bykv.vk.openvk.live.rg.rg     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L37
            android.content.SharedPreferences r0 = com.bykv.vk.openvk.live.rg.rg     // Catch: java.lang.Throwable -> L33
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L33
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r2.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r3 = "live_init_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L33
            r2.append(r4)     // Catch: java.lang.Throwable -> L33
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L33
            r0.putInt(r4, r1)     // Catch: java.lang.Throwable -> L33
            r0.commit()     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r4 = move-exception
            r4.printStackTrace()
        L37:
            return
    }

    public static void pt(long r1) {
            java.lang.String r0 = "com.byted.live.lite"
            com.bytedance.pangle.Zeus.unInstallPlugin(r0)     // Catch: java.lang.Throwable -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            df(r1)
            return
    }

    public static boolean q(long r4) {
            android.content.SharedPreferences r0 = com.bykv.vk.openvk.live.rg.rg
            r1 = 0
            if (r0 != 0) goto L11
            android.content.Context r0 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            java.lang.String r2 = "csj_live"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r2, r1)
            com.bykv.vk.openvk.live.rg.rg = r0
        L11:
            android.content.SharedPreferences r0 = com.bykv.vk.openvk.live.rg.rg
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "live_init_"
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            int r4 = r0.getInt(r4, r1)
            goto L2c
        L2b:
            r4 = r1
        L2c:
            r5 = 5
            if (r4 >= r5) goto L30
            r1 = 1
        L30:
            return r1
    }

    public static android.os.Bundle rg(com.bykv.vk.openvk.api.plugin.c r1, java.lang.String r2) {
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r0 = "app_id"
            r1.putString(r0, r2)
            java.lang.String r2 = "com.byted.live.lite"
            java.lang.String r2 = com.bykv.vk.openvk.api.plugin.c.rg(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L18
            java.lang.String r2 = "0.0.0.0"
        L18:
            java.lang.String r0 = "plugin_version"
            r1.putString(r0, r2)
            android.content.Context r2 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            java.lang.String r2 = rg(r2)
            java.lang.String r0 = "sdk_version"
            r1.putString(r0, r2)
            return r1
    }

    public static java.lang.String rg(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L31
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r1.getApplicationInfo(r3, r2)     // Catch: java.lang.Throwable -> L31
            if (r3 != 0) goto L12
            return r0
        L12:
            android.os.Bundle r3 = r3.metaData     // Catch: java.lang.Throwable -> L31
            java.lang.String r1 = "ZEUS_PLUGIN_LIVE"
            java.lang.String r3 = r3.getString(r1)     // Catch: java.lang.Throwable -> L31
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L21
            return r0
        L21:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L31
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = "apiVersionCode"
            int r3 = r1.optInt(r3)     // Catch: java.lang.Throwable -> L31
            java.lang.String r3 = com.bykv.vk.openvk.api.plugin.c.rg(r3)     // Catch: java.lang.Throwable -> L31
            return r3
        L31:
            r3 = move-exception
            r3.printStackTrace()
            return r0
    }

    public static void rg(long r4) {
            java.lang.String r0 = "live_init_"
            android.content.SharedPreferences r1 = com.bykv.vk.openvk.live.rg.rg
            r2 = 0
            if (r1 != 0) goto L13
            android.content.Context r1 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            java.lang.String r3 = "csj_live"
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)
            com.bykv.vk.openvk.live.rg.rg = r1
        L13:
            android.content.SharedPreferences r1 = com.bykv.vk.openvk.live.rg.rg     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L4e
            android.content.SharedPreferences r1 = com.bykv.vk.openvk.live.rg.rg     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r3.<init>()     // Catch: java.lang.Throwable -> L4a
            r3.append(r0)     // Catch: java.lang.Throwable -> L4a
            r3.append(r4)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L4a
            int r1 = r1.getInt(r3, r2)     // Catch: java.lang.Throwable -> L4a
            android.content.SharedPreferences r2 = com.bykv.vk.openvk.live.rg.rg     // Catch: java.lang.Throwable -> L4a
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            r3.<init>()     // Catch: java.lang.Throwable -> L4a
            r3.append(r0)     // Catch: java.lang.Throwable -> L4a
            r3.append(r4)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = r3.toString()     // Catch: java.lang.Throwable -> L4a
            int r1 = r1 + 1
            r2.putInt(r4, r1)     // Catch: java.lang.Throwable -> L4a
            r2.commit()     // Catch: java.lang.Throwable -> L4a
            goto L4e
        L4a:
            r4 = move-exception
            r4.printStackTrace()
        L4e:
            return
    }

    public static void rg(com.bykv.vk.openvk.api.plugin.c r1, android.os.Bundle r2, com.bykv.vk.openvk.TTPluginListener r3) {
            com.bykv.vk.openvk.live.rg$1 r0 = new com.bykv.vk.openvk.live.rg$1
            r0.<init>(r3, r2)
            r1.df(r0)
            return
    }

    public static boolean rg() {
            com.bykv.vk.openvk.df.rg r0 = com.bykv.vk.openvk.df.rg.rg()     // Catch: java.lang.Exception -> Le
            com.bykv.vk.openvk.live.rg$3 r1 = new com.bykv.vk.openvk.live.rg$3     // Catch: java.lang.Exception -> Le
            r1.<init>()     // Catch: java.lang.Exception -> Le
            r0.rg(r1)     // Catch: java.lang.Exception -> Le
            r0 = 1
            return r0
        Le:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static boolean rg(android.content.Context r4, android.os.Bundle r5) {
            r0 = 0
            if (r4 == 0) goto L24
            if (r5 == 0) goto L24
            java.lang.String r1 = "room_id"
            boolean r2 = r5.containsKey(r1)
            if (r2 != 0) goto Le
            goto L24
        Le:
            long r1 = r5.getLong(r1)
            com.bytedance.android.live.base.api.IOuterLiveRoomService r3 = com.bytedance.android.openliveplugin.LivePluginHelper.getLiveRoomService()     // Catch: java.lang.Throwable -> L20
            com.bytedance.android.live.base.api.IOuterLiveService r3 = (com.bytedance.android.live.base.api.IOuterLiveService) r3     // Catch: java.lang.Throwable -> L20
            if (r3 == 0) goto L1f
            r3.enterLiveRoom(r4, r1, r5)     // Catch: java.lang.Throwable -> L20
            r4 = 1
            return r4
        L1f:
            return r0
        L20:
            r4 = move-exception
            r4.printStackTrace()
        L24:
            return r0
    }

    public static boolean rg(android.content.Context r2, java.lang.String r3, com.bytedance.android.live.base.api.ILiveHostContextParam.Builder r4, com.bytedance.android.live.base.api.ILiveInitCallback r5) {
            com.bykv.vk.openvk.df.rg r0 = com.bykv.vk.openvk.df.rg.rg()     // Catch: java.lang.Throwable -> Le
            com.bykv.vk.openvk.live.rg$2 r1 = new com.bykv.vk.openvk.live.rg$2     // Catch: java.lang.Throwable -> Le
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Le
            r0.rg(r1)     // Catch: java.lang.Throwable -> Le
            r2 = 1
            return r2
        Le:
            r2 = move-exception
            r2.printStackTrace()
            r2 = 0
            return r2
    }
}
