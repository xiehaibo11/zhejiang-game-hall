package com.czhj.wire;

final class Preconditions {
    private Preconditions() {
    }

    static void a(Object obj, String str) {
        if (obj == null) {
            throw new NullPointerException(str);
        }
    }
}
