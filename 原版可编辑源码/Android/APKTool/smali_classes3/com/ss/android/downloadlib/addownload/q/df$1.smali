.class Lcom/ss/android/downloadlib/addownload/q/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/rg/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/q/df;->rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/addownload/q/q;

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/q/df;

.field final synthetic rg:Lcom/ss/android/downloadad/api/rg/df;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/q/df;Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/q/q;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->q:Lcom/ss/android/downloadlib/addownload/q/df;

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->df:Lcom/ss/android/downloadlib/addownload/q/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df()V
    .locals 4

    const/4 v0, 0x0

    .line 76
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/q/df;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/q;

    .line 77
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "pause_optimise_type"

    const-string v2, "download_percent"

    .line 79
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pause_optimise_action"

    const-string v2, "cancel"

    .line 80
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 82
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 84
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v3, "pause_optimise"

    invoke-virtual {v1, v3, v0, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 85
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->df:Lcom/ss/android/downloadlib/addownload/q/q;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void
.end method

.method public rg()V
    .locals 4

    const/4 v0, 0x0

    .line 62
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/q/df;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)Lcom/ss/android/downloadlib/addownload/rg/q;

    .line 63
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "pause_optimise_type"

    const-string v2, "download_percent"

    .line 65
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "pause_optimise_action"

    const-string v2, "confirm"

    .line 66
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 68
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 70
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/q/df$1;->rg:Lcom/ss/android/downloadad/api/rg/df;

    const-string v3, "pause_optimise"

    invoke-virtual {v1, v3, v0, v2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method
