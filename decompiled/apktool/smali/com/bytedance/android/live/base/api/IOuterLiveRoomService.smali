.class public interface abstract Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;
.super Ljava/lang/Object;


# virtual methods
.method public varargs abstract callExpandMethod(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
.end method

.method public abstract enterRoomWithDraw()V
.end method

.method public abstract getLiveProvider()Lcom/bytedance/android/live/base/api/outer/ILiveProvider;
.end method

.method public abstract getPushService()Lcom/bytedance/android/live/base/api/push/ILivePush;
.end method

.method public abstract makeFollowListView(Landroid/content/Context;Landroid/os/Bundle;Lcom/bytedance/android/live/base/api/ILiveBorderAnimController;)Lcom/bytedance/android/live/base/api/IBaseHorizontalLiveListView;
.end method

.method public abstract setEventListener(Lcom/bytedance/android/live/base/api/IEventListener;)V
.end method

.method public abstract setNeedPersonalRecommend(Z)V
.end method
