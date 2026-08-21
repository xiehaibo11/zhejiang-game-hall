.class final Lcom/bykv/vk/openvk/api/plugin/pt$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Ljava/util/List;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic rg:Ljava/util/List;


# direct methods
.method constructor <init>(Ljava/util/List;)V
    .locals 0

    .line 134
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/pt$2;->rg:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/pt$2;->rg:Ljava/util/List;

    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->df(Ljava/util/List;)V

    return-void
.end method
