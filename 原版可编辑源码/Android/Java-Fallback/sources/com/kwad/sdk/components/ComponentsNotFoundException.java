package com.kwad.sdk.components;

public class ComponentsNotFoundException extends java.lang.IllegalStateException {
    private static final java.lang.String MESSAGE = "组件未集成/未加载，如需要该部分的功能，请集成后重试";
    private static final long serialVersionUID = -2648461538415997941L;

    public ComponentsNotFoundException(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ComponentsNotFoundException(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "组件未集成/未加载，如需要该部分的功能，请集成后重试"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r1.<init>(r2, r3)
            return
    }
}
