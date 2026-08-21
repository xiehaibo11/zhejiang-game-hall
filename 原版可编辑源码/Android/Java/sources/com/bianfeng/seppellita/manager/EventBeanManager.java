package com.bianfeng.seppellita.manager;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.seppellita.bean.AppInfoBean;
import com.bianfeng.seppellita.bean.DataBean;
import com.bianfeng.seppellita.bean.DeviceBean;
import com.bianfeng.seppellita.bean.EventBean;
import com.bianfeng.seppellita.bean.PostDataBean;
import com.bianfeng.seppellita.exception.SeppellitaException;
import com.bianfeng.seppellita.utils.ConfigUtils;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import com.bianfeng.seppellita.utils.SeppellitaLogger;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;
import com.tkay.expressad.d.a.b;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class EventBeanManager {
    private ConfigUtils configUtils;
    private DeviceBean deviceBean;
    private AppInfoBean infoBean;
    private Map<String, String> parametersMap = new HashMap();

    public EventBeanManager(Context context, ConfigUtils configUtils) {
        UtilsSdk.initContext(context);
        this.infoBean = new AppInfoBean(context);
        this.deviceBean = new DeviceBean(context, this.infoBean.getApp_package());
        this.configUtils = configUtils;
    }

    public EventBeanManager(Context context, ConfigUtils configUtils, boolean z) {
        if (z) {
            UtilsSdk.initContext(context);
        }
        this.infoBean = new AppInfoBean(context, z);
        this.deviceBean = new DeviceBean(context, this.infoBean.getApp_package(), z);
        this.configUtils = configUtils;
    }

    public Map<String, String> getGetParameters() {
        this.parametersMap.put("st", this.infoBean.getSite());
        this.parametersMap.put("did", this.deviceBean.getDevice_id());
        this.parametersMap.put("os", this.deviceBean.getOs());
        this.parametersMap.put("osv", this.deviceBean.getOs_version());
        this.parametersMap.put("isp", this.deviceBean.getIsp());
        this.parametersMap.put(b.da, this.infoBean.getApp_channel());
        return this.parametersMap;
    }

    public List<PostDataBean> creatEventBean(List<String> list) throws SeppellitaException {
        ArrayList arrayList;
        synchronized (this.deviceBean) {
            arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            ArrayList arrayList3 = new ArrayList();
            SeppellitaLogger.i("数据---" + list.size());
            int size = 0;
            for (int i = 0; i < list.size(); i++) {
                try {
                    DataBean dataBean = (DataBean) SeppellitaGsonUtils.fromJson(list.get(i), DataBean.class);
                    EventBean eventBean = new EventBean(this.deviceBean, this.infoBean);
                    if (eventBean.getSt() != null) {
                        eventBean.getSt().isEmpty();
                    }
                    Map<String, String> map = SeppellitaGsonUtils.getMap(dataBean.getData());
                    if (map == null) {
                        SeppellitaLogger.i("数据--map==null");
                    } else {
                        map.put("et", dataBean.getTime() + "");
                        addUid(map);
                        eventBean.setEvent(map);
                        size += eventBean.getSize();
                        if (size >= getMaxCount()) {
                            try {
                                arrayList.add(new PostDataBean(arrayList2, arrayList3, this.configUtils.getOffsetTime() + "", this.infoBean));
                                arrayList3.clear();
                                arrayList2.clear();
                                size = 0;
                            } catch (Exception e) {
                                e = e;
                                size = 0;
                                SeppellitaLogger.e("参数存在问题--->");
                                e.printStackTrace();
                            }
                        } else {
                            arrayList3.add(dataBean.getId() + "");
                            arrayList2.add(eventBean);
                        }
                    }
                } catch (Exception e2) {
                    e = e2;
                }
            }
            if (arrayList2.size() > 0) {
                arrayList.add(new PostDataBean(arrayList2, arrayList3, this.configUtils.getOffsetTime() + "", this.infoBean));
            }
        }
        return arrayList;
    }

    public List<PostDataBean> creatEventBean(List<String> list, String str) throws SeppellitaException {
        ArrayList arrayList;
        int i;
        synchronized (this.deviceBean) {
            arrayList = new ArrayList();
            ArrayList arrayList2 = new ArrayList();
            ArrayList arrayList3 = new ArrayList();
            SeppellitaLogger.i("数据---" + list.size());
            int i2 = 0;
            int size = 0;
            while (i2 < list.size()) {
                try {
                    DataBean dataBean = (DataBean) SeppellitaGsonUtils.fromJson(list.get(i2), DataBean.class);
                    EventBean eventBean = new EventBean(this.deviceBean, this.infoBean);
                    if (eventBean.getSt() == null || eventBean.getSt().isEmpty()) {
                        eventBean.setSt(str);
                    }
                    Map<String, String> map = SeppellitaGsonUtils.getMap(dataBean.getData());
                    if (map == null) {
                        try {
                            SeppellitaLogger.i("数据--map==null");
                            i = i2;
                        } catch (Exception e) {
                            e = e;
                            i = i2;
                            SeppellitaLogger.e("参数存在问题--->");
                            e.printStackTrace();
                        }
                    } else {
                        StringBuilder sb = new StringBuilder();
                        i = i2;
                        try {
                            sb.append(dataBean.getTime());
                            sb.append("");
                            map.put("et", sb.toString());
                            addUid(map);
                            eventBean.setEvent(map);
                            size += eventBean.getSize();
                            if (size >= getMaxCount()) {
                                try {
                                    arrayList.add(new PostDataBean(arrayList2, arrayList3, this.configUtils.getOffsetTime() + "", this.infoBean));
                                    arrayList3.clear();
                                    arrayList2.clear();
                                    size = 0;
                                } catch (Exception e2) {
                                    e = e2;
                                    size = 0;
                                    SeppellitaLogger.e("参数存在问题--->");
                                    e.printStackTrace();
                                }
                            } else {
                                arrayList3.add(dataBean.getId() + "");
                                arrayList2.add(eventBean);
                            }
                        } catch (Exception e3) {
                            e = e3;
                        }
                    }
                } catch (Exception e4) {
                    e = e4;
                }
                i2 = i + 1;
            }
            if (arrayList2.size() > 0) {
                arrayList.add(new PostDataBean(arrayList2, arrayList3, this.configUtils.getOffsetTime() + "", this.infoBean));
            }
        }
        return arrayList;
    }

    private void addUid(Map<String, String> map) {
        if (TextUtils.isEmpty(map.get(IUserFeature.LOGIN_SUC_RS_UID))) {
            map.put(IUserFeature.LOGIN_SUC_RS_UID, this.parametersMap.get(IUserFeature.LOGIN_SUC_RS_UID));
        }
    }

    private int getMaxCount() {
        return this.configUtils.getMaxCount();
    }

    public DataBean buildDataBean(String str) {
        return new DataBean(str, this.configUtils.getOffsetTime(), this.configUtils.getCurrentTimeFormat());
    }
}
