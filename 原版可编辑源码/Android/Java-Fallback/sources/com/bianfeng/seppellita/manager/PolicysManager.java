package com.bianfeng.seppellita.manager;

public class PolicysManager implements com.bianfeng.seppellita.manager.IPolicysManager {
    private volatile com.bianfeng.seppellita.bean.InitBean.DataBean policysBean;

    public PolicysManager() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String getPolicys(java.lang.String r7) {
            r6 = this;
            com.bianfeng.seppellita.bean.InitBean$DataBean r0 = r6.policysBean
            if (r0 != 0) goto L5
            return r7
        L5:
            com.bianfeng.seppellita.bean.InitBean$DataBean r0 = r6.policysBean
            java.util.List r0 = r0.getAbtest()
            int r1 = r0.size()
            if (r1 != 0) goto L12
            return r7
        L12:
            java.util.Map r1 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.getMap(r7)     // Catch: java.lang.Exception -> L52
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L52
            r2.<init>()     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = "pg"
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L52
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L52
        L27:
            boolean r4 = r0.hasNext()     // Catch: java.lang.Exception -> L52
            if (r4 == 0) goto L45
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Exception -> L52
            com.bianfeng.seppellita.bean.InitBean$DataBean$AbtestBean r4 = (com.bianfeng.seppellita.bean.InitBean.DataBean.AbtestBean) r4     // Catch: java.lang.Exception -> L52
            java.lang.String r5 = r4.getPage()     // Catch: java.lang.Exception -> L52
            boolean r5 = r5.equalsIgnoreCase(r3)     // Catch: java.lang.Exception -> L52
            if (r5 == 0) goto L27
            com.bianfeng.seppellita.bean.ListPostBean r4 = r4.getListBean()     // Catch: java.lang.Exception -> L52
            r2.add(r4)     // Catch: java.lang.Exception -> L52
            goto L27
        L45:
            java.lang.String r0 = "ab"
            java.lang.String r2 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r2)     // Catch: java.lang.Exception -> L52
            r1.put(r0, r2)     // Catch: java.lang.Exception -> L52
            java.lang.String r7 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)     // Catch: java.lang.Exception -> L52
        L52:
            return r7
    }

    @Override
    public java.lang.String getPolicys(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            com.bianfeng.seppellita.bean.InitBean$DataBean r0 = r4.policysBean
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.bianfeng.seppellita.bean.InitBean$DataBean r0 = r4.policysBean
            java.util.List r0 = r0.getAbtest()
            int r2 = r0.size()
            if (r2 != 0) goto L13
            return r1
        L13:
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r0.next()
            com.bianfeng.seppellita.bean.InitBean$DataBean$AbtestBean r2 = (com.bianfeng.seppellita.bean.InitBean.DataBean.AbtestBean) r2
            java.lang.String r3 = r2.getPage()
            boolean r3 = r3.equalsIgnoreCase(r5)
            if (r3 == 0) goto L17
            java.lang.String r3 = r2.getTest_name()
            boolean r3 = r3.equalsIgnoreCase(r6)
            if (r3 == 0) goto L17
            java.lang.String r5 = r2.getUser_tag()
            return r5
        L3c:
            return r1
    }

    @Override
    public void setPolicysBean(com.bianfeng.seppellita.bean.InitBean.DataBean r1) {
            r0 = this;
            r0.policysBean = r1
            return
    }
}
