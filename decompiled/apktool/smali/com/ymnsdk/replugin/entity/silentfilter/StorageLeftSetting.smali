.class public Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;
.super Ljava/lang/Object;
.source "StorageLeftSetting.java"


# instance fields
.field when_apk:I

.field when_patch:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getWhen_apk()I
    .locals 1

    .line 12
    iget v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->when_apk:I

    return v0
.end method

.method public getWhen_patch()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->when_patch:I

    return v0
.end method

.method public setWhen_apk(I)V
    .locals 0

    .line 16
    iput p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->when_apk:I

    return-void
.end method

.method public setWhen_patch(I)V
    .locals 0

    .line 24
    iput p1, p0, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->when_patch:I

    return-void
.end method
