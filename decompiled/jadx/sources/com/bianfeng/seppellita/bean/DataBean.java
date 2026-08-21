package com.bianfeng.seppellita.bean;

import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;

/* JADX INFO: loaded from: classes.dex */
public class DataBean {
    private String db_seppellita_data;
    private String db_seppellita_dataTime;
    private long db_seppellita_time;
    private int id;

    public DataBean(String str, long j, String str2) {
        this.db_seppellita_data = str;
        this.db_seppellita_dataTime = str2;
        this.db_seppellita_time = j;
    }

    public String toString() {
        return SeppellitaGsonUtils.toJson(this);
    }

    public int getId() {
        return this.id;
    }

    public void setId(int i) {
        this.id = i;
    }

    public String getData() {
        return this.db_seppellita_data;
    }

    public String getDataTime() {
        return this.db_seppellita_dataTime;
    }

    public void setDataTime(String str) {
        this.db_seppellita_dataTime = str;
    }

    public long getTime() {
        return this.db_seppellita_time;
    }
}
