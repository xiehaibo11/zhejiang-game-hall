.class public Lcom/tkay/expressad/atsignalcommon/webEnvCheck/WebGLCheckjs;
.super Lcom/tkay/expressad/atsignalcommon/windvane/l;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/l;-><init>()V

    return-void
.end method


# virtual methods
.method public webglState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 12
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "webgl"

    .line 13
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 18
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method
