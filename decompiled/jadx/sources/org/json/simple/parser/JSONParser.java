package org.json.simple.parser;

import java.io.IOException;
import java.io.Reader;
import java.io.StringReader;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import org.json.simple.JSONArray;
import org.json.simple.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class JSONParser {
    public static final int S_END = 6;
    public static final int S_INIT = 0;
    public static final int S_IN_ARRAY = 3;
    public static final int S_IN_ERROR = -1;
    public static final int S_IN_FINISHED_VALUE = 1;
    public static final int S_IN_OBJECT = 2;
    public static final int S_IN_PAIR_VALUE = 5;
    public static final int S_PASSED_PAIR_KEY = 4;
    private LinkedList handlerStatusStack;
    private Yylex lexer = new Yylex((Reader) null);
    private Yytoken token = null;
    private int status = 0;

    private List createArrayContainer(ContainerFactory containerFactory) {
        List listCreatArrayContainer;
        return (containerFactory == null || (listCreatArrayContainer = containerFactory.creatArrayContainer()) == null) ? new JSONArray() : listCreatArrayContainer;
    }

    private Map createObjectContainer(ContainerFactory containerFactory) {
        Map mapCreateObjectContainer;
        return (containerFactory == null || (mapCreateObjectContainer = containerFactory.createObjectContainer()) == null) ? new JSONObject() : mapCreateObjectContainer;
    }

    private void nextToken() throws ParseException, IOException {
        Yytoken yytokenYylex = this.lexer.yylex();
        this.token = yytokenYylex;
        if (yytokenYylex == null) {
            this.token = new Yytoken(-1, null);
        }
    }

    private int peekStatus(LinkedList linkedList) {
        if (linkedList.size() == 0) {
            return -1;
        }
        return ((Integer) linkedList.getFirst()).intValue();
    }

    public int getPosition() {
        return this.lexer.getPosition();
    }

    public Object parse(Reader reader) throws ParseException, IOException {
        return parse(reader, (ContainerFactory) null);
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0033 A[Catch: IOException -> 0x01d3, TryCatch #0 {IOException -> 0x01d3, blocks: (B:3:0x000d, B:65:0x01a3, B:67:0x01a7, B:72:0x01bb, B:73:0x01c6, B:13:0x0026, B:19:0x0033, B:20:0x0037, B:21:0x0059, B:22:0x005e, B:23:0x0081, B:24:0x009b, B:25:0x009f, B:32:0x00ae, B:34:0x00b4, B:35:0x00bf, B:36:0x00c3, B:37:0x00e1, B:38:0x00ff, B:39:0x010e, B:44:0x011a, B:46:0x0120, B:47:0x012c, B:49:0x0134, B:50:0x014a, B:52:0x0150, B:54:0x0155, B:55:0x0160, B:56:0x0161, B:61:0x016d, B:62:0x017d, B:63:0x0181, B:64:0x0192, B:74:0x01c7, B:75:0x01d2), top: B:78:0x000d }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.Object parse(java.io.Reader r9, org.json.simple.parser.ContainerFactory r10) throws org.json.simple.parser.ParseException, java.io.IOException {
        /*
            Method dump skipped, instruction units count: 469
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.simple.parser.JSONParser.parse(java.io.Reader, org.json.simple.parser.ContainerFactory):java.lang.Object");
    }

    public Object parse(String str) throws ParseException {
        return parse(str, (ContainerFactory) null);
    }

    public Object parse(String str, ContainerFactory containerFactory) throws ParseException {
        try {
            return parse(new StringReader(str), containerFactory);
        } catch (IOException e) {
            throw new ParseException(-1, 2, e);
        }
    }

    public void parse(Reader reader, ContentHandler contentHandler) throws ParseException, IOException {
        parse(reader, contentHandler, false);
    }

    /* JADX WARN: Removed duplicated region for block: B:136:0x01dc A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:22:0x004a A[Catch: Error -> 0x01e8, RuntimeException -> 0x01ec, ParseException -> 0x01f0, IOException -> 0x01f4, TryCatch #2 {IOException -> 0x01f4, Error -> 0x01e8, RuntimeException -> 0x01ec, ParseException -> 0x01f0, blocks: (B:10:0x001d, B:11:0x0025, B:97:0x01c2, B:99:0x01c6, B:104:0x01dc, B:105:0x01e7, B:14:0x002b, B:17:0x003b, B:22:0x004a, B:23:0x004e, B:26:0x006c, B:29:0x008a, B:32:0x009e, B:35:0x00a5, B:42:0x00b7, B:44:0x00bd, B:46:0x00c9, B:45:0x00c7, B:49:0x00d0, B:52:0x00e3, B:55:0x00f6, B:58:0x0101, B:63:0x0110, B:65:0x0116, B:67:0x0122, B:66:0x0120, B:70:0x0129, B:72:0x0131, B:75:0x014a, B:77:0x0153, B:79:0x0159, B:80:0x0166, B:81:0x0167, B:86:0x0179, B:89:0x018c, B:92:0x019f, B:95:0x01b6, B:96:0x01c1), top: B:118:0x001d }] */
    /* JADX WARN: Removed duplicated region for block: B:99:0x01c6 A[Catch: Error -> 0x01e8, RuntimeException -> 0x01ec, ParseException -> 0x01f0, IOException -> 0x01f4, TRY_LEAVE, TryCatch #2 {IOException -> 0x01f4, Error -> 0x01e8, RuntimeException -> 0x01ec, ParseException -> 0x01f0, blocks: (B:10:0x001d, B:11:0x0025, B:97:0x01c2, B:99:0x01c6, B:104:0x01dc, B:105:0x01e7, B:14:0x002b, B:17:0x003b, B:22:0x004a, B:23:0x004e, B:26:0x006c, B:29:0x008a, B:32:0x009e, B:35:0x00a5, B:42:0x00b7, B:44:0x00bd, B:46:0x00c9, B:45:0x00c7, B:49:0x00d0, B:52:0x00e3, B:55:0x00f6, B:58:0x0101, B:63:0x0110, B:65:0x0116, B:67:0x0122, B:66:0x0120, B:70:0x0129, B:72:0x0131, B:75:0x014a, B:77:0x0153, B:79:0x0159, B:80:0x0166, B:81:0x0167, B:86:0x0179, B:89:0x018c, B:92:0x019f, B:95:0x01b6, B:96:0x01c1), top: B:118:0x001d }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void parse(java.io.Reader r8, org.json.simple.parser.ContentHandler r9, boolean r10) throws org.json.simple.parser.ParseException, java.io.IOException {
        /*
            Method dump skipped, instruction units count: 524
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: org.json.simple.parser.JSONParser.parse(java.io.Reader, org.json.simple.parser.ContentHandler, boolean):void");
    }

    public void parse(String str, ContentHandler contentHandler) throws ParseException {
        parse(str, contentHandler, false);
    }

    public void parse(String str, ContentHandler contentHandler, boolean z) throws ParseException {
        try {
            parse(new StringReader(str), contentHandler, z);
        } catch (IOException e) {
            throw new ParseException(-1, 2, e);
        }
    }

    public void reset() {
        this.token = null;
        this.status = 0;
        this.handlerStatusStack = null;
    }

    public void reset(Reader reader) {
        this.lexer.yyreset(reader);
        reset();
    }
}
