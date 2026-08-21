.class public interface abstract Lcom/bytedance/android/live/saas/middleware/applog/IAppLog;
.super Ljava/lang/Object;


# virtual methods
.method public abstract addCommonParams(Ljava/lang/String;Z)Ljava/lang/String;
.end method

.method public abstract addCustomHeader(Ljava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract getAbSdkVersion()Ljava/lang/String;
.end method

.method public abstract getDid()Ljava/lang/String;
.end method

.method public abstract getInstallId()Ljava/lang/String;
.end method

.method public abstract isTob()Z
.end method

.method public abstract log(Ljava/lang/String;Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract observeIdChanged(Lcom/bytedance/android/live/saas/middleware/applog/IdChangedCallback;)V
.end method

.method public abstract onEventV3(Ljava/lang/String;Lorg/json/JSONObject;)V
.end method

.method public abstract putCommonParams(Ljava/util/Map;Z)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation
.end method

.method public abstract tryWaitDeviceInit()V
.end method
