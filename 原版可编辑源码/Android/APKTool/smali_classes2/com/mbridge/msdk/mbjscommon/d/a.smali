.class public final Lcom/mbridge/msdk/mbjscommon/d/a;
.super Ljava/lang/Object;
.source "ShakeCacheManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/mbjscommon/d/a$a;
    }
.end annotation


# static fields
.field private static b:I = 0x0

.field private static c:I = 0x1


# instance fields
.field private a:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "ShakeCacheManager"

    .line 24
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->a:Ljava/lang/String;

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/mbjscommon/d/a$1;)V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/d/a;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/mbjscommon/d/a;
    .locals 1

    .line 37
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/d/a$a;->a:Lcom/mbridge/msdk/mbjscommon/d/a;

    return-object v0
.end method

.method private a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    .line 129
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 130
    sget v2, Lcom/mbridge/msdk/mbjscommon/d/a;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 131
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 132
    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 133
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/String;->getBytes()[B

    move-result-object p3

    const/4 v0, 0x2

    invoke-static {p3, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p1, p3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 135
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method private a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 3

    .line 116
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 117
    sget v2, Lcom/mbridge/msdk/mbjscommon/d/a;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 118
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 119
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 120
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    .line 122
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-direct {p0, p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V

    .line 123
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->a:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 3

    .line 42
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "cache"

    .line 43
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 44
    invoke-direct {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 46
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-direct {p0, p1, v0, v1}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V

    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;)V
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-virtual {v0, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-eqz p3, :cond_1

    const-string p3, ""

    .line 70
    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    const/4 v0, 0x0

    .line 71
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p2, :cond_0

    .line 2094
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const-string v0, "releaseShake"

    invoke-virtual {p2, p1, v0, p3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V

    .line 73
    :cond_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V

    goto :goto_0

    .line 76
    :cond_1
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string p3, "currentCache"

    .line 77
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-virtual {p2, p3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p3, "cache is exception"

    .line 78
    invoke-direct {p0, p1, p3, p2}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 80
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public final a(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 0

    .line 51
    iget-object p5, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5

    if-nez p5, :cond_0

    iget-object p5, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-virtual {p5, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p5

    if-nez p5, :cond_1

    :cond_0
    iget-object p5, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p5

    if-eqz p5, :cond_3

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_3

    .line 52
    :cond_1
    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    .line 53
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    .line 55
    :try_start_0
    new-instance p3, Lorg/json/JSONObject;

    invoke-direct {p3, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p4, "sid"

    .line 56
    invoke-virtual {p3, p4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->d:Ljava/lang/String;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    .line 58
    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    .line 61
    :cond_2
    :goto_0
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->f:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 1099
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V

    goto :goto_1

    .line 64
    :cond_3
    iget-object p3, p0, Lcom/mbridge/msdk/mbjscommon/d/a;->e:Ljava/lang/String;

    const-string p4, "cache had changed"

    if-eqz p2, :cond_4

    .line 1105
    :try_start_1
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string p5, "currentCache"

    .line 1106
    invoke-virtual {p2, p5, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1107
    invoke-direct {p0, p1, p4, p2}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 1109
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_4
    :goto_1
    return-void
.end method
