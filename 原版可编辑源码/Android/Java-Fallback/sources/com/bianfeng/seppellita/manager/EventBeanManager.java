package com.bianfeng.seppellita.manager;

public class EventBeanManager {
    private com.bianfeng.seppellita.utils.ConfigUtils configUtils;
    private com.bianfeng.seppellita.bean.DeviceBean deviceBean;
    private com.bianfeng.seppellita.bean.AppInfoBean infoBean;
    private java.util.Map<java.lang.String, java.lang.String> parametersMap;

    public EventBeanManager(android.content.Context r3, com.bianfeng.seppellita.utils.ConfigUtils r4) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.parametersMap = r0
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r3)
            com.bianfeng.seppellita.bean.AppInfoBean r0 = new com.bianfeng.seppellita.bean.AppInfoBean
            r0.<init>(r3)
            r2.infoBean = r0
            com.bianfeng.seppellita.bean.DeviceBean r0 = new com.bianfeng.seppellita.bean.DeviceBean
            com.bianfeng.seppellita.bean.AppInfoBean r1 = r2.infoBean
            java.lang.String r1 = r1.getApp_package()
            r0.<init>(r3, r1)
            r2.deviceBean = r0
            r2.configUtils = r4
            return
    }

    public EventBeanManager(android.content.Context r3, com.bianfeng.seppellita.utils.ConfigUtils r4, boolean r5) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.parametersMap = r0
            if (r5 == 0) goto Lf
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initContext(r3)
        Lf:
            com.bianfeng.seppellita.bean.AppInfoBean r0 = new com.bianfeng.seppellita.bean.AppInfoBean
            r0.<init>(r3, r5)
            r2.infoBean = r0
            com.bianfeng.seppellita.bean.DeviceBean r0 = new com.bianfeng.seppellita.bean.DeviceBean
            com.bianfeng.seppellita.bean.AppInfoBean r1 = r2.infoBean
            java.lang.String r1 = r1.getApp_package()
            r0.<init>(r3, r1, r5)
            r2.deviceBean = r0
            r2.configUtils = r4
            return
    }

    private void addUid(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "uid"
            java.lang.Object r1 = r3.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L17
            java.util.Map<java.lang.String, java.lang.String> r1 = r2.parametersMap
            java.lang.Object r1 = r1.get(r0)
            r3.put(r0, r1)
        L17:
            return
    }

    private int getMaxCount() {
            r1 = this;
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r1.configUtils
            int r0 = r0.getMaxCount()
            return r0
    }

    public com.bianfeng.seppellita.bean.DataBean buildDataBean(java.lang.String r5) {
            r4 = this;
            com.bianfeng.seppellita.utils.ConfigUtils r0 = r4.configUtils
            long r0 = r0.getOffsetTime()
            com.bianfeng.seppellita.bean.DataBean r2 = new com.bianfeng.seppellita.bean.DataBean
            com.bianfeng.seppellita.utils.ConfigUtils r3 = r4.configUtils
            java.lang.String r3 = r3.getCurrentTimeFormat()
            r2.<init>(r5, r0, r3)
            return r2
    }

    public java.util.List<com.bianfeng.seppellita.bean.PostDataBean> creatEventBean(java.util.List<java.lang.String> r15) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r14 = this;
            com.bianfeng.seppellita.bean.DeviceBean r0 = r14.deviceBean
            monitor-enter(r0)
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L111
            r1.<init>()     // Catch: java.lang.Throwable -> L111
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L111
            r2.<init>()     // Catch: java.lang.Throwable -> L111
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L111
            r3.<init>()     // Catch: java.lang.Throwable -> L111
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
            r4.<init>()     // Catch: java.lang.Throwable -> L111
            java.lang.String r5 = "数据---"
            r4.append(r5)     // Catch: java.lang.Throwable -> L111
            int r5 = r15.size()     // Catch: java.lang.Throwable -> L111
            r4.append(r5)     // Catch: java.lang.Throwable -> L111
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L111
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r4)     // Catch: java.lang.Throwable -> L111
            r4 = 0
            r5 = r4
            r6 = r5
        L2d:
            int r7 = r15.size()     // Catch: java.lang.Throwable -> L111
            if (r5 >= r7) goto Le8
            java.lang.Object r7 = r15.get(r5)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.Class<com.bianfeng.seppellita.bean.DataBean> r8 = com.bianfeng.seppellita.bean.DataBean.class
            java.lang.Object r7 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.fromJson(r7, r8)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.DataBean r7 = (com.bianfeng.seppellita.bean.DataBean) r7     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.EventBean r8 = new com.bianfeng.seppellita.bean.EventBean     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.DeviceBean r9 = r14.deviceBean     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.AppInfoBean r10 = r14.infoBean     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r8.<init>(r9, r10)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r9 = r8.getSt()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            if (r9 == 0) goto L57
            java.lang.String r9 = r8.getSt()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r9.isEmpty()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
        L57:
            java.lang.String r9 = r7.getData()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.util.Map r9 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.getMap(r9)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            if (r9 != 0) goto L68
            java.lang.String r7 = "数据--map==null"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r7)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            goto Le4
        L68:
            java.lang.String r10 = "et"
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r11.<init>()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            long r12 = r7.getTime()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r11.append(r12)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r12 = ""
            r11.append(r12)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r9.put(r10, r11)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r14.addUid(r9)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r8.setEvent(r9)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            int r9 = r8.getSize()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            int r6 = r6 + r9
            int r9 = r14.getMaxCount()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            if (r6 < r9) goto Lbf
            com.bianfeng.seppellita.bean.PostDataBean r6 = new com.bianfeng.seppellita.bean.PostDataBean     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r7.<init>()     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            com.bianfeng.seppellita.utils.ConfigUtils r8 = r14.configUtils     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            long r8 = r8.getOffsetTime()     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r7.append(r8)     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            java.lang.String r8 = ""
            r7.append(r8)     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.AppInfoBean r8 = r14.infoBean     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r6.<init>(r2, r3, r7, r8)     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r1.add(r6)     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r3.clear()     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r2.clear()     // Catch: java.lang.Exception -> Lbc java.lang.Throwable -> L111
            r6 = r4
            goto Le4
        Lbc:
            r7 = move-exception
            r6 = r4
            goto Ldc
        Lbf:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r9.<init>()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            int r7 = r7.getId()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r9.append(r7)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r7 = ""
            r9.append(r7)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            java.lang.String r7 = r9.toString()     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r3.add(r7)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            r2.add(r8)     // Catch: java.lang.Exception -> Ldb java.lang.Throwable -> L111
            goto Le4
        Ldb:
            r7 = move-exception
        Ldc:
            java.lang.String r8 = "参数存在问题--->"
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r8)     // Catch: java.lang.Throwable -> L111
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L111
        Le4:
            int r5 = r5 + 1
            goto L2d
        Le8:
            int r15 = r2.size()     // Catch: java.lang.Throwable -> L111
            if (r15 <= 0) goto L10f
            com.bianfeng.seppellita.bean.PostDataBean r15 = new com.bianfeng.seppellita.bean.PostDataBean     // Catch: java.lang.Throwable -> L111
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L111
            r4.<init>()     // Catch: java.lang.Throwable -> L111
            com.bianfeng.seppellita.utils.ConfigUtils r5 = r14.configUtils     // Catch: java.lang.Throwable -> L111
            long r5 = r5.getOffsetTime()     // Catch: java.lang.Throwable -> L111
            r4.append(r5)     // Catch: java.lang.Throwable -> L111
            java.lang.String r5 = ""
            r4.append(r5)     // Catch: java.lang.Throwable -> L111
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L111
            com.bianfeng.seppellita.bean.AppInfoBean r5 = r14.infoBean     // Catch: java.lang.Throwable -> L111
            r15.<init>(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L111
            r1.add(r15)     // Catch: java.lang.Throwable -> L111
        L10f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L111
            return r1
        L111:
            r15 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L111
            throw r15
    }

    public java.util.List<com.bianfeng.seppellita.bean.PostDataBean> creatEventBean(java.util.List<java.lang.String> r17, java.lang.String r18) throws com.bianfeng.seppellita.exception.SeppellitaException {
            r16 = this;
            r1 = r16
            com.bianfeng.seppellita.bean.DeviceBean r2 = r1.deviceBean
            monitor-enter(r2)
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L129
            r3.<init>()     // Catch: java.lang.Throwable -> L129
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L129
            r4.<init>()     // Catch: java.lang.Throwable -> L129
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L129
            r5.<init>()     // Catch: java.lang.Throwable -> L129
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L129
            r0.<init>()     // Catch: java.lang.Throwable -> L129
            java.lang.String r6 = "数据---"
            r0.append(r6)     // Catch: java.lang.Throwable -> L129
            int r6 = r17.size()     // Catch: java.lang.Throwable -> L129
            r0.append(r6)     // Catch: java.lang.Throwable -> L129
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L129
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)     // Catch: java.lang.Throwable -> L129
            r7 = 0
            r8 = 0
        L2e:
            int r0 = r17.size()     // Catch: java.lang.Throwable -> L129
            if (r7 >= r0) goto L100
            r9 = r17
            java.lang.Object r0 = r9.get(r7)     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            java.lang.Class<com.bianfeng.seppellita.bean.DataBean> r10 = com.bianfeng.seppellita.bean.DataBean.class
            java.lang.Object r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.fromJson(r0, r10)     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.DataBean r0 = (com.bianfeng.seppellita.bean.DataBean) r0     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.EventBean r10 = new com.bianfeng.seppellita.bean.EventBean     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.DeviceBean r11 = r1.deviceBean     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.AppInfoBean r12 = r1.infoBean     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            r10.<init>(r11, r12)     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            java.lang.String r11 = r10.getSt()     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            if (r11 == 0) goto L61
            java.lang.String r11 = r10.getSt()     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            boolean r11 = r11.isEmpty()     // Catch: java.lang.Exception -> Lf0 java.lang.Throwable -> L129
            if (r11 == 0) goto L5e
            goto L61
        L5e:
            r11 = r18
            goto L66
        L61:
            r11 = r18
            r10.setSt(r11)     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
        L66:
            java.lang.String r12 = r0.getData()     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
            java.util.Map r12 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.getMap(r12)     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
            if (r12 != 0) goto L78
            java.lang.String r0 = "数据--map==null"
            com.bianfeng.seppellita.utils.SeppellitaLogger.i(r0)     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
            r15 = r7
            goto Lfc
        L78:
            java.lang.String r13 = "et"
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
            r14.<init>()     // Catch: java.lang.Exception -> Lee java.lang.Throwable -> L129
            r15 = r7
            long r6 = r0.getTime()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r14.append(r6)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            java.lang.String r6 = ""
            r14.append(r6)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            java.lang.String r6 = r14.toString()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r12.put(r13, r6)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r1.addUid(r12)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r10.setEvent(r12)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            int r6 = r10.getSize()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            int r8 = r8 + r6
            int r6 = r16.getMaxCount()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            if (r8 < r6) goto Ld0
            com.bianfeng.seppellita.bean.PostDataBean r0 = new com.bianfeng.seppellita.bean.PostDataBean     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r6.<init>()     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            com.bianfeng.seppellita.utils.ConfigUtils r7 = r1.configUtils     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            long r7 = r7.getOffsetTime()     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r6.append(r7)     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            java.lang.String r7 = ""
            r6.append(r7)     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.AppInfoBean r7 = r1.infoBean     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r0.<init>(r4, r5, r6, r7)     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r3.add(r0)     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r5.clear()     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r4.clear()     // Catch: java.lang.Exception -> Lcd java.lang.Throwable -> L129
            r8 = 0
            goto Lfc
        Lcd:
            r0 = move-exception
            r8 = 0
            goto Lf4
        Ld0:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r6.<init>()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            int r0 = r0.getId()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r6.append(r0)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            java.lang.String r0 = ""
            r6.append(r0)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r5.add(r0)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            r4.add(r10)     // Catch: java.lang.Exception -> Lec java.lang.Throwable -> L129
            goto Lfc
        Lec:
            r0 = move-exception
            goto Lf4
        Lee:
            r0 = move-exception
            goto Lf3
        Lf0:
            r0 = move-exception
            r11 = r18
        Lf3:
            r15 = r7
        Lf4:
            java.lang.String r6 = "参数存在问题--->"
            com.bianfeng.seppellita.utils.SeppellitaLogger.e(r6)     // Catch: java.lang.Throwable -> L129
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L129
        Lfc:
            int r7 = r15 + 1
            goto L2e
        L100:
            int r0 = r4.size()     // Catch: java.lang.Throwable -> L129
            if (r0 <= 0) goto L127
            com.bianfeng.seppellita.bean.PostDataBean r0 = new com.bianfeng.seppellita.bean.PostDataBean     // Catch: java.lang.Throwable -> L129
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L129
            r6.<init>()     // Catch: java.lang.Throwable -> L129
            com.bianfeng.seppellita.utils.ConfigUtils r7 = r1.configUtils     // Catch: java.lang.Throwable -> L129
            long r7 = r7.getOffsetTime()     // Catch: java.lang.Throwable -> L129
            r6.append(r7)     // Catch: java.lang.Throwable -> L129
            java.lang.String r7 = ""
            r6.append(r7)     // Catch: java.lang.Throwable -> L129
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L129
            com.bianfeng.seppellita.bean.AppInfoBean r7 = r1.infoBean     // Catch: java.lang.Throwable -> L129
            r0.<init>(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L129
            r3.add(r0)     // Catch: java.lang.Throwable -> L129
        L127:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L129
            return r3
        L129:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L129
            throw r0
    }

    public java.util.Map<java.lang.String, java.lang.String> getGetParameters() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.AppInfoBean r1 = r3.infoBean
            java.lang.String r1 = r1.getSite()
            java.lang.String r2 = "st"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.DeviceBean r1 = r3.deviceBean
            java.lang.String r1 = r1.getDevice_id()
            java.lang.String r2 = "did"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.DeviceBean r1 = r3.deviceBean
            java.lang.String r1 = r1.getOs()
            java.lang.String r2 = "os"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.DeviceBean r1 = r3.deviceBean
            java.lang.String r1 = r1.getOs_version()
            java.lang.String r2 = "osv"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.DeviceBean r1 = r3.deviceBean
            java.lang.String r1 = r1.getIsp()
            java.lang.String r2 = "isp"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            com.bianfeng.seppellita.bean.AppInfoBean r1 = r3.infoBean
            java.lang.String r1 = r1.getApp_channel()
            java.lang.String r2 = "ac"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.parametersMap
            return r0
    }
}
