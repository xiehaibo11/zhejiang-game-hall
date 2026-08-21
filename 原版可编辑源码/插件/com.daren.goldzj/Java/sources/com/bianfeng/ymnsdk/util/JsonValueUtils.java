package com.bianfeng.ymnsdk.util;

import java.math.BigDecimal;

public class JsonValueUtils {
    public static String doubleToString(Object obj) {
        try {
            return new Double(String.valueOf(obj)).intValue() + "";
        } catch (Exception e) {
            e.printStackTrace();
            return "YMN";
        }
    }

    public static String perProduct(String str, String str2) {
        return ((float) ((Double.parseDouble(str2) / 100.0d) / Double.parseDouble(str))) + "";
    }

    public static int price2Int(String str) {
        return (int) new BigDecimal(str).multiply(new BigDecimal("100")).floatValue();
    }

    public static int string2Int(String str) {
        return Integer.parseInt(str);
    }
}
