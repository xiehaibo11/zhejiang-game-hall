.class Lcom/ss/android/downloadlib/addownload/compliance/pp;
.super Ljava/lang/Object;


# direct methods
.method public static df(Ljava/lang/String;J)V
    .locals 1

    const/4 v0, 0x0

    .line 25
    invoke-static {p0, v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(Ljava/lang/String;Lorg/json/JSONObject;J)V

    return-void
.end method

.method public static rg(IJ)V
    .locals 2

    .line 51
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "error_code"

    .line 53
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 55
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 57
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    .line 58
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object p1

    const-string p2, "lp_compliance_error"

    .line 57
    invoke-virtual {p0, p2, v0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static rg(ILcom/ss/android/downloadlib/addownload/model/pp;)V
    .locals 2

    .line 41
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "error_code"

    .line 43
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 45
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 47
    :goto_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string v1, "lp_compliance_error"

    invoke-virtual {p0, v1, v0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static rg(Ljava/lang/String;J)V
    .locals 1

    .line 17
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object p1

    .line 18
    invoke-virtual {p1}, Lcom/ss/android/downloadlib/addownload/model/pp;->re()Z

    move-result p2

    if-nez p2, :cond_0

    .line 19
    iget-object p2, p1, Lcom/ss/android/downloadlib/addownload/model/pp;->q:Lcom/ss/android/download/api/download/DownloadEventConfig;

    invoke-interface {p2, p0}, Lcom/ss/android/download/api/download/DownloadEventConfig;->setRefer(Ljava/lang/String;)V

    .line 20
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p0

    const-string p2, "lp_app_dialog_click"

    invoke-virtual {p0, p2, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    :cond_0
    return-void
.end method

.method public static rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;)V
    .locals 1

    .line 33
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method

.method public static rg(Ljava/lang/String;Lorg/json/JSONObject;J)V
    .locals 2

    .line 29
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v1

    invoke-virtual {v1, p2, p3}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object p2

    invoke-virtual {v0, p0, p1, p2}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lorg/json/JSONObject;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void
.end method
