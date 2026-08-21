package com.qihoo360.replugin.packages;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.text.Typography;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginRunningList implements Parcelable, Iterable<String>, Cloneable {
    public static final Parcelable.Creator<PluginRunningList> CREATOR = new Parcelable.Creator<PluginRunningList>() {
        @Override
        public PluginRunningList createFromParcel(Parcel parcel) {
            return new PluginRunningList(parcel);
        }

        @Override
        public PluginRunningList[] newArray(int i) {
            return new PluginRunningList[i];
        }
    };
    private final ArrayList<String> mList;
    int mPid;
    String mProcessName;

    @Override
    public int describeContents() {
        return 0;
    }

    PluginRunningList() {
        this.mPid = Integer.MIN_VALUE;
        this.mList = new ArrayList<>();
    }

    PluginRunningList(PluginRunningList pluginRunningList) {
        this.mPid = Integer.MIN_VALUE;
        this.mProcessName = pluginRunningList.mProcessName;
        this.mPid = pluginRunningList.mPid;
        this.mList = new ArrayList<>(pluginRunningList.getList());
    }

    void setProcessInfo(String str, int i) {
        this.mProcessName = str;
        this.mPid = i;
    }

    void add(String str) {
        synchronized (this) {
            if (!isRunning(str)) {
                this.mList.add(str);
            }
        }
    }

    boolean isRunning(String str) {
        return this.mList.contains(str);
    }

    boolean hasRunning() {
        return !this.mList.isEmpty();
    }

    List<String> getList() {
        return this.mList;
    }

    @Override
    public Iterator<String> iterator() {
        return this.mList.iterator();
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("PRunningL{ ");
        if (this.mPid == Integer.MIN_VALUE) {
            sb.append("<UNKNOWN_PID>");
        } else {
            sb.append(Typography.less);
            sb.append(this.mProcessName);
            sb.append(':');
            sb.append(this.mPid);
            sb.append("> ");
        }
        sb.append(this.mList);
        sb.append(" }");
        return sb.toString();
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        PluginRunningList pluginRunningList = (PluginRunningList) obj;
        if (this.mPid != pluginRunningList.mPid || !this.mList.equals(pluginRunningList.mList)) {
            return false;
        }
        String str = this.mProcessName;
        String str2 = pluginRunningList.mProcessName;
        return str != null ? str.equals(str2) : str2 == null;
    }

    public int hashCode() {
        int iHashCode = this.mList.hashCode() * 31;
        String str = this.mProcessName;
        return ((iHashCode + (str != null ? str.hashCode() : 0)) * 31) + this.mPid;
    }

    protected Object clone() throws CloneNotSupportedException {
        return new PluginRunningList(this);
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.mProcessName);
        parcel.writeInt(this.mPid);
        parcel.writeSerializable(this.mList);
    }

    private PluginRunningList(Parcel parcel) {
        this.mPid = Integer.MIN_VALUE;
        this.mProcessName = parcel.readString();
        this.mPid = parcel.readInt();
        this.mList = (ArrayList) parcel.readSerializable();
    }
}
