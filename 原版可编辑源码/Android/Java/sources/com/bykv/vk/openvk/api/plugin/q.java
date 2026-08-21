package com.bykv.vk.openvk.api.plugin;

public class q extends Exception {
    private final int rg;

    public q(int i, String str) {
        super(str);
        this.rg = i;
    }

    public int rg() {
        return this.rg;
    }
}
