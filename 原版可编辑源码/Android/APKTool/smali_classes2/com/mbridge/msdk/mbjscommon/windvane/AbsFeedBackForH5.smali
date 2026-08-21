.class public abstract Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;
.super Lcom/mbridge/msdk/mbjscommon/windvane/j;
.source "AbsFeedBackForH5.java"


# static fields
.field private static FAILED:I = 0x1

.field private static SUCCESS:I = 0x0

.field public static final WEBVIEW_EVENT_DIALOG_METHOD_NAME:Ljava/lang/String; = "onFeedbackAlertStatusNotify"

.field public static final WEBVIEW_EVENT_DIALOG_PARAMS_KEY_STATUS:Ljava/lang/String; = "status"

.field public static final WEBVIEW_EVENT_METHOD_DIALOG_STATUS_DISMISS:I = 0x2

.field public static final WEBVIEW_EVENT_METHOD_DIALOG_STATUS_SHOWED:I = 0x1


# instance fields
.field private TAG:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/j;-><init>()V

    const-string v0, "AbsFeedBackForH5"

    .line 20
    iput-object v0, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->TAG:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 99
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 100
    sget v2, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->FAILED:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    .line 101
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 102
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 103
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
    move-exception p1

    .line 105
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->TAG:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public callbackSuccess(Ljava/lang/Object;)V
    .locals 3

    .line 86
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 87
    sget v2, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->SUCCESS:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 88
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 89
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 90
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v2, 0x2

    invoke-static {v0, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 92
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 93
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->TAG:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public callbackSuccessWithData(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 3

    .line 110
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 111
    sget v2, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->SUCCESS:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, ""

    .line 112
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 113
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 114
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

    .line 116
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 117
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->TAG:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public feedbackLayoutOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p1

    const-string v0, ""

    .line 44
    :try_start_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 45
    move-object v2, v1

    check-cast v2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 46
    new-instance v2, Lorg/json/JSONObject;

    move-object/from16 v3, p2

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v3, "width"

    const/4 v4, -0x1

    .line 47
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string v3, "height"

    .line 48
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string v3, "radius"

    const/16 v5, 0x14

    .line 49
    invoke-virtual {v2, v3, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    const-string v3, "left"

    .line 50
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string v5, "top"

    .line 51
    invoke-virtual {v2, v5, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string v5, "opacity"

    const-wide/high16 v10, 0x3ff0000000000000L    # 1.0

    .line 52
    invoke-virtual {v2, v5, v10, v11}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v5

    const-string v10, "fontSize"

    const-wide/high16 v11, -0x4010000000000000L    # -1.0

    .line 53
    invoke-virtual {v2, v10, v11, v12}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v10

    const-string v12, "padding"

    .line 54
    invoke-virtual {v2, v12}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v16

    const-string v12, "fontColor"

    .line 55
    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    const-string v12, "bgColor"

    .line 56
    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14

    const-string v12, "key"

    .line 57
    invoke-virtual {v2, v12, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 58
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v2

    int-to-float v3, v3

    int-to-float v4, v4

    double-to-float v12, v5

    double-to-float v15, v10

    move-object v5, v2

    move-object v6, v0

    move v10, v3

    move v11, v4

    invoke-virtual/range {v5 .. v16}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;IIIFFFLjava/lang/String;Ljava/lang/String;FLorg/json/JSONArray;)V

    .line 60
    :cond_0
    invoke-virtual/range {p0 .. p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object/from16 v3, p0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 62
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    move-object/from16 v3, p0

    invoke-virtual {v3, v1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 63
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public feedbackOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    .line 29
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 30
    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 31
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    const/4 v2, 0x1

    .line 32
    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v3, "key"

    const-string v4, ""

    .line 33
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 34
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v3

    if-ne p2, v2, :cond_0

    const/16 p2, 0x8

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v3, v1, p2, v0}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;ILandroid/view/ViewGroup;)V

    .line 36
    :cond_1
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 38
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 39
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public feedbackPopupOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 69
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 70
    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 71
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    const/4 v1, 0x1

    .line 72
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v1, "key"

    const-string v2, ""

    .line 73
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1, v0, p2}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;I)V

    .line 76
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 78
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 79
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public getCacheKey(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 124
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/d/a;->a()Lcom/mbridge/msdk/mbjscommon/d/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 126
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 127
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public startShake(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 10

    const-string v0, ""

    .line 132
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 133
    move-object v1, p1

    check-cast v1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 134
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "deviceMotionUpdateInterval"

    const/4 v3, 0x1

    .line 135
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    const-string p2, "oldCache"

    .line 136
    invoke-virtual {v2, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string p2, "cache"

    .line 137
    invoke-virtual {v2, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 138
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/d/a;->a()Lcom/mbridge/msdk/mbjscommon/d/a;

    move-result-object v4

    iget-object v6, v1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-object v5, p1

    invoke-virtual/range {v4 .. v9}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Ljava/lang/String;I)V

    .line 140
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 142
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 143
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public stopShake(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 149
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 150
    move-object v0, p1

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 151
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "cache"

    const-string v2, ""

    .line 152
    invoke-virtual {v1, p2, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 153
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/d/a;->a()Lcom/mbridge/msdk/mbjscommon/d/a;

    move-result-object v1

    iget-object v0, v0, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1, p1, v0, p2}, Lcom/mbridge/msdk/mbjscommon/d/a;->a(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;)V

    .line 155
    :cond_0
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackSuccess(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 157
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsFeedBackForH5;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 158
    invoke-virtual {p2}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
