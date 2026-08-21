package com.qihoo360.mobilesafe.parser.manifest.bean;

import android.content.IntentFilter;
import java.util.List;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ComponentBean {
    public List<IntentFilter> intentFilters;
    public String name;

    public String toString() {
        return String.format("{name:%s, intent-filter.size():%s}", this.name, Integer.valueOf(this.intentFilters.size()));
    }
}
