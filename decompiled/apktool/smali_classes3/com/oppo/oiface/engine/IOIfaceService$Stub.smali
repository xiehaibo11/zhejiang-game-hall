.class public abstract Lcom/oppo/oiface/engine/IOIfaceService$Stub;
.super Landroid/os/Binder;
.source "IOIfaceService.java"

# interfaces
.implements Lcom/oppo/oiface/engine/IOIfaceService;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/oppo/oiface/engine/IOIfaceService;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/oppo/oiface/engine/IOIfaceService$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.oppo.oiface.IOIfaceService"

.field static final TRANSACTION_REGISTER_ENGINE_CLIENT:I = 0x9a

.field static final TRANSACTION_getMemoryUsage:I = 0x6d

.field static final TRANSACTION_getOifaceversion:I = 0x69

.field static final TRANSACTION_onAppRegister:I = 0x68

.field static final TRANSACTION_updateGameEngineInfo:I = 0x9b


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.oppo.oiface.IOIfaceService"

    .line 19
    invoke-virtual {p0, p0, v0}, Lcom/oppo/oiface/engine/IOIfaceService$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/oppo/oiface/engine/IOIfaceService;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.oppo.oiface.IOIfaceService"

    .line 30
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 31
    instance-of v1, v0, Lcom/oppo/oiface/engine/IOIfaceService;

    if-eqz v1, :cond_1

    .line 32
    check-cast v0, Lcom/oppo/oiface/engine/IOIfaceService;

    return-object v0

    .line 34
    :cond_1
    new-instance v0, Lcom/oppo/oiface/engine/IOIfaceService$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/oppo/oiface/engine/IOIfaceService$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 44
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1
.end method
