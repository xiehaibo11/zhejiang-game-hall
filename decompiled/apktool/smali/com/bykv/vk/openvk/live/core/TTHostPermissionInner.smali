.class public Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/IHostPermission;


# instance fields
.field private rg:Lcom/bykv/vk/openvk/TTCustomController;


# direct methods
.method public constructor <init>(Lcom/bykv/vk/openvk/TTCustomController;)V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    if-nez p1, :cond_0

    .line 12
    new-instance p1, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$1;

    invoke-direct {p1, p0}, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$1;-><init>(Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;)V

    iput-object p1, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    goto :goto_0

    .line 15
    :cond_0
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    :goto_0
    return-void
.end method


# virtual methods
.method public alist()Z
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 55
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->alist()Z

    move-result v0

    return v0
.end method

.method public getDevImei()Ljava/lang/String;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 71
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->getDevImei()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getDevOaid()Ljava/lang/String;
    .locals 1

    .line 100
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 103
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->getDevOaid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getMacAddress()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 87
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->getMacAddress()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getTTLocation()Lcom/bytedance/android/live/base/api/LocationProvider;
    .locals 2

    .line 29
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 32
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->getTTLocation()Lcom/bykv/vk/openvk/LocationProvider;

    move-result-object v0

    if-nez v0, :cond_1

    return-object v1

    .line 36
    :cond_1
    new-instance v1, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;

    invoke-direct {v1, p0, v0}, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner$2;-><init>(Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;Lcom/bykv/vk/openvk/LocationProvider;)V

    return-object v1
.end method

.method public isCanUseLocation()Z
    .locals 1

    .line 21
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    .line 24
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->isCanUseLocation()Z

    move-result v0

    return v0
.end method

.method public isCanUsePhoneState()Z
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 63
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->isCanUsePhoneState()Z

    move-result v0

    return v0
.end method

.method public isCanUseWifiState()Z
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 79
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->isCanUseWifiState()Z

    move-result v0

    return v0
.end method

.method public isCanUseWriteExternal()Z
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/bykv/vk/openvk/live/core/TTHostPermissionInner;->rg:Lcom/bykv/vk/openvk/TTCustomController;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    .line 95
    :cond_0
    invoke-virtual {v0}, Lcom/bykv/vk/openvk/TTCustomController;->isCanUseWriteExternal()Z

    move-result v0

    return v0
.end method
