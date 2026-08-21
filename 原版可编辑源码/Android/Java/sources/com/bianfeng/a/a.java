package com.bianfeng.a;

import com.bianfeng.a.a.b;
import com.bianfeng.a.a.c;
import java.io.File;

public class a {
    public static b a(String str) {
        return c.a(new File(str));
    }

    public static String b(String str) {
        b bVarA = a(str);
        if (bVarA != null) {
            return bVarA.a();
        }
        return null;
    }
}
