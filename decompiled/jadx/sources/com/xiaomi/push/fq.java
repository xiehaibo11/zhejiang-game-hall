package com.xiaomi.push;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;
import org.xmlpull.v1.XmlPullParserFactory;

/* JADX INFO: loaded from: classes4.dex */
public class fq {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private XmlPullParser f8165a;

    fq() {
        try {
            XmlPullParser xmlPullParserNewPullParser = XmlPullParserFactory.newInstance().newPullParser();
            this.f8165a = xmlPullParserNewPullParser;
            xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", true);
        } catch (XmlPullParserException unused) {
        }
    }

    gn a(byte[] bArr, fw fwVar) throws XmlPullParserException, gh, IOException {
        this.f8165a.setInput(new InputStreamReader(new ByteArrayInputStream(bArr)));
        this.f8165a.next();
        int eventType = this.f8165a.getEventType();
        String name = this.f8165a.getName();
        if (eventType != 2) {
            return null;
        }
        if (name.equals("message")) {
            return gv.a(this.f8165a);
        }
        if (name.equals("iq")) {
            return gv.a(this.f8165a, fwVar);
        }
        if (name.equals("presence")) {
            return gv.m391a(this.f8165a);
        }
        if (this.f8165a.getName().equals("stream")) {
            return null;
        }
        if (this.f8165a.getName().equals("error")) {
            throw new gh(gv.m392a(this.f8165a));
        }
        if (!this.f8165a.getName().equals("warning")) {
            this.f8165a.getName().equals("bind");
            return null;
        }
        this.f8165a.next();
        this.f8165a.getName().equals("multi-login");
        return null;
    }
}
