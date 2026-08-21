package android.support.v4.content;

@java.lang.Deprecated
public final class SharedPreferencesCompat {

    @java.lang.Deprecated
    public static final class EditorCompat {
        private static android.support.v4.content.SharedPreferencesCompat.EditorCompat sInstance;
        private final android.support.v4.content.SharedPreferencesCompat.EditorCompat.Helper mHelper;

        private static class Helper {
            Helper() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public void apply(android.content.SharedPreferences.Editor r1) {
                    r0 = this;
                    r1.apply()     // Catch: java.lang.AbstractMethodError -> L4
                    goto L7
                L4:
                    r1.commit()
                L7:
                    return
            }
        }

        private EditorCompat() {
                r1 = this;
                r1.<init>()
                android.support.v4.content.SharedPreferencesCompat$EditorCompat$Helper r0 = new android.support.v4.content.SharedPreferencesCompat$EditorCompat$Helper
                r0.<init>()
                r1.mHelper = r0
                return
        }

        @java.lang.Deprecated
        public static android.support.v4.content.SharedPreferencesCompat.EditorCompat getInstance() {
                android.support.v4.content.SharedPreferencesCompat$EditorCompat r0 = android.support.v4.content.SharedPreferencesCompat.EditorCompat.sInstance
                if (r0 != 0) goto Lb
                android.support.v4.content.SharedPreferencesCompat$EditorCompat r0 = new android.support.v4.content.SharedPreferencesCompat$EditorCompat
                r0.<init>()
                android.support.v4.content.SharedPreferencesCompat.EditorCompat.sInstance = r0
            Lb:
                android.support.v4.content.SharedPreferencesCompat$EditorCompat r0 = android.support.v4.content.SharedPreferencesCompat.EditorCompat.sInstance
                return r0
        }

        @java.lang.Deprecated
        public void apply(android.content.SharedPreferences.Editor r2) {
                r1 = this;
                android.support.v4.content.SharedPreferencesCompat$EditorCompat$Helper r0 = r1.mHelper
                r0.apply(r2)
                return
        }
    }

    private SharedPreferencesCompat() {
            r0 = this;
            r0.<init>()
            return
    }
}
