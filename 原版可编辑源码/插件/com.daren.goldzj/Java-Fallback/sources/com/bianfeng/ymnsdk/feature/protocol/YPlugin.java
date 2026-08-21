package com.bianfeng.ymnsdk.feature.protocol;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface YPlugin {

    public enum Entrance extends Enum<Entrance> {
        private static final Entrance[] $VALUES = null;
        public static final Entrance ACTIVITY = null;
        public static final Entrance APPLICATION = null;
        public static final Entrance CONTEXT = null;

        static {
            CONTEXT = new Entrance("CONTEXT", 0);
            ACTIVITY = new Entrance("ACTIVITY", 1);
            APPLICATION = new Entrance("APPLICATION", 2);
            $VALUES = new Entrance[]{CONTEXT, ACTIVITY, APPLICATION};
        }

        Entrance(String r1, int r2) {
        }

        public static Entrance valueOf(String r1) {
            return (Entrance) Enum.valueOf(Entrance.class, r1);
        }

        public static Entrance[] values() {
            return (Entrance[]) $VALUES.clone();
        }
    }

    public enum Policy extends Enum<Policy> {
        private static final Policy[] $VALUES = null;
        public static final Policy FORCE = null;
        public static final Policy LAZY = null;
        public static final Policy REMOTE = null;
        public static final Policy TRIGGER = null;

        static {
            LAZY = new Policy("LAZY", 0);
            FORCE = new Policy("FORCE", 1);
            REMOTE = new Policy("REMOTE", 2);
            TRIGGER = new Policy("TRIGGER", 3);
            $VALUES = new Policy[]{LAZY, FORCE, REMOTE, TRIGGER};
        }

        Policy(String r1, int r2) {
        }

        public static Policy valueOf(String r1) {
            return (Policy) Enum.valueOf(Policy.class, r1);
        }

        public static Policy[] values() {
            return (Policy[]) $VALUES.clone();
        }
    }

    Entrance entrance() default Entrance.CONTEXT;

    Policy strategy() default Policy.LAZY;
}
