package android.support.annotation;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

@Target({ElementType.ANNOTATION_TYPE, ElementType.TYPE, ElementType.METHOD, ElementType.CONSTRUCTOR, ElementType.FIELD, ElementType.PACKAGE})
@Retention(RetentionPolicy.CLASS)
public @interface RestrictTo {

    public enum Scope extends Enum<Scope> {
        private static final Scope[] $VALUES = null;

        @Deprecated
        public static final Scope GROUP_ID = null;
        public static final Scope LIBRARY = null;
        public static final Scope LIBRARY_GROUP = null;
        public static final Scope SUBCLASSES = null;
        public static final Scope TESTS = null;

        Scope(String r1, int r2) {
        }

        public static Scope valueOf(String r1) {
            return (Scope) Enum.valueOf(Scope.class, r1);
        }

        public static Scope[] values() {
            return (Scope[]) $VALUES.clone();
        }

        static {
            LIBRARY = new Scope("LIBRARY", 0);
            LIBRARY_GROUP = new Scope("LIBRARY_GROUP", 1);
            GROUP_ID = new Scope("GROUP_ID", 2);
            TESTS = new Scope("TESTS", 3);
            SUBCLASSES = new Scope("SUBCLASSES", 4);
            $VALUES = new Scope[]{LIBRARY, LIBRARY_GROUP, GROUP_ID, TESTS, SUBCLASSES};
        }
    }

    Scope[] value();
}
