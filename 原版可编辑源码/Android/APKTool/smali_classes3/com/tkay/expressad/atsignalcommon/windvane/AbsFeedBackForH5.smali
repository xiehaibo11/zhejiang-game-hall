.class public abstract Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;
.super Lcom/tkay/expressad/atsignalcommon/windvane/l;


# static fields
.field public static final a:Ljava/lang/String; = "onFeedbackAlertStatusNotify"

.field public static final b:Ljava/lang/String; = "status"

.field public static final c:I = 0x1

.field public static final d:I = 0x2

.field private static i:I = 0x0

.field private static j:I = 0x1


# instance fields
.field private h:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/l;-><init>()V

    const-string v0, "AbsFeedBackForH5"

    .line 16
    iput-object v0, p0, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->h:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 95
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 96
    sget v2, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->j:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 97
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 98
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 99
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 101
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public callbackSuccess(Ljava/lang/Object;)V
    .locals 3

    .line 82
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 83
    sget v2, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->i:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 84
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 85
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 86
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v0, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 88
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 89
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public callbackSuccessWithData(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 3

    .line 107
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 108
    sget v2, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->i:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 109
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 110
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 111
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p2

    .line 113
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 114
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 19

    const-string v0, ""

    .line 42
    :try_start_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 44
    new-instance v1, Lorg/json/JSONObject;

    move-object/from16 v2, p2

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v2, "width"

    const/4 v3, -0x1

    .line 45
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string v4, "height"

    .line 46
    invoke-virtual {v1, v4, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "radius"

    const/16 v6, 0x14

    .line 47
    invoke-virtual {v1, v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string v6, "left"

    .line 48
    invoke-virtual {v1, v6, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string v7, "top"

    .line 49
    invoke-virtual {v1, v7, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string v7, "opacity"

    const-wide/high16 v8, 0x3ff0000000000000L    # 1.0

    .line 50
    invoke-virtual {v1, v7, v8, v9}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v7

    const-string v9, "fontColor"

    .line 51
    invoke-virtual {v1, v9, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    const-string v9, "bgColor"

    .line 52
    invoke-virtual {v1, v9, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v18

    const-string v9, "key"

    .line 53
    invoke-virtual {v1, v9, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 54
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v1

    int-to-float v6, v6

    int-to-float v3, v3

    double-to-float v7, v7

    .line 1127
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v10

    .line 1128
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 1129
    invoke-static {v0, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v11

    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v12

    int-to-float v1, v2

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v13

    int-to-float v1, v4

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v14

    int-to-float v1, v5

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v15

    move/from16 v16, v7

    invoke-virtual/range {v10 .. v18}, Lcom/tkay/expressad/foundation/f/a/a;->a(IIIIIFLjava/lang/String;Ljava/lang/String;)V

    .line 56
    :cond_0
    invoke-virtual/range {p0 .. p1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 58
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v2, p0

    move-object/from16 v3, p1

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 59
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 11

    .line 26
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 27
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 28
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    const/4 v2, 0x1

    .line 29
    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v3, "key"

    const-string v4, ""

    .line 30
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 31
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v5

    if-ne p2, v2, :cond_0

    const/16 p2, 0x8

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    iget-object v8, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1115
    invoke-virtual {v5, v6}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    .line 1116
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->c()Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1118
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/foundation/f/a/a;->a(I)V

    if-nez p2, :cond_1

    .line 1120
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v7

    const/4 v9, 0x0

    const/4 v10, 0x0

    invoke-virtual/range {v5 .. v10}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Landroid/content/Context;Landroid/view/ViewGroup;Landroid/view/ViewGroup$LayoutParams;Lcom/tkay/expressad/foundation/f/a;)V

    .line 33
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 35
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 36
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 65
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 67
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    const/4 v1, 0x1

    .line 68
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v2, "key"

    const-string v3, ""

    .line 69
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 70
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v2

    .line 1181
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/f/a/a;

    move-result-object v0

    if-ne p2, v1, :cond_0

    .line 1183
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->b()V

    goto :goto_0

    .line 1185
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/a/a;->a()V

    .line 72
    :cond_1
    :goto_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 74
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 75
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public getCacheKey(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 120
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/c/a;->a()Lcom/tkay/expressad/atsignalcommon/c/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 122
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 123
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public startShake(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const-string v0, ""

    .line 129
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 130
    move-object v1, p1

    check-cast v1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 131
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "deviceMotionUpdateInterval"

    const/4 v3, 0x1

    .line 132
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    const-string p2, "oldCache"

    .line 133
    invoke-virtual {v2, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v3, "cache"

    .line 134
    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 135
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/c/a;->a()Lcom/tkay/expressad/atsignalcommon/c/a;

    move-result-object v2

    iget-object v1, v1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v2, p1, v1, p2, v0}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 139
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 140
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public stopShake(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 146
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 147
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 148
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "cache"

    const-string v2, ""

    .line 149
    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 150
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/c/a;->a()Lcom/tkay/expressad/atsignalcommon/c/a;

    move-result-object v1

    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1, p1, v0, p2}, Lcom/tkay/expressad/atsignalcommon/c/a;->a(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;Ljava/lang/String;)V

    .line 152
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 154
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 155
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method
