package com.igexin.sdk;

import java.io.Serializable;

/* JADX INFO: loaded from: classes2.dex */
public class Tag implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2662a;

    private boolean a(String str) {
        boolean z = false;
        for (int length = str.length() - 1; length >= 0; length--) {
            char cCharAt = str.charAt(length);
            z = (cCharAt >= 19968 && cCharAt <= 40869) || (cCharAt >= 'A' && cCharAt <= 'Z') || ((cCharAt >= 'a' && cCharAt <= 'z') || ((cCharAt >= '0' && cCharAt <= '9') || cCharAt == '+' || cCharAt == '-' || cCharAt == '*' || cCharAt == '_' || cCharAt == ' ' || cCharAt == ':'));
            if (!z) {
                break;
            }
        }
        return z;
    }

    public String getName() {
        return this.f2662a;
    }

    public boolean isValidTagValue(String str) {
        return a(str);
    }

    public Tag setName(String str) {
        this.f2662a = str;
        return this;
    }
}
