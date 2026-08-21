package com.bianfeng.h5library;

public class H5EventUtils {
    private static volatile com.bianfeng.h5library.H5EventUtils event;
    private java.lang.String channelName;
    private java.lang.String eventUrl;
    private com.bianfeng.datafunsdk.net.ResponseData responseData;
    private java.lang.String userid;

    private H5EventUtils() {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "https://bfas.bianfeng.com/bfrd/json?charset=utf-8"
            r4.eventUrl = r0
            com.bianfeng.datafunsdk.net.ResponseData r0 = new com.bianfeng.datafunsdk.net.ResponseData
            java.lang.String r1 = "result"
            java.lang.String r2 = ""
            r3 = 0
            r0.<init>(r1, r2, r3)
            r4.responseData = r0
            r4.userid = r2
            return
    }

    public static com.bianfeng.h5library.H5EventUtils getInstance() {
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.event
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.h5library.H5EventUtils> r0 = com.bianfeng.h5library.H5EventUtils.class
            monitor-enter(r0)
            com.bianfeng.h5library.H5EventUtils r1 = com.bianfeng.h5library.H5EventUtils.event     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.h5library.H5EventUtils r1 = new com.bianfeng.h5library.H5EventUtils     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.h5library.H5EventUtils.event = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.event
            return r0
    }

    private void postEvent(java.lang.String r10) {
            r9 = this;
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()     // Catch: java.lang.Exception -> L21
            com.bianfeng.datafunsdk.bean.DataFunBean r8 = new com.bianfeng.datafunsdk.bean.DataFunBean     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = r9.eventUrl     // Catch: java.lang.Exception -> L21
            r1 = 0
            r4 = r1
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L21
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L21
            r6 = r1
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L21
            com.bianfeng.datafunsdk.net.ResponseData r1 = r9.responseData     // Catch: java.lang.Exception -> L21
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Exception -> L21
            r1 = r8
            r3 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L21
            r0.postByteData(r8)     // Catch: java.lang.Exception -> L21
            goto L3a
        L21:
            r10 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "调postByteData出错"
            r0.append(r1)
            java.lang.String r10 = r10.getMessage()
            r0.append(r10)
            java.lang.String r10 = r0.toString()
            com.bianfeng.h5library.utils.H5libLogger.i(r10)
        L3a:
            return
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "1.1.0"
            return r0
    }

    public void init(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r2)
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()
            r0.init(r2)
            r1.channelName = r3
            return
    }

    public void postGameEvent(java.lang.String r11) {
            r10 = this;
            com.bianfeng.h5library.H5ClickEvent r9 = new com.bianfeng.h5library.H5ClickEvent
            java.lang.String r2 = r10.channelName
            java.lang.String r3 = "客户端游戏上抛"
            java.lang.String r4 = "810005"
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r9
            r1 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r11 = r9.toString()
            r10.postEvent(r11)
            return
    }

    public void postH5ClickEvent(java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            r10 = this;
            com.bianfeng.h5library.H5ClickEvent r9 = new com.bianfeng.h5library.H5ClickEvent
            java.lang.String r2 = r10.channelName
            java.lang.String r5 = r10.userid
            java.lang.String r3 = "自定义事件"
            r0 = r9
            r1 = r15
            r4 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r11 = r9.toString()
            r10.postEvent(r11)
            return
    }

    public void postH5ClickEvent(java.lang.String r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r11 = this;
            r0 = r11
            com.bianfeng.h5library.H5ClickEvent r10 = new com.bianfeng.h5library.H5ClickEvent
            java.lang.String r3 = r0.channelName
            java.lang.String r6 = r0.userid
            r1 = r10
            r2 = r17
            r4 = r14
            r5 = r12
            r7 = r13
            r8 = r15
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            java.lang.String r1 = r10.toString()
            r11.postEvent(r1)
            return
    }

    public void postH5GameButtonClick(java.lang.String r11, java.lang.String r12) {
            r10 = this;
            r10.userid = r11
            com.bianfeng.h5library.H5ClickEvent r9 = new com.bianfeng.h5library.H5ClickEvent
            java.lang.String r2 = r10.channelName
            java.lang.String r3 = "单款"
            java.lang.String r4 = "810007"
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r9
            r1 = r12
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r11 = r9.toString()
            r10.postEvent(r11)
            return
    }

    public void postH5Login(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            r7.userid = r8
            com.bianfeng.h5library.H5LoginEventUtils r8 = new com.bianfeng.h5library.H5LoginEventUtils
            java.lang.String r4 = r7.channelName
            java.lang.String r5 = r7.userid
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r6 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            java.lang.String r8 = r8.toString()
            r7.postEvent(r8)
            return
    }

    public void postH5Reg(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r7 = this;
            r7.userid = r8
            com.bianfeng.h5library.H5RegisterEvent r6 = new com.bianfeng.h5library.H5RegisterEvent
            java.lang.String r4 = r7.channelName
            r0 = r6
            r1 = r11
            r2 = r10
            r3 = r9
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            java.lang.String r8 = r6.toString()
            r7.postEvent(r8)
            return
    }

    public void postH5RoomClick(java.lang.String r10, java.lang.String r11) {
            r9 = this;
            r9.userid = r10
            com.bianfeng.h5library.H5ClickEvent r10 = new com.bianfeng.h5library.H5ClickEvent
            java.lang.String r2 = r9.channelName
            java.lang.String r5 = r9.userid
            java.lang.String r3 = "大厅"
            java.lang.String r4 = "810006"
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r10
            r1 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r10 = r10.toString()
            r9.postEvent(r10)
            return
    }

    public void setChannelName(java.lang.String r1) {
            r0 = this;
            r0.channelName = r1
            return
    }

    public void setEventUrl(java.lang.String r1) {
            r0 = this;
            r0.eventUrl = r1
            return
    }
}
