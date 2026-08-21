.class Lcom/bykv/vk/openvk/TTVfConfig$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/AdConfig$SdkInfo;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/TTVfConfig;->getSdkInfo()Lcom/bykv/vk/openvk/AdConfig$SdkInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/TTVfConfig;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/TTVfConfig;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/bykv/vk/openvk/TTVfConfig$1;->rg:Lcom/bykv/vk/openvk/TTVfConfig;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public isPlugin()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public pluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "com.bykv.vk"

    return-object v0
.end method

.method public sdkVersionCode()I
    .locals 1

    const/16 v0, 0x13fa

    return v0
.end method

.method public sdkVersionName()Ljava/lang/String;
    .locals 1

    const-string v0, "5.1.1.4"

    return-object v0
.end method
