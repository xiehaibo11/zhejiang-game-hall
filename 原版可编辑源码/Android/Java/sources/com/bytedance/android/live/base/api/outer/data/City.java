package com.bytedance.android.live.base.api.outer.data;

public class City {
    String cityName;

    public City(String str) {
        this.cityName = str;
    }

    public String getCityName() {
        return this.cityName;
    }

    public void setCityName(String str) {
        this.cityName = str;
    }
}
