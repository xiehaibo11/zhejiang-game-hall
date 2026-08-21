package com.bianfeng.seppellita.manager;

import com.bianfeng.seppellita.bean.InitBean;
import com.bianfeng.seppellita.utils.SeppellitaGsonUtils;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;

public class PolicysManager implements IPolicysManager {
    private volatile InitBean.DataBean policysBean;

    @Override
    public void setPolicysBean(InitBean.DataBean dataBean) {
        this.policysBean = dataBean;
    }

    @Override
    public String getPolicys(String str) {
        if (this.policysBean == null) {
            return str;
        }
        List<InitBean.DataBean.AbtestBean> abtest = this.policysBean.getAbtest();
        if (abtest.size() == 0) {
            return str;
        }
        try {
            Map<String, String> map = SeppellitaGsonUtils.getMap(str);
            ArrayList arrayList = new ArrayList();
            String str2 = map.get("pg");
            for (InitBean.DataBean.AbtestBean abtestBean : abtest) {
                if (abtestBean.getPage().equalsIgnoreCase(str2)) {
                    arrayList.add(abtestBean.getListBean());
                }
            }
            map.put("ab", SeppellitaGsonUtils.toJson(arrayList));
            return SeppellitaGsonUtils.toJson(map);
        } catch (Exception unused) {
            return str;
        }
    }

    @Override
    public String getPolicys(String str, String str2) {
        if (this.policysBean == null) {
            return null;
        }
        List<InitBean.DataBean.AbtestBean> abtest = this.policysBean.getAbtest();
        if (abtest.size() == 0) {
            return null;
        }
        for (InitBean.DataBean.AbtestBean abtestBean : abtest) {
            if (abtestBean.getPage().equalsIgnoreCase(str) && abtestBean.getTest_name().equalsIgnoreCase(str2)) {
                return abtestBean.getUser_tag();
            }
        }
        return null;
    }
}
