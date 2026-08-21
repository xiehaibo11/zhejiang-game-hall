package org.bouncycastle.util;

public interface StreamParser {
    java.lang.Object read() throws org.bouncycastle.util.StreamParsingException;

    java.util.Collection readAll() throws org.bouncycastle.util.StreamParsingException;
}
