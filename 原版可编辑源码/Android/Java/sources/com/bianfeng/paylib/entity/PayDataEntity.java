package com.bianfeng.paylib.entity;

import com.bianfeng.thridlibrary.ThridSdk;

public class PayDataEntity {
    private String ext;
    private String notify_url;
    private String order_id;
    private String product_count;
    private String product_id;
    private String product_name;
    private String product_price;
    private String role_balance;
    private String role_grade;
    private String role_id;
    private String role_name;
    private String server_id;
    private String server_name;

    public String getExt() {
        return this.ext;
    }

    public void setExt(String str) {
        this.ext = str;
    }

    public String getProduct_price() {
        return this.product_price;
    }

    public void setProduct_price(String str) {
        this.product_price = str;
    }

    public String getProduct_name() {
        return this.product_name;
    }

    public void setProduct_name(String str) {
        this.product_name = str;
    }

    public String getRole_name() {
        return this.role_name;
    }

    public void setRole_name(String str) {
        this.role_name = str;
    }

    public String getRole_id() {
        return this.role_id;
    }

    public void setRole_id(String str) {
        this.role_id = str;
    }

    public String getProduct_id() {
        return this.product_id;
    }

    public void setProduct_id(String str) {
        this.product_id = str;
    }

    public String getProduct_count() {
        return this.product_count;
    }

    public void setProduct_count(String str) {
        this.product_count = str;
    }

    public String getServer_name() {
        return this.server_name;
    }

    public void setServer_name(String str) {
        this.server_name = str;
    }

    public String getRole_balance() {
        return this.role_balance;
    }

    public void setRole_balance(String str) {
        this.role_balance = str;
    }

    public String getServer_id() {
        return this.server_id;
    }

    public void setServer_id(String str) {
        this.server_id = str;
    }

    public String getNotify_url() {
        return this.notify_url;
    }

    public void setNotify_url(String str) {
        this.notify_url = str;
    }

    public String getOrder_id() {
        return this.order_id;
    }

    public void setOrder_id(String str) {
        this.order_id = str;
    }

    public String getRole_grade() {
        return this.role_grade;
    }

    public void setRole_grade(String str) {
        this.role_grade = str;
    }

    public String toString() {
        return ThridSdk.getGson().toJson(this);
    }
}
