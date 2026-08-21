.class public abstract Lcom/qihoo360/replugin/IBinderGetter$Stub;
.super Landroid/os/Binder;
.source "IBinderGetter.java"

# interfaces
.implements Lcom/qihoo360/replugin/IBinderGetter;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/IBinderGetter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "Stub"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;
    }
.end annotation


# static fields
.field private static final DESCRIPTOR:Ljava/lang/String; = "com.qihoo360.replugin.IBinderGetter"

.field static final TRANSACTION_get:I = 0x1


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Landroid/os/Binder;-><init>()V

    const-string v0, "com.qihoo360.replugin.IBinderGetter"

    .line 38
    invoke-virtual {p0, p0, v0}, Lcom/qihoo360/replugin/IBinderGetter$Stub;->attachInterface(Landroid/os/IInterface;Ljava/lang/String;)V

    return-void
.end method

.method public static asInterface(Landroid/os/IBinder;)Lcom/qihoo360/replugin/IBinderGetter;
    .locals 2

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "com.qihoo360.replugin.IBinderGetter"

    .line 49
    invoke-interface {p0, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 50
    instance-of v1, v0, Lcom/qihoo360/replugin/IBinderGetter;

    if-eqz v1, :cond_1

    .line 51
    check-cast v0, Lcom/qihoo360/replugin/IBinderGetter;

    return-object v0

    .line 53
    :cond_1
    new-instance v0, Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;-><init>(Landroid/os/IBinder;)V

    return-object v0
.end method

.method public static getDefaultImpl()Lcom/qihoo360/replugin/IBinderGetter;
    .locals 1

    .line 138
    sget-object v0, Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/IBinderGetter;

    return-object v0
.end method

.method public static setDefaultImpl(Lcom/qihoo360/replugin/IBinderGetter;)Z
    .locals 1

    .line 128
    sget-object v0, Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/IBinderGetter;

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 132
    sput-object p0, Lcom/qihoo360/replugin/IBinderGetter$Stub$Proxy;->sDefaultImpl:Lcom/qihoo360/replugin/IBinderGetter;

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 129
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

    const/4 v0, 0x1

    const-string v1, "com.qihoo360.replugin.IBinderGetter"

    if-eq p1, v0, :cond_1

    const v2, 0x5f4e5446

    if-eq p1, v2, :cond_0

    .line 79
    invoke-super {p0, p1, p2, p3, p4}, Landroid/os/Binder;->onTransact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1

    .line 66
    :cond_0
    invoke-virtual {p3, v1}, Landroid/os/Parcel;->writeString(Ljava/lang/String;)V

    return v0

    .line 71
    :cond_1
    invoke-virtual {p2, v1}, Landroid/os/Parcel;->enforceInterface(Ljava/lang/String;)V

    .line 72
    invoke-virtual {p0}, Lcom/qihoo360/replugin/IBinderGetter$Stub;->get()Landroid/os/IBinder;

    move-result-object p1

    .line 73
    invoke-virtual {p3}, Landroid/os/Parcel;->writeNoException()V

    .line 74
    invoke-virtual {p3, p1}, Landroid/os/Parcel;->writeStrongBinder(Landroid/os/IBinder;)V

    return v0
.end method
