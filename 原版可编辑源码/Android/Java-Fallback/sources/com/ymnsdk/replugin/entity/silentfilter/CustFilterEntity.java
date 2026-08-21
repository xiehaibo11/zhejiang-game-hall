package com.ymnsdk.replugin.entity.silentfilter;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CustFilterEntity {
    int is_white_list;
    java.lang.String list;
    java.lang.String release_type;
    java.lang.String remark;

    public CustFilterEntity() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.util.List<java.lang.String> getArray() {
            r2 = this;
            java.lang.String r0 = r2.list
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto La
            r0 = 0
            return r0
        La:
            java.lang.String r0 = r2.list
            java.lang.String r1 = ","
            java.lang.String[] r0 = r0.split(r1)
            java.util.List r0 = java.util.Arrays.asList(r0)
            return r0
    }

    public int getIs_white_list() {
            r1 = this;
            int r0 = r1.is_white_list
            return r0
    }

    public java.lang.String getListstr() {
            r1 = this;
            java.lang.String r0 = r1.list
            return r0
    }

    public void setIs_white_list(int r1) {
            r0 = this;
            r0.is_white_list = r1
            return
    }

    public void setListstr(java.lang.String r1) {
            r0 = this;
            r0.list = r1
            return
    }
}
