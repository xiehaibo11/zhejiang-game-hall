.class Lcom/bykv/vk/openvk/api/plugin/fw$rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/api/plugin/fw;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "rg"
.end annotation


# instance fields
.field private rg:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V
    .locals 0

    .line 72
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 73
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/fw$rg;->rg:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    return-void
.end method


# virtual methods
.method public fail(ILjava/lang/String;)V
    .locals 2

    .line 85
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw$rg;->rg:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    if-eqz v0, :cond_0

    .line 86
    invoke-interface {v0, p1, p2}, Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;->fail(ILjava/lang/String;)V

    const-wide/16 v0, 0x0

    .line 87
    invoke-static {p1, p2, v0, v1}, Lcom/bykv/vk/openvk/api/plugin/pt;->df(ILjava/lang/String;J)V

    :cond_0
    return-void
.end method

.method public success()V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw$rg;->rg:Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;

    if-eqz v0, :cond_0

    .line 78
    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;->success()V

    .line 80
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg()V

    return-void
.end method
