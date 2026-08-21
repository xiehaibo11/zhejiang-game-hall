package com.ymnsdk.replugin.entity;

import java.util.ArrayList;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginInfo {
    private String description;
    private String entrance_activity;
    private String file_md5;
    private long file_size;
    private List<String> md5List = new ArrayList();
    private String package_name;
    private List<Patch> patch;
    private String plugin_id;
    private String plugin_version;
    private String release_path;

    public String getPlugin_id() {
        return this.plugin_id;
    }

    public void setPlugin_id(String str) {
        this.plugin_id = str;
    }

    public String getPlugin_version() {
        return this.plugin_version;
    }

    public void setPlugin_version(String str) {
        this.plugin_version = str;
    }

    public String getPackage_name() {
        return this.package_name;
    }

    public void setPackage_name(String str) {
        this.package_name = str;
    }

    public String getEntrance_activity() {
        return this.entrance_activity;
    }

    public void setEntrance_activity(String str) {
        this.entrance_activity = str;
    }

    public long getFile_size() {
        return this.file_size;
    }

    public void setFile_size(long j) {
        this.file_size = j;
    }

    public String getFile_md5() {
        return this.file_md5;
    }

    public void setFile_md5(String str) {
        this.file_md5 = str;
    }

    public String getDescription() {
        return this.description;
    }

    public void setDescription(String str) {
        this.description = str;
    }

    public String getRelease_path() {
        return this.release_path;
    }

    public void setRelease_path(String str) {
        this.release_path = str;
    }

    public List<Patch> getPatch() {
        return this.patch;
    }

    public void setPatch(List<Patch> list) {
        this.patch = list;
    }

    public Patch getPatch(String str) {
        List<Patch> list = this.patch;
        if (list != null && list.size() > 0) {
            for (int i = 0; i < this.patch.size(); i++) {
                if (this.patch.get(i).getFrom_version().equals(str)) {
                    return this.patch.get(i);
                }
            }
        }
        return new Patch();
    }

    public List<String> getMd5List() {
        return this.md5List;
    }

    public void setMd5List(List<String> list) {
        this.md5List = list;
    }
}
