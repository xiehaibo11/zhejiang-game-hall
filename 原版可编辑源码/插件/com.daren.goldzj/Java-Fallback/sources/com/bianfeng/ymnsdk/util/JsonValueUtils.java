package com.bianfeng.ymnsdk.util;

import java.math.BigDecimal;

public class JsonValueUtils {
    public JsonValueUtils() {
    }

    public static String doubleToString(Object r2) {
        return new Double(String.valueOf(r2)).intValue() + "";
    L4:
        e = move-exception;
        e.printStackTrace();
        return "YMN";
    }

    public static String perProduct(String r4, String r5) {
        return ((float) ((Double.parseDouble(r5) / 100.0d) / Double.parseDouble(r4))) + "";
    }

    public static int price2Int(String r2) {
        return (int) new BigDecimal(r2).multiply(new BigDecimal("100")).floatValue();
    }

    public static int string2Int(String r0) {
        return Integer.parseInt(r0);
    }
}
