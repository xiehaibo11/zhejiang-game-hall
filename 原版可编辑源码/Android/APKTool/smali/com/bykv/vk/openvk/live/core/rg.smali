.class public Lcom/bykv/vk/openvk/live/core/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/ILiveHostActionParam;


# instance fields
.field private rg:Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/core/rg;->rg:Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;

    return-void
.end method


# virtual methods
.method public logEvent(ZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 21
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/rg;->rg:Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;

    if-eqz v0, :cond_0

    .line 22
    invoke-interface {v0, p1, p2, p3, p4}, Lcom/bykv/vk/openvk/live/core/ITTLiveHostAction;->logEvent(ZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    :cond_0
    return-void
.end method
