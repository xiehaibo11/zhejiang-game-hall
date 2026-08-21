package com.ss.android.downloadlib;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

public class OrderDownloader {

    @Retention(RetentionPolicy.SOURCE)
    public @interface BizType {
        public static final String AD = "ad";
        public static final String GAME = "game";
    }
}
