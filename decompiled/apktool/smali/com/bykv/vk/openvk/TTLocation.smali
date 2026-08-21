.class public Lcom/bykv/vk/openvk/TTLocation;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/LocationProvider;


# instance fields
.field private df:D

.field private rg:D


# direct methods
.method public constructor <init>(DD)V
    .locals 2

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    .line 8
    iput-wide v0, p0, Lcom/bykv/vk/openvk/TTLocation;->rg:D

    .line 9
    iput-wide v0, p0, Lcom/bykv/vk/openvk/TTLocation;->df:D

    .line 16
    iput-wide p1, p0, Lcom/bykv/vk/openvk/TTLocation;->rg:D

    .line 17
    iput-wide p3, p0, Lcom/bykv/vk/openvk/TTLocation;->df:D

    return-void
.end method


# virtual methods
.method public getLatitude()D
    .locals 2

    .line 21
    iget-wide v0, p0, Lcom/bykv/vk/openvk/TTLocation;->rg:D

    return-wide v0
.end method

.method public getLongitude()D
    .locals 2

    .line 29
    iget-wide v0, p0, Lcom/bykv/vk/openvk/TTLocation;->df:D

    return-wide v0
.end method

.method public setLatitude(D)V
    .locals 0

    .line 25
    iput-wide p1, p0, Lcom/bykv/vk/openvk/TTLocation;->rg:D

    return-void
.end method

.method public setLongitude(D)V
    .locals 0

    .line 33
    iput-wide p1, p0, Lcom/bykv/vk/openvk/TTLocation;->df:D

    return-void
.end method
