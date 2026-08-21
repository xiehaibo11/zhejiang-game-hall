.class Lcom/bykv/vk/openvk/live/core/df$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/live/TTLiveAuthCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/core/df;->onTokenInvalid(Lcom/bytedance/android/livehostapi/platform/TokenInfo;Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;Landroid/app/Activity;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/live/core/df;

.field final synthetic rg:Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/live/core/df;Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/core/df$1;->df:Lcom/bykv/vk/openvk/live/core/df;

    iput-object p2, p0, Lcom/bykv/vk/openvk/live/core/df$1;->rg:Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAuth(Lcom/bykv/vk/openvk/live/TTLiveToken;)V
    .locals 8

    .line 50
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/df$1;->rg:Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;

    new-instance v7, Lcom/bytedance/android/livehostapi/platform/TokenInfo;

    iget-object v2, p1, Lcom/bykv/vk/openvk/live/TTLiveToken;->name:Ljava/lang/String;

    iget-object v3, p1, Lcom/bykv/vk/openvk/live/TTLiveToken;->openId:Ljava/lang/String;

    iget-object v4, p1, Lcom/bykv/vk/openvk/live/TTLiveToken;->accessToken:Ljava/lang/String;

    iget-wide v5, p1, Lcom/bykv/vk/openvk/live/TTLiveToken;->expireAt:J

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/bytedance/android/livehostapi/platform/TokenInfo;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-interface {v0, v7}, Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;->onSuccess(Lcom/bytedance/android/livehostapi/platform/TokenInfo;)V

    return-void
.end method

.method public onFailed(Ljava/lang/Throwable;)V
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/df$1;->rg:Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;

    invoke-interface {v0, p1}, Lcom/bytedance/android/livehostapi/platform/TokenRefreshCallback;->onFailed(Ljava/lang/Throwable;)V

    return-void
.end method
