package com.bianfeng.seppellita.manager;

import com.bianfeng.seppellita.bean.InitBean;

public interface IPolicysManager {
    String getPolicys(String str);

    String getPolicys(String str, String str2);

    void setPolicysBean(InitBean.DataBean dataBean);
}
