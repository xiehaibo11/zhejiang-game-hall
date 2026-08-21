.class Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;
.super Lorg/xml/sax/helpers/DefaultHandler;
.source "XmlHandler.java"


# instance fields
.field private activities:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation
.end field

.field private curActions:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private curCategories:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

.field private curDataBeans:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;",
            ">;"
        }
    .end annotation
.end field

.field private curFilter:Landroid/content/IntentFilter;

.field private filters:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;"
        }
    .end annotation
.end field

.field private pkg:Ljava/lang/String;

.field private receivers:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation
.end field

.field private services:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Lorg/xml/sax/helpers/DefaultHandler;-><init>()V

    return-void
.end method

.method private repairAttrName(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "."

    .line 202
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 205
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->pkg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->intern()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public endElement(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/xml/sax/SAXException;
        }
    .end annotation

    .line 139
    invoke-super {p0, p1, p2, p3}, Lorg/xml/sax/helpers/DefaultHandler;->endElement(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 141
    invoke-virtual {p3}, Ljava/lang/String;->hashCode()I

    move-result p1

    const/4 p2, 0x3

    const/4 v0, 0x2

    const/4 v1, 0x1

    sparse-switch p1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string p1, "service"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v0

    goto :goto_1

    :sswitch_1
    const-string p1, "receiver"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, p2

    goto :goto_1

    :sswitch_2
    const-string p1, "intent-filter"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_1

    :sswitch_3
    const-string p1, "activity"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v1

    goto :goto_1

    :cond_0
    :goto_0
    const/4 p1, -0x1

    :goto_1
    if-eqz p1, :cond_4

    if-eq p1, v1, :cond_3

    if-eq p1, v0, :cond_2

    if-eq p1, p2, :cond_1

    goto/16 :goto_5

    .line 189
    :cond_1
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->receivers:Ljava/util/ArrayList;

    iget-object p2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 186
    :cond_2
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->services:Ljava/util/ArrayList;

    iget-object p2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 183
    :cond_3
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->activities:Ljava/util/ArrayList;

    iget-object p2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto/16 :goto_5

    .line 143
    :cond_4
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curActions:Ljava/util/List;

    if-eqz p1, :cond_5

    .line 144
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 145
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    invoke-virtual {p3, p2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    goto :goto_2

    .line 148
    :cond_5
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curCategories:Ljava/util/List;

    if-eqz p1, :cond_6

    .line 149
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    .line 150
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    invoke-virtual {p3, p2}, Landroid/content/IntentFilter;->addCategory(Ljava/lang/String;)V

    goto :goto_3

    .line 154
    :cond_6
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curDataBeans:Ljava/util/List;

    if-eqz p1, :cond_b

    .line 155
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_7
    :goto_4
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_b

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;

    .line 156
    iget-object p3, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->scheme:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_8

    .line 157
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    iget-object v0, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->scheme:Ljava/lang/String;

    invoke-virtual {p3, v0}, Landroid/content/IntentFilter;->addDataScheme(Ljava/lang/String;)V

    .line 160
    :cond_8
    iget-object p3, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->host:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_9

    iget-object p3, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->port:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_9

    .line 161
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    iget-object v0, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->host:Ljava/lang/String;

    iget-object v1, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->port:Ljava/lang/String;

    invoke-virtual {p3, v0, v1}, Landroid/content/IntentFilter;->addDataAuthority(Ljava/lang/String;Ljava/lang/String;)V

    .line 164
    :cond_9
    iget-object p3, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->path:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_a

    .line 165
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    iget-object v0, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->path:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->getPatternMatcherType()I

    move-result v1

    invoke-virtual {p3, v0, v1}, Landroid/content/IntentFilter;->addDataPath(Ljava/lang/String;I)V

    .line 169
    :cond_a
    :try_start_0
    iget-object p3, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->mimeType:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_7

    .line 170
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    iget-object p2, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->mimeType:Ljava/lang/String;

    invoke-virtual {p3, p2}, Landroid/content/IntentFilter;->addDataType(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/content/IntentFilter$MalformedMimeTypeException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p2

    .line 173
    invoke-virtual {p2}, Landroid/content/IntentFilter$MalformedMimeTypeException;->printStackTrace()V

    goto :goto_4

    :cond_b
    const/4 p1, 0x0

    .line 178
    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curActions:Ljava/util/List;

    .line 179
    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curCategories:Ljava/util/List;

    .line 180
    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curDataBeans:Ljava/util/List;

    :goto_5
    return-void

    :sswitch_data_0
    .sparse-switch
        -0x62b40cf1 -> :sswitch_3
        -0x3d616837 -> :sswitch_2
        -0x30341611 -> :sswitch_1
        0x7643c6b5 -> :sswitch_0
    .end sparse-switch
.end method

.method public getActivities()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation

    .line 50
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->activities:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getReceivers()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation

    .line 58
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->receivers:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getServices()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;"
        }
    .end annotation

    .line 54
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->services:Ljava/util/ArrayList;

    return-object v0
.end method

.method public startElement(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/xml/sax/SAXException;
        }
    .end annotation

    .line 63
    invoke-super {p0, p1, p2, p3, p4}, Lorg/xml/sax/helpers/DefaultHandler;->startElement(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V

    .line 65
    invoke-virtual {p3}, Ljava/lang/String;->hashCode()I

    move-result p1

    sparse-switch p1, :sswitch_data_0

    goto :goto_0

    :sswitch_0
    const-string p1, "service"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_1

    :sswitch_1
    const-string p1, "manifest"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    goto :goto_1

    :sswitch_2
    const-string p1, "category"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x6

    goto :goto_1

    :sswitch_3
    const-string p1, "data"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x7

    goto :goto_1

    :sswitch_4
    const-string p1, "receiver"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x3

    goto :goto_1

    :sswitch_5
    const-string p1, "intent-filter"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x4

    goto :goto_1

    :sswitch_6
    const-string p1, "action"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x5

    goto :goto_1

    :sswitch_7
    const-string p1, "activity"

    invoke-virtual {p3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_1

    :cond_0
    :goto_0
    const/4 p1, -0x1

    :goto_1
    const-string p2, "android:name"

    packed-switch p1, :pswitch_data_0

    goto/16 :goto_2

    .line 120
    :pswitch_0
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curDataBeans:Ljava/util/List;

    if-nez p1, :cond_1

    .line 121
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curDataBeans:Ljava/util/List;

    .line 123
    :cond_1
    new-instance p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;

    invoke-direct {p1}, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;-><init>()V

    const-string p2, "android:scheme"

    .line 124
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->scheme:Ljava/lang/String;

    const-string p2, "android:mimeType"

    .line 125
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->mimeType:Ljava/lang/String;

    const-string p2, "android:host"

    .line 126
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->host:Ljava/lang/String;

    const-string p2, "android:port"

    .line 127
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->port:Ljava/lang/String;

    const-string p2, "android:path"

    .line 128
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->path:Ljava/lang/String;

    const-string p2, "android:pathPattern"

    .line 129
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->pathPattern:Ljava/lang/String;

    const-string p2, "android:pathPrefix"

    .line 130
    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/DataBean;->pathPrefix:Ljava/lang/String;

    .line 132
    iget-object p2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curDataBeans:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_2

    .line 113
    :pswitch_1
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curCategories:Ljava/util/List;

    if-nez p1, :cond_2

    .line 114
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curCategories:Ljava/util/List;

    .line 116
    :cond_2
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curCategories:Ljava/util/List;

    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_2

    .line 106
    :pswitch_2
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curActions:Ljava/util/List;

    if-nez p1, :cond_3

    .line 107
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curActions:Ljava/util/List;

    .line 109
    :cond_3
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curActions:Ljava/util/List;

    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_2

    .line 101
    :pswitch_3
    new-instance p1, Landroid/content/IntentFilter;

    invoke-direct {p1}, Landroid/content/IntentFilter;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curFilter:Landroid/content/IntentFilter;

    .line 102
    iget-object p2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->filters:Ljava/util/List;

    invoke-interface {p2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_2

    .line 91
    :pswitch_4
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->receivers:Ljava/util/ArrayList;

    if-nez p1, :cond_4

    .line 92
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->receivers:Ljava/util/ArrayList;

    .line 94
    :cond_4
    new-instance p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-direct {p1}, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    .line 95
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->filters:Ljava/util/List;

    .line 96
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    iput-object p1, p3, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    .line 97
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->repairAttrName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->name:Ljava/lang/String;

    goto :goto_2

    .line 81
    :pswitch_5
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->services:Ljava/util/ArrayList;

    if-nez p1, :cond_5

    .line 82
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->services:Ljava/util/ArrayList;

    .line 84
    :cond_5
    new-instance p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-direct {p1}, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    .line 85
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->filters:Ljava/util/List;

    .line 86
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    iput-object p1, p3, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    .line 87
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->repairAttrName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->name:Ljava/lang/String;

    goto :goto_2

    .line 71
    :pswitch_6
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->activities:Ljava/util/ArrayList;

    if-nez p1, :cond_6

    .line 72
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->activities:Ljava/util/ArrayList;

    .line 74
    :cond_6
    new-instance p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-direct {p1}, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    .line 75
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->filters:Ljava/util/List;

    .line 76
    iget-object p3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    iput-object p1, p3, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    .line 77
    iget-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->curComponent:Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    invoke-interface {p4, p2}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->repairAttrName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->name:Ljava/lang/String;

    goto :goto_2

    :pswitch_7
    const-string p1, "package"

    .line 67
    invoke-interface {p4, p1}, Lorg/xml/sax/Attributes;->getValue(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->pkg:Ljava/lang/String;

    :goto_2
    return-void

    nop

    :sswitch_data_0
    .sparse-switch
        -0x62b40cf1 -> :sswitch_7
        -0x54d081ca -> :sswitch_6
        -0x3d616837 -> :sswitch_5
        -0x30341611 -> :sswitch_4
        0x2eefaa -> :sswitch_3
        0x302bcfe -> :sswitch_2
        0x7c92e2f -> :sswitch_1
        0x7643c6b5 -> :sswitch_0
    .end sparse-switch

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
