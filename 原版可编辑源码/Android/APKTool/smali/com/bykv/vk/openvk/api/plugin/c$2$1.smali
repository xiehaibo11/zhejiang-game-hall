.class Lcom/bykv/vk/openvk/api/plugin/c$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/c$2;->onPluginStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic q:Lcom/bykv/vk/openvk/api/plugin/c$2;

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/api/plugin/c$2;Ljava/lang/String;I)V
    .locals 0

    .line 208
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->q:Lcom/bykv/vk/openvk/api/plugin/c$2;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->rg:Ljava/lang/String;

    iput p3, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->df:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 211
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->q:Lcom/bykv/vk/openvk/api/plugin/c$2;

    iget-object v0, v0, Lcom/bykv/vk/openvk/api/plugin/c$2;->rg:Lcom/bykv/vk/openvk/api/plugin/c;

    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->rg:Ljava/lang/String;

    iget v2, p0, Lcom/bykv/vk/openvk/api/plugin/c$2$1;->df:I

    invoke-static {v0, v1, v2}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Ljava/lang/String;I)V

    return-void
.end method
