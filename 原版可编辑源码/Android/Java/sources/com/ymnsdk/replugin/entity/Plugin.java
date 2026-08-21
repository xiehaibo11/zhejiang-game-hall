package com.ymnsdk.replugin.entity;

import com.ymnsdk.replugin.entity.silentfilter.SilentUpdateFilterEnity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class Plugin {
    private String base_url;
    int common_mode;
    private String description;
    private String gray_manifest_path;
    private int gray_update_type;
    private int gray_update_type_v22;
    private String gray_version;
    private GrayscaleCondition grayscale_condition;
    private String id;
    private String manifest_path;
    int notify_after_update_enabled;
    int notify_before_update_enabled;
    int notify_launch_failure_enabled;
    private int silent_update = 1;
    SilentUpdateFilterEnity silent_update_filter;
    private int silent_update_priority;
    private String state_path;
    private int update_type;
    private int update_type_v22;
    private String version;

    public String getId() {
        return this.id;
    }

    public void setId(String str) {
        this.id = str;
    }

    public String getVersion() {
        return this.version;
    }

    public void setVersion(String str) {
        this.version = str;
    }

    public String getBase_url() {
        return this.base_url;
    }

    public void setBase_url(String str) {
        this.base_url = str;
    }

    public String getManifest_path() {
        return this.manifest_path;
    }

    public void setManifest_path(String str) {
        this.manifest_path = str;
    }

    public String getState_path() {
        return this.state_path;
    }

    public void setState_path(String str) {
        this.state_path = str;
    }

    public int getUpdate_type() {
        return this.update_type;
    }

    public void setUpdate_type(int i) {
        this.update_type = i;
    }

    public String getDescription() {
        return this.description;
    }

    public void setDescription(String str) {
        this.description = str;
    }

    public int getSilent_update() {
        return this.silent_update;
    }

    public void setSilent_update(int i) {
        this.silent_update = i;
    }

    public int getSilent_update_priority() {
        return this.silent_update_priority;
    }

    public void setSilent_update_priority(int i) {
        this.silent_update_priority = i;
    }

    public String getGray_version() {
        return this.gray_version;
    }

    public void setGray_version(String str) {
        this.gray_version = str;
    }

    public String getGray_manifest_path() {
        return this.gray_manifest_path;
    }

    public void setGray_manifest_path(String str) {
        this.gray_manifest_path = str;
    }

    public GrayscaleCondition getGrayscale_condition() {
        return this.grayscale_condition;
    }

    public void setGrayscale_condition(GrayscaleCondition grayscaleCondition) {
        this.grayscale_condition = grayscaleCondition;
    }

    public int getGray_update_type() {
        return this.gray_update_type;
    }

    public void setGray_update_type(int i) {
        this.gray_update_type = i;
    }

    public int getCommon_mode() {
        return this.common_mode;
    }

    public void setCommon_mode(int i) {
        this.common_mode = i;
    }

    public int getNotify_before_update_enabled() {
        return this.notify_before_update_enabled;
    }

    public void setNotify_before_update_enabled(int i) {
        this.notify_before_update_enabled = i;
    }

    public int getNotify_after_update_enabled() {
        return this.notify_after_update_enabled;
    }

    public void setNotify_after_update_enabled(int i) {
        this.notify_after_update_enabled = i;
    }

    public int getNotify_launch_failure_enabled() {
        return this.notify_launch_failure_enabled;
    }

    public void setNotify_launch_failure_enabled(int i) {
        this.notify_launch_failure_enabled = i;
    }

    public SilentUpdateFilterEnity getSilent_update_filter() {
        return this.silent_update_filter;
    }

    public void setSilent_update_filter(SilentUpdateFilterEnity silentUpdateFilterEnity) {
        this.silent_update_filter = silentUpdateFilterEnity;
    }

    public int getUpdate_type_v22() {
        return this.update_type_v22;
    }

    public void setUpdate_type_v22(int i) {
        this.update_type_v22 = i;
    }

    public int getGray_update_type_v22() {
        return this.gray_update_type_v22;
    }

    public void setGray_update_type_v22(int i) {
        this.gray_update_type_v22 = i;
    }
}
