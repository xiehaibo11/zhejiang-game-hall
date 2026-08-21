.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IAdTrackingFeature;
.super Ljava/lang/Object;
.source "IAdTrackingFeature.java"


# virtual methods
.method public abstract onRegister(Ljava/lang/String;)V
.end method

.method public abstract trackEvent(Ljava/lang/String;)V
.end method

.method public abstract trackEvent(Ljava/lang/String;Ljava/util/Map;)V
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
