package com.bianfeng.seppellita;

import com.bianfeng.seppellita.bean.InitBean;
import java.util.List;

public interface SepperllitaCallback {
    void callTime();

    void onDel();

    void onInitFail(String str);

    void onInitSuc(InitBean.DataBean dataBean);

    void onInsertSuccess();

    void onPostFail(String str);

    void onPostSuc(List<String> list);

    void onSelectSuc(List<String> list);
}
