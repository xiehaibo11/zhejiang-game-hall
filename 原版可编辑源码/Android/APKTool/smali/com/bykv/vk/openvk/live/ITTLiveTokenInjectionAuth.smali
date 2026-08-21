.class public interface abstract Lcom/bykv/vk/openvk/live/ITTLiveTokenInjectionAuth;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# virtual methods
.method public abstract getTokenInfo()Lcom/bykv/vk/openvk/live/TTLiveToken;
.end method

.method public abstract isLogin()Z
.end method

.method public abstract onTokenInvalid(Lcom/bykv/vk/openvk/live/TTLiveToken;Lcom/bykv/vk/openvk/live/TTLiveAuthCallback;Landroid/app/Activity;Ljava/util/Map;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/bykv/vk/openvk/live/TTLiveToken;",
            "Lcom/bykv/vk/openvk/live/TTLiveAuthCallback;",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation
.end method
