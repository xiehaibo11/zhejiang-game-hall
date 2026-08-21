package org.apache.commons.codec.language.bm;

import java.io.InputStream;
import java.util.Collections;
import java.util.EnumMap;
import java.util.HashSet;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.Set;

public class Languages {
    public static final String ANY = "any";
    public static final LanguageSet ANY_LANGUAGE;
    private static final Map<NameType, Languages> LANGUAGES = new EnumMap(NameType.class);
    public static final LanguageSet NO_LANGUAGES;
    private final Set<String> languages;

    public static abstract class LanguageSet {
        public abstract boolean contains(String str);

        public abstract String getAny();

        public abstract boolean isEmpty();

        public abstract boolean isSingleton();

        public abstract LanguageSet restrictTo(LanguageSet languageSet);

        public static LanguageSet from(Set<String> set) {
            return set.isEmpty() ? Languages.NO_LANGUAGES : new SomeLanguages(set);
        }
    }

    public static final class SomeLanguages extends LanguageSet {
        private final Set<String> languages;

        private SomeLanguages(Set<String> set) {
            this.languages = Collections.unmodifiableSet(set);
        }

        @Override
        public boolean contains(String str) {
            return this.languages.contains(str);
        }

        @Override
        public String getAny() {
            return this.languages.iterator().next();
        }

        public Set<String> getLanguages() {
            return this.languages;
        }

        @Override
        public boolean isEmpty() {
            return this.languages.isEmpty();
        }

        @Override
        public boolean isSingleton() {
            return this.languages.size() == 1;
        }

        @Override
        public LanguageSet restrictTo(LanguageSet languageSet) {
            if (languageSet == Languages.NO_LANGUAGES) {
                return languageSet;
            }
            if (languageSet == Languages.ANY_LANGUAGE) {
                return this;
            }
            SomeLanguages someLanguages = (SomeLanguages) languageSet;
            if (someLanguages.languages.containsAll(this.languages)) {
                return this;
            }
            HashSet hashSet = new HashSet(this.languages);
            hashSet.retainAll(someLanguages.languages);
            return from(hashSet);
        }

        public String toString() {
            return "Languages(" + this.languages.toString() + ")";
        }
    }

    static {
        for (NameType nameType : NameType.values()) {
            LANGUAGES.put(nameType, getInstance(langResourceName(nameType)));
        }
        NO_LANGUAGES = new LanguageSet() {
            @Override
            public boolean contains(String str) {
                return false;
            }

            @Override
            public boolean isEmpty() {
                return true;
            }

            @Override
            public boolean isSingleton() {
                return false;
            }

            @Override
            public LanguageSet restrictTo(LanguageSet languageSet) {
                return this;
            }

            public String toString() {
                return "NO_LANGUAGES";
            }

            @Override
            public String getAny() {
                throw new NoSuchElementException("Can't fetch any language from the empty language set.");
            }
        };
        ANY_LANGUAGE = new LanguageSet() {
            @Override
            public boolean contains(String str) {
                return true;
            }

            @Override
            public boolean isEmpty() {
                return false;
            }

            @Override
            public boolean isSingleton() {
                return false;
            }

            @Override
            public LanguageSet restrictTo(LanguageSet languageSet) {
                return languageSet;
            }

            public String toString() {
                return "ANY_LANGUAGE";
            }

            @Override
            public String getAny() {
                throw new NoSuchElementException("Can't fetch any language from the any language set.");
            }
        };
    }

    public static Languages getInstance(NameType nameType) {
        return LANGUAGES.get(nameType);
    }

    public static Languages getInstance(String str) {
        HashSet hashSet = new HashSet();
        InputStream resourceAsStream = Languages.class.getClassLoader().getResourceAsStream(str);
        if (resourceAsStream == null) {
            throw new IllegalArgumentException("Unable to resolve required resource: " + str);
        }
        Scanner scanner = new Scanner(resourceAsStream, "UTF-8");
        while (true) {
            boolean z = false;
            while (scanner.hasNextLine()) {
                String strTrim = scanner.nextLine().trim();
                if (z) {
                    if (strTrim.endsWith("*/")) {
                        break;
                    }
                } else if (strTrim.startsWith("/*")) {
                    z = true;
                } else if (strTrim.length() > 0) {
                    hashSet.add(strTrim);
                }
            }
            return new Languages(Collections.unmodifiableSet(hashSet));
        }
    }

    private static String langResourceName(NameType nameType) {
        return String.format("org/apache/commons/codec/language/bm/%s_languages.txt", nameType.getName());
    }

    private Languages(Set<String> set) {
        this.languages = set;
    }

    public Set<String> getLanguages() {
        return this.languages;
    }
}
