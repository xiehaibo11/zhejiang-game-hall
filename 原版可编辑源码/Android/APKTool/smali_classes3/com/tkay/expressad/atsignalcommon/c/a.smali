.class public final Lcom/tkay/expressad/atsignalcommon/c/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/atsignalcommon/c/a$a;
    }
.end annotation


# static fields
.field private static b:I = 0x0

.field private static c:I = 0x1


# instance fields
.field private a:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ShakeCacheManager"

    .line 16
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->a:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/c/a;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/atsignalcommon/c/a;
    .locals 1

    .line 29
    sget-object v0, Lcom/tkay/expressad/atsignalcommon/c/a$a;->a:Lcom/tkay/expressad/atsignalcommon/c/a;

    return-object v0
.end method

.method private static a(Ljava/lang/Object;Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 97
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "currentCache"

    .line 98
    invoke-virtual {p1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 99
    invoke-static {p0, p3, p1}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 101
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 86
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    const-string v0, "releaseShake"

    const-string v1, ""

    invoke-virtual {p1, p0, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 78
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    .line 79
    iget-object p4, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->d:Ljava/lang/String;

    invoke-virtual {p3, p4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_0

    .line 80
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    .line 121
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 122
    sget v2, Lcom/tkay/expressad/atsignalcommon/c/a;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 123
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "data"

    .line 124
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 125
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p0, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 127
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 3

    .line 108
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 109
    sget v2, Lcom/tkay/expressad/atsignalcommon/c/a;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 110
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 111
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 112
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p0, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 114
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p0, v0, v1}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 115
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static b(Ljava/lang/Object;)V
    .locals 1

    .line 91
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p0, v0}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 3

    .line 34
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "cache"

    .line 35
    iget-object v2, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 36
    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 38
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;)V
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-virtual {v0, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_0

    const-string p3, ""

    .line 62
    iput-object p3, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    const/4 p3, 0x0

    .line 63
    iput-object p3, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->f:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 64
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 65
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V

    return-void

    .line 68
    :cond_0
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string p3, "currentCache"

    .line 69
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-virtual {p2, p3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p3, "cache is exception"

    .line 70
    invoke-static {p1, p3, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 72
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public final a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-virtual {v0, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_3

    .line 44
    :cond_1
    iput-object p4, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    .line 45
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    .line 47
    :try_start_0
    new-instance p3, Lorg/json/JSONObject;

    invoke-direct {p3, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p4, "sid"

    .line 48
    invoke-virtual {p3, p4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->d:Ljava/lang/String;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    .line 50
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    .line 53
    :cond_2
    :goto_0
    iput-object p2, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->f:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1091
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V

    return-void

    .line 56
    :cond_3
    iget-object p3, p0, Lcom/tkay/expressad/atsignalcommon/c/a;->e:Ljava/lang/String;

    const-string p4, "cache had changed"

    if-eqz p2, :cond_4

    .line 1097
    :try_start_1
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "currentCache"

    .line 1098
    invoke-virtual {p2, v0, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1099
    invoke-static {p1, p4, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    return-void

    :catch_1
    move-exception p1

    .line 1101
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_4
    return-void
.end method
