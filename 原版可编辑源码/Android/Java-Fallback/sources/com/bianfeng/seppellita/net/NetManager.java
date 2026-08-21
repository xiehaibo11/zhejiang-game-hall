package com.bianfeng.seppellita.net;

public class NetManager {
    private java.util.Map<java.lang.String, java.lang.String> map;

    public NetManager(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.<init>()
            r0.map = r1
            return
    }

    public void postData(java.util.List<com.bianfeng.seppellita.bean.PostDataBean> r3, com.bianfeng.seppellita.SepperllitaCallback r4) {
            r2 = this;
            java.util.Iterator r3 = r3.iterator()
        L4:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L25
            java.lang.Object r0 = r3.next()
            com.bianfeng.seppellita.bean.PostDataBean r0 = (com.bianfeng.seppellita.bean.PostDataBean) r0
            com.bianfeng.seppellita.net.PostRequest r1 = new com.bianfeng.seppellita.net.PostRequest     // Catch: java.lang.Exception -> L20
            r1.<init>(r0)     // Catch: java.lang.Exception -> L20
            r1.setCallback(r4)     // Catch: java.lang.Exception -> L20
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()     // Catch: java.lang.Exception -> L20
            r0.add(r1)     // Catch: java.lang.Exception -> L20
            goto L4
        L20:
            r0 = move-exception
            r0.printStackTrace()
            goto L4
        L25:
            return
    }

    public void postInit(java.lang.String r4, com.bianfeng.seppellita.SepperllitaCallback r5) {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.map
            java.lang.String r1 = "uid"
            r0.put(r1, r4)
            com.bianfeng.seppellita.net.InitRequest r4 = new com.bianfeng.seppellita.net.InitRequest
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.map
            r4.<init>(r0, r5)
            com.bianfeng.netlibsdk.DefaultRetryPolicy r5 = new com.bianfeng.netlibsdk.DefaultRetryPolicy
            r0 = 15000(0x3a98, float:2.102E-41)
            r1 = 3
            r2 = 1065353216(0x3f800000, float:1.0)
            r5.<init>(r0, r1, r2)
            r4.setRetryPolicy(r5)
            com.bianfeng.netlibsdk.NetlibSdk r5 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()
            r5.add(r4)
            return
    }
}
