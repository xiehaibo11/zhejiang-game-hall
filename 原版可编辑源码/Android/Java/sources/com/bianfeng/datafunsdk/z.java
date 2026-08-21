package com.bianfeng.datafunsdk;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class z {
    public static String a() {
        return new SimpleDateFormat("yyyy-MM-dd").format(new Date());
    }

    public static String b() {
        Calendar calendar = Calendar.getInstance();
        calendar.add(2, -1);
        return new SimpleDateFormat("yyyy-MM-dd").format(calendar.getTime());
    }
}
