package com.bianfeng.ymnsdk.util;

import java.math.BigDecimal;

/* JADX INFO: loaded from: classes.dex */
public class JsonValueUtils {
    public static String doubleToString(Object obj) {
        try {
            return new Double(String.valueOf(obj)).intValue() + "";
        } catch (Exception e) {
            e.printStackTrace();
            return "YMN";
        }
    }

    public static String perProduct(String count, String totalNum) {
        double num = Double.parseDouble(count);
        double total = Double.parseDouble(totalNum) / 100.0d;
        float per = (float) (total / num);
        return per + "";
    }

    public static int string2Int(String s) {
        return Integer.parseInt(s);
    }

    public static int price2Int(String s) {
        BigDecimal price = new BigDecimal(s);
        BigDecimal c = new BigDecimal("100");
        int total = (int) price.multiply(c).floatValue();
        return total;
    }
}
