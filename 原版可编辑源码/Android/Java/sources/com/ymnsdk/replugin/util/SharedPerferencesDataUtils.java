package com.ymnsdk.replugin.util;

import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.google.gson.Gson;
import com.ymnsdk.replugin.entity.DownloadFileDataEnity;
import com.ymnsdk.replugin.entity.LocalDownedPluginsEntity;
import com.ymnsdk.replugin.entity.LocalGetPluginsEntity;
import com.ymnsdk.replugin.entity.LocalInstallPluginsEntity;
import com.ymnsdk.replugin.entity.LocalSilentDowningPluginsEntity;
import com.ymnsdk.replugin.entity.LocalUserDowningPluginsEntity;
import com.ymnsdk.replugin.entity.MergePatchEnity;
import com.ymnsdk.replugin.entity.PluginGrayEntity;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import java.util.HashMap;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class SharedPerferencesDataUtils {
    private static SharedPerferencesDataUtils utils = new SharedPerferencesDataUtils();

    public static SharedPerferencesDataUtils getInstance() {
        return utils;
    }

    public void putLocalUserDowningPlugin(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalUserDowningPluginsEntity localUserDowningPluginsEntity = (LocalUserDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getUserDownloadingPluginInfoList(), LocalUserDowningPluginsEntity.class);
        if (localUserDowningPluginsEntity == null) {
            localUserDowningPluginsEntity = new LocalUserDowningPluginsEntity();
        }
        if (localUserDowningPluginsEntity.getPluginInfoMap() == null) {
            localUserDowningPluginsEntity.setPluginInfoMap(new HashMap());
        }
        Map<String, PluginInfo> pluginInfoMap = localUserDowningPluginsEntity.getPluginInfoMap();
        pluginInfoMap.put(str, pluginInfo);
        localUserDowningPluginsEntity.setPluginInfoMap(pluginInfoMap);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setUserDownloadingPluginInfoList(GsonUtils.getInstance().toJson(localUserDowningPluginsEntity));
    }

    public void putLocalUserDowningPlugin(Map<String, PluginInfo> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalUserDowningPluginsEntity localUserDowningPluginsEntity = (LocalUserDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getUserDownloadingPluginInfoList(), LocalUserDowningPluginsEntity.class);
        if (localUserDowningPluginsEntity == null) {
            localUserDowningPluginsEntity = new LocalUserDowningPluginsEntity();
        }
        localUserDowningPluginsEntity.setPluginInfoMap(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setUserDownloadingPluginInfoList(GsonUtils.getInstance().toJson(localUserDowningPluginsEntity));
    }

    public Map<String, PluginInfo> getLocalUserDowningPlugin() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalUserDowningPluginsEntity localUserDowningPluginsEntity = (LocalUserDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getUserDownloadingPluginInfoList(), LocalUserDowningPluginsEntity.class);
        if (localUserDowningPluginsEntity == null) {
            localUserDowningPluginsEntity = new LocalUserDowningPluginsEntity();
        }
        if (localUserDowningPluginsEntity.getPluginInfoMap() == null) {
            localUserDowningPluginsEntity.setPluginInfoMap(new HashMap());
        }
        return localUserDowningPluginsEntity.getPluginInfoMap();
    }

    public void putLocalSilentDowningPlugin(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalSilentDowningPluginsEntity localSilentDowningPluginsEntity = (LocalSilentDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getSilentDownloadingPluginInfoList(), LocalSilentDowningPluginsEntity.class);
        if (localSilentDowningPluginsEntity == null) {
            localSilentDowningPluginsEntity = new LocalSilentDowningPluginsEntity();
        }
        if (localSilentDowningPluginsEntity.getPluginInfoMap() == null) {
            localSilentDowningPluginsEntity.setPluginInfoMap(new HashMap());
        }
        Map<String, PluginInfo> pluginInfoMap = localSilentDowningPluginsEntity.getPluginInfoMap();
        pluginInfoMap.put(str, pluginInfo);
        localSilentDowningPluginsEntity.setPluginInfoMap(pluginInfoMap);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setSilentDownloadingPluginInfoList(GsonUtils.getInstance().toJson(localSilentDowningPluginsEntity));
    }

    public void putLocalSilentDowningPlugin(Map<String, PluginInfo> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalSilentDowningPluginsEntity localSilentDowningPluginsEntity = (LocalSilentDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getSilentDownloadingPluginInfoList(), LocalSilentDowningPluginsEntity.class);
        if (localSilentDowningPluginsEntity == null) {
            localSilentDowningPluginsEntity = new LocalSilentDowningPluginsEntity();
        }
        localSilentDowningPluginsEntity.setPluginInfoMap(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setSilentDownloadingPluginInfoList(GsonUtils.getInstance().toJson(localSilentDowningPluginsEntity));
    }

    public Map<String, PluginInfo> getLocalSilentDowningPlugin() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalSilentDowningPluginsEntity localSilentDowningPluginsEntity = (LocalSilentDowningPluginsEntity) gson.fromJson(SharedPreferencesUtils.getSilentDownloadingPluginInfoList(), LocalSilentDowningPluginsEntity.class);
        if (localSilentDowningPluginsEntity == null) {
            localSilentDowningPluginsEntity = new LocalSilentDowningPluginsEntity();
        }
        if (localSilentDowningPluginsEntity.getPluginInfoMap() == null) {
            localSilentDowningPluginsEntity.setPluginInfoMap(new HashMap());
        }
        return localSilentDowningPluginsEntity.getPluginInfoMap();
    }

    public void putLocalDownedPlugin(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalDownedPluginsEntity localDownedPluginsEntity = (LocalDownedPluginsEntity) gson.fromJson(SharedPreferencesUtils.getDownloadedPluginInfoList(), LocalDownedPluginsEntity.class);
        if (localDownedPluginsEntity == null) {
            localDownedPluginsEntity = new LocalDownedPluginsEntity();
        }
        if (localDownedPluginsEntity.getPluginInfoMap() == null) {
            localDownedPluginsEntity.setPluginInfoMap(new HashMap());
        }
        localDownedPluginsEntity.getPluginInfoMap().put(str, pluginInfo);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setDownloadedPluginInfoList(GsonUtils.getInstance().toJson(localDownedPluginsEntity));
    }

    public Map<String, PluginInfo> getLocalDownedPlugin() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalDownedPluginsEntity localDownedPluginsEntity = (LocalDownedPluginsEntity) gson.fromJson(SharedPreferencesUtils.getDownloadedPluginInfoList(), LocalDownedPluginsEntity.class);
        if (localDownedPluginsEntity == null) {
            localDownedPluginsEntity = new LocalDownedPluginsEntity();
        }
        if (localDownedPluginsEntity.getPluginInfoMap() == null) {
            localDownedPluginsEntity.setPluginInfoMap(new HashMap());
        }
        return localDownedPluginsEntity.getPluginInfoMap();
    }

    public void putLocalGetPlugin(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalGetPluginsEntity localGetPluginsEntity = (LocalGetPluginsEntity) gson.fromJson(SharedPreferencesUtils.getLocalPluginInfoDetail(), LocalGetPluginsEntity.class);
        if (localGetPluginsEntity == null) {
            localGetPluginsEntity = new LocalGetPluginsEntity();
        }
        if (localGetPluginsEntity.getPluginInfoMap() == null) {
            localGetPluginsEntity.setPluginInfoMap(new HashMap());
        }
        localGetPluginsEntity.getPluginInfoMap().put(str, pluginInfo);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setLocalPluginInfoDetail(GsonUtils.getInstance().toJson(localGetPluginsEntity));
    }

    public Map<String, PluginInfo> getLocalGetPlugin() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalGetPluginsEntity localGetPluginsEntity = (LocalGetPluginsEntity) gson.fromJson(SharedPreferencesUtils.getLocalPluginInfoDetail(), LocalGetPluginsEntity.class);
        if (localGetPluginsEntity == null) {
            localGetPluginsEntity = new LocalGetPluginsEntity();
        }
        if (localGetPluginsEntity.getPluginInfoMap() == null) {
            localGetPluginsEntity.setPluginInfoMap(new HashMap());
        }
        return localGetPluginsEntity.getPluginInfoMap();
    }

    public void putLocalInstallPlugin(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalInstallPluginsEntity localInstallPluginsEntity = (LocalInstallPluginsEntity) gson.fromJson(SharedPreferencesUtils.getLocalPlugin(), LocalInstallPluginsEntity.class);
        if (localInstallPluginsEntity == null) {
            localInstallPluginsEntity = new LocalInstallPluginsEntity();
        }
        if (localInstallPluginsEntity.getPluginInfoMap() == null) {
            localInstallPluginsEntity.setPluginInfoMap(new HashMap());
        }
        localInstallPluginsEntity.getPluginInfoMap().put(str, pluginInfo);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setLocalPlugin(GsonUtils.getInstance().toJson(localInstallPluginsEntity));
    }

    public void putLocalInstallPlugin(Map<String, PluginInfo> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalInstallPluginsEntity localInstallPluginsEntity = (LocalInstallPluginsEntity) gson.fromJson(SharedPreferencesUtils.getLocalPlugin(), LocalInstallPluginsEntity.class);
        if (localInstallPluginsEntity == null) {
            localInstallPluginsEntity = new LocalInstallPluginsEntity();
        }
        localInstallPluginsEntity.setPluginInfoMap(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setLocalPlugin(GsonUtils.getInstance().toJson(localInstallPluginsEntity));
    }

    public Map<String, PluginInfo> getLocalInstallPlugin() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        LocalInstallPluginsEntity localInstallPluginsEntity = (LocalInstallPluginsEntity) gson.fromJson(SharedPreferencesUtils.getLocalPlugin(), LocalInstallPluginsEntity.class);
        if (localInstallPluginsEntity == null) {
            localInstallPluginsEntity = new LocalInstallPluginsEntity();
        }
        if (localInstallPluginsEntity.getPluginInfoMap() == null) {
            localInstallPluginsEntity.setPluginInfoMap(new HashMap());
        }
        return localInstallPluginsEntity.getPluginInfoMap();
    }

    public void putDownloadFileData(Map<String, DownloadFileInfo> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        DownloadFileDataEnity downloadFileDataEnity = (DownloadFileDataEnity) gson.fromJson(SharedPreferencesUtils.getDownloadFiledata(), DownloadFileDataEnity.class);
        if (downloadFileDataEnity == null) {
            downloadFileDataEnity = new DownloadFileDataEnity();
        }
        downloadFileDataEnity.setInfoMap(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setDownloadFiledata(GsonUtils.getInstance().toJson(downloadFileDataEnity));
    }

    public Map<String, DownloadFileInfo> getDownloadFileData() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        DownloadFileDataEnity downloadFileDataEnity = (DownloadFileDataEnity) gson.fromJson(SharedPreferencesUtils.getDownloadFiledata(), DownloadFileDataEnity.class);
        if (downloadFileDataEnity == null) {
            downloadFileDataEnity = new DownloadFileDataEnity();
        }
        if (downloadFileDataEnity.getInfoMap() == null) {
            downloadFileDataEnity.setInfoMap(new HashMap());
        }
        return downloadFileDataEnity.getInfoMap();
    }

    public void putMergePatchData(String str, PluginInfo pluginInfo) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        MergePatchEnity mergePatchEnity = (MergePatchEnity) gson.fromJson(SharedPreferencesUtils.getMergePatchData(), MergePatchEnity.class);
        if (mergePatchEnity == null) {
            mergePatchEnity = new MergePatchEnity();
        }
        if (mergePatchEnity.getPatchInfo() == null) {
            mergePatchEnity.setPatchInfo(new HashMap());
        }
        mergePatchEnity.getPatchInfo().put(str, pluginInfo);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setMergePatchData(GsonUtils.getInstance().toJson(mergePatchEnity));
    }

    public void putMergePatchData(Map<String, PluginInfo> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        MergePatchEnity mergePatchEnity = (MergePatchEnity) gson.fromJson(SharedPreferencesUtils.getMergePatchData(), MergePatchEnity.class);
        if (mergePatchEnity == null) {
            mergePatchEnity = new MergePatchEnity();
        }
        mergePatchEnity.setPatchInfo(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setMergePatchData(GsonUtils.getInstance().toJson(mergePatchEnity));
    }

    public Map<String, PluginInfo> gutMergePatchData() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        MergePatchEnity mergePatchEnity = (MergePatchEnity) gson.fromJson(SharedPreferencesUtils.getMergePatchData(), MergePatchEnity.class);
        if (mergePatchEnity == null) {
            mergePatchEnity = new MergePatchEnity();
        }
        if (mergePatchEnity.getPatchInfo() == null) {
            mergePatchEnity.setPatchInfo(new HashMap());
        }
        return mergePatchEnity.getPatchInfo();
    }

    public void putPluginGrayData(Map<String, Boolean> map) {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        PluginGrayEntity pluginGrayEntity = (PluginGrayEntity) gson.fromJson(SharedPreferencesUtils.getPluginData(), PluginGrayEntity.class);
        if (pluginGrayEntity == null) {
            pluginGrayEntity = new PluginGrayEntity();
        }
        pluginGrayEntity.setGrayList(map);
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setPluginData(GsonUtils.getInstance().toJson(pluginGrayEntity));
    }

    public Map<String, Boolean> getPluginGrayData() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        PluginGrayEntity pluginGrayEntity = (PluginGrayEntity) gson.fromJson(SharedPreferencesUtils.getPluginData(), PluginGrayEntity.class);
        if (pluginGrayEntity == null) {
            pluginGrayEntity = new PluginGrayEntity();
        }
        if (pluginGrayEntity.getGrayList() == null) {
            pluginGrayEntity.setGrayList(new HashMap());
        }
        return pluginGrayEntity.getGrayList();
    }

    public void clearPluginGrayData() {
        Gson gson = new Gson();
        SharedPreferencesUtils.getInstance();
        PluginGrayEntity pluginGrayEntity = (PluginGrayEntity) gson.fromJson(SharedPreferencesUtils.getPluginData(), PluginGrayEntity.class);
        if (pluginGrayEntity == null) {
            pluginGrayEntity = new PluginGrayEntity();
        }
        if (pluginGrayEntity.getGrayList() == null) {
            pluginGrayEntity.setGrayList(new HashMap());
        }
        pluginGrayEntity.getGrayList().clear();
        SharedPreferencesUtils.getInstance();
        SharedPreferencesUtils.setPluginData(GsonUtils.getInstance().toJson(pluginGrayEntity));
    }
}
