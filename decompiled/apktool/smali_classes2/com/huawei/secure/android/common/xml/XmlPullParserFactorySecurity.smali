.class public Lcom/huawei/secure/android/common/xml/XmlPullParserFactorySecurity;
.super Ljava/lang/Object;
.source "SourceFile"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lorg/xmlpull/v1/XmlPullParserFactory;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/xmlpull/v1/XmlPullParserException;
        }
    .end annotation

    .line 1
    invoke-static {}, Lorg/xmlpull/v1/XmlPullParserFactory;->newInstance()Lorg/xmlpull/v1/XmlPullParserFactory;

    move-result-object v0

    const/4 v1, 0x1

    const-string v2, "http://xmlpull.org/v1/doc/features.html#process-namespaces"

    .line 4
    invoke-virtual {v0, v2, v1}, Lorg/xmlpull/v1/XmlPullParserFactory;->setFeature(Ljava/lang/String;Z)V

    const/4 v2, 0x0

    const-string v3, "http://xmlpull.org/v1/doc/features.html#report-namespace-prefixes"

    .line 7
    invoke-virtual {v0, v3, v2}, Lorg/xmlpull/v1/XmlPullParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v3, "http://xmlpull.org/v1/doc/features.html#process-docdecl"

    .line 10
    invoke-virtual {v0, v3, v1}, Lorg/xmlpull/v1/XmlPullParserFactory;->setFeature(Ljava/lang/String;Z)V

    const-string v1, "http://xmlpull.org/v1/doc/features.html#validation"

    .line 13
    invoke-virtual {v0, v1, v2}, Lorg/xmlpull/v1/XmlPullParserFactory;->setFeature(Ljava/lang/String;Z)V

    return-object v0
.end method
