package com.qq.e.comm.pi;

public interface NUADI extends com.qq.e.comm.pi.ADI {
    java.lang.String getAdNetWorkName();

    void loadData(int r1);

    void loadData(int r1, com.qq.e.comm.constants.LoadAdParams r2);

    void setCategories(java.util.List<java.lang.String> r1);

    void setMaxVideoDuration(int r1);

    void setMinVideoDuration(int r1);

    void setVastClassName(java.lang.String r1);
}
