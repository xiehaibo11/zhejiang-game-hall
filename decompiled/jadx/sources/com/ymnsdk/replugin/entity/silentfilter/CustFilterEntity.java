package com.ymnsdk.replugin.entity.silentfilter;

import com.xiaomi.mipush.sdk.Constants;
import java.util.Arrays;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class CustFilterEntity {
    int is_white_list;
    String list;
    String release_type;
    String remark;

    public int getIs_white_list() {
        return this.is_white_list;
    }

    public void setIs_white_list(int i) {
        this.is_white_list = i;
    }

    public String getListstr() {
        return this.list;
    }

    public void setListstr(String str) {
        this.list = str;
    }

    public List<String> getArray() {
        if (this.list.isEmpty()) {
            return null;
        }
        return Arrays.asList(this.list.split(Constants.ACCEPT_TIME_SEPARATOR_SP));
    }
}
