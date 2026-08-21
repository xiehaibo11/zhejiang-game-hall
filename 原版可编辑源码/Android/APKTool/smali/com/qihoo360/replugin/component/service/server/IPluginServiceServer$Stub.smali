.class public abstract Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;
.super Landroid/os/Binder;
.source "IPluginServiceServer.java"

# interfaces
.implements Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

.field static final TRANSACTION_bindService:I = 0x3

.field static final TRANSACTION_dump:I = 0x5

.field static final TRANSACTION_startService:I = 0x1

.field static final TRANSACTION_stopService:I = 0x2

.field static final TRANSACTION_unbindService:I = 0x4


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 47
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 48
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    .line 59
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 60
    instance-of v1, v0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    if-eqz v1, :cond_1

    .line 61
    check-cast v0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    return-object v0

    .line 63
    :cond_1
    new-instance v0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 1

    .line 365
    sget-object v0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;)Z
    .locals 1

    .line 355
    sget-object v0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 359
    sput-object p0, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 356
    :cond_1
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string v0, "setDefaultImpl() called twice"

    invoke-direct {p0, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0
.end method


# virtual methods
.method public asBinder()Landroid/os/IBinder;
    .locals 0

    return-object p0
.end method

.method public onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x1

    const-string v2, "com.qihoo360.replugin.component.service.server.IPluginServiceServer"

    if-eq p1, v1, :cond_9

    const/4 v3, 0x2

    if-eq p1, v3, :cond_6

    const/4 v3, 0x3

    if-eq p1, v3, :cond_3

    const/4 v0, 0x4

    if-eq p1, v0, :cond_2

    const/4 v0, 0x5

    if-eq p1, v0, :cond_1

    const v0, 0x5f4e5446

    if-eq p1, v0, :cond_0

    .line 175
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 76
    :cond_0
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 167
    :cond_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 168
    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->dump()Ljava/lang/String;

    move-result-object p1

    .line 169
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 170
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    .line 157
    :cond_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 159
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/loader2/mgr/IServiceConnection$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/mgr/IServiceConnection;

    move-result-object p1

    .line 160
    invoke-virtual {p0, p1}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->unbindService(Lcom/qihoo360/loader2/mgr/IServiceConnection;)Z

    move-result p1

    .line 161
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 162
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 131
    :cond_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 133
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_4

    .line 134
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Intent;

    goto :goto_0

    :cond_4
    move-object p1, v0

    .line 140
    :goto_0
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p4

    invoke-static {p4}, Lcom/qihoo360/loader2/mgr/IServiceConnection$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/mgr/IServiceConnection;

    move-result-object p4

    .line 142
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v2

    .line 144
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result v3

    if-eqz v3, :cond_5

    .line 145
    sget-object v0, Landroid/os/Messenger;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {v0, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Landroid/os/Messenger;

    .line 150
    :cond_5
    invoke-virtual {p0, p1, p4, v2, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->bindService(Landroid/content/Intent;Lcom/qihoo360/loader2/mgr/IServiceConnection;ILandroid/os/Messenger;)I

    move-result p1

    .line 151
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 152
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 109
    :cond_6
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 111
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_7

    .line 112
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Intent;

    goto :goto_1

    :cond_7
    move-object p1, v0

    .line 118
    :goto_1
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_8

    .line 119
    sget-object p4, Landroid/os/Messenger;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Landroid/os/Messenger;

    .line 124
    :cond_8
    invoke-virtual {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->stopService(Landroid/content/Intent;Landroid/os/Messenger;)I

    move-result p1

    .line 125
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 126
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    return v1

    .line 81
    :cond_9
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 83
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p1

    if-eqz p1, :cond_a

    .line 84
    sget-object p1, Landroid/content/Intent;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p1, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Intent;

    goto :goto_2

    :cond_a
    move-object p1, v0

    .line 90
    :goto_2
    invoke-virtual {p2}, Landroid/os/Parcel;->readInt()I

    move-result p4

    if-eqz p4, :cond_b

    .line 91
    sget-object p4, Landroid/os/Messenger;->CREATOR:Landroid/os/Parcelable$Creator;

    invoke-interface {p4, p2}, Landroid/os/Parcelable$Creator;->createFromParcel(Landroid/os/Parcel;)Ljava/lang/Object;

    move-result-object p2

    move-object v0, p2

    check-cast v0, Landroid/os/Messenger;

    .line 96
    :cond_b
    invoke-virtual {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer$Stub;->startService(Landroid/content/Intent;Landroid/os/Messenger;)Landroid/content/ComponentName;

    move-result-object p1

    .line 97
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    if-eqz p1, :cond_c

    .line 99
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeInt(I)V

    .line 100
    invoke-virtual {p1, p3, v1}, Landroid/content/ComponentName;->writeToParcel(Landroid/os/Parcel;I)V

    goto :goto_3

    :cond_c
    const/4 p1, 0x0

    .line 103
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeInt(I)V

    :goto_3
    return v1
.end method
