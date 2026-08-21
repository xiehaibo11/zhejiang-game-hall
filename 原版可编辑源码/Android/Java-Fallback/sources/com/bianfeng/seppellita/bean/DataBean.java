package com.bianfeng.seppellita.bean;

public class DataBean {
    private java.lang.String db_seppellita_data;
    private java.lang.String db_seppellita_dataTime;
    private long db_seppellita_time;
    private int id;

    public DataBean(java.lang.String r1, long r2, java.lang.String r4) {
            r0 = this;
            r0.<init>()
            r0.db_seppellita_data = r1
            r0.db_seppellita_dataTime = r4
            r0.db_seppellita_time = r2
            return
    }

    public java.lang.String getData() {
            r1 = this;
            java.lang.String r0 = r1.db_seppellita_data
            return r0
    }

    public java.lang.String getDataTime() {
            r1 = this;
            java.lang.String r0 = r1.db_seppellita_dataTime
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }

    public long getTime() {
            r2 = this;
            long r0 = r2.db_seppellita_time
            return r0
    }

    public void setDataTime(java.lang.String r1) {
            r0 = this;
            r0.db_seppellita_dataTime = r1
            return
    }

    public void setId(int r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            return r0
    }
}
