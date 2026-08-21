.class final Lcom/bykv/vk/openvk/TTVfSdk$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/CodeGroupRitObject;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/TTVfSdk;->getCodeGroupRit(JLcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;

.field final synthetic rg:J


# direct methods
.method constructor <init>(JLcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;)V
    .locals 0

    .line 129
    iput-wide p1, p0, Lcom/bykv/vk/openvk/TTVfSdk$1;->rg:J

    iput-object p3, p0, Lcom/bykv/vk/openvk/TTVfSdk$1;->df:Lcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getCodeGroupId()J
    .locals 2

    .line 132
    iget-wide v0, p0, Lcom/bykv/vk/openvk/TTVfSdk$1;->rg:J

    return-wide v0
.end method

.method public getListener()Lcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;
    .locals 1

    .line 137
    iget-object v0, p0, Lcom/bykv/vk/openvk/TTVfSdk$1;->df:Lcom/bykv/vk/openvk/TTCodeGroupRit$TTCodeGroupRitListener;

    return-object v0
.end method
