.class public interface abstract Lcom/bianfeng/ymnsdk/feature/protocol/ISocialFeature;
.super Ljava/lang/Object;
.source "ISocialFeature.java"


# virtual methods
.method public abstract showAchievements()V
.end method

.method public abstract showLeaderboard(Ljava/lang/String;)V
.end method

.method public abstract signIn()V
.end method

.method public abstract signOut()V
.end method

.method public abstract submitScore(Ljava/lang/String;J)V
.end method

.method public abstract unlockAchievement(Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method
