.class public abstract Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;
.super Landroid/os/Binder;
.source "IServiceChannel.java"

# interfaces
.implements Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"

.field static final TRANSACTION_addService:I = 0x2

.field static final TRANSACTION_addServiceDelayed:I = 0x3

.field static final TRANSACTION_getPluginService:I = 0x5

.field static final TRANSACTION_getService:I = 0x1

.field static final TRANSACTION_onPluginServiceRefReleased:I = 0x6

.field static final TRANSACTION_removeService:I = 0x4


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 41
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"

    .line 42
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"

    .line 53
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 54
    instance-of v1, v0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    if-eqz v1, :cond_1

    .line 55
    check-cast v0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    return-object v0

    .line 57
    :cond_1
    new-instance v0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;
    .locals 1

    .line 305
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;)Z
    .locals 1

    .line 295
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 299
    sput-object p0, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 296
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
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const v0, 0x5f4e5446

    const/4 v1, 0x1

    const-string v2, "com.qihoo360.mobilesafe.svcmanager.IServiceChannel"

    if-eq p1, v0, :cond_0

    packed-switch p1, :pswitch_data_0

    .line 141
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 130
    :pswitch_0
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 132
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 134
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p2

    .line 135
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->onPluginServiceRefReleased(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 116
    :pswitch_1
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 118
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 120
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p4

    .line 122
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p2

    .line 123
    invoke-virtual {p0, p1, p4, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->getPluginService(Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;)Landroid/os/IBinder;

    move-result-object p1

    .line 124
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 125
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 107
    :pswitch_2
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 109
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 110
    invoke-virtual {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->removeService(Ljava/lang/String;)V

    .line 111
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 96
    :pswitch_3
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 98
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 100
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p2

    invoke-static {p2}, Lcom/qihoo360/replugin/IBinderGetter$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/IBinderGetter;

    move-result-object p2

    .line 101
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->addServiceDelayed(Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)V

    .line 102
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 85
    :pswitch_4
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 87
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 89
    invoke-virtual {p2}, Landroid/os/Parcel;->readStrongBinder()Landroid/os/IBinder;

    move-result-object p2

    .line 90
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->addService(Ljava/lang/String;Landroid/os/IBinder;)V

    .line 91
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    return v1

    .line 75
    :pswitch_5
    invoke-virtual {p2, v2}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 77
    invoke-virtual {p2}, Landroid/os/Parcel;->readString()Ljava/lang/String;

    move-result-object p1

    .line 78
    invoke-virtual {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    .line 79
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 80
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v1

    .line 70
    :cond_0
    invoke-virtual {p3, v2}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v1

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
