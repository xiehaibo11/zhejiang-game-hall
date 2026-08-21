.class public final enum Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;
.super Ljava/lang/Enum;
.source "ManifestParser.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

.field public static final enum INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

.field public static final TAG:Ljava/lang/String; = "ms-parser"


# instance fields
.field private mActivityActionPluginsMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private mPluginActivityInfoMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;>;"
        }
    .end annotation
.end field

.field private mPluginReceiverInfoMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;>;"
        }
    .end annotation
.end field

.field private mPluginServiceInfoMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;>;"
        }
    .end annotation
.end field

.field private mServiceActionPluginsMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 47
    new-instance v0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    const/4 v1, 0x0

    const-string v2, "INS"

    invoke-direct {v0, v2, v1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    const/4 v2, 0x1

    new-array v2, v2, [Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    aput-object v0, v2, v1

    .line 46
    sput-object v2, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->$VALUES:[Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 46
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 56
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginActivityInfoMap:Ljava/util/Map;

    .line 57
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginServiceInfoMap:Ljava/util/Map;

    .line 58
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginReceiverInfoMap:Ljava/util/Map;

    .line 65
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mActivityActionPluginsMap:Ljava/util/Map;

    .line 66
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mServiceActionPluginsMap:Ljava/util/Map;

    return-void
.end method

.method private doFillActionPlugins(Ljava/lang/String;Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;>;)V"
        }
    .end annotation

    if-eqz p3, :cond_3

    .line 137
    iget-object v0, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    if-nez v0, :cond_0

    goto :goto_1

    .line 141
    :cond_0
    iget-object p2, p2, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_1
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/content/IntentFilter;

    .line 142
    invoke-virtual {v0}, Landroid/content/IntentFilter;->actionsIterator()Ljava/util/Iterator;

    move-result-object v0

    .line 143
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 144
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 145
    invoke-interface {p3, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Set;

    if-nez v2, :cond_2

    .line 147
    new-instance v2, Ljava/util/HashSet;

    invoke-direct {v2}, Ljava/util/HashSet;-><init>()V

    .line 148
    invoke-interface {p3, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 150
    :cond_2
    invoke-interface {v2, p1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    :goto_1
    return-void
.end method

.method private doFillFilters(Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;Ljava/util/Map;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;)V"
        }
    .end annotation

    .line 121
    iget-object v0, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->name:Ljava/lang/String;

    .line 122
    invoke-interface {p2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-nez v1, :cond_0

    .line 124
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 125
    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 127
    :cond_0
    iget-object p1, p1, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;->intentFilters:Ljava/util/List;

    if-eqz p1, :cond_1

    .line 129
    invoke-interface {v1, p1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    :cond_1
    return-void
.end method

.method private intentFilterStr(Ljava/util/List;)Ljava/lang/String;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 263
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "["

    .line 264
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 265
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_a

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/IntentFilter;

    const-string v2, "{"

    .line 266
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 268
    invoke-virtual {v1}, Landroid/content/IntentFilter;->countActions()I

    move-result v2

    if-lez v2, :cond_0

    const-string v3, "action:{"

    .line 270
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    :goto_1
    const-string v3, "}"

    const-string v4, ","

    if-lez v2, :cond_1

    add-int/lit8 v5, v2, -0x1

    .line 273
    invoke-virtual {v1, v5}, Landroid/content/IntentFilter;->getAction(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_0

    .line 276
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    .line 281
    :cond_1
    invoke-virtual {v1}, Landroid/content/IntentFilter;->countCategories()I

    move-result v2

    if-lez v2, :cond_2

    const-string v5, ", category:{"

    .line 283
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_2
    :goto_2
    if-lez v2, :cond_3

    add-int/lit8 v5, v2, -0x1

    .line 286
    invoke-virtual {v1, v5}, Landroid/content/IntentFilter;->getCategory(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_2

    .line 289
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_2

    .line 294
    :cond_3
    invoke-virtual {v1}, Landroid/content/IntentFilter;->countDataSchemes()I

    move-result v2

    if-lez v2, :cond_4

    const-string v5, ", data-scheme:{"

    .line 296
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    :goto_3
    if-lez v2, :cond_5

    add-int/lit8 v5, v2, -0x1

    .line 299
    invoke-virtual {v1, v5}, Landroid/content/IntentFilter;->getDataScheme(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_4

    .line 302
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_3

    .line 307
    :cond_5
    invoke-virtual {v1}, Landroid/content/IntentFilter;->countDataPaths()I

    move-result v2

    if-lez v2, :cond_6

    const-string v5, ", data-path:{"

    .line 309
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_6
    :goto_4
    if-lez v2, :cond_7

    add-int/lit8 v5, v2, -0x1

    .line 312
    invoke-virtual {v1, v5}, Landroid/content/IntentFilter;->getDataPath(I)Landroid/os/PatternMatcher;

    move-result-object v5

    .line 313
    invoke-virtual {v5}, Landroid/os/PatternMatcher;->getPath()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Landroid/os/PatternMatcher;->getType()I

    move-result v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_6

    .line 316
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_4

    .line 321
    :cond_7
    invoke-virtual {v1}, Landroid/content/IntentFilter;->countDataTypes()I

    move-result v2

    if-lez v2, :cond_8

    const-string v5, ", data-type:{"

    .line 323
    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_8
    :goto_5
    if-lez v2, :cond_9

    add-int/lit8 v5, v2, -0x1

    .line 326
    invoke-virtual {v1, v5}, Landroid/content/IntentFilter;->getDataType(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, -0x1

    if-nez v2, :cond_8

    .line 329
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_5

    :cond_9
    const-string v1, "}, "

    .line 333
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto/16 :goto_0

    :cond_a
    const-string p1, "]"

    .line 335
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 336
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private parseComponent(Ljava/lang/String;Ljava/util/Map;Ljava/util/List;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;",
            "Ljava/util/List<",
            "Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;",
            ">;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;>;)V"
        }
    .end annotation

    if-eqz p3, :cond_0

    .line 113
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p3

    :goto_0
    invoke-interface {p3}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;

    .line 114
    invoke-direct {p0, v0, p2}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->doFillFilters(Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;Ljava/util/Map;)V

    .line 115
    invoke-direct {p0, p1, v0, p4}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->doFillActionPlugins(Ljava/lang/String;Lcom/qihoo360/mobilesafe/parser/manifest/bean/ComponentBean;Ljava/util/Map;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private parseManifest(Ljava/lang/String;)Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;
    .locals 4

    .line 197
    new-instance v0, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;

    invoke-direct {v0}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;-><init>()V

    const/4 v1, 0x0

    .line 201
    :try_start_0
    invoke-static {}, Ljavax/xml/parsers/SAXParserFactory;->newInstance()Ljavax/xml/parsers/SAXParserFactory;

    move-result-object v2

    invoke-virtual {v2}, Ljavax/xml/parsers/SAXParserFactory;->newSAXParser()Ljavax/xml/parsers/SAXParser;

    move-result-object v2

    .line 202
    invoke-virtual {v2}, Ljavax/xml/parsers/SAXParser;->getXMLReader()Lorg/xml/sax/XMLReader;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 203
    :try_start_1
    invoke-interface {v2, v0}, Lorg/xml/sax/XMLReader;->setContentHandler(Lorg/xml/sax/ContentHandler;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v3

    goto :goto_0

    :catchall_1
    move-exception v3

    move-object v2, v1

    .line 205
    :goto_0
    invoke-virtual {v3}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    if-eqz v2, :cond_1

    .line 212
    :try_start_2
    new-instance v3, Ljava/io/StringReader;

    invoke-direct {v3, p1}, Ljava/io/StringReader;-><init>(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_3

    .line 213
    :try_start_3
    new-instance p1, Lorg/xml/sax/InputSource;

    invoke-direct {p1, v3}, Lorg/xml/sax/InputSource;-><init>(Ljava/io/Reader;)V

    invoke-interface {v2, p1}, Lorg/xml/sax/XMLReader;->parse(Lorg/xml/sax/InputSource;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 218
    invoke-virtual {v3}, Ljava/io/StringReader;->close()V

    goto :goto_3

    :catchall_2
    move-exception p1

    move-object v1, v3

    goto :goto_2

    :catchall_3
    move-exception p1

    .line 215
    :goto_2
    :try_start_4
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    if-eqz v1, :cond_1

    .line 218
    invoke-virtual {v1}, Ljava/io/StringReader;->close()V

    goto :goto_3

    :catchall_4
    move-exception p1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/io/StringReader;->close()V

    :cond_0
    throw p1

    :cond_1
    :goto_3
    return-object v0
.end method

.method private printFilters(Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;)V"
        }
    .end annotation

    .line 231
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->isEmpty()Z

    move-result v0

    const-string v1, "ms-parser"

    if-nez v0, :cond_0

    const-string v0, "\n\u6253\u5370 Activity - IntentFilter"

    .line 232
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 234
    :cond_0
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    const-string v2, "; val:"

    const-string v3, "key:"

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 235
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/List;

    .line 236
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, v4}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->intentFilterStr(Ljava/util/List;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 239
    :cond_1
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "\n\u6253\u5370 Service - IntentFilter"

    .line 240
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 242
    :cond_2
    invoke-interface {p2}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_1
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;

    .line 243
    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    .line 244
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, v0}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->intentFilterStr(Ljava/util/List;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    .line 247
    :cond_3
    invoke-interface {p3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_4

    const-string p1, "\n\u6253\u5370 Receiver - IntentFilter"

    .line 248
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 250
    :cond_4
    invoke-interface {p3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_2
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/util/Map$Entry;

    .line 251
    invoke-interface {p2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/util/List;

    .line 252
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {p2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/String;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0, p3}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->intentFilterStr(Ljava/util/List;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    :cond_5
    return-void
.end method

.method private putToMap(Ljava/util/Map;Ljava/util/Map;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;>;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ")V"
        }
    .end annotation

    .line 96
    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 97
    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;
    .locals 1

    .line 46
    const-class v0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    return-object p0
.end method

.method public static values()[Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;
    .locals 1

    .line 46
    sget-object v0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->$VALUES:[Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {v0}, [Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    return-object v0
.end method


# virtual methods
.method public getActivityFilterMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;"
        }
    .end annotation

    .line 178
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginActivityInfoMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public getPluginsByActionWhenStartActivity(Ljava/lang/String;)Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 163
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mActivityActionPluginsMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Set;

    return-object p1
.end method

.method public getPluginsByActionWhenStartService(Ljava/lang/String;)Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 174
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mServiceActionPluginsMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Set;

    return-object p1
.end method

.method public getReceiverFilterMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;"
        }
    .end annotation

    .line 186
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginReceiverInfoMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public getServiceFilterMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/content/IntentFilter;",
            ">;>;"
        }
    .end annotation

    .line 182
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginServiceInfoMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public parse(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;)V
    .locals 5

    .line 75
    invoke-direct {p0, p2}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->parseManifest(Ljava/lang/String;)Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;

    move-result-object p2

    .line 77
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 78
    iget-object v1, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginActivityInfoMap:Ljava/util/Map;

    invoke-direct {p0, v1, v0, p1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->putToMap(Ljava/util/Map;Ljava/util/Map;Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 79
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->getActivities()Ljava/util/List;

    move-result-object v2

    iget-object v3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mActivityActionPluginsMap:Ljava/util/Map;

    invoke-direct {p0, v1, v0, v2, v3}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->parseComponent(Ljava/lang/String;Ljava/util/Map;Ljava/util/List;Ljava/util/Map;)V

    .line 81
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 82
    iget-object v2, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginServiceInfoMap:Ljava/util/Map;

    invoke-direct {p0, v2, v1, p1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->putToMap(Ljava/util/Map;Ljava/util/Map;Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 83
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->getServices()Ljava/util/List;

    move-result-object v3

    iget-object v4, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mServiceActionPluginsMap:Ljava/util/Map;

    invoke-direct {p0, v2, v1, v3, v4}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->parseComponent(Ljava/lang/String;Ljava/util/Map;Ljava/util/List;Ljava/util/Map;)V

    .line 85
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    .line 86
    iget-object v3, p0, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->mPluginReceiverInfoMap:Ljava/util/Map;

    invoke-direct {p0, v3, v2, p1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->putToMap(Ljava/util/Map;Ljava/util/Map;Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 87
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2}, Lcom/qihoo360/mobilesafe/parser/manifest/XmlHandler;->getReceivers()Ljava/util/List;

    move-result-object p2

    const/4 v3, 0x0

    invoke-direct {p0, p1, v2, p2, v3}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->parseComponent(Ljava/lang/String;Ljava/util/Map;Ljava/util/List;Ljava/util/Map;)V

    .line 90
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 91
    invoke-direct {p0, v0, v1, v2}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->printFilters(Ljava/util/Map;Ljava/util/Map;Ljava/util/Map;)V

    :cond_0
    return-void
.end method
