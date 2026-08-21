package com.bianfeng.seppellita;

public interface SepperllitaCallback {
    void callTime();

    void onDel();

    void onInitFail(java.lang.String r1);

    void onInitSuc(com.bianfeng.seppellita.bean.InitBean.DataBean r1);

    void onInsertSuccess();

    void onPostFail(java.lang.String r1);

    void onPostSuc(java.util.List<java.lang.String> r1);

    void onSelectSuc(java.util.List<java.lang.String> r1);
}
