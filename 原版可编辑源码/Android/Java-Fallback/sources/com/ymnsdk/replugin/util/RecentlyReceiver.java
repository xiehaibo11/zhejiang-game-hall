package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RecentlyReceiver extends android.content.BroadcastReceiver {
    public RecentlyReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r6, android.content.Intent r7) {
            r5 = this;
            java.lang.String r0 = "reason"
            java.lang.String r7 = r7.getStringExtra(r0)
            if (r7 == 0) goto L68
            r0 = -1
            int r1 = r7.hashCode()
            r2 = 3
            r3 = 2
            r4 = 1
            switch(r1) {
                case -1408204183: goto L32;
                case 350448461: goto L28;
                case 1092716832: goto L1e;
                case 2014770135: goto L14;
                default: goto L13;
            }
        L13:
            goto L3b
        L14:
            java.lang.String r1 = "fs_gesture"
            boolean r1 = r7.equals(r1)
            if (r1 == 0) goto L3b
            r0 = r2
            goto L3b
        L1e:
            java.lang.String r1 = "homekey"
            boolean r1 = r7.equals(r1)
            if (r1 == 0) goto L3b
            r0 = 0
            goto L3b
        L28:
            java.lang.String r1 = "recentapps"
            boolean r1 = r7.equals(r1)
            if (r1 == 0) goto L3b
            r0 = r4
            goto L3b
        L32:
            java.lang.String r1 = "assist"
            boolean r1 = r7.equals(r1)
            if (r1 == 0) goto L3b
            r0 = r3
        L3b:
            if (r0 == 0) goto L44
            if (r0 == r4) goto L44
            if (r0 == r3) goto L44
            if (r0 == r2) goto L44
            goto L68
        L44:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "获取最近应用列表"
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.i(r1, r0)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.other.PullUpTaskListEvent r1 = new com.ymnsdk.replugin.event.other.PullUpTaskListEvent
            android.app.Activity r6 = (android.app.Activity) r6
            r1.<init>(r6, r7)
            r0.postToSeperllita(r1)
        L68:
            return
    }
}
