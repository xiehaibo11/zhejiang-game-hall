package com.bianfeng.seppellita.bean;

import android.text.TextUtils;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.StringUtils;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bykv.vk.openvk.downloadnew.core.TTDownloadField;
import com.meizu.cloud.pushsdk.notification.model.NotificationStyle;
import com.qihoo360.replugin.packages.PluginFastInstallProvider;
import com.tencent.open.SocialConstants;
import java.util.Map;

public class EventBean {
    private String aaid;
    private String ab;
    private String abd;
    private String ac;
    private String act;
    private String an;
    private String andid;
    private String av;
    private String bi;
    private String bl;
    private String blk;
    private String cust;
    private String did;
    private String dname;
    private int dur;
    private String eid;
    private long et;
    private String ext;
    private String ind;
    private String isp;
    private String itemid;
    private String label;
    private String mfrs;
    private String model;
    private String net;
    private String oaid;
    private String os;
    private String osv;
    private String pg;
    private String pi;
    private String pkg;
    private String pl;
    private String ppg;
    private String ppi;
    private String ppl;
    private String rv;
    private String sort;
    private String ssid;
    private String st;
    private String uid;
    private String vaid;

    public EventBean(DeviceBean deviceBean, AppInfoBean appInfoBean) {
        this.st = appInfoBean.getSite();
        this.an = appInfoBean.getApp_name();
        this.pkg = appInfoBean.getApp_package();
        this.abd = appInfoBean.getApp_build();
        this.av = appInfoBean.getApp_version();
        this.ac = appInfoBean.getApp_channel();
        this.ind = appInfoBean.getIs_New_Device();
        this.net = deviceBean.getNetwork();
        this.os = deviceBean.getOs();
        this.osv = deviceBean.getOs_version();
        this.dname = deviceBean.getDevice_name();
        this.isp = deviceBean.getIsp();
        this.andid = deviceBean.getAndroid_id();
        this.did = deviceBean.getDevice_id();
        this.mfrs = deviceBean.getManufacturer();
        this.ssid = deviceBean.getSession_id();
        this.model = deviceBean.getModel();
        this.oaid = deviceBean.getOaid();
        this.aaid = deviceBean.getAaid();
        this.vaid = deviceBean.getVaid();
    }

    public void setEvent(Map<String, String> map) {
        this.act = StringUtils.trim(map.get(SocialConstants.PARAM_ACT));
        this.pg = StringUtils.trim(map.get("pg"));
        this.pi = StringUtils.trim(map.get(PluginFastInstallProvider.KEY_PLUGIN_INFO));
        this.pl = StringUtils.trim(map.get("pl"));
        this.blk = StringUtils.trim(map.get("blk"));
        this.bi = StringUtils.trim(map.get(NotificationStyle.BANNER_IMAGE_URL));
        this.bl = StringUtils.trim(map.get("bl"));
        this.itemid = StringUtils.trim(map.get("itemid"));
        this.label = StringUtils.trim(map.get(TTDownloadField.TT_LABEL));
        this.sort = StringUtils.trim(map.get("sort"));
        this.eid = StringUtils.trim(map.get("eid"));
        try {
            String strTrim = StringUtils.trim(map.get("dur"));
            if (!TextUtils.isEmpty(strTrim)) {
                this.dur = Integer.valueOf(strTrim).intValue();
            } else {
                this.dur = 0;
            }
        } catch (Exception unused) {
            this.dur = 0;
        }
        this.ext = StringUtils.trim(map.get("ext"));
        this.cust = StringUtils.trim(map.get("cust"));
        this.uid = StringUtils.trim(map.get(IUserFeature.LOGIN_SUC_RS_UID));
        try {
            this.et = Long.valueOf(StringUtils.trim(map.get("et"))).longValue();
        } catch (Exception e) {
            e.printStackTrace();
            this.et = System.currentTimeMillis();
        }
        this.rv = StringUtils.trim(map.get("rv"));
        this.ab = StringUtils.trim(map.get("ab"));
        this.ppg = StringUtils.trim(map.get("ppg"));
        this.ppi = StringUtils.trim(map.get("ppi"));
        this.ppl = StringUtils.trim(map.get("ppl"));
    }

    public String toString() {
        return SeppellitaGsonUtils.toJson(this);
    }

    public int getSize() {
        return toString().getBytes().length;
    }

    public String getSt() {
        return this.st;
    }

    public void setSt(String str) {
        this.st = str;
    }
}
