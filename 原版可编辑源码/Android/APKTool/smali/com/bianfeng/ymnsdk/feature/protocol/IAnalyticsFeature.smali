.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/IAnalyticsFeature;
.super Ljava/lang/Object;
.source "IAnalyticsFeature.java"


# virtual methods
.method public abstract logError(Ljava/lang/String;Ljava/lang/String;)V
.end method

.method public abstract logEvent(Ljava/lang/String;)V
.end method

.method public abstract logEvent(Ljava/lang/String;Ljava/util/Map;)V
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

.method public abstract logTimedEventBegin(Ljava/lang/String;)V
.end method

.method public abstract logTimedEventEnd(Ljava/lang/String;)V
.end method

.method public abstract setCaptureUncaughtException(Z)V
.end method

.method public abstract setSessionContinueMillis(I)V
.end method

.method public abstract startSession()V
.end method

.method public abstract stopSession()V
.end method
