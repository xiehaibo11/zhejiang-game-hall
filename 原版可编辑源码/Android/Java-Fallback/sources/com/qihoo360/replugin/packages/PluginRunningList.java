package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginRunningList implements android.os.Parcelable, java.lang.Iterable<java.lang.String>, java.lang.Cloneable {
    public static final android.os.Parcelable.Creator<com.qihoo360.replugin.packages.PluginRunningList> CREATOR = null;
    private final java.util.ArrayList<java.lang.String> mList;
    int mPid;
    java.lang.String mProcessName;


    static {
            com.qihoo360.replugin.packages.PluginRunningList$1 r0 = new com.qihoo360.replugin.packages.PluginRunningList$1
            r0.<init>()
            com.qihoo360.replugin.packages.PluginRunningList.CREATOR = r0
            return
    }

    PluginRunningList() {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.mPid = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mList = r0
            return
    }

    private PluginRunningList(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.mPid = r0
            java.lang.String r0 = r2.readString()
            r1.mProcessName = r0
            int r0 = r2.readInt()
            r1.mPid = r0
            java.io.Serializable r2 = r2.readSerializable()
            java.util.ArrayList r2 = (java.util.ArrayList) r2
            r1.mList = r2
            return
    }

    PluginRunningList(android.os.Parcel r1, com.qihoo360.replugin.packages.PluginRunningList.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    PluginRunningList(com.qihoo360.replugin.packages.PluginRunningList r2) {
            r1 = this;
            r1.<init>()
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r1.mPid = r0
            java.lang.String r0 = r2.mProcessName
            r1.mProcessName = r0
            int r0 = r2.mPid
            r1.mPid = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r2 = r2.getList()
            r0.<init>(r2)
            r1.mList = r0
            return
    }

    void add(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.isRunning(r2)     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Lc
            java.util.ArrayList<java.lang.String> r0 = r1.mList     // Catch: java.lang.Throwable -> Le
            r0.add(r2)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Le
            throw r2
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.qihoo360.replugin.packages.PluginRunningList r0 = new com.qihoo360.replugin.packages.PluginRunningList
            r0.<init>(r1)
            return r0
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L36
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L36
        L12:
            com.qihoo360.replugin.packages.PluginRunningList r5 = (com.qihoo360.replugin.packages.PluginRunningList) r5
            int r2 = r4.mPid
            int r3 = r5.mPid
            if (r2 == r3) goto L1b
            return r1
        L1b:
            java.util.ArrayList<java.lang.String> r2 = r4.mList
            java.util.ArrayList<java.lang.String> r3 = r5.mList
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L26
            return r1
        L26:
            java.lang.String r2 = r4.mProcessName
            java.lang.String r5 = r5.mProcessName
            if (r2 == 0) goto L31
            boolean r0 = r2.equals(r5)
            goto L35
        L31:
            if (r5 != 0) goto L34
            goto L35
        L34:
            r0 = r1
        L35:
            return r0
        L36:
            return r1
    }

    java.util.List<java.lang.String> getList() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mList
            return r0
    }

    boolean hasRunning() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mList
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.util.ArrayList<java.lang.String> r0 = r2.mList
            int r0 = r0.hashCode()
            int r0 = r0 * 31
            java.lang.String r1 = r2.mProcessName
            if (r1 == 0) goto L11
            int r1 = r1.hashCode()
            goto L12
        L11:
            r1 = 0
        L12:
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r2.mPid
            int r0 = r0 + r1
            return r0
    }

    boolean isRunning(java.lang.String r2) {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mList
            boolean r2 = r0.contains(r2)
            return r2
    }

    @Override
    public java.util.Iterator<java.lang.String> iterator() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.mList
            java.util.Iterator r0 = r0.iterator()
            return r0
    }

    void setProcessInfo(java.lang.String r1, int r2) {
            r0 = this;
            r0.mProcessName = r1
            r0.mPid = r2
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PRunningL{ "
            r0.append(r1)
            int r1 = r3.mPid
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 != r2) goto L16
            java.lang.String r1 = "<UNKNOWN_PID>"
            r0.append(r1)
            goto L2f
        L16:
            r1 = 60
            r0.append(r1)
            java.lang.String r1 = r3.mProcessName
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            int r1 = r3.mPid
            r0.append(r1)
            java.lang.String r1 = "> "
            r0.append(r1)
        L2f:
            java.util.ArrayList<java.lang.String> r1 = r3.mList
            r0.append(r1)
            java.lang.String r1 = " }"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.mProcessName
            r1.writeString(r2)
            int r2 = r0.mPid
            r1.writeInt(r2)
            java.util.ArrayList<java.lang.String> r2 = r0.mList
            r1.writeSerializable(r2)
            return
    }
}
