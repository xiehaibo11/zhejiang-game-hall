package com.bianfeng.seppellita.bean;

public class EventBean {
    private java.lang.String aaid;
    private java.lang.String ab;
    private java.lang.String abd;
    private java.lang.String ac;
    private java.lang.String act;
    private java.lang.String an;
    private java.lang.String andid;
    private java.lang.String av;
    private java.lang.String bi;
    private java.lang.String bl;
    private java.lang.String blk;
    private java.lang.String cust;
    private java.lang.String did;
    private java.lang.String dname;
    private int dur;
    private java.lang.String eid;
    private long et;
    private java.lang.String ext;
    private java.lang.String ind;
    private java.lang.String isp;
    private java.lang.String itemid;
    private java.lang.String label;
    private java.lang.String mfrs;
    private java.lang.String model;
    private java.lang.String net;
    private java.lang.String oaid;
    private java.lang.String os;
    private java.lang.String osv;
    private java.lang.String pg;
    private java.lang.String pi;
    private java.lang.String pkg;
    private java.lang.String pl;
    private java.lang.String ppg;
    private java.lang.String ppi;
    private java.lang.String ppl;
    private java.lang.String rv;
    private java.lang.String sort;
    private java.lang.String ssid;
    private java.lang.String st;
    private java.lang.String uid;
    private java.lang.String vaid;

    public EventBean(com.bianfeng.seppellita.bean.DeviceBean r2, com.bianfeng.seppellita.bean.AppInfoBean r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r3.getSite()
            r1.st = r0
            java.lang.String r0 = r3.getApp_name()
            r1.an = r0
            java.lang.String r0 = r3.getApp_package()
            r1.pkg = r0
            java.lang.String r0 = r3.getApp_build()
            r1.abd = r0
            java.lang.String r0 = r3.getApp_version()
            r1.av = r0
            java.lang.String r0 = r3.getApp_channel()
            r1.ac = r0
            java.lang.String r3 = r3.getIs_New_Device()
            r1.ind = r3
            java.lang.String r3 = r2.getNetwork()
            r1.net = r3
            java.lang.String r3 = r2.getOs()
            r1.os = r3
            java.lang.String r3 = r2.getOs_version()
            r1.osv = r3
            java.lang.String r3 = r2.getDevice_name()
            r1.dname = r3
            java.lang.String r3 = r2.getIsp()
            r1.isp = r3
            java.lang.String r3 = r2.getAndroid_id()
            r1.andid = r3
            java.lang.String r3 = r2.getDevice_id()
            r1.did = r3
            java.lang.String r3 = r2.getManufacturer()
            r1.mfrs = r3
            java.lang.String r3 = r2.getSession_id()
            r1.ssid = r3
            java.lang.String r3 = r2.getModel()
            r1.model = r3
            java.lang.String r3 = r2.getOaid()
            r1.oaid = r3
            java.lang.String r3 = r2.getAaid()
            r1.aaid = r3
            java.lang.String r2 = r2.getVaid()
            r1.vaid = r2
            return
    }

    public int getSize() {
            r1 = this;
            java.lang.String r0 = r1.toString()
            byte[] r0 = r0.getBytes()
            int r0 = r0.length
            return r0
    }

    public java.lang.String getSt() {
            r1 = this;
            java.lang.String r0 = r1.st
            return r0
    }

    public void setEvent(java.util.Map<java.lang.String, java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "act"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.act = r0
            java.lang.String r0 = "pg"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.pg = r0
            java.lang.String r0 = "pi"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.pi = r0
            java.lang.String r0 = "pl"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.pl = r0
            java.lang.String r0 = "blk"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.blk = r0
            java.lang.String r0 = "bi"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.bi = r0
            java.lang.String r0 = "bl"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.bl = r0
            java.lang.String r0 = "itemid"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.itemid = r0
            java.lang.String r0 = "label"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.label = r0
            java.lang.String r0 = "sort"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.sort = r0
            java.lang.String r0 = "eid"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.eid = r0
            r0 = 0
            java.lang.String r1 = "dur"
            java.lang.Object r1 = r4.get(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> Lbb
            java.lang.String r1 = com.bianfeng.seppellita.utils.StringUtils.trim(r1)     // Catch: java.lang.Exception -> Lbb
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lbb
            if (r2 != 0) goto Lb8
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lbb
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> Lbb
            r3.dur = r1     // Catch: java.lang.Exception -> Lbb
            goto Lbd
        Lb8:
            r3.dur = r0     // Catch: java.lang.Exception -> Lbb
            goto Lbd
        Lbb:
            r3.dur = r0
        Lbd:
            java.lang.String r0 = "ext"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.ext = r0
            java.lang.String r0 = "cust"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.cust = r0
            java.lang.String r0 = "uid"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.uid = r0
            java.lang.String r0 = "et"
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Exception -> Lfe
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> Lfe
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)     // Catch: java.lang.Exception -> Lfe
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Exception -> Lfe
            long r0 = r0.longValue()     // Catch: java.lang.Exception -> Lfe
            r3.et = r0     // Catch: java.lang.Exception -> Lfe
            goto L108
        Lfe:
            r0 = move-exception
            r0.printStackTrace()
            long r0 = java.lang.System.currentTimeMillis()
            r3.et = r0
        L108:
            java.lang.String r0 = "rv"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.rv = r0
            java.lang.String r0 = "ab"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.ab = r0
            java.lang.String r0 = "ppg"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.ppg = r0
            java.lang.String r0 = "ppi"
            java.lang.Object r0 = r4.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = com.bianfeng.seppellita.utils.StringUtils.trim(r0)
            r3.ppi = r0
            java.lang.String r0 = "ppl"
            java.lang.Object r4 = r4.get(r0)
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r4 = com.bianfeng.seppellita.utils.StringUtils.trim(r4)
            r3.ppl = r4
            return
    }

    public void setSt(java.lang.String r1) {
            r0 = this;
            r0.st = r1
            return
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.seppellita.utils.SeppellitaGsonUtils.toJson(r1)
            return r0
    }
}
