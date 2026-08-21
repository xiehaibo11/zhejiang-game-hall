.class public Lcom/mbridge/msdk/mbjscommon/webEnvCheck/WebGLCheckjs;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "WebGLCheckjs.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method


# virtual methods
.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public webglState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 13
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "webgl"

    .line 14
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 15
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/controller/a;->c(I)V

    .line 16
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 18
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-void
.end method
