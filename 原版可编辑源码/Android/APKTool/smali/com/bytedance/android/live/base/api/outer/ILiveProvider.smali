.class public interface abstract Lcom/bytedance/android/live/base/api/outer/ILiveProvider;
.super Ljava/lang/Object;


# virtual methods
.method public abstract getIdentity()Ljava/lang/String;
.end method

.method public abstract getLiveView(Landroid/content/Context;ILjava/lang/String;ZLandroid/os/Bundle;)Lcom/bytedance/android/live/base/api/outer/ILiveView;
.end method

.method public abstract getRoomInfoList(III)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(III)",
            "Ljava/util/List<",
            "Lcom/bytedance/android/live/base/api/outer/data/RoomInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract startLive(Landroid/content/Context;ILjava/lang/String;Landroid/os/Bundle;)V
.end method
