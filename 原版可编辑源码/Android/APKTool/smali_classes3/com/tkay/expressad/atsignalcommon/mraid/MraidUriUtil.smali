.class public Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;
.super Ljava/lang/Object;


# static fields
.field private static volatile a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static b:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 20
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    .line 21
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->b:Ljava/util/ArrayList;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Landroid/net/Uri;)Ljava/util/Set;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/net/Uri;",
            ")",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 63
    invoke-virtual {p0}, Landroid/net/Uri;->getEncodedQuery()Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_0

    .line 65
    invoke-static {}, Ljava/util/Collections;->emptySet()Ljava/util/Set;

    move-result-object p0

    return-object p0

    .line 68
    :cond_0
    new-instance v0, Ljava/util/LinkedHashSet;

    invoke-direct {v0}, Ljava/util/LinkedHashSet;-><init>()V

    const/4 v1, 0x0

    :cond_1
    const/16 v2, 0x26

    .line 71
    invoke-virtual {p0, v2, v1}, Ljava/lang/String;->indexOf(II)I

    move-result v2

    const/4 v3, -0x1

    if-ne v2, v3, :cond_2

    .line 72
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    :cond_2
    const/16 v4, 0x3d

    .line 74
    invoke-virtual {p0, v4, v1}, Ljava/lang/String;->indexOf(II)I

    move-result v4

    if-gt v4, v2, :cond_3

    if-ne v4, v3, :cond_4

    :cond_3
    move v4, v2

    .line 79
    :cond_4
    invoke-virtual {p0, v1, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    .line 80
    invoke-static {v1}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v2, 0x1

    .line 82
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    if-lt v1, v2, :cond_1

    .line 84
    invoke-static {v0}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object p0

    return-object p0
.end method

.method private static a()V
    .locals 5

    .line 88
    const-class v0, Lcom/tkay/expressad/atsignalcommon/mraid/IMraidSignalCommunication;

    invoke-virtual {v0}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v0

    .line 89
    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 90
    sget-object v4, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->b:Ljava/util/ArrayList;

    invoke-virtual {v3}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v4, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 103
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 106
    :cond_0
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 107
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 109
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    .line 112
    :cond_1
    invoke-virtual {v0, p1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 113
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_2

    const-string v1, ","

    .line 114
    invoke-virtual {v0, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 115
    :cond_2
    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 117
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    return-void

    .line 120
    :cond_4
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static clearUnSupportMraidMethodMap()V
    .locals 1

    .line 125
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 126
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0}, Ljava/util/concurrent/ConcurrentHashMap;->clear()V

    :cond_0
    return-void
.end method

.method public static clearUnSupportMraidMethodMap(Ljava/lang/String;)V
    .locals 1

    .line 130
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 133
    :cond_0
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static getMraidMethodContext(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;)Lcom/tkay/expressad/atsignalcommon/windvane/a;
    .locals 8

    .line 25
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 26
    invoke-virtual {p1}, Landroid/net/Uri;->getScheme()Ljava/lang/String;

    move-result-object v0

    .line 27
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_b

    const-string v1, "mraid"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 28
    new-instance v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    invoke-direct {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/a;-><init>()V

    const-string v1, "n+ztLkxpVTzBLkxgHN=="

    .line 29
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/j;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->d:Ljava/lang/String;

    .line 30
    invoke-virtual {p1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->e:Ljava/lang/String;

    .line 32
    sget-object v1, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->b:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v3, 0x0

    if-nez v1, :cond_0

    .line 1088
    const-class v1, Lcom/tkay/expressad/atsignalcommon/mraid/IMraidSignalCommunication;

    invoke-virtual {v1}, Ljava/lang/Class;->getDeclaredMethods()[Ljava/lang/reflect/Method;

    move-result-object v1

    .line 1089
    array-length v4, v1

    move v5, v3

    :goto_0
    if-ge v5, v4, :cond_0

    aget-object v6, v1, v5

    .line 1090
    sget-object v7, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->b:Ljava/util/ArrayList;

    invoke-virtual {v6}, Ljava/lang/reflect/Method;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v7, v6}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 36
    :cond_0
    sget-object v1, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->b:Ljava/util/ArrayList;

    iget-object v4, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_4

    if-eqz p0, :cond_4

    .line 37
    invoke-virtual {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getCampaignId()Ljava/lang/String;

    move-result-object p1

    .line 38
    iget-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->e:Ljava/lang/String;

    .line 1103
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    .line 1106
    sget-object v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, p1}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 1107
    sget-object v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 1109
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 1112
    invoke-virtual {v3, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    .line 1113
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    if-lez v4, :cond_1

    const-string v4, ","

    .line 1114
    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1115
    :cond_1
    invoke-virtual {v3, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 1117
    sget-object v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 1120
    :cond_2
    sget-object v3, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v3, p1, v1}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 40
    :cond_3
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->e:Ljava/lang/String;

    invoke-virtual {p1, p0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireNativeMethodCompleteEvent(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 41
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->getInstance()Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;

    move-result-object p1

    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->e:Ljava/lang/String;

    const-string v1, "Specified command is not implemented"

    invoke-virtual {p1, p0, v0, v1}, Lcom/tkay/expressad/atsignalcommon/mraid/CallMraidJS;->fireErrorEvent(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    return-object v2

    .line 2063
    :cond_4
    invoke-virtual {p1}, Landroid/net/Uri;->getEncodedQuery()Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_5

    .line 2065
    invoke-static {}, Ljava/util/Collections;->emptySet()Ljava/util/Set;

    move-result-object p0

    goto :goto_2

    .line 2068
    :cond_5
    new-instance v1, Ljava/util/LinkedHashSet;

    invoke-direct {v1}, Ljava/util/LinkedHashSet;-><init>()V

    :cond_6
    const/16 v2, 0x26

    .line 2071
    invoke-virtual {p0, v2, v3}, Ljava/lang/String;->indexOf(II)I

    move-result v2

    const/4 v4, -0x1

    if-ne v2, v4, :cond_7

    .line 2072
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    :cond_7
    const/16 v5, 0x3d

    .line 2074
    invoke-virtual {p0, v5, v3}, Ljava/lang/String;->indexOf(II)I

    move-result v5

    if-gt v5, v2, :cond_8

    if-ne v5, v4, :cond_9

    :cond_8
    move v5, v2

    .line 2079
    :cond_9
    invoke-virtual {p0, v3, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    .line 2080
    invoke-static {v3}, Landroid/net/Uri;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v2, 0x1

    .line 2082
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    if-lt v3, v2, :cond_6

    .line 2084
    invoke-static {v1}, Ljava/util/Collections;->unmodifiableSet(Ljava/util/Set;)Ljava/util/Set;

    move-result-object p0

    .line 49
    :goto_2
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 50
    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_3
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_a

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 51
    invoke-virtual {p1, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_3

    .line 53
    :cond_a
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->f:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_4

    :catch_0
    move-exception p0

    .line 55
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_4
    return-object v0

    :cond_b
    return-object v2
.end method

.method public static getUnSupportMraidMethodString(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 95
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 96
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/mraid/MraidUriUtil;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p0}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method
