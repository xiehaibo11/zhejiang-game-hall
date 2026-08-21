.class final Lcom/bykv/vk/openvk/live/df$rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTAdEvent;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/live/df;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "rg"
.end annotation


# instance fields
.field private df:Lcom/bykv/vk/openvk/api/proto/EventListener;

.field private rg:Lcom/bykv/vk/openvk/TTAdEvent;


# direct methods
.method private constructor <init>(Lcom/bykv/vk/openvk/TTAdEvent;)V
    .locals 0

    .line 77
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 78
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$rg;->rg:Lcom/bykv/vk/openvk/TTAdEvent;

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/TTAdEvent;Lcom/bykv/vk/openvk/live/df$1;)V
    .locals 0

    .line 72
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/TTAdEvent;)V

    return-void
.end method

.method private constructor <init>(Lcom/bykv/vk/openvk/api/proto/EventListener;)V
    .locals 0

    .line 81
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 82
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$rg;->df:Lcom/bykv/vk/openvk/api/proto/EventListener;

    return-void
.end method

.method synthetic constructor <init>(Lcom/bykv/vk/openvk/api/proto/EventListener;Lcom/bykv/vk/openvk/live/df$1;)V
    .locals 0

    .line 72
    invoke-direct {p0, p1}, Lcom/bykv/vk/openvk/live/df$rg;-><init>(Lcom/bykv/vk/openvk/api/proto/EventListener;)V

    return-void
.end method


# virtual methods
.method public onEvent(ILandroid/os/Bundle;)V
    .locals 3

    .line 87
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df$rg;->rg:Lcom/bykv/vk/openvk/TTAdEvent;

    if-eqz v0, :cond_0

    .line 88
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTAdEvent;->onEvent(ILandroid/os/Bundle;)V

    .line 90
    :cond_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df$rg;->df:Lcom/bykv/vk/openvk/api/proto/EventListener;

    if-eqz v0, :cond_1

    .line 91
    invoke-static {}, Lcom/bykv/vk/openvk/api/q;->rg()Lcom/bykv/vk/openvk/api/q;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1, p2}, Lcom/bykv/vk/openvk/api/q;->rg(ILjava/lang/Object;)Lcom/bykv/vk/openvk/api/q;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bykv/vk/openvk/api/q;->df()Lcom/bykv/vk/openvk/api/proto/ValueSet;

    move-result-object p2

    .line 92
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/df$rg;->df:Lcom/bykv/vk/openvk/api/proto/EventListener;

    invoke-static {}, Lcom/bykv/vk/openvk/api/df;->rg()Lcom/bykv/vk/openvk/api/df;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/bykv/vk/openvk/api/df;->rg(I)Lcom/bykv/vk/openvk/api/df;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Lcom/bykv/vk/openvk/api/df;->rg(Z)Lcom/bykv/vk/openvk/api/df;

    move-result-object v1

    invoke-virtual {v1, p2}, Lcom/bykv/vk/openvk/api/df;->rg(Lcom/bykv/vk/openvk/api/proto/ValueSet;)Lcom/bykv/vk/openvk/api/df;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bykv/vk/openvk/api/df;->df()Lcom/bykv/vk/openvk/api/proto/Result;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/api/proto/EventListener;->onEvent(ILcom/bykv/vk/openvk/api/proto/Result;)Lcom/bykv/vk/openvk/api/proto/ValueSet;

    :cond_1
    return-void
.end method
