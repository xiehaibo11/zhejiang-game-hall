package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SharedPerferencesDataUtils {
    private static com.ymnsdk.replugin.util.SharedPerferencesDataUtils utils;

    static {
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = new com.ymnsdk.replugin.util.SharedPerferencesDataUtils
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils.utils = r0
            return
    }

    public SharedPerferencesDataUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.util.SharedPerferencesDataUtils getInstance() {
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.utils
            return r0
    }

    public void clearPluginGrayData() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginData()
            java.lang.Class<com.ymnsdk.replugin.entity.PluginGrayEntity> r2 = com.ymnsdk.replugin.entity.PluginGrayEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = (com.ymnsdk.replugin.entity.PluginGrayEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = new com.ymnsdk.replugin.entity.PluginGrayEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getGrayList()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setGrayList(r1)
        L29:
            java.util.Map r1 = r0.getGrayList()
            r1.clear()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r0 = r1.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginData(r0)
            return
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> getDownloadFileData() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getDownloadFiledata()
            java.lang.Class<com.ymnsdk.replugin.entity.DownloadFileDataEnity> r2 = com.ymnsdk.replugin.entity.DownloadFileDataEnity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.DownloadFileDataEnity r0 = (com.ymnsdk.replugin.entity.DownloadFileDataEnity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.DownloadFileDataEnity r0 = new com.ymnsdk.replugin.entity.DownloadFileDataEnity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> getLocalDownedPlugin() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getDownloadedPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalDownedPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalDownedPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalDownedPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalDownedPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalDownedPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalDownedPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getPluginInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> getLocalGetPlugin() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getLocalPluginInfoDetail()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalGetPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalGetPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalGetPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalGetPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalGetPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalGetPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getPluginInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> getLocalInstallPlugin() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getLocalPlugin()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalInstallPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalInstallPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalInstallPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalInstallPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getPluginInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> getLocalSilentDowningPlugin() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getSilentDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getPluginInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> getLocalUserDowningPlugin() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUserDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r0 = r0.getPluginInfoMap()
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Boolean> getPluginGrayData() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginData()
            java.lang.Class<com.ymnsdk.replugin.entity.PluginGrayEntity> r2 = com.ymnsdk.replugin.entity.PluginGrayEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = (com.ymnsdk.replugin.entity.PluginGrayEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = new com.ymnsdk.replugin.entity.PluginGrayEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getGrayList()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setGrayList(r1)
        L29:
            java.util.Map r0 = r0.getGrayList()
            return r0
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> gutMergePatchData() {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getMergePatchData()
            java.lang.Class<com.ymnsdk.replugin.entity.MergePatchEnity> r2 = com.ymnsdk.replugin.entity.MergePatchEnity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = (com.ymnsdk.replugin.entity.MergePatchEnity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = new com.ymnsdk.replugin.entity.MergePatchEnity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPatchInfo()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPatchInfo(r1)
        L29:
            java.util.Map r0 = r0.getPatchInfo()
            return r0
    }

    public void putDownloadFileData(java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getDownloadFiledata()
            java.lang.Class<com.ymnsdk.replugin.entity.DownloadFileDataEnity> r2 = com.ymnsdk.replugin.entity.DownloadFileDataEnity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.DownloadFileDataEnity r0 = (com.ymnsdk.replugin.entity.DownloadFileDataEnity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.DownloadFileDataEnity r0 = new com.ymnsdk.replugin.entity.DownloadFileDataEnity
            r0.<init>()
        L1b:
            r0.setInfoMap(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setDownloadFiledata(r4)
            return
    }

    public void putLocalDownedPlugin(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getDownloadedPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalDownedPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalDownedPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalDownedPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalDownedPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalDownedPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalDownedPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r1 = r0.getPluginInfoMap()
            r1.put(r4, r5)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setDownloadedPluginInfoList(r4)
            return
    }

    public void putLocalGetPlugin(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getLocalPluginInfoDetail()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalGetPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalGetPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalGetPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalGetPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalGetPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalGetPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r1 = r0.getPluginInfoMap()
            r1.put(r4, r5)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setLocalPluginInfoDetail(r4)
            return
    }

    public void putLocalInstallPlugin(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getLocalPlugin()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalInstallPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalInstallPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalInstallPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalInstallPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r1 = r0.getPluginInfoMap()
            r1.put(r4, r5)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setLocalPlugin(r4)
            return
    }

    public void putLocalInstallPlugin(java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getLocalPlugin()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalInstallPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalInstallPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalInstallPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalInstallPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalInstallPluginsEntity
            r0.<init>()
        L1b:
            r0.setPluginInfoMap(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setLocalPlugin(r4)
            return
    }

    public void putLocalSilentDowningPlugin(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getSilentDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r1 = r0.getPluginInfoMap()
            r1.put(r4, r5)
            r0.setPluginInfoMap(r1)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setSilentDownloadingPluginInfoList(r4)
            return
    }

    public void putLocalSilentDowningPlugin(java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getSilentDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity
            r0.<init>()
        L1b:
            r0.setPluginInfoMap(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setSilentDownloadingPluginInfoList(r4)
            return
    }

    public void putLocalUserDowningPlugin(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUserDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPluginInfoMap()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPluginInfoMap(r1)
        L29:
            java.util.Map r1 = r0.getPluginInfoMap()
            r1.put(r4, r5)
            r0.setPluginInfoMap(r1)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setUserDownloadingPluginInfoList(r4)
            return
    }

    public void putLocalUserDowningPlugin(java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getUserDownloadingPluginInfoList()
            java.lang.Class<com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity> r2 = com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = (com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity r0 = new com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity
            r0.<init>()
        L1b:
            r0.setPluginInfoMap(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setUserDownloadingPluginInfoList(r4)
            return
    }

    public void putMergePatchData(java.lang.String r4, com.ymnsdk.replugin.entity.PluginInfo r5) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getMergePatchData()
            java.lang.Class<com.ymnsdk.replugin.entity.MergePatchEnity> r2 = com.ymnsdk.replugin.entity.MergePatchEnity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = (com.ymnsdk.replugin.entity.MergePatchEnity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = new com.ymnsdk.replugin.entity.MergePatchEnity
            r0.<init>()
        L1b:
            java.util.Map r1 = r0.getPatchInfo()
            if (r1 != 0) goto L29
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.setPatchInfo(r1)
        L29:
            java.util.Map r1 = r0.getPatchInfo()
            r1.put(r4, r5)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setMergePatchData(r4)
            return
    }

    public void putMergePatchData(java.util.Map<java.lang.String, com.ymnsdk.replugin.entity.PluginInfo> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getMergePatchData()
            java.lang.Class<com.ymnsdk.replugin.entity.MergePatchEnity> r2 = com.ymnsdk.replugin.entity.MergePatchEnity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = (com.ymnsdk.replugin.entity.MergePatchEnity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.MergePatchEnity r0 = new com.ymnsdk.replugin.entity.MergePatchEnity
            r0.<init>()
        L1b:
            r0.setPatchInfo(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setMergePatchData(r4)
            return
    }

    public void putPluginGrayData(java.util.Map<java.lang.String, java.lang.Boolean> r4) {
            r3 = this;
            com.google.gson.Gson r0 = new com.google.gson.Gson
            r0.<init>()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            java.lang.String r1 = com.ymnsdk.replugin.util.SharedPreferencesUtils.getPluginData()
            java.lang.Class<com.ymnsdk.replugin.entity.PluginGrayEntity> r2 = com.ymnsdk.replugin.entity.PluginGrayEntity.class
            java.lang.Object r0 = r0.fromJson(r1, r2)
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = (com.ymnsdk.replugin.entity.PluginGrayEntity) r0
            if (r0 != 0) goto L1b
            com.ymnsdk.replugin.entity.PluginGrayEntity r0 = new com.ymnsdk.replugin.entity.PluginGrayEntity
            r0.<init>()
        L1b:
            r0.setGrayList(r4)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r4 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r4.toJson(r0)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginData(r4)
            return
    }
}
