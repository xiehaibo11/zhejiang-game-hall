package android.support.v4.content;

import android.content.SharedPreferences;
import android.support.annotation.NonNull;

@Deprecated
public final class SharedPreferencesCompat {

    @Deprecated
    public static final class EditorCompat {
        private static EditorCompat sInstance;
        private final Helper mHelper;

        private static class Helper {
            Helper() {
            }

            public void apply(@NonNull SharedPreferences.Editor r1) {
                r1.apply();     // Catch: AbstractMethodError -> L4
                return;
            L4:
                r1.commit();
            }
        }

        private EditorCompat() {
            this.mHelper = new Helper();
        }

        @Deprecated
        public static EditorCompat getInstance() {
            if (sInstance != null) goto L6;
            sInstance = new EditorCompat();
        L6:
            return sInstance;
        }

        @Deprecated
        public void apply(@NonNull SharedPreferences.Editor r2) {
            this.mHelper.apply(r2);
        }
    }

    private SharedPreferencesCompat() {
    }
}
