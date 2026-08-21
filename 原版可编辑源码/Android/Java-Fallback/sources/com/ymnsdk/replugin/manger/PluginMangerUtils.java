package com.ymnsdk.replugin.manger;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginMangerUtils {
    private static volatile com.ymnsdk.replugin.manger.PluginMangerUtils manger;

    public PluginMangerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean checkGrayscaleCondition(java.util.List<java.lang.String> r3, java.lang.String r4) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = r0
        L5:
            int r2 = r3.size()
            if (r1 >= r2) goto L1c
            java.lang.Object r2 = r3.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L19
            r3 = 1
            return r3
        L19:
            int r1 = r1 + 1
            goto L5
        L1c:
            return r0
    }

    public static void filterPlugin(com.ymnsdk.replugin.entity.AppPluginInfo r3, java.lang.String r4) {
            java.lang.String r0 = "ip"
            java.lang.String r1 = "user_id"
            java.lang.String r2 = "device_id"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            r1 = 0
        Lb:
            r2 = 3
            if (r1 >= r2) goto L16
            r2 = r0[r1]
            filterStr(r3, r4, r2)
            int r1 = r1 + 1
            goto Lb
        L16:
            return
    }

    private static void filterStr(com.ymnsdk.replugin.entity.AppPluginInfo r10, java.lang.String r11, java.lang.String r12) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Lec
            r0.<init>(r11)     // Catch: java.lang.Exception -> Lec
            boolean r11 = r0.has(r12)     // Catch: java.lang.Exception -> Lec
            if (r11 == 0) goto Lf0
            java.lang.String r11 = r0.getString(r12)     // Catch: java.lang.Exception -> Lec
            java.util.List r0 = r10.getPlugins()     // Catch: java.lang.Exception -> Lec
            r1 = 0
            r2 = r1
        L15:
            int r3 = r0.size()     // Catch: java.lang.Exception -> Lec
            if (r2 >= r3) goto Le8
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.GrayscaleCondition r3 = r3.getGrayscale_condition()     // Catch: java.lang.Exception -> Lec
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> Lec
            r4.<init>()     // Catch: java.lang.Exception -> Lec
            r5 = -1
            int r6 = r12.hashCode()     // Catch: java.lang.Exception -> Lec
            r7 = -147132913(0xfffffffff73aee0f, float:-3.791389E33)
            r8 = 2
            r9 = 1
            if (r6 == r7) goto L54
            r7 = 3367(0xd27, float:4.718E-42)
            if (r6 == r7) goto L4a
            r7 = 25209764(0x180aba4, float:4.7266066E-38)
            if (r6 == r7) goto L40
            goto L5d
        L40:
            java.lang.String r6 = "device_id"
            boolean r6 = r12.equals(r6)     // Catch: java.lang.Exception -> Lec
            if (r6 == 0) goto L5d
            r5 = r8
            goto L5d
        L4a:
            java.lang.String r6 = "ip"
            boolean r6 = r12.equals(r6)     // Catch: java.lang.Exception -> Lec
            if (r6 == 0) goto L5d
            r5 = r1
            goto L5d
        L54:
            java.lang.String r6 = "user_id"
            boolean r6 = r12.equals(r6)     // Catch: java.lang.Exception -> Lec
            if (r6 == 0) goto L5d
            r5 = r9
        L5d:
            if (r5 == 0) goto L6e
            if (r5 == r9) goto L69
            if (r5 == r8) goto L64
            goto L72
        L64:
            java.util.List r4 = r3.getDevice_id()     // Catch: java.lang.Exception -> Lec
            goto L72
        L69:
            java.util.List r4 = r3.getUser_id()     // Catch: java.lang.Exception -> Lec
            goto L72
        L6e:
            java.util.List r4 = r3.getIp()     // Catch: java.lang.Exception -> Lec
        L72:
            boolean r3 = checkGrayscaleCondition(r4, r11)     // Catch: java.lang.Exception -> Lec
            if (r3 == 0) goto Le4
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> Lec
            java.lang.Object r4 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r4 = (com.ymnsdk.replugin.entity.Plugin) r4     // Catch: java.lang.Exception -> Lec
            java.lang.String r4 = r4.getGray_version()     // Catch: java.lang.Exception -> Lec
            r3.setVersion(r4)     // Catch: java.lang.Exception -> Lec
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> Lec
            java.lang.Object r4 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r4 = (com.ymnsdk.replugin.entity.Plugin) r4     // Catch: java.lang.Exception -> Lec
            java.lang.String r4 = r4.getGray_manifest_path()     // Catch: java.lang.Exception -> Lec
            r3.setManifest_path(r4)     // Catch: java.lang.Exception -> Lec
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> Lec
            java.lang.Object r4 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r4 = (com.ymnsdk.replugin.entity.Plugin) r4     // Catch: java.lang.Exception -> Lec
            int r4 = r4.getGray_update_type()     // Catch: java.lang.Exception -> Lec
            r3.setUpdate_type(r4)     // Catch: java.lang.Exception -> Lec
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> Lec
            java.lang.Object r4 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r4 = (com.ymnsdk.replugin.entity.Plugin) r4     // Catch: java.lang.Exception -> Lec
            int r4 = r4.getGray_update_type_v22()     // Catch: java.lang.Exception -> Lec
            r3.setUpdate_type_v22(r4)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r3 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()     // Catch: java.lang.Exception -> Lec
            java.util.Map r3 = r3.getPluginGrayData()     // Catch: java.lang.Exception -> Lec
            java.lang.Object r4 = r0.get(r2)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.entity.Plugin r4 = (com.ymnsdk.replugin.entity.Plugin) r4     // Catch: java.lang.Exception -> Lec
            java.lang.String r4 = r4.getId()     // Catch: java.lang.Exception -> Lec
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r9)     // Catch: java.lang.Exception -> Lec
            r3.put(r4, r5)     // Catch: java.lang.Exception -> Lec
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r4 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()     // Catch: java.lang.Exception -> Lec
            r4.putPluginGrayData(r3)     // Catch: java.lang.Exception -> Lec
        Le4:
            int r2 = r2 + 1
            goto L15
        Le8:
            r10.setPlugins(r0)     // Catch: java.lang.Exception -> Lec
            goto Lf0
        Lec:
            r10 = move-exception
            r10.printStackTrace()
        Lf0:
            return
    }

    public static com.ymnsdk.replugin.entity.Patch findPatch(java.lang.String r3, com.ymnsdk.replugin.entity.PluginInfo r4, java.lang.String r5) {
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalDownedPlugin()
            boolean r1 = r0.containsKey(r3)
            r2 = 0
            if (r1 == 0) goto L20
            java.lang.Object r5 = r0.get(r3)
            if (r5 != 0) goto L16
            return r2
        L16:
            java.lang.Object r3 = r0.get(r3)
            com.ymnsdk.replugin.entity.PluginInfo r3 = (com.ymnsdk.replugin.entity.PluginInfo) r3
            java.lang.String r5 = r3.getPlugin_version()
        L20:
            java.util.List r3 = r4.getPatch()
            if (r3 == 0) goto L47
            r4 = 0
        L27:
            int r0 = r3.size()
            if (r4 >= r0) goto L47
            java.lang.Object r0 = r3.get(r4)
            com.ymnsdk.replugin.entity.Patch r0 = (com.ymnsdk.replugin.entity.Patch) r0
            java.lang.String r0 = r0.getFrom_version()
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto L44
            java.lang.Object r3 = r3.get(r4)
            com.ymnsdk.replugin.entity.Patch r3 = (com.ymnsdk.replugin.entity.Patch) r3
            return r3
        L44:
            int r4 = r4 + 1
            goto L27
        L47:
            return r2
    }

    public static com.ymnsdk.replugin.entity.Plugin findPluginById(java.lang.String r5) {
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L42
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()     // Catch: java.lang.Exception -> L42
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginList()     // Catch: java.lang.Exception -> L42
            java.util.List r0 = r0.getListFrom(r1)     // Catch: java.lang.Exception -> L42
            if (r0 == 0) goto L46
            r1 = 0
        L12:
            int r2 = r0.size()     // Catch: java.lang.Exception -> L42
            if (r1 >= r2) goto L46
            java.lang.Object r2 = r0.get(r1)     // Catch: java.lang.Exception -> L42
            java.util.Map r2 = (java.util.Map) r2     // Catch: java.lang.Exception -> L42
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L42
            r3.<init>(r2)     // Catch: java.lang.Exception -> L42
            com.google.gson.Gson r2 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L42
            r2.<init>()     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L42
            java.lang.Class<com.ymnsdk.replugin.entity.Plugin> r4 = com.ymnsdk.replugin.entity.Plugin.class
            java.lang.Object r2 = r2.fromJson(r3, r4)     // Catch: java.lang.Exception -> L42
            com.ymnsdk.replugin.entity.Plugin r2 = (com.ymnsdk.replugin.entity.Plugin) r2     // Catch: java.lang.Exception -> L42
            java.lang.String r3 = r2.getId()     // Catch: java.lang.Exception -> L42
            boolean r3 = r3.equals(r5)     // Catch: java.lang.Exception -> L42
            if (r3 == 0) goto L3f
            return r2
        L3f:
            int r1 = r1 + 1
            goto L12
        L42:
            r5 = move-exception
            r5.printStackTrace()
        L46:
            com.ymnsdk.replugin.entity.Plugin r5 = new com.ymnsdk.replugin.entity.Plugin
            r5.<init>()
            return r5
    }

    public static java.util.List<com.ymnsdk.replugin.entity.Plugin> getAllPlugin() {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()     // Catch: java.lang.Exception -> L40
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()     // Catch: java.lang.Exception -> L40
            java.lang.String r2 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginList()     // Catch: java.lang.Exception -> L40
            java.util.List r1 = r1.getListFrom(r2)     // Catch: java.lang.Exception -> L40
            if (r1 == 0) goto L3f
            r2 = 0
        L17:
            int r3 = r1.size()     // Catch: java.lang.Exception -> L40
            if (r2 >= r3) goto L3f
            java.lang.Object r3 = r1.get(r2)     // Catch: java.lang.Exception -> L40
            java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Exception -> L40
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L40
            r4.<init>(r3)     // Catch: java.lang.Exception -> L40
            com.google.gson.Gson r3 = new com.google.gson.Gson     // Catch: java.lang.Exception -> L40
            r3.<init>()     // Catch: java.lang.Exception -> L40
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L40
            java.lang.Class<com.ymnsdk.replugin.entity.Plugin> r5 = com.ymnsdk.replugin.entity.Plugin.class
            java.lang.Object r3 = r3.fromJson(r4, r5)     // Catch: java.lang.Exception -> L40
            com.ymnsdk.replugin.entity.Plugin r3 = (com.ymnsdk.replugin.entity.Plugin) r3     // Catch: java.lang.Exception -> L40
            r0.add(r3)     // Catch: java.lang.Exception -> L40
            int r2 = r2 + 1
            goto L17
        L3f:
            return r0
        L40:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public static java.lang.String getDescription(com.ymnsdk.replugin.entity.Plugin r1, java.lang.String r2) {
            java.lang.String r0 = r1.getDescription()
            if (r0 == 0) goto L15
            java.lang.String r0 = r1.getDescription()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L15
            java.lang.String r1 = r1.getDescription()
            return r1
        L15:
            return r2
    }

    public static com.ymnsdk.replugin.manger.PluginMangerUtils getInstance() {
            com.ymnsdk.replugin.manger.PluginMangerUtils r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.manger
            if (r0 != 0) goto L17
            java.lang.Class<com.ymnsdk.replugin.manger.PluginMangerUtils> r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.class
            monitor-enter(r0)
            com.ymnsdk.replugin.manger.PluginMangerUtils r1 = com.ymnsdk.replugin.manger.PluginMangerUtils.manger     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ymnsdk.replugin.manger.PluginMangerUtils r1 = new com.ymnsdk.replugin.manger.PluginMangerUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ymnsdk.replugin.manger.PluginMangerUtils.manger = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ymnsdk.replugin.manger.PluginMangerUtils r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.manger
            return r0
    }

    public static boolean getIsShowErrorDialog(java.lang.String r1) {
            com.ymnsdk.replugin.entity.Plugin r1 = findPluginById(r1)
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            int r1 = r1.getNotify_launch_failure_enabled()
            if (r1 != 0) goto Lf
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static boolean getIsShowStartDialog(java.lang.String r1) {
            com.ymnsdk.replugin.entity.Plugin r1 = findPluginById(r1)
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            int r1 = r1.getNotify_after_update_enabled()
            if (r1 != 0) goto Lf
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static boolean getIsShowUpdateDialog(java.lang.String r1) {
            com.ymnsdk.replugin.entity.Plugin r1 = findPluginById(r1)
            r0 = 0
            if (r1 != 0) goto L8
            return r0
        L8:
            int r1 = r1.getNotify_before_update_enabled()
            if (r1 != 0) goto Lf
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public static int getPluginMode(java.lang.String r0) {
            com.ymnsdk.replugin.entity.Plugin r0 = findPluginById(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r0.getCommon_mode()
            return r0
    }

    public static long getPluginSize(com.ymnsdk.replugin.entity.PluginInfo r3, java.lang.String r4) {
            java.lang.String r0 = r3.getPlugin_version()
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Lf
            long r3 = r3.getFile_size()
            return r3
        Lf:
            java.util.List r0 = r3.getPatch()
            if (r0 == 0) goto L3c
            r0 = 0
        L16:
            java.util.List r1 = r3.getPatch()
            int r1 = r1.size()
            if (r0 >= r1) goto L3c
            java.util.List r1 = r3.getPatch()
            java.lang.Object r1 = r1.get(r0)
            com.ymnsdk.replugin.entity.Patch r1 = (com.ymnsdk.replugin.entity.Patch) r1
            java.lang.String r2 = r1.getFrom_version()
            boolean r2 = r2.equals(r4)
            if (r2 == 0) goto L39
            long r3 = r1.getPatch_size()
            return r3
        L39:
            int r0 = r0 + 1
            goto L16
        L3c:
            r3 = 0
            return r3
    }

    public static int getUpdateType(java.util.List<java.lang.String> r4, java.lang.String r5, int r6) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r4.size()
            r3 = 1
            if (r1 >= r2) goto L18
            java.lang.Object r2 = r4.get(r1)
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L15
            r4 = r0
            goto L19
        L15:
            int r1 = r1 + 1
            goto L2
        L18:
            r4 = r3
        L19:
            if (r4 == 0) goto L1c
            return r3
        L1c:
            if (r6 != r3) goto L1f
            return r3
        L1f:
            return r0
    }
}
