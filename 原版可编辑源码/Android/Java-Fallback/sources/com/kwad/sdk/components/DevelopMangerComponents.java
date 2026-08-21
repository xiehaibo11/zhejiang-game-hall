package com.kwad.sdk.components;

public interface DevelopMangerComponents extends com.kwad.sdk.components.a {

    public static class DevelopValue implements java.io.Serializable {
        private static final long serialVersionUID = 2793333073373146040L;
        java.io.Serializable mValue;

        public DevelopValue(java.io.Serializable r1) {
                r0 = this;
                r0.<init>()
                r0.mValue = r1
                return
        }

        public <T> T getValue() {
                r1 = this;
                java.io.Serializable r0 = r1.mValue
                if (r0 == 0) goto L5
                return r0
            L5:
                r0 = 0
                return r0
        }
    }

    java.lang.String yP();
}
