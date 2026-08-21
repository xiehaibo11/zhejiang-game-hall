package com.kwad.sdk.crash.model.message;

public class MemoryInfo implements com.kwad.sdk.core.b, java.io.Serializable {
    private static final long serialVersionUID = -4944913077323984734L;
    public java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> mAllThreads;
    public int mAvailableMB;
    public int mFdCount;
    public java.util.List<java.lang.String> mFds;
    public int mJavaHeapLimitMB;
    public int mJavaHeapMB;
    public java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> mJavaThreads;
    public java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> mNativeThreads;
    public int mPssMB;
    public int mRssMB;
    public int mThreadsCount;
    public int mTotalMB;
    public int mVssMB;

    public MemoryInfo() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mFds = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mJavaThreads = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mNativeThreads = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAllThreads = r0
            return
    }

    public MemoryInfo(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mFds = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mJavaThreads = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mNativeThreads = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mAllThreads = r0
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: org.json.JSONException -> L36
            if (r0 != 0) goto L35
            java.lang.String r0 = "Unknown"
            boolean r0 = r0.equals(r2)     // Catch: org.json.JSONException -> L36
            if (r0 != 0) goto L35
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L36
            r0.<init>(r2)     // Catch: org.json.JSONException -> L36
            r1.parseJson(r0)     // Catch: org.json.JSONException -> L36
        L35:
            return
        L36:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    @Override
    public void parseJson(org.json.JSONObject r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "mTotalMB"
            int r0 = r6.optInt(r0)
            r5.mTotalMB = r0
            java.lang.String r0 = "mAvailableMB"
            int r0 = r6.optInt(r0)
            r5.mAvailableMB = r0
            java.lang.String r0 = "mJavaHeapLimitMB"
            int r0 = r6.optInt(r0)
            r5.mJavaHeapLimitMB = r0
            java.lang.String r0 = "mJavaHeapMB"
            int r0 = r6.optInt(r0)
            r5.mJavaHeapMB = r0
            java.lang.String r0 = "mVssMB"
            int r0 = r6.optInt(r0)
            r5.mVssMB = r0
            java.lang.String r0 = "mRssMB"
            int r0 = r6.optInt(r0)
            r5.mRssMB = r0
            java.lang.String r0 = "mPssMB"
            int r0 = r6.optInt(r0)
            r5.mPssMB = r0
            java.lang.String r0 = "mThreadsCount"
            int r0 = r6.optInt(r0)
            r5.mThreadsCount = r0
            java.lang.String r0 = "mFdCount"
            int r0 = r6.optInt(r0)
            r5.mFdCount = r0
            java.lang.String r0 = "mFds"
            org.json.JSONArray r0 = r6.optJSONArray(r0)     // Catch: java.lang.Exception -> Lf6
            r1 = 0
            if (r0 == 0) goto L75
            int r2 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 <= 0) goto L75
            r2 = r1
        L5b:
            int r3 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 >= r3) goto L75
            java.lang.String r3 = r0.optString(r2)     // Catch: java.lang.Exception -> Lf6
            if (r3 == 0) goto L72
            boolean r4 = r3.isEmpty()     // Catch: java.lang.Exception -> Lf6
            if (r4 != 0) goto L72
            java.util.List<java.lang.String> r4 = r5.mFds     // Catch: java.lang.Exception -> Lf6
            r4.add(r3)     // Catch: java.lang.Exception -> Lf6
        L72:
            int r2 = r2 + 1
            goto L5b
        L75:
            java.lang.String r0 = "mJavaThreads"
            org.json.JSONArray r0 = r6.optJSONArray(r0)     // Catch: java.lang.Exception -> Lf6
            if (r0 == 0) goto La0
            int r2 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 <= 0) goto La0
            r2 = r1
        L84:
            int r3 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 >= r3) goto La0
            org.json.JSONObject r3 = r0.optJSONObject(r2)     // Catch: java.lang.Exception -> Lf6
            if (r3 == 0) goto L9d
            com.kwad.sdk.crash.model.message.ThreadInfo r4 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Exception -> Lf6
            r4.<init>()     // Catch: java.lang.Exception -> Lf6
            r4.parseJson(r3)     // Catch: java.lang.Exception -> Lf6
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r3 = r5.mJavaThreads     // Catch: java.lang.Exception -> Lf6
            r3.add(r4)     // Catch: java.lang.Exception -> Lf6
        L9d:
            int r2 = r2 + 1
            goto L84
        La0:
            java.lang.String r0 = "mNativeThreads"
            org.json.JSONArray r0 = r6.optJSONArray(r0)     // Catch: java.lang.Exception -> Lf6
            if (r0 == 0) goto Lcb
            int r2 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 <= 0) goto Lcb
            r2 = r1
        Laf:
            int r3 = r0.length()     // Catch: java.lang.Exception -> Lf6
            if (r2 >= r3) goto Lcb
            org.json.JSONObject r3 = r0.optJSONObject(r2)     // Catch: java.lang.Exception -> Lf6
            if (r3 == 0) goto Lc8
            com.kwad.sdk.crash.model.message.ThreadInfo r4 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Exception -> Lf6
            r4.<init>()     // Catch: java.lang.Exception -> Lf6
            r4.parseJson(r3)     // Catch: java.lang.Exception -> Lf6
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r3 = r5.mNativeThreads     // Catch: java.lang.Exception -> Lf6
            r3.add(r4)     // Catch: java.lang.Exception -> Lf6
        Lc8:
            int r2 = r2 + 1
            goto Laf
        Lcb:
            java.lang.String r0 = "mAllThreads"
            org.json.JSONArray r6 = r6.optJSONArray(r0)     // Catch: java.lang.Exception -> Lf6
            if (r6 == 0) goto Lf5
            int r0 = r6.length()     // Catch: java.lang.Exception -> Lf6
            if (r0 <= 0) goto Lf5
        Ld9:
            int r0 = r6.length()     // Catch: java.lang.Exception -> Lf6
            if (r1 >= r0) goto Lf5
            org.json.JSONObject r0 = r6.optJSONObject(r1)     // Catch: java.lang.Exception -> Lf6
            if (r0 == 0) goto Lf2
            com.kwad.sdk.crash.model.message.ThreadInfo r2 = new com.kwad.sdk.crash.model.message.ThreadInfo     // Catch: java.lang.Exception -> Lf6
            r2.<init>()     // Catch: java.lang.Exception -> Lf6
            r2.parseJson(r0)     // Catch: java.lang.Exception -> Lf6
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r0 = r5.mAllThreads     // Catch: java.lang.Exception -> Lf6
            r0.add(r2)     // Catch: java.lang.Exception -> Lf6
        Lf2:
            int r1 = r1 + 1
            goto Ld9
        Lf5:
            return
        Lf6:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r6)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.mTotalMB
            java.lang.String r2 = "mTotalMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mAvailableMB
            java.lang.String r2 = "mAvailableMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mJavaHeapLimitMB
            java.lang.String r2 = "mJavaHeapLimitMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mJavaHeapMB
            java.lang.String r2 = "mJavaHeapMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mVssMB
            java.lang.String r2 = "mVssMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mRssMB
            java.lang.String r2 = "mRssMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mPssMB
            java.lang.String r2 = "mPssMB"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mThreadsCount
            java.lang.String r2 = "mThreadsCount"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            int r1 = r3.mFdCount
            java.lang.String r2 = "mFdCount"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<java.lang.String> r1 = r3.mFds
            java.lang.String r2 = "mFds"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r1 = r3.mJavaThreads
            java.lang.String r2 = "mJavaThreads"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r1 = r3.mNativeThreads
            java.lang.String r2 = "mNativeThreads"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r1 = r3.mAllThreads
            java.lang.String r2 = "mAllThreads"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\t总RAM容量: "
            r0.append(r1)
            int r1 = r6.mTotalMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t剩余RAM容量: "
            r0.append(r1)
            int r1 = r6.mAvailableMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t本进程Java堆上限: "
            r0.append(r1)
            int r1 = r6.mJavaHeapLimitMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t本进程Java堆已使用: "
            r0.append(r1)
            int r1 = r6.mJavaHeapMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t虚拟地址空间已使用Vss: "
            r0.append(r1)
            int r1 = r6.mVssMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t实际空间使用量(包含共享库) Rss: "
            r0.append(r1)
            int r1 = r6.mRssMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t实际空间使用量(共享库已经均摊)(高内存杀进程的依据）Pss: "
            r0.append(r1)
            int r1 = r6.mPssMB
            r0.append(r1)
            java.lang.String r1 = " (MB)\n\t打开文件描述符数: "
            r0.append(r1)
            int r1 = r6.mFdCount
            r0.append(r1)
            java.lang.String r1 = "\n"
            r0.append(r1)
            java.util.List<java.lang.String> r2 = r6.mFds
            int r2 = r2.size()
            java.lang.String r3 = "\t"
            if (r2 <= 0) goto L85
            java.lang.String r2 = "\t文件描述符详情: \n"
            r0.append(r2)
            java.util.List<java.lang.String> r2 = r6.mFds
            java.util.Iterator r2 = r2.iterator()
        L6f:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L85
            java.lang.Object r4 = r2.next()
            java.lang.String r4 = (java.lang.String) r4
            r0.append(r3)
            r0.append(r4)
            r0.append(r1)
            goto L6f
        L85:
            java.lang.String r2 = "\t正在运行线程数: "
            r0.append(r2)
            int r2 = r6.mThreadsCount
            r0.append(r2)
            java.lang.String r2 = "\tJava: "
            r0.append(r2)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r2 = r6.mJavaThreads
            int r2 = r2.size()
            r0.append(r2)
            java.lang.String r2 = "\tNative: "
            r0.append(r2)
            int r2 = r6.mThreadsCount
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r4 = r6.mJavaThreads
            int r4 = r4.size()
            int r2 = r2 - r4
            r0.append(r2)
            java.lang.String r2 = "\n\n"
            r0.append(r2)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r2 = r6.mAllThreads
            int r2 = r2.size()
            if (r2 <= 0) goto Lde
            java.lang.String r2 = "\t全部线程名: \n"
            r0.append(r2)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r2 = r6.mAllThreads
            java.util.Iterator r2 = r2.iterator()
        Lc6:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto Lde
            java.lang.Object r4 = r2.next()
            com.kwad.sdk.crash.model.message.ThreadInfo r4 = (com.kwad.sdk.crash.model.message.ThreadInfo) r4
            r0.append(r3)
            java.lang.String r4 = r4.mName
            r0.append(r4)
            r0.append(r1)
            goto Lc6
        Lde:
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r2 = r6.mJavaThreads
            int r2 = r2.size()
            if (r2 <= 0) goto L114
            java.lang.String r2 = "Java线程堆栈: \n"
            r0.append(r2)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r2 = r6.mJavaThreads
            java.util.Iterator r2 = r2.iterator()
        Lf1:
            boolean r4 = r2.hasNext()
            if (r4 == 0) goto L114
            java.lang.Object r4 = r2.next()
            com.kwad.sdk.crash.model.message.ThreadInfo r4 = (com.kwad.sdk.crash.model.message.ThreadInfo) r4
            java.lang.String r5 = r4.mName
            r0.append(r5)
            r0.append(r1)
            java.lang.String r4 = r4.mTrace
            java.lang.String r5 = "#"
            java.lang.String r4 = r4.replace(r5, r1)
            r0.append(r4)
            r0.append(r1)
            goto Lf1
        L114:
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r1 = r6.mNativeThreads
            int r1 = r1.size()
            if (r1 <= 0) goto L15a
            java.lang.String r1 = "\tNative线程堆栈: \n"
            r0.append(r1)
            java.util.List<com.kwad.sdk.crash.model.message.ThreadInfo> r1 = r6.mNativeThreads
            java.util.Iterator r1 = r1.iterator()
        L127:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L15a
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.crash.model.message.ThreadInfo r2 = (com.kwad.sdk.crash.model.message.ThreadInfo) r2
            r0.append(r3)
            java.lang.String r4 = r2.mName
            r0.append(r4)
            java.lang.String r4 = "\t(tid="
            r0.append(r4)
            int r4 = r2.mTid
            r0.append(r4)
            java.lang.String r4 = ", index="
            r0.append(r4)
            int r4 = r2.mIndex
            r0.append(r4)
            java.lang.String r4 = "):\n"
            r0.append(r4)
            java.lang.String r2 = r2.mTrace
            r0.append(r2)
            goto L127
        L15a:
            r1 = 0
            java.lang.String r0 = r0.substring(r1)
            return r0
    }
}
