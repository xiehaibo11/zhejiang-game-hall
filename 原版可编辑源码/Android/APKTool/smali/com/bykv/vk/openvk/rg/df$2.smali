.class Lcom/bykv/vk/openvk/rg/df$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/rg/rg$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/rg/df;->rg(Lcom/bykv/vk/openvk/api/proto/EventListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/rg/df;

.field final synthetic rg:Lcom/bykv/vk/openvk/api/proto/EventListener;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/rg/df;Lcom/bykv/vk/openvk/api/proto/EventListener;)V
    .locals 0

    .line 190
    iput-object p1, p0, Lcom/bykv/vk/openvk/rg/df$2;->df:Lcom/bykv/vk/openvk/rg/df;

    iput-object p2, p0, Lcom/bykv/vk/openvk/rg/df$2;->rg:Lcom/bykv/vk/openvk/api/proto/EventListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df()V
    .locals 3

    .line 198
    iget-object v0, p0, Lcom/bykv/vk/openvk/rg/df$2;->rg:Lcom/bykv/vk/openvk/api/proto/EventListener;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/api/proto/EventListener;->onEvent(ILcom/bykv/vk/openvk/api/proto/Result;)Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-void
.end method

.method public rg()V
    .locals 3

    .line 193
    iget-object v0, p0, Lcom/bykv/vk/openvk/rg/df$2;->rg:Lcom/bykv/vk/openvk/api/proto/EventListener;

    const/4 v1, 0x0

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/bykv/vk/openvk/api/proto/EventListener;->onEvent(ILcom/bykv/vk/openvk/api/proto/Result;)Lcom/bykv/vk/openvk/api/proto/ValueSet;

    return-void
.end method
