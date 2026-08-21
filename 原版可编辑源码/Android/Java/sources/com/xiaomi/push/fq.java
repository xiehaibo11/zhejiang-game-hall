package com.xiaomi.push;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

public class fq {
    private XmlPullParser a;

    fq() {
        try {
            XmlPullParser xmlPullParserNewPullParser = XmlPullParserFactory.newInstance().newPullParser();
            this.a = xmlPullParserNewPullParser;
            xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", true);
        } catch (XmlPullParserException unused) {
        }
    }

    gn a(byte[] bArr, fw fwVar) throws XmlPullParserException, gh, IOException {
        this.a.setInput(new InputStreamReader(new ByteArrayInputStream(bArr)));
        this.a.next();
        int eventType = this.a.getEventType();
        String name = this.a.getName();
        if (eventType != 2) {
            return null;
        }
        if (name.equals("message")) {
            return gv.a(this.a);
        }
        if (name.equals("iq")) {
            return gv.a(this.a, fwVar);
        }
        if (name.equals("presence")) {
            return gv.a(this.a);
        }
        if (this.a.getName().equals("stream")) {
            return null;
        }
        if (this.a.getName().equals("error")) {
            throw new gh(gv.a(this.a));
        }
        if (!this.a.getName().equals("warning")) {
            this.a.getName().equals("bind");
            return null;
        }
        this.a.next();
        this.a.getName().equals("multi-login");
        return null;
    }
}
