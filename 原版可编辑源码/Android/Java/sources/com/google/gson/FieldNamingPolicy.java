package com.google.gson;

import com.xiaomi.mipush.sdk.Constants;
import java.lang.reflect.Field;
import java.util.Locale;

public enum FieldNamingPolicy implements FieldNamingStrategy {
    IDENTITY {
        @Override
        public String translateName(Field f) {
            return f.getName();
        }
    },
    UPPER_CAMEL_CASE {
        @Override
        public String translateName(Field f) {
            return FieldNamingPolicy.upperCaseFirstLetter(f.getName());
        }
    },
    UPPER_CAMEL_CASE_WITH_SPACES {
        @Override
        public String translateName(Field f) {
            return FieldNamingPolicy.upperCaseFirstLetter(FieldNamingPolicy.separateCamelCase(f.getName(), " "));
        }
    },
    LOWER_CASE_WITH_UNDERSCORES {
        @Override
        public String translateName(Field f) {
            return FieldNamingPolicy.separateCamelCase(f.getName(), "_").toLowerCase(Locale.ENGLISH);
        }
    },
    LOWER_CASE_WITH_DASHES {
        @Override
        public String translateName(Field f) {
            return FieldNamingPolicy.separateCamelCase(f.getName(), Constants.ACCEPT_TIME_SEPARATOR_SERVER).toLowerCase(Locale.ENGLISH);
        }
    },
    LOWER_CASE_WITH_DOTS {
        @Override
        public String translateName(Field f) {
            return FieldNamingPolicy.separateCamelCase(f.getName(), ".").toLowerCase(Locale.ENGLISH);
        }
    };

    static String separateCamelCase(String name, String separator) {
        StringBuilder translation = new StringBuilder();
        int length = name.length();
        for (int i = 0; i < length; i++) {
            char character = name.charAt(i);
            if (Character.isUpperCase(character) && translation.length() != 0) {
                translation.append(separator);
            }
            translation.append(character);
        }
        return translation.toString();
    }

    static String upperCaseFirstLetter(String name) {
        StringBuilder fieldNameBuilder = new StringBuilder();
        int index = 0;
        char firstCharacter = name.charAt(0);
        int length = name.length();
        while (index < length - 1 && !Character.isLetter(firstCharacter)) {
            fieldNameBuilder.append(firstCharacter);
            index++;
            firstCharacter = name.charAt(index);
        }
        if (!Character.isUpperCase(firstCharacter)) {
            String modifiedTarget = modifyString(Character.toUpperCase(firstCharacter), name, index + 1);
            fieldNameBuilder.append(modifiedTarget);
            return fieldNameBuilder.toString();
        }
        return name;
    }

    private static String modifyString(char firstCharacter, String srcString, int indexOfSubstring) {
        if (indexOfSubstring < srcString.length()) {
            return firstCharacter + srcString.substring(indexOfSubstring);
        }
        return String.valueOf(firstCharacter);
    }
}
