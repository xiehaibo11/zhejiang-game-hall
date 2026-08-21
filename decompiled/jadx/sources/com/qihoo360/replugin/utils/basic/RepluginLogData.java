package com.qihoo360.replugin.utils.basic;

import java.io.Serializable;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RepluginLogData implements Serializable {
    ArrayList<String> logList;
    int size;

    public int getSize() {
        return this.size;
    }

    public void setSize(int i) {
        this.size = i;
    }

    public ArrayList<String> getLogList() {
        return this.logList;
    }

    public void setLogList(ArrayList<String> arrayList) {
        this.logList = arrayList;
    }
}
