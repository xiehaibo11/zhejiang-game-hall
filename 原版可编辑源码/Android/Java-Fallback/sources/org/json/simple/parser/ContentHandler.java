package org.json.simple.parser;

public interface ContentHandler {
    boolean endArray() throws org.json.simple.parser.ParseException, java.io.IOException;

    void endJSON() throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean endObject() throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean endObjectEntry() throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean primitive(java.lang.Object r1) throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean startArray() throws org.json.simple.parser.ParseException, java.io.IOException;

    void startJSON() throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean startObject() throws org.json.simple.parser.ParseException, java.io.IOException;

    boolean startObjectEntry(java.lang.String r1) throws org.json.simple.parser.ParseException, java.io.IOException;
}
