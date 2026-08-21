package com.bykv.vk.openvk;

/* JADX INFO: loaded from: classes.dex */
public class TTLocation implements LocationProvider {
    private double df;
    private double rg;

    public TTLocation(double d, double d2) {
        this.rg = 0.0d;
        this.df = 0.0d;
        this.rg = d;
        this.df = d2;
    }

    @Override // com.bykv.vk.openvk.LocationProvider
    public double getLatitude() {
        return this.rg;
    }

    public void setLatitude(double d) {
        this.rg = d;
    }

    @Override // com.bykv.vk.openvk.LocationProvider
    public double getLongitude() {
        return this.df;
    }

    public void setLongitude(double d) {
        this.df = d;
    }
}
